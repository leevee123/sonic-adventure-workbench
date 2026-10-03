// DolRecomp output
#include "../generated.h"

static void loop_80033854(CPUState* ctx) {
label_80033854:
    ctx->downcount -= 5;
    // 80033854: or   r0, r4, r4
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[4];
    }

    ctx->pc = 0x80033858u;
    // 80033858: lhz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

    ctx->pc = 0x8003385Cu;
    // 8003385C: lhz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    // 80033860: cmplw   r4, r0
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    // 80033864: bc    4, 2, 0x80033854
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80033854u;
                return;
            }
            goto label_80033854;
        }
    }

    ctx->pc = 0x80033868u;
}

static void loop_800338BC(CPUState* ctx) {
label_800338BC:
    ctx->downcount -= 5;
    // 800338BC: or   r0, r4, r4
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[4];
    }

    ctx->pc = 0x800338C0u;
    // 800338C0: lhz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

    ctx->pc = 0x800338C4u;
    // 800338C4: lhz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    // 800338C8: cmplw   r4, r0
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    // 800338CC: bc    4, 2, 0x800338BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800338BCu;
                return;
            }
            goto label_800338BC;
        }
    }

    ctx->pc = 0x800338D0u;
}

static void loop_80033F28(CPUState* ctx) {
label_80033F28:
    ctx->downcount -= 9;
    ctx->pc = 0x80033F28u;
    // 80033F28: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80033F2Cu;
    // 80033F2C: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80033F30u;
    // 80033F30: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80033F34u;
    // 80033F34: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80033F38u;
    // 80033F38: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80033F3Cu;
    // 80033F3C: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80033F40u;
    // 80033F40: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80033F44u;
    // 80033F44: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 80033F48: bc    16, 0, 0x80033F28
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80033F28u;
                return;
            }
            goto label_80033F28;
        }
    }

    ctx->pc = 0x80033F4Cu;
}

static void loop_80033F58(CPUState* ctx) {
label_80033F58:
    ctx->downcount -= 2;
    ctx->pc = 0x80033F58u;
    // 80033F58: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 80033F5C: bc    16, 0, 0x80033F58
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80033F58u;
                return;
            }
            goto label_80033F58;
        }
    }

    ctx->pc = 0x80033F60u;
}

static void loop_80034638(CPUState* ctx) {
label_80034638:
    ctx->downcount -= 1;
    // 80034638: rlwinm r5, r5, 31, 1, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 31u) & 0x7FFFFFFFu;
    }

    // 8003463C: rlwinm. r0, r5, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    // 80034640: bc    12, 2, 0x80034638
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80034638u;
                return;
            }
            goto label_80034638;
        }
    }

    ctx->pc = 0x80034644u;
}

void func_800318A0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x800318A0u: goto label_800318A0;
    case 0x800318A4u: goto label_800318A4;
    case 0x800318A8u: goto label_800318A8;
    case 0x800318ACu: goto label_800318AC;
    case 0x800318B0u: goto label_800318B0;
    case 0x800318B4u: goto label_800318B4;
    case 0x800318B8u: goto label_800318B8;
    case 0x800318BCu: goto label_800318BC;
    case 0x800318C0u: goto label_800318C0;
    case 0x800318C4u: goto label_800318C4;
    case 0x800318C8u: goto label_800318C8;
    case 0x800318CCu: goto label_800318CC;
    case 0x800318D0u: goto label_800318D0;
    case 0x800318D4u: goto label_800318D4;
    case 0x800318D8u: goto label_800318D8;
    case 0x800318DCu: goto label_800318DC;
    case 0x800318E0u: goto label_800318E0;
    case 0x800318E4u: goto label_800318E4;
    case 0x800318E8u: goto label_800318E8;
    case 0x800318ECu: goto label_800318EC;
    case 0x800318F0u: goto label_800318F0;
    case 0x800318F4u: goto label_800318F4;
    case 0x800318F8u: goto label_800318F8;
    case 0x800318FCu: goto label_800318FC;
    case 0x80031900u: goto label_80031900;
    case 0x80031904u: goto label_80031904;
    case 0x80031908u: goto label_80031908;
    case 0x8003190Cu: goto label_8003190C;
    case 0x80031910u: goto label_80031910;
    case 0x80031914u: goto label_80031914;
    case 0x80031918u: goto label_80031918;
    case 0x8003191Cu: goto label_8003191C;
    case 0x80031920u: goto label_80031920;
    case 0x80031924u: goto label_80031924;
    case 0x80031928u: goto label_80031928;
    case 0x8003192Cu: goto label_8003192C;
    case 0x80031930u: goto label_80031930;
    case 0x80031934u: goto label_80031934;
    case 0x80031938u: goto label_80031938;
    case 0x8003193Cu: goto label_8003193C;
    case 0x80031940u: goto label_80031940;
    case 0x80031944u: goto label_80031944;
    case 0x80031948u: goto label_80031948;
    case 0x8003194Cu: goto label_8003194C;
    case 0x80031950u: goto label_80031950;
    case 0x80031954u: goto label_80031954;
    case 0x80031958u: goto label_80031958;
    case 0x8003195Cu: goto label_8003195C;
    case 0x80031960u: goto label_80031960;
    case 0x80031964u: goto label_80031964;
    case 0x80031968u: goto label_80031968;
    case 0x8003196Cu: goto label_8003196C;
    case 0x80031970u: goto label_80031970;
    case 0x80031974u: goto label_80031974;
    case 0x80031978u: goto label_80031978;
    case 0x8003197Cu: goto label_8003197C;
    case 0x80031980u: goto label_80031980;
    case 0x80031984u: goto label_80031984;
    case 0x80031988u: goto label_80031988;
    case 0x8003198Cu: goto label_8003198C;
    case 0x80031990u: goto label_80031990;
    case 0x80031994u: goto label_80031994;
    case 0x80031998u: goto label_80031998;
    case 0x8003199Cu: goto label_8003199C;
    case 0x800319A0u: goto label_800319A0;
    case 0x800319A4u: goto label_800319A4;
    case 0x800319A8u: goto label_800319A8;
    case 0x800319ACu: goto label_800319AC;
    case 0x800319B0u: goto label_800319B0;
    case 0x800319B4u: goto label_800319B4;
    case 0x800319B8u: goto label_800319B8;
    case 0x800319BCu: goto label_800319BC;
    case 0x800319C0u: goto label_800319C0;
    case 0x800319C4u: goto label_800319C4;
    case 0x800319C8u: goto label_800319C8;
    case 0x800319CCu: goto label_800319CC;
    case 0x800319D0u: goto label_800319D0;
    case 0x800319D4u: goto label_800319D4;
    case 0x800319D8u: goto label_800319D8;
    case 0x800319DCu: goto label_800319DC;
    case 0x800319E0u: goto label_800319E0;
    case 0x800319E4u: goto label_800319E4;
    case 0x800319E8u: goto label_800319E8;
    case 0x800319ECu: goto label_800319EC;
    case 0x800319F0u: goto label_800319F0;
    case 0x800319F4u: goto label_800319F4;
    case 0x800319F8u: goto label_800319F8;
    case 0x800319FCu: goto label_800319FC;
    case 0x80031A00u: goto label_80031A00;
    case 0x80031A04u: goto label_80031A04;
    case 0x80031A08u: goto label_80031A08;
    case 0x80031A0Cu: goto label_80031A0C;
    case 0x80031A10u: goto label_80031A10;
    case 0x80031A14u: goto label_80031A14;
    case 0x80031A18u: goto label_80031A18;
    case 0x80031A1Cu: goto label_80031A1C;
    case 0x80031A20u: goto label_80031A20;
    case 0x80031A24u: goto label_80031A24;
    case 0x80031A28u: goto label_80031A28;
    case 0x80031A2Cu: goto label_80031A2C;
    case 0x80031A30u: goto label_80031A30;
    case 0x80031A34u: goto label_80031A34;
    case 0x80031A38u: goto label_80031A38;
    case 0x80031A3Cu: goto label_80031A3C;
    case 0x80031A40u: goto label_80031A40;
    case 0x80031A44u: goto label_80031A44;
    case 0x80031A48u: goto label_80031A48;
    case 0x80031A4Cu: goto label_80031A4C;
    case 0x80031A50u: goto label_80031A50;
    case 0x80031A54u: goto label_80031A54;
    case 0x80031A58u: goto label_80031A58;
    case 0x80031A5Cu: goto label_80031A5C;
    case 0x80031A60u: goto label_80031A60;
    case 0x80031A64u: goto label_80031A64;
    case 0x80031A68u: goto label_80031A68;
    case 0x80031A6Cu: goto label_80031A6C;
    case 0x80031A70u: goto label_80031A70;
    case 0x80031A74u: goto label_80031A74;
    case 0x80031A78u: goto label_80031A78;
    case 0x80031A7Cu: goto label_80031A7C;
    case 0x80031A80u: goto label_80031A80;
    case 0x80031A84u: goto label_80031A84;
    case 0x80031A88u: goto label_80031A88;
    case 0x80031A8Cu: goto label_80031A8C;
    case 0x80031A90u: goto label_80031A90;
    case 0x80031A94u: goto label_80031A94;
    case 0x80031A98u: goto label_80031A98;
    case 0x80031A9Cu: goto label_80031A9C;
    case 0x80031AA0u: goto label_80031AA0;
    case 0x80031AA4u: goto label_80031AA4;
    case 0x80031AA8u: goto label_80031AA8;
    case 0x80031AACu: goto label_80031AAC;
    case 0x80031AB0u: goto label_80031AB0;
    case 0x80031AB4u: goto label_80031AB4;
    case 0x80031AB8u: goto label_80031AB8;
    case 0x80031ABCu: goto label_80031ABC;
    case 0x80031AC0u: goto label_80031AC0;
    case 0x80031AC4u: goto label_80031AC4;
    case 0x80031AC8u: goto label_80031AC8;
    case 0x80031ACCu: goto label_80031ACC;
    case 0x80031AD0u: goto label_80031AD0;
    case 0x80031AD4u: goto label_80031AD4;
    case 0x80031AD8u: goto label_80031AD8;
    case 0x80031ADCu: goto label_80031ADC;
    case 0x80031AE0u: goto label_80031AE0;
    case 0x80031AE4u: goto label_80031AE4;
    case 0x80031AE8u: goto label_80031AE8;
    case 0x80031AECu: goto label_80031AEC;
    case 0x80031AF0u: goto label_80031AF0;
    case 0x80031AF4u: goto label_80031AF4;
    case 0x80031AF8u: goto label_80031AF8;
    case 0x80031AFCu: goto label_80031AFC;
    case 0x80031B00u: goto label_80031B00;
    case 0x80031B04u: goto label_80031B04;
    case 0x80031B08u: goto label_80031B08;
    case 0x80031B0Cu: goto label_80031B0C;
    case 0x80031B10u: goto label_80031B10;
    case 0x80031B14u: goto label_80031B14;
    case 0x80031B18u: goto label_80031B18;
    case 0x80031B1Cu: goto label_80031B1C;
    case 0x80031B20u: goto label_80031B20;
    case 0x80031B24u: goto label_80031B24;
    case 0x80031B28u: goto label_80031B28;
    case 0x80031B2Cu: goto label_80031B2C;
    case 0x80031B30u: goto label_80031B30;
    case 0x80031B34u: goto label_80031B34;
    case 0x80031B38u: goto label_80031B38;
    case 0x80031B3Cu: goto label_80031B3C;
    case 0x80031B40u: goto label_80031B40;
    case 0x80031B44u: goto label_80031B44;
    case 0x80031B48u: goto label_80031B48;
    case 0x80031B4Cu: goto label_80031B4C;
    case 0x80031B50u: goto label_80031B50;
    case 0x80031B54u: goto label_80031B54;
    case 0x80031B58u: goto label_80031B58;
    case 0x80031B5Cu: goto label_80031B5C;
    case 0x80031B60u: goto label_80031B60;
    case 0x80031B64u: goto label_80031B64;
    case 0x80031B68u: goto label_80031B68;
    case 0x80031B6Cu: goto label_80031B6C;
    case 0x80031B70u: goto label_80031B70;
    case 0x80031B74u: goto label_80031B74;
    case 0x80031B78u: goto label_80031B78;
    case 0x80031B7Cu: goto label_80031B7C;
    case 0x80031B80u: goto label_80031B80;
    case 0x80031B84u: goto label_80031B84;
    case 0x80031B88u: goto label_80031B88;
    case 0x80031B8Cu: goto label_80031B8C;
    case 0x80031B90u: goto label_80031B90;
    case 0x80031B94u: goto label_80031B94;
    case 0x80031B98u: goto label_80031B98;
    case 0x80031B9Cu: goto label_80031B9C;
    case 0x80031BA0u: goto label_80031BA0;
    case 0x80031BA4u: goto label_80031BA4;
    case 0x80031BA8u: goto label_80031BA8;
    case 0x80031BACu: goto label_80031BAC;
    case 0x80031BB0u: goto label_80031BB0;
    case 0x80031BB4u: goto label_80031BB4;
    case 0x80031BB8u: goto label_80031BB8;
    case 0x80031BBCu: goto label_80031BBC;
    case 0x80031BC0u: goto label_80031BC0;
    case 0x80031BC4u: goto label_80031BC4;
    case 0x80031BC8u: goto label_80031BC8;
    case 0x80031BCCu: goto label_80031BCC;
    case 0x80031BD0u: goto label_80031BD0;
    case 0x80031BD4u: goto label_80031BD4;
    case 0x80031BD8u: goto label_80031BD8;
    case 0x80031BDCu: goto label_80031BDC;
    case 0x80031BE0u: goto label_80031BE0;
    case 0x80031BE4u: goto label_80031BE4;
    case 0x80031BE8u: goto label_80031BE8;
    case 0x80031BECu: goto label_80031BEC;
    case 0x80031BF0u: goto label_80031BF0;
    case 0x80031BF4u: goto label_80031BF4;
    case 0x80031BF8u: goto label_80031BF8;
    case 0x80031BFCu: goto label_80031BFC;
    case 0x80031C00u: goto label_80031C00;
    case 0x80031C04u: goto label_80031C04;
    case 0x80031C08u: goto label_80031C08;
    case 0x80031C0Cu: goto label_80031C0C;
    case 0x80031C10u: goto label_80031C10;
    case 0x80031C14u: goto label_80031C14;
    case 0x80031C18u: goto label_80031C18;
    case 0x80031C1Cu: goto label_80031C1C;
    case 0x80031C20u: goto label_80031C20;
    case 0x80031C24u: goto label_80031C24;
    case 0x80031C28u: goto label_80031C28;
    case 0x80031C2Cu: goto label_80031C2C;
    case 0x80031C30u: goto label_80031C30;
    case 0x80031C34u: goto label_80031C34;
    case 0x80031C38u: goto label_80031C38;
    case 0x80031C3Cu: goto label_80031C3C;
    case 0x80031C40u: goto label_80031C40;
    case 0x80031C44u: goto label_80031C44;
    case 0x80031C48u: goto label_80031C48;
    case 0x80031C4Cu: goto label_80031C4C;
    case 0x80031C50u: goto label_80031C50;
    case 0x80031C54u: goto label_80031C54;
    case 0x80031C58u: goto label_80031C58;
    case 0x80031C5Cu: goto label_80031C5C;
    case 0x80031C60u: goto label_80031C60;
    case 0x80031C64u: goto label_80031C64;
    case 0x80031C68u: goto label_80031C68;
    case 0x80031C6Cu: goto label_80031C6C;
    case 0x80031C70u: goto label_80031C70;
    case 0x80031C74u: goto label_80031C74;
    case 0x80031C78u: goto label_80031C78;
    case 0x80031C7Cu: goto label_80031C7C;
    case 0x80031C80u: goto label_80031C80;
    case 0x80031C84u: goto label_80031C84;
    case 0x80031C88u: goto label_80031C88;
    case 0x80031C8Cu: goto label_80031C8C;
    case 0x80031C90u: goto label_80031C90;
    case 0x80031C94u: goto label_80031C94;
    case 0x80031C98u: goto label_80031C98;
    case 0x80031C9Cu: goto label_80031C9C;
    case 0x80031CA0u: goto label_80031CA0;
    case 0x80031CA4u: goto label_80031CA4;
    case 0x80031CA8u: goto label_80031CA8;
    case 0x80031CACu: goto label_80031CAC;
    case 0x80031CB0u: goto label_80031CB0;
    case 0x80031CB4u: goto label_80031CB4;
    case 0x80031CB8u: goto label_80031CB8;
    case 0x80031CBCu: goto label_80031CBC;
    case 0x80031CC0u: goto label_80031CC0;
    case 0x80031CC4u: goto label_80031CC4;
    case 0x80031CC8u: goto label_80031CC8;
    case 0x80031CCCu: goto label_80031CCC;
    case 0x80031CD0u: goto label_80031CD0;
    case 0x80031CD4u: goto label_80031CD4;
    case 0x80031CD8u: goto label_80031CD8;
    case 0x80031CDCu: goto label_80031CDC;
    case 0x80031CE0u: goto label_80031CE0;
    case 0x80031CE4u: goto label_80031CE4;
    case 0x80031CE8u: goto label_80031CE8;
    case 0x80031CECu: goto label_80031CEC;
    case 0x80031CF0u: goto label_80031CF0;
    case 0x80031CF4u: goto label_80031CF4;
    case 0x80031CF8u: goto label_80031CF8;
    case 0x80031CFCu: goto label_80031CFC;
    case 0x80031D00u: goto label_80031D00;
    case 0x80031D04u: goto label_80031D04;
    case 0x80031D08u: goto label_80031D08;
    case 0x80031D0Cu: goto label_80031D0C;
    case 0x80031D10u: goto label_80031D10;
    case 0x80031D14u: goto label_80031D14;
    case 0x80031D18u: goto label_80031D18;
    case 0x80031D1Cu: goto label_80031D1C;
    case 0x80031D20u: goto label_80031D20;
    case 0x80031D24u: goto label_80031D24;
    case 0x80031D28u: goto label_80031D28;
    case 0x80031D2Cu: goto label_80031D2C;
    case 0x80031D30u: goto label_80031D30;
    case 0x80031D34u: goto label_80031D34;
    case 0x80031D38u: goto label_80031D38;
    case 0x80031D3Cu: goto label_80031D3C;
    case 0x80031D40u: goto label_80031D40;
    case 0x80031D44u: goto label_80031D44;
    case 0x80031D48u: goto label_80031D48;
    case 0x80031D4Cu: goto label_80031D4C;
    case 0x80031D50u: goto label_80031D50;
    case 0x80031D54u: goto label_80031D54;
    case 0x80031D58u: goto label_80031D58;
    case 0x80031D5Cu: goto label_80031D5C;
    case 0x80031D60u: goto label_80031D60;
    case 0x80031D64u: goto label_80031D64;
    case 0x80031D68u: goto label_80031D68;
    case 0x80031D6Cu: goto label_80031D6C;
    case 0x80031D70u: goto label_80031D70;
    case 0x80031D74u: goto label_80031D74;
    case 0x80031D78u: goto label_80031D78;
    case 0x80031D7Cu: goto label_80031D7C;
    case 0x80031D80u: goto label_80031D80;
    case 0x80031D84u: goto label_80031D84;
    case 0x80031D88u: goto label_80031D88;
    case 0x80031D8Cu: goto label_80031D8C;
    case 0x80031D90u: goto label_80031D90;
    case 0x80031D94u: goto label_80031D94;
    case 0x80031D98u: goto label_80031D98;
    case 0x80031D9Cu: goto label_80031D9C;
    case 0x80031DA0u: goto label_80031DA0;
    case 0x80031DA4u: goto label_80031DA4;
    case 0x80031DA8u: goto label_80031DA8;
    case 0x80031DACu: goto label_80031DAC;
    case 0x80031DB0u: goto label_80031DB0;
    case 0x80031DB4u: goto label_80031DB4;
    case 0x80031DB8u: goto label_80031DB8;
    case 0x80031DBCu: goto label_80031DBC;
    case 0x80031DC0u: goto label_80031DC0;
    case 0x80031DC4u: goto label_80031DC4;
    case 0x80031DC8u: goto label_80031DC8;
    case 0x80031DCCu: goto label_80031DCC;
    case 0x80031DD0u: goto label_80031DD0;
    case 0x80031DD4u: goto label_80031DD4;
    case 0x80031DD8u: goto label_80031DD8;
    case 0x80031DDCu: goto label_80031DDC;
    case 0x80031DE0u: goto label_80031DE0;
    case 0x80031DE4u: goto label_80031DE4;
    case 0x80031DE8u: goto label_80031DE8;
    case 0x80031DECu: goto label_80031DEC;
    case 0x80031DF0u: goto label_80031DF0;
    case 0x80031DF4u: goto label_80031DF4;
    case 0x80031DF8u: goto label_80031DF8;
    case 0x80031DFCu: goto label_80031DFC;
    case 0x80031E00u: goto label_80031E00;
    case 0x80031E04u: goto label_80031E04;
    case 0x80031E08u: goto label_80031E08;
    case 0x80031E0Cu: goto label_80031E0C;
    case 0x80031E10u: goto label_80031E10;
    case 0x80031E14u: goto label_80031E14;
    case 0x80031E18u: goto label_80031E18;
    case 0x80031E1Cu: goto label_80031E1C;
    case 0x80031E20u: goto label_80031E20;
    case 0x80031E24u: goto label_80031E24;
    case 0x80031E28u: goto label_80031E28;
    case 0x80031E2Cu: goto label_80031E2C;
    case 0x80031E30u: goto label_80031E30;
    case 0x80031E34u: goto label_80031E34;
    case 0x80031E38u: goto label_80031E38;
    case 0x80031E3Cu: goto label_80031E3C;
    case 0x80031E40u: goto label_80031E40;
    case 0x80031E44u: goto label_80031E44;
    case 0x80031E48u: goto label_80031E48;
    case 0x80031E4Cu: goto label_80031E4C;
    case 0x80031E50u: goto label_80031E50;
    case 0x80031E54u: goto label_80031E54;
    case 0x80031E58u: goto label_80031E58;
    case 0x80031E5Cu: goto label_80031E5C;
    case 0x80031E60u: goto label_80031E60;
    case 0x80031E64u: goto label_80031E64;
    case 0x80031E68u: goto label_80031E68;
    case 0x80031E6Cu: goto label_80031E6C;
    case 0x80031E70u: goto label_80031E70;
    case 0x80031E74u: goto label_80031E74;
    case 0x80031E78u: goto label_80031E78;
    case 0x80031E7Cu: goto label_80031E7C;
    case 0x80031E80u: goto label_80031E80;
    case 0x80031E84u: goto label_80031E84;
    case 0x80031E88u: goto label_80031E88;
    case 0x80031E8Cu: goto label_80031E8C;
    case 0x80031E90u: goto label_80031E90;
    case 0x80031E94u: goto label_80031E94;
    case 0x80031E98u: goto label_80031E98;
    case 0x80031E9Cu: goto label_80031E9C;
    case 0x80031EA0u: goto label_80031EA0;
    case 0x80031EA4u: goto label_80031EA4;
    case 0x80031EA8u: goto label_80031EA8;
    case 0x80031EACu: goto label_80031EAC;
    case 0x80031EB0u: goto label_80031EB0;
    case 0x80031EB4u: goto label_80031EB4;
    case 0x80031EB8u: goto label_80031EB8;
    case 0x80031EBCu: goto label_80031EBC;
    case 0x80031EC0u: goto label_80031EC0;
    case 0x80031EC4u: goto label_80031EC4;
    case 0x80031EC8u: goto label_80031EC8;
    case 0x80031ECCu: goto label_80031ECC;
    case 0x80031ED0u: goto label_80031ED0;
    case 0x80031ED4u: goto label_80031ED4;
    case 0x80031ED8u: goto label_80031ED8;
    case 0x80031EDCu: goto label_80031EDC;
    case 0x80031EE0u: goto label_80031EE0;
    case 0x80031EE4u: goto label_80031EE4;
    case 0x80031EE8u: goto label_80031EE8;
    case 0x80031EECu: goto label_80031EEC;
    case 0x80031EF0u: goto label_80031EF0;
    case 0x80031EF4u: goto label_80031EF4;
    case 0x80031EF8u: goto label_80031EF8;
    case 0x80031EFCu: goto label_80031EFC;
    case 0x80031F00u: goto label_80031F00;
    case 0x80031F04u: goto label_80031F04;
    case 0x80031F08u: goto label_80031F08;
    case 0x80031F0Cu: goto label_80031F0C;
    case 0x80031F10u: goto label_80031F10;
    case 0x80031F14u: goto label_80031F14;
    case 0x80031F18u: goto label_80031F18;
    case 0x80031F1Cu: goto label_80031F1C;
    case 0x80031F20u: goto label_80031F20;
    case 0x80031F24u: goto label_80031F24;
    case 0x80031F28u: goto label_80031F28;
    case 0x80031F2Cu: goto label_80031F2C;
    case 0x80031F30u: goto label_80031F30;
    case 0x80031F34u: goto label_80031F34;
    case 0x80031F38u: goto label_80031F38;
    case 0x80031F3Cu: goto label_80031F3C;
    case 0x80031F40u: goto label_80031F40;
    case 0x80031F44u: goto label_80031F44;
    case 0x80031F48u: goto label_80031F48;
    case 0x80031F4Cu: goto label_80031F4C;
    case 0x80031F50u: goto label_80031F50;
    case 0x80031F54u: goto label_80031F54;
    case 0x80031F58u: goto label_80031F58;
    case 0x80031F5Cu: goto label_80031F5C;
    case 0x80031F60u: goto label_80031F60;
    case 0x80031F64u: goto label_80031F64;
    case 0x80031F68u: goto label_80031F68;
    case 0x80031F6Cu: goto label_80031F6C;
    case 0x80031F70u: goto label_80031F70;
    case 0x80031F74u: goto label_80031F74;
    case 0x80031F78u: goto label_80031F78;
    case 0x80031F7Cu: goto label_80031F7C;
    case 0x80031F80u: goto label_80031F80;
    case 0x80031F84u: goto label_80031F84;
    case 0x80031F88u: goto label_80031F88;
    case 0x80031F8Cu: goto label_80031F8C;
    case 0x80031F90u: goto label_80031F90;
    case 0x80031F94u: goto label_80031F94;
    case 0x80031F98u: goto label_80031F98;
    case 0x80031F9Cu: goto label_80031F9C;
    case 0x80031FA0u: goto label_80031FA0;
    case 0x80031FA4u: goto label_80031FA4;
    case 0x80031FA8u: goto label_80031FA8;
    case 0x80031FACu: goto label_80031FAC;
    case 0x80031FB0u: goto label_80031FB0;
    case 0x80031FB4u: goto label_80031FB4;
    case 0x80031FB8u: goto label_80031FB8;
    case 0x80031FBCu: goto label_80031FBC;
    case 0x80031FC0u: goto label_80031FC0;
    case 0x80031FC4u: goto label_80031FC4;
    case 0x80031FC8u: goto label_80031FC8;
    case 0x80031FCCu: goto label_80031FCC;
    case 0x80031FD0u: goto label_80031FD0;
    case 0x80031FD4u: goto label_80031FD4;
    case 0x80031FD8u: goto label_80031FD8;
    case 0x80031FDCu: goto label_80031FDC;
    case 0x80031FE0u: goto label_80031FE0;
    case 0x80031FE4u: goto label_80031FE4;
    case 0x80031FE8u: goto label_80031FE8;
    case 0x80031FECu: goto label_80031FEC;
    case 0x80031FF0u: goto label_80031FF0;
    case 0x80031FF4u: goto label_80031FF4;
    case 0x80031FF8u: goto label_80031FF8;
    case 0x80031FFCu: goto label_80031FFC;
    case 0x80032000u: goto label_80032000;
    case 0x80032004u: goto label_80032004;
    case 0x80032008u: goto label_80032008;
    case 0x8003200Cu: goto label_8003200C;
    case 0x80032010u: goto label_80032010;
    case 0x80032014u: goto label_80032014;
    case 0x80032018u: goto label_80032018;
    case 0x8003201Cu: goto label_8003201C;
    case 0x80032020u: goto label_80032020;
    case 0x80032024u: goto label_80032024;
    case 0x80032028u: goto label_80032028;
    case 0x8003202Cu: goto label_8003202C;
    case 0x80032030u: goto label_80032030;
    case 0x80032034u: goto label_80032034;
    case 0x80032038u: goto label_80032038;
    case 0x8003203Cu: goto label_8003203C;
    case 0x80032040u: goto label_80032040;
    case 0x80032044u: goto label_80032044;
    case 0x80032048u: goto label_80032048;
    case 0x8003204Cu: goto label_8003204C;
    case 0x80032050u: goto label_80032050;
    case 0x80032054u: goto label_80032054;
    case 0x80032058u: goto label_80032058;
    case 0x8003205Cu: goto label_8003205C;
    case 0x80032060u: goto label_80032060;
    case 0x80032064u: goto label_80032064;
    case 0x80032068u: goto label_80032068;
    case 0x8003206Cu: goto label_8003206C;
    case 0x80032070u: goto label_80032070;
    case 0x80032074u: goto label_80032074;
    case 0x80032078u: goto label_80032078;
    case 0x8003207Cu: goto label_8003207C;
    case 0x80032080u: goto label_80032080;
    case 0x80032084u: goto label_80032084;
    case 0x80032088u: goto label_80032088;
    case 0x8003208Cu: goto label_8003208C;
    case 0x80032090u: goto label_80032090;
    case 0x80032094u: goto label_80032094;
    case 0x80032098u: goto label_80032098;
    case 0x8003209Cu: goto label_8003209C;
    case 0x800320A0u: goto label_800320A0;
    case 0x800320A4u: goto label_800320A4;
    case 0x800320A8u: goto label_800320A8;
    case 0x800320ACu: goto label_800320AC;
    case 0x800320B0u: goto label_800320B0;
    case 0x800320B4u: goto label_800320B4;
    case 0x800320B8u: goto label_800320B8;
    case 0x800320BCu: goto label_800320BC;
    case 0x800320C0u: goto label_800320C0;
    case 0x800320C4u: goto label_800320C4;
    case 0x800320C8u: goto label_800320C8;
    case 0x800320CCu: goto label_800320CC;
    case 0x800320D0u: goto label_800320D0;
    case 0x800320D4u: goto label_800320D4;
    case 0x800320D8u: goto label_800320D8;
    case 0x800320DCu: goto label_800320DC;
    case 0x800320E0u: goto label_800320E0;
    case 0x800320E4u: goto label_800320E4;
    case 0x800320E8u: goto label_800320E8;
    case 0x800320ECu: goto label_800320EC;
    case 0x800320F0u: goto label_800320F0;
    case 0x800320F4u: goto label_800320F4;
    case 0x800320F8u: goto label_800320F8;
    case 0x800320FCu: goto label_800320FC;
    case 0x80032100u: goto label_80032100;
    case 0x80032104u: goto label_80032104;
    case 0x80032108u: goto label_80032108;
    case 0x8003210Cu: goto label_8003210C;
    case 0x80032110u: goto label_80032110;
    case 0x80032114u: goto label_80032114;
    case 0x80032118u: goto label_80032118;
    case 0x8003211Cu: goto label_8003211C;
    case 0x80032120u: goto label_80032120;
    case 0x80032124u: goto label_80032124;
    case 0x80032128u: goto label_80032128;
    case 0x8003212Cu: goto label_8003212C;
    case 0x80032130u: goto label_80032130;
    case 0x80032134u: goto label_80032134;
    case 0x80032138u: goto label_80032138;
    case 0x8003213Cu: goto label_8003213C;
    case 0x80032140u: goto label_80032140;
    case 0x80032144u: goto label_80032144;
    case 0x80032148u: goto label_80032148;
    case 0x8003214Cu: goto label_8003214C;
    case 0x80032150u: goto label_80032150;
    case 0x80032154u: goto label_80032154;
    case 0x80032158u: goto label_80032158;
    case 0x8003215Cu: goto label_8003215C;
    case 0x80032160u: goto label_80032160;
    case 0x80032164u: goto label_80032164;
    case 0x80032168u: goto label_80032168;
    case 0x8003216Cu: goto label_8003216C;
    case 0x80032170u: goto label_80032170;
    case 0x80032174u: goto label_80032174;
    case 0x80032178u: goto label_80032178;
    case 0x8003217Cu: goto label_8003217C;
    case 0x80032180u: goto label_80032180;
    case 0x80032184u: goto label_80032184;
    case 0x80032188u: goto label_80032188;
    case 0x8003218Cu: goto label_8003218C;
    case 0x80032190u: goto label_80032190;
    case 0x80032194u: goto label_80032194;
    case 0x80032198u: goto label_80032198;
    case 0x8003219Cu: goto label_8003219C;
    case 0x800321A0u: goto label_800321A0;
    case 0x800321A4u: goto label_800321A4;
    case 0x800321A8u: goto label_800321A8;
    case 0x800321ACu: goto label_800321AC;
    case 0x800321B0u: goto label_800321B0;
    case 0x800321B4u: goto label_800321B4;
    case 0x800321B8u: goto label_800321B8;
    case 0x800321BCu: goto label_800321BC;
    case 0x800321C0u: goto label_800321C0;
    case 0x800321C4u: goto label_800321C4;
    case 0x800321C8u: goto label_800321C8;
    case 0x800321CCu: goto label_800321CC;
    case 0x800321D0u: goto label_800321D0;
    case 0x800321D4u: goto label_800321D4;
    case 0x800321D8u: goto label_800321D8;
    case 0x800321DCu: goto label_800321DC;
    case 0x800321E0u: goto label_800321E0;
    case 0x800321E4u: goto label_800321E4;
    case 0x800321E8u: goto label_800321E8;
    case 0x800321ECu: goto label_800321EC;
    case 0x800321F0u: goto label_800321F0;
    case 0x800321F4u: goto label_800321F4;
    case 0x800321F8u: goto label_800321F8;
    case 0x800321FCu: goto label_800321FC;
    case 0x80032200u: goto label_80032200;
    case 0x80032204u: goto label_80032204;
    case 0x80032208u: goto label_80032208;
    case 0x8003220Cu: goto label_8003220C;
    case 0x80032210u: goto label_80032210;
    case 0x80032214u: goto label_80032214;
    case 0x80032218u: goto label_80032218;
    case 0x8003221Cu: goto label_8003221C;
    case 0x80032220u: goto label_80032220;
    case 0x80032224u: goto label_80032224;
    case 0x80032228u: goto label_80032228;
    case 0x8003222Cu: goto label_8003222C;
    case 0x80032230u: goto label_80032230;
    case 0x80032234u: goto label_80032234;
    case 0x80032238u: goto label_80032238;
    case 0x8003223Cu: goto label_8003223C;
    case 0x80032240u: goto label_80032240;
    case 0x80032244u: goto label_80032244;
    case 0x80032248u: goto label_80032248;
    case 0x8003224Cu: goto label_8003224C;
    case 0x80032250u: goto label_80032250;
    case 0x80032254u: goto label_80032254;
    case 0x80032258u: goto label_80032258;
    case 0x8003225Cu: goto label_8003225C;
    case 0x80032260u: goto label_80032260;
    case 0x80032264u: goto label_80032264;
    case 0x80032268u: goto label_80032268;
    case 0x8003226Cu: goto label_8003226C;
    case 0x80032270u: goto label_80032270;
    case 0x80032274u: goto label_80032274;
    case 0x80032278u: goto label_80032278;
    case 0x8003227Cu: goto label_8003227C;
    case 0x80032280u: goto label_80032280;
    case 0x80032284u: goto label_80032284;
    case 0x80032288u: goto label_80032288;
    case 0x8003228Cu: goto label_8003228C;
    case 0x80032290u: goto label_80032290;
    case 0x80032294u: goto label_80032294;
    case 0x80032298u: goto label_80032298;
    case 0x8003229Cu: goto label_8003229C;
    case 0x800322A0u: goto label_800322A0;
    case 0x800322A4u: goto label_800322A4;
    case 0x800322A8u: goto label_800322A8;
    case 0x800322ACu: goto label_800322AC;
    case 0x800322B0u: goto label_800322B0;
    case 0x800322B4u: goto label_800322B4;
    case 0x800322B8u: goto label_800322B8;
    case 0x800322BCu: goto label_800322BC;
    case 0x800322C0u: goto label_800322C0;
    case 0x800322C4u: goto label_800322C4;
    case 0x800322C8u: goto label_800322C8;
    case 0x800322CCu: goto label_800322CC;
    case 0x800322D0u: goto label_800322D0;
    case 0x800322D4u: goto label_800322D4;
    case 0x800322D8u: goto label_800322D8;
    case 0x800322DCu: goto label_800322DC;
    case 0x800322E0u: goto label_800322E0;
    case 0x800322E4u: goto label_800322E4;
    case 0x800322E8u: goto label_800322E8;
    case 0x800322ECu: goto label_800322EC;
    case 0x800322F0u: goto label_800322F0;
    case 0x800322F4u: goto label_800322F4;
    case 0x800322F8u: goto label_800322F8;
    case 0x800322FCu: goto label_800322FC;
    case 0x80032300u: goto label_80032300;
    case 0x80032304u: goto label_80032304;
    case 0x80032308u: goto label_80032308;
    case 0x8003230Cu: goto label_8003230C;
    case 0x80032310u: goto label_80032310;
    case 0x80032314u: goto label_80032314;
    case 0x80032318u: goto label_80032318;
    case 0x8003231Cu: goto label_8003231C;
    case 0x80032320u: goto label_80032320;
    case 0x80032324u: goto label_80032324;
    case 0x80032328u: goto label_80032328;
    case 0x8003232Cu: goto label_8003232C;
    case 0x80032330u: goto label_80032330;
    case 0x80032334u: goto label_80032334;
    case 0x80032338u: goto label_80032338;
    case 0x8003233Cu: goto label_8003233C;
    case 0x80032340u: goto label_80032340;
    case 0x80032344u: goto label_80032344;
    case 0x80032348u: goto label_80032348;
    case 0x8003234Cu: goto label_8003234C;
    case 0x80032350u: goto label_80032350;
    case 0x80032354u: goto label_80032354;
    case 0x80032358u: goto label_80032358;
    case 0x8003235Cu: goto label_8003235C;
    case 0x80032360u: goto label_80032360;
    case 0x80032364u: goto label_80032364;
    case 0x80032368u: goto label_80032368;
    case 0x8003236Cu: goto label_8003236C;
    case 0x80032370u: goto label_80032370;
    case 0x80032374u: goto label_80032374;
    case 0x80032378u: goto label_80032378;
    case 0x8003237Cu: goto label_8003237C;
    case 0x80032380u: goto label_80032380;
    case 0x80032384u: goto label_80032384;
    case 0x80032388u: goto label_80032388;
    case 0x8003238Cu: goto label_8003238C;
    case 0x80032390u: goto label_80032390;
    case 0x80032394u: goto label_80032394;
    case 0x80032398u: goto label_80032398;
    case 0x8003239Cu: goto label_8003239C;
    case 0x800323A0u: goto label_800323A0;
    case 0x800323A4u: goto label_800323A4;
    case 0x800323A8u: goto label_800323A8;
    case 0x800323ACu: goto label_800323AC;
    case 0x800323B0u: goto label_800323B0;
    case 0x800323B4u: goto label_800323B4;
    case 0x800323B8u: goto label_800323B8;
    case 0x800323BCu: goto label_800323BC;
    case 0x800323C0u: goto label_800323C0;
    case 0x800323C4u: goto label_800323C4;
    case 0x800323C8u: goto label_800323C8;
    case 0x800323CCu: goto label_800323CC;
    case 0x800323D0u: goto label_800323D0;
    case 0x800323D4u: goto label_800323D4;
    case 0x800323D8u: goto label_800323D8;
    case 0x800323DCu: goto label_800323DC;
    case 0x800323E0u: goto label_800323E0;
    case 0x800323E4u: goto label_800323E4;
    case 0x800323E8u: goto label_800323E8;
    case 0x800323ECu: goto label_800323EC;
    case 0x800323F0u: goto label_800323F0;
    case 0x800323F4u: goto label_800323F4;
    case 0x800323F8u: goto label_800323F8;
    case 0x800323FCu: goto label_800323FC;
    case 0x80032400u: goto label_80032400;
    case 0x80032404u: goto label_80032404;
    case 0x80032408u: goto label_80032408;
    case 0x8003240Cu: goto label_8003240C;
    case 0x80032410u: goto label_80032410;
    case 0x80032414u: goto label_80032414;
    case 0x80032418u: goto label_80032418;
    case 0x8003241Cu: goto label_8003241C;
    case 0x80032420u: goto label_80032420;
    case 0x80032424u: goto label_80032424;
    case 0x80032428u: goto label_80032428;
    case 0x8003242Cu: goto label_8003242C;
    case 0x80032430u: goto label_80032430;
    case 0x80032434u: goto label_80032434;
    case 0x80032438u: goto label_80032438;
    case 0x8003243Cu: goto label_8003243C;
    case 0x80032440u: goto label_80032440;
    case 0x80032444u: goto label_80032444;
    case 0x80032448u: goto label_80032448;
    case 0x8003244Cu: goto label_8003244C;
    case 0x80032450u: goto label_80032450;
    case 0x80032454u: goto label_80032454;
    case 0x80032458u: goto label_80032458;
    case 0x8003245Cu: goto label_8003245C;
    case 0x80032460u: goto label_80032460;
    case 0x80032464u: goto label_80032464;
    case 0x80032468u: goto label_80032468;
    case 0x8003246Cu: goto label_8003246C;
    case 0x80032470u: goto label_80032470;
    case 0x80032474u: goto label_80032474;
    case 0x80032478u: goto label_80032478;
    case 0x8003247Cu: goto label_8003247C;
    case 0x80032480u: goto label_80032480;
    case 0x80032484u: goto label_80032484;
    case 0x80032488u: goto label_80032488;
    case 0x8003248Cu: goto label_8003248C;
    case 0x80032490u: goto label_80032490;
    case 0x80032494u: goto label_80032494;
    case 0x80032498u: goto label_80032498;
    case 0x8003249Cu: goto label_8003249C;
    case 0x800324A0u: goto label_800324A0;
    case 0x800324A4u: goto label_800324A4;
    case 0x800324A8u: goto label_800324A8;
    case 0x800324ACu: goto label_800324AC;
    case 0x800324B0u: goto label_800324B0;
    case 0x800324B4u: goto label_800324B4;
    case 0x800324B8u: goto label_800324B8;
    case 0x800324BCu: goto label_800324BC;
    case 0x800324C0u: goto label_800324C0;
    case 0x800324C4u: goto label_800324C4;
    case 0x800324C8u: goto label_800324C8;
    case 0x800324CCu: goto label_800324CC;
    case 0x800324D0u: goto label_800324D0;
    case 0x800324D4u: goto label_800324D4;
    case 0x800324D8u: goto label_800324D8;
    case 0x800324DCu: goto label_800324DC;
    case 0x800324E0u: goto label_800324E0;
    case 0x800324E4u: goto label_800324E4;
    case 0x800324E8u: goto label_800324E8;
    case 0x800324ECu: goto label_800324EC;
    case 0x800324F0u: goto label_800324F0;
    case 0x800324F4u: goto label_800324F4;
    case 0x800324F8u: goto label_800324F8;
    case 0x800324FCu: goto label_800324FC;
    case 0x80032500u: goto label_80032500;
    case 0x80032504u: goto label_80032504;
    case 0x80032508u: goto label_80032508;
    case 0x8003250Cu: goto label_8003250C;
    case 0x80032510u: goto label_80032510;
    case 0x80032514u: goto label_80032514;
    case 0x80032518u: goto label_80032518;
    case 0x8003251Cu: goto label_8003251C;
    case 0x80032520u: goto label_80032520;
    case 0x80032524u: goto label_80032524;
    case 0x80032528u: goto label_80032528;
    case 0x8003252Cu: goto label_8003252C;
    case 0x80032530u: goto label_80032530;
    case 0x80032534u: goto label_80032534;
    case 0x80032538u: goto label_80032538;
    case 0x8003253Cu: goto label_8003253C;
    case 0x80032540u: goto label_80032540;
    case 0x80032544u: goto label_80032544;
    case 0x80032548u: goto label_80032548;
    case 0x8003254Cu: goto label_8003254C;
    case 0x80032550u: goto label_80032550;
    case 0x80032554u: goto label_80032554;
    case 0x80032558u: goto label_80032558;
    case 0x8003255Cu: goto label_8003255C;
    case 0x80032560u: goto label_80032560;
    case 0x80032564u: goto label_80032564;
    case 0x80032568u: goto label_80032568;
    case 0x8003256Cu: goto label_8003256C;
    case 0x80032570u: goto label_80032570;
    case 0x80032574u: goto label_80032574;
    case 0x80032578u: goto label_80032578;
    case 0x8003257Cu: goto label_8003257C;
    case 0x80032580u: goto label_80032580;
    case 0x80032584u: goto label_80032584;
    case 0x80032588u: goto label_80032588;
    case 0x8003258Cu: goto label_8003258C;
    case 0x80032590u: goto label_80032590;
    case 0x80032594u: goto label_80032594;
    case 0x80032598u: goto label_80032598;
    case 0x8003259Cu: goto label_8003259C;
    case 0x800325A0u: goto label_800325A0;
    case 0x800325A4u: goto label_800325A4;
    case 0x800325A8u: goto label_800325A8;
    case 0x800325ACu: goto label_800325AC;
    case 0x800325B0u: goto label_800325B0;
    case 0x800325B4u: goto label_800325B4;
    case 0x800325B8u: goto label_800325B8;
    case 0x800325BCu: goto label_800325BC;
    case 0x800325C0u: goto label_800325C0;
    case 0x800325C4u: goto label_800325C4;
    case 0x800325C8u: goto label_800325C8;
    case 0x800325CCu: goto label_800325CC;
    case 0x800325D0u: goto label_800325D0;
    case 0x800325D4u: goto label_800325D4;
    case 0x800325D8u: goto label_800325D8;
    case 0x800325DCu: goto label_800325DC;
    case 0x800325E0u: goto label_800325E0;
    case 0x800325E4u: goto label_800325E4;
    case 0x800325E8u: goto label_800325E8;
    case 0x800325ECu: goto label_800325EC;
    case 0x800325F0u: goto label_800325F0;
    case 0x800325F4u: goto label_800325F4;
    case 0x800325F8u: goto label_800325F8;
    case 0x800325FCu: goto label_800325FC;
    case 0x80032600u: goto label_80032600;
    case 0x80032604u: goto label_80032604;
    case 0x80032608u: goto label_80032608;
    case 0x8003260Cu: goto label_8003260C;
    case 0x80032610u: goto label_80032610;
    case 0x80032614u: goto label_80032614;
    case 0x80032618u: goto label_80032618;
    case 0x8003261Cu: goto label_8003261C;
    case 0x80032620u: goto label_80032620;
    case 0x80032624u: goto label_80032624;
    case 0x80032628u: goto label_80032628;
    case 0x8003262Cu: goto label_8003262C;
    case 0x80032630u: goto label_80032630;
    case 0x80032634u: goto label_80032634;
    case 0x80032638u: goto label_80032638;
    case 0x8003263Cu: goto label_8003263C;
    case 0x80032640u: goto label_80032640;
    case 0x80032644u: goto label_80032644;
    case 0x80032648u: goto label_80032648;
    case 0x8003264Cu: goto label_8003264C;
    case 0x80032650u: goto label_80032650;
    case 0x80032654u: goto label_80032654;
    case 0x80032658u: goto label_80032658;
    case 0x8003265Cu: goto label_8003265C;
    case 0x80032660u: goto label_80032660;
    case 0x80032664u: goto label_80032664;
    case 0x80032668u: goto label_80032668;
    case 0x8003266Cu: goto label_8003266C;
    case 0x80032670u: goto label_80032670;
    case 0x80032674u: goto label_80032674;
    case 0x80032678u: goto label_80032678;
    case 0x8003267Cu: goto label_8003267C;
    case 0x80032680u: goto label_80032680;
    case 0x80032684u: goto label_80032684;
    case 0x80032688u: goto label_80032688;
    case 0x8003268Cu: goto label_8003268C;
    case 0x80032690u: goto label_80032690;
    case 0x80032694u: goto label_80032694;
    case 0x80032698u: goto label_80032698;
    case 0x8003269Cu: goto label_8003269C;
    case 0x800326A0u: goto label_800326A0;
    case 0x800326A4u: goto label_800326A4;
    case 0x800326A8u: goto label_800326A8;
    case 0x800326ACu: goto label_800326AC;
    case 0x800326B0u: goto label_800326B0;
    case 0x800326B4u: goto label_800326B4;
    case 0x800326B8u: goto label_800326B8;
    case 0x800326BCu: goto label_800326BC;
    case 0x800326C0u: goto label_800326C0;
    case 0x800326C4u: goto label_800326C4;
    case 0x800326C8u: goto label_800326C8;
    case 0x800326CCu: goto label_800326CC;
    case 0x800326D0u: goto label_800326D0;
    case 0x800326D4u: goto label_800326D4;
    case 0x800326D8u: goto label_800326D8;
    case 0x800326DCu: goto label_800326DC;
    case 0x800326E0u: goto label_800326E0;
    case 0x800326E4u: goto label_800326E4;
    case 0x800326E8u: goto label_800326E8;
    case 0x800326ECu: goto label_800326EC;
    case 0x800326F0u: goto label_800326F0;
    case 0x800326F4u: goto label_800326F4;
    case 0x800326F8u: goto label_800326F8;
    case 0x800326FCu: goto label_800326FC;
    case 0x80032700u: goto label_80032700;
    case 0x80032704u: goto label_80032704;
    case 0x80032708u: goto label_80032708;
    case 0x8003270Cu: goto label_8003270C;
    case 0x80032710u: goto label_80032710;
    case 0x80032714u: goto label_80032714;
    case 0x80032718u: goto label_80032718;
    case 0x8003271Cu: goto label_8003271C;
    case 0x80032720u: goto label_80032720;
    case 0x80032724u: goto label_80032724;
    case 0x80032728u: goto label_80032728;
    case 0x8003272Cu: goto label_8003272C;
    case 0x80032730u: goto label_80032730;
    case 0x80032734u: goto label_80032734;
    case 0x80032738u: goto label_80032738;
    case 0x8003273Cu: goto label_8003273C;
    case 0x80032740u: goto label_80032740;
    case 0x80032744u: goto label_80032744;
    case 0x80032748u: goto label_80032748;
    case 0x8003274Cu: goto label_8003274C;
    case 0x80032750u: goto label_80032750;
    case 0x80032754u: goto label_80032754;
    case 0x80032758u: goto label_80032758;
    case 0x8003275Cu: goto label_8003275C;
    case 0x80032760u: goto label_80032760;
    case 0x80032764u: goto label_80032764;
    case 0x80032768u: goto label_80032768;
    case 0x8003276Cu: goto label_8003276C;
    case 0x80032770u: goto label_80032770;
    case 0x80032774u: goto label_80032774;
    case 0x80032778u: goto label_80032778;
    case 0x8003277Cu: goto label_8003277C;
    case 0x80032780u: goto label_80032780;
    case 0x80032784u: goto label_80032784;
    case 0x80032788u: goto label_80032788;
    case 0x8003278Cu: goto label_8003278C;
    case 0x80032790u: goto label_80032790;
    case 0x80032794u: goto label_80032794;
    case 0x80032798u: goto label_80032798;
    case 0x8003279Cu: goto label_8003279C;
    case 0x800327A0u: goto label_800327A0;
    case 0x800327A4u: goto label_800327A4;
    case 0x800327A8u: goto label_800327A8;
    case 0x800327ACu: goto label_800327AC;
    case 0x800327B0u: goto label_800327B0;
    case 0x800327B4u: goto label_800327B4;
    case 0x800327B8u: goto label_800327B8;
    case 0x800327BCu: goto label_800327BC;
    case 0x800327C0u: goto label_800327C0;
    case 0x800327C4u: goto label_800327C4;
    case 0x800327C8u: goto label_800327C8;
    case 0x800327CCu: goto label_800327CC;
    case 0x800327D0u: goto label_800327D0;
    case 0x800327D4u: goto label_800327D4;
    case 0x800327D8u: goto label_800327D8;
    case 0x800327DCu: goto label_800327DC;
    case 0x800327E0u: goto label_800327E0;
    case 0x800327E4u: goto label_800327E4;
    case 0x800327E8u: goto label_800327E8;
    case 0x800327ECu: goto label_800327EC;
    case 0x800327F0u: goto label_800327F0;
    case 0x800327F4u: goto label_800327F4;
    case 0x800327F8u: goto label_800327F8;
    case 0x800327FCu: goto label_800327FC;
    case 0x80032800u: goto label_80032800;
    case 0x80032804u: goto label_80032804;
    case 0x80032808u: goto label_80032808;
    case 0x8003280Cu: goto label_8003280C;
    case 0x80032810u: goto label_80032810;
    case 0x80032814u: goto label_80032814;
    case 0x80032818u: goto label_80032818;
    case 0x8003281Cu: goto label_8003281C;
    case 0x80032820u: goto label_80032820;
    case 0x80032824u: goto label_80032824;
    case 0x80032828u: goto label_80032828;
    case 0x8003282Cu: goto label_8003282C;
    case 0x80032830u: goto label_80032830;
    case 0x80032834u: goto label_80032834;
    case 0x80032838u: goto label_80032838;
    case 0x8003283Cu: goto label_8003283C;
    case 0x80032840u: goto label_80032840;
    case 0x80032844u: goto label_80032844;
    case 0x80032848u: goto label_80032848;
    case 0x8003284Cu: goto label_8003284C;
    case 0x80032850u: goto label_80032850;
    case 0x80032854u: goto label_80032854;
    case 0x80032858u: goto label_80032858;
    case 0x8003285Cu: goto label_8003285C;
    case 0x80032860u: goto label_80032860;
    case 0x80032864u: goto label_80032864;
    case 0x80032868u: goto label_80032868;
    case 0x8003286Cu: goto label_8003286C;
    case 0x80032870u: goto label_80032870;
    case 0x80032874u: goto label_80032874;
    case 0x80032878u: goto label_80032878;
    case 0x8003287Cu: goto label_8003287C;
    case 0x80032880u: goto label_80032880;
    case 0x80032884u: goto label_80032884;
    case 0x80032888u: goto label_80032888;
    case 0x8003288Cu: goto label_8003288C;
    case 0x80032890u: goto label_80032890;
    case 0x80032894u: goto label_80032894;
    case 0x80032898u: goto label_80032898;
    case 0x8003289Cu: goto label_8003289C;
    case 0x800328A0u: goto label_800328A0;
    case 0x800328A4u: goto label_800328A4;
    case 0x800328A8u: goto label_800328A8;
    case 0x800328ACu: goto label_800328AC;
    case 0x800328B0u: goto label_800328B0;
    case 0x800328B4u: goto label_800328B4;
    case 0x800328B8u: goto label_800328B8;
    case 0x800328BCu: goto label_800328BC;
    case 0x800328C0u: goto label_800328C0;
    case 0x800328C4u: goto label_800328C4;
    case 0x800328C8u: goto label_800328C8;
    case 0x800328CCu: goto label_800328CC;
    case 0x800328D0u: goto label_800328D0;
    case 0x800328D4u: goto label_800328D4;
    case 0x800328D8u: goto label_800328D8;
    case 0x800328DCu: goto label_800328DC;
    case 0x800328E0u: goto label_800328E0;
    case 0x800328E4u: goto label_800328E4;
    case 0x800328E8u: goto label_800328E8;
    case 0x800328ECu: goto label_800328EC;
    case 0x800328F0u: goto label_800328F0;
    case 0x800328F4u: goto label_800328F4;
    case 0x800328F8u: goto label_800328F8;
    case 0x800328FCu: goto label_800328FC;
    case 0x80032900u: goto label_80032900;
    case 0x80032904u: goto label_80032904;
    case 0x80032908u: goto label_80032908;
    case 0x8003290Cu: goto label_8003290C;
    case 0x80032910u: goto label_80032910;
    case 0x80032914u: goto label_80032914;
    case 0x80032918u: goto label_80032918;
    case 0x8003291Cu: goto label_8003291C;
    case 0x80032920u: goto label_80032920;
    case 0x80032924u: goto label_80032924;
    case 0x80032928u: goto label_80032928;
    case 0x8003292Cu: goto label_8003292C;
    case 0x80032930u: goto label_80032930;
    case 0x80032934u: goto label_80032934;
    case 0x80032938u: goto label_80032938;
    case 0x8003293Cu: goto label_8003293C;
    case 0x80032940u: goto label_80032940;
    case 0x80032944u: goto label_80032944;
    case 0x80032948u: goto label_80032948;
    case 0x8003294Cu: goto label_8003294C;
    case 0x80032950u: goto label_80032950;
    case 0x80032954u: goto label_80032954;
    case 0x80032958u: goto label_80032958;
    case 0x8003295Cu: goto label_8003295C;
    case 0x80032960u: goto label_80032960;
    case 0x80032964u: goto label_80032964;
    case 0x80032968u: goto label_80032968;
    case 0x8003296Cu: goto label_8003296C;
    case 0x80032970u: goto label_80032970;
    case 0x80032974u: goto label_80032974;
    case 0x80032978u: goto label_80032978;
    case 0x8003297Cu: goto label_8003297C;
    case 0x80032980u: goto label_80032980;
    case 0x80032984u: goto label_80032984;
    case 0x80032988u: goto label_80032988;
    case 0x8003298Cu: goto label_8003298C;
    case 0x80032990u: goto label_80032990;
    case 0x80032994u: goto label_80032994;
    case 0x80032998u: goto label_80032998;
    case 0x8003299Cu: goto label_8003299C;
    case 0x800329A0u: goto label_800329A0;
    case 0x800329A4u: goto label_800329A4;
    case 0x800329A8u: goto label_800329A8;
    case 0x800329ACu: goto label_800329AC;
    case 0x800329B0u: goto label_800329B0;
    case 0x800329B4u: goto label_800329B4;
    case 0x800329B8u: goto label_800329B8;
    case 0x800329BCu: goto label_800329BC;
    case 0x800329C0u: goto label_800329C0;
    case 0x800329C4u: goto label_800329C4;
    case 0x800329C8u: goto label_800329C8;
    case 0x800329CCu: goto label_800329CC;
    case 0x800329D0u: goto label_800329D0;
    case 0x800329D4u: goto label_800329D4;
    case 0x800329D8u: goto label_800329D8;
    case 0x800329DCu: goto label_800329DC;
    case 0x800329E0u: goto label_800329E0;
    case 0x800329E4u: goto label_800329E4;
    case 0x800329E8u: goto label_800329E8;
    case 0x800329ECu: goto label_800329EC;
    case 0x800329F0u: goto label_800329F0;
    case 0x800329F4u: goto label_800329F4;
    case 0x800329F8u: goto label_800329F8;
    case 0x800329FCu: goto label_800329FC;
    case 0x80032A00u: goto label_80032A00;
    case 0x80032A04u: goto label_80032A04;
    case 0x80032A08u: goto label_80032A08;
    case 0x80032A0Cu: goto label_80032A0C;
    case 0x80032A10u: goto label_80032A10;
    case 0x80032A14u: goto label_80032A14;
    case 0x80032A18u: goto label_80032A18;
    case 0x80032A1Cu: goto label_80032A1C;
    case 0x80032A20u: goto label_80032A20;
    case 0x80032A24u: goto label_80032A24;
    case 0x80032A28u: goto label_80032A28;
    case 0x80032A2Cu: goto label_80032A2C;
    case 0x80032A30u: goto label_80032A30;
    case 0x80032A34u: goto label_80032A34;
    case 0x80032A38u: goto label_80032A38;
    case 0x80032A3Cu: goto label_80032A3C;
    case 0x80032A40u: goto label_80032A40;
    case 0x80032A44u: goto label_80032A44;
    case 0x80032A48u: goto label_80032A48;
    case 0x80032A4Cu: goto label_80032A4C;
    case 0x80032A50u: goto label_80032A50;
    case 0x80032A54u: goto label_80032A54;
    case 0x80032A58u: goto label_80032A58;
    case 0x80032A5Cu: goto label_80032A5C;
    case 0x80032A60u: goto label_80032A60;
    case 0x80032A64u: goto label_80032A64;
    case 0x80032A68u: goto label_80032A68;
    case 0x80032A6Cu: goto label_80032A6C;
    case 0x80032A70u: goto label_80032A70;
    case 0x80032A74u: goto label_80032A74;
    case 0x80032A78u: goto label_80032A78;
    case 0x80032A7Cu: goto label_80032A7C;
    case 0x80032A80u: goto label_80032A80;
    case 0x80032A84u: goto label_80032A84;
    case 0x80032A88u: goto label_80032A88;
    case 0x80032A8Cu: goto label_80032A8C;
    case 0x80032A90u: goto label_80032A90;
    case 0x80032A94u: goto label_80032A94;
    case 0x80032A98u: goto label_80032A98;
    case 0x80032A9Cu: goto label_80032A9C;
    case 0x80032AA0u: goto label_80032AA0;
    case 0x80032AA4u: goto label_80032AA4;
    case 0x80032AA8u: goto label_80032AA8;
    case 0x80032AACu: goto label_80032AAC;
    case 0x80032AB0u: goto label_80032AB0;
    case 0x80032AB4u: goto label_80032AB4;
    case 0x80032AB8u: goto label_80032AB8;
    case 0x80032ABCu: goto label_80032ABC;
    case 0x80032AC0u: goto label_80032AC0;
    case 0x80032AC4u: goto label_80032AC4;
    case 0x80032AC8u: goto label_80032AC8;
    case 0x80032ACCu: goto label_80032ACC;
    case 0x80032AD0u: goto label_80032AD0;
    case 0x80032AD4u: goto label_80032AD4;
    case 0x80032AD8u: goto label_80032AD8;
    case 0x80032ADCu: goto label_80032ADC;
    case 0x80032AE0u: goto label_80032AE0;
    case 0x80032AE4u: goto label_80032AE4;
    case 0x80032AE8u: goto label_80032AE8;
    case 0x80032AECu: goto label_80032AEC;
    case 0x80032AF0u: goto label_80032AF0;
    case 0x80032AF4u: goto label_80032AF4;
    case 0x80032AF8u: goto label_80032AF8;
    case 0x80032AFCu: goto label_80032AFC;
    case 0x80032B00u: goto label_80032B00;
    case 0x80032B04u: goto label_80032B04;
    case 0x80032B08u: goto label_80032B08;
    case 0x80032B0Cu: goto label_80032B0C;
    case 0x80032B10u: goto label_80032B10;
    case 0x80032B14u: goto label_80032B14;
    case 0x80032B18u: goto label_80032B18;
    case 0x80032B1Cu: goto label_80032B1C;
    case 0x80032B20u: goto label_80032B20;
    case 0x80032B24u: goto label_80032B24;
    case 0x80032B28u: goto label_80032B28;
    case 0x80032B2Cu: goto label_80032B2C;
    case 0x80032B30u: goto label_80032B30;
    case 0x80032B34u: goto label_80032B34;
    case 0x80032B38u: goto label_80032B38;
    case 0x80032B3Cu: goto label_80032B3C;
    case 0x80032B40u: goto label_80032B40;
    case 0x80032B44u: goto label_80032B44;
    case 0x80032B48u: goto label_80032B48;
    case 0x80032B4Cu: goto label_80032B4C;
    case 0x80032B50u: goto label_80032B50;
    case 0x80032B54u: goto label_80032B54;
    case 0x80032B58u: goto label_80032B58;
    case 0x80032B5Cu: goto label_80032B5C;
    case 0x80032B60u: goto label_80032B60;
    case 0x80032B64u: goto label_80032B64;
    case 0x80032B68u: goto label_80032B68;
    case 0x80032B6Cu: goto label_80032B6C;
    case 0x80032B70u: goto label_80032B70;
    case 0x80032B74u: goto label_80032B74;
    case 0x80032B78u: goto label_80032B78;
    case 0x80032B7Cu: goto label_80032B7C;
    case 0x80032B80u: goto label_80032B80;
    case 0x80032B84u: goto label_80032B84;
    case 0x80032B88u: goto label_80032B88;
    case 0x80032B8Cu: goto label_80032B8C;
    case 0x80032B90u: goto label_80032B90;
    case 0x80032B94u: goto label_80032B94;
    case 0x80032B98u: goto label_80032B98;
    case 0x80032B9Cu: goto label_80032B9C;
    case 0x80032BA0u: goto label_80032BA0;
    case 0x80032BA4u: goto label_80032BA4;
    case 0x80032BA8u: goto label_80032BA8;
    case 0x80032BACu: goto label_80032BAC;
    case 0x80032BB0u: goto label_80032BB0;
    case 0x80032BB4u: goto label_80032BB4;
    case 0x80032BB8u: goto label_80032BB8;
    case 0x80032BBCu: goto label_80032BBC;
    case 0x80032BC0u: goto label_80032BC0;
    case 0x80032BC4u: goto label_80032BC4;
    case 0x80032BC8u: goto label_80032BC8;
    case 0x80032BCCu: goto label_80032BCC;
    case 0x80032BD0u: goto label_80032BD0;
    case 0x80032BD4u: goto label_80032BD4;
    case 0x80032BD8u: goto label_80032BD8;
    case 0x80032BDCu: goto label_80032BDC;
    case 0x80032BE0u: goto label_80032BE0;
    case 0x80032BE4u: goto label_80032BE4;
    case 0x80032BE8u: goto label_80032BE8;
    case 0x80032BECu: goto label_80032BEC;
    case 0x80032BF0u: goto label_80032BF0;
    case 0x80032BF4u: goto label_80032BF4;
    case 0x80032BF8u: goto label_80032BF8;
    case 0x80032BFCu: goto label_80032BFC;
    case 0x80032C00u: goto label_80032C00;
    case 0x80032C04u: goto label_80032C04;
    case 0x80032C08u: goto label_80032C08;
    case 0x80032C0Cu: goto label_80032C0C;
    case 0x80032C10u: goto label_80032C10;
    case 0x80032C14u: goto label_80032C14;
    case 0x80032C18u: goto label_80032C18;
    case 0x80032C1Cu: goto label_80032C1C;
    case 0x80032C20u: goto label_80032C20;
    case 0x80032C24u: goto label_80032C24;
    case 0x80032C28u: goto label_80032C28;
    case 0x80032C2Cu: goto label_80032C2C;
    case 0x80032C30u: goto label_80032C30;
    case 0x80032C34u: goto label_80032C34;
    case 0x80032C38u: goto label_80032C38;
    case 0x80032C3Cu: goto label_80032C3C;
    case 0x80032C40u: goto label_80032C40;
    case 0x80032C44u: goto label_80032C44;
    case 0x80032C48u: goto label_80032C48;
    case 0x80032C4Cu: goto label_80032C4C;
    case 0x80032C50u: goto label_80032C50;
    case 0x80032C54u: goto label_80032C54;
    case 0x80032C58u: goto label_80032C58;
    case 0x80032C5Cu: goto label_80032C5C;
    case 0x80032C60u: goto label_80032C60;
    case 0x80032C64u: goto label_80032C64;
    case 0x80032C68u: goto label_80032C68;
    case 0x80032C6Cu: goto label_80032C6C;
    case 0x80032C70u: goto label_80032C70;
    case 0x80032C74u: goto label_80032C74;
    case 0x80032C78u: goto label_80032C78;
    case 0x80032C7Cu: goto label_80032C7C;
    case 0x80032C80u: goto label_80032C80;
    case 0x80032C84u: goto label_80032C84;
    case 0x80032C88u: goto label_80032C88;
    case 0x80032C8Cu: goto label_80032C8C;
    case 0x80032C90u: goto label_80032C90;
    case 0x80032C94u: goto label_80032C94;
    case 0x80032C98u: goto label_80032C98;
    case 0x80032C9Cu: goto label_80032C9C;
    case 0x80032CA0u: goto label_80032CA0;
    case 0x80032CA4u: goto label_80032CA4;
    case 0x80032CA8u: goto label_80032CA8;
    case 0x80032CACu: goto label_80032CAC;
    case 0x80032CB0u: goto label_80032CB0;
    case 0x80032CB4u: goto label_80032CB4;
    case 0x80032CB8u: goto label_80032CB8;
    case 0x80032CBCu: goto label_80032CBC;
    case 0x80032CC0u: goto label_80032CC0;
    case 0x80032CC4u: goto label_80032CC4;
    case 0x80032CC8u: goto label_80032CC8;
    case 0x80032CCCu: goto label_80032CCC;
    case 0x80032CD0u: goto label_80032CD0;
    case 0x80032CD4u: goto label_80032CD4;
    case 0x80032CD8u: goto label_80032CD8;
    case 0x80032CDCu: goto label_80032CDC;
    case 0x80032CE0u: goto label_80032CE0;
    case 0x80032CE4u: goto label_80032CE4;
    case 0x80032CE8u: goto label_80032CE8;
    case 0x80032CECu: goto label_80032CEC;
    case 0x80032CF0u: goto label_80032CF0;
    case 0x80032CF4u: goto label_80032CF4;
    case 0x80032CF8u: goto label_80032CF8;
    case 0x80032CFCu: goto label_80032CFC;
    case 0x80032D00u: goto label_80032D00;
    case 0x80032D04u: goto label_80032D04;
    case 0x80032D08u: goto label_80032D08;
    case 0x80032D0Cu: goto label_80032D0C;
    case 0x80032D10u: goto label_80032D10;
    case 0x80032D14u: goto label_80032D14;
    case 0x80032D18u: goto label_80032D18;
    case 0x80032D1Cu: goto label_80032D1C;
    case 0x80032D20u: goto label_80032D20;
    case 0x80032D24u: goto label_80032D24;
    case 0x80032D28u: goto label_80032D28;
    case 0x80032D2Cu: goto label_80032D2C;
    case 0x80032D30u: goto label_80032D30;
    case 0x80032D34u: goto label_80032D34;
    case 0x80032D38u: goto label_80032D38;
    case 0x80032D3Cu: goto label_80032D3C;
    case 0x80032D40u: goto label_80032D40;
    case 0x80032D44u: goto label_80032D44;
    case 0x80032D48u: goto label_80032D48;
    case 0x80032D4Cu: goto label_80032D4C;
    case 0x80032D50u: goto label_80032D50;
    case 0x80032D54u: goto label_80032D54;
    case 0x80032D58u: goto label_80032D58;
    case 0x80032D5Cu: goto label_80032D5C;
    case 0x80032D60u: goto label_80032D60;
    case 0x80032D64u: goto label_80032D64;
    case 0x80032D68u: goto label_80032D68;
    case 0x80032D6Cu: goto label_80032D6C;
    case 0x80032D70u: goto label_80032D70;
    case 0x80032D74u: goto label_80032D74;
    case 0x80032D78u: goto label_80032D78;
    case 0x80032D7Cu: goto label_80032D7C;
    case 0x80032D80u: goto label_80032D80;
    case 0x80032D84u: goto label_80032D84;
    case 0x80032D88u: goto label_80032D88;
    case 0x80032D8Cu: goto label_80032D8C;
    case 0x80032D90u: goto label_80032D90;
    case 0x80032D94u: goto label_80032D94;
    case 0x80032D98u: goto label_80032D98;
    case 0x80032D9Cu: goto label_80032D9C;
    case 0x80032DA0u: goto label_80032DA0;
    case 0x80032DA4u: goto label_80032DA4;
    case 0x80032DA8u: goto label_80032DA8;
    case 0x80032DACu: goto label_80032DAC;
    case 0x80032DB0u: goto label_80032DB0;
    case 0x80032DB4u: goto label_80032DB4;
    case 0x80032DB8u: goto label_80032DB8;
    case 0x80032DBCu: goto label_80032DBC;
    case 0x80032DC0u: goto label_80032DC0;
    case 0x80032DC4u: goto label_80032DC4;
    case 0x80032DC8u: goto label_80032DC8;
    case 0x80032DCCu: goto label_80032DCC;
    case 0x80032DD0u: goto label_80032DD0;
    case 0x80032DD4u: goto label_80032DD4;
    case 0x80032DD8u: goto label_80032DD8;
    case 0x80032DDCu: goto label_80032DDC;
    case 0x80032DE0u: goto label_80032DE0;
    case 0x80032DE4u: goto label_80032DE4;
    case 0x80032DE8u: goto label_80032DE8;
    case 0x80032DECu: goto label_80032DEC;
    case 0x80032DF0u: goto label_80032DF0;
    case 0x80032DF4u: goto label_80032DF4;
    case 0x80032DF8u: goto label_80032DF8;
    case 0x80032DFCu: goto label_80032DFC;
    case 0x80032E00u: goto label_80032E00;
    case 0x80032E04u: goto label_80032E04;
    case 0x80032E08u: goto label_80032E08;
    case 0x80032E0Cu: goto label_80032E0C;
    case 0x80032E10u: goto label_80032E10;
    case 0x80032E14u: goto label_80032E14;
    case 0x80032E18u: goto label_80032E18;
    case 0x80032E1Cu: goto label_80032E1C;
    case 0x80032E20u: goto label_80032E20;
    case 0x80032E24u: goto label_80032E24;
    case 0x80032E28u: goto label_80032E28;
    case 0x80032E2Cu: goto label_80032E2C;
    case 0x80032E30u: goto label_80032E30;
    case 0x80032E34u: goto label_80032E34;
    case 0x80032E38u: goto label_80032E38;
    case 0x80032E3Cu: goto label_80032E3C;
    case 0x80032E40u: goto label_80032E40;
    case 0x80032E44u: goto label_80032E44;
    case 0x80032E48u: goto label_80032E48;
    case 0x80032E4Cu: goto label_80032E4C;
    case 0x80032E50u: goto label_80032E50;
    case 0x80032E54u: goto label_80032E54;
    case 0x80032E58u: goto label_80032E58;
    case 0x80032E5Cu: goto label_80032E5C;
    case 0x80032E60u: goto label_80032E60;
    case 0x80032E64u: goto label_80032E64;
    case 0x80032E68u: goto label_80032E68;
    case 0x80032E6Cu: goto label_80032E6C;
    case 0x80032E70u: goto label_80032E70;
    case 0x80032E74u: goto label_80032E74;
    case 0x80032E78u: goto label_80032E78;
    case 0x80032E7Cu: goto label_80032E7C;
    case 0x80032E80u: goto label_80032E80;
    case 0x80032E84u: goto label_80032E84;
    case 0x80032E88u: goto label_80032E88;
    case 0x80032E8Cu: goto label_80032E8C;
    case 0x80032E90u: goto label_80032E90;
    case 0x80032E94u: goto label_80032E94;
    case 0x80032E98u: goto label_80032E98;
    case 0x80032E9Cu: goto label_80032E9C;
    case 0x80032EA0u: goto label_80032EA0;
    case 0x80032EA4u: goto label_80032EA4;
    case 0x80032EA8u: goto label_80032EA8;
    case 0x80032EACu: goto label_80032EAC;
    case 0x80032EB0u: goto label_80032EB0;
    case 0x80032EB4u: goto label_80032EB4;
    case 0x80032EB8u: goto label_80032EB8;
    case 0x80032EBCu: goto label_80032EBC;
    case 0x80032EC0u: goto label_80032EC0;
    case 0x80032EC4u: goto label_80032EC4;
    case 0x80032EC8u: goto label_80032EC8;
    case 0x80032ECCu: goto label_80032ECC;
    case 0x80032ED0u: goto label_80032ED0;
    case 0x80032ED4u: goto label_80032ED4;
    case 0x80032ED8u: goto label_80032ED8;
    case 0x80032EDCu: goto label_80032EDC;
    case 0x80032EE0u: goto label_80032EE0;
    case 0x80032EE4u: goto label_80032EE4;
    case 0x80032EE8u: goto label_80032EE8;
    case 0x80032EECu: goto label_80032EEC;
    case 0x80032EF0u: goto label_80032EF0;
    case 0x80032EF4u: goto label_80032EF4;
    case 0x80032EF8u: goto label_80032EF8;
    case 0x80032EFCu: goto label_80032EFC;
    case 0x80032F00u: goto label_80032F00;
    case 0x80032F04u: goto label_80032F04;
    case 0x80032F08u: goto label_80032F08;
    case 0x80032F0Cu: goto label_80032F0C;
    case 0x80032F10u: goto label_80032F10;
    case 0x80032F14u: goto label_80032F14;
    case 0x80032F18u: goto label_80032F18;
    case 0x80032F1Cu: goto label_80032F1C;
    case 0x80032F20u: goto label_80032F20;
    case 0x80032F24u: goto label_80032F24;
    case 0x80032F28u: goto label_80032F28;
    case 0x80032F2Cu: goto label_80032F2C;
    case 0x80032F30u: goto label_80032F30;
    case 0x80032F34u: goto label_80032F34;
    case 0x80032F38u: goto label_80032F38;
    case 0x80032F3Cu: goto label_80032F3C;
    case 0x80032F40u: goto label_80032F40;
    case 0x80032F44u: goto label_80032F44;
    case 0x80032F48u: goto label_80032F48;
    case 0x80032F4Cu: goto label_80032F4C;
    case 0x80032F50u: goto label_80032F50;
    case 0x80032F54u: goto label_80032F54;
    case 0x80032F58u: goto label_80032F58;
    case 0x80032F5Cu: goto label_80032F5C;
    case 0x80032F60u: goto label_80032F60;
    case 0x80032F64u: goto label_80032F64;
    case 0x80032F68u: goto label_80032F68;
    case 0x80032F6Cu: goto label_80032F6C;
    case 0x80032F70u: goto label_80032F70;
    case 0x80032F74u: goto label_80032F74;
    case 0x80032F78u: goto label_80032F78;
    case 0x80032F7Cu: goto label_80032F7C;
    case 0x80032F80u: goto label_80032F80;
    case 0x80032F84u: goto label_80032F84;
    case 0x80032F88u: goto label_80032F88;
    case 0x80032F8Cu: goto label_80032F8C;
    case 0x80032F90u: goto label_80032F90;
    case 0x80032F94u: goto label_80032F94;
    case 0x80032F98u: goto label_80032F98;
    case 0x80032F9Cu: goto label_80032F9C;
    case 0x80032FA0u: goto label_80032FA0;
    case 0x80032FA4u: goto label_80032FA4;
    case 0x80032FA8u: goto label_80032FA8;
    case 0x80032FACu: goto label_80032FAC;
    case 0x80032FB0u: goto label_80032FB0;
    case 0x80032FB4u: goto label_80032FB4;
    case 0x80032FB8u: goto label_80032FB8;
    case 0x80032FBCu: goto label_80032FBC;
    case 0x80032FC0u: goto label_80032FC0;
    case 0x80032FC4u: goto label_80032FC4;
    case 0x80032FC8u: goto label_80032FC8;
    case 0x80032FCCu: goto label_80032FCC;
    case 0x80032FD0u: goto label_80032FD0;
    case 0x80032FD4u: goto label_80032FD4;
    case 0x80032FD8u: goto label_80032FD8;
    case 0x80032FDCu: goto label_80032FDC;
    case 0x80032FE0u: goto label_80032FE0;
    case 0x80032FE4u: goto label_80032FE4;
    case 0x80032FE8u: goto label_80032FE8;
    case 0x80032FECu: goto label_80032FEC;
    case 0x80032FF0u: goto label_80032FF0;
    case 0x80032FF4u: goto label_80032FF4;
    case 0x80032FF8u: goto label_80032FF8;
    case 0x80032FFCu: goto label_80032FFC;
    case 0x80033000u: goto label_80033000;
    case 0x80033004u: goto label_80033004;
    case 0x80033008u: goto label_80033008;
    case 0x8003300Cu: goto label_8003300C;
    case 0x80033010u: goto label_80033010;
    case 0x80033014u: goto label_80033014;
    case 0x80033018u: goto label_80033018;
    case 0x8003301Cu: goto label_8003301C;
    case 0x80033020u: goto label_80033020;
    case 0x80033024u: goto label_80033024;
    case 0x80033028u: goto label_80033028;
    case 0x8003302Cu: goto label_8003302C;
    case 0x80033030u: goto label_80033030;
    case 0x80033034u: goto label_80033034;
    case 0x80033038u: goto label_80033038;
    case 0x8003303Cu: goto label_8003303C;
    case 0x80033040u: goto label_80033040;
    case 0x80033044u: goto label_80033044;
    case 0x80033048u: goto label_80033048;
    case 0x8003304Cu: goto label_8003304C;
    case 0x80033050u: goto label_80033050;
    case 0x80033054u: goto label_80033054;
    case 0x80033058u: goto label_80033058;
    case 0x8003305Cu: goto label_8003305C;
    case 0x80033060u: goto label_80033060;
    case 0x80033064u: goto label_80033064;
    case 0x80033068u: goto label_80033068;
    case 0x8003306Cu: goto label_8003306C;
    case 0x80033070u: goto label_80033070;
    case 0x80033074u: goto label_80033074;
    case 0x80033078u: goto label_80033078;
    case 0x8003307Cu: goto label_8003307C;
    case 0x80033080u: goto label_80033080;
    case 0x80033084u: goto label_80033084;
    case 0x80033088u: goto label_80033088;
    case 0x8003308Cu: goto label_8003308C;
    case 0x80033090u: goto label_80033090;
    case 0x80033094u: goto label_80033094;
    case 0x80033098u: goto label_80033098;
    case 0x8003309Cu: goto label_8003309C;
    case 0x800330A0u: goto label_800330A0;
    case 0x800330A4u: goto label_800330A4;
    case 0x800330A8u: goto label_800330A8;
    case 0x800330ACu: goto label_800330AC;
    case 0x800330B0u: goto label_800330B0;
    case 0x800330B4u: goto label_800330B4;
    case 0x800330B8u: goto label_800330B8;
    case 0x800330BCu: goto label_800330BC;
    case 0x800330C0u: goto label_800330C0;
    case 0x800330C4u: goto label_800330C4;
    case 0x800330C8u: goto label_800330C8;
    case 0x800330CCu: goto label_800330CC;
    case 0x800330D0u: goto label_800330D0;
    case 0x800330D4u: goto label_800330D4;
    case 0x800330D8u: goto label_800330D8;
    case 0x800330DCu: goto label_800330DC;
    case 0x800330E0u: goto label_800330E0;
    case 0x800330E4u: goto label_800330E4;
    case 0x800330E8u: goto label_800330E8;
    case 0x800330ECu: goto label_800330EC;
    case 0x800330F0u: goto label_800330F0;
    case 0x800330F4u: goto label_800330F4;
    case 0x800330F8u: goto label_800330F8;
    case 0x800330FCu: goto label_800330FC;
    case 0x80033100u: goto label_80033100;
    case 0x80033104u: goto label_80033104;
    case 0x80033108u: goto label_80033108;
    case 0x8003310Cu: goto label_8003310C;
    case 0x80033110u: goto label_80033110;
    case 0x80033114u: goto label_80033114;
    case 0x80033118u: goto label_80033118;
    case 0x8003311Cu: goto label_8003311C;
    case 0x80033120u: goto label_80033120;
    case 0x80033124u: goto label_80033124;
    case 0x80033128u: goto label_80033128;
    case 0x8003312Cu: goto label_8003312C;
    case 0x80033130u: goto label_80033130;
    case 0x80033134u: goto label_80033134;
    case 0x80033138u: goto label_80033138;
    case 0x8003313Cu: goto label_8003313C;
    case 0x80033140u: goto label_80033140;
    case 0x80033144u: goto label_80033144;
    case 0x80033148u: goto label_80033148;
    case 0x8003314Cu: goto label_8003314C;
    case 0x80033150u: goto label_80033150;
    case 0x80033154u: goto label_80033154;
    case 0x80033158u: goto label_80033158;
    case 0x8003315Cu: goto label_8003315C;
    case 0x80033160u: goto label_80033160;
    case 0x80033164u: goto label_80033164;
    case 0x80033168u: goto label_80033168;
    case 0x8003316Cu: goto label_8003316C;
    case 0x80033170u: goto label_80033170;
    case 0x80033174u: goto label_80033174;
    case 0x80033178u: goto label_80033178;
    case 0x8003317Cu: goto label_8003317C;
    case 0x80033180u: goto label_80033180;
    case 0x80033184u: goto label_80033184;
    case 0x80033188u: goto label_80033188;
    case 0x8003318Cu: goto label_8003318C;
    case 0x80033190u: goto label_80033190;
    case 0x80033194u: goto label_80033194;
    case 0x80033198u: goto label_80033198;
    case 0x8003319Cu: goto label_8003319C;
    case 0x800331A0u: goto label_800331A0;
    case 0x800331A4u: goto label_800331A4;
    case 0x800331A8u: goto label_800331A8;
    case 0x800331ACu: goto label_800331AC;
    case 0x800331B0u: goto label_800331B0;
    case 0x800331B4u: goto label_800331B4;
    case 0x800331B8u: goto label_800331B8;
    case 0x800331BCu: goto label_800331BC;
    case 0x800331C0u: goto label_800331C0;
    case 0x800331C4u: goto label_800331C4;
    case 0x800331C8u: goto label_800331C8;
    case 0x800331CCu: goto label_800331CC;
    case 0x800331D0u: goto label_800331D0;
    case 0x800331D4u: goto label_800331D4;
    case 0x800331D8u: goto label_800331D8;
    case 0x800331DCu: goto label_800331DC;
    case 0x800331E0u: goto label_800331E0;
    case 0x800331E4u: goto label_800331E4;
    case 0x800331E8u: goto label_800331E8;
    case 0x800331ECu: goto label_800331EC;
    case 0x800331F0u: goto label_800331F0;
    case 0x800331F4u: goto label_800331F4;
    case 0x800331F8u: goto label_800331F8;
    case 0x800331FCu: goto label_800331FC;
    case 0x80033200u: goto label_80033200;
    case 0x80033204u: goto label_80033204;
    case 0x80033208u: goto label_80033208;
    case 0x8003320Cu: goto label_8003320C;
    case 0x80033210u: goto label_80033210;
    case 0x80033214u: goto label_80033214;
    case 0x80033218u: goto label_80033218;
    case 0x8003321Cu: goto label_8003321C;
    case 0x80033220u: goto label_80033220;
    case 0x80033224u: goto label_80033224;
    case 0x80033228u: goto label_80033228;
    case 0x8003322Cu: goto label_8003322C;
    case 0x80033230u: goto label_80033230;
    case 0x80033234u: goto label_80033234;
    case 0x80033238u: goto label_80033238;
    case 0x8003323Cu: goto label_8003323C;
    case 0x80033240u: goto label_80033240;
    case 0x80033244u: goto label_80033244;
    case 0x80033248u: goto label_80033248;
    case 0x8003324Cu: goto label_8003324C;
    case 0x80033250u: goto label_80033250;
    case 0x80033254u: goto label_80033254;
    case 0x80033258u: goto label_80033258;
    case 0x8003325Cu: goto label_8003325C;
    case 0x80033260u: goto label_80033260;
    case 0x80033264u: goto label_80033264;
    case 0x80033268u: goto label_80033268;
    case 0x8003326Cu: goto label_8003326C;
    case 0x80033270u: goto label_80033270;
    case 0x80033274u: goto label_80033274;
    case 0x80033278u: goto label_80033278;
    case 0x8003327Cu: goto label_8003327C;
    case 0x80033280u: goto label_80033280;
    case 0x80033284u: goto label_80033284;
    case 0x80033288u: goto label_80033288;
    case 0x8003328Cu: goto label_8003328C;
    case 0x80033290u: goto label_80033290;
    case 0x80033294u: goto label_80033294;
    case 0x80033298u: goto label_80033298;
    case 0x8003329Cu: goto label_8003329C;
    case 0x800332A0u: goto label_800332A0;
    case 0x800332A4u: goto label_800332A4;
    case 0x800332A8u: goto label_800332A8;
    case 0x800332ACu: goto label_800332AC;
    case 0x800332B0u: goto label_800332B0;
    case 0x800332B4u: goto label_800332B4;
    case 0x800332B8u: goto label_800332B8;
    case 0x800332BCu: goto label_800332BC;
    case 0x800332C0u: goto label_800332C0;
    case 0x800332C4u: goto label_800332C4;
    case 0x800332C8u: goto label_800332C8;
    case 0x800332CCu: goto label_800332CC;
    case 0x800332D0u: goto label_800332D0;
    case 0x800332D4u: goto label_800332D4;
    case 0x800332D8u: goto label_800332D8;
    case 0x800332DCu: goto label_800332DC;
    case 0x800332E0u: goto label_800332E0;
    case 0x800332E4u: goto label_800332E4;
    case 0x800332E8u: goto label_800332E8;
    case 0x800332ECu: goto label_800332EC;
    case 0x800332F0u: goto label_800332F0;
    case 0x800332F4u: goto label_800332F4;
    case 0x800332F8u: goto label_800332F8;
    case 0x800332FCu: goto label_800332FC;
    case 0x80033300u: goto label_80033300;
    case 0x80033304u: goto label_80033304;
    case 0x80033308u: goto label_80033308;
    case 0x8003330Cu: goto label_8003330C;
    case 0x80033310u: goto label_80033310;
    case 0x80033314u: goto label_80033314;
    case 0x80033318u: goto label_80033318;
    case 0x8003331Cu: goto label_8003331C;
    case 0x80033320u: goto label_80033320;
    case 0x80033324u: goto label_80033324;
    case 0x80033328u: goto label_80033328;
    case 0x8003332Cu: goto label_8003332C;
    case 0x80033330u: goto label_80033330;
    case 0x80033334u: goto label_80033334;
    case 0x80033338u: goto label_80033338;
    case 0x8003333Cu: goto label_8003333C;
    case 0x80033340u: goto label_80033340;
    case 0x80033344u: goto label_80033344;
    case 0x80033348u: goto label_80033348;
    case 0x8003334Cu: goto label_8003334C;
    case 0x80033350u: goto label_80033350;
    case 0x80033354u: goto label_80033354;
    case 0x80033358u: goto label_80033358;
    case 0x8003335Cu: goto label_8003335C;
    case 0x80033360u: goto label_80033360;
    case 0x80033364u: goto label_80033364;
    case 0x80033368u: goto label_80033368;
    case 0x8003336Cu: goto label_8003336C;
    case 0x80033370u: goto label_80033370;
    case 0x80033374u: goto label_80033374;
    case 0x80033378u: goto label_80033378;
    case 0x8003337Cu: goto label_8003337C;
    case 0x80033380u: goto label_80033380;
    case 0x80033384u: goto label_80033384;
    case 0x80033388u: goto label_80033388;
    case 0x8003338Cu: goto label_8003338C;
    case 0x80033390u: goto label_80033390;
    case 0x80033394u: goto label_80033394;
    case 0x80033398u: goto label_80033398;
    case 0x8003339Cu: goto label_8003339C;
    case 0x800333A0u: goto label_800333A0;
    case 0x800333A4u: goto label_800333A4;
    case 0x800333A8u: goto label_800333A8;
    case 0x800333ACu: goto label_800333AC;
    case 0x800333B0u: goto label_800333B0;
    case 0x800333B4u: goto label_800333B4;
    case 0x800333B8u: goto label_800333B8;
    case 0x800333BCu: goto label_800333BC;
    case 0x800333C0u: goto label_800333C0;
    case 0x800333C4u: goto label_800333C4;
    case 0x800333C8u: goto label_800333C8;
    case 0x800333CCu: goto label_800333CC;
    case 0x800333D0u: goto label_800333D0;
    case 0x800333D4u: goto label_800333D4;
    case 0x800333D8u: goto label_800333D8;
    case 0x800333DCu: goto label_800333DC;
    case 0x800333E0u: goto label_800333E0;
    case 0x800333E4u: goto label_800333E4;
    case 0x800333E8u: goto label_800333E8;
    case 0x800333ECu: goto label_800333EC;
    case 0x800333F0u: goto label_800333F0;
    case 0x800333F4u: goto label_800333F4;
    case 0x800333F8u: goto label_800333F8;
    case 0x800333FCu: goto label_800333FC;
    case 0x80033400u: goto label_80033400;
    case 0x80033404u: goto label_80033404;
    case 0x80033408u: goto label_80033408;
    case 0x8003340Cu: goto label_8003340C;
    case 0x80033410u: goto label_80033410;
    case 0x80033414u: goto label_80033414;
    case 0x80033418u: goto label_80033418;
    case 0x8003341Cu: goto label_8003341C;
    case 0x80033420u: goto label_80033420;
    case 0x80033424u: goto label_80033424;
    case 0x80033428u: goto label_80033428;
    case 0x8003342Cu: goto label_8003342C;
    case 0x80033430u: goto label_80033430;
    case 0x80033434u: goto label_80033434;
    case 0x80033438u: goto label_80033438;
    case 0x8003343Cu: goto label_8003343C;
    case 0x80033440u: goto label_80033440;
    case 0x80033444u: goto label_80033444;
    case 0x80033448u: goto label_80033448;
    case 0x8003344Cu: goto label_8003344C;
    case 0x80033450u: goto label_80033450;
    case 0x80033454u: goto label_80033454;
    case 0x80033458u: goto label_80033458;
    case 0x8003345Cu: goto label_8003345C;
    case 0x80033460u: goto label_80033460;
    case 0x80033464u: goto label_80033464;
    case 0x80033468u: goto label_80033468;
    case 0x8003346Cu: goto label_8003346C;
    case 0x80033470u: goto label_80033470;
    case 0x80033474u: goto label_80033474;
    case 0x80033478u: goto label_80033478;
    case 0x8003347Cu: goto label_8003347C;
    case 0x80033480u: goto label_80033480;
    case 0x80033484u: goto label_80033484;
    case 0x80033488u: goto label_80033488;
    case 0x8003348Cu: goto label_8003348C;
    case 0x80033490u: goto label_80033490;
    case 0x80033494u: goto label_80033494;
    case 0x80033498u: goto label_80033498;
    case 0x8003349Cu: goto label_8003349C;
    case 0x800334A0u: goto label_800334A0;
    case 0x800334A4u: goto label_800334A4;
    case 0x800334A8u: goto label_800334A8;
    case 0x800334ACu: goto label_800334AC;
    case 0x800334B0u: goto label_800334B0;
    case 0x800334B4u: goto label_800334B4;
    case 0x800334B8u: goto label_800334B8;
    case 0x800334BCu: goto label_800334BC;
    case 0x800334C0u: goto label_800334C0;
    case 0x800334C4u: goto label_800334C4;
    case 0x800334C8u: goto label_800334C8;
    case 0x800334CCu: goto label_800334CC;
    case 0x800334D0u: goto label_800334D0;
    case 0x800334D4u: goto label_800334D4;
    case 0x800334D8u: goto label_800334D8;
    case 0x800334DCu: goto label_800334DC;
    case 0x800334E0u: goto label_800334E0;
    case 0x800334E4u: goto label_800334E4;
    case 0x800334E8u: goto label_800334E8;
    case 0x800334ECu: goto label_800334EC;
    case 0x800334F0u: goto label_800334F0;
    case 0x800334F4u: goto label_800334F4;
    case 0x800334F8u: goto label_800334F8;
    case 0x800334FCu: goto label_800334FC;
    case 0x80033500u: goto label_80033500;
    case 0x80033504u: goto label_80033504;
    case 0x80033508u: goto label_80033508;
    case 0x8003350Cu: goto label_8003350C;
    case 0x80033510u: goto label_80033510;
    case 0x80033514u: goto label_80033514;
    case 0x80033518u: goto label_80033518;
    case 0x8003351Cu: goto label_8003351C;
    case 0x80033520u: goto label_80033520;
    case 0x80033524u: goto label_80033524;
    case 0x80033528u: goto label_80033528;
    case 0x8003352Cu: goto label_8003352C;
    case 0x80033530u: goto label_80033530;
    case 0x80033534u: goto label_80033534;
    case 0x80033538u: goto label_80033538;
    case 0x8003353Cu: goto label_8003353C;
    case 0x80033540u: goto label_80033540;
    case 0x80033544u: goto label_80033544;
    case 0x80033548u: goto label_80033548;
    case 0x8003354Cu: goto label_8003354C;
    case 0x80033550u: goto label_80033550;
    case 0x80033554u: goto label_80033554;
    case 0x80033558u: goto label_80033558;
    case 0x8003355Cu: goto label_8003355C;
    case 0x80033560u: goto label_80033560;
    case 0x80033564u: goto label_80033564;
    case 0x80033568u: goto label_80033568;
    case 0x8003356Cu: goto label_8003356C;
    case 0x80033570u: goto label_80033570;
    case 0x80033574u: goto label_80033574;
    case 0x80033578u: goto label_80033578;
    case 0x8003357Cu: goto label_8003357C;
    case 0x80033580u: goto label_80033580;
    case 0x80033584u: goto label_80033584;
    case 0x80033588u: goto label_80033588;
    case 0x8003358Cu: goto label_8003358C;
    case 0x80033590u: goto label_80033590;
    case 0x80033594u: goto label_80033594;
    case 0x80033598u: goto label_80033598;
    case 0x8003359Cu: goto label_8003359C;
    case 0x800335A0u: goto label_800335A0;
    case 0x800335A4u: goto label_800335A4;
    case 0x800335A8u: goto label_800335A8;
    case 0x800335ACu: goto label_800335AC;
    case 0x800335B0u: goto label_800335B0;
    case 0x800335B4u: goto label_800335B4;
    case 0x800335B8u: goto label_800335B8;
    case 0x800335BCu: goto label_800335BC;
    case 0x800335C0u: goto label_800335C0;
    case 0x800335C4u: goto label_800335C4;
    case 0x800335C8u: goto label_800335C8;
    case 0x800335CCu: goto label_800335CC;
    case 0x800335D0u: goto label_800335D0;
    case 0x800335D4u: goto label_800335D4;
    case 0x800335D8u: goto label_800335D8;
    case 0x800335DCu: goto label_800335DC;
    case 0x800335E0u: goto label_800335E0;
    case 0x800335E4u: goto label_800335E4;
    case 0x800335E8u: goto label_800335E8;
    case 0x800335ECu: goto label_800335EC;
    case 0x800335F0u: goto label_800335F0;
    case 0x800335F4u: goto label_800335F4;
    case 0x800335F8u: goto label_800335F8;
    case 0x800335FCu: goto label_800335FC;
    case 0x80033600u: goto label_80033600;
    case 0x80033604u: goto label_80033604;
    case 0x80033608u: goto label_80033608;
    case 0x8003360Cu: goto label_8003360C;
    case 0x80033610u: goto label_80033610;
    case 0x80033614u: goto label_80033614;
    case 0x80033618u: goto label_80033618;
    case 0x8003361Cu: goto label_8003361C;
    case 0x80033620u: goto label_80033620;
    case 0x80033624u: goto label_80033624;
    case 0x80033628u: goto label_80033628;
    case 0x8003362Cu: goto label_8003362C;
    case 0x80033630u: goto label_80033630;
    case 0x80033634u: goto label_80033634;
    case 0x80033638u: goto label_80033638;
    case 0x8003363Cu: goto label_8003363C;
    case 0x80033640u: goto label_80033640;
    case 0x80033644u: goto label_80033644;
    case 0x80033648u: goto label_80033648;
    case 0x8003364Cu: goto label_8003364C;
    case 0x80033650u: goto label_80033650;
    case 0x80033654u: goto label_80033654;
    case 0x80033658u: goto label_80033658;
    case 0x8003365Cu: goto label_8003365C;
    case 0x80033660u: goto label_80033660;
    case 0x80033664u: goto label_80033664;
    case 0x80033668u: goto label_80033668;
    case 0x8003366Cu: goto label_8003366C;
    case 0x80033670u: goto label_80033670;
    case 0x80033674u: goto label_80033674;
    case 0x80033678u: goto label_80033678;
    case 0x8003367Cu: goto label_8003367C;
    case 0x80033680u: goto label_80033680;
    case 0x80033684u: goto label_80033684;
    case 0x80033688u: goto label_80033688;
    case 0x8003368Cu: goto label_8003368C;
    case 0x80033690u: goto label_80033690;
    case 0x80033694u: goto label_80033694;
    case 0x80033698u: goto label_80033698;
    case 0x8003369Cu: goto label_8003369C;
    case 0x800336A0u: goto label_800336A0;
    case 0x800336A4u: goto label_800336A4;
    case 0x800336A8u: goto label_800336A8;
    case 0x800336ACu: goto label_800336AC;
    case 0x800336B0u: goto label_800336B0;
    case 0x800336B4u: goto label_800336B4;
    case 0x800336B8u: goto label_800336B8;
    case 0x800336BCu: goto label_800336BC;
    case 0x800336C0u: goto label_800336C0;
    case 0x800336C4u: goto label_800336C4;
    case 0x800336C8u: goto label_800336C8;
    case 0x800336CCu: goto label_800336CC;
    case 0x800336D0u: goto label_800336D0;
    case 0x800336D4u: goto label_800336D4;
    case 0x800336D8u: goto label_800336D8;
    case 0x800336DCu: goto label_800336DC;
    case 0x800336E0u: goto label_800336E0;
    case 0x800336E4u: goto label_800336E4;
    case 0x800336E8u: goto label_800336E8;
    case 0x800336ECu: goto label_800336EC;
    case 0x800336F0u: goto label_800336F0;
    case 0x800336F4u: goto label_800336F4;
    case 0x800336F8u: goto label_800336F8;
    case 0x800336FCu: goto label_800336FC;
    case 0x80033700u: goto label_80033700;
    case 0x80033704u: goto label_80033704;
    case 0x80033708u: goto label_80033708;
    case 0x8003370Cu: goto label_8003370C;
    case 0x80033710u: goto label_80033710;
    case 0x80033714u: goto label_80033714;
    case 0x80033718u: goto label_80033718;
    case 0x8003371Cu: goto label_8003371C;
    case 0x80033720u: goto label_80033720;
    case 0x80033724u: goto label_80033724;
    case 0x80033728u: goto label_80033728;
    case 0x8003372Cu: goto label_8003372C;
    case 0x80033730u: goto label_80033730;
    case 0x80033734u: goto label_80033734;
    case 0x80033738u: goto label_80033738;
    case 0x8003373Cu: goto label_8003373C;
    case 0x80033740u: goto label_80033740;
    case 0x80033744u: goto label_80033744;
    case 0x80033748u: goto label_80033748;
    case 0x8003374Cu: goto label_8003374C;
    case 0x80033750u: goto label_80033750;
    case 0x80033754u: goto label_80033754;
    case 0x80033758u: goto label_80033758;
    case 0x8003375Cu: goto label_8003375C;
    case 0x80033760u: goto label_80033760;
    case 0x80033764u: goto label_80033764;
    case 0x80033768u: goto label_80033768;
    case 0x8003376Cu: goto label_8003376C;
    case 0x80033770u: goto label_80033770;
    case 0x80033774u: goto label_80033774;
    case 0x80033778u: goto label_80033778;
    case 0x8003377Cu: goto label_8003377C;
    case 0x80033780u: goto label_80033780;
    case 0x80033784u: goto label_80033784;
    case 0x80033788u: goto label_80033788;
    case 0x8003378Cu: goto label_8003378C;
    case 0x80033790u: goto label_80033790;
    case 0x80033794u: goto label_80033794;
    case 0x80033798u: goto label_80033798;
    case 0x8003379Cu: goto label_8003379C;
    case 0x800337A0u: goto label_800337A0;
    case 0x800337A4u: goto label_800337A4;
    case 0x800337A8u: goto label_800337A8;
    case 0x800337ACu: goto label_800337AC;
    case 0x800337B0u: goto label_800337B0;
    case 0x800337B4u: goto label_800337B4;
    case 0x800337B8u: goto label_800337B8;
    case 0x800337BCu: goto label_800337BC;
    case 0x800337C0u: goto label_800337C0;
    case 0x800337C4u: goto label_800337C4;
    case 0x800337C8u: goto label_800337C8;
    case 0x800337CCu: goto label_800337CC;
    case 0x800337D0u: goto label_800337D0;
    case 0x800337D4u: goto label_800337D4;
    case 0x800337D8u: goto label_800337D8;
    case 0x800337DCu: goto label_800337DC;
    case 0x800337E0u: goto label_800337E0;
    case 0x800337E4u: goto label_800337E4;
    case 0x800337E8u: goto label_800337E8;
    case 0x800337ECu: goto label_800337EC;
    case 0x800337F0u: goto label_800337F0;
    case 0x800337F4u: goto label_800337F4;
    case 0x800337F8u: goto label_800337F8;
    case 0x800337FCu: goto label_800337FC;
    case 0x80033800u: goto label_80033800;
    case 0x80033804u: goto label_80033804;
    case 0x80033808u: goto label_80033808;
    case 0x8003380Cu: goto label_8003380C;
    case 0x80033810u: goto label_80033810;
    case 0x80033814u: goto label_80033814;
    case 0x80033818u: goto label_80033818;
    case 0x8003381Cu: goto label_8003381C;
    case 0x80033820u: goto label_80033820;
    case 0x80033824u: goto label_80033824;
    case 0x80033828u: goto label_80033828;
    case 0x8003382Cu: goto label_8003382C;
    case 0x80033830u: goto label_80033830;
    case 0x80033834u: goto label_80033834;
    case 0x80033838u: goto label_80033838;
    case 0x8003383Cu: goto label_8003383C;
    case 0x80033840u: goto label_80033840;
    case 0x80033844u: goto label_80033844;
    case 0x80033848u: goto label_80033848;
    case 0x8003384Cu: goto label_8003384C;
    case 0x80033850u: goto label_80033850;
    case 0x80033854u: goto label_80033854;
    case 0x80033858u: goto label_80033858;
    case 0x8003385Cu: goto label_8003385C;
    case 0x80033860u: goto label_80033860;
    case 0x80033864u: goto label_80033864;
    case 0x80033868u: goto label_80033868;
    case 0x8003386Cu: goto label_8003386C;
    case 0x80033870u: goto label_80033870;
    case 0x80033874u: goto label_80033874;
    case 0x80033878u: goto label_80033878;
    case 0x8003387Cu: goto label_8003387C;
    case 0x80033880u: goto label_80033880;
    case 0x80033884u: goto label_80033884;
    case 0x80033888u: goto label_80033888;
    case 0x8003388Cu: goto label_8003388C;
    case 0x80033890u: goto label_80033890;
    case 0x80033894u: goto label_80033894;
    case 0x80033898u: goto label_80033898;
    case 0x8003389Cu: goto label_8003389C;
    case 0x800338A0u: goto label_800338A0;
    case 0x800338A4u: goto label_800338A4;
    case 0x800338A8u: goto label_800338A8;
    case 0x800338ACu: goto label_800338AC;
    case 0x800338B0u: goto label_800338B0;
    case 0x800338B4u: goto label_800338B4;
    case 0x800338B8u: goto label_800338B8;
    case 0x800338BCu: goto label_800338BC;
    case 0x800338C0u: goto label_800338C0;
    case 0x800338C4u: goto label_800338C4;
    case 0x800338C8u: goto label_800338C8;
    case 0x800338CCu: goto label_800338CC;
    case 0x800338D0u: goto label_800338D0;
    case 0x800338D4u: goto label_800338D4;
    case 0x800338D8u: goto label_800338D8;
    case 0x800338DCu: goto label_800338DC;
    case 0x800338E0u: goto label_800338E0;
    case 0x800338E4u: goto label_800338E4;
    case 0x800338E8u: goto label_800338E8;
    case 0x800338ECu: goto label_800338EC;
    case 0x800338F0u: goto label_800338F0;
    case 0x800338F4u: goto label_800338F4;
    case 0x800338F8u: goto label_800338F8;
    case 0x800338FCu: goto label_800338FC;
    case 0x80033900u: goto label_80033900;
    case 0x80033904u: goto label_80033904;
    case 0x80033908u: goto label_80033908;
    case 0x8003390Cu: goto label_8003390C;
    case 0x80033910u: goto label_80033910;
    case 0x80033914u: goto label_80033914;
    case 0x80033918u: goto label_80033918;
    case 0x8003391Cu: goto label_8003391C;
    case 0x80033920u: goto label_80033920;
    case 0x80033924u: goto label_80033924;
    case 0x80033928u: goto label_80033928;
    case 0x8003392Cu: goto label_8003392C;
    case 0x80033930u: goto label_80033930;
    case 0x80033934u: goto label_80033934;
    case 0x80033938u: goto label_80033938;
    case 0x8003393Cu: goto label_8003393C;
    case 0x80033940u: goto label_80033940;
    case 0x80033944u: goto label_80033944;
    case 0x80033948u: goto label_80033948;
    case 0x8003394Cu: goto label_8003394C;
    case 0x80033950u: goto label_80033950;
    case 0x80033954u: goto label_80033954;
    case 0x80033958u: goto label_80033958;
    case 0x8003395Cu: goto label_8003395C;
    case 0x80033960u: goto label_80033960;
    case 0x80033964u: goto label_80033964;
    case 0x80033968u: goto label_80033968;
    case 0x8003396Cu: goto label_8003396C;
    case 0x80033970u: goto label_80033970;
    case 0x80033974u: goto label_80033974;
    case 0x80033978u: goto label_80033978;
    case 0x8003397Cu: goto label_8003397C;
    case 0x80033980u: goto label_80033980;
    case 0x80033984u: goto label_80033984;
    case 0x80033988u: goto label_80033988;
    case 0x8003398Cu: goto label_8003398C;
    case 0x80033990u: goto label_80033990;
    case 0x80033994u: goto label_80033994;
    case 0x80033998u: goto label_80033998;
    case 0x8003399Cu: goto label_8003399C;
    case 0x800339A0u: goto label_800339A0;
    case 0x800339A4u: goto label_800339A4;
    case 0x800339A8u: goto label_800339A8;
    case 0x800339ACu: goto label_800339AC;
    case 0x800339B0u: goto label_800339B0;
    case 0x800339B4u: goto label_800339B4;
    case 0x800339B8u: goto label_800339B8;
    case 0x800339BCu: goto label_800339BC;
    case 0x800339C0u: goto label_800339C0;
    case 0x800339C4u: goto label_800339C4;
    case 0x800339C8u: goto label_800339C8;
    case 0x800339CCu: goto label_800339CC;
    case 0x800339D0u: goto label_800339D0;
    case 0x800339D4u: goto label_800339D4;
    case 0x800339D8u: goto label_800339D8;
    case 0x800339DCu: goto label_800339DC;
    case 0x800339E0u: goto label_800339E0;
    case 0x800339E4u: goto label_800339E4;
    case 0x800339E8u: goto label_800339E8;
    case 0x800339ECu: goto label_800339EC;
    case 0x800339F0u: goto label_800339F0;
    case 0x800339F4u: goto label_800339F4;
    case 0x800339F8u: goto label_800339F8;
    case 0x800339FCu: goto label_800339FC;
    case 0x80033A00u: goto label_80033A00;
    case 0x80033A04u: goto label_80033A04;
    case 0x80033A08u: goto label_80033A08;
    case 0x80033A0Cu: goto label_80033A0C;
    case 0x80033A10u: goto label_80033A10;
    case 0x80033A14u: goto label_80033A14;
    case 0x80033A18u: goto label_80033A18;
    case 0x80033A1Cu: goto label_80033A1C;
    case 0x80033A20u: goto label_80033A20;
    case 0x80033A24u: goto label_80033A24;
    case 0x80033A28u: goto label_80033A28;
    case 0x80033A2Cu: goto label_80033A2C;
    case 0x80033A30u: goto label_80033A30;
    case 0x80033A34u: goto label_80033A34;
    case 0x80033A38u: goto label_80033A38;
    case 0x80033A3Cu: goto label_80033A3C;
    case 0x80033A40u: goto label_80033A40;
    case 0x80033A44u: goto label_80033A44;
    case 0x80033A48u: goto label_80033A48;
    case 0x80033A4Cu: goto label_80033A4C;
    case 0x80033A50u: goto label_80033A50;
    case 0x80033A54u: goto label_80033A54;
    case 0x80033A58u: goto label_80033A58;
    case 0x80033A5Cu: goto label_80033A5C;
    case 0x80033A60u: goto label_80033A60;
    case 0x80033A64u: goto label_80033A64;
    case 0x80033A68u: goto label_80033A68;
    case 0x80033A6Cu: goto label_80033A6C;
    case 0x80033A70u: goto label_80033A70;
    case 0x80033A74u: goto label_80033A74;
    case 0x80033A78u: goto label_80033A78;
    case 0x80033A7Cu: goto label_80033A7C;
    case 0x80033A80u: goto label_80033A80;
    case 0x80033A84u: goto label_80033A84;
    case 0x80033A88u: goto label_80033A88;
    case 0x80033A8Cu: goto label_80033A8C;
    case 0x80033A90u: goto label_80033A90;
    case 0x80033A94u: goto label_80033A94;
    case 0x80033A98u: goto label_80033A98;
    case 0x80033A9Cu: goto label_80033A9C;
    case 0x80033AA0u: goto label_80033AA0;
    case 0x80033AA4u: goto label_80033AA4;
    case 0x80033AA8u: goto label_80033AA8;
    case 0x80033AACu: goto label_80033AAC;
    case 0x80033AB0u: goto label_80033AB0;
    case 0x80033AB4u: goto label_80033AB4;
    case 0x80033AB8u: goto label_80033AB8;
    case 0x80033ABCu: goto label_80033ABC;
    case 0x80033AC0u: goto label_80033AC0;
    case 0x80033AC4u: goto label_80033AC4;
    case 0x80033AC8u: goto label_80033AC8;
    case 0x80033ACCu: goto label_80033ACC;
    case 0x80033AD0u: goto label_80033AD0;
    case 0x80033AD4u: goto label_80033AD4;
    case 0x80033AD8u: goto label_80033AD8;
    case 0x80033ADCu: goto label_80033ADC;
    case 0x80033AE0u: goto label_80033AE0;
    case 0x80033AE4u: goto label_80033AE4;
    case 0x80033AE8u: goto label_80033AE8;
    case 0x80033AECu: goto label_80033AEC;
    case 0x80033AF0u: goto label_80033AF0;
    case 0x80033AF4u: goto label_80033AF4;
    case 0x80033AF8u: goto label_80033AF8;
    case 0x80033AFCu: goto label_80033AFC;
    case 0x80033B00u: goto label_80033B00;
    case 0x80033B04u: goto label_80033B04;
    case 0x80033B08u: goto label_80033B08;
    case 0x80033B0Cu: goto label_80033B0C;
    case 0x80033B10u: goto label_80033B10;
    case 0x80033B14u: goto label_80033B14;
    case 0x80033B18u: goto label_80033B18;
    case 0x80033B1Cu: goto label_80033B1C;
    case 0x80033B20u: goto label_80033B20;
    case 0x80033B24u: goto label_80033B24;
    case 0x80033B28u: goto label_80033B28;
    case 0x80033B2Cu: goto label_80033B2C;
    case 0x80033B30u: goto label_80033B30;
    case 0x80033B34u: goto label_80033B34;
    case 0x80033B38u: goto label_80033B38;
    case 0x80033B3Cu: goto label_80033B3C;
    case 0x80033B40u: goto label_80033B40;
    case 0x80033B44u: goto label_80033B44;
    case 0x80033B48u: goto label_80033B48;
    case 0x80033B4Cu: goto label_80033B4C;
    case 0x80033B50u: goto label_80033B50;
    case 0x80033B54u: goto label_80033B54;
    case 0x80033B58u: goto label_80033B58;
    case 0x80033B5Cu: goto label_80033B5C;
    case 0x80033B60u: goto label_80033B60;
    case 0x80033B64u: goto label_80033B64;
    case 0x80033B68u: goto label_80033B68;
    case 0x80033B6Cu: goto label_80033B6C;
    case 0x80033B70u: goto label_80033B70;
    case 0x80033B74u: goto label_80033B74;
    case 0x80033B78u: goto label_80033B78;
    case 0x80033B7Cu: goto label_80033B7C;
    case 0x80033B80u: goto label_80033B80;
    case 0x80033B84u: goto label_80033B84;
    case 0x80033B88u: goto label_80033B88;
    case 0x80033B8Cu: goto label_80033B8C;
    case 0x80033B90u: goto label_80033B90;
    case 0x80033B94u: goto label_80033B94;
    case 0x80033B98u: goto label_80033B98;
    case 0x80033B9Cu: goto label_80033B9C;
    case 0x80033BA0u: goto label_80033BA0;
    case 0x80033BA4u: goto label_80033BA4;
    case 0x80033BA8u: goto label_80033BA8;
    case 0x80033BACu: goto label_80033BAC;
    case 0x80033BB0u: goto label_80033BB0;
    case 0x80033BB4u: goto label_80033BB4;
    case 0x80033BB8u: goto label_80033BB8;
    case 0x80033BBCu: goto label_80033BBC;
    case 0x80033BC0u: goto label_80033BC0;
    case 0x80033BC4u: goto label_80033BC4;
    case 0x80033BC8u: goto label_80033BC8;
    case 0x80033BCCu: goto label_80033BCC;
    case 0x80033BD0u: goto label_80033BD0;
    case 0x80033BD4u: goto label_80033BD4;
    case 0x80033BD8u: goto label_80033BD8;
    case 0x80033BDCu: goto label_80033BDC;
    case 0x80033BE0u: goto label_80033BE0;
    case 0x80033BE4u: goto label_80033BE4;
    case 0x80033BE8u: goto label_80033BE8;
    case 0x80033BECu: goto label_80033BEC;
    case 0x80033BF0u: goto label_80033BF0;
    case 0x80033BF4u: goto label_80033BF4;
    case 0x80033BF8u: goto label_80033BF8;
    case 0x80033BFCu: goto label_80033BFC;
    case 0x80033C00u: goto label_80033C00;
    case 0x80033C04u: goto label_80033C04;
    case 0x80033C08u: goto label_80033C08;
    case 0x80033C0Cu: goto label_80033C0C;
    case 0x80033C10u: goto label_80033C10;
    case 0x80033C14u: goto label_80033C14;
    case 0x80033C18u: goto label_80033C18;
    case 0x80033C1Cu: goto label_80033C1C;
    case 0x80033C20u: goto label_80033C20;
    case 0x80033C24u: goto label_80033C24;
    case 0x80033C28u: goto label_80033C28;
    case 0x80033C2Cu: goto label_80033C2C;
    case 0x80033C30u: goto label_80033C30;
    case 0x80033C34u: goto label_80033C34;
    case 0x80033C38u: goto label_80033C38;
    case 0x80033C3Cu: goto label_80033C3C;
    case 0x80033C40u: goto label_80033C40;
    case 0x80033C44u: goto label_80033C44;
    case 0x80033C48u: goto label_80033C48;
    case 0x80033C4Cu: goto label_80033C4C;
    case 0x80033C50u: goto label_80033C50;
    case 0x80033C54u: goto label_80033C54;
    case 0x80033C58u: goto label_80033C58;
    case 0x80033C5Cu: goto label_80033C5C;
    case 0x80033C60u: goto label_80033C60;
    case 0x80033C64u: goto label_80033C64;
    case 0x80033C68u: goto label_80033C68;
    case 0x80033C6Cu: goto label_80033C6C;
    case 0x80033C70u: goto label_80033C70;
    case 0x80033C74u: goto label_80033C74;
    case 0x80033C78u: goto label_80033C78;
    case 0x80033C7Cu: goto label_80033C7C;
    case 0x80033C80u: goto label_80033C80;
    case 0x80033C84u: goto label_80033C84;
    case 0x80033C88u: goto label_80033C88;
    case 0x80033C8Cu: goto label_80033C8C;
    case 0x80033C90u: goto label_80033C90;
    case 0x80033C94u: goto label_80033C94;
    case 0x80033C98u: goto label_80033C98;
    case 0x80033C9Cu: goto label_80033C9C;
    case 0x80033CA0u: goto label_80033CA0;
    case 0x80033CA4u: goto label_80033CA4;
    case 0x80033CA8u: goto label_80033CA8;
    case 0x80033CACu: goto label_80033CAC;
    case 0x80033CB0u: goto label_80033CB0;
    case 0x80033CB4u: goto label_80033CB4;
    case 0x80033CB8u: goto label_80033CB8;
    case 0x80033CBCu: goto label_80033CBC;
    case 0x80033CC0u: goto label_80033CC0;
    case 0x80033CC4u: goto label_80033CC4;
    case 0x80033CC8u: goto label_80033CC8;
    case 0x80033CCCu: goto label_80033CCC;
    case 0x80033CD0u: goto label_80033CD0;
    case 0x80033CD4u: goto label_80033CD4;
    case 0x80033CD8u: goto label_80033CD8;
    case 0x80033CDCu: goto label_80033CDC;
    case 0x80033CE0u: goto label_80033CE0;
    case 0x80033CE4u: goto label_80033CE4;
    case 0x80033CE8u: goto label_80033CE8;
    case 0x80033CECu: goto label_80033CEC;
    case 0x80033CF0u: goto label_80033CF0;
    case 0x80033CF4u: goto label_80033CF4;
    case 0x80033CF8u: goto label_80033CF8;
    case 0x80033CFCu: goto label_80033CFC;
    case 0x80033D00u: goto label_80033D00;
    case 0x80033D04u: goto label_80033D04;
    case 0x80033D08u: goto label_80033D08;
    case 0x80033D0Cu: goto label_80033D0C;
    case 0x80033D10u: goto label_80033D10;
    case 0x80033D14u: goto label_80033D14;
    case 0x80033D18u: goto label_80033D18;
    case 0x80033D1Cu: goto label_80033D1C;
    case 0x80033D20u: goto label_80033D20;
    case 0x80033D24u: goto label_80033D24;
    case 0x80033D28u: goto label_80033D28;
    case 0x80033D2Cu: goto label_80033D2C;
    case 0x80033D30u: goto label_80033D30;
    case 0x80033D34u: goto label_80033D34;
    case 0x80033D38u: goto label_80033D38;
    case 0x80033D3Cu: goto label_80033D3C;
    case 0x80033D40u: goto label_80033D40;
    case 0x80033D44u: goto label_80033D44;
    case 0x80033D48u: goto label_80033D48;
    case 0x80033D4Cu: goto label_80033D4C;
    case 0x80033D50u: goto label_80033D50;
    case 0x80033D54u: goto label_80033D54;
    case 0x80033D58u: goto label_80033D58;
    case 0x80033D5Cu: goto label_80033D5C;
    case 0x80033D60u: goto label_80033D60;
    case 0x80033D64u: goto label_80033D64;
    case 0x80033D68u: goto label_80033D68;
    case 0x80033D6Cu: goto label_80033D6C;
    case 0x80033D70u: goto label_80033D70;
    case 0x80033D74u: goto label_80033D74;
    case 0x80033D78u: goto label_80033D78;
    case 0x80033D7Cu: goto label_80033D7C;
    case 0x80033D80u: goto label_80033D80;
    case 0x80033D84u: goto label_80033D84;
    case 0x80033D88u: goto label_80033D88;
    case 0x80033D8Cu: goto label_80033D8C;
    case 0x80033D90u: goto label_80033D90;
    case 0x80033D94u: goto label_80033D94;
    case 0x80033D98u: goto label_80033D98;
    case 0x80033D9Cu: goto label_80033D9C;
    case 0x80033DA0u: goto label_80033DA0;
    case 0x80033DA4u: goto label_80033DA4;
    case 0x80033DA8u: goto label_80033DA8;
    case 0x80033DACu: goto label_80033DAC;
    case 0x80033DB0u: goto label_80033DB0;
    case 0x80033DB4u: goto label_80033DB4;
    case 0x80033DB8u: goto label_80033DB8;
    case 0x80033DBCu: goto label_80033DBC;
    case 0x80033DC0u: goto label_80033DC0;
    case 0x80033DC4u: goto label_80033DC4;
    case 0x80033DC8u: goto label_80033DC8;
    case 0x80033DCCu: goto label_80033DCC;
    case 0x80033DD0u: goto label_80033DD0;
    case 0x80033DD4u: goto label_80033DD4;
    case 0x80033DD8u: goto label_80033DD8;
    case 0x80033DDCu: goto label_80033DDC;
    case 0x80033DE0u: goto label_80033DE0;
    case 0x80033DE4u: goto label_80033DE4;
    case 0x80033DE8u: goto label_80033DE8;
    case 0x80033DECu: goto label_80033DEC;
    case 0x80033DF0u: goto label_80033DF0;
    case 0x80033DF4u: goto label_80033DF4;
    case 0x80033DF8u: goto label_80033DF8;
    case 0x80033DFCu: goto label_80033DFC;
    case 0x80033E00u: goto label_80033E00;
    case 0x80033E04u: goto label_80033E04;
    case 0x80033E08u: goto label_80033E08;
    case 0x80033E0Cu: goto label_80033E0C;
    case 0x80033E10u: goto label_80033E10;
    case 0x80033E14u: goto label_80033E14;
    case 0x80033E18u: goto label_80033E18;
    case 0x80033E1Cu: goto label_80033E1C;
    case 0x80033E20u: goto label_80033E20;
    case 0x80033E24u: goto label_80033E24;
    case 0x80033E28u: goto label_80033E28;
    case 0x80033E2Cu: goto label_80033E2C;
    case 0x80033E30u: goto label_80033E30;
    case 0x80033E34u: goto label_80033E34;
    case 0x80033E38u: goto label_80033E38;
    case 0x80033E3Cu: goto label_80033E3C;
    case 0x80033E40u: goto label_80033E40;
    case 0x80033E44u: goto label_80033E44;
    case 0x80033E48u: goto label_80033E48;
    case 0x80033E4Cu: goto label_80033E4C;
    case 0x80033E50u: goto label_80033E50;
    case 0x80033E54u: goto label_80033E54;
    case 0x80033E58u: goto label_80033E58;
    case 0x80033E5Cu: goto label_80033E5C;
    case 0x80033E60u: goto label_80033E60;
    case 0x80033E64u: goto label_80033E64;
    case 0x80033E68u: goto label_80033E68;
    case 0x80033E6Cu: goto label_80033E6C;
    case 0x80033E70u: goto label_80033E70;
    case 0x80033E74u: goto label_80033E74;
    case 0x80033E78u: goto label_80033E78;
    case 0x80033E7Cu: goto label_80033E7C;
    case 0x80033E80u: goto label_80033E80;
    case 0x80033E84u: goto label_80033E84;
    case 0x80033E88u: goto label_80033E88;
    case 0x80033E8Cu: goto label_80033E8C;
    case 0x80033E90u: goto label_80033E90;
    case 0x80033E94u: goto label_80033E94;
    case 0x80033E98u: goto label_80033E98;
    case 0x80033E9Cu: goto label_80033E9C;
    case 0x80033EA0u: goto label_80033EA0;
    case 0x80033EA4u: goto label_80033EA4;
    case 0x80033EA8u: goto label_80033EA8;
    case 0x80033EACu: goto label_80033EAC;
    case 0x80033EB0u: goto label_80033EB0;
    case 0x80033EB4u: goto label_80033EB4;
    case 0x80033EB8u: goto label_80033EB8;
    case 0x80033EBCu: goto label_80033EBC;
    case 0x80033EC0u: goto label_80033EC0;
    case 0x80033EC4u: goto label_80033EC4;
    case 0x80033EC8u: goto label_80033EC8;
    case 0x80033ECCu: goto label_80033ECC;
    case 0x80033ED0u: goto label_80033ED0;
    case 0x80033ED4u: goto label_80033ED4;
    case 0x80033ED8u: goto label_80033ED8;
    case 0x80033EDCu: goto label_80033EDC;
    case 0x80033EE0u: goto label_80033EE0;
    case 0x80033EE4u: goto label_80033EE4;
    case 0x80033EE8u: goto label_80033EE8;
    case 0x80033EECu: goto label_80033EEC;
    case 0x80033EF0u: goto label_80033EF0;
    case 0x80033EF4u: goto label_80033EF4;
    case 0x80033EF8u: goto label_80033EF8;
    case 0x80033EFCu: goto label_80033EFC;
    case 0x80033F00u: goto label_80033F00;
    case 0x80033F04u: goto label_80033F04;
    case 0x80033F08u: goto label_80033F08;
    case 0x80033F0Cu: goto label_80033F0C;
    case 0x80033F10u: goto label_80033F10;
    case 0x80033F14u: goto label_80033F14;
    case 0x80033F18u: goto label_80033F18;
    case 0x80033F1Cu: goto label_80033F1C;
    case 0x80033F20u: goto label_80033F20;
    case 0x80033F24u: goto label_80033F24;
    case 0x80033F28u: goto label_80033F28;
    case 0x80033F2Cu: goto label_80033F2C;
    case 0x80033F30u: goto label_80033F30;
    case 0x80033F34u: goto label_80033F34;
    case 0x80033F38u: goto label_80033F38;
    case 0x80033F3Cu: goto label_80033F3C;
    case 0x80033F40u: goto label_80033F40;
    case 0x80033F44u: goto label_80033F44;
    case 0x80033F48u: goto label_80033F48;
    case 0x80033F4Cu: goto label_80033F4C;
    case 0x80033F50u: goto label_80033F50;
    case 0x80033F54u: goto label_80033F54;
    case 0x80033F58u: goto label_80033F58;
    case 0x80033F5Cu: goto label_80033F5C;
    case 0x80033F60u: goto label_80033F60;
    case 0x80033F64u: goto label_80033F64;
    case 0x80033F68u: goto label_80033F68;
    case 0x80033F6Cu: goto label_80033F6C;
    case 0x80033F70u: goto label_80033F70;
    case 0x80033F74u: goto label_80033F74;
    case 0x80033F78u: goto label_80033F78;
    case 0x80033F7Cu: goto label_80033F7C;
    case 0x80033F80u: goto label_80033F80;
    case 0x80033F84u: goto label_80033F84;
    case 0x80033F88u: goto label_80033F88;
    case 0x80033F8Cu: goto label_80033F8C;
    case 0x80033F90u: goto label_80033F90;
    case 0x80033F94u: goto label_80033F94;
    case 0x80033F98u: goto label_80033F98;
    case 0x80033F9Cu: goto label_80033F9C;
    case 0x80033FA0u: goto label_80033FA0;
    case 0x80033FA4u: goto label_80033FA4;
    case 0x80033FA8u: goto label_80033FA8;
    case 0x80033FACu: goto label_80033FAC;
    case 0x80033FB0u: goto label_80033FB0;
    case 0x80033FB4u: goto label_80033FB4;
    case 0x80033FB8u: goto label_80033FB8;
    case 0x80033FBCu: goto label_80033FBC;
    case 0x80033FC0u: goto label_80033FC0;
    case 0x80033FC4u: goto label_80033FC4;
    case 0x80033FC8u: goto label_80033FC8;
    case 0x80033FCCu: goto label_80033FCC;
    case 0x80033FD0u: goto label_80033FD0;
    case 0x80033FD4u: goto label_80033FD4;
    case 0x80033FD8u: goto label_80033FD8;
    case 0x80033FDCu: goto label_80033FDC;
    case 0x80033FE0u: goto label_80033FE0;
    case 0x80033FE4u: goto label_80033FE4;
    case 0x80033FE8u: goto label_80033FE8;
    case 0x80033FECu: goto label_80033FEC;
    case 0x80033FF0u: goto label_80033FF0;
    case 0x80033FF4u: goto label_80033FF4;
    case 0x80033FF8u: goto label_80033FF8;
    case 0x80033FFCu: goto label_80033FFC;
    case 0x80034000u: goto label_80034000;
    case 0x80034004u: goto label_80034004;
    case 0x80034008u: goto label_80034008;
    case 0x8003400Cu: goto label_8003400C;
    case 0x80034010u: goto label_80034010;
    case 0x80034014u: goto label_80034014;
    case 0x80034018u: goto label_80034018;
    case 0x8003401Cu: goto label_8003401C;
    case 0x80034020u: goto label_80034020;
    case 0x80034024u: goto label_80034024;
    case 0x80034028u: goto label_80034028;
    case 0x8003402Cu: goto label_8003402C;
    case 0x80034030u: goto label_80034030;
    case 0x80034034u: goto label_80034034;
    case 0x80034038u: goto label_80034038;
    case 0x8003403Cu: goto label_8003403C;
    case 0x80034040u: goto label_80034040;
    case 0x80034044u: goto label_80034044;
    case 0x80034048u: goto label_80034048;
    case 0x8003404Cu: goto label_8003404C;
    case 0x80034050u: goto label_80034050;
    case 0x80034054u: goto label_80034054;
    case 0x80034058u: goto label_80034058;
    case 0x8003405Cu: goto label_8003405C;
    case 0x80034060u: goto label_80034060;
    case 0x80034064u: goto label_80034064;
    case 0x80034068u: goto label_80034068;
    case 0x8003406Cu: goto label_8003406C;
    case 0x80034070u: goto label_80034070;
    case 0x80034074u: goto label_80034074;
    case 0x80034078u: goto label_80034078;
    case 0x8003407Cu: goto label_8003407C;
    case 0x80034080u: goto label_80034080;
    case 0x80034084u: goto label_80034084;
    case 0x80034088u: goto label_80034088;
    case 0x8003408Cu: goto label_8003408C;
    case 0x80034090u: goto label_80034090;
    case 0x80034094u: goto label_80034094;
    case 0x80034098u: goto label_80034098;
    case 0x8003409Cu: goto label_8003409C;
    case 0x800340A0u: goto label_800340A0;
    case 0x800340A4u: goto label_800340A4;
    case 0x800340A8u: goto label_800340A8;
    case 0x800340ACu: goto label_800340AC;
    case 0x800340B0u: goto label_800340B0;
    case 0x800340B4u: goto label_800340B4;
    case 0x800340B8u: goto label_800340B8;
    case 0x800340BCu: goto label_800340BC;
    case 0x800340C0u: goto label_800340C0;
    case 0x800340C4u: goto label_800340C4;
    case 0x800340C8u: goto label_800340C8;
    case 0x800340CCu: goto label_800340CC;
    case 0x800340D0u: goto label_800340D0;
    case 0x800340D4u: goto label_800340D4;
    case 0x800340D8u: goto label_800340D8;
    case 0x800340DCu: goto label_800340DC;
    case 0x800340E0u: goto label_800340E0;
    case 0x800340E4u: goto label_800340E4;
    case 0x800340E8u: goto label_800340E8;
    case 0x800340ECu: goto label_800340EC;
    case 0x800340F0u: goto label_800340F0;
    case 0x800340F4u: goto label_800340F4;
    case 0x800340F8u: goto label_800340F8;
    case 0x800340FCu: goto label_800340FC;
    case 0x80034100u: goto label_80034100;
    case 0x80034104u: goto label_80034104;
    case 0x80034108u: goto label_80034108;
    case 0x8003410Cu: goto label_8003410C;
    case 0x80034110u: goto label_80034110;
    case 0x80034114u: goto label_80034114;
    case 0x80034118u: goto label_80034118;
    case 0x8003411Cu: goto label_8003411C;
    case 0x80034120u: goto label_80034120;
    case 0x80034124u: goto label_80034124;
    case 0x80034128u: goto label_80034128;
    case 0x8003412Cu: goto label_8003412C;
    case 0x80034130u: goto label_80034130;
    case 0x80034134u: goto label_80034134;
    case 0x80034138u: goto label_80034138;
    case 0x8003413Cu: goto label_8003413C;
    case 0x80034140u: goto label_80034140;
    case 0x80034144u: goto label_80034144;
    case 0x80034148u: goto label_80034148;
    case 0x8003414Cu: goto label_8003414C;
    case 0x80034150u: goto label_80034150;
    case 0x80034154u: goto label_80034154;
    case 0x80034158u: goto label_80034158;
    case 0x8003415Cu: goto label_8003415C;
    case 0x80034160u: goto label_80034160;
    case 0x80034164u: goto label_80034164;
    case 0x80034168u: goto label_80034168;
    case 0x8003416Cu: goto label_8003416C;
    case 0x80034170u: goto label_80034170;
    case 0x80034174u: goto label_80034174;
    case 0x80034178u: goto label_80034178;
    case 0x8003417Cu: goto label_8003417C;
    case 0x80034180u: goto label_80034180;
    case 0x80034184u: goto label_80034184;
    case 0x80034188u: goto label_80034188;
    case 0x8003418Cu: goto label_8003418C;
    case 0x80034190u: goto label_80034190;
    case 0x80034194u: goto label_80034194;
    case 0x80034198u: goto label_80034198;
    case 0x8003419Cu: goto label_8003419C;
    case 0x800341A0u: goto label_800341A0;
    case 0x800341A4u: goto label_800341A4;
    case 0x800341A8u: goto label_800341A8;
    case 0x800341ACu: goto label_800341AC;
    case 0x800341B0u: goto label_800341B0;
    case 0x800341B4u: goto label_800341B4;
    case 0x800341B8u: goto label_800341B8;
    case 0x800341BCu: goto label_800341BC;
    case 0x800341C0u: goto label_800341C0;
    case 0x800341C4u: goto label_800341C4;
    case 0x800341C8u: goto label_800341C8;
    case 0x800341CCu: goto label_800341CC;
    case 0x800341D0u: goto label_800341D0;
    case 0x800341D4u: goto label_800341D4;
    case 0x800341D8u: goto label_800341D8;
    case 0x800341DCu: goto label_800341DC;
    case 0x800341E0u: goto label_800341E0;
    case 0x800341E4u: goto label_800341E4;
    case 0x800341E8u: goto label_800341E8;
    case 0x800341ECu: goto label_800341EC;
    case 0x800341F0u: goto label_800341F0;
    case 0x800341F4u: goto label_800341F4;
    case 0x800341F8u: goto label_800341F8;
    case 0x800341FCu: goto label_800341FC;
    case 0x80034200u: goto label_80034200;
    case 0x80034204u: goto label_80034204;
    case 0x80034208u: goto label_80034208;
    case 0x8003420Cu: goto label_8003420C;
    case 0x80034210u: goto label_80034210;
    case 0x80034214u: goto label_80034214;
    case 0x80034218u: goto label_80034218;
    case 0x8003421Cu: goto label_8003421C;
    case 0x80034220u: goto label_80034220;
    case 0x80034224u: goto label_80034224;
    case 0x80034228u: goto label_80034228;
    case 0x8003422Cu: goto label_8003422C;
    case 0x80034230u: goto label_80034230;
    case 0x80034234u: goto label_80034234;
    case 0x80034238u: goto label_80034238;
    case 0x8003423Cu: goto label_8003423C;
    case 0x80034240u: goto label_80034240;
    case 0x80034244u: goto label_80034244;
    case 0x80034248u: goto label_80034248;
    case 0x8003424Cu: goto label_8003424C;
    case 0x80034250u: goto label_80034250;
    case 0x80034254u: goto label_80034254;
    case 0x80034258u: goto label_80034258;
    case 0x8003425Cu: goto label_8003425C;
    case 0x80034260u: goto label_80034260;
    case 0x80034264u: goto label_80034264;
    case 0x80034268u: goto label_80034268;
    case 0x8003426Cu: goto label_8003426C;
    case 0x80034270u: goto label_80034270;
    case 0x80034274u: goto label_80034274;
    case 0x80034278u: goto label_80034278;
    case 0x8003427Cu: goto label_8003427C;
    case 0x80034280u: goto label_80034280;
    case 0x80034284u: goto label_80034284;
    case 0x80034288u: goto label_80034288;
    case 0x8003428Cu: goto label_8003428C;
    case 0x80034290u: goto label_80034290;
    case 0x80034294u: goto label_80034294;
    case 0x80034298u: goto label_80034298;
    case 0x8003429Cu: goto label_8003429C;
    case 0x800342A0u: goto label_800342A0;
    case 0x800342A4u: goto label_800342A4;
    case 0x800342A8u: goto label_800342A8;
    case 0x800342ACu: goto label_800342AC;
    case 0x800342B0u: goto label_800342B0;
    case 0x800342B4u: goto label_800342B4;
    case 0x800342B8u: goto label_800342B8;
    case 0x800342BCu: goto label_800342BC;
    case 0x800342C0u: goto label_800342C0;
    case 0x800342C4u: goto label_800342C4;
    case 0x800342C8u: goto label_800342C8;
    case 0x800342CCu: goto label_800342CC;
    case 0x800342D0u: goto label_800342D0;
    case 0x800342D4u: goto label_800342D4;
    case 0x800342D8u: goto label_800342D8;
    case 0x800342DCu: goto label_800342DC;
    case 0x800342E0u: goto label_800342E0;
    case 0x800342E4u: goto label_800342E4;
    case 0x800342E8u: goto label_800342E8;
    case 0x800342ECu: goto label_800342EC;
    case 0x800342F0u: goto label_800342F0;
    case 0x800342F4u: goto label_800342F4;
    case 0x800342F8u: goto label_800342F8;
    case 0x800342FCu: goto label_800342FC;
    case 0x80034300u: goto label_80034300;
    case 0x80034304u: goto label_80034304;
    case 0x80034308u: goto label_80034308;
    case 0x8003430Cu: goto label_8003430C;
    case 0x80034310u: goto label_80034310;
    case 0x80034314u: goto label_80034314;
    case 0x80034318u: goto label_80034318;
    case 0x8003431Cu: goto label_8003431C;
    case 0x80034320u: goto label_80034320;
    case 0x80034324u: goto label_80034324;
    case 0x80034328u: goto label_80034328;
    case 0x8003432Cu: goto label_8003432C;
    case 0x80034330u: goto label_80034330;
    case 0x80034334u: goto label_80034334;
    case 0x80034338u: goto label_80034338;
    case 0x8003433Cu: goto label_8003433C;
    case 0x80034340u: goto label_80034340;
    case 0x80034344u: goto label_80034344;
    case 0x80034348u: goto label_80034348;
    case 0x8003434Cu: goto label_8003434C;
    case 0x80034350u: goto label_80034350;
    case 0x80034354u: goto label_80034354;
    case 0x80034358u: goto label_80034358;
    case 0x8003435Cu: goto label_8003435C;
    case 0x80034360u: goto label_80034360;
    case 0x80034364u: goto label_80034364;
    case 0x80034368u: goto label_80034368;
    case 0x8003436Cu: goto label_8003436C;
    case 0x80034370u: goto label_80034370;
    case 0x80034374u: goto label_80034374;
    case 0x80034378u: goto label_80034378;
    case 0x8003437Cu: goto label_8003437C;
    case 0x80034380u: goto label_80034380;
    case 0x80034384u: goto label_80034384;
    case 0x80034388u: goto label_80034388;
    case 0x8003438Cu: goto label_8003438C;
    case 0x80034390u: goto label_80034390;
    case 0x80034394u: goto label_80034394;
    case 0x80034398u: goto label_80034398;
    case 0x8003439Cu: goto label_8003439C;
    case 0x800343A0u: goto label_800343A0;
    case 0x800343A4u: goto label_800343A4;
    case 0x800343A8u: goto label_800343A8;
    case 0x800343ACu: goto label_800343AC;
    case 0x800343B0u: goto label_800343B0;
    case 0x800343B4u: goto label_800343B4;
    case 0x800343B8u: goto label_800343B8;
    case 0x800343BCu: goto label_800343BC;
    case 0x800343C0u: goto label_800343C0;
    case 0x800343C4u: goto label_800343C4;
    case 0x800343C8u: goto label_800343C8;
    case 0x800343CCu: goto label_800343CC;
    case 0x800343D0u: goto label_800343D0;
    case 0x800343D4u: goto label_800343D4;
    case 0x800343D8u: goto label_800343D8;
    case 0x800343DCu: goto label_800343DC;
    case 0x800343E0u: goto label_800343E0;
    case 0x800343E4u: goto label_800343E4;
    case 0x800343E8u: goto label_800343E8;
    case 0x800343ECu: goto label_800343EC;
    case 0x800343F0u: goto label_800343F0;
    case 0x800343F4u: goto label_800343F4;
    case 0x800343F8u: goto label_800343F8;
    case 0x800343FCu: goto label_800343FC;
    case 0x80034400u: goto label_80034400;
    case 0x80034404u: goto label_80034404;
    case 0x80034408u: goto label_80034408;
    case 0x8003440Cu: goto label_8003440C;
    case 0x80034410u: goto label_80034410;
    case 0x80034414u: goto label_80034414;
    case 0x80034418u: goto label_80034418;
    case 0x8003441Cu: goto label_8003441C;
    case 0x80034420u: goto label_80034420;
    case 0x80034424u: goto label_80034424;
    case 0x80034428u: goto label_80034428;
    case 0x8003442Cu: goto label_8003442C;
    case 0x80034430u: goto label_80034430;
    case 0x80034434u: goto label_80034434;
    case 0x80034438u: goto label_80034438;
    case 0x8003443Cu: goto label_8003443C;
    case 0x80034440u: goto label_80034440;
    case 0x80034444u: goto label_80034444;
    case 0x80034448u: goto label_80034448;
    case 0x8003444Cu: goto label_8003444C;
    case 0x80034450u: goto label_80034450;
    case 0x80034454u: goto label_80034454;
    case 0x80034458u: goto label_80034458;
    case 0x8003445Cu: goto label_8003445C;
    case 0x80034460u: goto label_80034460;
    case 0x80034464u: goto label_80034464;
    case 0x80034468u: goto label_80034468;
    case 0x8003446Cu: goto label_8003446C;
    case 0x80034470u: goto label_80034470;
    case 0x80034474u: goto label_80034474;
    case 0x80034478u: goto label_80034478;
    case 0x8003447Cu: goto label_8003447C;
    case 0x80034480u: goto label_80034480;
    case 0x80034484u: goto label_80034484;
    case 0x80034488u: goto label_80034488;
    case 0x8003448Cu: goto label_8003448C;
    case 0x80034490u: goto label_80034490;
    case 0x80034494u: goto label_80034494;
    case 0x80034498u: goto label_80034498;
    case 0x8003449Cu: goto label_8003449C;
    case 0x800344A0u: goto label_800344A0;
    case 0x800344A4u: goto label_800344A4;
    case 0x800344A8u: goto label_800344A8;
    case 0x800344ACu: goto label_800344AC;
    case 0x800344B0u: goto label_800344B0;
    case 0x800344B4u: goto label_800344B4;
    case 0x800344B8u: goto label_800344B8;
    case 0x800344BCu: goto label_800344BC;
    case 0x800344C0u: goto label_800344C0;
    case 0x800344C4u: goto label_800344C4;
    case 0x800344C8u: goto label_800344C8;
    case 0x800344CCu: goto label_800344CC;
    case 0x800344D0u: goto label_800344D0;
    case 0x800344D4u: goto label_800344D4;
    case 0x800344D8u: goto label_800344D8;
    case 0x800344DCu: goto label_800344DC;
    case 0x800344E0u: goto label_800344E0;
    case 0x800344E4u: goto label_800344E4;
    case 0x800344E8u: goto label_800344E8;
    case 0x800344ECu: goto label_800344EC;
    case 0x800344F0u: goto label_800344F0;
    case 0x800344F4u: goto label_800344F4;
    case 0x800344F8u: goto label_800344F8;
    case 0x800344FCu: goto label_800344FC;
    case 0x80034500u: goto label_80034500;
    case 0x80034504u: goto label_80034504;
    case 0x80034508u: goto label_80034508;
    case 0x8003450Cu: goto label_8003450C;
    case 0x80034510u: goto label_80034510;
    case 0x80034514u: goto label_80034514;
    case 0x80034518u: goto label_80034518;
    case 0x8003451Cu: goto label_8003451C;
    case 0x80034520u: goto label_80034520;
    case 0x80034524u: goto label_80034524;
    case 0x80034528u: goto label_80034528;
    case 0x8003452Cu: goto label_8003452C;
    case 0x80034530u: goto label_80034530;
    case 0x80034534u: goto label_80034534;
    case 0x80034538u: goto label_80034538;
    case 0x8003453Cu: goto label_8003453C;
    case 0x80034540u: goto label_80034540;
    case 0x80034544u: goto label_80034544;
    case 0x80034548u: goto label_80034548;
    case 0x8003454Cu: goto label_8003454C;
    case 0x80034550u: goto label_80034550;
    case 0x80034554u: goto label_80034554;
    case 0x80034558u: goto label_80034558;
    case 0x8003455Cu: goto label_8003455C;
    case 0x80034560u: goto label_80034560;
    case 0x80034564u: goto label_80034564;
    case 0x80034568u: goto label_80034568;
    case 0x8003456Cu: goto label_8003456C;
    case 0x80034570u: goto label_80034570;
    case 0x80034574u: goto label_80034574;
    case 0x80034578u: goto label_80034578;
    case 0x8003457Cu: goto label_8003457C;
    case 0x80034580u: goto label_80034580;
    case 0x80034584u: goto label_80034584;
    case 0x80034588u: goto label_80034588;
    case 0x8003458Cu: goto label_8003458C;
    case 0x80034590u: goto label_80034590;
    case 0x80034594u: goto label_80034594;
    case 0x80034598u: goto label_80034598;
    case 0x8003459Cu: goto label_8003459C;
    case 0x800345A0u: goto label_800345A0;
    case 0x800345A4u: goto label_800345A4;
    case 0x800345A8u: goto label_800345A8;
    case 0x800345ACu: goto label_800345AC;
    case 0x800345B0u: goto label_800345B0;
    case 0x800345B4u: goto label_800345B4;
    case 0x800345B8u: goto label_800345B8;
    case 0x800345BCu: goto label_800345BC;
    case 0x800345C0u: goto label_800345C0;
    case 0x800345C4u: goto label_800345C4;
    case 0x800345C8u: goto label_800345C8;
    case 0x800345CCu: goto label_800345CC;
    case 0x800345D0u: goto label_800345D0;
    case 0x800345D4u: goto label_800345D4;
    case 0x800345D8u: goto label_800345D8;
    case 0x800345DCu: goto label_800345DC;
    case 0x800345E0u: goto label_800345E0;
    case 0x800345E4u: goto label_800345E4;
    case 0x800345E8u: goto label_800345E8;
    case 0x800345ECu: goto label_800345EC;
    case 0x800345F0u: goto label_800345F0;
    case 0x800345F4u: goto label_800345F4;
    case 0x800345F8u: goto label_800345F8;
    case 0x800345FCu: goto label_800345FC;
    case 0x80034600u: goto label_80034600;
    case 0x80034604u: goto label_80034604;
    case 0x80034608u: goto label_80034608;
    case 0x8003460Cu: goto label_8003460C;
    case 0x80034610u: goto label_80034610;
    case 0x80034614u: goto label_80034614;
    case 0x80034618u: goto label_80034618;
    case 0x8003461Cu: goto label_8003461C;
    case 0x80034620u: goto label_80034620;
    case 0x80034624u: goto label_80034624;
    case 0x80034628u: goto label_80034628;
    case 0x8003462Cu: goto label_8003462C;
    case 0x80034630u: goto label_80034630;
    case 0x80034634u: goto label_80034634;
    case 0x80034638u: goto label_80034638;
    case 0x8003463Cu: goto label_8003463C;
    case 0x80034640u: goto label_80034640;
    case 0x80034644u: goto label_80034644;
    case 0x80034648u: goto label_80034648;
    case 0x8003464Cu: goto label_8003464C;
    case 0x80034650u: goto label_80034650;
    case 0x80034654u: goto label_80034654;
    case 0x80034658u: goto label_80034658;
    case 0x8003465Cu: goto label_8003465C;
    case 0x80034660u: goto label_80034660;
    case 0x80034664u: goto label_80034664;
    case 0x80034668u: goto label_80034668;
    case 0x8003466Cu: goto label_8003466C;
    case 0x80034670u: goto label_80034670;
    case 0x80034674u: goto label_80034674;
    case 0x80034678u: goto label_80034678;
    case 0x8003467Cu: goto label_8003467C;
    case 0x80034680u: goto label_80034680;
    case 0x80034684u: goto label_80034684;
    case 0x80034688u: goto label_80034688;
    case 0x8003468Cu: goto label_8003468C;
    case 0x80034690u: goto label_80034690;
    case 0x80034694u: goto label_80034694;
    case 0x80034698u: goto label_80034698;
    case 0x8003469Cu: goto label_8003469C;
    case 0x800346A0u: goto label_800346A0;
    case 0x800346A4u: goto label_800346A4;
    case 0x800346A8u: goto label_800346A8;
    case 0x800346ACu: goto label_800346AC;
    case 0x800346B0u: goto label_800346B0;
    case 0x800346B4u: goto label_800346B4;
    case 0x800346B8u: goto label_800346B8;
    case 0x800346BCu: goto label_800346BC;
    case 0x800346C0u: goto label_800346C0;
    case 0x800346C4u: goto label_800346C4;
    case 0x800346C8u: goto label_800346C8;
    case 0x800346CCu: goto label_800346CC;
    case 0x800346D0u: goto label_800346D0;
    case 0x800346D4u: goto label_800346D4;
    case 0x800346D8u: goto label_800346D8;
    case 0x800346DCu: goto label_800346DC;
    case 0x800346E0u: goto label_800346E0;
    case 0x800346E4u: goto label_800346E4;
    case 0x800346E8u: goto label_800346E8;
    case 0x800346ECu: goto label_800346EC;
    case 0x800346F0u: goto label_800346F0;
    case 0x800346F4u: goto label_800346F4;
    case 0x800346F8u: goto label_800346F8;
    case 0x800346FCu: goto label_800346FC;
    case 0x80034700u: goto label_80034700;
    case 0x80034704u: goto label_80034704;
    case 0x80034708u: goto label_80034708;
    case 0x8003470Cu: goto label_8003470C;
    case 0x80034710u: goto label_80034710;
    case 0x80034714u: goto label_80034714;
    case 0x80034718u: goto label_80034718;
    case 0x8003471Cu: goto label_8003471C;
    case 0x80034720u: goto label_80034720;
    case 0x80034724u: goto label_80034724;
    case 0x80034728u: goto label_80034728;
    case 0x8003472Cu: goto label_8003472C;
    case 0x80034730u: goto label_80034730;
    case 0x80034734u: goto label_80034734;
    case 0x80034738u: goto label_80034738;
    case 0x8003473Cu: goto label_8003473C;
    case 0x80034740u: goto label_80034740;
    case 0x80034744u: goto label_80034744;
    case 0x80034748u: goto label_80034748;
    case 0x8003474Cu: goto label_8003474C;
    case 0x80034750u: goto label_80034750;
    case 0x80034754u: goto label_80034754;
    case 0x80034758u: goto label_80034758;
    case 0x8003475Cu: goto label_8003475C;
    case 0x80034760u: goto label_80034760;
    case 0x80034764u: goto label_80034764;
    case 0x80034768u: goto label_80034768;
    case 0x8003476Cu: goto label_8003476C;
    case 0x80034770u: goto label_80034770;
    case 0x80034774u: goto label_80034774;
    case 0x80034778u: goto label_80034778;
    case 0x8003477Cu: goto label_8003477C;
    case 0x80034780u: goto label_80034780;
    case 0x80034784u: goto label_80034784;
    case 0x80034788u: goto label_80034788;
    case 0x8003478Cu: goto label_8003478C;
    case 0x80034790u: goto label_80034790;
    case 0x80034794u: goto label_80034794;
    case 0x80034798u: goto label_80034798;
    case 0x8003479Cu: goto label_8003479C;
    case 0x800347A0u: goto label_800347A0;
    case 0x800347A4u: goto label_800347A4;
    case 0x800347A8u: goto label_800347A8;
    case 0x800347ACu: goto label_800347AC;
    case 0x800347B0u: goto label_800347B0;
    case 0x800347B4u: goto label_800347B4;
    case 0x800347B8u: goto label_800347B8;
    case 0x800347BCu: goto label_800347BC;
    case 0x800347C0u: goto label_800347C0;
    case 0x800347C4u: goto label_800347C4;
    case 0x800347C8u: goto label_800347C8;
    case 0x800347CCu: goto label_800347CC;
    case 0x800347D0u: goto label_800347D0;
    case 0x800347D4u: goto label_800347D4;
    case 0x800347D8u: goto label_800347D8;
    case 0x800347DCu: goto label_800347DC;
    case 0x800347E0u: goto label_800347E0;
    case 0x800347E4u: goto label_800347E4;
    case 0x800347E8u: goto label_800347E8;
    case 0x800347ECu: goto label_800347EC;
    case 0x800347F0u: goto label_800347F0;
    case 0x800347F4u: goto label_800347F4;
    case 0x800347F8u: goto label_800347F8;
    case 0x800347FCu: goto label_800347FC;
    case 0x80034800u: goto label_80034800;
    case 0x80034804u: goto label_80034804;
    case 0x80034808u: goto label_80034808;
    case 0x8003480Cu: goto label_8003480C;
    case 0x80034810u: goto label_80034810;
    case 0x80034814u: goto label_80034814;
    case 0x80034818u: goto label_80034818;
    case 0x8003481Cu: goto label_8003481C;
    case 0x80034820u: goto label_80034820;
    case 0x80034824u: goto label_80034824;
    case 0x80034828u: goto label_80034828;
    case 0x8003482Cu: goto label_8003482C;
    case 0x80034830u: goto label_80034830;
    case 0x80034834u: goto label_80034834;
    case 0x80034838u: goto label_80034838;
    case 0x8003483Cu: goto label_8003483C;
    case 0x80034840u: goto label_80034840;
    case 0x80034844u: goto label_80034844;
    case 0x80034848u: goto label_80034848;
    case 0x8003484Cu: goto label_8003484C;
    case 0x80034850u: goto label_80034850;
    case 0x80034854u: goto label_80034854;
    case 0x80034858u: goto label_80034858;
    case 0x8003485Cu: goto label_8003485C;
    case 0x80034860u: goto label_80034860;
    case 0x80034864u: goto label_80034864;
    case 0x80034868u: goto label_80034868;
    case 0x8003486Cu: goto label_8003486C;
    case 0x80034870u: goto label_80034870;
    case 0x80034874u: goto label_80034874;
    case 0x80034878u: goto label_80034878;
    case 0x8003487Cu: goto label_8003487C;
    case 0x80034880u: goto label_80034880;
    case 0x80034884u: goto label_80034884;
    case 0x80034888u: goto label_80034888;
    case 0x8003488Cu: goto label_8003488C;
    case 0x80034890u: goto label_80034890;
    case 0x80034894u: goto label_80034894;
    case 0x80034898u: goto label_80034898;
    case 0x8003489Cu: goto label_8003489C;
    case 0x800348A0u: goto label_800348A0;
    case 0x800348A4u: goto label_800348A4;
    case 0x800348A8u: goto label_800348A8;
    case 0x800348ACu: goto label_800348AC;
    case 0x800348B0u: goto label_800348B0;
    case 0x800348B4u: goto label_800348B4;
    case 0x800348B8u: goto label_800348B8;
    case 0x800348BCu: goto label_800348BC;
    case 0x800348C0u: goto label_800348C0;
    case 0x800348C4u: goto label_800348C4;
    case 0x800348C8u: goto label_800348C8;
    case 0x800348CCu: goto label_800348CC;
    case 0x800348D0u: goto label_800348D0;
    case 0x800348D4u: goto label_800348D4;
    case 0x800348D8u: goto label_800348D8;
    case 0x800348DCu: goto label_800348DC;
    case 0x800348E0u: goto label_800348E0;
    case 0x800348E4u: goto label_800348E4;
    case 0x800348E8u: goto label_800348E8;
    case 0x800348ECu: goto label_800348EC;
    case 0x800348F0u: goto label_800348F0;
    case 0x800348F4u: goto label_800348F4;
    case 0x800348F8u: goto label_800348F8;
    case 0x800348FCu: goto label_800348FC;
    case 0x80034900u: goto label_80034900;
    case 0x80034904u: goto label_80034904;
    case 0x80034908u: goto label_80034908;
    case 0x8003490Cu: goto label_8003490C;
    case 0x80034910u: goto label_80034910;
    case 0x80034914u: goto label_80034914;
    case 0x80034918u: goto label_80034918;
    case 0x8003491Cu: goto label_8003491C;
    case 0x80034920u: goto label_80034920;
    case 0x80034924u: goto label_80034924;
    case 0x80034928u: goto label_80034928;
    case 0x8003492Cu: goto label_8003492C;
    case 0x80034930u: goto label_80034930;
    case 0x80034934u: goto label_80034934;
    case 0x80034938u: goto label_80034938;
    case 0x8003493Cu: goto label_8003493C;
    case 0x80034940u: goto label_80034940;
    case 0x80034944u: goto label_80034944;
    case 0x80034948u: goto label_80034948;
    case 0x8003494Cu: goto label_8003494C;
    case 0x80034950u: goto label_80034950;
    case 0x80034954u: goto label_80034954;
    case 0x80034958u: goto label_80034958;
    case 0x8003495Cu: goto label_8003495C;
    case 0x80034960u: goto label_80034960;
    case 0x80034964u: goto label_80034964;
    case 0x80034968u: goto label_80034968;
    case 0x8003496Cu: goto label_8003496C;
    case 0x80034970u: goto label_80034970;
    case 0x80034974u: goto label_80034974;
    case 0x80034978u: goto label_80034978;
    case 0x8003497Cu: goto label_8003497C;
    case 0x80034980u: goto label_80034980;
    case 0x80034984u: goto label_80034984;
    case 0x80034988u: goto label_80034988;
    case 0x8003498Cu: goto label_8003498C;
    case 0x80034990u: goto label_80034990;
    case 0x80034994u: goto label_80034994;
    case 0x80034998u: goto label_80034998;
    case 0x8003499Cu: goto label_8003499C;
    case 0x800349A0u: goto label_800349A0;
    case 0x800349A4u: goto label_800349A4;
    case 0x800349A8u: goto label_800349A8;
    case 0x800349ACu: goto label_800349AC;
    case 0x800349B0u: goto label_800349B0;
    case 0x800349B4u: goto label_800349B4;
    case 0x800349B8u: goto label_800349B8;
    case 0x800349BCu: goto label_800349BC;
    case 0x800349C0u: goto label_800349C0;
    case 0x800349C4u: goto label_800349C4;
    case 0x800349C8u: goto label_800349C8;
    case 0x800349CCu: goto label_800349CC;
    case 0x800349D0u: goto label_800349D0;
    case 0x800349D4u: goto label_800349D4;
    case 0x800349D8u: goto label_800349D8;
    case 0x800349DCu: goto label_800349DC;
    case 0x800349E0u: goto label_800349E0;
    case 0x800349E4u: goto label_800349E4;
    case 0x800349E8u: goto label_800349E8;
    case 0x800349ECu: goto label_800349EC;
    case 0x800349F0u: goto label_800349F0;
    case 0x800349F4u: goto label_800349F4;
    case 0x800349F8u: goto label_800349F8;
    case 0x800349FCu: goto label_800349FC;
    case 0x80034A00u: goto label_80034A00;
    case 0x80034A04u: goto label_80034A04;
    case 0x80034A08u: goto label_80034A08;
    case 0x80034A0Cu: goto label_80034A0C;
    case 0x80034A10u: goto label_80034A10;
    case 0x80034A14u: goto label_80034A14;
    case 0x80034A18u: goto label_80034A18;
    case 0x80034A1Cu: goto label_80034A1C;
    case 0x80034A20u: goto label_80034A20;
    case 0x80034A24u: goto label_80034A24;
    case 0x80034A28u: goto label_80034A28;
    case 0x80034A2Cu: goto label_80034A2C;
    case 0x80034A30u: goto label_80034A30;
    case 0x80034A34u: goto label_80034A34;
    case 0x80034A38u: goto label_80034A38;
    case 0x80034A3Cu: goto label_80034A3C;
    case 0x80034A40u: goto label_80034A40;
    case 0x80034A44u: goto label_80034A44;
    case 0x80034A48u: goto label_80034A48;
    case 0x80034A4Cu: goto label_80034A4C;
    case 0x80034A50u: goto label_80034A50;
    case 0x80034A54u: goto label_80034A54;
    case 0x80034A58u: goto label_80034A58;
    case 0x80034A5Cu: goto label_80034A5C;
    case 0x80034A60u: goto label_80034A60;
    case 0x80034A64u: goto label_80034A64;
    case 0x80034A68u: goto label_80034A68;
    case 0x80034A6Cu: goto label_80034A6C;
    case 0x80034A70u: goto label_80034A70;
    case 0x80034A74u: goto label_80034A74;
    case 0x80034A78u: goto label_80034A78;
    case 0x80034A7Cu: goto label_80034A7C;
    case 0x80034A80u: goto label_80034A80;
    case 0x80034A84u: goto label_80034A84;
    case 0x80034A88u: goto label_80034A88;
    case 0x80034A8Cu: goto label_80034A8C;
    case 0x80034A90u: goto label_80034A90;
    case 0x80034A94u: goto label_80034A94;
    case 0x80034A98u: goto label_80034A98;
    case 0x80034A9Cu: goto label_80034A9C;
    case 0x80034AA0u: goto label_80034AA0;
    case 0x80034AA4u: goto label_80034AA4;
    case 0x80034AA8u: goto label_80034AA8;
    case 0x80034AACu: goto label_80034AAC;
    case 0x80034AB0u: goto label_80034AB0;
    case 0x80034AB4u: goto label_80034AB4;
    case 0x80034AB8u: goto label_80034AB8;
    case 0x80034ABCu: goto label_80034ABC;
    case 0x80034AC0u: goto label_80034AC0;
    case 0x80034AC4u: goto label_80034AC4;
    case 0x80034AC8u: goto label_80034AC8;
    case 0x80034ACCu: goto label_80034ACC;
    case 0x80034AD0u: goto label_80034AD0;
    case 0x80034AD4u: goto label_80034AD4;
    case 0x80034AD8u: goto label_80034AD8;
    case 0x80034ADCu: goto label_80034ADC;
    case 0x80034AE0u: goto label_80034AE0;
    case 0x80034AE4u: goto label_80034AE4;
    case 0x80034AE8u: goto label_80034AE8;
    case 0x80034AECu: goto label_80034AEC;
    case 0x80034AF0u: goto label_80034AF0;
    case 0x80034AF4u: goto label_80034AF4;
    case 0x80034AF8u: goto label_80034AF8;
    case 0x80034AFCu: goto label_80034AFC;
    case 0x80034B00u: goto label_80034B00;
    case 0x80034B04u: goto label_80034B04;
    case 0x80034B08u: goto label_80034B08;
    case 0x80034B0Cu: goto label_80034B0C;
    case 0x80034B10u: goto label_80034B10;
    case 0x80034B14u: goto label_80034B14;
    case 0x80034B18u: goto label_80034B18;
    case 0x80034B1Cu: goto label_80034B1C;
    case 0x80034B20u: goto label_80034B20;
    case 0x80034B24u: goto label_80034B24;
    case 0x80034B28u: goto label_80034B28;
    case 0x80034B2Cu: goto label_80034B2C;
    case 0x80034B30u: goto label_80034B30;
    case 0x80034B34u: goto label_80034B34;
    case 0x80034B38u: goto label_80034B38;
    case 0x80034B3Cu: goto label_80034B3C;
    case 0x80034B40u: goto label_80034B40;
    case 0x80034B44u: goto label_80034B44;
    case 0x80034B48u: goto label_80034B48;
    case 0x80034B4Cu: goto label_80034B4C;
    case 0x80034B50u: goto label_80034B50;
    case 0x80034B54u: goto label_80034B54;
    case 0x80034B58u: goto label_80034B58;
    case 0x80034B5Cu: goto label_80034B5C;
    case 0x80034B60u: goto label_80034B60;
    case 0x80034B64u: goto label_80034B64;
    case 0x80034B68u: goto label_80034B68;
    case 0x80034B6Cu: goto label_80034B6C;
    case 0x80034B70u: goto label_80034B70;
    case 0x80034B74u: goto label_80034B74;
    case 0x80034B78u: goto label_80034B78;
    case 0x80034B7Cu: goto label_80034B7C;
    case 0x80034B80u: goto label_80034B80;
    case 0x80034B84u: goto label_80034B84;
    case 0x80034B88u: goto label_80034B88;
    case 0x80034B8Cu: goto label_80034B8C;
    case 0x80034B90u: goto label_80034B90;
    case 0x80034B94u: goto label_80034B94;
    case 0x80034B98u: goto label_80034B98;
    case 0x80034B9Cu: goto label_80034B9C;
    case 0x80034BA0u: goto label_80034BA0;
    case 0x80034BA4u: goto label_80034BA4;
    case 0x80034BA8u: goto label_80034BA8;
    case 0x80034BACu: goto label_80034BAC;
    case 0x80034BB0u: goto label_80034BB0;
    case 0x80034BB4u: goto label_80034BB4;
    case 0x80034BB8u: goto label_80034BB8;
    case 0x80034BBCu: goto label_80034BBC;
    case 0x80034BC0u: goto label_80034BC0;
    case 0x80034BC4u: goto label_80034BC4;
    case 0x80034BC8u: goto label_80034BC8;
    case 0x80034BCCu: goto label_80034BCC;
    case 0x80034BD0u: goto label_80034BD0;
    case 0x80034BD4u: goto label_80034BD4;
    case 0x80034BD8u: goto label_80034BD8;
    case 0x80034BDCu: goto label_80034BDC;
    case 0x80034BE0u: goto label_80034BE0;
    case 0x80034BE4u: goto label_80034BE4;
    case 0x80034BE8u: goto label_80034BE8;
    case 0x80034BECu: goto label_80034BEC;
    case 0x80034BF0u: goto label_80034BF0;
    case 0x80034BF4u: goto label_80034BF4;
    case 0x80034BF8u: goto label_80034BF8;
    case 0x80034BFCu: goto label_80034BFC;
    case 0x80034C00u: goto label_80034C00;
    case 0x80034C04u: goto label_80034C04;
    case 0x80034C08u: goto label_80034C08;
    case 0x80034C0Cu: goto label_80034C0C;
    case 0x80034C10u: goto label_80034C10;
    case 0x80034C14u: goto label_80034C14;
    case 0x80034C18u: goto label_80034C18;
    case 0x80034C1Cu: goto label_80034C1C;
    case 0x80034C20u: goto label_80034C20;
    case 0x80034C24u: goto label_80034C24;
    case 0x80034C28u: goto label_80034C28;
    case 0x80034C2Cu: goto label_80034C2C;
    case 0x80034C30u: goto label_80034C30;
    case 0x80034C34u: goto label_80034C34;
    case 0x80034C38u: goto label_80034C38;
    case 0x80034C3Cu: goto label_80034C3C;
    case 0x80034C40u: goto label_80034C40;
    case 0x80034C44u: goto label_80034C44;
    case 0x80034C48u: goto label_80034C48;
    case 0x80034C4Cu: goto label_80034C4C;
    case 0x80034C50u: goto label_80034C50;
    case 0x80034C54u: goto label_80034C54;
    case 0x80034C58u: goto label_80034C58;
    case 0x80034C5Cu: goto label_80034C5C;
    case 0x80034C60u: goto label_80034C60;
    case 0x80034C64u: goto label_80034C64;
    case 0x80034C68u: goto label_80034C68;
    case 0x80034C6Cu: goto label_80034C6C;
    case 0x80034C70u: goto label_80034C70;
    case 0x80034C74u: goto label_80034C74;
    case 0x80034C78u: goto label_80034C78;
    case 0x80034C7Cu: goto label_80034C7C;
    case 0x80034C80u: goto label_80034C80;
    case 0x80034C84u: goto label_80034C84;
    case 0x80034C88u: goto label_80034C88;
    case 0x80034C8Cu: goto label_80034C8C;
    case 0x80034C90u: goto label_80034C90;
    case 0x80034C94u: goto label_80034C94;
    case 0x80034C98u: goto label_80034C98;
    case 0x80034C9Cu: goto label_80034C9C;
    case 0x80034CA0u: goto label_80034CA0;
    case 0x80034CA4u: goto label_80034CA4;
    case 0x80034CA8u: goto label_80034CA8;
    case 0x80034CACu: goto label_80034CAC;
    case 0x80034CB0u: goto label_80034CB0;
    case 0x80034CB4u: goto label_80034CB4;
    case 0x80034CB8u: goto label_80034CB8;
    case 0x80034CBCu: goto label_80034CBC;
    case 0x80034CC0u: goto label_80034CC0;
    case 0x80034CC4u: goto label_80034CC4;
    case 0x80034CC8u: goto label_80034CC8;
    case 0x80034CCCu: goto label_80034CCC;
    case 0x80034CD0u: goto label_80034CD0;
    case 0x80034CD4u: goto label_80034CD4;
    case 0x80034CD8u: goto label_80034CD8;
    case 0x80034CDCu: goto label_80034CDC;
    case 0x80034CE0u: goto label_80034CE0;
    case 0x80034CE4u: goto label_80034CE4;
    case 0x80034CE8u: goto label_80034CE8;
    case 0x80034CECu: goto label_80034CEC;
    case 0x80034CF0u: goto label_80034CF0;
    case 0x80034CF4u: goto label_80034CF4;
    case 0x80034CF8u: goto label_80034CF8;
    case 0x80034CFCu: goto label_80034CFC;
    case 0x80034D00u: goto label_80034D00;
    case 0x80034D04u: goto label_80034D04;
    case 0x80034D08u: goto label_80034D08;
    case 0x80034D0Cu: goto label_80034D0C;
    case 0x80034D10u: goto label_80034D10;
    case 0x80034D14u: goto label_80034D14;
    case 0x80034D18u: goto label_80034D18;
    case 0x80034D1Cu: goto label_80034D1C;
    case 0x80034D20u: goto label_80034D20;
    case 0x80034D24u: goto label_80034D24;
    case 0x80034D28u: goto label_80034D28;
    case 0x80034D2Cu: goto label_80034D2C;
    case 0x80034D30u: goto label_80034D30;
    case 0x80034D34u: goto label_80034D34;
    case 0x80034D38u: goto label_80034D38;
    case 0x80034D3Cu: goto label_80034D3C;
    case 0x80034D40u: goto label_80034D40;
    case 0x80034D44u: goto label_80034D44;
    case 0x80034D48u: goto label_80034D48;
    case 0x80034D4Cu: goto label_80034D4C;
    case 0x80034D50u: goto label_80034D50;
    case 0x80034D54u: goto label_80034D54;
    case 0x80034D58u: goto label_80034D58;
    case 0x80034D5Cu: goto label_80034D5C;
    case 0x80034D60u: goto label_80034D60;
    case 0x80034D64u: goto label_80034D64;
    case 0x80034D68u: goto label_80034D68;
    case 0x80034D6Cu: goto label_80034D6C;
    case 0x80034D70u: goto label_80034D70;
    case 0x80034D74u: goto label_80034D74;
    case 0x80034D78u: goto label_80034D78;
    case 0x80034D7Cu: goto label_80034D7C;
    case 0x80034D80u: goto label_80034D80;
    case 0x80034D84u: goto label_80034D84;
    case 0x80034D88u: goto label_80034D88;
    case 0x80034D8Cu: goto label_80034D8C;
    case 0x80034D90u: goto label_80034D90;
    case 0x80034D94u: goto label_80034D94;
    case 0x80034D98u: goto label_80034D98;
    case 0x80034D9Cu: goto label_80034D9C;
    case 0x80034DA0u: goto label_80034DA0;
    case 0x80034DA4u: goto label_80034DA4;
    case 0x80034DA8u: goto label_80034DA8;
    case 0x80034DACu: goto label_80034DAC;
    case 0x80034DB0u: goto label_80034DB0;
    case 0x80034DB4u: goto label_80034DB4;
    case 0x80034DB8u: goto label_80034DB8;
    case 0x80034DBCu: goto label_80034DBC;
    case 0x80034DC0u: goto label_80034DC0;
    case 0x80034DC4u: goto label_80034DC4;
    case 0x80034DC8u: goto label_80034DC8;
    case 0x80034DCCu: goto label_80034DCC;
    case 0x80034DD0u: goto label_80034DD0;
    case 0x80034DD4u: goto label_80034DD4;
    case 0x80034DD8u: goto label_80034DD8;
    case 0x80034DDCu: goto label_80034DDC;
    case 0x80034DE0u: goto label_80034DE0;
    case 0x80034DE4u: goto label_80034DE4;
    case 0x80034DE8u: goto label_80034DE8;
    case 0x80034DECu: goto label_80034DEC;
    case 0x80034DF0u: goto label_80034DF0;
    case 0x80034DF4u: goto label_80034DF4;
    case 0x80034DF8u: goto label_80034DF8;
    case 0x80034DFCu: goto label_80034DFC;
    case 0x80034E00u: goto label_80034E00;
    case 0x80034E04u: goto label_80034E04;
    case 0x80034E08u: goto label_80034E08;
    case 0x80034E0Cu: goto label_80034E0C;
    case 0x80034E10u: goto label_80034E10;
    case 0x80034E14u: goto label_80034E14;
    case 0x80034E18u: goto label_80034E18;
    case 0x80034E1Cu: goto label_80034E1C;
    case 0x80034E20u: goto label_80034E20;
    case 0x80034E24u: goto label_80034E24;
    case 0x80034E28u: goto label_80034E28;
    case 0x80034E2Cu: goto label_80034E2C;
    case 0x80034E30u: goto label_80034E30;
    case 0x80034E34u: goto label_80034E34;
    case 0x80034E38u: goto label_80034E38;
    case 0x80034E3Cu: goto label_80034E3C;
    case 0x80034E40u: goto label_80034E40;
    case 0x80034E44u: goto label_80034E44;
    case 0x80034E48u: goto label_80034E48;
    case 0x80034E4Cu: goto label_80034E4C;
    case 0x80034E50u: goto label_80034E50;
    case 0x80034E54u: goto label_80034E54;
    case 0x80034E58u: goto label_80034E58;
    case 0x80034E5Cu: goto label_80034E5C;
    case 0x80034E60u: goto label_80034E60;
    case 0x80034E64u: goto label_80034E64;
    case 0x80034E68u: goto label_80034E68;
    case 0x80034E6Cu: goto label_80034E6C;
    case 0x80034E70u: goto label_80034E70;
    case 0x80034E74u: goto label_80034E74;
    case 0x80034E78u: goto label_80034E78;
    case 0x80034E7Cu: goto label_80034E7C;
    case 0x80034E80u: goto label_80034E80;
    case 0x80034E84u: goto label_80034E84;
    case 0x80034E88u: goto label_80034E88;
    case 0x80034E8Cu: goto label_80034E8C;
    case 0x80034E90u: goto label_80034E90;
    case 0x80034E94u: goto label_80034E94;
    case 0x80034E98u: goto label_80034E98;
    case 0x80034E9Cu: goto label_80034E9C;
    case 0x80034EA0u: goto label_80034EA0;
    case 0x80034EA4u: goto label_80034EA4;
    case 0x80034EA8u: goto label_80034EA8;
    case 0x80034EACu: goto label_80034EAC;
    case 0x80034EB0u: goto label_80034EB0;
    case 0x80034EB4u: goto label_80034EB4;
    case 0x80034EB8u: goto label_80034EB8;
    case 0x80034EBCu: goto label_80034EBC;
    case 0x80034EC0u: goto label_80034EC0;
    case 0x80034EC4u: goto label_80034EC4;
    case 0x80034EC8u: goto label_80034EC8;
    case 0x80034ECCu: goto label_80034ECC;
    case 0x80034ED0u: goto label_80034ED0;
    case 0x80034ED4u: goto label_80034ED4;
    case 0x80034ED8u: goto label_80034ED8;
    case 0x80034EDCu: goto label_80034EDC;
    case 0x80034EE0u: goto label_80034EE0;
    case 0x80034EE4u: goto label_80034EE4;
    case 0x80034EE8u: goto label_80034EE8;
    case 0x80034EECu: goto label_80034EEC;
    case 0x80034EF0u: goto label_80034EF0;
    case 0x80034EF4u: goto label_80034EF4;
    case 0x80034EF8u: goto label_80034EF8;
    case 0x80034EFCu: goto label_80034EFC;
    case 0x80034F00u: goto label_80034F00;
    case 0x80034F04u: goto label_80034F04;
    case 0x80034F08u: goto label_80034F08;
    case 0x80034F0Cu: goto label_80034F0C;
    case 0x80034F10u: goto label_80034F10;
    case 0x80034F14u: goto label_80034F14;
    case 0x80034F18u: goto label_80034F18;
    case 0x80034F1Cu: goto label_80034F1C;
    case 0x80034F20u: goto label_80034F20;
    case 0x80034F24u: goto label_80034F24;
    case 0x80034F28u: goto label_80034F28;
    case 0x80034F2Cu: goto label_80034F2C;
    case 0x80034F30u: goto label_80034F30;
    case 0x80034F34u: goto label_80034F34;
    case 0x80034F38u: goto label_80034F38;
    case 0x80034F3Cu: goto label_80034F3C;
    case 0x80034F40u: goto label_80034F40;
    case 0x80034F44u: goto label_80034F44;
    case 0x80034F48u: goto label_80034F48;
    case 0x80034F4Cu: goto label_80034F4C;
    case 0x80034F50u: goto label_80034F50;
    case 0x80034F54u: goto label_80034F54;
    case 0x80034F58u: goto label_80034F58;
    case 0x80034F5Cu: goto label_80034F5C;
    case 0x80034F60u: goto label_80034F60;
    case 0x80034F64u: goto label_80034F64;
    case 0x80034F68u: goto label_80034F68;
    case 0x80034F6Cu: goto label_80034F6C;
    case 0x80034F70u: goto label_80034F70;
    case 0x80034F74u: goto label_80034F74;
    case 0x80034F78u: goto label_80034F78;
    case 0x80034F7Cu: goto label_80034F7C;
    case 0x80034F80u: goto label_80034F80;
    case 0x80034F84u: goto label_80034F84;
    case 0x80034F88u: goto label_80034F88;
    case 0x80034F8Cu: goto label_80034F8C;
    case 0x80034F90u: goto label_80034F90;
    case 0x80034F94u: goto label_80034F94;
    case 0x80034F98u: goto label_80034F98;
    case 0x80034F9Cu: goto label_80034F9C;
    case 0x80034FA0u: goto label_80034FA0;
    case 0x80034FA4u: goto label_80034FA4;
    case 0x80034FA8u: goto label_80034FA8;
    case 0x80034FACu: goto label_80034FAC;
    case 0x80034FB0u: goto label_80034FB0;
    case 0x80034FB4u: goto label_80034FB4;
    case 0x80034FB8u: goto label_80034FB8;
    case 0x80034FBCu: goto label_80034FBC;
    case 0x80034FC0u: goto label_80034FC0;
    case 0x80034FC4u: goto label_80034FC4;
    case 0x80034FC8u: goto label_80034FC8;
    case 0x80034FCCu: goto label_80034FCC;
    case 0x80034FD0u: goto label_80034FD0;
    case 0x80034FD4u: goto label_80034FD4;
    case 0x80034FD8u: goto label_80034FD8;
    case 0x80034FDCu: goto label_80034FDC;
    case 0x80034FE0u: goto label_80034FE0;
    case 0x80034FE4u: goto label_80034FE4;
    case 0x80034FE8u: goto label_80034FE8;
    case 0x80034FECu: goto label_80034FEC;
    case 0x80034FF0u: goto label_80034FF0;
    case 0x80034FF4u: goto label_80034FF4;
    case 0x80034FF8u: goto label_80034FF8;
    case 0x80034FFCu: goto label_80034FFC;
    case 0x80035000u: goto label_80035000;
    case 0x80035004u: goto label_80035004;
    case 0x80035008u: goto label_80035008;
    case 0x8003500Cu: goto label_8003500C;
    case 0x80035010u: goto label_80035010;
    case 0x80035014u: goto label_80035014;
    case 0x80035018u: goto label_80035018;
    case 0x8003501Cu: goto label_8003501C;
    case 0x80035020u: goto label_80035020;
    case 0x80035024u: goto label_80035024;
    case 0x80035028u: goto label_80035028;
    case 0x8003502Cu: goto label_8003502C;
    case 0x80035030u: goto label_80035030;
    case 0x80035034u: goto label_80035034;
    case 0x80035038u: goto label_80035038;
    case 0x8003503Cu: goto label_8003503C;
    case 0x80035040u: goto label_80035040;
    case 0x80035044u: goto label_80035044;
    case 0x80035048u: goto label_80035048;
    case 0x8003504Cu: goto label_8003504C;
    case 0x80035050u: goto label_80035050;
    case 0x80035054u: goto label_80035054;
    case 0x80035058u: goto label_80035058;
    case 0x8003505Cu: goto label_8003505C;
    case 0x80035060u: goto label_80035060;
    case 0x80035064u: goto label_80035064;
    case 0x80035068u: goto label_80035068;
    case 0x8003506Cu: goto label_8003506C;
    case 0x80035070u: goto label_80035070;
    case 0x80035074u: goto label_80035074;
    case 0x80035078u: goto label_80035078;
    case 0x8003507Cu: goto label_8003507C;
    case 0x80035080u: goto label_80035080;
    case 0x80035084u: goto label_80035084;
    case 0x80035088u: goto label_80035088;
    case 0x8003508Cu: goto label_8003508C;
    case 0x80035090u: goto label_80035090;
    case 0x80035094u: goto label_80035094;
    case 0x80035098u: goto label_80035098;
    case 0x8003509Cu: goto label_8003509C;
    case 0x800350A0u: goto label_800350A0;
    case 0x800350A4u: goto label_800350A4;
    case 0x800350A8u: goto label_800350A8;
    case 0x800350ACu: goto label_800350AC;
    case 0x800350B0u: goto label_800350B0;
    case 0x800350B4u: goto label_800350B4;
    case 0x800350B8u: goto label_800350B8;
    case 0x800350BCu: goto label_800350BC;
    case 0x800350C0u: goto label_800350C0;
    case 0x800350C4u: goto label_800350C4;
    case 0x800350C8u: goto label_800350C8;
    case 0x800350CCu: goto label_800350CC;
    case 0x800350D0u: goto label_800350D0;
    case 0x800350D4u: goto label_800350D4;
    case 0x800350D8u: goto label_800350D8;
    case 0x800350DCu: goto label_800350DC;
    case 0x800350E0u: goto label_800350E0;
    case 0x800350E4u: goto label_800350E4;
    case 0x800350E8u: goto label_800350E8;
    case 0x800350ECu: goto label_800350EC;
    case 0x800350F0u: goto label_800350F0;
    case 0x800350F4u: goto label_800350F4;
    case 0x800350F8u: goto label_800350F8;
    case 0x800350FCu: goto label_800350FC;
    case 0x80035100u: goto label_80035100;
    case 0x80035104u: goto label_80035104;
    case 0x80035108u: goto label_80035108;
    case 0x8003510Cu: goto label_8003510C;
    case 0x80035110u: goto label_80035110;
    case 0x80035114u: goto label_80035114;
    case 0x80035118u: goto label_80035118;
    case 0x8003511Cu: goto label_8003511C;
    case 0x80035120u: goto label_80035120;
    case 0x80035124u: goto label_80035124;
    case 0x80035128u: goto label_80035128;
    case 0x8003512Cu: goto label_8003512C;
    case 0x80035130u: goto label_80035130;
    case 0x80035134u: goto label_80035134;
    case 0x80035138u: goto label_80035138;
    case 0x8003513Cu: goto label_8003513C;
    case 0x80035140u: goto label_80035140;
    case 0x80035144u: goto label_80035144;
    case 0x80035148u: goto label_80035148;
    case 0x8003514Cu: goto label_8003514C;
    case 0x80035150u: goto label_80035150;
    case 0x80035154u: goto label_80035154;
    case 0x80035158u: goto label_80035158;
    case 0x8003515Cu: goto label_8003515C;
    case 0x80035160u: goto label_80035160;
    case 0x80035164u: goto label_80035164;
    case 0x80035168u: goto label_80035168;
    case 0x8003516Cu: goto label_8003516C;
    case 0x80035170u: goto label_80035170;
    case 0x80035174u: goto label_80035174;
    case 0x80035178u: goto label_80035178;
    case 0x8003517Cu: goto label_8003517C;
    case 0x80035180u: goto label_80035180;
    case 0x80035184u: goto label_80035184;
    case 0x80035188u: goto label_80035188;
    case 0x8003518Cu: goto label_8003518C;
    case 0x80035190u: goto label_80035190;
    case 0x80035194u: goto label_80035194;
    case 0x80035198u: goto label_80035198;
    case 0x8003519Cu: goto label_8003519C;
    case 0x800351A0u: goto label_800351A0;
    case 0x800351A4u: goto label_800351A4;
    case 0x800351A8u: goto label_800351A8;
    case 0x800351ACu: goto label_800351AC;
    case 0x800351B0u: goto label_800351B0;
    case 0x800351B4u: goto label_800351B4;
    case 0x800351B8u: goto label_800351B8;
    case 0x800351BCu: goto label_800351BC;
    case 0x800351C0u: goto label_800351C0;
    case 0x800351C4u: goto label_800351C4;
    case 0x800351C8u: goto label_800351C8;
    case 0x800351CCu: goto label_800351CC;
    case 0x800351D0u: goto label_800351D0;
    case 0x800351D4u: goto label_800351D4;
    case 0x800351D8u: goto label_800351D8;
    case 0x800351DCu: goto label_800351DC;
    case 0x800351E0u: goto label_800351E0;
    case 0x800351E4u: goto label_800351E4;
    case 0x800351E8u: goto label_800351E8;
    case 0x800351ECu: goto label_800351EC;
    case 0x800351F0u: goto label_800351F0;
    case 0x800351F4u: goto label_800351F4;
    case 0x800351F8u: goto label_800351F8;
    case 0x800351FCu: goto label_800351FC;
    case 0x80035200u: goto label_80035200;
    case 0x80035204u: goto label_80035204;
    case 0x80035208u: goto label_80035208;
    case 0x8003520Cu: goto label_8003520C;
    case 0x80035210u: goto label_80035210;
    case 0x80035214u: goto label_80035214;
    case 0x80035218u: goto label_80035218;
    case 0x8003521Cu: goto label_8003521C;
    case 0x80035220u: goto label_80035220;
    case 0x80035224u: goto label_80035224;
    case 0x80035228u: goto label_80035228;
    case 0x8003522Cu: goto label_8003522C;
    case 0x80035230u: goto label_80035230;
    case 0x80035234u: goto label_80035234;
    case 0x80035238u: goto label_80035238;
    case 0x8003523Cu: goto label_8003523C;
    case 0x80035240u: goto label_80035240;
    case 0x80035244u: goto label_80035244;
    case 0x80035248u: goto label_80035248;
    case 0x8003524Cu: goto label_8003524C;
    case 0x80035250u: goto label_80035250;
    case 0x80035254u: goto label_80035254;
    case 0x80035258u: goto label_80035258;
    case 0x8003525Cu: goto label_8003525C;
    case 0x80035260u: goto label_80035260;
    case 0x80035264u: goto label_80035264;
    case 0x80035268u: goto label_80035268;
    case 0x8003526Cu: goto label_8003526C;
    case 0x80035270u: goto label_80035270;
    case 0x80035274u: goto label_80035274;
    case 0x80035278u: goto label_80035278;
    case 0x8003527Cu: goto label_8003527C;
    case 0x80035280u: goto label_80035280;
    case 0x80035284u: goto label_80035284;
    case 0x80035288u: goto label_80035288;
    case 0x8003528Cu: goto label_8003528C;
    case 0x80035290u: goto label_80035290;
    case 0x80035294u: goto label_80035294;
    case 0x80035298u: goto label_80035298;
    case 0x8003529Cu: goto label_8003529C;
    case 0x800352A0u: goto label_800352A0;
    case 0x800352A4u: goto label_800352A4;
    case 0x800352A8u: goto label_800352A8;
    case 0x800352ACu: goto label_800352AC;
    case 0x800352B0u: goto label_800352B0;
    case 0x800352B4u: goto label_800352B4;
    case 0x800352B8u: goto label_800352B8;
    case 0x800352BCu: goto label_800352BC;
    case 0x800352C0u: goto label_800352C0;
    case 0x800352C4u: goto label_800352C4;
    case 0x800352C8u: goto label_800352C8;
    case 0x800352CCu: goto label_800352CC;
    case 0x800352D0u: goto label_800352D0;
    case 0x800352D4u: goto label_800352D4;
    case 0x800352D8u: goto label_800352D8;
    case 0x800352DCu: goto label_800352DC;
    case 0x800352E0u: goto label_800352E0;
    case 0x800352E4u: goto label_800352E4;
    case 0x800352E8u: goto label_800352E8;
    case 0x800352ECu: goto label_800352EC;
    case 0x800352F0u: goto label_800352F0;
    case 0x800352F4u: goto label_800352F4;
    case 0x800352F8u: goto label_800352F8;
    case 0x800352FCu: goto label_800352FC;
    case 0x80035300u: goto label_80035300;
    case 0x80035304u: goto label_80035304;
    case 0x80035308u: goto label_80035308;
    case 0x8003530Cu: goto label_8003530C;
    case 0x80035310u: goto label_80035310;
    case 0x80035314u: goto label_80035314;
    case 0x80035318u: goto label_80035318;
    case 0x8003531Cu: goto label_8003531C;
    case 0x80035320u: goto label_80035320;
    case 0x80035324u: goto label_80035324;
    case 0x80035328u: goto label_80035328;
    case 0x8003532Cu: goto label_8003532C;
    case 0x80035330u: goto label_80035330;
    case 0x80035334u: goto label_80035334;
    case 0x80035338u: goto label_80035338;
    case 0x8003533Cu: goto label_8003533C;
    case 0x80035340u: goto label_80035340;
    case 0x80035344u: goto label_80035344;
    case 0x80035348u: goto label_80035348;
    case 0x8003534Cu: goto label_8003534C;
    case 0x80035350u: goto label_80035350;
    case 0x80035354u: goto label_80035354;
    case 0x80035358u: goto label_80035358;
    case 0x8003535Cu: goto label_8003535C;
    case 0x80035360u: goto label_80035360;
    case 0x80035364u: goto label_80035364;
    case 0x80035368u: goto label_80035368;
    case 0x8003536Cu: goto label_8003536C;
    case 0x80035370u: goto label_80035370;
    case 0x80035374u: goto label_80035374;
    case 0x80035378u: goto label_80035378;
    case 0x8003537Cu: goto label_8003537C;
    case 0x80035380u: goto label_80035380;
    case 0x80035384u: goto label_80035384;
    case 0x80035388u: goto label_80035388;
    case 0x8003538Cu: goto label_8003538C;
    case 0x80035390u: goto label_80035390;
    case 0x80035394u: goto label_80035394;
    case 0x80035398u: goto label_80035398;
    case 0x8003539Cu: goto label_8003539C;
    case 0x800353A0u: goto label_800353A0;
    case 0x800353A4u: goto label_800353A4;
    case 0x800353A8u: goto label_800353A8;
    case 0x800353ACu: goto label_800353AC;
    case 0x800353B0u: goto label_800353B0;
    case 0x800353B4u: goto label_800353B4;
    case 0x800353B8u: goto label_800353B8;
    case 0x800353BCu: goto label_800353BC;
    case 0x800353C0u: goto label_800353C0;
    case 0x800353C4u: goto label_800353C4;
    case 0x800353C8u: goto label_800353C8;
    case 0x800353CCu: goto label_800353CC;
    case 0x800353D0u: goto label_800353D0;
    case 0x800353D4u: goto label_800353D4;
    case 0x800353D8u: goto label_800353D8;
    case 0x800353DCu: goto label_800353DC;
    case 0x800353E0u: goto label_800353E0;
    case 0x800353E4u: goto label_800353E4;
    case 0x800353E8u: goto label_800353E8;
    case 0x800353ECu: goto label_800353EC;
    case 0x800353F0u: goto label_800353F0;
    case 0x800353F4u: goto label_800353F4;
    case 0x800353F8u: goto label_800353F8;
    case 0x800353FCu: goto label_800353FC;
    case 0x80035400u: goto label_80035400;
    case 0x80035404u: goto label_80035404;
    case 0x80035408u: goto label_80035408;
    case 0x8003540Cu: goto label_8003540C;
    case 0x80035410u: goto label_80035410;
    case 0x80035414u: goto label_80035414;
    case 0x80035418u: goto label_80035418;
    case 0x8003541Cu: goto label_8003541C;
    case 0x80035420u: goto label_80035420;
    case 0x80035424u: goto label_80035424;
    case 0x80035428u: goto label_80035428;
    case 0x8003542Cu: goto label_8003542C;
    case 0x80035430u: goto label_80035430;
    case 0x80035434u: goto label_80035434;
    case 0x80035438u: goto label_80035438;
    case 0x8003543Cu: goto label_8003543C;
    case 0x80035440u: goto label_80035440;
    case 0x80035444u: goto label_80035444;
    case 0x80035448u: goto label_80035448;
    case 0x8003544Cu: goto label_8003544C;
    case 0x80035450u: goto label_80035450;
    case 0x80035454u: goto label_80035454;
    case 0x80035458u: goto label_80035458;
    case 0x8003545Cu: goto label_8003545C;
    case 0x80035460u: goto label_80035460;
    case 0x80035464u: goto label_80035464;
    case 0x80035468u: goto label_80035468;
    case 0x8003546Cu: goto label_8003546C;
    case 0x80035470u: goto label_80035470;
    case 0x80035474u: goto label_80035474;
    case 0x80035478u: goto label_80035478;
    case 0x8003547Cu: goto label_8003547C;
    case 0x80035480u: goto label_80035480;
    case 0x80035484u: goto label_80035484;
    case 0x80035488u: goto label_80035488;
    case 0x8003548Cu: goto label_8003548C;
    case 0x80035490u: goto label_80035490;
    case 0x80035494u: goto label_80035494;
    case 0x80035498u: goto label_80035498;
    case 0x8003549Cu: goto label_8003549C;
    case 0x800354A0u: goto label_800354A0;
    case 0x800354A4u: goto label_800354A4;
    case 0x800354A8u: goto label_800354A8;
    case 0x800354ACu: goto label_800354AC;
    case 0x800354B0u: goto label_800354B0;
    case 0x800354B4u: goto label_800354B4;
    case 0x800354B8u: goto label_800354B8;
    case 0x800354BCu: goto label_800354BC;
    case 0x800354C0u: goto label_800354C0;
    case 0x800354C4u: goto label_800354C4;
    case 0x800354C8u: goto label_800354C8;
    case 0x800354CCu: goto label_800354CC;
    case 0x800354D0u: goto label_800354D0;
    case 0x800354D4u: goto label_800354D4;
    case 0x800354D8u: goto label_800354D8;
    case 0x800354DCu: goto label_800354DC;
    case 0x800354E0u: goto label_800354E0;
    case 0x800354E4u: goto label_800354E4;
    case 0x800354E8u: goto label_800354E8;
    case 0x800354ECu: goto label_800354EC;
    case 0x800354F0u: goto label_800354F0;
    case 0x800354F4u: goto label_800354F4;
    case 0x800354F8u: goto label_800354F8;
    case 0x800354FCu: goto label_800354FC;
    case 0x80035500u: goto label_80035500;
    case 0x80035504u: goto label_80035504;
    case 0x80035508u: goto label_80035508;
    case 0x8003550Cu: goto label_8003550C;
    case 0x80035510u: goto label_80035510;
    case 0x80035514u: goto label_80035514;
    case 0x80035518u: goto label_80035518;
    case 0x8003551Cu: goto label_8003551C;
    case 0x80035520u: goto label_80035520;
    case 0x80035524u: goto label_80035524;
    case 0x80035528u: goto label_80035528;
    case 0x8003552Cu: goto label_8003552C;
    case 0x80035530u: goto label_80035530;
    case 0x80035534u: goto label_80035534;
    case 0x80035538u: goto label_80035538;
    case 0x8003553Cu: goto label_8003553C;
    case 0x80035540u: goto label_80035540;
    case 0x80035544u: goto label_80035544;
    case 0x80035548u: goto label_80035548;
    case 0x8003554Cu: goto label_8003554C;
    case 0x80035550u: goto label_80035550;
    case 0x80035554u: goto label_80035554;
    case 0x80035558u: goto label_80035558;
    case 0x8003555Cu: goto label_8003555C;
    case 0x80035560u: goto label_80035560;
    case 0x80035564u: goto label_80035564;
    case 0x80035568u: goto label_80035568;
    case 0x8003556Cu: goto label_8003556C;
    case 0x80035570u: goto label_80035570;
    case 0x80035574u: goto label_80035574;
    case 0x80035578u: goto label_80035578;
    case 0x8003557Cu: goto label_8003557C;
    case 0x80035580u: goto label_80035580;
    case 0x80035584u: goto label_80035584;
    case 0x80035588u: goto label_80035588;
    case 0x8003558Cu: goto label_8003558C;
    case 0x80035590u: goto label_80035590;
    case 0x80035594u: goto label_80035594;
    case 0x80035598u: goto label_80035598;
    case 0x8003559Cu: goto label_8003559C;
    case 0x800355A0u: goto label_800355A0;
    case 0x800355A4u: goto label_800355A4;
    case 0x800355A8u: goto label_800355A8;
    case 0x800355ACu: goto label_800355AC;
    case 0x800355B0u: goto label_800355B0;
    case 0x800355B4u: goto label_800355B4;
    case 0x800355B8u: goto label_800355B8;
    case 0x800355BCu: goto label_800355BC;
    case 0x800355C0u: goto label_800355C0;
    case 0x800355C4u: goto label_800355C4;
    case 0x800355C8u: goto label_800355C8;
    case 0x800355CCu: goto label_800355CC;
    case 0x800355D0u: goto label_800355D0;
    case 0x800355D4u: goto label_800355D4;
    case 0x800355D8u: goto label_800355D8;
    case 0x800355DCu: goto label_800355DC;
    case 0x800355E0u: goto label_800355E0;
    case 0x800355E4u: goto label_800355E4;
    case 0x800355E8u: goto label_800355E8;
    case 0x800355ECu: goto label_800355EC;
    case 0x800355F0u: goto label_800355F0;
    case 0x800355F4u: goto label_800355F4;
    case 0x800355F8u: goto label_800355F8;
    case 0x800355FCu: goto label_800355FC;
    case 0x80035600u: goto label_80035600;
    case 0x80035604u: goto label_80035604;
    case 0x80035608u: goto label_80035608;
    case 0x8003560Cu: goto label_8003560C;
    case 0x80035610u: goto label_80035610;
    case 0x80035614u: goto label_80035614;
    case 0x80035618u: goto label_80035618;
    case 0x8003561Cu: goto label_8003561C;
    case 0x80035620u: goto label_80035620;
    case 0x80035624u: goto label_80035624;
    case 0x80035628u: goto label_80035628;
    case 0x8003562Cu: goto label_8003562C;
    case 0x80035630u: goto label_80035630;
    case 0x80035634u: goto label_80035634;
    case 0x80035638u: goto label_80035638;
    case 0x8003563Cu: goto label_8003563C;
    case 0x80035640u: goto label_80035640;
    case 0x80035644u: goto label_80035644;
    case 0x80035648u: goto label_80035648;
    case 0x8003564Cu: goto label_8003564C;
    case 0x80035650u: goto label_80035650;
    case 0x80035654u: goto label_80035654;
    case 0x80035658u: goto label_80035658;
    case 0x8003565Cu: goto label_8003565C;
    case 0x80035660u: goto label_80035660;
    case 0x80035664u: goto label_80035664;
    case 0x80035668u: goto label_80035668;
    case 0x8003566Cu: goto label_8003566C;
    case 0x80035670u: goto label_80035670;
    case 0x80035674u: goto label_80035674;
    case 0x80035678u: goto label_80035678;
    case 0x8003567Cu: goto label_8003567C;
    case 0x80035680u: goto label_80035680;
    case 0x80035684u: goto label_80035684;
    case 0x80035688u: goto label_80035688;
    case 0x8003568Cu: goto label_8003568C;
    case 0x80035690u: goto label_80035690;
    case 0x80035694u: goto label_80035694;
    case 0x80035698u: goto label_80035698;
    case 0x8003569Cu: goto label_8003569C;
    case 0x800356A0u: goto label_800356A0;
    case 0x800356A4u: goto label_800356A4;
    case 0x800356A8u: goto label_800356A8;
    case 0x800356ACu: goto label_800356AC;
    case 0x800356B0u: goto label_800356B0;
    case 0x800356B4u: goto label_800356B4;
    case 0x800356B8u: goto label_800356B8;
    case 0x800356BCu: goto label_800356BC;
    case 0x800356C0u: goto label_800356C0;
    case 0x800356C4u: goto label_800356C4;
    case 0x800356C8u: goto label_800356C8;
    case 0x800356CCu: goto label_800356CC;
    case 0x800356D0u: goto label_800356D0;
    case 0x800356D4u: goto label_800356D4;
    case 0x800356D8u: goto label_800356D8;
    case 0x800356DCu: goto label_800356DC;
    case 0x800356E0u: goto label_800356E0;
    case 0x800356E4u: goto label_800356E4;
    case 0x800356E8u: goto label_800356E8;
    case 0x800356ECu: goto label_800356EC;
    case 0x800356F0u: goto label_800356F0;
    case 0x800356F4u: goto label_800356F4;
    case 0x800356F8u: goto label_800356F8;
    case 0x800356FCu: goto label_800356FC;
    case 0x80035700u: goto label_80035700;
    case 0x80035704u: goto label_80035704;
    case 0x80035708u: goto label_80035708;
    case 0x8003570Cu: goto label_8003570C;
    case 0x80035710u: goto label_80035710;
    case 0x80035714u: goto label_80035714;
    case 0x80035718u: goto label_80035718;
    case 0x8003571Cu: goto label_8003571C;
    case 0x80035720u: goto label_80035720;
    case 0x80035724u: goto label_80035724;
    case 0x80035728u: goto label_80035728;
    case 0x8003572Cu: goto label_8003572C;
    case 0x80035730u: goto label_80035730;
    case 0x80035734u: goto label_80035734;
    case 0x80035738u: goto label_80035738;
    case 0x8003573Cu: goto label_8003573C;
    case 0x80035740u: goto label_80035740;
    case 0x80035744u: goto label_80035744;
    case 0x80035748u: goto label_80035748;
    case 0x8003574Cu: goto label_8003574C;
    case 0x80035750u: goto label_80035750;
    case 0x80035754u: goto label_80035754;
    case 0x80035758u: goto label_80035758;
    case 0x8003575Cu: goto label_8003575C;
    case 0x80035760u: goto label_80035760;
    case 0x80035764u: goto label_80035764;
    case 0x80035768u: goto label_80035768;
    case 0x8003576Cu: goto label_8003576C;
    case 0x80035770u: goto label_80035770;
    case 0x80035774u: goto label_80035774;
    case 0x80035778u: goto label_80035778;
    case 0x8003577Cu: goto label_8003577C;
    case 0x80035780u: goto label_80035780;
    case 0x80035784u: goto label_80035784;
    case 0x80035788u: goto label_80035788;
    case 0x8003578Cu: goto label_8003578C;
    case 0x80035790u: goto label_80035790;
    case 0x80035794u: goto label_80035794;
    case 0x80035798u: goto label_80035798;
    case 0x8003579Cu: goto label_8003579C;
    case 0x800357A0u: goto label_800357A0;
    case 0x800357A4u: goto label_800357A4;
    case 0x800357A8u: goto label_800357A8;
    case 0x800357ACu: goto label_800357AC;
    case 0x800357B0u: goto label_800357B0;
    case 0x800357B4u: goto label_800357B4;
    case 0x800357B8u: goto label_800357B8;
    case 0x800357BCu: goto label_800357BC;
    case 0x800357C0u: goto label_800357C0;
    case 0x800357C4u: goto label_800357C4;
    case 0x800357C8u: goto label_800357C8;
    case 0x800357CCu: goto label_800357CC;
    case 0x800357D0u: goto label_800357D0;
    case 0x800357D4u: goto label_800357D4;
    case 0x800357D8u: goto label_800357D8;
    case 0x800357DCu: goto label_800357DC;
    case 0x800357E0u: goto label_800357E0;
    case 0x800357E4u: goto label_800357E4;
    case 0x800357E8u: goto label_800357E8;
    case 0x800357ECu: goto label_800357EC;
    case 0x800357F0u: goto label_800357F0;
    case 0x800357F4u: goto label_800357F4;
    case 0x800357F8u: goto label_800357F8;
    case 0x800357FCu: goto label_800357FC;
    case 0x80035800u: goto label_80035800;
    case 0x80035804u: goto label_80035804;
    case 0x80035808u: goto label_80035808;
    case 0x8003580Cu: goto label_8003580C;
    case 0x80035810u: goto label_80035810;
    case 0x80035814u: goto label_80035814;
    case 0x80035818u: goto label_80035818;
    case 0x8003581Cu: goto label_8003581C;
    case 0x80035820u: goto label_80035820;
    case 0x80035824u: goto label_80035824;
    case 0x80035828u: goto label_80035828;
    case 0x8003582Cu: goto label_8003582C;
    case 0x80035830u: goto label_80035830;
    case 0x80035834u: goto label_80035834;
    case 0x80035838u: goto label_80035838;
    case 0x8003583Cu: goto label_8003583C;
    case 0x80035840u: goto label_80035840;
    case 0x80035844u: goto label_80035844;
    case 0x80035848u: goto label_80035848;
    case 0x8003584Cu: goto label_8003584C;
    case 0x80035850u: goto label_80035850;
    case 0x80035854u: goto label_80035854;
    case 0x80035858u: goto label_80035858;
    case 0x8003585Cu: goto label_8003585C;
    case 0x80035860u: goto label_80035860;
    case 0x80035864u: goto label_80035864;
    case 0x80035868u: goto label_80035868;
    case 0x8003586Cu: goto label_8003586C;
    case 0x80035870u: goto label_80035870;
    case 0x80035874u: goto label_80035874;
    case 0x80035878u: goto label_80035878;
    case 0x8003587Cu: goto label_8003587C;
    case 0x80035880u: goto label_80035880;
    case 0x80035884u: goto label_80035884;
    case 0x80035888u: goto label_80035888;
    case 0x8003588Cu: goto label_8003588C;
    case 0x80035890u: goto label_80035890;
    case 0x80035894u: goto label_80035894;
    case 0x80035898u: goto label_80035898;
    case 0x8003589Cu: goto label_8003589C;
    default: return;
    }
label_800318A0:
    ctx->pc = 0x800318A0u;
    ctx->downcount -= 1;
    // 800318A0: b       0x800318A4
    {
            goto label_800318A4;
    }

label_800318A4:
    ctx->pc = 0x800318A4u;
    ctx->downcount -= 3;
    // 800318A4: lis     r3, -32760
    ctx->gpr[3] = ((u32)(s32)(-32760) << 16);

label_800318A8:
    ctx->pc = 0x800318A8u;
    // 800318A8: addi    r30, r3, -2452
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-2452);

label_800318AC:
    ctx->pc = 0x800318ACu;
    // 800318AC: b       0x800318B0
    {
            goto label_800318B0;
    }

label_800318B0:
    ctx->pc = 0x800318B0u;
    ctx->downcount -= 1;
    // 800318B0: b       0x800318B4
    {
            goto label_800318B4;
    }

label_800318B4:
    ctx->downcount -= 3;
    // 800318B4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_800318B8:
    // 800318B8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800318BC:
    // 800318BC: bl      0x80032F68
    {
            ctx->lr = 0x800318C0u;
            goto label_80032F68;
    }

label_800318C0:
    ctx->downcount -= 3;
    // 800318C0: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_800318C4:
    // 800318C4: cmplwi  r29, 0x0008
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(0x0008u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800318C8:
    // 800318C8: bc    12, 0, 0x800318B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800318B4u;
                return;
            }
            goto label_800318B4;
        }
    }

label_800318CC:
    ctx->pc = 0x800318CCu;
    ctx->downcount -= 3;
    // 800318CC: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_800318D0:
    ctx->pc = 0x800318D0u;
    // 800318D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800318D4:
    ctx->pc = 0x800318D4u;
    // 800318D4: bl      0x80033F70
    {
            ctx->lr = 0x800318D8u;
            goto label_80033F70;
    }

label_800318D8:
    ctx->pc = 0x800318D8u;
    ctx->downcount -= 3;
    // 800318D8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_800318DC:
    ctx->pc = 0x800318DCu;
    // 800318DC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800318E0:
    ctx->pc = 0x800318E0u;
    // 800318E0: bl      0x80033FB8
    {
            ctx->lr = 0x800318E4u;
            goto label_80033FB8;
    }

label_800318E4:
    ctx->pc = 0x800318E4u;
    ctx->downcount -= 4;
    // 800318E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800318E8:
    ctx->pc = 0x800318E8u;
    // 800318E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800318EC:
    ctx->pc = 0x800318ECu;
    // 800318EC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800318F0:
    ctx->pc = 0x800318F0u;
    // 800318F0: bl      0x80034000
    {
            ctx->lr = 0x800318F4u;
            goto label_80034000;
    }

label_800318F4:
    ctx->pc = 0x800318F4u;
    ctx->downcount -= 4;
    // 800318F4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800318F8:
    ctx->pc = 0x800318F8u;
    // 800318F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800318FC:
    ctx->pc = 0x800318FCu;
    // 800318FC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80031900:
    ctx->pc = 0x80031900u;
    // 80031900: bl      0x80034000
    {
            ctx->lr = 0x80031904u;
            goto label_80034000;
    }

label_80031904:
    ctx->pc = 0x80031904u;
    ctx->downcount -= 4;
    // 80031904: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80031908:
    ctx->pc = 0x80031908u;
    // 80031908: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8003190C:
    ctx->pc = 0x8003190Cu;
    // 8003190C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80031910:
    ctx->pc = 0x80031910u;
    // 80031910: bl      0x80034000
    {
            ctx->lr = 0x80031914u;
            goto label_80034000;
    }

label_80031914:
    ctx->pc = 0x80031914u;
    ctx->downcount -= 4;
    // 80031914: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80031918:
    ctx->pc = 0x80031918u;
    // 80031918: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8003191C:
    ctx->pc = 0x8003191Cu;
    // 8003191C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80031920:
    ctx->pc = 0x80031920u;
    // 80031920: bl      0x80034000
    {
            ctx->lr = 0x80031924u;
            goto label_80034000;
    }

label_80031924:
    ctx->pc = 0x80031924u;
    ctx->downcount -= 4;
    // 80031924: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80031928:
    ctx->pc = 0x80031928u;
    // 80031928: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8003192C:
    ctx->pc = 0x8003192Cu;
    // 8003192C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80031930:
    ctx->pc = 0x80031930u;
    // 80031930: bl      0x80034000
    {
            ctx->lr = 0x80031934u;
            goto label_80034000;
    }

label_80031934:
    ctx->pc = 0x80031934u;
    ctx->downcount -= 4;
    // 80031934: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80031938:
    ctx->pc = 0x80031938u;
    // 80031938: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8003193C:
    ctx->pc = 0x8003193Cu;
    // 8003193C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80031940:
    ctx->pc = 0x80031940u;
    // 80031940: bl      0x80034000
    {
            ctx->lr = 0x80031944u;
            goto label_80034000;
    }

label_80031944:
    ctx->pc = 0x80031944u;
    ctx->downcount -= 4;
    // 80031944: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80031948:
    ctx->pc = 0x80031948u;
    // 80031948: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8003194C:
    ctx->pc = 0x8003194Cu;
    // 8003194C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80031950:
    ctx->pc = 0x80031950u;
    // 80031950: bl      0x80034000
    {
            ctx->lr = 0x80031954u;
            goto label_80034000;
    }

label_80031954:
    ctx->pc = 0x80031954u;
    ctx->downcount -= 4;
    // 80031954: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_80031958:
    ctx->pc = 0x80031958u;
    // 80031958: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8003195C:
    ctx->pc = 0x8003195Cu;
    // 8003195C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80031960:
    ctx->pc = 0x80031960u;
    // 80031960: bl      0x80034000
    {
            ctx->lr = 0x80031964u;
            goto label_80034000;
    }

label_80031964:
    ctx->pc = 0x80031964u;
    ctx->downcount -= 17;
    // 80031964: lfs     f1, -31152(r2)
    if (!ppc_fp_available_inline(ctx, 0x80031964u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80031968:
    ctx->pc = 0x80031968u;
    // 80031968: addi    r3, r1, 44
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(44);

label_8003196C:
    ctx->pc = 0x8003196Cu;
    // 8003196C: lfs     f0, -31148(r2)
    if (!ppc_fp_available_inline(ctx, 0x8003196Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80031970:
    ctx->pc = 0x80031970u;
    // 80031970: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031974:
    ctx->pc = 0x80031974u;
    // 80031974: stfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x80031974u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80031978:
    ctx->pc = 0x80031978u;
    // 80031978: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80031978u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8003197C:
    ctx->pc = 0x8003197Cu;
    // 8003197C: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x8003197Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80031980:
    ctx->pc = 0x80031980u;
    // 80031980: stfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x80031980u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80031984:
    ctx->pc = 0x80031984u;
    // 80031984: stfs     f0, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x80031984u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80031988:
    ctx->pc = 0x80031988u;
    // 80031988: stfs     f1, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80031988u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_8003198C:
    ctx->pc = 0x8003198Cu;
    // 8003198C: stfs     f0, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x8003198Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80031990:
    ctx->pc = 0x80031990u;
    // 80031990: stfs     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x80031990u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80031994:
    ctx->pc = 0x80031994u;
    // 80031994: stfs     f0, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x80031994u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80031998:
    ctx->pc = 0x80031998u;
    // 80031998: stfs     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80031998u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8003199C:
    ctx->pc = 0x8003199Cu;
    // 8003199C: stfs     f1, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x8003199Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_800319A0:
    ctx->pc = 0x800319A0u;
    // 800319A0: stfs     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x800319A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_800319A4:
    ctx->pc = 0x800319A4u;
    // 800319A4: bl      0x800375B4
    {
            ctx->lr = 0x800319A8u;
            ctx->pc = 0x800375B4u;
            return;
    }

label_800319A8:
    ctx->pc = 0x800319A8u;
    ctx->downcount -= 3;
    // 800319A8: addi    r3, r1, 44
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(44);

label_800319AC:
    ctx->pc = 0x800319ACu;
    // 800319AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800319B0:
    ctx->pc = 0x800319B0u;
    // 800319B0: bl      0x80037604
    {
            ctx->lr = 0x800319B4u;
            ctx->pc = 0x80037604u;
            return;
    }

label_800319B4:
    ctx->pc = 0x800319B4u;
    ctx->downcount -= 2;
    // 800319B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800319B8:
    ctx->pc = 0x800319B8u;
    // 800319B8: bl      0x80037654
    {
            ctx->lr = 0x800319BCu;
            ctx->pc = 0x80037654u;
            return;
    }

label_800319BC:
    ctx->pc = 0x800319BCu;
    ctx->downcount -= 4;
    // 800319BC: addi    r3, r1, 44
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(44);

label_800319C0:
    ctx->pc = 0x800319C0u;
    // 800319C0: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_800319C4:
    ctx->pc = 0x800319C4u;
    // 800319C4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800319C8:
    ctx->pc = 0x800319C8u;
    // 800319C8: bl      0x8003768C
    {
            ctx->lr = 0x800319CCu;
            ctx->pc = 0x8003768Cu;
            return;
    }

label_800319CC:
    ctx->pc = 0x800319CCu;
    ctx->downcount -= 4;
    // 800319CC: addi    r3, r1, 44
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(44);

label_800319D0:
    ctx->pc = 0x800319D0u;
    // 800319D0: li      r4, 125
    ctx->gpr[4] = (u32)(s32)(125);

label_800319D4:
    ctx->pc = 0x800319D4u;
    // 800319D4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800319D8:
    ctx->pc = 0x800319D8u;
    // 800319D8: bl      0x8003768C
    {
            ctx->lr = 0x800319DCu;
            ctx->pc = 0x8003768Cu;
            return;
    }

label_800319DC:
    ctx->pc = 0x800319DCu;
    ctx->downcount -= 17;
    // 800319DC: lhz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_800319E0:
    ctx->pc = 0x800319E0u;
    // 800319E0: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_800319E4:
    ctx->pc = 0x800319E4u;
    // 800319E4: lhz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800319E8:
    ctx->pc = 0x800319E8u;
    // 800319E8: stw     r4, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800319EC:
    ctx->pc = 0x800319ECu;
    // 800319EC: lfs     f1, -31148(r2)
    if (!ppc_fp_available_inline(ctx, 0x800319ECu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_800319F0:
    ctx->pc = 0x800319F0u;
    // 800319F0: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800319F4:
    ctx->pc = 0x800319F4u;
    // 800319F4: lfd     f4, -31136(r2)
    if (!ppc_fp_available_inline(ctx, 0x800319F4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31136);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_800319F8:
    ctx->pc = 0x800319F8u;
    // 800319F8: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x800319F8u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_800319FC:
    ctx->pc = 0x800319FCu;
    // 800319FC: stw     r3, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80031A00:
    ctx->pc = 0x80031A00u;
    // 80031A00: fmr    f5, f1
    if (!ppc_fp_available_inline(ctx, 0x80031A00u)) return;
    ctx->fpr[5] = ctx->fpr[1];

label_80031A04:
    ctx->pc = 0x80031A04u;
    // 80031A04: lfs     f6, -31152(r2)
    if (!ppc_fp_available_inline(ctx, 0x80031A04u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_80031A08:
    ctx->pc = 0x80031A08u;
    // 80031A08: stw     r3, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80031A0C:
    ctx->pc = 0x80031A0Cu;
    // 80031A0C: lfd     f3, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x80031A0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80031A10:
    ctx->pc = 0x80031A10u;
    // 80031A10: lfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80031A10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80031A14:
    ctx->pc = 0x80031A14u;
    // 80031A14: fsubs   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x80031A14u)) return;
    ppc_fsubs(ctx, 3, 3, 4);

label_80031A18:
    ctx->pc = 0x80031A18u;
    // 80031A18: fsubs   f4, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x80031A18u)) return;
    ppc_fsubs(ctx, 4, 0, 4);

label_80031A1C:
    ctx->pc = 0x80031A1Cu;
    // 80031A1C: bl      0x80037844
    {
            ctx->lr = 0x80031A20u;
            ctx->pc = 0x80037844u;
            return;
    }

label_80031A20:
    ctx->pc = 0x80031A20u;
    ctx->downcount -= 3;
    // 80031A20: lis     r3, -32760
    ctx->gpr[3] = ((u32)(s32)(-32760) << 16);

label_80031A24:
    ctx->pc = 0x80031A24u;
    // 80031A24: addi    r3, r3, -2244
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2244);

label_80031A28:
    ctx->pc = 0x80031A28u;
    // 80031A28: bl      0x80037494
    {
            ctx->lr = 0x80031A2Cu;
            ctx->pc = 0x80037494u;
            return;
    }

label_80031A2C:
    ctx->pc = 0x80031A2Cu;
    ctx->downcount -= 2;
    // 80031A2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031A30:
    ctx->pc = 0x80031A30u;
    // 80031A30: bl      0x800340EC
    {
            ctx->lr = 0x80031A34u;
            goto label_800340EC;
    }

label_80031A34:
    ctx->pc = 0x80031A34u;
    ctx->downcount -= 2;
    // 80031A34: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80031A38:
    ctx->pc = 0x80031A38u;
    // 80031A38: bl      0x8003405C
    {
            ctx->lr = 0x80031A3Cu;
            goto label_8003405C;
    }

label_80031A3C:
    ctx->pc = 0x80031A3Cu;
    ctx->downcount -= 2;
    // 80031A3C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031A40:
    ctx->pc = 0x80031A40u;
    // 80031A40: bl      0x80037970
    {
            ctx->lr = 0x80031A44u;
            ctx->pc = 0x80037970u;
            return;
    }

label_80031A44:
    ctx->pc = 0x80031A44u;
    ctx->downcount -= 5;
    // 80031A44: lhz     r5, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_80031A48:
    ctx->pc = 0x80031A48u;
    // 80031A48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031A4C:
    ctx->pc = 0x80031A4Cu;
    // 80031A4C: lhz     r6, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_80031A50:
    ctx->pc = 0x80031A50u;
    // 80031A50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031A54:
    ctx->pc = 0x80031A54u;
    // 80031A54: bl      0x800378A0
    {
            ctx->lr = 0x80031A58u;
            ctx->pc = 0x800378A0u;
            return;
    }

label_80031A58:
    ctx->pc = 0x80031A58u;
    ctx->downcount -= 3;
    // 80031A58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031A5C:
    ctx->pc = 0x80031A5Cu;
    // 80031A5C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031A60:
    ctx->pc = 0x80031A60u;
    // 80031A60: bl      0x80037930
    {
            ctx->lr = 0x80031A64u;
            ctx->pc = 0x80037930u;
            return;
    }

label_80031A64:
    ctx->pc = 0x80031A64u;
    ctx->downcount -= 2;
    // 80031A64: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031A68:
    ctx->pc = 0x80031A68u;
    // 80031A68: bl      0x80034EB0
    {
            ctx->lr = 0x80031A6Cu;
            goto label_80034EB0;
    }

label_80031A6C:
    ctx->pc = 0x80031A6Cu;
    ctx->downcount -= 8;
    // 80031A6C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80031A70:
    ctx->pc = 0x80031A70u;
    // 80031A70: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031A74:
    ctx->pc = 0x80031A74u;
    // 80031A74: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80031A78:
    ctx->pc = 0x80031A78u;
    // 80031A78: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80031A7C:
    ctx->pc = 0x80031A7Cu;
    // 80031A7C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80031A80:
    ctx->pc = 0x80031A80u;
    // 80031A80: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80031A84:
    ctx->pc = 0x80031A84u;
    // 80031A84: li      r9, 2
    ctx->gpr[9] = (u32)(s32)(2);

label_80031A88:
    ctx->pc = 0x80031A88u;
    // 80031A88: bl      0x80034EF4
    {
            ctx->lr = 0x80031A8Cu;
            goto label_80034EF4;
    }

label_80031A8C:
    ctx->pc = 0x80031A8Cu;
    ctx->downcount -= 5;
    // 80031A8C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031A90:
    ctx->pc = 0x80031A90u;
    // 80031A90: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_80031A94:
    ctx->pc = 0x80031A94u;
    // 80031A94: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80031A98:
    ctx->pc = 0x80031A98u;
    // 80031A98: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80031A9C:
    ctx->pc = 0x80031A9Cu;
    // 80031A9C: bl      0x80034CC8
    {
            ctx->lr = 0x80031AA0u;
            goto label_80034CC8;
    }

label_80031AA0:
    ctx->pc = 0x80031AA0u;
    ctx->downcount -= 5;
    // 80031AA0: lwz     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031AA4:
    ctx->pc = 0x80031AA4u;
    // 80031AA4: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80031AA8:
    ctx->pc = 0x80031AA8u;
    // 80031AA8: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80031AAC:
    ctx->pc = 0x80031AACu;
    // 80031AAC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80031AB0:
    ctx->pc = 0x80031AB0u;
    // 80031AB0: bl      0x80034DBC
    {
            ctx->lr = 0x80031AB4u;
            goto label_80034DBC;
    }

label_80031AB4:
    ctx->pc = 0x80031AB4u;
    ctx->downcount -= 8;
    // 80031AB4: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80031AB8:
    ctx->pc = 0x80031AB8u;
    // 80031AB8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031ABC:
    ctx->pc = 0x80031ABCu;
    // 80031ABC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80031AC0:
    ctx->pc = 0x80031AC0u;
    // 80031AC0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80031AC4:
    ctx->pc = 0x80031AC4u;
    // 80031AC4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80031AC8:
    ctx->pc = 0x80031AC8u;
    // 80031AC8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80031ACC:
    ctx->pc = 0x80031ACCu;
    // 80031ACC: li      r9, 2
    ctx->gpr[9] = (u32)(s32)(2);

label_80031AD0:
    ctx->pc = 0x80031AD0u;
    // 80031AD0: bl      0x80034EF4
    {
            ctx->lr = 0x80031AD4u;
            goto label_80034EF4;
    }

label_80031AD4:
    ctx->pc = 0x80031AD4u;
    ctx->downcount -= 5;
    // 80031AD4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031AD8:
    ctx->pc = 0x80031AD8u;
    // 80031AD8: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_80031ADC:
    ctx->pc = 0x80031ADCu;
    // 80031ADC: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80031AE0:
    ctx->pc = 0x80031AE0u;
    // 80031AE0: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80031AE4:
    ctx->pc = 0x80031AE4u;
    // 80031AE4: bl      0x80034CC8
    {
            ctx->lr = 0x80031AE8u;
            goto label_80034CC8;
    }

label_80031AE8:
    ctx->pc = 0x80031AE8u;
    ctx->downcount -= 5;
    // 80031AE8: lwz     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031AEC:
    ctx->pc = 0x80031AECu;
    // 80031AEC: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_80031AF0:
    ctx->pc = 0x80031AF0u;
    // 80031AF0: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80031AF4:
    ctx->pc = 0x80031AF4u;
    // 80031AF4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80031AF8:
    ctx->pc = 0x80031AF8u;
    // 80031AF8: bl      0x80034DBC
    {
            ctx->lr = 0x80031AFCu;
            goto label_80034DBC;
    }

label_80031AFC:
    ctx->pc = 0x80031AFCu;
    ctx->downcount -= 1;
    // 80031AFC: bl      0x80035A74
    {
            ctx->lr = 0x80031B00u;
            ctx->pc = 0x80035A74u;
            return;
    }

label_80031B00:
    ctx->pc = 0x80031B00u;
    ctx->downcount -= 7;
    // 80031B00: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80031B04:
    ctx->pc = 0x80031B04u;
    // 80031B04: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80031B08:
    ctx->pc = 0x80031B08u;
    // 80031B08: lis     r3, -32765
    ctx->gpr[3] = ((u32)(s32)(-32765) << 16);

label_80031B0C:
    ctx->pc = 0x80031B0Cu;
    // 80031B0C: stw     r30, 712(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(712);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80031B10:
    ctx->pc = 0x80031B10u;
    // 80031B10: addi    r3, r3, 3072
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3072);

label_80031B14:
    ctx->pc = 0x80031B14u;
    // 80031B14: stw     r30, 716(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(716);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80031B18:
    ctx->pc = 0x80031B18u;
    // 80031B18: bl      0x80035ABC
    {
            ctx->lr = 0x80031B1Cu;
            ctx->pc = 0x80035ABCu;
            return;
    }

label_80031B1C:
    ctx->pc = 0x80031B1Cu;
    ctx->downcount -= 3;
    // 80031B1C: lis     r3, -32765
    ctx->gpr[3] = ((u32)(s32)(-32765) << 16);

label_80031B20:
    ctx->pc = 0x80031B20u;
    // 80031B20: addi    r3, r3, 3196
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3196);

label_80031B24:
    ctx->pc = 0x80031B24u;
    // 80031B24: bl      0x80035AD0
    {
            ctx->lr = 0x80031B28u;
            ctx->pc = 0x80035AD0u;
            return;
    }

label_80031B28:
    ctx->pc = 0x80031B28u;
    ctx->downcount -= 5;
    // 80031B28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031B2C:
    ctx->pc = 0x80031B2Cu;
    // 80031B2C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031B30:
    ctx->pc = 0x80031B30u;
    // 80031B30: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80031B34:
    ctx->pc = 0x80031B34u;
    // 80031B34: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80031B38:
    ctx->pc = 0x80031B38u;
    // 80031B38: bl      0x80036A28
    {
            ctx->lr = 0x80031B3Cu;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80031B3C:
    ctx->pc = 0x80031B3Cu;
    ctx->downcount -= 5;
    // 80031B3C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80031B40:
    ctx->pc = 0x80031B40u;
    // 80031B40: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80031B44:
    ctx->pc = 0x80031B44u;
    // 80031B44: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80031B48:
    ctx->pc = 0x80031B48u;
    // 80031B48: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80031B4C:
    ctx->pc = 0x80031B4Cu;
    // 80031B4C: bl      0x80036A28
    {
            ctx->lr = 0x80031B50u;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80031B50:
    ctx->pc = 0x80031B50u;
    ctx->downcount -= 5;
    // 80031B50: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80031B54:
    ctx->pc = 0x80031B54u;
    // 80031B54: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80031B58:
    ctx->pc = 0x80031B58u;
    // 80031B58: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80031B5C:
    ctx->pc = 0x80031B5Cu;
    // 80031B5C: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80031B60:
    ctx->pc = 0x80031B60u;
    // 80031B60: bl      0x80036A28
    {
            ctx->lr = 0x80031B64u;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80031B64:
    ctx->pc = 0x80031B64u;
    ctx->downcount -= 5;
    // 80031B64: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80031B68:
    ctx->pc = 0x80031B68u;
    // 80031B68: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80031B6C:
    ctx->pc = 0x80031B6Cu;
    // 80031B6C: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_80031B70:
    ctx->pc = 0x80031B70u;
    // 80031B70: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80031B74:
    ctx->pc = 0x80031B74u;
    // 80031B74: bl      0x80036A28
    {
            ctx->lr = 0x80031B78u;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80031B78:
    ctx->pc = 0x80031B78u;
    ctx->downcount -= 5;
    // 80031B78: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80031B7C:
    ctx->pc = 0x80031B7Cu;
    // 80031B7C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80031B80:
    ctx->pc = 0x80031B80u;
    // 80031B80: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80031B84:
    ctx->pc = 0x80031B84u;
    // 80031B84: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80031B88:
    ctx->pc = 0x80031B88u;
    // 80031B88: bl      0x80036A28
    {
            ctx->lr = 0x80031B8Cu;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80031B8C:
    ctx->pc = 0x80031B8Cu;
    ctx->downcount -= 5;
    // 80031B8C: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80031B90:
    ctx->pc = 0x80031B90u;
    // 80031B90: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80031B94:
    ctx->pc = 0x80031B94u;
    // 80031B94: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_80031B98:
    ctx->pc = 0x80031B98u;
    // 80031B98: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80031B9C:
    ctx->pc = 0x80031B9Cu;
    // 80031B9C: bl      0x80036A28
    {
            ctx->lr = 0x80031BA0u;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80031BA0:
    ctx->pc = 0x80031BA0u;
    ctx->downcount -= 5;
    // 80031BA0: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80031BA4:
    ctx->pc = 0x80031BA4u;
    // 80031BA4: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80031BA8:
    ctx->pc = 0x80031BA8u;
    // 80031BA8: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_80031BAC:
    ctx->pc = 0x80031BACu;
    // 80031BAC: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80031BB0:
    ctx->pc = 0x80031BB0u;
    // 80031BB0: bl      0x80036A28
    {
            ctx->lr = 0x80031BB4u;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80031BB4:
    ctx->pc = 0x80031BB4u;
    ctx->downcount -= 5;
    // 80031BB4: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_80031BB8:
    ctx->pc = 0x80031BB8u;
    // 80031BB8: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80031BBC:
    ctx->pc = 0x80031BBCu;
    // 80031BBC: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_80031BC0:
    ctx->pc = 0x80031BC0u;
    // 80031BC0: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80031BC4:
    ctx->pc = 0x80031BC4u;
    // 80031BC4: bl      0x80036A28
    {
            ctx->lr = 0x80031BC8u;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80031BC8:
    ctx->pc = 0x80031BC8u;
    ctx->downcount -= 5;
    // 80031BC8: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80031BCC:
    ctx->pc = 0x80031BCCu;
    // 80031BCC: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_80031BD0:
    ctx->pc = 0x80031BD0u;
    // 80031BD0: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_80031BD4:
    ctx->pc = 0x80031BD4u;
    // 80031BD4: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80031BD8:
    ctx->pc = 0x80031BD8u;
    // 80031BD8: bl      0x80036A28
    {
            ctx->lr = 0x80031BDCu;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80031BDC:
    ctx->pc = 0x80031BDCu;
    ctx->downcount -= 5;
    // 80031BDC: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_80031BE0:
    ctx->pc = 0x80031BE0u;
    // 80031BE0: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_80031BE4:
    ctx->pc = 0x80031BE4u;
    // 80031BE4: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_80031BE8:
    ctx->pc = 0x80031BE8u;
    // 80031BE8: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80031BEC:
    ctx->pc = 0x80031BECu;
    // 80031BEC: bl      0x80036A28
    {
            ctx->lr = 0x80031BF0u;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80031BF0:
    ctx->pc = 0x80031BF0u;
    ctx->downcount -= 5;
    // 80031BF0: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80031BF4:
    ctx->pc = 0x80031BF4u;
    // 80031BF4: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_80031BF8:
    ctx->pc = 0x80031BF8u;
    // 80031BF8: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_80031BFC:
    ctx->pc = 0x80031BFCu;
    // 80031BFC: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80031C00:
    ctx->pc = 0x80031C00u;
    // 80031C00: bl      0x80036A28
    {
            ctx->lr = 0x80031C04u;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80031C04:
    ctx->pc = 0x80031C04u;
    ctx->downcount -= 5;
    // 80031C04: li      r3, 11
    ctx->gpr[3] = (u32)(s32)(11);

label_80031C08:
    ctx->pc = 0x80031C08u;
    // 80031C08: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_80031C0C:
    ctx->pc = 0x80031C0Cu;
    // 80031C0C: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_80031C10:
    ctx->pc = 0x80031C10u;
    // 80031C10: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80031C14:
    ctx->pc = 0x80031C14u;
    // 80031C14: bl      0x80036A28
    {
            ctx->lr = 0x80031C18u;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80031C18:
    ctx->pc = 0x80031C18u;
    ctx->downcount -= 5;
    // 80031C18: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_80031C1C:
    ctx->pc = 0x80031C1Cu;
    // 80031C1C: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_80031C20:
    ctx->pc = 0x80031C20u;
    // 80031C20: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_80031C24:
    ctx->pc = 0x80031C24u;
    // 80031C24: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80031C28:
    ctx->pc = 0x80031C28u;
    // 80031C28: bl      0x80036A28
    {
            ctx->lr = 0x80031C2Cu;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80031C2C:
    ctx->pc = 0x80031C2Cu;
    ctx->downcount -= 5;
    // 80031C2C: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_80031C30:
    ctx->pc = 0x80031C30u;
    // 80031C30: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_80031C34:
    ctx->pc = 0x80031C34u;
    // 80031C34: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_80031C38:
    ctx->pc = 0x80031C38u;
    // 80031C38: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80031C3C:
    ctx->pc = 0x80031C3Cu;
    // 80031C3C: bl      0x80036A28
    {
            ctx->lr = 0x80031C40u;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80031C40:
    ctx->pc = 0x80031C40u;
    ctx->downcount -= 5;
    // 80031C40: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_80031C44:
    ctx->pc = 0x80031C44u;
    // 80031C44: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_80031C48:
    ctx->pc = 0x80031C48u;
    // 80031C48: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_80031C4C:
    ctx->pc = 0x80031C4Cu;
    // 80031C4C: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80031C50:
    ctx->pc = 0x80031C50u;
    // 80031C50: bl      0x80036A28
    {
            ctx->lr = 0x80031C54u;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80031C54:
    ctx->pc = 0x80031C54u;
    ctx->downcount -= 5;
    // 80031C54: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_80031C58:
    ctx->pc = 0x80031C58u;
    // 80031C58: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_80031C5C:
    ctx->pc = 0x80031C5Cu;
    // 80031C5C: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_80031C60:
    ctx->pc = 0x80031C60u;
    // 80031C60: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80031C64:
    ctx->pc = 0x80031C64u;
    // 80031C64: bl      0x80036A28
    {
            ctx->lr = 0x80031C68u;
            ctx->pc = 0x80036A28u;
            return;
    }

label_80031C68:
    ctx->pc = 0x80031C68u;
    ctx->downcount -= 2;
    // 80031C68: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80031C6C:
    ctx->pc = 0x80031C6Cu;
    // 80031C6C: bl      0x80036C00
    {
            ctx->lr = 0x80031C70u;
            ctx->pc = 0x80036C00u;
            return;
    }

label_80031C70:
    ctx->pc = 0x80031C70u;
    ctx->downcount -= 3;
    // 80031C70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031C74:
    ctx->pc = 0x80031C74u;
    // 80031C74: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80031C78:
    ctx->pc = 0x80031C78u;
    // 80031C78: bl      0x800365A8
    {
            ctx->lr = 0x80031C7Cu;
            ctx->pc = 0x800365A8u;
            return;
    }

label_80031C7C:
    ctx->pc = 0x80031C7Cu;
    ctx->downcount -= 6;
    // 80031C7C: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_80031C80:
    ctx->pc = 0x80031C80u;
    // 80031C80: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031C84:
    ctx->pc = 0x80031C84u;
    // 80031C84: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80031C88:
    ctx->pc = 0x80031C88u;
    // 80031C88: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_80031C8C:
    ctx->pc = 0x80031C8Cu;
    // 80031C8C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80031C90:
    ctx->pc = 0x80031C90u;
    // 80031C90: bl      0x80036950
    {
            ctx->lr = 0x80031C94u;
            ctx->pc = 0x80036950u;
            return;
    }

label_80031C94:
    ctx->pc = 0x80031C94u;
    ctx->downcount -= 4;
    // 80031C94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031C98:
    ctx->pc = 0x80031C98u;
    // 80031C98: li      r4, 17
    ctx->gpr[4] = (u32)(s32)(17);

label_80031C9C:
    ctx->pc = 0x80031C9Cu;
    // 80031C9C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80031CA0:
    ctx->pc = 0x80031CA0u;
    // 80031CA0: bl      0x800369A4
    {
            ctx->lr = 0x80031CA4u;
            ctx->pc = 0x800369A4u;
            return;
    }

label_80031CA4:
    ctx->pc = 0x80031CA4u;
    ctx->downcount -= 1;
    // 80031CA4: b       0x80031CA8
    {
            goto label_80031CA8;
    }

label_80031CA8:
    ctx->pc = 0x80031CA8u;
    ctx->downcount -= 1;
    // 80031CA8: b       0x80031CAC
    {
            goto label_80031CAC;
    }

label_80031CAC:
    ctx->pc = 0x80031CACu;
    ctx->downcount -= 1;
    // 80031CAC: b       0x80031CB0
    {
            goto label_80031CB0;
    }

label_80031CB0:
    ctx->downcount -= 3;
    // 80031CB0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80031CB4:
    // 80031CB4: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80031CB8:
    // 80031CB8: bl      0x8003678C
    {
            ctx->lr = 0x80031CBCu;
            ctx->pc = 0x8003678Cu;
            return;
    }

label_80031CBC:
    ctx->downcount -= 3;
    // 80031CBC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80031CC0:
    // 80031CC0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031CC4:
    // 80031CC4: bl      0x800367F8
    {
            ctx->lr = 0x80031CC8u;
            ctx->pc = 0x800367F8u;
            return;
    }

label_80031CC8:
    ctx->downcount -= 4;
    // 80031CC8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80031CCC:
    // 80031CCC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031CD0:
    // 80031CD0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80031CD4:
    // 80031CD4: bl      0x80036864
    {
            ctx->lr = 0x80031CD8u;
            ctx->pc = 0x80036864u;
            return;
    }

label_80031CD8:
    ctx->downcount -= 3;
    // 80031CD8: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80031CDC:
    // 80031CDC: cmplwi  r30, 0x0010
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(0x0010u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80031CE0:
    // 80031CE0: bc    12, 0, 0x80031CB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80031CB0u;
                return;
            }
            goto label_80031CB0;
        }
    }

label_80031CE4:
    ctx->pc = 0x80031CE4u;
    ctx->downcount -= 6;
    // 80031CE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031CE8:
    ctx->pc = 0x80031CE8u;
    // 80031CE8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031CEC:
    ctx->pc = 0x80031CECu;
    // 80031CEC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80031CF0:
    ctx->pc = 0x80031CF0u;
    // 80031CF0: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_80031CF4:
    ctx->pc = 0x80031CF4u;
    // 80031CF4: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_80031CF8:
    ctx->pc = 0x80031CF8u;
    // 80031CF8: bl      0x800368B8
    {
            ctx->lr = 0x80031CFCu;
            ctx->pc = 0x800368B8u;
            return;
    }

label_80031CFC:
    ctx->pc = 0x80031CFCu;
    ctx->downcount -= 6;
    // 80031CFC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80031D00:
    ctx->pc = 0x80031D00u;
    // 80031D00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031D04:
    ctx->pc = 0x80031D04u;
    // 80031D04: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80031D08:
    ctx->pc = 0x80031D08u;
    // 80031D08: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80031D0C:
    ctx->pc = 0x80031D0Cu;
    // 80031D0C: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_80031D10:
    ctx->pc = 0x80031D10u;
    // 80031D10: bl      0x800368B8
    {
            ctx->lr = 0x80031D14u;
            ctx->pc = 0x800368B8u;
            return;
    }

label_80031D14:
    ctx->pc = 0x80031D14u;
    ctx->downcount -= 6;
    // 80031D14: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80031D18:
    ctx->pc = 0x80031D18u;
    // 80031D18: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80031D1C:
    ctx->pc = 0x80031D1Cu;
    // 80031D1C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80031D20:
    ctx->pc = 0x80031D20u;
    // 80031D20: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80031D24:
    ctx->pc = 0x80031D24u;
    // 80031D24: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_80031D28:
    ctx->pc = 0x80031D28u;
    // 80031D28: bl      0x800368B8
    {
            ctx->lr = 0x80031D2Cu;
            ctx->pc = 0x800368B8u;
            return;
    }

label_80031D2C:
    ctx->pc = 0x80031D2Cu;
    ctx->downcount -= 6;
    // 80031D2C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80031D30:
    ctx->pc = 0x80031D30u;
    // 80031D30: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80031D34:
    ctx->pc = 0x80031D34u;
    // 80031D34: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80031D38:
    ctx->pc = 0x80031D38u;
    // 80031D38: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_80031D3C:
    ctx->pc = 0x80031D3Cu;
    // 80031D3C: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_80031D40:
    ctx->pc = 0x80031D40u;
    // 80031D40: bl      0x800368B8
    {
            ctx->lr = 0x80031D44u;
            ctx->pc = 0x800368B8u;
            return;
    }

label_80031D44:
    ctx->pc = 0x80031D44u;
    ctx->downcount -= 2;
    // 80031D44: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80031D48:
    ctx->pc = 0x80031D48u;
    // 80031D48: b       0x80031D4C
    {
            goto label_80031D4C;
    }

label_80031D4C:
    ctx->pc = 0x80031D4Cu;
    ctx->downcount -= 1;
    // 80031D4C: b       0x80031D50
    {
            goto label_80031D50;
    }

label_80031D50:
    ctx->pc = 0x80031D50u;
    ctx->downcount -= 1;
    // 80031D50: b       0x80031D54
    {
            goto label_80031D54;
    }

label_80031D54:
    ctx->downcount -= 2;
    // 80031D54: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80031D58:
    // 80031D58: bl      0x8003640C
    {
            ctx->lr = 0x80031D5Cu;
            ctx->pc = 0x8003640Cu;
            return;
    }

label_80031D5C:
    ctx->downcount -= 3;
    // 80031D5C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80031D60:
    // 80031D60: cmplwi  r30, 0x0010
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(0x0010u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80031D64:
    // 80031D64: bc    12, 0, 0x80031D54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80031D54u;
                return;
            }
            goto label_80031D54;
        }
    }

label_80031D68:
    ctx->pc = 0x80031D68u;
    ctx->downcount -= 2;
    // 80031D68: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031D6C:
    ctx->pc = 0x80031D6Cu;
    // 80031D6C: bl      0x800363E4
    {
            ctx->lr = 0x80031D70u;
            ctx->pc = 0x800363E4u;
            return;
    }

label_80031D70:
    ctx->pc = 0x80031D70u;
    ctx->downcount -= 4;
    // 80031D70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031D74:
    ctx->pc = 0x80031D74u;
    // 80031D74: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031D78:
    ctx->pc = 0x80031D78u;
    // 80031D78: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80031D7C:
    ctx->pc = 0x80031D7Cu;
    // 80031D7C: bl      0x80036154
    {
            ctx->lr = 0x80031D80u;
            ctx->pc = 0x80036154u;
            return;
    }

label_80031D80:
    ctx->pc = 0x80031D80u;
    ctx->downcount -= 4;
    // 80031D80: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80031D84:
    ctx->pc = 0x80031D84u;
    // 80031D84: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031D88:
    ctx->pc = 0x80031D88u;
    // 80031D88: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80031D8C:
    ctx->pc = 0x80031D8Cu;
    // 80031D8C: bl      0x80036154
    {
            ctx->lr = 0x80031D90u;
            ctx->pc = 0x80036154u;
            return;
    }

label_80031D90:
    ctx->pc = 0x80031D90u;
    ctx->downcount -= 4;
    // 80031D90: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80031D94:
    ctx->pc = 0x80031D94u;
    // 80031D94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031D98:
    ctx->pc = 0x80031D98u;
    // 80031D98: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80031D9C:
    ctx->pc = 0x80031D9Cu;
    // 80031D9C: bl      0x80036154
    {
            ctx->lr = 0x80031DA0u;
            ctx->pc = 0x80036154u;
            return;
    }

label_80031DA0:
    ctx->pc = 0x80031DA0u;
    ctx->downcount -= 4;
    // 80031DA0: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80031DA4:
    ctx->pc = 0x80031DA4u;
    // 80031DA4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031DA8:
    ctx->pc = 0x80031DA8u;
    // 80031DA8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80031DAC:
    ctx->pc = 0x80031DACu;
    // 80031DAC: bl      0x80036154
    {
            ctx->lr = 0x80031DB0u;
            ctx->pc = 0x80036154u;
            return;
    }

label_80031DB0:
    ctx->pc = 0x80031DB0u;
    ctx->downcount -= 9;
    // 80031DB0: lfs     f2, -31152(r2)
    if (!ppc_fp_available_inline(ctx, 0x80031DB0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80031DB4:
    ctx->pc = 0x80031DB4u;
    // 80031DB4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80031DB8:
    ctx->pc = 0x80031DB8u;
    // 80031DB8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031DBC:
    ctx->pc = 0x80031DBCu;
    // 80031DBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031DC0:
    ctx->pc = 0x80031DC0u;
    // 80031DC0: fmr    f4, f2
    if (!ppc_fp_available_inline(ctx, 0x80031DC0u)) return;
    ctx->fpr[4] = ctx->fpr[2];

label_80031DC4:
    ctx->pc = 0x80031DC4u;
    // 80031DC4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80031DC8:
    ctx->pc = 0x80031DC8u;
    // 80031DC8: lfs     f1, -31148(r2)
    if (!ppc_fp_available_inline(ctx, 0x80031DC8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80031DCC:
    ctx->pc = 0x80031DCCu;
    // 80031DCC: lfs     f3, -31144(r2)
    if (!ppc_fp_available_inline(ctx, 0x80031DCCu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80031DD0:
    ctx->pc = 0x80031DD0u;
    // 80031DD0: bl      0x80036C30
    {
            ctx->lr = 0x80031DD4u;
            ctx->pc = 0x80036C30u;
            return;
    }

label_80031DD4:
    ctx->pc = 0x80031DD4u;
    ctx->downcount -= 4;
    // 80031DD4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031DD8:
    ctx->pc = 0x80031DD8u;
    // 80031DD8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031DDC:
    ctx->pc = 0x80031DDCu;
    // 80031DDC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80031DE0:
    ctx->pc = 0x80031DE0u;
    // 80031DE0: bl      0x80036E4C
    {
            ctx->lr = 0x80031DE4u;
            ctx->pc = 0x80036E4Cu;
            return;
    }

label_80031DE4:
    ctx->pc = 0x80031DE4u;
    ctx->downcount -= 5;
    // 80031DE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031DE8:
    ctx->pc = 0x80031DE8u;
    // 80031DE8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80031DEC:
    ctx->pc = 0x80031DECu;
    // 80031DEC: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_80031DF0:
    ctx->pc = 0x80031DF0u;
    // 80031DF0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80031DF4:
    ctx->pc = 0x80031DF4u;
    // 80031DF4: bl      0x80036F4C
    {
            ctx->lr = 0x80031DF8u;
            ctx->pc = 0x80036F4Cu;
            return;
    }

label_80031DF8:
    ctx->pc = 0x80031DF8u;
    ctx->downcount -= 2;
    // 80031DF8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80031DFC:
    ctx->pc = 0x80031DFCu;
    // 80031DFC: bl      0x80036FA0
    {
            ctx->lr = 0x80031E00u;
            ctx->pc = 0x80036FA0u;
            return;
    }

label_80031E00:
    ctx->pc = 0x80031E00u;
    ctx->downcount -= 2;
    // 80031E00: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80031E04:
    ctx->pc = 0x80031E04u;
    // 80031E04: bl      0x80036FCC
    {
            ctx->lr = 0x80031E08u;
            ctx->pc = 0x80036FCCu;
            return;
    }

label_80031E08:
    ctx->pc = 0x80031E08u;
    ctx->downcount -= 4;
    // 80031E08: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80031E0C:
    ctx->pc = 0x80031E0Cu;
    // 80031E0C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80031E10:
    ctx->pc = 0x80031E10u;
    // 80031E10: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80031E14:
    ctx->pc = 0x80031E14u;
    // 80031E14: bl      0x80036FF8
    {
            ctx->lr = 0x80031E18u;
            ctx->pc = 0x80036FF8u;
            return;
    }

label_80031E18:
    ctx->pc = 0x80031E18u;
    ctx->downcount -= 2;
    // 80031E18: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80031E1C:
    ctx->pc = 0x80031E1Cu;
    // 80031E1C: bl      0x8003702C
    {
            ctx->lr = 0x80031E20u;
            ctx->pc = 0x8003702Cu;
            return;
    }

label_80031E20:
    ctx->pc = 0x80031E20u;
    ctx->downcount -= 2;
    // 80031E20: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80031E24:
    ctx->pc = 0x80031E24u;
    // 80031E24: bl      0x8003714C
    {
            ctx->lr = 0x80031E28u;
            ctx->pc = 0x8003714Cu;
            return;
    }

label_80031E28:
    ctx->pc = 0x80031E28u;
    ctx->downcount -= 3;
    // 80031E28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031E2C:
    ctx->pc = 0x80031E2Cu;
    // 80031E2C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031E30:
    ctx->pc = 0x80031E30u;
    // 80031E30: bl      0x80037178
    {
            ctx->lr = 0x80031E34u;
            ctx->pc = 0x80037178u;
            return;
    }

label_80031E34:
    ctx->pc = 0x80031E34u;
    ctx->downcount -= 3;
    // 80031E34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031E38:
    ctx->pc = 0x80031E38u;
    // 80031E38: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031E3C:
    ctx->pc = 0x80031E3Cu;
    // 80031E3C: bl      0x80037064
    {
            ctx->lr = 0x80031E40u;
            ctx->pc = 0x80037064u;
            return;
    }

label_80031E40:
    ctx->pc = 0x80031E40u;
    ctx->downcount -= 3;
    // 80031E40: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80031E44:
    ctx->pc = 0x80031E44u;
    // 80031E44: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80031E48:
    ctx->pc = 0x80031E48u;
    // 80031E48: bl      0x800371B4
    {
            ctx->lr = 0x80031E4Cu;
            ctx->pc = 0x800371B4u;
            return;
    }

label_80031E4C:
    ctx->pc = 0x80031E4Cu;
    ctx->downcount -= 5;
    // 80031E4C: lhz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031E50:
    ctx->pc = 0x80031E50u;
    // 80031E50: lhz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80031E54:
    ctx->pc = 0x80031E54u;
    // 80031E54: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_80031E58:
    ctx->pc = 0x80031E58u;
    // 80031E58: cmpw    r3, r0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80031E5C:
    ctx->pc = 0x80031E5Cu;
    // 80031E5C: bc    4, 2, 0x80031E68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80031E68;
        }
    }

label_80031E60:
    ctx->pc = 0x80031E60u;
    ctx->downcount -= 2;
    // 80031E60: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80031E64:
    ctx->pc = 0x80031E64u;
    // 80031E64: b       0x80031E6C
    {
            goto label_80031E6C;
    }

label_80031E68:
    ctx->pc = 0x80031E68u;
    ctx->downcount -= 1;
    // 80031E68: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031E6C:
    ctx->pc = 0x80031E6Cu;
    ctx->downcount -= 2;
    // 80031E6C: lbz     r3, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80031E70:
    ctx->pc = 0x80031E70u;
    // 80031E70: bl      0x800371EC
    {
            ctx->lr = 0x80031E74u;
            ctx->pc = 0x800371ECu;
            return;
    }

label_80031E74:
    ctx->pc = 0x80031E74u;
    ctx->downcount -= 5;
    // 80031E74: lhz     r5, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_80031E78:
    ctx->pc = 0x80031E78u;
    // 80031E78: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031E7C:
    ctx->pc = 0x80031E7Cu;
    // 80031E7C: lhz     r6, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_80031E80:
    ctx->pc = 0x80031E80u;
    // 80031E80: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031E84:
    ctx->pc = 0x80031E84u;
    // 80031E84: bl      0x8003426C
    {
            ctx->lr = 0x80031E88u;
            goto label_8003426C;
    }

label_80031E88:
    ctx->pc = 0x80031E88u;
    ctx->downcount -= 3;
    // 80031E88: lhz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80031E8C:
    ctx->pc = 0x80031E8Cu;
    // 80031E8C: lhz     r4, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80031E90:
    ctx->pc = 0x80031E90u;
    // 80031E90: bl      0x8003438C
    {
            ctx->lr = 0x80031E94u;
            goto label_8003438C;
    }

label_80031E94:
    ctx->pc = 0x80031E94u;
    ctx->downcount -= 30;
    // 80031E94: lhz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80031E98:
    ctx->pc = 0x80031E98u;
    // 80031E98: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_80031E9C:
    ctx->pc = 0x80031E9Cu;
    // 80031E9C: lhz     r0, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031EA0:
    ctx->pc = 0x80031EA0u;
    // 80031EA0: stw     r4, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80031EA4:
    ctx->pc = 0x80031EA4u;
    // 80031EA4: lfd     f2, -31136(r2)
    if (!ppc_fp_available_inline(ctx, 0x80031EA4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31136);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80031EA8:
    ctx->pc = 0x80031EA8u;
    // 80031EA8: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80031EAC:
    ctx->pc = 0x80031EACu;
    // 80031EAC: stw     r3, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80031EB0:
    ctx->pc = 0x80031EB0u;
    // 80031EB0: stw     r3, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80031EB4:
    ctx->pc = 0x80031EB4u;
    // 80031EB4: lfd     f1, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80031EB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80031EB8:
    ctx->pc = 0x80031EB8u;
    // 80031EB8: lfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x80031EB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80031EBC:
    ctx->pc = 0x80031EBCu;
    // 80031EBC: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80031EBCu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_80031EC0:
    ctx->pc = 0x80031EC0u;
    // 80031EC0: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80031EC0u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_80031EC4:
    ctx->pc = 0x80031EC4u;
    // 80031EC4: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80031EC4u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_80031EC8:
    ctx->pc = 0x80031EC8u;
    // 80031EC8: bl      0x800345AC
    {
            ctx->lr = 0x80031ECCu;
            goto label_800345AC;
    }

label_80031ECC:
    ctx->pc = 0x80031ECCu;
    ctx->downcount -= 2;
    // 80031ECC: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80031ED0:
    ctx->pc = 0x80031ED0u;
    // 80031ED0: bl      0x80034544
    {
            ctx->lr = 0x80031ED4u;
            goto label_80034544;
    }

label_80031ED4:
    ctx->pc = 0x80031ED4u;
    ctx->downcount -= 5;
    // 80031ED4: lbz     r3, 25(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(25);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80031ED8:
    ctx->pc = 0x80031ED8u;
    // 80031ED8: addi    r4, r31, 26
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(26);

label_80031EDC:
    ctx->pc = 0x80031EDCu;
    // 80031EDC: addi    r6, r31, 50
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(50);

label_80031EE0:
    ctx->pc = 0x80031EE0u;
    // 80031EE0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80031EE4:
    ctx->pc = 0x80031EE4u;
    // 80031EE4: bl      0x800346DC
    {
            ctx->lr = 0x80031EE8u;
            goto label_800346DC;
    }

label_80031EE8:
    ctx->pc = 0x80031EE8u;
    ctx->downcount -= 2;
    // 80031EE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031EEC:
    ctx->pc = 0x80031EECu;
    // 80031EEC: bl      0x80034904
    {
            ctx->lr = 0x80031EF0u;
            goto label_80034904;
    }

label_80031EF0:
    ctx->pc = 0x80031EF0u;
    ctx->downcount -= 2;
    // 80031EF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031EF4:
    ctx->pc = 0x80031EF4u;
    // 80031EF4: bl      0x8003451C
    {
            ctx->lr = 0x80031EF8u;
            goto label_8003451C;
    }

label_80031EF8:
    ctx->pc = 0x80031EF8u;
    ctx->downcount -= 1;
    // 80031EF8: bl      0x80034BF8
    {
            ctx->lr = 0x80031EFCu;
            goto label_80034BF8;
    }

label_80031EFC:
    ctx->pc = 0x80031EFCu;
    ctx->downcount -= 2;
    // 80031EFC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80031F00:
    ctx->pc = 0x80031F00u;
    // 80031F00: bl      0x80033AD0
    {
            ctx->lr = 0x80031F04u;
            goto label_80033AD0;
    }

label_80031F04:
    ctx->pc = 0x80031F04u;
    ctx->downcount -= 2;
    // 80031F04: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80031F08:
    ctx->pc = 0x80031F08u;
    // 80031F08: bl      0x80033A2C
    {
            ctx->lr = 0x80031F0Cu;
            goto label_80033A2C;
    }

label_80031F0C:
    ctx->pc = 0x80031F0Cu;
    ctx->downcount -= 2;
    // 80031F0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031F10:
    ctx->pc = 0x80031F10u;
    // 80031F10: bl      0x80033B00
    {
            ctx->lr = 0x80031F14u;
            goto label_80033B00;
    }

label_80031F14:
    ctx->pc = 0x80031F14u;
    ctx->downcount -= 5;
    // 80031F14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031F18:
    ctx->pc = 0x80031F18u;
    // 80031F18: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031F1C:
    ctx->pc = 0x80031F1Cu;
    // 80031F1C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80031F20:
    ctx->pc = 0x80031F20u;
    // 80031F20: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_80031F24:
    ctx->pc = 0x80031F24u;
    // 80031F24: bl      0x80033A48
    {
            ctx->lr = 0x80031F28u;
            goto label_80033A48;
    }

label_80031F28:
    ctx->pc = 0x80031F28u;
    ctx->downcount -= 3;
    // 80031F28: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_80031F2C:
    ctx->pc = 0x80031F2Cu;
    // 80031F2C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031F30:
    ctx->pc = 0x80031F30u;
    // 80031F30: bl      0x80033A04
    {
            ctx->lr = 0x80031F34u;
            goto label_80033A04;
    }

label_80031F34:
    ctx->pc = 0x80031F34u;
    ctx->downcount -= 2;
    // 80031F34: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80031F38:
    ctx->pc = 0x80031F38u;
    // 80031F38: bl      0x80033A18
    {
            ctx->lr = 0x80031F3Cu;
            goto label_80033A18;
    }

label_80031F3C:
    ctx->pc = 0x80031F3Cu;
    ctx->downcount -= 3;
    // 80031F3C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80031F40:
    ctx->pc = 0x80031F40u;
    // 80031F40: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031F44:
    ctx->pc = 0x80031F44u;
    // 80031F44: bl      0x80033AEC
    {
            ctx->lr = 0x80031F48u;
            goto label_80033AEC;
    }

label_80031F48:
    ctx->pc = 0x80031F48u;
    ctx->downcount -= 4;
    // 80031F48: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80031F4C:
    ctx->pc = 0x80031F4Cu;
    // 80031F4C: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80031F50:
    ctx->pc = 0x80031F50u;
    // 80031F50: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80031F54:
    ctx->pc = 0x80031F54u;
    // 80031F54: bl      0x80033B1C
    {
            ctx->lr = 0x80031F58u;
            goto label_80033B1C;
    }

label_80031F58:
    ctx->pc = 0x80031F58u;
    ctx->downcount -= 3;
    // 80031F58: li      r3, 35
    ctx->gpr[3] = (u32)(s32)(35);

label_80031F5C:
    ctx->pc = 0x80031F5Cu;
    // 80031F5C: li      r4, 22
    ctx->gpr[4] = (u32)(s32)(22);

label_80031F60:
    ctx->pc = 0x80031F60u;
    // 80031F60: bl      0x80037A1C
    {
            ctx->lr = 0x80031F64u;
            ctx->pc = 0x80037A1Cu;
            return;
    }

label_80031F64:
    ctx->pc = 0x80031F64u;
    ctx->downcount -= 1;
    // 80031F64: bl      0x80038264
    {
            ctx->lr = 0x80031F68u;
            ctx->pc = 0x80038264u;
            return;
    }

label_80031F68:
    ctx->pc = 0x80031F68u;
    ctx->downcount -= 8;
    // 80031F68: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031F6C:
    ctx->pc = 0x80031F6Cu;
    // 80031F6C: lwz     r31, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80031F70:
    ctx->pc = 0x80031F70u;
    // 80031F70: lwz     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80031F74:
    ctx->pc = 0x80031F74u;
    // 80031F74: lwz     r29, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80031F78:
    ctx->pc = 0x80031F78u;
    // 80031F78: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_80031F7C:
    ctx->pc = 0x80031F7Cu;
    // 80031F7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80031F80:
    ctx->pc = 0x80031F80u;
    // 80031F80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80031F84:
    ctx->pc = 0x80031F84u;
    ctx->downcount -= 12;
    // 80031F84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80031F88:
    ctx->pc = 0x80031F88u;
    // 80031F88: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80031F8C:
    ctx->pc = 0x80031F8Cu;
    // 80031F8C: stwu     r1, -736(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-736);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80031F90:
    ctx->pc = 0x80031F90u;
    // 80031F90: stw     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80031F94:
    ctx->pc = 0x80031F94u;
    // 80031F94: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80031F98:
    ctx->pc = 0x80031F98u;
    // 80031F98: lwz     r5, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80031F9C:
    ctx->pc = 0x80031F9Cu;
    // 80031F9C: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80031FA0:
    ctx->pc = 0x80031FA0u;
    // 80031FA0: lhz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031FA4:
    ctx->pc = 0x80031FA4u;
    // 80031FA4: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80031FA8:
    ctx->pc = 0x80031FA8u;
    // 80031FA8: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031FAC:
    ctx->pc = 0x80031FACu;
    // 80031FAC: rlwinm. r0, r0, 29, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 29u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80031FB0:
    ctx->pc = 0x80031FB0u;
    // 80031FB0: bc    12, 2, 0x80031FE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80031FE8;
        }
    }

label_80031FB4:
    ctx->pc = 0x80031FB4u;
    ctx->downcount -= 3;
    // 80031FB4: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031FB8:
    ctx->pc = 0x80031FB8u;
    // 80031FB8: rlwinm. r0, r0, 31, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 31u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80031FBC:
    ctx->pc = 0x80031FBCu;
    // 80031FBC: bc    12, 2, 0x80031FE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80031FE8;
        }
    }

label_80031FC0:
    ctx->pc = 0x80031FC0u;
    ctx->downcount -= 2;
    // 80031FC0: lwz     r3, -31448(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80031FC4:
    ctx->pc = 0x80031FC4u;
    // 80031FC4: bl      0x80042508
    {
            ctx->lr = 0x80031FC8u;
            ctx->pc = 0x80042508u;
            return;
    }

label_80031FC8:
    ctx->pc = 0x80031FC8u;
    ctx->downcount -= 5;
    // 80031FC8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80031FCC:
    ctx->pc = 0x80031FCCu;
    // 80031FCC: stw     r0, -31440(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31440);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80031FD0:
    ctx->pc = 0x80031FD0u;
    // 80031FD0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80031FD4:
    ctx->pc = 0x80031FD4u;
    // 80031FD4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80031FD8:
    ctx->pc = 0x80031FD8u;
    // 80031FD8: bl      0x80032574
    {
            ctx->lr = 0x80031FDCu;
            goto label_80032574;
    }

label_80031FDC:
    ctx->pc = 0x80031FDCu;
    ctx->downcount -= 3;
    // 80031FDC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80031FE0:
    ctx->pc = 0x80031FE0u;
    // 80031FE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031FE4:
    ctx->pc = 0x80031FE4u;
    // 80031FE4: bl      0x80032538
    {
            ctx->lr = 0x80031FE8u;
            goto label_80032538;
    }

label_80031FE8:
    ctx->pc = 0x80031FE8u;
    ctx->downcount -= 4;
    // 80031FE8: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80031FEC:
    ctx->pc = 0x80031FECu;
    // 80031FEC: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031FF0:
    ctx->pc = 0x80031FF0u;
    // 80031FF0: rlwinm. r0, r0, 30, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80031FF4:
    ctx->pc = 0x80031FF4u;
    // 80031FF4: bc    12, 2, 0x80032038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80032038;
        }
    }

label_80031FF8:
    ctx->pc = 0x80031FF8u;
    ctx->downcount -= 3;
    // 80031FF8: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031FFC:
    ctx->pc = 0x80031FFCu;
    // 80031FFC: rlwinm. r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80032000:
    ctx->pc = 0x80032000u;
    // 80032000: bc    12, 2, 0x80032038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80032038;
        }
    }

label_80032004:
    ctx->pc = 0x80032004u;
    ctx->downcount -= 6;
    // 80032004: lwz     r5, -31432(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31432);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80032008:
    ctx->pc = 0x80032008u;
    // 80032008: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003200C:
    ctx->pc = 0x8003200Cu;
    // 8003200C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80032010:
    ctx->pc = 0x80032010u;
    // 80032010: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_80032014:
    ctx->pc = 0x80032014u;
    // 80032014: stw     r0, -31432(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31432);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032018:
    ctx->pc = 0x80032018u;
    // 80032018: bl      0x80032538
    {
            ctx->lr = 0x8003201Cu;
            goto label_80032538;
    }

label_8003201C:
    ctx->pc = 0x8003201Cu;
    ctx->downcount -= 3;
    // 8003201C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80032020:
    ctx->pc = 0x80032020u;
    // 80032020: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80032024:
    ctx->pc = 0x80032024u;
    // 80032024: bl      0x80032574
    {
            ctx->lr = 0x80032028u;
            goto label_80032574;
    }

label_80032028:
    ctx->pc = 0x80032028u;
    ctx->downcount -= 4;
    // 80032028: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8003202C:
    ctx->pc = 0x8003202Cu;
    // 8003202C: lwz     r3, -31448(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032030:
    ctx->pc = 0x80032030u;
    // 80032030: stw     r0, -31440(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31440);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032034:
    ctx->pc = 0x80032034u;
    // 80032034: bl      0x80042790
    {
            ctx->lr = 0x80032038u;
            ctx->pc = 0x80042790u;
            return;
    }

label_80032038:
    ctx->pc = 0x80032038u;
    ctx->downcount -= 5;
    // 80032038: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003203C:
    ctx->pc = 0x8003203Cu;
    // 8003203C: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80032040:
    ctx->pc = 0x80032040u;
    // 80032040: addi    r5, r3, 8
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(8);

label_80032044:
    ctx->pc = 0x80032044u;
    // 80032044: rlwinm. r0, r4, 27, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 27u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80032048:
    ctx->pc = 0x80032048u;
    // 80032048: bc    12, 2, 0x800320A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800320A4;
        }
    }

label_8003204C:
    ctx->pc = 0x8003204Cu;
    ctx->downcount -= 3;
    // 8003204C: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032050:
    ctx->pc = 0x80032050u;
    // 80032050: rlwinm. r0, r0, 28, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 28u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80032054:
    ctx->pc = 0x80032054u;
    // 80032054: bc    12, 2, 0x800320A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800320A4;
        }
    }

label_80032058:
    ctx->pc = 0x80032058u;
    ctx->downcount -= 8;
    // 80032058: rlwinm r0, r4, 0, 27, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFDFu;
    }

label_8003205C:
    ctx->pc = 0x8003205Cu;
    // 8003205C: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032060:
    ctx->pc = 0x80032060u;
    // 80032060: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032064:
    ctx->pc = 0x80032064u;
    // 80032064: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032068:
    ctx->pc = 0x80032068u;
    // 80032068: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003206C:
    ctx->pc = 0x8003206Cu;
    // 8003206C: lwz     r0, -31436(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31436);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032070:
    ctx->pc = 0x80032070u;
    // 80032070: cmplwi  r0, 0x0000
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

label_80032074:
    ctx->pc = 0x80032074u;
    // 80032074: bc    12, 2, 0x800320A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800320A4;
        }
    }

label_80032078:
    ctx->pc = 0x80032078u;
    ctx->downcount -= 2;
    // 80032078: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_8003207C:
    ctx->pc = 0x8003207Cu;
    // 8003207C: bl      0x8003D464
    {
            ctx->lr = 0x80032080u;
            ctx->pc = 0x8003D464u;
            return;
    }

label_80032080:
    ctx->pc = 0x80032080u;
    ctx->downcount -= 2;
    // 80032080: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_80032084:
    ctx->pc = 0x80032084u;
    // 80032084: bl      0x8003D29C
    {
            ctx->lr = 0x80032088u;
            ctx->pc = 0x8003D29Cu;
            return;
    }

label_80032088:
    ctx->pc = 0x80032088u;
    ctx->downcount -= 4;
    // 80032088: lwz     r12, -31436(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31436);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8003208C:
    ctx->pc = 0x8003208Cu;
    // 8003208C: mtlr    r12
    ctx->lr = ctx->gpr[12];

label_80032090:
    ctx->pc = 0x80032090u;
    // 80032090: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80032094u;
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80032094:
    ctx->pc = 0x80032094u;
    ctx->downcount -= 2;
    // 80032094: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_80032098:
    ctx->pc = 0x80032098u;
    // 80032098: bl      0x8003D464
    {
            ctx->lr = 0x8003209Cu;
            ctx->pc = 0x8003D464u;
            return;
    }

label_8003209C:
    ctx->pc = 0x8003209Cu;
    ctx->downcount -= 2;
    // 8003209C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800320A0:
    ctx->pc = 0x800320A0u;
    // 800320A0: bl      0x8003D29C
    {
            ctx->lr = 0x800320A4u;
            ctx->pc = 0x8003D29Cu;
            return;
    }

label_800320A4:
    ctx->pc = 0x800320A4u;
    ctx->downcount -= 6;
    // 800320A4: lwz     r0, 740(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(740);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800320A8:
    ctx->pc = 0x800320A8u;
    // 800320A8: lwz     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800320AC:
    ctx->pc = 0x800320ACu;
    // 800320AC: addi    r1, r1, 736
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(736);

label_800320B0:
    ctx->pc = 0x800320B0u;
    // 800320B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800320B4:
    ctx->pc = 0x800320B4u;
    // 800320B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800320B8:
    ctx->pc = 0x800320B8u;
    ctx->downcount -= 17;
    // 800320B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800320BC:
    ctx->pc = 0x800320BCu;
    // 800320BC: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800320C0:
    ctx->pc = 0x800320C0u;
    // 800320C0: addi    r0, r5, -4
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-4);

label_800320C4:
    ctx->pc = 0x800320C4u;
    // 800320C4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800320C8:
    ctx->pc = 0x800320C8u;
    // 800320C8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800320CC:
    ctx->pc = 0x800320CCu;
    // 800320CC: addi    r31, r4, 0
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(0);

label_800320D0:
    ctx->pc = 0x800320D0u;
    // 800320D0: add   r0, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_800320D4:
    ctx->pc = 0x800320D4u;
    // 800320D4: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800320D8:
    ctx->pc = 0x800320D8u;
    // 800320D8: addi    r30, r3, 0
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(0);

label_800320DC:
    ctx->pc = 0x800320DCu;
    // 800320DC: addi    r4, r5, -16384
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-16384);

label_800320E0:
    ctx->pc = 0x800320E0u;
    // 800320E0: stw     r31, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800320E4:
    ctx->pc = 0x800320E4u;
    // 800320E4: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800320E8:
    ctx->pc = 0x800320E8u;
    // 800320E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800320EC:
    ctx->pc = 0x800320ECu;
    // 800320EC: stw     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800320F0:
    ctx->pc = 0x800320F0u;
    // 800320F0: rlwinm r5, r5, 31, 1, 26
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 31u) & 0x7FFFFFE0u;
    }

label_800320F4:
    ctx->pc = 0x800320F4u;
    // 800320F4: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800320F8:
    ctx->pc = 0x800320F8u;
    // 800320F8: bl      0x80032194
    {
            ctx->lr = 0x800320FCu;
            goto label_80032194;
    }

label_800320FC:
    ctx->pc = 0x800320FCu;
    ctx->downcount -= 4;
    // 800320FC: addi    r3, r30, 0
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(0);

label_80032100:
    ctx->pc = 0x80032100u;
    // 80032100: addi    r4, r31, 0
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(0);

label_80032104:
    ctx->pc = 0x80032104u;
    // 80032104: addi    r5, r31, 0
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(0);

label_80032108:
    ctx->pc = 0x80032108u;
    // 80032108: bl      0x80032124
    {
            ctx->lr = 0x8003210Cu;
            goto label_80032124;
    }

label_8003210C:
    ctx->pc = 0x8003210Cu;
    ctx->downcount -= 7;
    // 8003210C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032110:
    ctx->pc = 0x80032110u;
    // 80032110: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80032114:
    ctx->pc = 0x80032114u;
    // 80032114: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80032118:
    ctx->pc = 0x80032118u;
    // 80032118: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8003211C:
    ctx->pc = 0x8003211Cu;
    // 8003211C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80032120:
    ctx->pc = 0x80032120u;
    // 80032120: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80032124:
    ctx->pc = 0x80032124u;
    ctx->downcount -= 10;
    // 80032124: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80032128:
    ctx->pc = 0x80032128u;
    // 80032128: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003212C:
    ctx->pc = 0x8003212Cu;
    // 8003212C: stwu     r1, -40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-40);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80032130:
    ctx->pc = 0x80032130u;
    // 80032130: stw     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80032134:
    ctx->pc = 0x80032134u;
    // 80032134: addi    r31, r5, 0
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(0);

label_80032138:
    ctx->pc = 0x80032138u;
    // 80032138: stw     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8003213C:
    ctx->pc = 0x8003213Cu;
    // 8003213C: addi    r30, r4, 0
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(0);

label_80032140:
    ctx->pc = 0x80032140u;
    // 80032140: stw     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80032144:
    ctx->pc = 0x80032144u;
    // 80032144: addi    r29, r3, 0
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(0);

label_80032148:
    ctx->pc = 0x80032148u;
    // 80032148: bl      0x8003ECC4
    {
            ctx->lr = 0x8003214Cu;
            ctx->pc = 0x8003ECC4u;
            return;
    }

label_8003214C:
    ctx->pc = 0x8003214Cu;
    ctx->downcount -= 7;
    // 8003214C: stw     r30, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80032150:
    ctx->pc = 0x80032150u;
    // 80032150: subf   r0, r30, r31
    {
        u32 a = ~ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80032154:
    ctx->pc = 0x80032154u;
    // 80032154: stw     r31, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80032158:
    ctx->pc = 0x80032158u;
    // 80032158: stw     r0, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003215C:
    ctx->pc = 0x8003215Cu;
    // 8003215C: lwz     r4, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80032160:
    ctx->pc = 0x80032160u;
    // 80032160: cmpwi   r4, 0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80032164:
    ctx->pc = 0x80032164u;
    // 80032164: bc    4, 0, 0x80032174
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80032174;
        }
    }

label_80032168:
    ctx->pc = 0x80032168u;
    ctx->downcount -= 3;
    // 80032168: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003216C:
    ctx->pc = 0x8003216Cu;
    // 8003216C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032170:
    ctx->pc = 0x80032170u;
    // 80032170: stw     r0, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032174:
    ctx->pc = 0x80032174u;
    ctx->downcount -= 1;
    // 80032174: bl      0x8003ECEC
    {
            ctx->lr = 0x80032178u;
            ctx->pc = 0x8003ECECu;
            return;
    }

label_80032178:
    ctx->pc = 0x80032178u;
    ctx->downcount -= 8;
    // 80032178: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003217C:
    ctx->pc = 0x8003217Cu;
    // 8003217C: lwz     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80032180:
    ctx->pc = 0x80032180u;
    // 80032180: lwz     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80032184:
    ctx->pc = 0x80032184u;
    // 80032184: lwz     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80032188:
    ctx->pc = 0x80032188u;
    // 80032188: addi    r1, r1, 40
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(40);

label_8003218C:
    ctx->pc = 0x8003218Cu;
    // 8003218C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80032190:
    ctx->pc = 0x80032190u;
    // 80032190: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80032194:
    ctx->pc = 0x80032194u;
    ctx->downcount -= 3;
    // 80032194: stw     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80032198:
    ctx->pc = 0x80032198u;
    // 80032198: stw     r5, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8003219C:
    ctx->pc = 0x8003219Cu;
    // 8003219C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800321A0:
    ctx->pc = 0x800321A0u;
    ctx->downcount -= 7;
    // 800321A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800321A4:
    ctx->pc = 0x800321A4u;
    // 800321A4: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800321A8:
    ctx->pc = 0x800321A8u;
    // 800321A8: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800321AC:
    ctx->pc = 0x800321ACu;
    // 800321AC: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800321B0:
    ctx->pc = 0x800321B0u;
    // 800321B0: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800321B4:
    ctx->pc = 0x800321B4u;
    // 800321B4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800321B8:
    ctx->pc = 0x800321B8u;
    // 800321B8: bl      0x8003ECC4
    {
            ctx->lr = 0x800321BCu;
            ctx->pc = 0x8003ECC4u;
            return;
    }

label_800321BC:
    ctx->pc = 0x800321BCu;
    ctx->downcount -= 5;
    // 800321BC: lwz     r0, -31452(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31452);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800321C0:
    ctx->pc = 0x800321C0u;
    // 800321C0: addi    r31, r3, 0
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(0);

label_800321C4:
    ctx->pc = 0x800321C4u;
    // 800321C4: stw     r30, -31456(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31456);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800321C8:
    ctx->pc = 0x800321C8u;
    // 800321C8: cmplw   r30, r0
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800321CC:
    ctx->pc = 0x800321CCu;
    // 800321CC: bc    4, 2, 0x80032230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80032230;
        }
    }

label_800321D0:
    ctx->pc = 0x800321D0u;
    ctx->downcount -= 18;
    // 800321D0: lwz     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800321D4:
    ctx->pc = 0x800321D4u;
    // 800321D4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_800321D8:
    ctx->pc = 0x800321D8u;
    // 800321D8: lwz     r4, -31496(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31496);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800321DC:
    ctx->pc = 0x800321DCu;
    // 800321DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800321E0:
    ctx->pc = 0x800321E0u;
    // 800321E0: rlwinm r5, r5, 0, 2, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x3FFFFFFFu;
    }

label_800321E4:
    ctx->pc = 0x800321E4u;
    // 800321E4: stw     r5, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800321E8:
    ctx->pc = 0x800321E8u;
    // 800321E8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_800321EC:
    ctx->pc = 0x800321ECu;
    // 800321EC: lwz     r6, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800321F0:
    ctx->pc = 0x800321F0u;
    // 800321F0: lwz     r5, -31496(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31496);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800321F4:
    ctx->pc = 0x800321F4u;
    // 800321F4: rlwinm r6, r6, 0, 2, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x3FFFFFFFu;
    }

label_800321F8:
    ctx->pc = 0x800321F8u;
    // 800321F8: stw     r6, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_800321FC:
    ctx->pc = 0x800321FCu;
    // 800321FC: lwz     r6, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80032200:
    ctx->pc = 0x80032200u;
    // 80032200: lwz     r5, -31496(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31496);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80032204:
    ctx->pc = 0x80032204u;
    // 80032204: rlwinm r6, r6, 0, 2, 26
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x3FFFFFE0u;
    }

label_80032208:
    ctx->pc = 0x80032208u;
    // 80032208: rlwinm r6, r6, 0, 6, 4
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFBFFFFFFu;
    }

label_8003220C:
    ctx->pc = 0x8003220Cu;
    // 8003220C: stw     r6, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80032210:
    ctx->pc = 0x80032210u;
    // 80032210: stb     r0, -31444(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31444);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80032214:
    ctx->pc = 0x80032214u;
    // 80032214: bl      0x80032574
    {
            ctx->lr = 0x80032218u;
            goto label_80032574;
    }

label_80032218:
    ctx->pc = 0x80032218u;
    ctx->downcount -= 3;
    // 80032218: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8003221C:
    ctx->pc = 0x8003221Cu;
    // 8003221C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80032220:
    ctx->pc = 0x80032220u;
    // 80032220: bl      0x80032538
    {
            ctx->lr = 0x80032224u;
            goto label_80032538;
    }

label_80032224:
    ctx->pc = 0x80032224u;
    ctx->downcount -= 2;
    // 80032224: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80032228:
    ctx->pc = 0x80032228u;
    // 80032228: bl      0x800324FC
    {
            ctx->lr = 0x8003222Cu;
            goto label_800324FC;
    }

label_8003222C:
    ctx->pc = 0x8003222Cu;
    ctx->downcount -= 1;
    // 8003222C: b       0x8003228C
    {
            goto label_8003228C;
    }

label_80032230:
    ctx->pc = 0x80032230u;
    ctx->downcount -= 3;
    // 80032230: lbz     r0, -31444(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31444);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80032234:
    ctx->pc = 0x80032234u;
    // 80032234: cmplwi  r0, 0x0000
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

label_80032238:
    ctx->pc = 0x80032238u;
    // 80032238: bc    12, 2, 0x8003224C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003224C;
        }
    }

label_8003223C:
    ctx->pc = 0x8003223Cu;
    ctx->downcount -= 2;
    // 8003223C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80032240:
    ctx->pc = 0x80032240u;
    // 80032240: bl      0x800324FC
    {
            ctx->lr = 0x80032244u;
            goto label_800324FC;
    }

label_80032244:
    ctx->pc = 0x80032244u;
    ctx->downcount -= 2;
    // 80032244: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80032248:
    ctx->pc = 0x80032248u;
    // 80032248: stb     r0, -31444(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31444);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8003224C:
    ctx->pc = 0x8003224Cu;
    ctx->downcount -= 3;
    // 8003224C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80032250:
    ctx->pc = 0x80032250u;
    // 80032250: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80032254:
    ctx->pc = 0x80032254u;
    // 80032254: bl      0x80032538
    {
            ctx->lr = 0x80032258u;
            goto label_80032538;
    }

label_80032258:
    ctx->pc = 0x80032258u;
    ctx->downcount -= 13;
    // 80032258: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003225C:
    ctx->pc = 0x8003225Cu;
    // 8003225C: lwz     r3, -31496(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31496);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032260:
    ctx->pc = 0x80032260u;
    // 80032260: rlwinm r0, r0, 0, 2, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x3FFFFFFFu;
    }

label_80032264:
    ctx->pc = 0x80032264u;
    // 80032264: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032268:
    ctx->pc = 0x80032268u;
    // 80032268: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003226C:
    ctx->pc = 0x8003226Cu;
    // 8003226C: lwz     r3, -31496(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31496);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032270:
    ctx->pc = 0x80032270u;
    // 80032270: rlwinm r0, r0, 0, 2, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x3FFFFFFFu;
    }

label_80032274:
    ctx->pc = 0x80032274u;
    // 80032274: stw     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032278:
    ctx->pc = 0x80032278u;
    // 80032278: lwz     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003227C:
    ctx->pc = 0x8003227Cu;
    // 8003227C: lwz     r3, -31496(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31496);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032280:
    ctx->pc = 0x80032280u;
    // 80032280: rlwinm r0, r0, 0, 2, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x3FFFFFE0u;
    }

label_80032284:
    ctx->pc = 0x80032284u;
    // 80032284: rlwinm r0, r0, 0, 6, 4
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFBFFFFFFu;
    }

label_80032288:
    ctx->pc = 0x80032288u;
    // 80032288: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003228C:
    ctx->pc = 0x8003228Cu;
    ctx->downcount -= 1;
    // 8003228C: bl      0x80022BD4
    {
            ctx->lr = 0x80032290u;
            ctx->pc = 0x80022BD4u;
            return;
    }

label_80032290:
    ctx->pc = 0x80032290u;
    ctx->downcount -= 2;
    // 80032290: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80032294:
    ctx->pc = 0x80032294u;
    // 80032294: bl      0x8003ECEC
    {
            ctx->lr = 0x80032298u;
            ctx->pc = 0x8003ECECu;
            return;
    }

label_80032298:
    ctx->pc = 0x80032298u;
    ctx->downcount -= 7;
    // 80032298: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003229C:
    ctx->pc = 0x8003229Cu;
    // 8003229C: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800322A0:
    ctx->pc = 0x800322A0u;
    // 800322A0: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800322A4:
    ctx->pc = 0x800322A4u;
    // 800322A4: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_800322A8:
    ctx->pc = 0x800322A8u;
    // 800322A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800322AC:
    ctx->pc = 0x800322ACu;
    // 800322AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800322B0:
    ctx->pc = 0x800322B0u;
    ctx->downcount -= 7;
    // 800322B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800322B4:
    ctx->pc = 0x800322B4u;
    // 800322B4: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800322B8:
    ctx->pc = 0x800322B8u;
    // 800322B8: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800322BC:
    ctx->pc = 0x800322BCu;
    // 800322BC: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800322C0:
    ctx->pc = 0x800322C0u;
    // 800322C0: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800322C4:
    ctx->pc = 0x800322C4u;
    // 800322C4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800322C8:
    ctx->pc = 0x800322C8u;
    // 800322C8: bl      0x8003ECC4
    {
            ctx->lr = 0x800322CCu;
            ctx->pc = 0x8003ECC4u;
            return;
    }

label_800322CC:
    ctx->pc = 0x800322CCu;
    ctx->downcount -= 2;
    // 800322CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800322D0:
    ctx->pc = 0x800322D0u;
    // 800322D0: bl      0x800324DC
    {
            ctx->lr = 0x800322D4u;
            goto label_800324DC;
    }

label_800322D4:
    ctx->pc = 0x800322D4u;
    ctx->downcount -= 3;
    // 800322D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800322D8:
    ctx->pc = 0x800322D8u;
    // 800322D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800322DC:
    ctx->pc = 0x800322DCu;
    // 800322DC: bl      0x80032538
    {
            ctx->lr = 0x800322E0u;
            goto label_80032538;
    }

label_800322E0:
    ctx->pc = 0x800322E0u;
    ctx->downcount -= 51;
    // 800322E0: stw     r30, -31452(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31452);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800322E4:
    ctx->pc = 0x800322E4u;
    // 800322E4: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800322E8:
    ctx->pc = 0x800322E8u;
    // 800322E8: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800322EC:
    ctx->pc = 0x800322ECu;
    // 800322EC: sth     r0, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800322F0:
    ctx->pc = 0x800322F0u;
    // 800322F0: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800322F4:
    ctx->pc = 0x800322F4u;
    // 800322F4: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800322F8:
    ctx->pc = 0x800322F8u;
    // 800322F8: sth     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800322FC:
    ctx->pc = 0x800322FCu;
    // 800322FC: lwz     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032300:
    ctx->pc = 0x80032300u;
    // 80032300: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032304:
    ctx->pc = 0x80032304u;
    // 80032304: sth     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80032308:
    ctx->pc = 0x80032308u;
    // 80032308: lwz     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003230C:
    ctx->pc = 0x8003230Cu;
    // 8003230C: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032310:
    ctx->pc = 0x80032310u;
    // 80032310: sth     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80032314:
    ctx->pc = 0x80032314u;
    // 80032314: lwz     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032318:
    ctx->pc = 0x80032318u;
    // 80032318: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003231C:
    ctx->pc = 0x8003231Cu;
    // 8003231C: sth     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80032320:
    ctx->pc = 0x80032320u;
    // 80032320: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032324:
    ctx->pc = 0x80032324u;
    // 80032324: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032328:
    ctx->pc = 0x80032328u;
    // 80032328: sth     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003232C:
    ctx->pc = 0x8003232Cu;
    // 8003232C: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032330:
    ctx->pc = 0x80032330u;
    // 80032330: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032334:
    ctx->pc = 0x80032334u;
    // 80032334: sth     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80032338:
    ctx->pc = 0x80032338u;
    // 80032338: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003233C:
    ctx->pc = 0x8003233Cu;
    // 8003233C: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032340:
    ctx->pc = 0x80032340u;
    // 80032340: rlwinm r0, r0, 16, 18, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00003FFFu;
    }

label_80032344:
    ctx->pc = 0x80032344u;
    // 80032344: sth     r0, 34(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80032348:
    ctx->pc = 0x80032348u;
    // 80032348: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003234C:
    ctx->pc = 0x8003234Cu;
    // 8003234C: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032350:
    ctx->pc = 0x80032350u;
    // 80032350: rlwinm r0, r0, 16, 18, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00003FFFu;
    }

label_80032354:
    ctx->pc = 0x80032354u;
    // 80032354: sth     r0, 38(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80032358:
    ctx->pc = 0x80032358u;
    // 80032358: lwz     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003235C:
    ctx->pc = 0x8003235Cu;
    // 8003235C: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032360:
    ctx->pc = 0x80032360u;
    // 80032360: srawi r0, r0, 16
    {
        u32 sh = 16u;
        u32 value = ctx->gpr[0];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[0] = value;
        } else if (sh > 31) {
            ctx->gpr[0] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[0] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_80032364:
    ctx->pc = 0x80032364u;
    // 80032364: sth     r0, 50(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80032368:
    ctx->pc = 0x80032368u;
    // 80032368: lwz     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003236C:
    ctx->pc = 0x8003236Cu;
    // 8003236C: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032370:
    ctx->pc = 0x80032370u;
    // 80032370: rlwinm r0, r0, 16, 18, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00003FFFu;
    }

label_80032374:
    ctx->pc = 0x80032374u;
    // 80032374: sth     r0, 54(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80032378:
    ctx->pc = 0x80032378u;
    // 80032378: lwz     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003237C:
    ctx->pc = 0x8003237Cu;
    // 8003237C: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032380:
    ctx->pc = 0x80032380u;
    // 80032380: rlwinm r0, r0, 16, 18, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00003FFFu;
    }

label_80032384:
    ctx->pc = 0x80032384u;
    // 80032384: sth     r0, 58(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80032388:
    ctx->pc = 0x80032388u;
    // 80032388: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003238C:
    ctx->pc = 0x8003238Cu;
    // 8003238C: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032390:
    ctx->pc = 0x80032390u;
    // 80032390: rlwinm r0, r0, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x0000FFFFu;
    }

label_80032394:
    ctx->pc = 0x80032394u;
    // 80032394: sth     r0, 42(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80032398:
    ctx->pc = 0x80032398u;
    // 80032398: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003239C:
    ctx->pc = 0x8003239Cu;
    // 8003239C: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800323A0:
    ctx->pc = 0x800323A0u;
    // 800323A0: rlwinm r0, r0, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x0000FFFFu;
    }

label_800323A4:
    ctx->pc = 0x800323A4u;
    // 800323A4: sth     r0, 46(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800323A8:
    ctx->pc = 0x800323A8u;
    // 800323A8: bl      0x80022BD4
    {
            ctx->lr = 0x800323ACu;
            ctx->pc = 0x80022BD4u;
            return;
    }

label_800323AC:
    ctx->pc = 0x800323ACu;
    ctx->downcount -= 4;
    // 800323AC: lwz     r3, -31456(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800323B0:
    ctx->pc = 0x800323B0u;
    // 800323B0: lwz     r0, -31452(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31452);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800323B4:
    ctx->pc = 0x800323B4u;
    // 800323B4: cmplw   r3, r0
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800323B8:
    ctx->pc = 0x800323B8u;
    // 800323B8: bc    4, 2, 0x800323DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800323DC;
        }
    }

label_800323BC:
    ctx->pc = 0x800323BCu;
    ctx->downcount -= 5;
    // 800323BC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_800323C0:
    ctx->pc = 0x800323C0u;
    // 800323C0: stb     r0, -31444(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31444);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800323C4:
    ctx->pc = 0x800323C4u;
    // 800323C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800323C8:
    ctx->pc = 0x800323C8u;
    // 800323C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800323CC:
    ctx->pc = 0x800323CCu;
    // 800323CC: bl      0x80032538
    {
            ctx->lr = 0x800323D0u;
            goto label_80032538;
    }

label_800323D0:
    ctx->pc = 0x800323D0u;
    ctx->downcount -= 2;
    // 800323D0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800323D4:
    ctx->pc = 0x800323D4u;
    // 800323D4: bl      0x800324FC
    {
            ctx->lr = 0x800323D8u;
            goto label_800324FC;
    }

label_800323D8:
    ctx->pc = 0x800323D8u;
    ctx->downcount -= 1;
    // 800323D8: b       0x800323F8
    {
            goto label_800323F8;
    }

label_800323DC:
    ctx->pc = 0x800323DCu;
    ctx->downcount -= 5;
    // 800323DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800323E0:
    ctx->pc = 0x800323E0u;
    // 800323E0: stb     r0, -31444(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31444);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800323E4:
    ctx->pc = 0x800323E4u;
    // 800323E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800323E8:
    ctx->pc = 0x800323E8u;
    // 800323E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800323EC:
    ctx->pc = 0x800323ECu;
    // 800323EC: bl      0x80032538
    {
            ctx->lr = 0x800323F0u;
            goto label_80032538;
    }

label_800323F0:
    ctx->pc = 0x800323F0u;
    ctx->downcount -= 2;
    // 800323F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800323F4:
    ctx->pc = 0x800323F4u;
    // 800323F4: bl      0x800324FC
    {
            ctx->lr = 0x800323F8u;
            goto label_800324FC;
    }

label_800323F8:
    ctx->pc = 0x800323F8u;
    ctx->downcount -= 3;
    // 800323F8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800323FC:
    ctx->pc = 0x800323FCu;
    // 800323FC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80032400:
    ctx->pc = 0x80032400u;
    // 80032400: bl      0x80032574
    {
            ctx->lr = 0x80032404u;
            goto label_80032574;
    }

label_80032404:
    ctx->pc = 0x80032404u;
    ctx->downcount -= 1;
    // 80032404: bl      0x800324B8
    {
            ctx->lr = 0x80032408u;
            goto label_800324B8;
    }

label_80032408:
    ctx->pc = 0x80032408u;
    ctx->downcount -= 2;
    // 80032408: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8003240C:
    ctx->pc = 0x8003240Cu;
    // 8003240C: bl      0x8003ECEC
    {
            ctx->lr = 0x80032410u;
            ctx->pc = 0x8003ECECu;
            return;
    }

label_80032410:
    ctx->pc = 0x80032410u;
    ctx->downcount -= 7;
    // 80032410: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032414:
    ctx->pc = 0x80032414u;
    // 80032414: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80032418:
    ctx->pc = 0x80032418u;
    // 80032418: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8003241C:
    ctx->pc = 0x8003241Cu;
    // 8003241C: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_80032420:
    ctx->pc = 0x80032420u;
    // 80032420: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80032424:
    ctx->pc = 0x80032424u;
    // 80032424: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80032428:
    ctx->pc = 0x80032428u;
    ctx->downcount -= 8;
    // 80032428: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003242C:
    ctx->pc = 0x8003242Cu;
    // 8003242C: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032430:
    ctx->pc = 0x80032430u;
    // 80032430: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80032434:
    ctx->pc = 0x80032434u;
    // 80032434: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80032438:
    ctx->pc = 0x80032438u;
    // 80032438: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8003243C:
    ctx->pc = 0x8003243Cu;
    // 8003243C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80032440:
    ctx->pc = 0x80032440u;
    // 80032440: lwz     r31, -31436(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31436);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80032444:
    ctx->pc = 0x80032444u;
    // 80032444: bl      0x8003ECC4
    {
            ctx->lr = 0x80032448u;
            ctx->pc = 0x8003ECC4u;
            return;
    }

label_80032448:
    ctx->pc = 0x80032448u;
    ctx->downcount -= 2;
    // 80032448: stw     r30, -31436(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31436);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8003244C:
    ctx->pc = 0x8003244Cu;
    // 8003244C: bl      0x8003ECEC
    {
            ctx->lr = 0x80032450u;
            ctx->pc = 0x8003ECECu;
            return;
    }

label_80032450:
    ctx->pc = 0x80032450u;
    ctx->downcount -= 8;
    // 80032450: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80032454:
    ctx->pc = 0x80032454u;
    // 80032454: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032458:
    ctx->pc = 0x80032458u;
    // 80032458: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003245C:
    ctx->pc = 0x8003245Cu;
    // 8003245C: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80032460:
    ctx->pc = 0x80032460u;
    // 80032460: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_80032464:
    ctx->pc = 0x80032464u;
    // 80032464: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80032468:
    ctx->pc = 0x80032468u;
    // 80032468: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_8003246C:
    ctx->pc = 0x8003246Cu;
    ctx->downcount -= 7;
    // 8003246C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80032470:
    ctx->pc = 0x80032470u;
    // 80032470: lis     r3, -32765
    ctx->gpr[3] = ((u32)(s32)(-32765) << 16);

label_80032474:
    ctx->pc = 0x80032474u;
    // 80032474: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032478:
    ctx->pc = 0x80032478u;
    // 80032478: addi    r4, r3, 8068
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(8068);

label_8003247C:
    ctx->pc = 0x8003247Cu;
    // 8003247C: li      r3, 17
    ctx->gpr[3] = (u32)(s32)(17);

label_80032480:
    ctx->pc = 0x80032480u;
    // 80032480: stwu     r1, -8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80032484:
    ctx->pc = 0x80032484u;
    // 80032484: bl      0x8003ED10
    {
            ctx->lr = 0x80032488u;
            ctx->pc = 0x8003ED10u;
            return;
    }

label_80032488:
    ctx->pc = 0x80032488u;
    ctx->downcount -= 2;
    // 80032488: li      r3, 16384
    ctx->gpr[3] = (u32)(s32)(16384);

label_8003248C:
    ctx->pc = 0x8003248Cu;
    // 8003248C: bl      0x8003F114
    {
            ctx->lr = 0x80032490u;
            ctx->pc = 0x8003F114u;
            return;
    }

label_80032490:
    ctx->pc = 0x80032490u;
    ctx->downcount -= 1;
    // 80032490: bl      0x80041B38
    {
            ctx->lr = 0x80032494u;
            ctx->pc = 0x80041B38u;
            return;
    }

label_80032494:
    ctx->pc = 0x80032494u;
    ctx->downcount -= 10;
    // 80032494: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80032498:
    ctx->pc = 0x80032498u;
    // 80032498: stw     r3, -31448(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31448);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8003249C:
    ctx->pc = 0x8003249Cu;
    // 8003249C: stw     r0, -31440(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31440);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800324A0:
    ctx->pc = 0x800324A0u;
    // 800324A0: stw     r0, -31456(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31456);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800324A4:
    ctx->pc = 0x800324A4u;
    // 800324A4: stw     r0, -31452(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31452);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800324A8:
    ctx->pc = 0x800324A8u;
    // 800324A8: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800324AC:
    ctx->pc = 0x800324ACu;
    // 800324AC: addi    r1, r1, 8
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(8);

label_800324B0:
    ctx->pc = 0x800324B0u;
    // 800324B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800324B4:
    ctx->pc = 0x800324B4u;
    // 800324B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800324B8:
    ctx->pc = 0x800324B8u;
    ctx->downcount -= 9;
    // 800324B8: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800324BC:
    ctx->pc = 0x800324BCu;
    // 800324BC: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800324C0:
    ctx->pc = 0x800324C0u;
    // 800324C0: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_800324C4:
    ctx->pc = 0x800324C4u;
    // 800324C4: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_800324C8:
    ctx->pc = 0x800324C8u;
    // 800324C8: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800324CC:
    ctx->pc = 0x800324CCu;
    // 800324CC: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800324D0:
    ctx->pc = 0x800324D0u;
    // 800324D0: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800324D4:
    ctx->pc = 0x800324D4u;
    // 800324D4: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800324D8:
    ctx->pc = 0x800324D8u;
    // 800324D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800324DC:
    ctx->pc = 0x800324DCu;
    ctx->downcount -= 8;
    // 800324DC: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800324E0:
    ctx->pc = 0x800324E0u;
    // 800324E0: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800324E4:
    ctx->pc = 0x800324E4u;
    // 800324E4: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_800324E8:
    ctx->pc = 0x800324E8u;
    // 800324E8: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800324EC:
    ctx->pc = 0x800324ECu;
    // 800324EC: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800324F0:
    ctx->pc = 0x800324F0u;
    // 800324F0: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800324F4:
    ctx->pc = 0x800324F4u;
    // 800324F4: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800324F8:
    ctx->pc = 0x800324F8u;
    // 800324F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800324FC:
    ctx->pc = 0x800324FCu;
    ctx->downcount -= 2;
    // 800324FC: rlwinm. r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80032500:
    ctx->pc = 0x80032500u;
    // 80032500: bc    12, 2, 0x8003250C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003250C;
        }
    }

label_80032504:
    ctx->pc = 0x80032504u;
    ctx->downcount -= 2;
    // 80032504: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80032508:
    ctx->pc = 0x80032508u;
    // 80032508: b       0x80032510
    {
            goto label_80032510;
    }

label_8003250C:
    ctx->pc = 0x8003250Cu;
    ctx->downcount -= 1;
    // 8003250C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80032510:
    ctx->pc = 0x80032510u;
    ctx->downcount -= 10;
    // 80032510: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80032514:
    ctx->pc = 0x80032514u;
    // 80032514: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_80032518:
    ctx->pc = 0x80032518u;
    // 80032518: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003251C:
    ctx->pc = 0x8003251Cu;
    // 8003251C: rlwinm r3, r3, 0, 28, 26
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFEFu;
    }

label_80032520:
    ctx->pc = 0x80032520u;
    // 80032520: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80032524:
    ctx->pc = 0x80032524u;
    // 80032524: stw     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032528:
    ctx->pc = 0x80032528u;
    // 80032528: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003252C:
    ctx->pc = 0x8003252Cu;
    // 8003252C: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032530:
    ctx->pc = 0x80032530u;
    // 80032530: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80032534:
    ctx->pc = 0x80032534u;
    // 80032534: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80032538:
    ctx->pc = 0x80032538u;
    ctx->downcount -= 15;
    // 80032538: lwz     r6, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8003253C:
    ctx->pc = 0x8003253Cu;
    // 8003253C: rlwinm r3, r3, 2, 22, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0x000003FCu;
    }

label_80032540:
    ctx->pc = 0x80032540u;
    // 80032540: rlwinm r0, r4, 3, 21, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 3u) & 0x000007F8u;
    }

label_80032544:
    ctx->pc = 0x80032544u;
    // 80032544: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80032548:
    ctx->pc = 0x80032548u;
    // 80032548: rlwinm r4, r5, 0, 30, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFFFFFBu;
    }

label_8003254C:
    ctx->pc = 0x8003254Cu;
    // 8003254C: or   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
    }

label_80032550:
    ctx->pc = 0x80032550u;
    // 80032550: stw     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80032554:
    ctx->pc = 0x80032554u;
    // 80032554: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032558:
    ctx->pc = 0x80032558u;
    // 80032558: rlwinm r3, r3, 0, 29, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFF7u;
    }

label_8003255C:
    ctx->pc = 0x8003255Cu;
    // 8003255C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80032560:
    ctx->pc = 0x80032560u;
    // 80032560: stw     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032564:
    ctx->pc = 0x80032564u;
    // 80032564: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032568:
    ctx->pc = 0x80032568u;
    // 80032568: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003256C:
    ctx->pc = 0x8003256Cu;
    // 8003256C: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80032570:
    ctx->pc = 0x80032570u;
    // 80032570: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80032574:
    ctx->pc = 0x80032574u;
    ctx->downcount -= 15;
    // 80032574: lwz     r6, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80032578:
    ctx->pc = 0x80032578u;
    // 80032578: rlwinm r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_8003257C:
    ctx->pc = 0x8003257Cu;
    // 8003257C: rlwinm r0, r4, 1, 23, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 1u) & 0x000001FEu;
    }

label_80032580:
    ctx->pc = 0x80032580u;
    // 80032580: lwz     r5, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80032584:
    ctx->pc = 0x80032584u;
    // 80032584: rlwinm r4, r5, 0, 0, 30
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFFFFFEu;
    }

label_80032588:
    ctx->pc = 0x80032588u;
    // 80032588: or   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
    }

label_8003258C:
    ctx->pc = 0x8003258Cu;
    // 8003258C: stw     r3, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80032590:
    ctx->pc = 0x80032590u;
    // 80032590: lwz     r3, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032594:
    ctx->pc = 0x80032594u;
    // 80032594: rlwinm r3, r3, 0, 31, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFFDu;
    }

label_80032598:
    ctx->pc = 0x80032598u;
    // 80032598: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_8003259C:
    ctx->pc = 0x8003259Cu;
    // 8003259C: stw     r0, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800325A0:
    ctx->pc = 0x800325A0u;
    // 800325A0: lwz     r0, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800325A4:
    ctx->pc = 0x800325A4u;
    // 800325A4: lwz     r3, -31492(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800325A8:
    ctx->pc = 0x800325A8u;
    // 800325A8: sth     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800325AC:
    ctx->pc = 0x800325ACu;
    // 800325AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800325B0:
    ctx->pc = 0x800325B0u;
    ctx->downcount -= 2;
    // 800325B0: lwz     r3, -31452(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800325B4:
    ctx->pc = 0x800325B4u;
    // 800325B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800325B8:
    ctx->pc = 0x800325B8u;
    ctx->downcount -= 4;
    // 800325B8: lwz     r5, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800325BC:
    ctx->pc = 0x800325BCu;
    // 800325BC: lwz     r4, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800325C0:
    ctx->pc = 0x800325C0u;
    // 800325C0: rlwinm. r0, r4, 19, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 19u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800325C4:
    ctx->pc = 0x800325C4u;
    // 800325C4: bc    12, 2, 0x800325D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800325D0;
        }
    }

label_800325C8:
    ctx->pc = 0x800325C8u;
    ctx->downcount -= 2;
    // 800325C8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800325CC:
    ctx->pc = 0x800325CCu;
    // 800325CC: b       0x800325D4
    {
            goto label_800325D4;
    }

label_800325D0:
    ctx->pc = 0x800325D0u;
    ctx->downcount -= 1;
    // 800325D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800325D4:
    ctx->pc = 0x800325D4u;
    ctx->downcount -= 2;
    // 800325D4: rlwinm. r0, r4, 17, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 17u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800325D8:
    ctx->pc = 0x800325D8u;
    // 800325D8: bc    12, 2, 0x800325E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800325E4;
        }
    }

label_800325DC:
    ctx->pc = 0x800325DCu;
    ctx->downcount -= 2;
    // 800325DC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_800325E0:
    ctx->pc = 0x800325E0u;
    // 800325E0: b       0x800325E8
    {
            goto label_800325E8;
    }

label_800325E4:
    ctx->pc = 0x800325E4u;
    ctx->downcount -= 1;
    // 800325E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800325E8:
    ctx->pc = 0x800325E8u;
    ctx->downcount -= 4;
    // 800325E8: lbz     r0, 1053(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1053);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800325EC:
    ctx->pc = 0x800325ECu;
    // 800325EC: add   r7, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_800325F0:
    ctx->pc = 0x800325F0u;
    // 800325F0: cmplwi  r0, 0x0000
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

label_800325F4:
    ctx->pc = 0x800325F4u;
    // 800325F4: bc    12, 2, 0x80032600
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80032600;
        }
    }

label_800325F8:
    ctx->pc = 0x800325F8u;
    ctx->downcount -= 2;
    // 800325F8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_800325FC:
    ctx->pc = 0x800325FCu;
    // 800325FC: b       0x80032618
    {
            goto label_80032618;
    }

label_80032600:
    ctx->pc = 0x80032600u;
    ctx->downcount -= 3;
    // 80032600: lbz     r0, 1052(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1052);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80032604:
    ctx->pc = 0x80032604u;
    // 80032604: cmplwi  r0, 0x0000
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

label_80032608:
    ctx->pc = 0x80032608u;
    // 80032608: bc    12, 2, 0x80032614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80032614;
        }
    }

label_8003260C:
    ctx->pc = 0x8003260Cu;
    ctx->downcount -= 2;
    // 8003260C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80032610:
    ctx->pc = 0x80032610u;
    // 80032610: b       0x80032618
    {
            goto label_80032618;
    }

label_80032614:
    ctx->pc = 0x80032614u;
    ctx->downcount -= 1;
    // 80032614: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80032618:
    ctx->pc = 0x80032618u;
    ctx->downcount -= 3;
    // 80032618: lwz     r6, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8003261C:
    ctx->pc = 0x8003261Cu;
    // 8003261C: rlwinm. r0, r6, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80032620:
    ctx->pc = 0x80032620u;
    // 80032620: bc    12, 2, 0x8003262C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003262C;
        }
    }

label_80032624:
    ctx->pc = 0x80032624u;
    ctx->downcount -= 2;
    // 80032624: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80032628:
    ctx->pc = 0x80032628u;
    // 80032628: b       0x80032630
    {
            goto label_80032630;
    }

label_8003262C:
    ctx->pc = 0x8003262Cu;
    ctx->downcount -= 1;
    // 8003262C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80032630:
    ctx->pc = 0x80032630u;
    ctx->downcount -= 2;
    // 80032630: rlwinm. r0, r6, 30, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 30u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80032634:
    ctx->pc = 0x80032634u;
    // 80032634: bc    12, 2, 0x80032640
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80032640;
        }
    }

label_80032638:
    ctx->pc = 0x80032638u;
    ctx->downcount -= 2;
    // 80032638: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8003263C:
    ctx->pc = 0x8003263Cu;
    // 8003263C: b       0x80032644
    {
            goto label_80032644;
    }

label_80032640:
    ctx->pc = 0x80032640u;
    ctx->downcount -= 1;
    // 80032640: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80032644:
    ctx->pc = 0x80032644u;
    ctx->downcount -= 3;
    // 80032644: rlwinm. r0, r6, 28, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 28u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80032648:
    ctx->pc = 0x80032648u;
    // 80032648: add   r8, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_8003264C:
    ctx->pc = 0x8003264Cu;
    // 8003264C: bc    12, 2, 0x80032658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80032658;
        }
    }

label_80032650:
    ctx->pc = 0x80032650u;
    ctx->downcount -= 2;
    // 80032650: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80032654:
    ctx->pc = 0x80032654u;
    // 80032654: b       0x8003265C
    {
            goto label_8003265C;
    }

label_80032658:
    ctx->pc = 0x80032658u;
    ctx->downcount -= 1;
    // 80032658: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003265C:
    ctx->pc = 0x8003265Cu;
    ctx->downcount -= 3;
    // 8003265C: rlwinm. r0, r6, 26, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 26u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80032660:
    ctx->pc = 0x80032660u;
    // 80032660: add   r8, r8, r3
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_80032664:
    ctx->pc = 0x80032664u;
    // 80032664: bc    12, 2, 0x80032670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80032670;
        }
    }

label_80032668:
    ctx->pc = 0x80032668u;
    ctx->downcount -= 2;
    // 80032668: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8003266C:
    ctx->pc = 0x8003266Cu;
    // 8003266C: b       0x80032674
    {
            goto label_80032674;
    }

label_80032670:
    ctx->pc = 0x80032670u;
    ctx->downcount -= 1;
    // 80032670: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80032674:
    ctx->pc = 0x80032674u;
    ctx->downcount -= 3;
    // 80032674: rlwinm. r0, r6, 24, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 24u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80032678:
    ctx->pc = 0x80032678u;
    // 80032678: add   r8, r8, r3
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_8003267C:
    ctx->pc = 0x8003267Cu;
    // 8003267C: bc    12, 2, 0x80032688
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80032688;
        }
    }

label_80032680:
    ctx->pc = 0x80032680u;
    ctx->downcount -= 2;
    // 80032680: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80032684:
    ctx->pc = 0x80032684u;
    // 80032684: b       0x8003268C
    {
            goto label_8003268C;
    }

label_80032688:
    ctx->pc = 0x80032688u;
    ctx->downcount -= 1;
    // 80032688: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003268C:
    ctx->pc = 0x8003268Cu;
    ctx->downcount -= 3;
    // 8003268C: rlwinm. r0, r6, 22, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 22u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80032690:
    ctx->pc = 0x80032690u;
    // 80032690: add   r8, r8, r3
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_80032694:
    ctx->pc = 0x80032694u;
    // 80032694: bc    12, 2, 0x800326A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800326A0;
        }
    }

label_80032698:
    ctx->pc = 0x80032698u;
    ctx->downcount -= 2;
    // 80032698: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8003269C:
    ctx->pc = 0x8003269Cu;
    // 8003269C: b       0x800326A4
    {
            goto label_800326A4;
    }

label_800326A0:
    ctx->pc = 0x800326A0u;
    ctx->downcount -= 1;
    // 800326A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800326A4:
    ctx->pc = 0x800326A4u;
    ctx->downcount -= 3;
    // 800326A4: rlwinm. r0, r6, 20, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 20u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800326A8:
    ctx->pc = 0x800326A8u;
    // 800326A8: add   r8, r8, r3
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_800326AC:
    ctx->pc = 0x800326ACu;
    // 800326AC: bc    12, 2, 0x800326B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800326B8;
        }
    }

label_800326B0:
    ctx->pc = 0x800326B0u;
    ctx->downcount -= 2;
    // 800326B0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800326B4:
    ctx->pc = 0x800326B4u;
    // 800326B4: b       0x800326BC
    {
            goto label_800326BC;
    }

label_800326B8:
    ctx->pc = 0x800326B8u;
    ctx->downcount -= 1;
    // 800326B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800326BC:
    ctx->pc = 0x800326BCu;
    ctx->downcount -= 3;
    // 800326BC: rlwinm. r0, r6, 18, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 18u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800326C0:
    ctx->pc = 0x800326C0u;
    // 800326C0: add   r8, r8, r3
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_800326C4:
    ctx->pc = 0x800326C4u;
    // 800326C4: bc    12, 2, 0x800326D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800326D0;
        }
    }

label_800326C8:
    ctx->pc = 0x800326C8u;
    ctx->downcount -= 2;
    // 800326C8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_800326CC:
    ctx->pc = 0x800326CCu;
    // 800326CC: b       0x800326D4
    {
            goto label_800326D4;
    }

label_800326D0:
    ctx->pc = 0x800326D0u;
    ctx->downcount -= 1;
    // 800326D0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_800326D4:
    ctx->pc = 0x800326D4u;
    ctx->downcount -= 15;
    // 800326D4: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_800326D8:
    ctx->pc = 0x800326D8u;
    // 800326D8: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800326DC:
    ctx->pc = 0x800326DCu;
    // 800326DC: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_800326E0:
    ctx->pc = 0x800326E0u;
    // 800326E0: add   r8, r8, r6
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_800326E4:
    ctx->pc = 0x800326E4u;
    // 800326E4: stb     r0, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800326E8:
    ctx->pc = 0x800326E8u;
    // 800326E8: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_800326EC:
    ctx->pc = 0x800326ECu;
    // 800326EC: li      r4, 4104
    ctx->gpr[4] = (u32)(s32)(4104);

label_800326F0:
    ctx->pc = 0x800326F0u;
    // 800326F0: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800326F4:
    ctx->pc = 0x800326F4u;
    // 800326F4: rlwinm r4, r8, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[8], 4u) & 0xFFFFFFF0u;
    }

label_800326F8:
    ctx->pc = 0x800326F8u;
    // 800326F8: or   r0, r7, r0
    {
        ctx->gpr[0] = ctx->gpr[7] | ctx->gpr[0];
    }

label_800326FC:
    ctx->pc = 0x800326FCu;
    // 800326FC: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80032700:
    ctx->pc = 0x80032700u;
    // 80032700: stw     r0, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032704:
    ctx->pc = 0x80032704u;
    // 80032704: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80032708:
    ctx->pc = 0x80032708u;
    // 80032708: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003270C:
    ctx->pc = 0x8003270Cu;
    // 8003270C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80032710:
    ctx->pc = 0x80032710u;
    ctx->downcount -= 2;
    // 80032710: cmplwi  r3, 0x0019
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0019u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80032714:
    ctx->pc = 0x80032714u;
    // 80032714: bc    12, 1, 0x80032A04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80032A04;
        }
    }

label_80032718:
    ctx->pc = 0x80032718u;
    ctx->downcount -= 7;
    // 80032718: lis     r5, -32760
    ctx->gpr[5] = ((u32)(s32)(-32760) << 16);

label_8003271C:
    ctx->pc = 0x8003271Cu;
    // 8003271C: addi    r5, r5, -2200
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2200);

label_80032720:
    ctx->pc = 0x80032720u;
    // 80032720: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80032724:
    ctx->pc = 0x80032724u;
    // 80032724: lwzx    r0, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032728:
    ctx->pc = 0x80032728u;
    // 80032728: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8003272C:
    ctx->pc = 0x8003272Cu;
    // 8003272C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80032730:
    ctx->pc = 0x80032730u;
    ctx->downcount -= 6;
    // 80032730: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032734:
    ctx->pc = 0x80032734u;
    // 80032734: lwzu     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_80032738:
    ctx->pc = 0x80032738u;
    // 80032738: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_8003273C:
    ctx->pc = 0x8003273Cu;
    // 8003273C: or   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[4];
    }

label_80032740:
    ctx->pc = 0x80032740u;
    // 80032740: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032744:
    ctx->pc = 0x80032744u;
    // 80032744: b       0x80032A04
    {
            goto label_80032A04;
    }

label_80032748:
    ctx->pc = 0x80032748u;
    ctx->downcount -= 8;
    // 80032748: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003274C:
    ctx->pc = 0x8003274Cu;
    // 8003274C: rlwinm r0, r4, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 1u) & 0xFFFFFFFEu;
    }

label_80032750:
    ctx->pc = 0x80032750u;
    // 80032750: addi    r4, r3, 20
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20);

label_80032754:
    ctx->pc = 0x80032754u;
    // 80032754: lwz     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032758:
    ctx->pc = 0x80032758u;
    // 80032758: rlwinm r3, r3, 0, 31, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFFDu;
    }

label_8003275C:
    ctx->pc = 0x8003275Cu;
    // 8003275C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80032760:
    ctx->pc = 0x80032760u;
    // 80032760: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032764:
    ctx->pc = 0x80032764u;
    // 80032764: b       0x80032A04
    {
            goto label_80032A04;
    }

label_80032768:
    ctx->pc = 0x80032768u;
    ctx->downcount -= 8;
    // 80032768: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003276C:
    ctx->pc = 0x8003276Cu;
    // 8003276C: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_80032770:
    ctx->pc = 0x80032770u;
    // 80032770: addi    r4, r3, 20
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20);

label_80032774:
    ctx->pc = 0x80032774u;
    // 80032774: lwz     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032778:
    ctx->pc = 0x80032778u;
    // 80032778: rlwinm r3, r3, 0, 30, 28
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFFBu;
    }

label_8003277C:
    ctx->pc = 0x8003277Cu;
    // 8003277C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80032780:
    ctx->pc = 0x80032780u;
    // 80032780: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032784:
    ctx->pc = 0x80032784u;
    // 80032784: b       0x80032A04
    {
            goto label_80032A04;
    }

label_80032788:
    ctx->pc = 0x80032788u;
    ctx->downcount -= 8;
    // 80032788: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003278C:
    ctx->pc = 0x8003278Cu;
    // 8003278C: rlwinm r0, r4, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 3u) & 0xFFFFFFF8u;
    }

label_80032790:
    ctx->pc = 0x80032790u;
    // 80032790: addi    r4, r3, 20
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20);

label_80032794:
    ctx->pc = 0x80032794u;
    // 80032794: lwz     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032798:
    ctx->pc = 0x80032798u;
    // 80032798: rlwinm r3, r3, 0, 29, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFF7u;
    }

label_8003279C:
    ctx->pc = 0x8003279Cu;
    // 8003279C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800327A0:
    ctx->pc = 0x800327A0u;
    // 800327A0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800327A4:
    ctx->pc = 0x800327A4u;
    // 800327A4: b       0x80032A04
    {
            goto label_80032A04;
    }

label_800327A8:
    ctx->pc = 0x800327A8u;
    ctx->downcount -= 8;
    // 800327A8: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800327AC:
    ctx->pc = 0x800327ACu;
    // 800327AC: rlwinm r0, r4, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_800327B0:
    ctx->pc = 0x800327B0u;
    // 800327B0: addi    r4, r3, 20
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20);

label_800327B4:
    ctx->pc = 0x800327B4u;
    // 800327B4: lwz     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800327B8:
    ctx->pc = 0x800327B8u;
    // 800327B8: rlwinm r3, r3, 0, 28, 26
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFEFu;
    }

label_800327BC:
    ctx->pc = 0x800327BCu;
    // 800327BC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800327C0:
    ctx->pc = 0x800327C0u;
    // 800327C0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800327C4:
    ctx->pc = 0x800327C4u;
    // 800327C4: b       0x80032A04
    {
            goto label_80032A04;
    }

label_800327C8:
    ctx->pc = 0x800327C8u;
    ctx->downcount -= 8;
    // 800327C8: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800327CC:
    ctx->pc = 0x800327CCu;
    // 800327CC: rlwinm r0, r4, 5, 0, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 5u) & 0xFFFFFFE0u;
    }

label_800327D0:
    ctx->pc = 0x800327D0u;
    // 800327D0: addi    r4, r3, 20
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20);

label_800327D4:
    ctx->pc = 0x800327D4u;
    // 800327D4: lwz     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800327D8:
    ctx->pc = 0x800327D8u;
    // 800327D8: rlwinm r3, r3, 0, 27, 25
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFDFu;
    }

label_800327DC:
    ctx->pc = 0x800327DCu;
    // 800327DC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800327E0:
    ctx->pc = 0x800327E0u;
    // 800327E0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800327E4:
    ctx->pc = 0x800327E4u;
    // 800327E4: b       0x80032A04
    {
            goto label_80032A04;
    }

label_800327E8:
    ctx->pc = 0x800327E8u;
    ctx->downcount -= 8;
    // 800327E8: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800327EC:
    ctx->pc = 0x800327ECu;
    // 800327EC: rlwinm r0, r4, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 6u) & 0xFFFFFFC0u;
    }

label_800327F0:
    ctx->pc = 0x800327F0u;
    // 800327F0: addi    r4, r3, 20
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20);

label_800327F4:
    ctx->pc = 0x800327F4u;
    // 800327F4: lwz     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800327F8:
    ctx->pc = 0x800327F8u;
    // 800327F8: rlwinm r3, r3, 0, 26, 24
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFBFu;
    }

label_800327FC:
    ctx->pc = 0x800327FCu;
    // 800327FC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80032800:
    ctx->pc = 0x80032800u;
    // 80032800: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032804:
    ctx->pc = 0x80032804u;
    // 80032804: b       0x80032A04
    {
            goto label_80032A04;
    }

label_80032808:
    ctx->pc = 0x80032808u;
    ctx->downcount -= 8;
    // 80032808: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003280C:
    ctx->pc = 0x8003280Cu;
    // 8003280C: rlwinm r0, r4, 7, 0, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 7u) & 0xFFFFFF80u;
    }

label_80032810:
    ctx->pc = 0x80032810u;
    // 80032810: addi    r4, r3, 20
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20);

label_80032814:
    ctx->pc = 0x80032814u;
    // 80032814: lwz     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032818:
    ctx->pc = 0x80032818u;
    // 80032818: rlwinm r3, r3, 0, 25, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFF7Fu;
    }

label_8003281C:
    ctx->pc = 0x8003281Cu;
    // 8003281C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80032820:
    ctx->pc = 0x80032820u;
    // 80032820: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032824:
    ctx->pc = 0x80032824u;
    // 80032824: b       0x80032A04
    {
            goto label_80032A04;
    }

label_80032828:
    ctx->pc = 0x80032828u;
    ctx->downcount -= 8;
    // 80032828: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003282C:
    ctx->pc = 0x8003282Cu;
    // 8003282C: rlwinm r0, r4, 8, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_80032830:
    ctx->pc = 0x80032830u;
    // 80032830: addi    r4, r3, 20
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20);

label_80032834:
    ctx->pc = 0x80032834u;
    // 80032834: lwz     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032838:
    ctx->pc = 0x80032838u;
    // 80032838: rlwinm r3, r3, 0, 24, 22
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFEFFu;
    }

label_8003283C:
    ctx->pc = 0x8003283Cu;
    // 8003283C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80032840:
    ctx->pc = 0x80032840u;
    // 80032840: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032844:
    ctx->pc = 0x80032844u;
    // 80032844: b       0x80032A04
    {
            goto label_80032A04;
    }

label_80032848:
    ctx->pc = 0x80032848u;
    ctx->downcount -= 8;
    // 80032848: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003284C:
    ctx->pc = 0x8003284Cu;
    // 8003284C: rlwinm r0, r4, 9, 0, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 9u) & 0xFFFFFE00u;
    }

label_80032850:
    ctx->pc = 0x80032850u;
    // 80032850: addi    r4, r3, 20
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20);

label_80032854:
    ctx->pc = 0x80032854u;
    // 80032854: lwz     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032858:
    ctx->pc = 0x80032858u;
    // 80032858: rlwinm r3, r3, 0, 23, 20
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFF9FFu;
    }

label_8003285C:
    ctx->pc = 0x8003285Cu;
    // 8003285C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80032860:
    ctx->pc = 0x80032860u;
    // 80032860: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032864:
    ctx->pc = 0x80032864u;
    // 80032864: b       0x80032A04
    {
            goto label_80032A04;
    }

label_80032868:
    ctx->pc = 0x80032868u;
    ctx->downcount -= 2;
    // 80032868: cmpwi   r4, 0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003286C:
    ctx->pc = 0x8003286Cu;
    // 8003286C: bc    12, 2, 0x8003288C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003288C;
        }
    }

label_80032870:
    ctx->pc = 0x80032870u;
    ctx->downcount -= 7;
    // 80032870: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032874:
    ctx->pc = 0x80032874u;
    // 80032874: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80032878:
    ctx->pc = 0x80032878u;
    // 80032878: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8003287C:
    ctx->pc = 0x8003287Cu;
    // 8003287C: stb     r5, 1052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1052);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80032880:
    ctx->pc = 0x80032880u;
    // 80032880: stb     r0, 1053(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1053);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80032884:
    ctx->pc = 0x80032884u;
    // 80032884: stw     r4, 1048(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1048);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80032888:
    ctx->pc = 0x80032888u;
    // 80032888: b       0x80032A04
    {
            goto label_80032A04;
    }

label_8003288C:
    ctx->pc = 0x8003288Cu;
    ctx->downcount -= 4;
    // 8003288C: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032890:
    ctx->pc = 0x80032890u;
    // 80032890: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80032894:
    ctx->pc = 0x80032894u;
    // 80032894: stb     r0, 1052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1052);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80032898:
    ctx->pc = 0x80032898u;
    // 80032898: b       0x80032A04
    {
            goto label_80032A04;
    }

label_8003289C:
    ctx->pc = 0x8003289Cu;
    ctx->downcount -= 2;
    // 8003289C: cmpwi   r4, 0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800328A0:
    ctx->pc = 0x800328A0u;
    // 800328A0: bc    12, 2, 0x800328C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800328C0;
        }
    }

label_800328A4:
    ctx->pc = 0x800328A4u;
    ctx->downcount -= 7;
    // 800328A4: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800328A8:
    ctx->pc = 0x800328A8u;
    // 800328A8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_800328AC:
    ctx->pc = 0x800328ACu;
    // 800328AC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800328B0:
    ctx->pc = 0x800328B0u;
    // 800328B0: stb     r5, 1053(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1053);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_800328B4:
    ctx->pc = 0x800328B4u;
    // 800328B4: stb     r0, 1052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1052);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800328B8:
    ctx->pc = 0x800328B8u;
    // 800328B8: stw     r4, 1048(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1048);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800328BC:
    ctx->pc = 0x800328BCu;
    // 800328BC: b       0x80032A04
    {
            goto label_80032A04;
    }

label_800328C0:
    ctx->pc = 0x800328C0u;
    ctx->downcount -= 4;
    // 800328C0: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800328C4:
    ctx->pc = 0x800328C4u;
    // 800328C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800328C8:
    ctx->pc = 0x800328C8u;
    // 800328C8: stb     r0, 1053(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1053);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800328CC:
    ctx->pc = 0x800328CCu;
    // 800328CC: b       0x80032A04
    {
            goto label_80032A04;
    }

label_800328D0:
    ctx->pc = 0x800328D0u;
    ctx->downcount -= 8;
    // 800328D0: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800328D4:
    ctx->pc = 0x800328D4u;
    // 800328D4: rlwinm r0, r4, 13, 0, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 13u) & 0xFFFFE000u;
    }

label_800328D8:
    ctx->pc = 0x800328D8u;
    // 800328D8: addi    r4, r3, 20
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20);

label_800328DC:
    ctx->pc = 0x800328DCu;
    // 800328DC: lwz     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800328E0:
    ctx->pc = 0x800328E0u;
    // 800328E0: rlwinm r3, r3, 0, 19, 16
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFF9FFFu;
    }

label_800328E4:
    ctx->pc = 0x800328E4u;
    // 800328E4: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800328E8:
    ctx->pc = 0x800328E8u;
    // 800328E8: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800328EC:
    ctx->pc = 0x800328ECu;
    // 800328EC: b       0x80032A04
    {
            goto label_80032A04;
    }

label_800328F0:
    ctx->pc = 0x800328F0u;
    ctx->downcount -= 8;
    // 800328F0: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800328F4:
    ctx->pc = 0x800328F4u;
    // 800328F4: rlwinm r0, r4, 15, 0, 16
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 15u) & 0xFFFF8000u;
    }

label_800328F8:
    ctx->pc = 0x800328F8u;
    // 800328F8: addi    r4, r3, 20
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20);

label_800328FC:
    ctx->pc = 0x800328FCu;
    // 800328FC: lwz     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032900:
    ctx->pc = 0x80032900u;
    // 80032900: rlwinm r3, r3, 0, 17, 14
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFE7FFFu;
    }

label_80032904:
    ctx->pc = 0x80032904u;
    // 80032904: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80032908:
    ctx->pc = 0x80032908u;
    // 80032908: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003290C:
    ctx->pc = 0x8003290Cu;
    // 8003290C: b       0x80032A04
    {
            goto label_80032A04;
    }

label_80032910:
    ctx->pc = 0x80032910u;
    ctx->downcount -= 6;
    // 80032910: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032914:
    ctx->pc = 0x80032914u;
    // 80032914: lwzu     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_80032918:
    ctx->pc = 0x80032918u;
    // 80032918: rlwinm r0, r0, 0, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFCu;
    }

label_8003291C:
    ctx->pc = 0x8003291Cu;
    // 8003291C: or   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[4];
    }

label_80032920:
    ctx->pc = 0x80032920u;
    // 80032920: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032924:
    ctx->pc = 0x80032924u;
    // 80032924: b       0x80032A04
    {
            goto label_80032A04;
    }

label_80032928:
    ctx->pc = 0x80032928u;
    ctx->downcount -= 8;
    // 80032928: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003292C:
    ctx->pc = 0x8003292Cu;
    // 8003292C: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_80032930:
    ctx->pc = 0x80032930u;
    // 80032930: addi    r4, r3, 24
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24);

label_80032934:
    ctx->pc = 0x80032934u;
    // 80032934: lwz     r3, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032938:
    ctx->pc = 0x80032938u;
    // 80032938: rlwinm r3, r3, 0, 30, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFF3u;
    }

label_8003293C:
    ctx->pc = 0x8003293Cu;
    // 8003293C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80032940:
    ctx->pc = 0x80032940u;
    // 80032940: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032944:
    ctx->pc = 0x80032944u;
    // 80032944: b       0x80032A04
    {
            goto label_80032A04;
    }

label_80032948:
    ctx->pc = 0x80032948u;
    ctx->downcount -= 8;
    // 80032948: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003294C:
    ctx->pc = 0x8003294Cu;
    // 8003294C: rlwinm r0, r4, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_80032950:
    ctx->pc = 0x80032950u;
    // 80032950: addi    r4, r3, 24
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24);

label_80032954:
    ctx->pc = 0x80032954u;
    // 80032954: lwz     r3, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032958:
    ctx->pc = 0x80032958u;
    // 80032958: rlwinm r3, r3, 0, 28, 25
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFCFu;
    }

label_8003295C:
    ctx->pc = 0x8003295Cu;
    // 8003295C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80032960:
    ctx->pc = 0x80032960u;
    // 80032960: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032964:
    ctx->pc = 0x80032964u;
    // 80032964: b       0x80032A04
    {
            goto label_80032A04;
    }

label_80032968:
    ctx->pc = 0x80032968u;
    ctx->downcount -= 8;
    // 80032968: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003296C:
    ctx->pc = 0x8003296Cu;
    // 8003296C: rlwinm r0, r4, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 6u) & 0xFFFFFFC0u;
    }

label_80032970:
    ctx->pc = 0x80032970u;
    // 80032970: addi    r4, r3, 24
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24);

label_80032974:
    ctx->pc = 0x80032974u;
    // 80032974: lwz     r3, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032978:
    ctx->pc = 0x80032978u;
    // 80032978: rlwinm r3, r3, 0, 26, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFF3Fu;
    }

label_8003297C:
    ctx->pc = 0x8003297Cu;
    // 8003297C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80032980:
    ctx->pc = 0x80032980u;
    // 80032980: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032984:
    ctx->pc = 0x80032984u;
    // 80032984: b       0x80032A04
    {
            goto label_80032A04;
    }

label_80032988:
    ctx->pc = 0x80032988u;
    ctx->downcount -= 8;
    // 80032988: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003298C:
    ctx->pc = 0x8003298Cu;
    // 8003298C: rlwinm r0, r4, 8, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_80032990:
    ctx->pc = 0x80032990u;
    // 80032990: addi    r4, r3, 24
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24);

label_80032994:
    ctx->pc = 0x80032994u;
    // 80032994: lwz     r3, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032998:
    ctx->pc = 0x80032998u;
    // 80032998: rlwinm r3, r3, 0, 24, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFCFFu;
    }

label_8003299C:
    ctx->pc = 0x8003299Cu;
    // 8003299C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800329A0:
    ctx->pc = 0x800329A0u;
    // 800329A0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800329A4:
    ctx->pc = 0x800329A4u;
    // 800329A4: b       0x80032A04
    {
            goto label_80032A04;
    }

label_800329A8:
    ctx->pc = 0x800329A8u;
    ctx->downcount -= 8;
    // 800329A8: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800329AC:
    ctx->pc = 0x800329ACu;
    // 800329AC: rlwinm r0, r4, 10, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 10u) & 0xFFFFFC00u;
    }

label_800329B0:
    ctx->pc = 0x800329B0u;
    // 800329B0: addi    r4, r3, 24
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24);

label_800329B4:
    ctx->pc = 0x800329B4u;
    // 800329B4: lwz     r3, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800329B8:
    ctx->pc = 0x800329B8u;
    // 800329B8: rlwinm r3, r3, 0, 22, 19
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFF3FFu;
    }

label_800329BC:
    ctx->pc = 0x800329BCu;
    // 800329BC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800329C0:
    ctx->pc = 0x800329C0u;
    // 800329C0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800329C4:
    ctx->pc = 0x800329C4u;
    // 800329C4: b       0x80032A04
    {
            goto label_80032A04;
    }

label_800329C8:
    ctx->pc = 0x800329C8u;
    ctx->downcount -= 8;
    // 800329C8: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800329CC:
    ctx->pc = 0x800329CCu;
    // 800329CC: rlwinm r0, r4, 12, 0, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 12u) & 0xFFFFF000u;
    }

label_800329D0:
    ctx->pc = 0x800329D0u;
    // 800329D0: addi    r4, r3, 24
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24);

label_800329D4:
    ctx->pc = 0x800329D4u;
    // 800329D4: lwz     r3, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800329D8:
    ctx->pc = 0x800329D8u;
    // 800329D8: rlwinm r3, r3, 0, 20, 17
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFCFFFu;
    }

label_800329DC:
    ctx->pc = 0x800329DCu;
    // 800329DC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800329E0:
    ctx->pc = 0x800329E0u;
    // 800329E0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800329E4:
    ctx->pc = 0x800329E4u;
    // 800329E4: b       0x80032A04
    {
            goto label_80032A04;
    }

label_800329E8:
    ctx->pc = 0x800329E8u;
    ctx->downcount -= 7;
    // 800329E8: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800329EC:
    ctx->pc = 0x800329ECu;
    // 800329EC: rlwinm r0, r4, 14, 0, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 14u) & 0xFFFFC000u;
    }

label_800329F0:
    ctx->pc = 0x800329F0u;
    // 800329F0: addi    r4, r3, 24
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24);

label_800329F4:
    ctx->pc = 0x800329F4u;
    // 800329F4: lwz     r3, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800329F8:
    ctx->pc = 0x800329F8u;
    // 800329F8: rlwinm r3, r3, 0, 18, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFF3FFFu;
    }

label_800329FC:
    ctx->pc = 0x800329FCu;
    // 800329FC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80032A00:
    ctx->pc = 0x80032A00u;
    // 80032A00: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032A04:
    ctx->pc = 0x80032A04u;
    ctx->downcount -= 4;
    // 80032A04: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032A08:
    ctx->pc = 0x80032A08u;
    // 80032A08: lbz     r0, 1052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1052);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80032A0C:
    ctx->pc = 0x80032A0Cu;
    // 80032A0C: cmplwi  r0, 0x0000
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

label_80032A10:
    ctx->pc = 0x80032A10u;
    // 80032A10: bc    4, 2, 0x80032A20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80032A20;
        }
    }

label_80032A14:
    ctx->pc = 0x80032A14u;
    ctx->downcount -= 3;
    // 80032A14: lbz     r0, 1053(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1053);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80032A18:
    ctx->pc = 0x80032A18u;
    // 80032A18: cmplwi  r0, 0x0000
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

label_80032A1C:
    ctx->pc = 0x80032A1Cu;
    // 80032A1C: bc    12, 2, 0x80032A40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80032A40;
        }
    }

label_80032A20:
    ctx->pc = 0x80032A20u;
    ctx->downcount -= 8;
    // 80032A20: addi    r4, r3, 20
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20);

label_80032A24:
    ctx->pc = 0x80032A24u;
    // 80032A24: lwz     r0, 1048(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1048);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032A28:
    ctx->pc = 0x80032A28u;
    // 80032A28: lwz     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032A2C:
    ctx->pc = 0x80032A2Cu;
    // 80032A2C: rlwinm r0, r0, 11, 0, 20
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 11u) & 0xFFFFF800u;
    }

label_80032A30:
    ctx->pc = 0x80032A30u;
    // 80032A30: rlwinm r3, r3, 0, 21, 18
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFE7FFu;
    }

label_80032A34:
    ctx->pc = 0x80032A34u;
    // 80032A34: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80032A38:
    ctx->pc = 0x80032A38u;
    // 80032A38: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032A3C:
    ctx->pc = 0x80032A3Cu;
    // 80032A3C: b       0x80032A4C
    {
            goto label_80032A4C;
    }

label_80032A40:
    ctx->pc = 0x80032A40u;
    ctx->downcount -= 3;
    // 80032A40: lwzu     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_80032A44:
    ctx->pc = 0x80032A44u;
    // 80032A44: rlwinm r0, r0, 0, 21, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFE7FFu;
    }

label_80032A48:
    ctx->pc = 0x80032A48u;
    // 80032A48: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032A4C:
    ctx->pc = 0x80032A4Cu;
    ctx->downcount -= 5;
    // 80032A4C: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032A50:
    ctx->pc = 0x80032A50u;
    // 80032A50: lwz     r0, 1268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032A54:
    ctx->pc = 0x80032A54u;
    // 80032A54: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_80032A58:
    ctx->pc = 0x80032A58u;
    // 80032A58: stw     r0, 1268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032A5C:
    ctx->pc = 0x80032A5Cu;
    // 80032A5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80032A60:
    ctx->pc = 0x80032A60u;
    ctx->downcount -= 17;
    // 80032A60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80032A64:
    ctx->pc = 0x80032A64u;
    // 80032A64: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_80032A68:
    ctx->pc = 0x80032A68u;
    // 80032A68: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032A6C:
    ctx->pc = 0x80032A6Cu;
    // 80032A6C: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_80032A70:
    ctx->pc = 0x80032A70u;
    // 80032A70: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80032A74:
    ctx->pc = 0x80032A74u;
    // 80032A74: stwu     r1, -8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80032A78:
    ctx->pc = 0x80032A78u;
    // 80032A78: li      r0, 96
    ctx->gpr[0] = (u32)(s32)(96);

label_80032A7C:
    ctx->pc = 0x80032A7Cu;
    // 80032A7C: stb     r6, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80032A80:
    ctx->pc = 0x80032A80u;
    // 80032A80: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80032A84:
    ctx->pc = 0x80032A84u;
    // 80032A84: stb     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80032A88:
    ctx->pc = 0x80032A88u;
    // 80032A88: lwz     r3, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032A8C:
    ctx->pc = 0x80032A8Cu;
    // 80032A8C: stw     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80032A90:
    ctx->pc = 0x80032A90u;
    // 80032A90: stb     r6, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80032A94:
    ctx->pc = 0x80032A94u;
    // 80032A94: stb     r0, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80032A98:
    ctx->pc = 0x80032A98u;
    // 80032A98: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032A9C:
    ctx->pc = 0x80032A9Cu;
    // 80032A9C: stw     r0, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032AA0:
    ctx->pc = 0x80032AA0u;
    // 80032AA0: bl      0x800325B8
    {
            ctx->lr = 0x80032AA4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800325B8u;
                return;
            }
            goto label_800325B8;
    }

label_80032AA4:
    ctx->pc = 0x80032AA4u;
    ctx->downcount -= 5;
    // 80032AA4: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032AA8:
    ctx->pc = 0x80032AA8u;
    // 80032AA8: addi    r1, r1, 8
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(8);

label_80032AAC:
    ctx->pc = 0x80032AACu;
    // 80032AAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80032AB0:
    ctx->pc = 0x80032AB0u;
    // 80032AB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80032AB4:
    ctx->pc = 0x80032AB4u;
    ctx->downcount -= 4;
    // 80032AB4: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032AB8:
    ctx->pc = 0x80032AB8u;
    // 80032AB8: lhz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80032ABC:
    ctx->pc = 0x80032ABCu;
    // 80032ABC: cmplwi  r0, 0x0000
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

label_80032AC0:
    ctx->pc = 0x80032AC0u;
    // 80032AC0: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80032AC4:
    ctx->pc = 0x80032AC4u;
    ctx->downcount -= 27;
    // 80032AC4: lwz     r9, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80032AC8:
    ctx->pc = 0x80032AC8u;
    // 80032AC8: addi    r5, r13, -32512
    ctx->gpr[5] = ctx->gpr[13] + (u32)(s32)(-32512);

label_80032ACC:
    ctx->pc = 0x80032ACCu;
    // 80032ACC: lwz     r8, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80032AD0:
    ctx->pc = 0x80032AD0u;
    // 80032AD0: rlwinm r0, r9, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[9], 0u) & 0x00000001u;
    }

label_80032AD4:
    ctx->pc = 0x80032AD4u;
    // 80032AD4: lwz     r4, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80032AD8:
    ctx->pc = 0x80032AD8u;
    // 80032AD8: rlwinm r6, r9, 31, 31, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[9], 31u) & 0x00000001u;
    }

label_80032ADC:
    ctx->pc = 0x80032ADCu;
    // 80032ADC: add   r0, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032AE0:
    ctx->pc = 0x80032AE0u;
    // 80032AE0: rlwinm r6, r9, 30, 31, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[9], 30u) & 0x00000001u;
    }

label_80032AE4:
    ctx->pc = 0x80032AE4u;
    // 80032AE4: add   r0, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032AE8:
    ctx->pc = 0x80032AE8u;
    // 80032AE8: rlwinm r7, r9, 29, 31, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[9], 29u) & 0x00000001u;
    }

label_80032AEC:
    ctx->pc = 0x80032AECu;
    // 80032AEC: rlwinm r6, r9, 23, 30, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[9], 23u) & 0x00000003u;
    }

label_80032AF0:
    ctx->pc = 0x80032AF0u;
    // 80032AF0: lbzx    r5, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80032AF4:
    ctx->pc = 0x80032AF4u;
    // 80032AF4: rlwinm r8, r8, 23, 31, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[8], 23u) & 0x00000001u;
    }

label_80032AF8:
    ctx->pc = 0x80032AF8u;
    // 80032AF8: add   r0, r0, r7
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032AFC:
    ctx->pc = 0x80032AFCu;
    // 80032AFC: rlwinm r6, r9, 28, 31, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[9], 28u) & 0x00000001u;
    }

label_80032B00:
    ctx->pc = 0x80032B00u;
    // 80032B00: add   r0, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032B04:
    ctx->pc = 0x80032B04u;
    // 80032B04: rlwinm r6, r9, 27, 31, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[9], 27u) & 0x00000001u;
    }

label_80032B08:
    ctx->pc = 0x80032B08u;
    // 80032B08: add   r0, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032B0C:
    ctx->pc = 0x80032B0Cu;
    // 80032B0C: rlwinm r6, r9, 26, 31, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[9], 26u) & 0x00000001u;
    }

label_80032B10:
    ctx->pc = 0x80032B10u;
    // 80032B10: add   r0, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032B14:
    ctx->pc = 0x80032B14u;
    // 80032B14: rlwinm r6, r9, 25, 31, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[9], 25u) & 0x00000001u;
    }

label_80032B18:
    ctx->pc = 0x80032B18u;
    // 80032B18: add   r0, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032B1C:
    ctx->pc = 0x80032B1Cu;
    // 80032B1C: rlwinm r6, r9, 24, 31, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[9], 24u) & 0x00000001u;
    }

label_80032B20:
    ctx->pc = 0x80032B20u;
    // 80032B20: add   r0, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032B24:
    ctx->pc = 0x80032B24u;
    // 80032B24: cmpwi   r8, 1
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80032B28:
    ctx->pc = 0x80032B28u;
    // 80032B28: add   r0, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032B2C:
    ctx->pc = 0x80032B2Cu;
    // 80032B2C: bc    4, 2, 0x80032B38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80032B38;
        }
    }

label_80032B30:
    ctx->pc = 0x80032B30u;
    ctx->downcount -= 2;
    // 80032B30: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_80032B34:
    ctx->pc = 0x80032B34u;
    // 80032B34: b       0x80032B3C
    {
            goto label_80032B3C;
    }

label_80032B38:
    ctx->pc = 0x80032B38u;
    ctx->downcount -= 1;
    // 80032B38: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_80032B3C:
    ctx->pc = 0x80032B3Cu;
    ctx->downcount -= 43;
    // 80032B3C: rlwinm r6, r9, 21, 30, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[9], 21u) & 0x00000003u;
    }

label_80032B40:
    ctx->pc = 0x80032B40u;
    // 80032B40: addi    r5, r13, -32512
    ctx->gpr[5] = ctx->gpr[13] + (u32)(s32)(-32512);

label_80032B44:
    ctx->pc = 0x80032B44u;
    // 80032B44: lbzx    r6, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80032B48:
    ctx->pc = 0x80032B48u;
    // 80032B48: rlwinm r5, r9, 19, 30, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[9], 19u) & 0x00000003u;
    }

label_80032B4C:
    ctx->pc = 0x80032B4Cu;
    // 80032B4C: addi    r7, r13, -32520
    ctx->gpr[7] = ctx->gpr[13] + (u32)(s32)(-32520);

label_80032B50:
    ctx->pc = 0x80032B50u;
    // 80032B50: mullw   r8, r6, r8
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[8];
        ctx->gpr[8] = (u32)product;
    }

label_80032B54:
    ctx->pc = 0x80032B54u;
    // 80032B54: lbzx    r6, r7, r5
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[5];
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80032B58:
    ctx->pc = 0x80032B58u;
    // 80032B58: add   r0, r0, r8
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032B5C:
    ctx->pc = 0x80032B5Cu;
    // 80032B5C: rlwinm r5, r9, 17, 30, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[9], 17u) & 0x00000003u;
    }

label_80032B60:
    ctx->pc = 0x80032B60u;
    // 80032B60: lbzx    r9, r7, r5
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[5];
        ctx->gpr[9] = mem_read8(ctx, ea);
    }

label_80032B64:
    ctx->pc = 0x80032B64u;
    // 80032B64: add   r0, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032B68:
    ctx->pc = 0x80032B68u;
    // 80032B68: rlwinm r6, r4, 0, 30, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000003u;
    }

label_80032B6C:
    ctx->pc = 0x80032B6Cu;
    // 80032B6C: addi    r8, r13, -32516
    ctx->gpr[8] = ctx->gpr[13] + (u32)(s32)(-32516);

label_80032B70:
    ctx->pc = 0x80032B70u;
    // 80032B70: rlwinm r5, r4, 30, 30, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 30u) & 0x00000003u;
    }

label_80032B74:
    ctx->pc = 0x80032B74u;
    // 80032B74: lbzx    r7, r8, r6
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[6];
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80032B78:
    ctx->pc = 0x80032B78u;
    // 80032B78: add   r0, r0, r9
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032B7C:
    ctx->pc = 0x80032B7Cu;
    // 80032B7C: lbzx    r6, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80032B80:
    ctx->pc = 0x80032B80u;
    // 80032B80: add   r0, r0, r7
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032B84:
    ctx->pc = 0x80032B84u;
    // 80032B84: rlwinm r5, r4, 28, 30, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 28u) & 0x00000003u;
    }

label_80032B88:
    ctx->pc = 0x80032B88u;
    // 80032B88: lbzx    r7, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80032B8C:
    ctx->pc = 0x80032B8Cu;
    // 80032B8C: add   r0, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032B90:
    ctx->pc = 0x80032B90u;
    // 80032B90: rlwinm r5, r4, 26, 30, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 26u) & 0x00000003u;
    }

label_80032B94:
    ctx->pc = 0x80032B94u;
    // 80032B94: lbzx    r6, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80032B98:
    ctx->pc = 0x80032B98u;
    // 80032B98: add   r0, r0, r7
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032B9C:
    ctx->pc = 0x80032B9Cu;
    // 80032B9C: rlwinm r5, r4, 24, 30, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 24u) & 0x00000003u;
    }

label_80032BA0:
    ctx->pc = 0x80032BA0u;
    // 80032BA0: lbzx    r7, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80032BA4:
    ctx->pc = 0x80032BA4u;
    // 80032BA4: add   r0, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032BA8:
    ctx->pc = 0x80032BA8u;
    // 80032BA8: rlwinm r5, r4, 22, 30, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 22u) & 0x00000003u;
    }

label_80032BAC:
    ctx->pc = 0x80032BACu;
    // 80032BAC: lbzx    r6, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80032BB0:
    ctx->pc = 0x80032BB0u;
    // 80032BB0: rlwinm r5, r4, 20, 30, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 20u) & 0x00000003u;
    }

label_80032BB4:
    ctx->pc = 0x80032BB4u;
    // 80032BB4: add   r0, r0, r7
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032BB8:
    ctx->pc = 0x80032BB8u;
    // 80032BB8: lbzx    r5, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80032BBC:
    ctx->pc = 0x80032BBCu;
    // 80032BBC: rlwinm r4, r4, 18, 30, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 18u) & 0x00000003u;
    }

label_80032BC0:
    ctx->pc = 0x80032BC0u;
    // 80032BC0: add   r0, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032BC4:
    ctx->pc = 0x80032BC4u;
    // 80032BC4: lbzx    r4, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80032BC8:
    ctx->pc = 0x80032BC8u;
    // 80032BC8: add   r0, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032BCC:
    ctx->pc = 0x80032BCCu;
    // 80032BCC: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80032BD0:
    ctx->pc = 0x80032BD0u;
    // 80032BD0: sth     r0, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80032BD4:
    ctx->pc = 0x80032BD4u;
    // 80032BD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80032BD8:
    ctx->pc = 0x80032BD8u;
    ctx->downcount -= 14;
    // 80032BD8: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80032BDC:
    ctx->pc = 0x80032BDCu;
    // 80032BDC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80032BE0:
    ctx->pc = 0x80032BE0u;
    // 80032BE0: stw     r4, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80032BE4:
    ctx->pc = 0x80032BE4u;
    // 80032BE4: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032BE8:
    ctx->pc = 0x80032BE8u;
    // 80032BE8: rlwinm r0, r0, 0, 23, 20
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFF9FFu;
    }

label_80032BEC:
    ctx->pc = 0x80032BECu;
    // 80032BEC: ori     r0, r0, 0x0200
    ctx->gpr[0] = ctx->gpr[0] | 0x0200u;

label_80032BF0:
    ctx->pc = 0x80032BF0u;
    // 80032BF0: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032BF4:
    ctx->pc = 0x80032BF4u;
    // 80032BF4: stw     r4, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80032BF8:
    ctx->pc = 0x80032BF8u;
    // 80032BF8: stb     r4, 1052(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1052);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80032BFC:
    ctx->pc = 0x80032BFCu;
    // 80032BFC: stb     r4, 1053(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1053);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80032C00:
    ctx->pc = 0x80032C00u;
    // 80032C00: lwz     r0, 1268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032C04:
    ctx->pc = 0x80032C04u;
    // 80032C04: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_80032C08:
    ctx->pc = 0x80032C08u;
    // 80032C08: stw     r0, 1268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032C0C:
    ctx->pc = 0x80032C0Cu;
    // 80032C0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80032C10:
    ctx->pc = 0x80032C10u;
    ctx->downcount -= 9;
    // 80032C10: addi    r0, r4, -9
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-9);

label_80032C14:
    ctx->pc = 0x80032C14u;
    // 80032C14: lwz     r8, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80032C18:
    ctx->pc = 0x80032C18u;
    // 80032C18: rlwinm r4, r3, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80032C1C:
    ctx->pc = 0x80032C1Cu;
    // 80032C1C: add   r9, r8, r4
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80032C20:
    ctx->pc = 0x80032C20u;
    // 80032C20: cmplwi  r0, 0x0010
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0010u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80032C24:
    ctx->pc = 0x80032C24u;
    // 80032C24: addi    r4, r9, 28
    ctx->gpr[4] = ctx->gpr[9] + (u32)(s32)(28);

label_80032C28:
    ctx->pc = 0x80032C28u;
    // 80032C28: addi    r8, r9, 60
    ctx->gpr[8] = ctx->gpr[9] + (u32)(s32)(60);

label_80032C2C:
    ctx->pc = 0x80032C2Cu;
    // 80032C2C: addi    r9, r9, 92
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(92);

label_80032C30:
    ctx->pc = 0x80032C30u;
    // 80032C30: bc    12, 1, 0x80032F38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80032F38;
        }
    }

label_80032C34:
    ctx->pc = 0x80032C34u;
    ctx->downcount -= 7;
    // 80032C34: lis     r10, -32760
    ctx->gpr[10] = ((u32)(s32)(-32760) << 16);

label_80032C38:
    ctx->pc = 0x80032C38u;
    // 80032C38: addi    r10, r10, -2096
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(-2096);

label_80032C3C:
    ctx->pc = 0x80032C3Cu;
    // 80032C3C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80032C40:
    ctx->pc = 0x80032C40u;
    // 80032C40: lwzx    r0, r10, r0
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032C44:
    ctx->pc = 0x80032C44u;
    // 80032C44: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80032C48:
    ctx->pc = 0x80032C48u;
    // 80032C48: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80032C4C:
    ctx->pc = 0x80032C4Cu;
    ctx->downcount -= 15;
    // 80032C4C: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032C50:
    ctx->pc = 0x80032C50u;
    // 80032C50: rlwinm r6, r6, 1, 0, 30
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0xFFFFFFFEu;
    }

label_80032C54:
    ctx->pc = 0x80032C54u;
    // 80032C54: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_80032C58:
    ctx->pc = 0x80032C58u;
    // 80032C58: or   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[5];
    }

label_80032C5C:
    ctx->pc = 0x80032C5Cu;
    // 80032C5C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032C60:
    ctx->pc = 0x80032C60u;
    // 80032C60: rlwinm r0, r7, 4, 20, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 4u) & 0x00000FF0u;
    }

label_80032C64:
    ctx->pc = 0x80032C64u;
    // 80032C64: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80032C68:
    ctx->pc = 0x80032C68u;
    // 80032C68: rlwinm r5, r5, 0, 31, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFFFFF1u;
    }

label_80032C6C:
    ctx->pc = 0x80032C6Cu;
    // 80032C6C: or   r5, r5, r6
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[6];
    }

label_80032C70:
    ctx->pc = 0x80032C70u;
    // 80032C70: stw     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80032C74:
    ctx->pc = 0x80032C74u;
    // 80032C74: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80032C78:
    ctx->pc = 0x80032C78u;
    // 80032C78: rlwinm r5, r5, 0, 28, 22
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFFFE0Fu;
    }

label_80032C7C:
    ctx->pc = 0x80032C7Cu;
    // 80032C7C: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80032C80:
    ctx->pc = 0x80032C80u;
    // 80032C80: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032C84:
    ctx->pc = 0x80032C84u;
    // 80032C84: b       0x80032F38
    {
            goto label_80032F38;
    }

label_80032C88:
    ctx->pc = 0x80032C88u;
    ctx->downcount -= 7;
    // 80032C88: lwz     r7, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80032C8C:
    ctx->pc = 0x80032C8Cu;
    // 80032C8C: rlwinm r0, r6, 10, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 10u) & 0xFFFFFC00u;
    }

label_80032C90:
    ctx->pc = 0x80032C90u;
    // 80032C90: cmpwi   r5, 2
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80032C94:
    ctx->pc = 0x80032C94u;
    // 80032C94: rlwinm r6, r7, 0, 22, 18
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0xFFFFE3FFu;
    }

label_80032C98:
    ctx->pc = 0x80032C98u;
    // 80032C98: or   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] | ctx->gpr[0];
    }

label_80032C9C:
    ctx->pc = 0x80032C9Cu;
    // 80032C9C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032CA0:
    ctx->pc = 0x80032CA0u;
    // 80032CA0: bc    4, 2, 0x80032CC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80032CC8;
        }
    }

label_80032CA4:
    ctx->pc = 0x80032CA4u;
    ctx->downcount -= 9;
    // 80032CA4: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032CA8:
    ctx->pc = 0x80032CA8u;
    // 80032CA8: rlwinm r0, r0, 0, 23, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFDFFu;
    }

label_80032CAC:
    ctx->pc = 0x80032CACu;
    // 80032CAC: ori     r0, r0, 0x0200
    ctx->gpr[0] = ctx->gpr[0] | 0x0200u;

label_80032CB0:
    ctx->pc = 0x80032CB0u;
    // 80032CB0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032CB4:
    ctx->pc = 0x80032CB4u;
    // 80032CB4: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032CB8:
    ctx->pc = 0x80032CB8u;
    // 80032CB8: rlwinm r0, r0, 0, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFFFFFFu;
    }

label_80032CBC:
    ctx->pc = 0x80032CBCu;
    // 80032CBC: oris    r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | (0x8000u << 16);

label_80032CC0:
    ctx->pc = 0x80032CC0u;
    // 80032CC0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032CC4:
    ctx->pc = 0x80032CC4u;
    // 80032CC4: b       0x80032F38
    {
            goto label_80032F38;
    }

label_80032CC8:
    ctx->pc = 0x80032CC8u;
    ctx->downcount -= 9;
    // 80032CC8: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80032CCC:
    ctx->pc = 0x80032CCCu;
    // 80032CCC: rlwinm r0, r5, 9, 0, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 9u) & 0xFFFFFE00u;
    }

label_80032CD0:
    ctx->pc = 0x80032CD0u;
    // 80032CD0: rlwinm r5, r6, 0, 23, 21
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFFFDFFu;
    }

label_80032CD4:
    ctx->pc = 0x80032CD4u;
    // 80032CD4: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80032CD8:
    ctx->pc = 0x80032CD8u;
    // 80032CD8: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032CDC:
    ctx->pc = 0x80032CDCu;
    // 80032CDC: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032CE0:
    ctx->pc = 0x80032CE0u;
    // 80032CE0: rlwinm r0, r0, 0, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFFFFFFu;
    }

label_80032CE4:
    ctx->pc = 0x80032CE4u;
    // 80032CE4: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032CE8:
    ctx->pc = 0x80032CE8u;
    // 80032CE8: b       0x80032F38
    {
            goto label_80032F38;
    }

label_80032CEC:
    ctx->pc = 0x80032CECu;
    ctx->downcount -= 11;
    // 80032CEC: lwz     r7, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80032CF0:
    ctx->pc = 0x80032CF0u;
    // 80032CF0: rlwinm r5, r5, 13, 0, 18
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 13u) & 0xFFFFE000u;
    }

label_80032CF4:
    ctx->pc = 0x80032CF4u;
    // 80032CF4: rlwinm r0, r6, 14, 0, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 14u) & 0xFFFFC000u;
    }

label_80032CF8:
    ctx->pc = 0x80032CF8u;
    // 80032CF8: rlwinm r6, r7, 0, 19, 17
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0xFFFFDFFFu;
    }

label_80032CFC:
    ctx->pc = 0x80032CFCu;
    // 80032CFC: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_80032D00:
    ctx->pc = 0x80032D00u;
    // 80032D00: stw     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80032D04:
    ctx->pc = 0x80032D04u;
    // 80032D04: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80032D08:
    ctx->pc = 0x80032D08u;
    // 80032D08: rlwinm r5, r5, 0, 18, 14
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFE3FFFu;
    }

label_80032D0C:
    ctx->pc = 0x80032D0Cu;
    // 80032D0C: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80032D10:
    ctx->pc = 0x80032D10u;
    // 80032D10: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032D14:
    ctx->pc = 0x80032D14u;
    // 80032D14: b       0x80032F38
    {
            goto label_80032F38;
    }

label_80032D18:
    ctx->pc = 0x80032D18u;
    ctx->downcount -= 11;
    // 80032D18: lwz     r7, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80032D1C:
    ctx->pc = 0x80032D1Cu;
    // 80032D1C: rlwinm r5, r5, 17, 0, 14
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 17u) & 0xFFFE0000u;
    }

label_80032D20:
    ctx->pc = 0x80032D20u;
    // 80032D20: rlwinm r0, r6, 18, 0, 13
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 18u) & 0xFFFC0000u;
    }

label_80032D24:
    ctx->pc = 0x80032D24u;
    // 80032D24: rlwinm r6, r7, 0, 15, 13
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0xFFFDFFFFu;
    }

label_80032D28:
    ctx->pc = 0x80032D28u;
    // 80032D28: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_80032D2C:
    ctx->pc = 0x80032D2Cu;
    // 80032D2C: stw     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80032D30:
    ctx->pc = 0x80032D30u;
    // 80032D30: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80032D34:
    ctx->pc = 0x80032D34u;
    // 80032D34: rlwinm r5, r5, 0, 14, 10
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFE3FFFFu;
    }

label_80032D38:
    ctx->pc = 0x80032D38u;
    // 80032D38: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80032D3C:
    ctx->pc = 0x80032D3Cu;
    // 80032D3C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032D40:
    ctx->pc = 0x80032D40u;
    // 80032D40: b       0x80032F38
    {
            goto label_80032F38;
    }

label_80032D44:
    ctx->pc = 0x80032D44u;
    ctx->downcount -= 16;
    // 80032D44: lwz     r8, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80032D48:
    ctx->pc = 0x80032D48u;
    // 80032D48: rlwinm r0, r5, 21, 0, 10
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 21u) & 0xFFE00000u;
    }

label_80032D4C:
    ctx->pc = 0x80032D4Cu;
    // 80032D4C: rlwinm r5, r8, 0, 11, 9
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[8], 0u) & 0xFFDFFFFFu;
    }

label_80032D50:
    ctx->pc = 0x80032D50u;
    // 80032D50: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80032D54:
    ctx->pc = 0x80032D54u;
    // 80032D54: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032D58:
    ctx->pc = 0x80032D58u;
    // 80032D58: rlwinm r5, r6, 22, 0, 9
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[6], 22u) & 0xFFC00000u;
    }

label_80032D5C:
    ctx->pc = 0x80032D5Cu;
    // 80032D5C: rlwinm r0, r7, 25, 0, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 25u) & 0xFE000000u;
    }

label_80032D60:
    ctx->pc = 0x80032D60u;
    // 80032D60: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80032D64:
    ctx->pc = 0x80032D64u;
    // 80032D64: rlwinm r6, r6, 0, 10, 6
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFE3FFFFFu;
    }

label_80032D68:
    ctx->pc = 0x80032D68u;
    // 80032D68: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_80032D6C:
    ctx->pc = 0x80032D6Cu;
    // 80032D6C: stw     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80032D70:
    ctx->pc = 0x80032D70u;
    // 80032D70: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80032D74:
    ctx->pc = 0x80032D74u;
    // 80032D74: rlwinm r5, r5, 0, 7, 1
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xC1FFFFFFu;
    }

label_80032D78:
    ctx->pc = 0x80032D78u;
    // 80032D78: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80032D7C:
    ctx->pc = 0x80032D7Cu;
    // 80032D7C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032D80:
    ctx->pc = 0x80032D80u;
    // 80032D80: b       0x80032F38
    {
            goto label_80032F38;
    }

label_80032D84:
    ctx->pc = 0x80032D84u;
    ctx->downcount -= 15;
    // 80032D84: lwz     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032D88:
    ctx->pc = 0x80032D88u;
    // 80032D88: rlwinm r4, r6, 1, 0, 30
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0xFFFFFFFEu;
    }

label_80032D8C:
    ctx->pc = 0x80032D8Cu;
    // 80032D8C: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_80032D90:
    ctx->pc = 0x80032D90u;
    // 80032D90: or   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[5];
    }

label_80032D94:
    ctx->pc = 0x80032D94u;
    // 80032D94: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032D98:
    ctx->pc = 0x80032D98u;
    // 80032D98: rlwinm r0, r7, 4, 20, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 4u) & 0x00000FF0u;
    }

label_80032D9C:
    ctx->pc = 0x80032D9Cu;
    // 80032D9C: lwz     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80032DA0:
    ctx->pc = 0x80032DA0u;
    // 80032DA0: rlwinm r5, r5, 0, 31, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFFFFF1u;
    }

label_80032DA4:
    ctx->pc = 0x80032DA4u;
    // 80032DA4: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_80032DA8:
    ctx->pc = 0x80032DA8u;
    // 80032DA8: stw     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80032DAC:
    ctx->pc = 0x80032DACu;
    // 80032DAC: lwz     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80032DB0:
    ctx->pc = 0x80032DB0u;
    // 80032DB0: rlwinm r4, r4, 0, 28, 22
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFE0Fu;
    }

label_80032DB4:
    ctx->pc = 0x80032DB4u;
    // 80032DB4: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80032DB8:
    ctx->pc = 0x80032DB8u;
    // 80032DB8: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032DBC:
    ctx->pc = 0x80032DBCu;
    // 80032DBC: b       0x80032F38
    {
            goto label_80032F38;
    }

label_80032DC0:
    ctx->pc = 0x80032DC0u;
    ctx->downcount -= 16;
    // 80032DC0: lwz     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80032DC4:
    ctx->pc = 0x80032DC4u;
    // 80032DC4: rlwinm r0, r5, 9, 0, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 9u) & 0xFFFFFE00u;
    }

label_80032DC8:
    ctx->pc = 0x80032DC8u;
    // 80032DC8: rlwinm r4, r4, 0, 23, 21
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFDFFu;
    }

label_80032DCC:
    ctx->pc = 0x80032DCCu;
    // 80032DCC: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80032DD0:
    ctx->pc = 0x80032DD0u;
    // 80032DD0: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032DD4:
    ctx->pc = 0x80032DD4u;
    // 80032DD4: rlwinm r4, r6, 10, 0, 21
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[6], 10u) & 0xFFFFFC00u;
    }

label_80032DD8:
    ctx->pc = 0x80032DD8u;
    // 80032DD8: rlwinm r0, r7, 13, 11, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 13u) & 0x001FE000u;
    }

label_80032DDC:
    ctx->pc = 0x80032DDCu;
    // 80032DDC: lwz     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80032DE0:
    ctx->pc = 0x80032DE0u;
    // 80032DE0: rlwinm r5, r5, 0, 22, 18
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFFE3FFu;
    }

label_80032DE4:
    ctx->pc = 0x80032DE4u;
    // 80032DE4: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_80032DE8:
    ctx->pc = 0x80032DE8u;
    // 80032DE8: stw     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80032DEC:
    ctx->pc = 0x80032DECu;
    // 80032DEC: lwz     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80032DF0:
    ctx->pc = 0x80032DF0u;
    // 80032DF0: rlwinm r4, r4, 0, 19, 13
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFC1FFFu;
    }

label_80032DF4:
    ctx->pc = 0x80032DF4u;
    // 80032DF4: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80032DF8:
    ctx->pc = 0x80032DF8u;
    // 80032DF8: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032DFC:
    ctx->pc = 0x80032DFCu;
    // 80032DFC: b       0x80032F38
    {
            goto label_80032F38;
    }

label_80032E00:
    ctx->pc = 0x80032E00u;
    ctx->downcount -= 16;
    // 80032E00: lwz     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80032E04:
    ctx->pc = 0x80032E04u;
    // 80032E04: rlwinm r0, r5, 18, 0, 13
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 18u) & 0xFFFC0000u;
    }

label_80032E08:
    ctx->pc = 0x80032E08u;
    // 80032E08: rlwinm r4, r4, 0, 14, 12
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFBFFFFu;
    }

label_80032E0C:
    ctx->pc = 0x80032E0Cu;
    // 80032E0C: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80032E10:
    ctx->pc = 0x80032E10u;
    // 80032E10: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032E14:
    ctx->pc = 0x80032E14u;
    // 80032E14: rlwinm r4, r6, 19, 0, 12
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[6], 19u) & 0xFFF80000u;
    }

label_80032E18:
    ctx->pc = 0x80032E18u;
    // 80032E18: rlwinm r0, r7, 22, 2, 9
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 22u) & 0x3FC00000u;
    }

label_80032E1C:
    ctx->pc = 0x80032E1Cu;
    // 80032E1C: lwz     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80032E20:
    ctx->pc = 0x80032E20u;
    // 80032E20: rlwinm r5, r5, 0, 13, 9
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFC7FFFFu;
    }

label_80032E24:
    ctx->pc = 0x80032E24u;
    // 80032E24: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_80032E28:
    ctx->pc = 0x80032E28u;
    // 80032E28: stw     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80032E2C:
    ctx->pc = 0x80032E2Cu;
    // 80032E2C: lwz     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80032E30:
    ctx->pc = 0x80032E30u;
    // 80032E30: rlwinm r4, r4, 0, 10, 4
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xF83FFFFFu;
    }

label_80032E34:
    ctx->pc = 0x80032E34u;
    // 80032E34: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80032E38:
    ctx->pc = 0x80032E38u;
    // 80032E38: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032E3C:
    ctx->pc = 0x80032E3Cu;
    // 80032E3C: b       0x80032F38
    {
            goto label_80032F38;
    }

label_80032E40:
    ctx->pc = 0x80032E40u;
    ctx->downcount -= 16;
    // 80032E40: lwz     r10, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80032E44:
    ctx->pc = 0x80032E44u;
    // 80032E44: rlwinm r0, r5, 27, 0, 4
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 27u) & 0xF8000000u;
    }

label_80032E48:
    ctx->pc = 0x80032E48u;
    // 80032E48: rlwinm r4, r6, 28, 0, 3
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[6], 28u) & 0xF0000000u;
    }

label_80032E4C:
    ctx->pc = 0x80032E4Cu;
    // 80032E4C: rlwinm r5, r10, 0, 5, 3
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[10], 0u) & 0xF7FFFFFFu;
    }

label_80032E50:
    ctx->pc = 0x80032E50u;
    // 80032E50: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80032E54:
    ctx->pc = 0x80032E54u;
    // 80032E54: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032E58:
    ctx->pc = 0x80032E58u;
    // 80032E58: rlwinm r0, r7, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x000000FFu;
    }

label_80032E5C:
    ctx->pc = 0x80032E5Cu;
    // 80032E5C: lwz     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80032E60:
    ctx->pc = 0x80032E60u;
    // 80032E60: rlwinm r5, r5, 0, 4, 0
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x8FFFFFFFu;
    }

label_80032E64:
    ctx->pc = 0x80032E64u;
    // 80032E64: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_80032E68:
    ctx->pc = 0x80032E68u;
    // 80032E68: stw     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80032E6C:
    ctx->pc = 0x80032E6Cu;
    // 80032E6C: lwz     r4, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80032E70:
    ctx->pc = 0x80032E70u;
    // 80032E70: rlwinm r4, r4, 0, 0, 26
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFE0u;
    }

label_80032E74:
    ctx->pc = 0x80032E74u;
    // 80032E74: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80032E78:
    ctx->pc = 0x80032E78u;
    // 80032E78: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032E7C:
    ctx->pc = 0x80032E7Cu;
    // 80032E7C: b       0x80032F38
    {
            goto label_80032F38;
    }

label_80032E80:
    ctx->pc = 0x80032E80u;
    ctx->downcount -= 16;
    // 80032E80: lwz     r4, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80032E84:
    ctx->pc = 0x80032E84u;
    // 80032E84: rlwinm r0, r5, 5, 0, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 5u) & 0xFFFFFFE0u;
    }

label_80032E88:
    ctx->pc = 0x80032E88u;
    // 80032E88: rlwinm r4, r4, 0, 27, 25
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFDFu;
    }

label_80032E8C:
    ctx->pc = 0x80032E8Cu;
    // 80032E8C: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80032E90:
    ctx->pc = 0x80032E90u;
    // 80032E90: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032E94:
    ctx->pc = 0x80032E94u;
    // 80032E94: rlwinm r4, r6, 6, 0, 25
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[6], 6u) & 0xFFFFFFC0u;
    }

label_80032E98:
    ctx->pc = 0x80032E98u;
    // 80032E98: rlwinm r0, r7, 9, 15, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 9u) & 0x0001FE00u;
    }

label_80032E9C:
    ctx->pc = 0x80032E9Cu;
    // 80032E9C: lwz     r5, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80032EA0:
    ctx->pc = 0x80032EA0u;
    // 80032EA0: rlwinm r5, r5, 0, 26, 22
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFFFE3Fu;
    }

label_80032EA4:
    ctx->pc = 0x80032EA4u;
    // 80032EA4: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_80032EA8:
    ctx->pc = 0x80032EA8u;
    // 80032EA8: stw     r4, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80032EAC:
    ctx->pc = 0x80032EACu;
    // 80032EAC: lwz     r4, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80032EB0:
    ctx->pc = 0x80032EB0u;
    // 80032EB0: rlwinm r4, r4, 0, 23, 17
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFC1FFu;
    }

label_80032EB4:
    ctx->pc = 0x80032EB4u;
    // 80032EB4: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80032EB8:
    ctx->pc = 0x80032EB8u;
    // 80032EB8: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032EBC:
    ctx->pc = 0x80032EBCu;
    // 80032EBC: b       0x80032F38
    {
            goto label_80032F38;
    }

label_80032EC0:
    ctx->pc = 0x80032EC0u;
    ctx->downcount -= 16;
    // 80032EC0: lwz     r4, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80032EC4:
    ctx->pc = 0x80032EC4u;
    // 80032EC4: rlwinm r0, r5, 14, 0, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 14u) & 0xFFFFC000u;
    }

label_80032EC8:
    ctx->pc = 0x80032EC8u;
    // 80032EC8: rlwinm r4, r4, 0, 18, 16
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFBFFFu;
    }

label_80032ECC:
    ctx->pc = 0x80032ECCu;
    // 80032ECC: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80032ED0:
    ctx->pc = 0x80032ED0u;
    // 80032ED0: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032ED4:
    ctx->pc = 0x80032ED4u;
    // 80032ED4: rlwinm r4, r6, 15, 0, 16
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[6], 15u) & 0xFFFF8000u;
    }

label_80032ED8:
    ctx->pc = 0x80032ED8u;
    // 80032ED8: rlwinm r0, r7, 18, 6, 13
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 18u) & 0x03FC0000u;
    }

label_80032EDC:
    ctx->pc = 0x80032EDCu;
    // 80032EDC: lwz     r5, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80032EE0:
    ctx->pc = 0x80032EE0u;
    // 80032EE0: rlwinm r5, r5, 0, 17, 13
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFC7FFFu;
    }

label_80032EE4:
    ctx->pc = 0x80032EE4u;
    // 80032EE4: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_80032EE8:
    ctx->pc = 0x80032EE8u;
    // 80032EE8: stw     r4, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80032EEC:
    ctx->pc = 0x80032EECu;
    // 80032EEC: lwz     r4, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80032EF0:
    ctx->pc = 0x80032EF0u;
    // 80032EF0: rlwinm r4, r4, 0, 14, 8
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFF83FFFFu;
    }

label_80032EF4:
    ctx->pc = 0x80032EF4u;
    // 80032EF4: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80032EF8:
    ctx->pc = 0x80032EF8u;
    // 80032EF8: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032EFC:
    ctx->pc = 0x80032EFCu;
    // 80032EFC: b       0x80032F38
    {
            goto label_80032F38;
    }

label_80032F00:
    ctx->pc = 0x80032F00u;
    ctx->downcount -= 14;
    // 80032F00: lwz     r4, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80032F04:
    ctx->pc = 0x80032F04u;
    // 80032F04: rlwinm r0, r5, 23, 0, 8
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 23u) & 0xFF800000u;
    }

label_80032F08:
    ctx->pc = 0x80032F08u;
    // 80032F08: rlwinm r4, r4, 0, 9, 7
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFF7FFFFFu;
    }

label_80032F0C:
    ctx->pc = 0x80032F0Cu;
    // 80032F0C: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80032F10:
    ctx->pc = 0x80032F10u;
    // 80032F10: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032F14:
    ctx->pc = 0x80032F14u;
    // 80032F14: rlwinm r0, r6, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 24u) & 0xFF000000u;
    }

label_80032F18:
    ctx->pc = 0x80032F18u;
    // 80032F18: lwz     r4, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80032F1C:
    ctx->pc = 0x80032F1Cu;
    // 80032F1C: rlwinm r4, r4, 0, 8, 4
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xF8FFFFFFu;
    }

label_80032F20:
    ctx->pc = 0x80032F20u;
    // 80032F20: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80032F24:
    ctx->pc = 0x80032F24u;
    // 80032F24: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032F28:
    ctx->pc = 0x80032F28u;
    // 80032F28: lwz     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032F2C:
    ctx->pc = 0x80032F2Cu;
    // 80032F2C: rlwinm r0, r0, 0, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x07FFFFFFu;
    }

label_80032F30:
    ctx->pc = 0x80032F30u;
    // 80032F30: rlwimi r0, r7, 27, 0, 4
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 27u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xF8000000u) | (rot & 0xF8000000u);
    }

label_80032F34:
    ctx->pc = 0x80032F34u;
    // 80032F34: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032F38:
    ctx->pc = 0x80032F38u;
    ctx->downcount -= 12;
    // 80032F38: lwz     r5, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80032F3C:
    ctx->pc = 0x80032F3Cu;
    // 80032F3C: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_80032F40:
    ctx->pc = 0x80032F40u;
    // 80032F40: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80032F44:
    ctx->pc = 0x80032F44u;
    // 80032F44: lwz     r4, 1268(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1268);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80032F48:
    ctx->pc = 0x80032F48u;
    // 80032F48: slw   r0, r3, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[3] << sh);
    }

label_80032F4C:
    ctx->pc = 0x80032F4Cu;
    // 80032F4C: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_80032F50:
    ctx->pc = 0x80032F50u;
    // 80032F50: ori     r3, r4, 0x0010
    ctx->gpr[3] = ctx->gpr[4] | 0x0010u;

label_80032F54:
    ctx->pc = 0x80032F54u;
    // 80032F54: stw     r3, 1268(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1268);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80032F58:
    ctx->pc = 0x80032F58u;
    // 80032F58: lbz     r3, 1267(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1267);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80032F5C:
    ctx->pc = 0x80032F5Cu;
    // 80032F5C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80032F60:
    ctx->pc = 0x80032F60u;
    // 80032F60: stb     r0, 1267(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1267);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80032F64:
    ctx->pc = 0x80032F64u;
    // 80032F64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80032F68:
    ctx->pc = 0x80032F68u;
    ctx->downcount -= 9;
    // 80032F68: lwz     r6, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80032F6C:
    ctx->pc = 0x80032F6Cu;
    // 80032F6C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80032F70:
    ctx->pc = 0x80032F70u;
    // 80032F70: lis     r5, -32760
    ctx->gpr[5] = ((u32)(s32)(-32760) << 16);

label_80032F74:
    ctx->pc = 0x80032F74u;
    // 80032F74: add   r6, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80032F78:
    ctx->pc = 0x80032F78u;
    // 80032F78: addi    r8, r6, 28
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(28);

label_80032F7C:
    ctx->pc = 0x80032F7Cu;
    // 80032F7C: addi    r9, r6, 60
    ctx->gpr[9] = ctx->gpr[6] + (u32)(s32)(60);

label_80032F80:
    ctx->pc = 0x80032F80u;
    // 80032F80: addi    r10, r6, 92
    ctx->gpr[10] = ctx->gpr[6] + (u32)(s32)(92);

label_80032F84:
    ctx->pc = 0x80032F84u;
    // 80032F84: addi    r5, r5, -2028
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2028);

label_80032F88:
    ctx->pc = 0x80032F88u;
    // 80032F88: b       0x800332A4
    {
            goto label_800332A4;
    }

label_80032F8C:
    ctx->pc = 0x80032F8Cu;
    ctx->downcount -= 7;
    // 80032F8C: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80032F90:
    ctx->pc = 0x80032F90u;
    // 80032F90: lbz     r7, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80032F94:
    // 80032F94: addi    r11, r6, -9
    ctx->gpr[11] = ctx->gpr[6] + (u32)(s32)(-9);

label_80032F98:
    ctx->pc = 0x80032F98u;
    // 80032F98: lwz     r6, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80032F9C:
    // 80032F9C: cmplwi  r11, 0x0010
    {
        u32 val_a = (u32)(ctx->gpr[11]);
        u32 val_b = (u32)(0x0010u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80032FA0:
    ctx->pc = 0x80032FA0u;
    // 80032FA0: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032FA4:
    // 80032FA4: bc    12, 1, 0x800332A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800332A0;
        }
    }

label_80032FA8:
    ctx->downcount -= 5;
    // 80032FA8: rlwinm r11, r11, 2, 0, 29
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[11], 2u) & 0xFFFFFFFCu;
    }

label_80032FAC:
    ctx->pc = 0x80032FACu;
    // 80032FAC: lwzx    r11, r5, r11
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[11];
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80032FB0:
    ctx->pc = 0x80032FB0u;
    // 80032FB0: mtctr    r11
    ctx->ctr = ctx->gpr[11];

label_80032FB4:
    ctx->pc = 0x80032FB4u;
    // 80032FB4: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80032FB8:
    ctx->pc = 0x80032FB8u;
    ctx->downcount -= 15;
    // 80032FB8: lwz     r12, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80032FBC:
    // 80032FBC: rlwinm r11, r6, 1, 0, 30
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0xFFFFFFFEu;
    }

label_80032FC0:
    // 80032FC0: rlwinm r6, r7, 4, 0, 27
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[7], 4u) & 0xFFFFFFF0u;
    }

label_80032FC4:
    // 80032FC4: rlwinm r7, r12, 0, 0, 30
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[12], 0u) & 0xFFFFFFFEu;
    }

label_80032FC8:
    // 80032FC8: or   r0, r7, r0
    {
        ctx->gpr[0] = ctx->gpr[7] | ctx->gpr[0];
    }

label_80032FCC:
    ctx->pc = 0x80032FCCu;
    // 80032FCC: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032FD0:
    ctx->pc = 0x80032FD0u;
    // 80032FD0: lwz     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032FD4:
    // 80032FD4: rlwinm r0, r0, 0, 31, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF1u;
    }

label_80032FD8:
    // 80032FD8: or   r0, r0, r11
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[11];
    }

label_80032FDC:
    ctx->pc = 0x80032FDCu;
    // 80032FDC: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032FE0:
    ctx->pc = 0x80032FE0u;
    // 80032FE0: lwz     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80032FE4:
    // 80032FE4: rlwinm r0, r0, 0, 28, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFE0Fu;
    }

label_80032FE8:
    // 80032FE8: or   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[6];
    }

label_80032FEC:
    ctx->pc = 0x80032FECu;
    // 80032FEC: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80032FF0:
    // 80032FF0: b       0x800332A0
    {
            goto label_800332A0;
    }

label_80032FF4:
    ctx->pc = 0x80032FF4u;
    ctx->downcount -= 7;
    // 80032FF4: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80032FF8:
    // 80032FF8: rlwinm r6, r6, 10, 0, 21
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 10u) & 0xFFFFFC00u;
    }

label_80032FFC:
    // 80032FFC: cmpwi   r0, 2
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

label_80033000:
    // 80033000: rlwinm r7, r7, 0, 22, 18
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0xFFFFE3FFu;
    }

label_80033004:
    // 80033004: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_80033008:
    ctx->pc = 0x80033008u;
    // 80033008: stw     r6, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8003300C:
    // 8003300C: bc    4, 2, 0x80033034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80033034;
        }
    }

label_80033010:
    ctx->pc = 0x80033010u;
    ctx->downcount -= 9;
    // 80033010: lwz     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033014:
    // 80033014: rlwinm r0, r0, 0, 23, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFDFFu;
    }

label_80033018:
    // 80033018: ori     r0, r0, 0x0200
    ctx->gpr[0] = ctx->gpr[0] | 0x0200u;

label_8003301C:
    ctx->pc = 0x8003301Cu;
    // 8003301C: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033020:
    ctx->pc = 0x80033020u;
    // 80033020: lwz     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033024:
    // 80033024: rlwinm r0, r0, 0, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFFFFFFu;
    }

label_80033028:
    // 80033028: oris    r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | (0x8000u << 16);

label_8003302C:
    ctx->pc = 0x8003302Cu;
    // 8003302C: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033030:
    // 80033030: b       0x800332A0
    {
            goto label_800332A0;
    }

label_80033034:
    ctx->pc = 0x80033034u;
    ctx->downcount -= 9;
    // 80033034: lwz     r6, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80033038:
    // 80033038: rlwinm r0, r0, 9, 0, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 9u) & 0xFFFFFE00u;
    }

label_8003303C:
    // 8003303C: rlwinm r6, r6, 0, 23, 21
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFFFDFFu;
    }

label_80033040:
    // 80033040: or   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] | ctx->gpr[0];
    }

label_80033044:
    ctx->pc = 0x80033044u;
    // 80033044: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033048:
    ctx->pc = 0x80033048u;
    // 80033048: lwz     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003304C:
    // 8003304C: rlwinm r0, r0, 0, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFFFFFFu;
    }

label_80033050:
    ctx->pc = 0x80033050u;
    // 80033050: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033054:
    // 80033054: b       0x800332A0
    {
            goto label_800332A0;
    }

label_80033058:
    ctx->pc = 0x80033058u;
    ctx->downcount -= 11;
    // 80033058: lwz     r11, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_8003305C:
    // 8003305C: rlwinm r7, r0, 13, 0, 18
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[0], 13u) & 0xFFFFE000u;
    }

label_80033060:
    // 80033060: rlwinm r0, r6, 14, 0, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 14u) & 0xFFFFC000u;
    }

label_80033064:
    // 80033064: rlwinm r6, r11, 0, 19, 17
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[11], 0u) & 0xFFFFDFFFu;
    }

label_80033068:
    // 80033068: or   r6, r6, r7
    {
        ctx->gpr[6] = ctx->gpr[6] | ctx->gpr[7];
    }

label_8003306C:
    ctx->pc = 0x8003306Cu;
    // 8003306C: stw     r6, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80033070:
    ctx->pc = 0x80033070u;
    // 80033070: lwz     r6, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80033074:
    // 80033074: rlwinm r6, r6, 0, 18, 14
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFE3FFFu;
    }

label_80033078:
    // 80033078: or   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] | ctx->gpr[0];
    }

label_8003307C:
    ctx->pc = 0x8003307Cu;
    // 8003307C: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033080:
    // 80033080: b       0x800332A0
    {
            goto label_800332A0;
    }

label_80033084:
    ctx->pc = 0x80033084u;
    ctx->downcount -= 11;
    // 80033084: lwz     r11, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80033088:
    // 80033088: rlwinm r7, r0, 17, 0, 14
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[0], 17u) & 0xFFFE0000u;
    }

label_8003308C:
    // 8003308C: rlwinm r0, r6, 18, 0, 13
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 18u) & 0xFFFC0000u;
    }

label_80033090:
    // 80033090: rlwinm r6, r11, 0, 15, 13
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[11], 0u) & 0xFFFDFFFFu;
    }

label_80033094:
    // 80033094: or   r6, r6, r7
    {
        ctx->gpr[6] = ctx->gpr[6] | ctx->gpr[7];
    }

label_80033098:
    ctx->pc = 0x80033098u;
    // 80033098: stw     r6, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8003309C:
    ctx->pc = 0x8003309Cu;
    // 8003309C: lwz     r6, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800330A0:
    // 800330A0: rlwinm r6, r6, 0, 14, 10
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFE3FFFFu;
    }

label_800330A4:
    // 800330A4: or   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] | ctx->gpr[0];
    }

label_800330A8:
    ctx->pc = 0x800330A8u;
    // 800330A8: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800330AC:
    // 800330AC: b       0x800332A0
    {
            goto label_800332A0;
    }

label_800330B0:
    ctx->pc = 0x800330B0u;
    ctx->downcount -= 16;
    // 800330B0: lwz     r11, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_800330B4:
    // 800330B4: rlwinm r0, r0, 21, 0, 10
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 21u) & 0xFFE00000u;
    }

label_800330B8:
    // 800330B8: rlwinm r6, r6, 22, 0, 9
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 22u) & 0xFFC00000u;
    }

label_800330BC:
    // 800330BC: rlwinm r11, r11, 0, 11, 9
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[11], 0u) & 0xFFDFFFFFu;
    }

label_800330C0:
    // 800330C0: or   r0, r11, r0
    {
        ctx->gpr[0] = ctx->gpr[11] | ctx->gpr[0];
    }

label_800330C4:
    ctx->pc = 0x800330C4u;
    // 800330C4: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800330C8:
    // 800330C8: rlwinm r0, r7, 25, 0, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 25u) & 0xFE000000u;
    }

label_800330CC:
    ctx->pc = 0x800330CCu;
    // 800330CC: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_800330D0:
    // 800330D0: rlwinm r7, r7, 0, 10, 6
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0xFE3FFFFFu;
    }

label_800330D4:
    // 800330D4: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_800330D8:
    ctx->pc = 0x800330D8u;
    // 800330D8: stw     r6, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_800330DC:
    ctx->pc = 0x800330DCu;
    // 800330DC: lwz     r6, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800330E0:
    // 800330E0: rlwinm r6, r6, 0, 7, 1
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xC1FFFFFFu;
    }

label_800330E4:
    // 800330E4: or   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] | ctx->gpr[0];
    }

label_800330E8:
    ctx->pc = 0x800330E8u;
    // 800330E8: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800330EC:
    // 800330EC: b       0x800332A0
    {
            goto label_800332A0;
    }

label_800330F0:
    ctx->pc = 0x800330F0u;
    ctx->downcount -= 15;
    // 800330F0: lwz     r12, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_800330F4:
    // 800330F4: rlwinm r11, r6, 1, 0, 30
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0xFFFFFFFEu;
    }

label_800330F8:
    // 800330F8: rlwinm r6, r7, 4, 0, 27
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[7], 4u) & 0xFFFFFFF0u;
    }

label_800330FC:
    // 800330FC: rlwinm r7, r12, 0, 0, 30
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[12], 0u) & 0xFFFFFFFEu;
    }

label_80033100:
    // 80033100: or   r0, r7, r0
    {
        ctx->gpr[0] = ctx->gpr[7] | ctx->gpr[0];
    }

label_80033104:
    ctx->pc = 0x80033104u;
    // 80033104: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033108:
    ctx->pc = 0x80033108u;
    // 80033108: lwz     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003310C:
    // 8003310C: rlwinm r0, r0, 0, 31, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF1u;
    }

label_80033110:
    // 80033110: or   r0, r0, r11
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[11];
    }

label_80033114:
    ctx->pc = 0x80033114u;
    // 80033114: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033118:
    ctx->pc = 0x80033118u;
    // 80033118: lwz     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003311C:
    // 8003311C: rlwinm r0, r0, 0, 28, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFE0Fu;
    }

label_80033120:
    // 80033120: or   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[6];
    }

label_80033124:
    ctx->pc = 0x80033124u;
    // 80033124: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033128:
    // 80033128: b       0x800332A0
    {
            goto label_800332A0;
    }

label_8003312C:
    ctx->pc = 0x8003312Cu;
    ctx->downcount -= 16;
    // 8003312C: lwz     r11, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80033130:
    // 80033130: rlwinm r0, r0, 9, 0, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 9u) & 0xFFFFFE00u;
    }

label_80033134:
    // 80033134: rlwinm r6, r6, 10, 0, 21
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 10u) & 0xFFFFFC00u;
    }

label_80033138:
    // 80033138: rlwinm r11, r11, 0, 23, 21
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[11], 0u) & 0xFFFFFDFFu;
    }

label_8003313C:
    // 8003313C: or   r0, r11, r0
    {
        ctx->gpr[0] = ctx->gpr[11] | ctx->gpr[0];
    }

label_80033140:
    ctx->pc = 0x80033140u;
    // 80033140: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033144:
    // 80033144: rlwinm r0, r7, 13, 0, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 13u) & 0xFFFFE000u;
    }

label_80033148:
    ctx->pc = 0x80033148u;
    // 80033148: lwz     r7, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8003314C:
    // 8003314C: rlwinm r7, r7, 0, 22, 18
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0xFFFFE3FFu;
    }

label_80033150:
    // 80033150: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_80033154:
    ctx->pc = 0x80033154u;
    // 80033154: stw     r6, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80033158:
    ctx->pc = 0x80033158u;
    // 80033158: lwz     r6, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8003315C:
    // 8003315C: rlwinm r6, r6, 0, 19, 13
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFC1FFFu;
    }

label_80033160:
    // 80033160: or   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] | ctx->gpr[0];
    }

label_80033164:
    ctx->pc = 0x80033164u;
    // 80033164: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033168:
    // 80033168: b       0x800332A0
    {
            goto label_800332A0;
    }

label_8003316C:
    ctx->pc = 0x8003316Cu;
    ctx->downcount -= 16;
    // 8003316C: lwz     r11, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80033170:
    // 80033170: rlwinm r0, r0, 18, 0, 13
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 18u) & 0xFFFC0000u;
    }

label_80033174:
    // 80033174: rlwinm r6, r6, 19, 0, 12
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 19u) & 0xFFF80000u;
    }

label_80033178:
    // 80033178: rlwinm r11, r11, 0, 14, 12
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[11], 0u) & 0xFFFBFFFFu;
    }

label_8003317C:
    // 8003317C: or   r0, r11, r0
    {
        ctx->gpr[0] = ctx->gpr[11] | ctx->gpr[0];
    }

label_80033180:
    ctx->pc = 0x80033180u;
    // 80033180: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033184:
    // 80033184: rlwinm r0, r7, 22, 0, 9
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 22u) & 0xFFC00000u;
    }

label_80033188:
    ctx->pc = 0x80033188u;
    // 80033188: lwz     r7, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8003318C:
    // 8003318C: rlwinm r7, r7, 0, 13, 9
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0xFFC7FFFFu;
    }

label_80033190:
    // 80033190: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_80033194:
    ctx->pc = 0x80033194u;
    // 80033194: stw     r6, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80033198:
    ctx->pc = 0x80033198u;
    // 80033198: lwz     r6, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8003319C:
    // 8003319C: rlwinm r6, r6, 0, 10, 4
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xF83FFFFFu;
    }

label_800331A0:
    // 800331A0: or   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] | ctx->gpr[0];
    }

label_800331A4:
    ctx->pc = 0x800331A4u;
    // 800331A4: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800331A8:
    // 800331A8: b       0x800332A0
    {
            goto label_800332A0;
    }

label_800331AC:
    ctx->pc = 0x800331ACu;
    ctx->downcount -= 15;
    // 800331AC: lwz     r12, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_800331B0:
    // 800331B0: rlwinm r11, r0, 27, 0, 4
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0xF8000000u;
    }

label_800331B4:
    // 800331B4: rlwinm r0, r6, 28, 0, 3
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 28u) & 0xF0000000u;
    }

label_800331B8:
    // 800331B8: rlwinm r6, r12, 0, 5, 3
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[12], 0u) & 0xF7FFFFFFu;
    }

label_800331BC:
    // 800331BC: or   r6, r6, r11
    {
        ctx->gpr[6] = ctx->gpr[6] | ctx->gpr[11];
    }

label_800331C0:
    ctx->pc = 0x800331C0u;
    // 800331C0: stw     r6, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_800331C4:
    ctx->pc = 0x800331C4u;
    // 800331C4: lwz     r6, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800331C8:
    // 800331C8: rlwinm r6, r6, 0, 4, 0
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x8FFFFFFFu;
    }

label_800331CC:
    // 800331CC: or   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] | ctx->gpr[0];
    }

label_800331D0:
    ctx->pc = 0x800331D0u;
    // 800331D0: stw     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800331D4:
    ctx->pc = 0x800331D4u;
    // 800331D4: lwz     r0, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800331D8:
    // 800331D8: rlwinm r0, r0, 0, 0, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_800331DC:
    // 800331DC: or   r0, r0, r7
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[7];
    }

label_800331E0:
    ctx->pc = 0x800331E0u;
    // 800331E0: stw     r0, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800331E4:
    // 800331E4: b       0x800332A0
    {
            goto label_800332A0;
    }

label_800331E8:
    ctx->pc = 0x800331E8u;
    ctx->downcount -= 16;
    // 800331E8: lwz     r11, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_800331EC:
    // 800331EC: rlwinm r0, r0, 5, 0, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 5u) & 0xFFFFFFE0u;
    }

label_800331F0:
    // 800331F0: rlwinm r6, r6, 6, 0, 25
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 6u) & 0xFFFFFFC0u;
    }

label_800331F4:
    // 800331F4: rlwinm r11, r11, 0, 27, 25
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[11], 0u) & 0xFFFFFFDFu;
    }

label_800331F8:
    // 800331F8: or   r0, r11, r0
    {
        ctx->gpr[0] = ctx->gpr[11] | ctx->gpr[0];
    }

label_800331FC:
    ctx->pc = 0x800331FCu;
    // 800331FC: stw     r0, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033200:
    // 80033200: rlwinm r0, r7, 9, 0, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 9u) & 0xFFFFFE00u;
    }

label_80033204:
    ctx->pc = 0x80033204u;
    // 80033204: lwz     r7, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80033208:
    // 80033208: rlwinm r7, r7, 0, 26, 22
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0xFFFFFE3Fu;
    }

label_8003320C:
    // 8003320C: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_80033210:
    ctx->pc = 0x80033210u;
    // 80033210: stw     r6, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80033214:
    ctx->pc = 0x80033214u;
    // 80033214: lwz     r6, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80033218:
    // 80033218: rlwinm r6, r6, 0, 23, 17
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFFC1FFu;
    }

label_8003321C:
    // 8003321C: or   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] | ctx->gpr[0];
    }

label_80033220:
    ctx->pc = 0x80033220u;
    // 80033220: stw     r0, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033224:
    // 80033224: b       0x800332A0
    {
            goto label_800332A0;
    }

label_80033228:
    ctx->pc = 0x80033228u;
    ctx->downcount -= 16;
    // 80033228: lwz     r11, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_8003322C:
    // 8003322C: rlwinm r0, r0, 14, 0, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 14u) & 0xFFFFC000u;
    }

label_80033230:
    // 80033230: rlwinm r6, r6, 15, 0, 16
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 15u) & 0xFFFF8000u;
    }

label_80033234:
    // 80033234: rlwinm r11, r11, 0, 18, 16
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[11], 0u) & 0xFFFFBFFFu;
    }

label_80033238:
    // 80033238: or   r0, r11, r0
    {
        ctx->gpr[0] = ctx->gpr[11] | ctx->gpr[0];
    }

label_8003323C:
    ctx->pc = 0x8003323Cu;
    // 8003323C: stw     r0, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033240:
    // 80033240: rlwinm r0, r7, 18, 0, 13
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 18u) & 0xFFFC0000u;
    }

label_80033244:
    ctx->pc = 0x80033244u;
    // 80033244: lwz     r7, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80033248:
    // 80033248: rlwinm r7, r7, 0, 17, 13
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0xFFFC7FFFu;
    }

label_8003324C:
    // 8003324C: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_80033250:
    ctx->pc = 0x80033250u;
    // 80033250: stw     r6, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80033254:
    ctx->pc = 0x80033254u;
    // 80033254: lwz     r6, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80033258:
    // 80033258: rlwinm r6, r6, 0, 14, 8
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFF83FFFFu;
    }

label_8003325C:
    // 8003325C: or   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] | ctx->gpr[0];
    }

label_80033260:
    ctx->pc = 0x80033260u;
    // 80033260: stw     r0, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033264:
    // 80033264: b       0x800332A0
    {
            goto label_800332A0;
    }

label_80033268:
    ctx->pc = 0x80033268u;
    ctx->downcount -= 14;
    // 80033268: lwz     r12, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8003326C:
    // 8003326C: rlwinm r11, r0, 23, 0, 8
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[0], 23u) & 0xFF800000u;
    }

label_80033270:
    // 80033270: rlwinm r0, r6, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 24u) & 0xFF000000u;
    }

label_80033274:
    // 80033274: rlwinm r6, r12, 0, 9, 7
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[12], 0u) & 0xFF7FFFFFu;
    }

label_80033278:
    // 80033278: or   r6, r6, r11
    {
        ctx->gpr[6] = ctx->gpr[6] | ctx->gpr[11];
    }

label_8003327C:
    ctx->pc = 0x8003327Cu;
    // 8003327C: stw     r6, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80033280:
    ctx->pc = 0x80033280u;
    // 80033280: lwz     r6, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80033284:
    // 80033284: rlwinm r6, r6, 0, 8, 4
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xF8FFFFFFu;
    }

label_80033288:
    // 80033288: or   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] | ctx->gpr[0];
    }

label_8003328C:
    ctx->pc = 0x8003328Cu;
    // 8003328C: stw     r0, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033290:
    ctx->pc = 0x80033290u;
    // 80033290: lwz     r0, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033294:
    // 80033294: rlwinm r0, r0, 0, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x07FFFFFFu;
    }

label_80033298:
    // 80033298: rlwimi r0, r7, 27, 0, 4
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 27u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xF8000000u) | (rot & 0xF8000000u);
    }

label_8003329C:
    ctx->pc = 0x8003329Cu;
    // 8003329C: stw     r0, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800332A0:
    ctx->downcount -= 1;
    // 800332A0: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_800332A4:
    ctx->pc = 0x800332A4u;
    ctx->downcount -= 3;
    // 800332A4: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800332A8:
    // 800332A8: cmpwi   r0, 255
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(255);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800332AC:
    // 800332AC: bc    4, 2, 0x80032F8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80032F8Cu;
                return;
            }
            goto label_80032F8C;
        }
    }

label_800332B0:
    ctx->pc = 0x800332B0u;
    ctx->downcount -= 12;
    // 800332B0: lwz     r5, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800332B4:
    ctx->pc = 0x800332B4u;
    // 800332B4: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_800332B8:
    ctx->pc = 0x800332B8u;
    // 800332B8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800332BC:
    ctx->pc = 0x800332BCu;
    // 800332BC: lwz     r4, 1268(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1268);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800332C0:
    ctx->pc = 0x800332C0u;
    // 800332C0: slw   r0, r3, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[3] << sh);
    }

label_800332C4:
    ctx->pc = 0x800332C4u;
    // 800332C4: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_800332C8:
    ctx->pc = 0x800332C8u;
    // 800332C8: ori     r3, r4, 0x0010
    ctx->gpr[3] = ctx->gpr[4] | 0x0010u;

label_800332CC:
    ctx->pc = 0x800332CCu;
    // 800332CC: stw     r3, 1268(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1268);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800332D0:
    ctx->pc = 0x800332D0u;
    // 800332D0: lbz     r3, 1267(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1267);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_800332D4:
    ctx->pc = 0x800332D4u;
    // 800332D4: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800332D8:
    ctx->pc = 0x800332D8u;
    // 800332D8: stb     r0, 1267(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1267);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800332DC:
    ctx->pc = 0x800332DCu;
    // 800332DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800332E0:
    ctx->pc = 0x800332E0u;
    ctx->downcount -= 5;
    // 800332E0: lwz     r10, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_800332E4:
    ctx->pc = 0x800332E4u;
    // 800332E4: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_800332E8:
    ctx->pc = 0x800332E8u;
    // 800332E8: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_800332EC:
    ctx->pc = 0x800332ECu;
    // 800332EC: lis     r7, -13311
    ctx->gpr[7] = ((u32)(s32)(-13311) << 16);

label_800332F0:
    ctx->pc = 0x800332F0u;
    // 800332F0: b       0x80033360
    {
            goto label_80033360;
    }

label_800332F4:
    ctx->downcount -= 6;
    // 800332F4: rlwinm r9, r12, 0, 24, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[12], 0u) & 0x000000FFu;
    }

label_800332F8:
    ctx->pc = 0x800332F8u;
    // 800332F8: lbz     r3, 1267(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(1267);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_800332FC:
    // 800332FC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80033300:
    // 80033300: slw   r0, r0, r9
    {
        u32 sh = ctx->gpr[9] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_80033304:
    // 80033304: and.   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80033308:
    // 80033308: bc    12, 2, 0x80033358
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033358;
        }
    }

label_8003330C:
    ctx->downcount -= 19;
    // 8003330C: li      r8, 8
    ctx->gpr[8] = (u32)(s32)(8);

label_80033310:
    ctx->pc = 0x80033310u;
    // 80033310: stb     r8, -32768(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_80033314:
    // 80033314: ori     r3, r9, 0x0070
    ctx->gpr[3] = ctx->gpr[9] | 0x0070u;

label_80033318:
    // 80033318: addi    r0, r11, 28
    ctx->gpr[0] = ctx->gpr[11] + (u32)(s32)(28);

label_8003331C:
    ctx->pc = 0x8003331Cu;
    // 8003331C: stb     r3, -32768(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80033320:
    // 80033320: ori     r5, r9, 0x0080
    ctx->gpr[5] = ctx->gpr[9] | 0x0080u;

label_80033324:
    // 80033324: addi    r4, r11, 60
    ctx->gpr[4] = ctx->gpr[11] + (u32)(s32)(60);

label_80033328:
    ctx->pc = 0x80033328u;
    // 80033328: lwzx    r6, r10, r0
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8003332C:
    // 8003332C: ori     r3, r9, 0x0090
    ctx->gpr[3] = ctx->gpr[9] | 0x0090u;

label_80033330:
    // 80033330: addi    r0, r11, 92
    ctx->gpr[0] = ctx->gpr[11] + (u32)(s32)(92);

label_80033334:
    ctx->pc = 0x80033334u;
    // 80033334: stw     r6, -32768(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80033338:
    ctx->pc = 0x80033338u;
    // 80033338: stb     r8, -32768(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_8003333C:
    ctx->pc = 0x8003333Cu;
    // 8003333C: stb     r5, -32768(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80033340:
    ctx->pc = 0x80033340u;
    // 80033340: lwzx    r4, r10, r4
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[4];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80033344:
    ctx->pc = 0x80033344u;
    // 80033344: stw     r4, -32768(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80033348:
    ctx->pc = 0x80033348u;
    // 80033348: stb     r8, -32768(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_8003334C:
    ctx->pc = 0x8003334Cu;
    // 8003334C: stb     r3, -32768(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80033350:
    ctx->pc = 0x80033350u;
    // 80033350: lwzx    r0, r10, r0
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033354:
    ctx->pc = 0x80033354u;
    // 80033354: stw     r0, -32768(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033358:
    ctx->downcount -= 2;
    // 80033358: addi    r11, r11, 4
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(4);

label_8003335C:
    // 8003335C: addi    r12, r12, 1
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(1);

label_80033360:
    ctx->downcount -= 3;
    // 80033360: rlwinm r0, r12, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[12], 0u) & 0x000000FFu;
    }

label_80033364:
    // 80033364: cmplwi  r0, 0x0008
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

label_80033368:
    // 80033368: bc    12, 0, 0x800332F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800332F4u;
                return;
            }
            goto label_800332F4;
        }
    }

label_8003336C:
    ctx->pc = 0x8003336Cu;
    ctx->downcount -= 4;
    // 8003336C: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033370:
    ctx->pc = 0x80033370u;
    // 80033370: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80033374:
    ctx->pc = 0x80033374u;
    // 80033374: stb     r0, 1267(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1267);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80033378:
    ctx->pc = 0x80033378u;
    // 80033378: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_8003337C:
    ctx->pc = 0x8003337Cu;
    ctx->downcount -= 2;
    // 8003337C: cmpwi   r3, 25
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(25);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80033380:
    ctx->pc = 0x80033380u;
    // 80033380: bc    4, 2, 0x80033388
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80033388;
        }
    }

label_80033384:
    ctx->pc = 0x80033384u;
    ctx->downcount -= 1;
    // 80033384: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80033388:
    ctx->pc = 0x80033388u;
    ctx->downcount -= 10;
    // 80033388: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_8003338C:
    ctx->pc = 0x8003338Cu;
    // 8003338C: addi    r6, r3, -9
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-9);

label_80033390:
    ctx->pc = 0x80033390u;
    // 80033390: lis     r3, -13311
    ctx->gpr[3] = ((u32)(s32)(-13311) << 16);

label_80033394:
    ctx->pc = 0x80033394u;
    // 80033394: stb     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80033398:
    ctx->pc = 0x80033398u;
    // 80033398: ori     r0, r6, 0x00A0
    ctx->gpr[0] = ctx->gpr[6] | 0x00A0u;

label_8003339C:
    ctx->pc = 0x8003339Cu;
    // 8003339C: rlwinm r4, r4, 0, 2, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x3FFFFFFFu;
    }

label_800333A0:
    ctx->pc = 0x800333A0u;
    // 800333A0: stb     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800333A4:
    ctx->pc = 0x800333A4u;
    // 800333A4: addic.  r0, r6, -12
    {
        u64 a = ctx->gpr[6];
        u64 b = (u32)(s32)(-12);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800333A8:
    ctx->pc = 0x800333A8u;
    // 800333A8: stw     r4, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800333AC:
    ctx->pc = 0x800333ACu;
    // 800333AC: bc    12, 0, 0x800333C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800333C8;
        }
    }

label_800333B0:
    ctx->pc = 0x800333B0u;
    ctx->downcount -= 2;
    // 800333B0: cmpwi   r0, 4
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800333B4:
    ctx->pc = 0x800333B4u;
    // 800333B4: bc    4, 0, 0x800333C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800333C8;
        }
    }

label_800333B8:
    ctx->pc = 0x800333B8u;
    ctx->downcount -= 4;
    // 800333B8: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800333BC:
    ctx->pc = 0x800333BCu;
    // 800333BC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_800333C0:
    ctx->pc = 0x800333C0u;
    // 800333C0: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800333C4:
    ctx->pc = 0x800333C4u;
    // 800333C4: stw     r4, 136(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800333C8:
    ctx->pc = 0x800333C8u;
    ctx->downcount -= 9;
    // 800333C8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_800333CC:
    ctx->pc = 0x800333CCu;
    // 800333CC: lis     r3, -13311
    ctx->gpr[3] = ((u32)(s32)(-13311) << 16);

label_800333D0:
    ctx->pc = 0x800333D0u;
    // 800333D0: stb     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800333D4:
    ctx->pc = 0x800333D4u;
    // 800333D4: ori     r0, r6, 0x00B0
    ctx->gpr[0] = ctx->gpr[6] | 0x00B0u;

label_800333D8:
    ctx->pc = 0x800333D8u;
    // 800333D8: rlwinm r4, r5, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x000000FFu;
    }

label_800333DC:
    ctx->pc = 0x800333DCu;
    // 800333DC: stb     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800333E0:
    ctx->pc = 0x800333E0u;
    // 800333E0: addic.  r0, r6, -12
    {
        u64 a = ctx->gpr[6];
        u64 b = (u32)(s32)(-12);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800333E4:
    ctx->pc = 0x800333E4u;
    // 800333E4: stw     r4, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800333E8:
    ctx->pc = 0x800333E8u;
    // 800333E8: bclr  12, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800333EC:
    ctx->pc = 0x800333ECu;
    ctx->downcount -= 2;
    // 800333EC: cmpwi   r0, 4
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800333F0:
    ctx->pc = 0x800333F0u;
    // 800333F0: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800333F4:
    ctx->pc = 0x800333F4u;
    ctx->downcount -= 5;
    // 800333F4: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800333F8:
    ctx->pc = 0x800333F8u;
    // 800333F8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_800333FC:
    ctx->pc = 0x800333FCu;
    // 800333FC: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80033400:
    ctx->pc = 0x80033400u;
    // 80033400: stw     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80033404:
    ctx->pc = 0x80033404u;
    // 80033404: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033408:
    ctx->pc = 0x80033408u;
    ctx->downcount -= 4;
    // 80033408: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_8003340C:
    ctx->pc = 0x8003340Cu;
    // 8003340C: lis     r3, -13311
    ctx->gpr[3] = ((u32)(s32)(-13311) << 16);

label_80033410:
    ctx->pc = 0x80033410u;
    // 80033410: stb     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80033414:
    ctx->pc = 0x80033414u;
    // 80033414: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033418:
    ctx->pc = 0x80033418u;
    ctx->downcount -= 8;
    // 80033418: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003341C:
    ctx->pc = 0x8003341Cu;
    // 8003341C: cmplwi  r5, 0x0014
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0014u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80033420:
    ctx->pc = 0x80033420u;
    // 80033420: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033424:
    ctx->pc = 0x80033424u;
    // 80033424: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_80033428:
    ctx->pc = 0x80033428u;
    // 80033428: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_8003342C:
    ctx->pc = 0x8003342Cu;
    // 8003342C: stwu     r1, -8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80033430:
    ctx->pc = 0x80033430u;
    // 80033430: li      r10, 5
    ctx->gpr[10] = (u32)(s32)(5);

label_80033434:
    ctx->pc = 0x80033434u;
    // 80033434: bc    12, 1, 0x800334CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800334CC;
        }
    }

label_80033438:
    ctx->pc = 0x80033438u;
    ctx->downcount -= 7;
    // 80033438: lis     r9, -32760
    ctx->gpr[9] = ((u32)(s32)(-32760) << 16);

label_8003343C:
    ctx->pc = 0x8003343Cu;
    // 8003343C: addi    r9, r9, -1932
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-1932);

label_80033440:
    ctx->pc = 0x80033440u;
    // 80033440: rlwinm r0, r5, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_80033444:
    ctx->pc = 0x80033444u;
    // 80033444: lwzx    r0, r9, r0
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033448:
    ctx->pc = 0x80033448u;
    // 80033448: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8003344C:
    ctx->pc = 0x8003344Cu;
    // 8003344C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80033450:
    ctx->pc = 0x80033450u;
    ctx->downcount -= 3;
    // 80033450: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80033454:
    ctx->pc = 0x80033454u;
    // 80033454: li      r12, 1
    ctx->gpr[12] = (u32)(s32)(1);

label_80033458:
    ctx->pc = 0x80033458u;
    // 80033458: b       0x800334CC
    {
            goto label_800334CC;
    }

label_8003345C:
    ctx->pc = 0x8003345Cu;
    ctx->downcount -= 3;
    // 8003345C: li      r10, 1
    ctx->gpr[10] = (u32)(s32)(1);

label_80033460:
    ctx->pc = 0x80033460u;
    // 80033460: li      r12, 1
    ctx->gpr[12] = (u32)(s32)(1);

label_80033464:
    ctx->pc = 0x80033464u;
    // 80033464: b       0x800334CC
    {
            goto label_800334CC;
    }

label_80033468:
    ctx->pc = 0x80033468u;
    ctx->downcount -= 3;
    // 80033468: li      r10, 3
    ctx->gpr[10] = (u32)(s32)(3);

label_8003346C:
    ctx->pc = 0x8003346Cu;
    // 8003346C: li      r12, 1
    ctx->gpr[12] = (u32)(s32)(1);

label_80033470:
    ctx->pc = 0x80033470u;
    // 80033470: b       0x800334CC
    {
            goto label_800334CC;
    }

label_80033474:
    ctx->pc = 0x80033474u;
    ctx->downcount -= 3;
    // 80033474: li      r10, 4
    ctx->gpr[10] = (u32)(s32)(4);

label_80033478:
    ctx->pc = 0x80033478u;
    // 80033478: li      r12, 1
    ctx->gpr[12] = (u32)(s32)(1);

label_8003347C:
    ctx->pc = 0x8003347Cu;
    // 8003347C: b       0x800334CC
    {
            goto label_800334CC;
    }

label_80033480:
    ctx->pc = 0x80033480u;
    ctx->downcount -= 2;
    // 80033480: li      r10, 2
    ctx->gpr[10] = (u32)(s32)(2);

label_80033484:
    ctx->pc = 0x80033484u;
    // 80033484: b       0x800334CC
    {
            goto label_800334CC;
    }

label_80033488:
    ctx->pc = 0x80033488u;
    ctx->downcount -= 2;
    // 80033488: li      r10, 2
    ctx->gpr[10] = (u32)(s32)(2);

label_8003348C:
    ctx->pc = 0x8003348Cu;
    // 8003348C: b       0x800334CC
    {
            goto label_800334CC;
    }

label_80033490:
    ctx->pc = 0x80033490u;
    ctx->downcount -= 2;
    // 80033490: li      r10, 5
    ctx->gpr[10] = (u32)(s32)(5);

label_80033494:
    ctx->pc = 0x80033494u;
    // 80033494: b       0x800334CC
    {
            goto label_800334CC;
    }

label_80033498:
    ctx->pc = 0x80033498u;
    ctx->downcount -= 2;
    // 80033498: li      r10, 6
    ctx->gpr[10] = (u32)(s32)(6);

label_8003349C:
    ctx->pc = 0x8003349Cu;
    // 8003349C: b       0x800334CC
    {
            goto label_800334CC;
    }

label_800334A0:
    ctx->pc = 0x800334A0u;
    ctx->downcount -= 2;
    // 800334A0: li      r10, 7
    ctx->gpr[10] = (u32)(s32)(7);

label_800334A4:
    ctx->pc = 0x800334A4u;
    // 800334A4: b       0x800334CC
    {
            goto label_800334CC;
    }

label_800334A8:
    ctx->pc = 0x800334A8u;
    ctx->downcount -= 2;
    // 800334A8: li      r10, 8
    ctx->gpr[10] = (u32)(s32)(8);

label_800334AC:
    ctx->pc = 0x800334ACu;
    // 800334AC: b       0x800334CC
    {
            goto label_800334CC;
    }

label_800334B0:
    ctx->pc = 0x800334B0u;
    ctx->downcount -= 2;
    // 800334B0: li      r10, 9
    ctx->gpr[10] = (u32)(s32)(9);

label_800334B4:
    ctx->pc = 0x800334B4u;
    // 800334B4: b       0x800334CC
    {
            goto label_800334CC;
    }

label_800334B8:
    ctx->pc = 0x800334B8u;
    ctx->downcount -= 2;
    // 800334B8: li      r10, 10
    ctx->gpr[10] = (u32)(s32)(10);

label_800334BC:
    ctx->pc = 0x800334BCu;
    // 800334BC: b       0x800334CC
    {
            goto label_800334CC;
    }

label_800334C0:
    ctx->pc = 0x800334C0u;
    ctx->downcount -= 2;
    // 800334C0: li      r10, 11
    ctx->gpr[10] = (u32)(s32)(11);

label_800334C4:
    ctx->pc = 0x800334C4u;
    // 800334C4: b       0x800334CC
    {
            goto label_800334CC;
    }

label_800334C8:
    ctx->pc = 0x800334C8u;
    ctx->downcount -= 1;
    // 800334C8: li      r10, 12
    ctx->gpr[10] = (u32)(s32)(12);

label_800334CC:
    ctx->pc = 0x800334CCu;
    ctx->downcount -= 2;
    // 800334CC: cmpwi   r4, 1
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800334D0:
    ctx->pc = 0x800334D0u;
    // 800334D0: bc    12, 2, 0x800334F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800334F4;
        }
    }

label_800334D4:
    ctx->pc = 0x800334D4u;
    ctx->downcount -= 1;
    // 800334D4: bc    4, 0, 0x800334E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800334E4;
        }
    }

label_800334D8:
    ctx->pc = 0x800334D8u;
    ctx->downcount -= 2;
    // 800334D8: cmpwi   r4, 0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800334DC:
    ctx->pc = 0x800334DCu;
    // 800334DC: bc    4, 0, 0x80033508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80033508;
        }
    }

label_800334E0:
    ctx->pc = 0x800334E0u;
    ctx->downcount -= 1;
    // 800334E0: b       0x80033584
    {
            goto label_80033584;
    }

label_800334E4:
    ctx->pc = 0x800334E4u;
    ctx->downcount -= 2;
    // 800334E4: cmpwi   r4, 10
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800334E8:
    ctx->pc = 0x800334E8u;
    // 800334E8: bc    12, 2, 0x8003355C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003355C;
        }
    }

label_800334EC:
    ctx->pc = 0x800334ECu;
    ctx->downcount -= 1;
    // 800334EC: bc    4, 0, 0x80033584
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80033584;
        }
    }

label_800334F0:
    ctx->pc = 0x800334F0u;
    ctx->downcount -= 1;
    // 800334F0: b       0x80033520
    {
            goto label_80033520;
    }

label_800334F4:
    ctx->pc = 0x800334F4u;
    ctx->downcount -= 5;
    // 800334F4: rlwinm r0, r12, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[12], 2u) & 0xFFFFFFFCu;
    }

label_800334F8:
    ctx->pc = 0x800334F8u;
    // 800334F8: rlwinm r4, r0, 0, 28, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFF00Fu;
    }

label_800334FC:
    ctx->pc = 0x800334FCu;
    // 800334FC: rlwinm r0, r10, 7, 0, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[10], 7u) & 0xFFFFFF80u;
    }

label_80033500:
    ctx->pc = 0x80033500u;
    // 80033500: or   r11, r4, r0
    {
        ctx->gpr[11] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80033504:
    ctx->pc = 0x80033504u;
    // 80033504: b       0x80033584
    {
            goto label_80033584;
    }

label_80033508:
    ctx->pc = 0x80033508u;
    ctx->downcount -= 6;
    // 80033508: rlwinm r0, r12, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[12], 2u) & 0xFFFFFFFCu;
    }

label_8003350C:
    ctx->pc = 0x8003350Cu;
    // 8003350C: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_80033510:
    ctx->pc = 0x80033510u;
    // 80033510: rlwinm r4, r0, 0, 28, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFF00Fu;
    }

label_80033514:
    ctx->pc = 0x80033514u;
    // 80033514: rlwinm r0, r10, 7, 0, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[10], 7u) & 0xFFFFFF80u;
    }

label_80033518:
    ctx->pc = 0x80033518u;
    // 80033518: or   r11, r4, r0
    {
        ctx->gpr[11] = ctx->gpr[4] | ctx->gpr[0];
    }

label_8003351C:
    ctx->pc = 0x8003351Cu;
    // 8003351C: b       0x80033584
    {
            goto label_80033584;
    }

label_80033520:
    ctx->pc = 0x80033520u;
    ctx->downcount -= 15;
    // 80033520: rlwinm r0, r12, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[12], 2u) & 0xFFFFFFFCu;
    }

label_80033524:
    ctx->pc = 0x80033524u;
    // 80033524: rlwinm r0, r0, 0, 28, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF8Fu;
    }

label_80033528:
    ctx->pc = 0x80033528u;
    // 80033528: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_8003352C:
    ctx->pc = 0x8003352Cu;
    // 8003352C: rlwinm r9, r0, 0, 25, 19
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFF07Fu;
    }

label_80033530:
    ctx->pc = 0x80033530u;
    // 80033530: rlwinm r0, r10, 7, 0, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[10], 7u) & 0xFFFFFF80u;
    }

label_80033534:
    ctx->pc = 0x80033534u;
    // 80033534: or   r9, r9, r0
    {
        ctx->gpr[9] = ctx->gpr[9] | ctx->gpr[0];
    }

label_80033538:
    ctx->pc = 0x80033538u;
    // 80033538: addi    r5, r5, -12
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-12);

label_8003353C:
    ctx->pc = 0x8003353Cu;
    // 8003353C: addi    r0, r4, -2
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-2);

label_80033540:
    ctx->pc = 0x80033540u;
    // 80033540: rlwinm r9, r9, 0, 20, 16
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[9], 0u) & 0xFFFF8FFFu;
    }

label_80033544:
    ctx->pc = 0x80033544u;
    // 80033544: rlwinm r4, r5, 12, 0, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[5], 12u) & 0xFFFFF000u;
    }

label_80033548:
    ctx->pc = 0x80033548u;
    // 80033548: or   r4, r9, r4
    {
        ctx->gpr[4] = ctx->gpr[9] | ctx->gpr[4];
    }

label_8003354C:
    ctx->pc = 0x8003354Cu;
    // 8003354C: rlwinm r4, r4, 0, 17, 13
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFC7FFFu;
    }

label_80033550:
    ctx->pc = 0x80033550u;
    // 80033550: rlwinm r0, r0, 15, 0, 16
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 15u) & 0xFFFF8000u;
    }

label_80033554:
    ctx->pc = 0x80033554u;
    // 80033554: or   r11, r4, r0
    {
        ctx->gpr[11] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80033558:
    ctx->pc = 0x80033558u;
    // 80033558: b       0x80033584
    {
            goto label_80033584;
    }

label_8003355C:
    ctx->pc = 0x8003355Cu;
    ctx->downcount -= 3;
    // 8003355C: cmpwi   r5, 19
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(19);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80033560:
    ctx->pc = 0x80033560u;
    // 80033560: rlwinm r0, r12, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[12], 2u) & 0xFFFFFFFCu;
    }

label_80033564:
    ctx->pc = 0x80033564u;
    // 80033564: bc    4, 2, 0x80033574
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80033574;
        }
    }

label_80033568:
    ctx->pc = 0x80033568u;
    ctx->downcount -= 3;
    // 80033568: rlwinm r0, r0, 0, 28, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF8Fu;
    }

label_8003356C:
    ctx->pc = 0x8003356Cu;
    // 8003356C: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80033570:
    ctx->pc = 0x80033570u;
    // 80033570: b       0x8003357C
    {
            goto label_8003357C;
    }

label_80033574:
    ctx->pc = 0x80033574u;
    ctx->downcount -= 2;
    // 80033574: rlwinm r0, r0, 0, 28, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF8Fu;
    }

label_80033578:
    ctx->pc = 0x80033578u;
    // 80033578: ori     r0, r0, 0x0030
    ctx->gpr[0] = ctx->gpr[0] | 0x0030u;

label_8003357C:
    ctx->pc = 0x8003357Cu;
    ctx->downcount -= 2;
    // 8003357C: rlwinm r0, r0, 0, 25, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFF07Fu;
    }

label_80033580:
    ctx->pc = 0x80033580u;
    // 80033580: ori     r11, r0, 0x0100
    ctx->gpr[11] = ctx->gpr[0] | 0x0100u;

label_80033584:
    ctx->pc = 0x80033584u;
    ctx->downcount -= 16;
    // 80033584: li      r10, 16
    ctx->gpr[10] = (u32)(s32)(16);

label_80033588:
    ctx->pc = 0x80033588u;
    // 80033588: lis     r9, -13311
    ctx->gpr[9] = ((u32)(s32)(-13311) << 16);

label_8003358C:
    ctx->pc = 0x8003358Cu;
    // 8003358C: stb     r10, -32768(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

label_80033590:
    ctx->pc = 0x80033590u;
    // 80033590: addi    r0, r3, 4160
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4160);

label_80033594:
    ctx->pc = 0x80033594u;
    // 80033594: addi    r4, r8, -64
    ctx->gpr[4] = ctx->gpr[8] + (u32)(s32)(-64);

label_80033598:
    ctx->pc = 0x80033598u;
    // 80033598: stw     r0, -32768(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003359C:
    ctx->pc = 0x8003359Cu;
    // 8003359C: rlwinm r5, r4, 0, 24, 22
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFEFFu;
    }

label_800335A0:
    ctx->pc = 0x800335A0u;
    // 800335A0: rlwinm r4, r7, 8, 16, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[7], 8u) & 0x0000FF00u;
    }

label_800335A4:
    ctx->pc = 0x800335A4u;
    // 800335A4: stw     r11, -32768(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_800335A8:
    ctx->pc = 0x800335A8u;
    // 800335A8: addi    r0, r3, 4176
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4176);

label_800335AC:
    ctx->pc = 0x800335ACu;
    // 800335AC: cmplwi  r3, 0x0006
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0006u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800335B0:
    ctx->pc = 0x800335B0u;
    // 800335B0: stb     r10, -32768(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[10]);
    }

label_800335B4:
    ctx->pc = 0x800335B4u;
    // 800335B4: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_800335B8:
    ctx->pc = 0x800335B8u;
    // 800335B8: stw     r0, -32768(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800335BC:
    ctx->pc = 0x800335BCu;
    // 800335BC: stw     r4, -32768(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800335C0:
    ctx->pc = 0x800335C0u;
    // 800335C0: bc    12, 1, 0x800336B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800336B4;
        }
    }

label_800335C4:
    ctx->pc = 0x800335C4u;
    ctx->downcount -= 7;
    // 800335C4: lis     r4, -32760
    ctx->gpr[4] = ((u32)(s32)(-32760) << 16);

label_800335C8:
    ctx->pc = 0x800335C8u;
    // 800335C8: addi    r4, r4, -1960
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1960);

label_800335CC:
    ctx->pc = 0x800335CCu;
    // 800335CC: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_800335D0:
    ctx->pc = 0x800335D0u;
    // 800335D0: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800335D4:
    ctx->pc = 0x800335D4u;
    // 800335D4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_800335D8:
    ctx->pc = 0x800335D8u;
    // 800335D8: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_800335DC:
    ctx->pc = 0x800335DCu;
    ctx->downcount -= 8;
    // 800335DC: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800335E0:
    ctx->pc = 0x800335E0u;
    // 800335E0: rlwinm r0, r6, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 6u) & 0xFFFFFFC0u;
    }

label_800335E4:
    ctx->pc = 0x800335E4u;
    // 800335E4: addi    r5, r4, 128
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(128);

label_800335E8:
    ctx->pc = 0x800335E8u;
    // 800335E8: lwz     r4, 128(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800335EC:
    ctx->pc = 0x800335ECu;
    // 800335EC: rlwinm r4, r4, 0, 26, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFF03Fu;
    }

label_800335F0:
    ctx->pc = 0x800335F0u;
    // 800335F0: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_800335F4:
    ctx->pc = 0x800335F4u;
    // 800335F4: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800335F8:
    ctx->pc = 0x800335F8u;
    // 800335F8: b       0x800336D0
    {
            goto label_800336D0;
    }

label_800335FC:
    ctx->pc = 0x800335FCu;
    ctx->downcount -= 8;
    // 800335FC: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80033600:
    ctx->pc = 0x80033600u;
    // 80033600: rlwinm r0, r6, 12, 0, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 12u) & 0xFFFFF000u;
    }

label_80033604:
    ctx->pc = 0x80033604u;
    // 80033604: addi    r5, r4, 128
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(128);

label_80033608:
    ctx->pc = 0x80033608u;
    // 80033608: lwz     r4, 128(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003360C:
    ctx->pc = 0x8003360Cu;
    // 8003360C: rlwinm r4, r4, 0, 20, 13
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFC0FFFu;
    }

label_80033610:
    ctx->pc = 0x80033610u;
    // 80033610: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80033614:
    ctx->pc = 0x80033614u;
    // 80033614: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033618:
    ctx->pc = 0x80033618u;
    // 80033618: b       0x800336D0
    {
            goto label_800336D0;
    }

label_8003361C:
    ctx->pc = 0x8003361Cu;
    ctx->downcount -= 8;
    // 8003361C: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80033620:
    ctx->pc = 0x80033620u;
    // 80033620: rlwinm r0, r6, 18, 0, 13
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 18u) & 0xFFFC0000u;
    }

label_80033624:
    ctx->pc = 0x80033624u;
    // 80033624: addi    r5, r4, 128
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(128);

label_80033628:
    ctx->pc = 0x80033628u;
    // 80033628: lwz     r4, 128(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003362C:
    ctx->pc = 0x8003362Cu;
    // 8003362C: rlwinm r4, r4, 0, 14, 7
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFF03FFFFu;
    }

label_80033630:
    ctx->pc = 0x80033630u;
    // 80033630: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80033634:
    ctx->pc = 0x80033634u;
    // 80033634: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033638:
    ctx->pc = 0x80033638u;
    // 80033638: b       0x800336D0
    {
            goto label_800336D0;
    }

label_8003363C:
    ctx->pc = 0x8003363Cu;
    ctx->downcount -= 8;
    // 8003363C: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80033640:
    ctx->pc = 0x80033640u;
    // 80033640: rlwinm r0, r6, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 24u) & 0xFF000000u;
    }

label_80033644:
    ctx->pc = 0x80033644u;
    // 80033644: addi    r5, r4, 128
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(128);

label_80033648:
    ctx->pc = 0x80033648u;
    // 80033648: lwz     r4, 128(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003364C:
    ctx->pc = 0x8003364Cu;
    // 8003364C: rlwinm r4, r4, 0, 8, 1
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xC0FFFFFFu;
    }

label_80033650:
    ctx->pc = 0x80033650u;
    // 80033650: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80033654:
    ctx->pc = 0x80033654u;
    // 80033654: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033658:
    ctx->pc = 0x80033658u;
    // 80033658: b       0x800336D0
    {
            goto label_800336D0;
    }

label_8003365C:
    ctx->pc = 0x8003365Cu;
    ctx->downcount -= 6;
    // 8003365C: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80033660:
    ctx->pc = 0x80033660u;
    // 80033660: lwzu     r0, 132(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_80033664:
    ctx->pc = 0x80033664u;
    // 80033664: rlwinm r0, r0, 0, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFC0u;
    }

label_80033668:
    ctx->pc = 0x80033668u;
    // 80033668: or   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[6];
    }

label_8003366C:
    ctx->pc = 0x8003366Cu;
    // 8003366C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033670:
    ctx->pc = 0x80033670u;
    // 80033670: b       0x800336D0
    {
            goto label_800336D0;
    }

label_80033674:
    ctx->pc = 0x80033674u;
    ctx->downcount -= 8;
    // 80033674: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80033678:
    ctx->pc = 0x80033678u;
    // 80033678: rlwinm r0, r6, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 6u) & 0xFFFFFFC0u;
    }

label_8003367C:
    ctx->pc = 0x8003367Cu;
    // 8003367C: addi    r5, r4, 132
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(132);

label_80033680:
    ctx->pc = 0x80033680u;
    // 80033680: lwz     r4, 132(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80033684:
    ctx->pc = 0x80033684u;
    // 80033684: rlwinm r4, r4, 0, 26, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFF03Fu;
    }

label_80033688:
    ctx->pc = 0x80033688u;
    // 80033688: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_8003368C:
    ctx->pc = 0x8003368Cu;
    // 8003368C: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033690:
    ctx->pc = 0x80033690u;
    // 80033690: b       0x800336D0
    {
            goto label_800336D0;
    }

label_80033694:
    ctx->pc = 0x80033694u;
    ctx->downcount -= 8;
    // 80033694: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80033698:
    ctx->pc = 0x80033698u;
    // 80033698: rlwinm r0, r6, 12, 0, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 12u) & 0xFFFFF000u;
    }

label_8003369C:
    ctx->pc = 0x8003369Cu;
    // 8003369C: addi    r5, r4, 132
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(132);

label_800336A0:
    ctx->pc = 0x800336A0u;
    // 800336A0: lwz     r4, 132(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800336A4:
    ctx->pc = 0x800336A4u;
    // 800336A4: rlwinm r4, r4, 0, 20, 13
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFC0FFFu;
    }

label_800336A8:
    ctx->pc = 0x800336A8u;
    // 800336A8: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_800336AC:
    ctx->pc = 0x800336ACu;
    // 800336AC: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800336B0:
    ctx->pc = 0x800336B0u;
    // 800336B0: b       0x800336D0
    {
            goto label_800336D0;
    }

label_800336B4:
    ctx->pc = 0x800336B4u;
    ctx->downcount -= 7;
    // 800336B4: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800336B8:
    ctx->pc = 0x800336B8u;
    // 800336B8: rlwinm r0, r6, 18, 0, 13
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 18u) & 0xFFFC0000u;
    }

label_800336BC:
    ctx->pc = 0x800336BCu;
    // 800336BC: addi    r5, r4, 132
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(132);

label_800336C0:
    ctx->pc = 0x800336C0u;
    // 800336C0: lwz     r4, 132(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800336C4:
    ctx->pc = 0x800336C4u;
    // 800336C4: rlwinm r4, r4, 0, 14, 7
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFF03FFFFu;
    }

label_800336C8:
    ctx->pc = 0x800336C8u;
    // 800336C8: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_800336CC:
    ctx->pc = 0x800336CCu;
    // 800336CC: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800336D0:
    ctx->pc = 0x800336D0u;
    ctx->downcount -= 2;
    // 800336D0: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_800336D4:
    ctx->pc = 0x800336D4u;
    // 800336D4: bl      0x80037998
    {
            ctx->lr = 0x800336D8u;
            ctx->pc = 0x80037998u;
            return;
    }

label_800336D8:
    ctx->pc = 0x800336D8u;
    ctx->downcount -= 5;
    // 800336D8: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800336DC:
    ctx->pc = 0x800336DCu;
    // 800336DC: addi    r1, r1, 8
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(8);

label_800336E0:
    ctx->pc = 0x800336E0u;
    // 800336E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800336E4:
    ctx->pc = 0x800336E4u;
    // 800336E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800336E8:
    ctx->pc = 0x800336E8u;
    ctx->downcount -= 16;
    // 800336E8: lwz     r6, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800336EC:
    ctx->pc = 0x800336ECu;
    // 800336EC: rlwinm r8, r3, 0, 24, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_800336F0:
    ctx->pc = 0x800336F0u;
    // 800336F0: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_800336F4:
    ctx->pc = 0x800336F4u;
    // 800336F4: lwz     r5, 516(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(516);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800336F8:
    ctx->pc = 0x800336F8u;
    // 800336F8: lis     r3, -13311
    ctx->gpr[3] = ((u32)(s32)(-13311) << 16);

label_800336FC:
    ctx->pc = 0x800336FCu;
    // 800336FC: li      r0, 4159
    ctx->gpr[0] = (u32)(s32)(4159);

label_80033700:
    ctx->pc = 0x80033700u;
    // 80033700: rlwinm r5, r5, 0, 0, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFFFFF0u;
    }

label_80033704:
    ctx->pc = 0x80033704u;
    // 80033704: or   r5, r5, r8
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[8];
    }

label_80033708:
    ctx->pc = 0x80033708u;
    // 80033708: stw     r5, 516(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8003370C:
    ctx->pc = 0x8003370Cu;
    // 8003370C: stb     r4, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80033710:
    ctx->pc = 0x80033710u;
    // 80033710: stw     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033714:
    ctx->pc = 0x80033714u;
    // 80033714: stw     r8, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80033718:
    ctx->pc = 0x80033718u;
    // 80033718: lwz     r0, 1268(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003371C:
    ctx->pc = 0x8003371Cu;
    // 8003371C: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_80033720:
    ctx->pc = 0x80033720u;
    // 80033720: stw     r0, 1268(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033724:
    ctx->pc = 0x80033724u;
    // 80033724: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033728:
    ctx->pc = 0x80033728u;
    ctx->downcount -= 2;
    // 80033728: cmpwi   r3, 2
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

label_8003372C:
    ctx->pc = 0x8003372Cu;
    // 8003372C: bc    12, 2, 0x8003378C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003378C;
        }
    }

label_80033730:
    ctx->pc = 0x80033730u;
    ctx->downcount -= 1;
    // 80033730: bc    4, 0, 0x80033744
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80033744;
        }
    }

label_80033734:
    ctx->pc = 0x80033734u;
    ctx->downcount -= 2;
    // 80033734: cmpwi   r3, 0
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

label_80033738:
    ctx->pc = 0x80033738u;
    // 80033738: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_8003373C:
    ctx->pc = 0x8003373Cu;
    ctx->downcount -= 1;
    // 8003373C: bc    4, 0, 0x80033750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80033750;
        }
    }

label_80033740:
    ctx->pc = 0x80033740u;
    ctx->downcount -= 1;
    // 80033740: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033744:
    ctx->pc = 0x80033744u;
    ctx->downcount -= 2;
    // 80033744: cmpwi   r3, 4
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

label_80033748:
    ctx->pc = 0x80033748u;
    // 80033748: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_8003374C:
    ctx->pc = 0x8003374Cu;
    ctx->downcount -= 1;
    // 8003374C: b       0x800337A4
    {
            goto label_800337A4;
    }

label_80033750:
    ctx->pc = 0x80033750u;
    ctx->downcount -= 11;
    // 80033750: lwz     r5, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80033754:
    ctx->pc = 0x80033754u;
    // 80033754: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80033758:
    ctx->pc = 0x80033758u;
    // 80033758: sth     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8003375C:
    ctx->pc = 0x8003375Cu;
    // 8003375C: lhz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80033760:
    ctx->pc = 0x80033760u;
    // 80033760: cntlzw r3, r3
    {
        u32 v = ctx->gpr[3];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[3] = n;
    }

label_80033764:
    ctx->pc = 0x80033764u;
    // 80033764: rlwinm r3, r3, 27, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 27u) & 0x0000FFFFu;
    }

label_80033768:
    ctx->pc = 0x80033768u;
    // 80033768: sth     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_8003376C:
    ctx->pc = 0x8003376Cu;
    // 8003376C: sth     r0, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80033770:
    ctx->pc = 0x80033770u;
    // 80033770: lhz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80033774:
    ctx->pc = 0x80033774u;
    // 80033774: cmplwi  r0, 0x0000
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

label_80033778:
    ctx->pc = 0x80033778u;
    // 80033778: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_8003377C:
    ctx->pc = 0x8003377Cu;
    ctx->downcount -= 4;
    // 8003377C: lwz     r0, 1268(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033780:
    ctx->pc = 0x80033780u;
    // 80033780: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_80033784:
    ctx->pc = 0x80033784u;
    // 80033784: stw     r0, 1268(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033788:
    ctx->pc = 0x80033788u;
    // 80033788: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_8003378C:
    ctx->pc = 0x8003378Cu;
    ctx->downcount -= 6;
    // 8003378C: neg  r4, r4
    {
        u32 a = ctx->gpr[4];
        ctx->gpr[4] = (~a) + 1u;
    }

label_80033790:
    ctx->pc = 0x80033790u;
    // 80033790: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033794:
    ctx->pc = 0x80033794u;
    // 80033794: addic   r0, r4, -1
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80033798:
    ctx->pc = 0x80033798u;
    // 80033798: subfe   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003379C:
    ctx->pc = 0x8003379Cu;
    // 8003379C: stb     r0, 1265(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1265);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800337A0:
    ctx->pc = 0x800337A0u;
    // 800337A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800337A4:
    ctx->pc = 0x800337A4u;
    ctx->downcount -= 6;
    // 800337A4: neg  r4, r4
    {
        u32 a = ctx->gpr[4];
        ctx->gpr[4] = (~a) + 1u;
    }

label_800337A8:
    ctx->pc = 0x800337A8u;
    // 800337A8: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800337AC:
    ctx->pc = 0x800337ACu;
    // 800337AC: addic   r0, r4, -1
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_800337B0:
    ctx->pc = 0x800337B0u;
    // 800337B0: subfe   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_800337B4:
    ctx->pc = 0x800337B4u;
    // 800337B4: stb     r0, 1266(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1266);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800337B8:
    ctx->pc = 0x800337B8u;
    // 800337B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800337BC:
    ctx->pc = 0x800337BCu;
    ctx->downcount -= 7;
    // 800337BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800337C0:
    ctx->pc = 0x800337C0u;
    // 800337C0: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800337C4:
    ctx->pc = 0x800337C4u;
    // 800337C4: stwu     r1, -8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800337C8:
    ctx->pc = 0x800337C8u;
    // 800337C8: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800337CC:
    ctx->pc = 0x800337CCu;
    // 800337CC: lwz     r0, 1268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800337D0:
    ctx->pc = 0x800337D0u;
    // 800337D0: cmplwi  r0, 0x0000
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

label_800337D4:
    ctx->pc = 0x800337D4u;
    // 800337D4: bc    12, 2, 0x800337DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800337DC;
        }
    }

label_800337D8:
    ctx->pc = 0x800337D8u;
    ctx->downcount -= 1;
    // 800337D8: bl      0x80033D58
    {
            ctx->lr = 0x800337DCu;
            goto label_80033D58;
    }

label_800337DC:
    ctx->pc = 0x800337DCu;
    ctx->downcount -= 11;
    // 800337DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800337E0:
    ctx->pc = 0x800337E0u;
    // 800337E0: lis     r3, -13311
    ctx->gpr[3] = ((u32)(s32)(-13311) << 16);

label_800337E4:
    ctx->pc = 0x800337E4u;
    // 800337E4: stw     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800337E8:
    ctx->pc = 0x800337E8u;
    // 800337E8: stw     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800337EC:
    ctx->pc = 0x800337ECu;
    // 800337EC: stw     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800337F0:
    ctx->pc = 0x800337F0u;
    // 800337F0: stw     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800337F4:
    ctx->pc = 0x800337F4u;
    // 800337F4: stw     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800337F8:
    ctx->pc = 0x800337F8u;
    // 800337F8: stw     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800337FC:
    ctx->pc = 0x800337FCu;
    // 800337FC: stw     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033800:
    ctx->pc = 0x80033800u;
    // 80033800: stw     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033804:
    ctx->pc = 0x80033804u;
    // 80033804: bl      0x80022BD4
    {
            ctx->lr = 0x80033808u;
            ctx->pc = 0x80022BD4u;
            return;
    }

label_80033808:
    ctx->pc = 0x80033808u;
    ctx->downcount -= 5;
    // 80033808: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003380C:
    ctx->pc = 0x8003380Cu;
    // 8003380C: addi    r1, r1, 8
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(8);

label_80033810:
    ctx->pc = 0x80033810u;
    // 80033810: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80033814:
    ctx->pc = 0x80033814u;
    // 80033814: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033818:
    ctx->pc = 0x80033818u;
    ctx->downcount -= 18;
    // 80033818: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003381C:
    ctx->pc = 0x8003381Cu;
    // 8003381C: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033820:
    ctx->pc = 0x80033820u;
    // 80033820: stwu     r1, -40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-40);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80033824:
    ctx->pc = 0x80033824u;
    // 80033824: stmw     r27, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80033828:
    ctx->pc = 0x80033828u;
    // 80033828: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003382C:
    ctx->pc = 0x8003382Cu;
    // 8003382C: lbz     r0, 1266(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1266);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80033830:
    ctx->pc = 0x80033830u;
    // 80033830: cmplwi  r0, 0x0000
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

label_80033834:
    ctx->pc = 0x80033834u;
    // 80033834: bc    12, 2, 0x800338E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800338E4;
        }
    }

label_80033838:
    ctx->pc = 0x80033838u;
    ctx->downcount -= 1;
    // 80033838: bl      0x800325B0
    {
            ctx->lr = 0x8003383Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800325B0u;
                return;
            }
            goto label_800325B0;
    }

label_8003383C:
    ctx->pc = 0x8003383Cu;
    ctx->downcount -= 2;
    // 8003383C: cmplwi  r3, 0x0000
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

label_80033840:
    ctx->pc = 0x80033840u;
    // 80033840: bc    12, 2, 0x800338E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800338E4;
        }
    }

label_80033844:
    ctx->pc = 0x80033844u;
    ctx->downcount -= 4;
    // 80033844: lwz     r3, -31484(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31484);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033848:
    ctx->pc = 0x80033848u;
    // 80033848: addi    r6, r3, 78
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(78);

label_8003384C:
    ctx->pc = 0x8003384Cu;
    // 8003384C: lhz     r4, 78(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(78);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80033850:
    ctx->pc = 0x80033850u;
    // 80033850: addi    r5, r3, 80
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(80);

label_80033854:
    loop_80033854(ctx);
    if (ctx->pc == 0x80033868u) goto label_80033868;
    return;
label_80033858:
    ctx->pc = 0x80033858u;
    // 80033858: lhz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8003385C:
    ctx->pc = 0x8003385Cu;
    // 8003385C: lhz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80033860:
    // 80033860: cmplw   r4, r0
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80033864:
    // 80033864: bc    4, 2, 0x80033854
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80033854u;
                return;
            }
            goto label_80033854;
        }
    }

label_80033868:
    ctx->pc = 0x80033868u;
    ctx->downcount -= 2;
    // 80033868: rlwinm r0, r4, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_8003386C:
    ctx->pc = 0x8003386Cu;
    // 8003386C: or   r27, r0, r3
    {
        ctx->gpr[27] = ctx->gpr[0] | ctx->gpr[3];
    }

label_80033870:
    ctx->downcount -= 1;
    // 80033870: bl      0x80042C64
    {
            ctx->lr = 0x80033874u;
            ctx->pc = 0x80042C64u;
            return;
    }

label_80033874:
    ctx->downcount -= 5;
    // 80033874: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80033878:
    // 80033878: addi    r31, r4, 0
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(0);

label_8003387C:
    // 8003387C: addi    r30, r3, 0
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(0);

label_80033880:
    // 80033880: xoris   r28, r0, 0x8000
    ctx->gpr[28] = ctx->gpr[0] ^ (0x8000u << 16);

label_80033884:
    // 80033884: li      r29, 8
    ctx->gpr[29] = (u32)(s32)(8);

label_80033888:
    ctx->downcount -= 1;
    // 80033888: bl      0x80042C64
    {
            ctx->lr = 0x8003388Cu;
            ctx->pc = 0x80042C64u;
            return;
    }

label_8003388C:
    ctx->downcount -= 8;
    // 8003388C: subfc   r4, r31, r4
    {
        u32 a = ~ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80033890:
    // 80033890: subfe   r0, r30, r3
    {
        u32 a = ~ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80033894:
    // 80033894: xoris   r3, r0, 0x8000
    ctx->gpr[3] = ctx->gpr[0] ^ (0x8000u << 16);

label_80033898:
    // 80033898: subfc   r0, r4, r29
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003389C:
    // 8003389C: subfe   r3, r3, r28
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[28];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_800338A0:
    // 800338A0: subfe   r3, r28, r28
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[28];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_800338A4:
    // 800338A4: neg.  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800338A8:
    // 800338A8: bc    12, 2, 0x80033888
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80033888u;
                return;
            }
            goto label_80033888;
        }
    }

label_800338AC:
    ctx->pc = 0x800338ACu;
    ctx->downcount -= 4;
    // 800338AC: lwz     r3, -31484(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31484);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800338B0:
    // 800338B0: addi    r6, r3, 78
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(78);

label_800338B4:
    ctx->pc = 0x800338B4u;
    // 800338B4: lhz     r4, 78(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(78);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_800338B8:
    // 800338B8: addi    r5, r3, 80
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(80);

label_800338BC:
    loop_800338BC(ctx);
    if (ctx->pc == 0x800338D0u) goto label_800338D0;
    return;
label_800338C0:
    ctx->pc = 0x800338C0u;
    // 800338C0: lhz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_800338C4:
    ctx->pc = 0x800338C4u;
    // 800338C4: lhz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_800338C8:
    // 800338C8: cmplw   r4, r0
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800338CC:
    // 800338CC: bc    4, 2, 0x800338BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800338BCu;
                return;
            }
            goto label_800338BC;
        }
    }

label_800338D0:
    ctx->downcount -= 5;
    // 800338D0: rlwinm r0, r4, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_800338D4:
    // 800338D4: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_800338D8:
    // 800338D8: cmplw   r0, r27
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800338DC:
    // 800338DC: or   r27, r0, r0
    {
        ctx->gpr[27] = ctx->gpr[0] | ctx->gpr[0];
    }

label_800338E0:
    // 800338E0: bc    4, 2, 0x80033870
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80033870u;
                return;
            }
            goto label_80033870;
        }
    }

label_800338E4:
    ctx->pc = 0x800338E4u;
    ctx->downcount -= 5;
    // 800338E4: lis     r3, -13312
    ctx->gpr[3] = ((u32)(s32)(-13312) << 16);

label_800338E8:
    ctx->pc = 0x800338E8u;
    // 800338E8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_800338EC:
    ctx->pc = 0x800338ECu;
    // 800338EC: addi    r27, r3, 12288
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(12288);

label_800338F0:
    ctx->pc = 0x800338F0u;
    // 800338F0: stwu     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[27] = ea;
    }

label_800338F4:
    ctx->pc = 0x800338F4u;
    // 800338F4: bl      0x80042C64
    {
            ctx->lr = 0x800338F8u;
            ctx->pc = 0x80042C64u;
            return;
    }

label_800338F8:
    ctx->pc = 0x800338F8u;
    ctx->downcount -= 5;
    // 800338F8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800338FC:
    ctx->pc = 0x800338FCu;
    // 800338FC: addi    r31, r4, 0
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(0);

label_80033900:
    ctx->pc = 0x80033900u;
    // 80033900: addi    r30, r3, 0
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(0);

label_80033904:
    ctx->pc = 0x80033904u;
    // 80033904: xoris   r28, r0, 0x8000
    ctx->gpr[28] = ctx->gpr[0] ^ (0x8000u << 16);

label_80033908:
    ctx->pc = 0x80033908u;
    // 80033908: li      r29, 50
    ctx->gpr[29] = (u32)(s32)(50);

label_8003390C:
    ctx->downcount -= 1;
    // 8003390C: bl      0x80042C64
    {
            ctx->lr = 0x80033910u;
            ctx->pc = 0x80042C64u;
            return;
    }

label_80033910:
    ctx->downcount -= 8;
    // 80033910: subfc   r4, r31, r4
    {
        u32 a = ~ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80033914:
    // 80033914: subfe   r0, r30, r3
    {
        u32 a = ~ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80033918:
    // 80033918: xoris   r3, r0, 0x8000
    ctx->gpr[3] = ctx->gpr[0] ^ (0x8000u << 16);

label_8003391C:
    // 8003391C: subfc   r0, r4, r29
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80033920:
    // 80033920: subfe   r3, r3, r28
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[28];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80033924:
    // 80033924: subfe   r3, r28, r28
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[28];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80033928:
    // 80033928: neg.  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003392C:
    // 8003392C: bc    12, 2, 0x8003390C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003390Cu;
                return;
            }
            goto label_8003390C;
        }
    }

label_80033930:
    ctx->pc = 0x80033930u;
    ctx->downcount -= 3;
    // 80033930: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80033934:
    ctx->pc = 0x80033934u;
    // 80033934: stw     r30, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80033938:
    ctx->pc = 0x80033938u;
    // 80033938: bl      0x80042C64
    {
            ctx->lr = 0x8003393Cu;
            ctx->pc = 0x80042C64u;
            return;
    }

label_8003393C:
    ctx->pc = 0x8003393Cu;
    ctx->downcount -= 4;
    // 8003393C: addi    r28, r4, 0
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(0);

label_80033940:
    ctx->pc = 0x80033940u;
    // 80033940: addi    r29, r3, 0
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(0);

label_80033944:
    ctx->pc = 0x80033944u;
    // 80033944: xoris   r31, r30, 0x8000
    ctx->gpr[31] = ctx->gpr[30] ^ (0x8000u << 16);

label_80033948:
    ctx->pc = 0x80033948u;
    // 80033948: li      r30, 5
    ctx->gpr[30] = (u32)(s32)(5);

label_8003394C:
    ctx->downcount -= 1;
    // 8003394C: bl      0x80042C64
    {
            ctx->lr = 0x80033950u;
            ctx->pc = 0x80042C64u;
            return;
    }

label_80033950:
    ctx->downcount -= 8;
    // 80033950: subfc   r4, r28, r4
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[4];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80033954:
    // 80033954: subfe   r0, r29, r3
    {
        u32 a = ~ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80033958:
    // 80033958: xoris   r3, r0, 0x8000
    ctx->gpr[3] = ctx->gpr[0] ^ (0x8000u << 16);

label_8003395C:
    // 8003395C: subfc   r0, r4, r30
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80033960:
    // 80033960: subfe   r3, r3, r31
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[31];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80033964:
    // 80033964: subfe   r3, r31, r31
    {
        u32 a = ~ctx->gpr[31];
        u32 b = ctx->gpr[31];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80033968:
    // 80033968: neg.  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003396C:
    // 8003396C: bc    12, 2, 0x8003394C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003394Cu;
                return;
            }
            goto label_8003394C;
        }
    }

label_80033970:
    ctx->pc = 0x80033970u;
    ctx->downcount -= 16;
    // 80033970: lmw     r27, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80033974:
    ctx->pc = 0x80033974u;
    // 80033974: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033978:
    ctx->pc = 0x80033978u;
    // 80033978: addi    r1, r1, 40
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(40);

label_8003397C:
    ctx->pc = 0x8003397Cu;
    // 8003397C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80033980:
    ctx->pc = 0x80033980u;
    // 80033980: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033984:
    ctx->pc = 0x80033984u;
    ctx->downcount -= 5;
    // 80033984: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80033988:
    ctx->pc = 0x80033988u;
    // 80033988: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003398C:
    ctx->pc = 0x8003398Cu;
    // 8003398C: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80033990:
    ctx->pc = 0x80033990u;
    // 80033990: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80033994:
    ctx->pc = 0x80033994u;
    // 80033994: bl      0x8003ECC4
    {
            ctx->lr = 0x80033998u;
            ctx->pc = 0x8003ECC4u;
            return;
    }

label_80033998:
    ctx->pc = 0x80033998u;
    ctx->downcount -= 8;
    // 80033998: li      r0, 97
    ctx->gpr[0] = (u32)(s32)(97);

label_8003399C:
    ctx->pc = 0x8003399Cu;
    // 8003399C: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_800339A0:
    ctx->pc = 0x800339A0u;
    // 800339A0: lis     r4, 17664
    ctx->gpr[4] = ((u32)(s32)(17664) << 16);

label_800339A4:
    ctx->pc = 0x800339A4u;
    // 800339A4: stb     r0, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800339A8:
    ctx->pc = 0x800339A8u;
    // 800339A8: addi    r0, r4, 2
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(2);

label_800339AC:
    ctx->pc = 0x800339ACu;
    // 800339AC: stw     r0, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800339B0:
    ctx->pc = 0x800339B0u;
    // 800339B0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800339B4:
    ctx->pc = 0x800339B4u;
    // 800339B4: bl      0x800337BC
    {
            ctx->lr = 0x800339B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800337BCu;
                return;
            }
            goto label_800337BC;
    }

label_800339B8:
    ctx->pc = 0x800339B8u;
    ctx->downcount -= 4;
    // 800339B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800339BC:
    ctx->pc = 0x800339BCu;
    // 800339BC: stb     r0, -31416(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31416);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800339C0:
    ctx->pc = 0x800339C0u;
    // 800339C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800339C4:
    ctx->pc = 0x800339C4u;
    // 800339C4: bl      0x8003ECEC
    {
            ctx->lr = 0x800339C8u;
            ctx->pc = 0x8003ECECu;
            return;
    }

label_800339C8:
    ctx->pc = 0x800339C8u;
    ctx->downcount -= 1;
    // 800339C8: bl      0x8003ECC4
    {
            ctx->lr = 0x800339CCu;
            ctx->pc = 0x8003ECC4u;
            return;
    }

label_800339CC:
    ctx->pc = 0x800339CCu;
    ctx->downcount -= 2;
    // 800339CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800339D0:
    ctx->pc = 0x800339D0u;
    // 800339D0: b       0x800339DC
    {
            goto label_800339DC;
    }

label_800339D4:
    ctx->downcount -= 2;
    // 800339D4: addi    r3, r13, -31412
    ctx->gpr[3] = ctx->gpr[13] + (u32)(s32)(-31412);

label_800339D8:
    // 800339D8: bl      0x80042900
    {
            ctx->lr = 0x800339DCu;
            ctx->pc = 0x80042900u;
            return;
    }

label_800339DC:
    ctx->pc = 0x800339DCu;
    ctx->downcount -= 3;
    // 800339DC: lbz     r0, -31416(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31416);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800339E0:
    // 800339E0: cmplwi  r0, 0x0000
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

label_800339E4:
    // 800339E4: bc    12, 2, 0x800339D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800339D4u;
                return;
            }
            goto label_800339D4;
        }
    }

label_800339E8:
    ctx->pc = 0x800339E8u;
    ctx->downcount -= 2;
    // 800339E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800339EC:
    ctx->pc = 0x800339ECu;
    // 800339EC: bl      0x8003ECEC
    {
            ctx->lr = 0x800339F0u;
            ctx->pc = 0x8003ECECu;
            return;
    }

label_800339F0:
    ctx->pc = 0x800339F0u;
    ctx->downcount -= 6;
    // 800339F0: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800339F4:
    ctx->pc = 0x800339F4u;
    // 800339F4: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800339F8:
    ctx->pc = 0x800339F8u;
    // 800339F8: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_800339FC:
    ctx->pc = 0x800339FCu;
    // 800339FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80033A00:
    ctx->pc = 0x80033A00u;
    // 80033A00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033A04:
    ctx->pc = 0x80033A04u;
    ctx->downcount -= 5;
    // 80033A04: lwz     r5, -31488(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31488);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80033A08:
    ctx->pc = 0x80033A08u;
    // 80033A08: rlwinm r0, r4, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
    }

label_80033A0C:
    ctx->pc = 0x80033A0Cu;
    // 80033A0C: rlwimi r0, r3, 8, 0, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 8u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFFFFFF00u) | (rot & 0xFFFFFF00u);
    }

label_80033A10:
    ctx->pc = 0x80033A10u;
    // 80033A10: sth     r0, 6(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80033A14:
    ctx->pc = 0x80033A14u;
    // 80033A14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033A18:
    ctx->pc = 0x80033A18u;
    ctx->downcount -= 5;
    // 80033A18: rlwinm r0, r3, 0, 30, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFFBu;
    }

label_80033A1C:
    ctx->pc = 0x80033A1Cu;
    // 80033A1C: lwz     r3, -31488(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31488);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033A20:
    ctx->pc = 0x80033A20u;
    // 80033A20: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_80033A24:
    ctx->pc = 0x80033A24u;
    // 80033A24: sth     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80033A28:
    ctx->pc = 0x80033A28u;
    // 80033A28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033A2C:
    ctx->pc = 0x80033A2Cu;
    ctx->downcount -= 7;
    // 80033A2C: lwz     r4, -31488(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31488);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80033A30:
    ctx->pc = 0x80033A30u;
    // 80033A30: rlwinm r0, r3, 4, 20, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0x00000FF0u;
    }

label_80033A34:
    ctx->pc = 0x80033A34u;
    // 80033A34: lhzu     r3, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[3] = mem_read16(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_80033A38:
    ctx->pc = 0x80033A38u;
    // 80033A38: rlwinm r3, r3, 0, 28, 26
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFEFu;
    }

label_80033A3C:
    ctx->pc = 0x80033A3Cu;
    // 80033A3C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80033A40:
    ctx->pc = 0x80033A40u;
    // 80033A40: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80033A44:
    ctx->pc = 0x80033A44u;
    // 80033A44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033A48:
    ctx->pc = 0x80033A48u;
    ctx->downcount -= 6;
    // 80033A48: lwz     r7, -31488(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31488);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80033A4C:
    ctx->pc = 0x80033A4Cu;
    // 80033A4C: cmpwi   r3, 1
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

label_80033A50:
    ctx->pc = 0x80033A50u;
    // 80033A50: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_80033A54:
    ctx->pc = 0x80033A54u;
    // 80033A54: addi    r10, r7, 2
    ctx->gpr[10] = ctx->gpr[7] + (u32)(s32)(2);

label_80033A58:
    ctx->pc = 0x80033A58u;
    // 80033A58: lhz     r7, 2(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(2);
        ctx->gpr[7] = mem_read16(ctx, ea);
    }

label_80033A5C:
    ctx->pc = 0x80033A5Cu;
    // 80033A5C: bc    12, 2, 0x80033A6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033A6C;
        }
    }

label_80033A60:
    ctx->pc = 0x80033A60u;
    ctx->downcount -= 2;
    // 80033A60: cmpwi   r3, 3
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

label_80033A64:
    ctx->pc = 0x80033A64u;
    // 80033A64: bc    12, 2, 0x80033A6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033A6C;
        }
    }

label_80033A68:
    ctx->pc = 0x80033A68u;
    ctx->downcount -= 1;
    // 80033A68: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80033A6C:
    ctx->pc = 0x80033A6Cu;
    ctx->downcount -= 25;
    // 80033A6C: rlwinm r8, r7, 0, 0, 30
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0xFFFFFFFEu;
    }

label_80033A70:
    ctx->pc = 0x80033A70u;
    // 80033A70: subfic  r0, r3, 3
    {
        u64 res = (u64)(u32)(s32)(3) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80033A74:
    ctx->pc = 0x80033A74u;
    // 80033A74: cntlzw r7, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[7] = n;
    }

label_80033A78:
    ctx->pc = 0x80033A78u;
    // 80033A78: subfic  r0, r3, 2
    {
        u64 res = (u64)(u32)(s32)(2) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80033A7C:
    ctx->pc = 0x80033A7Cu;
    // 80033A7C: or   r8, r8, r9
    {
        ctx->gpr[8] = ctx->gpr[8] | ctx->gpr[9];
    }

label_80033A80:
    ctx->pc = 0x80033A80u;
    // 80033A80: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80033A84:
    ctx->pc = 0x80033A84u;
    // 80033A84: rlwinm r8, r8, 0, 21, 19
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[8], 0u) & 0xFFFFF7FFu;
    }

label_80033A88:
    ctx->pc = 0x80033A88u;
    // 80033A88: rlwinm r3, r7, 6, 0, 20
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[7], 6u) & 0xFFFFF800u;
    }

label_80033A8C:
    ctx->pc = 0x80033A8Cu;
    // 80033A8C: or   r3, r8, r3
    {
        ctx->gpr[3] = ctx->gpr[8] | ctx->gpr[3];
    }

label_80033A90:
    ctx->pc = 0x80033A90u;
    // 80033A90: rlwinm r3, r3, 0, 31, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFFDu;
    }

label_80033A94:
    ctx->pc = 0x80033A94u;
    // 80033A94: rlwinm r0, r0, 28, 4, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 28u) & 0x0FFFFFFEu;
    }

label_80033A98:
    ctx->pc = 0x80033A98u;
    // 80033A98: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80033A9C:
    ctx->pc = 0x80033A9Cu;
    // 80033A9C: rlwinm r3, r0, 0, 20, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF0FFFu;
    }

label_80033AA0:
    ctx->pc = 0x80033AA0u;
    // 80033AA0: rlwinm r0, r6, 12, 0, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 12u) & 0xFFFFF000u;
    }

label_80033AA4:
    ctx->pc = 0x80033AA4u;
    // 80033AA4: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80033AA8:
    ctx->pc = 0x80033AA8u;
    // 80033AA8: rlwinm r3, r0, 0, 24, 20
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFF8FFu;
    }

label_80033AAC:
    ctx->pc = 0x80033AACu;
    // 80033AAC: rlwinm r0, r4, 8, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_80033AB0:
    ctx->pc = 0x80033AB0u;
    // 80033AB0: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80033AB4:
    ctx->pc = 0x80033AB4u;
    // 80033AB4: rlwinm r3, r0, 0, 27, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF1Fu;
    }

label_80033AB8:
    ctx->pc = 0x80033AB8u;
    // 80033AB8: rlwinm r0, r5, 5, 0, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 5u) & 0xFFFFFFE0u;
    }

label_80033ABC:
    ctx->pc = 0x80033ABCu;
    // 80033ABC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80033AC0:
    ctx->pc = 0x80033AC0u;
    // 80033AC0: rlwinm r0, r0, 0, 8, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00FFFFFFu;
    }

label_80033AC4:
    ctx->pc = 0x80033AC4u;
    // 80033AC4: oris    r0, r0, 0x4100
    ctx->gpr[0] = ctx->gpr[0] | (0x4100u << 16);

label_80033AC8:
    ctx->pc = 0x80033AC8u;
    // 80033AC8: sth     r0, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80033ACC:
    ctx->pc = 0x80033ACCu;
    // 80033ACC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033AD0:
    ctx->pc = 0x80033AD0u;
    ctx->downcount -= 7;
    // 80033AD0: lwz     r4, -31488(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31488);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80033AD4:
    ctx->pc = 0x80033AD4u;
    // 80033AD4: rlwinm r0, r3, 3, 21, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 3u) & 0x000007F8u;
    }

label_80033AD8:
    ctx->pc = 0x80033AD8u;
    // 80033AD8: lhzu     r3, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[3] = mem_read16(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_80033ADC:
    ctx->pc = 0x80033ADCu;
    // 80033ADC: rlwinm r3, r3, 0, 29, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFF7u;
    }

label_80033AE0:
    ctx->pc = 0x80033AE0u;
    // 80033AE0: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80033AE4:
    ctx->pc = 0x80033AE4u;
    // 80033AE4: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80033AE8:
    ctx->pc = 0x80033AE8u;
    // 80033AE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033AEC:
    ctx->pc = 0x80033AECu;
    ctx->downcount -= 5;
    // 80033AEC: lwz     r5, -31488(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31488);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80033AF0:
    ctx->pc = 0x80033AF0u;
    // 80033AF0: rlwinm r0, r3, 8, 16, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 8u) & 0x0000FF00u;
    }

label_80033AF4:
    ctx->pc = 0x80033AF4u;
    // 80033AF4: rlwimi r0, r4, 0, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

label_80033AF8:
    ctx->pc = 0x80033AF8u;
    // 80033AF8: sth     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80033AFC:
    ctx->pc = 0x80033AFCu;
    // 80033AFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033B00:
    ctx->pc = 0x80033B00u;
    ctx->downcount -= 7;
    // 80033B00: lwz     r4, -31488(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31488);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80033B04:
    ctx->pc = 0x80033B04u;
    // 80033B04: rlwinm r0, r3, 2, 22, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0x000003FCu;
    }

label_80033B08:
    ctx->pc = 0x80033B08u;
    // 80033B08: lhzu     r3, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[3] = mem_read16(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_80033B0C:
    ctx->pc = 0x80033B0Cu;
    // 80033B0C: rlwinm r3, r3, 0, 30, 28
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFFBu;
    }

label_80033B10:
    ctx->pc = 0x80033B10u;
    // 80033B10: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80033B14:
    ctx->pc = 0x80033B14u;
    // 80033B14: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80033B18:
    ctx->pc = 0x80033B18u;
    // 80033B18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033B1C:
    ctx->pc = 0x80033B1Cu;
    ctx->downcount -= 10;
    // 80033B1C: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_80033B20:
    ctx->pc = 0x80033B20u;
    // 80033B20: lwz     r3, -31488(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31488);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033B24:
    ctx->pc = 0x80033B24u;
    // 80033B24: rlwinm r6, r0, 0, 31, 27
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF1u;
    }

label_80033B28:
    ctx->pc = 0x80033B28u;
    // 80033B28: rlwinm r0, r4, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 1u) & 0xFFFFFFFEu;
    }

label_80033B2C:
    ctx->pc = 0x80033B2Cu;
    // 80033B2C: or   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] | ctx->gpr[0];
    }

label_80033B30:
    ctx->pc = 0x80033B30u;
    // 80033B30: rlwinm r4, r0, 0, 28, 26
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFEFu;
    }

label_80033B34:
    ctx->pc = 0x80033B34u;
    // 80033B34: rlwinm r0, r5, 4, 20, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 4u) & 0x00000FF0u;
    }

label_80033B38:
    ctx->pc = 0x80033B38u;
    // 80033B38: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80033B3C:
    ctx->pc = 0x80033B3Cu;
    // 80033B3C: sth     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80033B40:
    ctx->pc = 0x80033B40u;
    // 80033B40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033B44:
    ctx->pc = 0x80033B44u;
    ctx->downcount -= 8;
    // 80033B44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80033B48:
    ctx->pc = 0x80033B48u;
    // 80033B48: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033B4C:
    ctx->pc = 0x80033B4Cu;
    // 80033B4C: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80033B50:
    ctx->pc = 0x80033B50u;
    // 80033B50: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80033B54:
    ctx->pc = 0x80033B54u;
    // 80033B54: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80033B58:
    ctx->pc = 0x80033B58u;
    // 80033B58: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80033B5C:
    ctx->pc = 0x80033B5Cu;
    // 80033B5C: lwz     r31, -31424(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31424);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80033B60:
    ctx->pc = 0x80033B60u;
    // 80033B60: bl      0x8003ECC4
    {
            ctx->lr = 0x80033B64u;
            ctx->pc = 0x8003ECC4u;
            return;
    }

label_80033B64:
    ctx->pc = 0x80033B64u;
    ctx->downcount -= 2;
    // 80033B64: stw     r30, -31424(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31424);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80033B68:
    ctx->pc = 0x80033B68u;
    // 80033B68: bl      0x8003ECEC
    {
            ctx->lr = 0x80033B6Cu;
            ctx->pc = 0x8003ECECu;
            return;
    }

label_80033B6C:
    ctx->pc = 0x80033B6Cu;
    ctx->downcount -= 8;
    // 80033B6C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80033B70:
    ctx->pc = 0x80033B70u;
    // 80033B70: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033B74:
    ctx->pc = 0x80033B74u;
    // 80033B74: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80033B78:
    ctx->pc = 0x80033B78u;
    // 80033B78: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80033B7C:
    ctx->pc = 0x80033B7Cu;
    // 80033B7C: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_80033B80:
    ctx->pc = 0x80033B80u;
    // 80033B80: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80033B84:
    ctx->pc = 0x80033B84u;
    // 80033B84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033B88:
    ctx->pc = 0x80033B88u;
    ctx->downcount -= 11;
    // 80033B88: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80033B8C:
    ctx->pc = 0x80033B8Cu;
    // 80033B8C: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033B90:
    ctx->pc = 0x80033B90u;
    // 80033B90: stwu     r1, -736(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-736);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80033B94:
    ctx->pc = 0x80033B94u;
    // 80033B94: stw     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80033B98:
    ctx->pc = 0x80033B98u;
    // 80033B98: stw     r30, 728(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(728);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80033B9C:
    ctx->pc = 0x80033B9Cu;
    // 80033B9C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80033BA0:
    ctx->pc = 0x80033BA0u;
    // 80033BA0: lwz     r0, -31424(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31424);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033BA4:
    ctx->pc = 0x80033BA4u;
    // 80033BA4: lwz     r3, -31488(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31488);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033BA8:
    ctx->pc = 0x80033BA8u;
    // 80033BA8: cmplwi  r0, 0x0000
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

label_80033BAC:
    ctx->pc = 0x80033BACu;
    // 80033BAC: lhz     r31, 14(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14);
        ctx->gpr[31] = mem_read16(ctx, ea);
    }

label_80033BB0:
    ctx->pc = 0x80033BB0u;
    // 80033BB0: bc    12, 2, 0x80033BE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033BE4;
        }
    }

label_80033BB4:
    ctx->pc = 0x80033BB4u;
    ctx->downcount -= 2;
    // 80033BB4: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_80033BB8:
    ctx->pc = 0x80033BB8u;
    // 80033BB8: bl      0x8003D464
    {
            ctx->lr = 0x80033BBCu;
            ctx->pc = 0x8003D464u;
            return;
    }

label_80033BBC:
    ctx->pc = 0x80033BBCu;
    ctx->downcount -= 2;
    // 80033BBC: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_80033BC0:
    ctx->pc = 0x80033BC0u;
    // 80033BC0: bl      0x8003D29C
    {
            ctx->lr = 0x80033BC4u;
            ctx->pc = 0x8003D29Cu;
            return;
    }

label_80033BC4:
    ctx->pc = 0x80033BC4u;
    ctx->downcount -= 5;
    // 80033BC4: lwz     r12, -31424(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31424);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80033BC8:
    ctx->pc = 0x80033BC8u;
    // 80033BC8: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_80033BCC:
    ctx->pc = 0x80033BCCu;
    // 80033BCC: mtlr    r12
    ctx->lr = ctx->gpr[12];

label_80033BD0:
    ctx->pc = 0x80033BD0u;
    // 80033BD0: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80033BD4u;
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033BD4:
    ctx->pc = 0x80033BD4u;
    ctx->downcount -= 2;
    // 80033BD4: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_80033BD8:
    ctx->pc = 0x80033BD8u;
    // 80033BD8: bl      0x8003D464
    {
            ctx->lr = 0x80033BDCu;
            ctx->pc = 0x8003D464u;
            return;
    }

label_80033BDC:
    ctx->pc = 0x80033BDCu;
    ctx->downcount -= 2;
    // 80033BDC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80033BE0:
    ctx->pc = 0x80033BE0u;
    // 80033BE0: bl      0x8003D29C
    {
            ctx->lr = 0x80033BE4u;
            ctx->pc = 0x8003D29Cu;
            return;
    }

label_80033BE4:
    ctx->pc = 0x80033BE4u;
    ctx->downcount -= 12;
    // 80033BE4: lwz     r3, -31488(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31488);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033BE8:
    ctx->pc = 0x80033BE8u;
    // 80033BE8: lhzu     r0, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read16(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_80033BEC:
    ctx->pc = 0x80033BECu;
    // 80033BEC: rlwinm r0, r0, 0, 30, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFBu;
    }

label_80033BF0:
    ctx->pc = 0x80033BF0u;
    // 80033BF0: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_80033BF4:
    ctx->pc = 0x80033BF4u;
    // 80033BF4: sth     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80033BF8:
    ctx->pc = 0x80033BF8u;
    // 80033BF8: lwz     r0, 740(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(740);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033BFC:
    ctx->pc = 0x80033BFCu;
    // 80033BFC: lwz     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80033C00:
    ctx->pc = 0x80033C00u;
    // 80033C00: lwz     r30, 728(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(728);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80033C04:
    ctx->pc = 0x80033C04u;
    // 80033C04: addi    r1, r1, 736
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(736);

label_80033C08:
    ctx->pc = 0x80033C08u;
    // 80033C08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80033C0C:
    ctx->pc = 0x80033C0Cu;
    // 80033C0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033C10:
    ctx->pc = 0x80033C10u;
    ctx->downcount -= 8;
    // 80033C10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80033C14:
    ctx->pc = 0x80033C14u;
    // 80033C14: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033C18:
    ctx->pc = 0x80033C18u;
    // 80033C18: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80033C1C:
    ctx->pc = 0x80033C1Cu;
    // 80033C1C: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80033C20:
    ctx->pc = 0x80033C20u;
    // 80033C20: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80033C24:
    ctx->pc = 0x80033C24u;
    // 80033C24: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80033C28:
    ctx->pc = 0x80033C28u;
    // 80033C28: lwz     r31, -31420(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31420);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80033C2C:
    ctx->pc = 0x80033C2Cu;
    // 80033C2C: bl      0x8003ECC4
    {
            ctx->lr = 0x80033C30u;
            ctx->pc = 0x8003ECC4u;
            return;
    }

label_80033C30:
    ctx->pc = 0x80033C30u;
    ctx->downcount -= 2;
    // 80033C30: stw     r30, -31420(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31420);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80033C34:
    ctx->pc = 0x80033C34u;
    // 80033C34: bl      0x8003ECEC
    {
            ctx->lr = 0x80033C38u;
            ctx->pc = 0x8003ECECu;
            return;
    }

label_80033C38:
    ctx->pc = 0x80033C38u;
    ctx->downcount -= 8;
    // 80033C38: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80033C3C:
    ctx->pc = 0x80033C3Cu;
    // 80033C3C: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033C40:
    ctx->pc = 0x80033C40u;
    // 80033C40: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80033C44:
    ctx->pc = 0x80033C44u;
    // 80033C44: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80033C48:
    ctx->pc = 0x80033C48u;
    // 80033C48: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_80033C4C:
    ctx->pc = 0x80033C4Cu;
    // 80033C4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80033C50:
    ctx->pc = 0x80033C50u;
    // 80033C50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033C54:
    ctx->pc = 0x80033C54u;
    ctx->downcount -= 15;
    // 80033C54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80033C58:
    ctx->pc = 0x80033C58u;
    // 80033C58: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80033C5C:
    ctx->pc = 0x80033C5Cu;
    // 80033C5C: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033C60:
    ctx->pc = 0x80033C60u;
    // 80033C60: stwu     r1, -736(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-736);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80033C64:
    ctx->pc = 0x80033C64u;
    // 80033C64: stw     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80033C68:
    ctx->pc = 0x80033C68u;
    // 80033C68: addi    r31, r4, 0
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(0);

label_80033C6C:
    ctx->pc = 0x80033C6Cu;
    // 80033C6C: lwz     r5, -31488(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31488);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80033C70:
    ctx->pc = 0x80033C70u;
    // 80033C70: lhz     r0, 10(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80033C74:
    ctx->pc = 0x80033C74u;
    // 80033C74: rlwinm r0, r0, 0, 29, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF7u;
    }

label_80033C78:
    ctx->pc = 0x80033C78u;
    // 80033C78: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_80033C7C:
    ctx->pc = 0x80033C7Cu;
    // 80033C7C: sth     r0, 10(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80033C80:
    ctx->pc = 0x80033C80u;
    // 80033C80: lwz     r0, -31420(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31420);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033C84:
    ctx->pc = 0x80033C84u;
    // 80033C84: stb     r3, -31416(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31416);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80033C88:
    ctx->pc = 0x80033C88u;
    // 80033C88: cmplwi  r0, 0x0000
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

label_80033C8C:
    ctx->pc = 0x80033C8Cu;
    // 80033C8C: bc    12, 2, 0x80033CBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033CBC;
        }
    }

label_80033C90:
    ctx->pc = 0x80033C90u;
    ctx->downcount -= 2;
    // 80033C90: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_80033C94:
    ctx->pc = 0x80033C94u;
    // 80033C94: bl      0x8003D464
    {
            ctx->lr = 0x80033C98u;
            ctx->pc = 0x8003D464u;
            return;
    }

label_80033C98:
    ctx->pc = 0x80033C98u;
    ctx->downcount -= 2;
    // 80033C98: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_80033C9C:
    ctx->pc = 0x80033C9Cu;
    // 80033C9C: bl      0x8003D29C
    {
            ctx->lr = 0x80033CA0u;
            ctx->pc = 0x8003D29Cu;
            return;
    }

label_80033CA0:
    ctx->pc = 0x80033CA0u;
    ctx->downcount -= 4;
    // 80033CA0: lwz     r12, -31420(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31420);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80033CA4:
    ctx->pc = 0x80033CA4u;
    // 80033CA4: mtlr    r12
    ctx->lr = ctx->gpr[12];

label_80033CA8:
    ctx->pc = 0x80033CA8u;
    // 80033CA8: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80033CACu;
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033CAC:
    ctx->pc = 0x80033CACu;
    ctx->downcount -= 2;
    // 80033CAC: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_80033CB0:
    ctx->pc = 0x80033CB0u;
    // 80033CB0: bl      0x8003D464
    {
            ctx->lr = 0x80033CB4u;
            ctx->pc = 0x8003D464u;
            return;
    }

label_80033CB4:
    ctx->pc = 0x80033CB4u;
    ctx->downcount -= 2;
    // 80033CB4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80033CB8:
    ctx->pc = 0x80033CB8u;
    // 80033CB8: bl      0x8003D29C
    {
            ctx->lr = 0x80033CBCu;
            ctx->pc = 0x8003D29Cu;
            return;
    }

label_80033CBC:
    ctx->pc = 0x80033CBCu;
    ctx->downcount -= 2;
    // 80033CBC: addi    r3, r13, -31412
    ctx->gpr[3] = ctx->gpr[13] + (u32)(s32)(-31412);

label_80033CC0:
    ctx->pc = 0x80033CC0u;
    // 80033CC0: bl      0x800429EC
    {
            ctx->lr = 0x80033CC4u;
            ctx->pc = 0x800429ECu;
            return;
    }

label_80033CC4:
    ctx->pc = 0x80033CC4u;
    ctx->downcount -= 6;
    // 80033CC4: lwz     r0, 740(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(740);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033CC8:
    ctx->pc = 0x80033CC8u;
    // 80033CC8: lwz     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80033CCC:
    ctx->pc = 0x80033CCCu;
    // 80033CCC: addi    r1, r1, 736
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(736);

label_80033CD0:
    ctx->pc = 0x80033CD0u;
    // 80033CD0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80033CD4:
    ctx->pc = 0x80033CD4u;
    // 80033CD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033CD8:
    ctx->pc = 0x80033CD8u;
    ctx->downcount -= 7;
    // 80033CD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80033CDC:
    ctx->pc = 0x80033CDCu;
    // 80033CDC: lis     r3, -32765
    ctx->gpr[3] = ((u32)(s32)(-32765) << 16);

label_80033CE0:
    ctx->pc = 0x80033CE0u;
    // 80033CE0: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033CE4:
    ctx->pc = 0x80033CE4u;
    // 80033CE4: addi    r4, r3, 15240
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15240);

label_80033CE8:
    ctx->pc = 0x80033CE8u;
    // 80033CE8: li      r3, 18
    ctx->gpr[3] = (u32)(s32)(18);

label_80033CEC:
    ctx->pc = 0x80033CECu;
    // 80033CEC: stwu     r1, -8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80033CF0:
    ctx->pc = 0x80033CF0u;
    // 80033CF0: bl      0x8003ED10
    {
            ctx->lr = 0x80033CF4u;
            ctx->pc = 0x8003ED10u;
            return;
    }

label_80033CF4:
    ctx->pc = 0x80033CF4u;
    ctx->downcount -= 4;
    // 80033CF4: lis     r3, -32765
    ctx->gpr[3] = ((u32)(s32)(-32765) << 16);

label_80033CF8:
    ctx->pc = 0x80033CF8u;
    // 80033CF8: addi    r4, r3, 15444
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15444);

label_80033CFC:
    ctx->pc = 0x80033CFCu;
    // 80033CFC: li      r3, 19
    ctx->gpr[3] = (u32)(s32)(19);

label_80033D00:
    ctx->pc = 0x80033D00u;
    // 80033D00: bl      0x8003ED10
    {
            ctx->lr = 0x80033D04u;
            ctx->pc = 0x8003ED10u;
            return;
    }

label_80033D04:
    ctx->pc = 0x80033D04u;
    ctx->downcount -= 2;
    // 80033D04: addi    r3, r13, -31412
    ctx->gpr[3] = ctx->gpr[13] + (u32)(s32)(-31412);

label_80033D08:
    ctx->pc = 0x80033D08u;
    // 80033D08: bl      0x80041B28
    {
            ctx->lr = 0x80033D0Cu;
            ctx->pc = 0x80041B28u;
            return;
    }

label_80033D0C:
    ctx->pc = 0x80033D0Cu;
    ctx->downcount -= 2;
    // 80033D0C: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_80033D10:
    ctx->pc = 0x80033D10u;
    // 80033D10: bl      0x8003F114
    {
            ctx->lr = 0x80033D14u;
            ctx->pc = 0x8003F114u;
            return;
    }

label_80033D14:
    ctx->pc = 0x80033D14u;
    ctx->downcount -= 2;
    // 80033D14: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_80033D18:
    ctx->pc = 0x80033D18u;
    // 80033D18: bl      0x8003F114
    {
            ctx->lr = 0x80033D1Cu;
            ctx->pc = 0x8003F114u;
            return;
    }

label_80033D1C:
    ctx->pc = 0x80033D1Cu;
    ctx->downcount -= 16;
    // 80033D1C: lwz     r3, -31488(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31488);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033D20:
    ctx->pc = 0x80033D20u;
    // 80033D20: lhzu     r0, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read16(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_80033D24:
    ctx->pc = 0x80033D24u;
    // 80033D24: rlwinm r0, r0, 0, 30, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFBu;
    }

label_80033D28:
    ctx->pc = 0x80033D28u;
    // 80033D28: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_80033D2C:
    ctx->pc = 0x80033D2Cu;
    // 80033D2C: rlwinm r0, r0, 0, 29, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF7u;
    }

label_80033D30:
    ctx->pc = 0x80033D30u;
    // 80033D30: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_80033D34:
    ctx->pc = 0x80033D34u;
    // 80033D34: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_80033D38:
    ctx->pc = 0x80033D38u;
    // 80033D38: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_80033D3C:
    ctx->pc = 0x80033D3Cu;
    // 80033D3C: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_80033D40:
    ctx->pc = 0x80033D40u;
    // 80033D40: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_80033D44:
    ctx->pc = 0x80033D44u;
    // 80033D44: sth     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80033D48:
    ctx->pc = 0x80033D48u;
    // 80033D48: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033D4C:
    ctx->pc = 0x80033D4Cu;
    // 80033D4C: addi    r1, r1, 8
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(8);

label_80033D50:
    ctx->pc = 0x80033D50u;
    // 80033D50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80033D54:
    ctx->pc = 0x80033D54u;
    // 80033D54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033D58:
    ctx->pc = 0x80033D58u;
    ctx->downcount -= 7;
    // 80033D58: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80033D5C:
    ctx->pc = 0x80033D5Cu;
    // 80033D5C: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033D60:
    ctx->pc = 0x80033D60u;
    // 80033D60: stwu     r1, -8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80033D64:
    ctx->pc = 0x80033D64u;
    // 80033D64: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033D68:
    ctx->pc = 0x80033D68u;
    // 80033D68: lwz     r0, 1268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033D6C:
    ctx->pc = 0x80033D6Cu;
    // 80033D6C: rlwinm. r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80033D70:
    ctx->pc = 0x80033D70u;
    // 80033D70: bc    12, 2, 0x80033D78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033D78;
        }
    }

label_80033D74:
    ctx->pc = 0x80033D74u;
    ctx->downcount -= 1;
    // 80033D74: bl      0x80035B9C
    {
            ctx->lr = 0x80033D78u;
            ctx->pc = 0x80035B9Cu;
            return;
    }

label_80033D78:
    ctx->pc = 0x80033D78u;
    ctx->downcount -= 4;
    // 80033D78: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033D7C:
    ctx->pc = 0x80033D7Cu;
    // 80033D7C: lwz     r0, 1268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033D80:
    ctx->pc = 0x80033D80u;
    // 80033D80: rlwinm. r0, r0, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80033D84:
    ctx->pc = 0x80033D84u;
    // 80033D84: bc    12, 2, 0x80033D8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033D8C;
        }
    }

label_80033D88:
    ctx->pc = 0x80033D88u;
    ctx->downcount -= 1;
    // 80033D88: bl      0x800364B8
    {
            ctx->lr = 0x80033D8Cu;
            ctx->pc = 0x800364B8u;
            return;
    }

label_80033D8C:
    ctx->pc = 0x80033D8Cu;
    ctx->downcount -= 4;
    // 80033D8C: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033D90:
    ctx->pc = 0x80033D90u;
    // 80033D90: lwz     r0, 1268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033D94:
    ctx->pc = 0x80033D94u;
    // 80033D94: rlwinm. r0, r0, 0, 29, 29
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

label_80033D98:
    ctx->pc = 0x80033D98u;
    // 80033D98: bc    12, 2, 0x80033DA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033DA0;
        }
    }

label_80033D9C:
    ctx->pc = 0x80033D9Cu;
    ctx->downcount -= 1;
    // 80033D9C: bl      0x80034128
    {
            ctx->lr = 0x80033DA0u;
            goto label_80034128;
    }

label_80033DA0:
    ctx->pc = 0x80033DA0u;
    ctx->downcount -= 4;
    // 80033DA0: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033DA4:
    ctx->pc = 0x80033DA4u;
    // 80033DA4: lwz     r0, 1268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033DA8:
    ctx->pc = 0x80033DA8u;
    // 80033DA8: rlwinm. r0, r0, 0, 28, 28
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

label_80033DAC:
    ctx->pc = 0x80033DACu;
    // 80033DAC: bc    12, 2, 0x80033DB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033DB4;
        }
    }

label_80033DB0:
    ctx->pc = 0x80033DB0u;
    ctx->downcount -= 1;
    // 80033DB0: bl      0x80032A60
    {
            ctx->lr = 0x80033DB4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80032A60u;
                return;
            }
            goto label_80032A60;
    }

label_80033DB4:
    ctx->pc = 0x80033DB4u;
    ctx->downcount -= 4;
    // 80033DB4: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033DB8:
    ctx->pc = 0x80033DB8u;
    // 80033DB8: lwz     r0, 1268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033DBC:
    ctx->pc = 0x80033DBCu;
    // 80033DBC: rlwinm. r0, r0, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80033DC0:
    ctx->pc = 0x80033DC0u;
    // 80033DC0: bc    12, 2, 0x80033DC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033DC8;
        }
    }

label_80033DC4:
    ctx->pc = 0x80033DC4u;
    ctx->downcount -= 1;
    // 80033DC4: bl      0x800332E0
    {
            ctx->lr = 0x80033DC8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800332E0u;
                return;
            }
            goto label_800332E0;
    }

label_80033DC8:
    ctx->pc = 0x80033DC8u;
    ctx->downcount -= 4;
    // 80033DC8: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033DCC:
    ctx->pc = 0x80033DCCu;
    // 80033DCC: lwz     r0, 1268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033DD0:
    ctx->pc = 0x80033DD0u;
    // 80033DD0: rlwinm. r0, r0, 0, 27, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000018u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80033DD4:
    ctx->pc = 0x80033DD4u;
    // 80033DD4: bc    12, 2, 0x80033DDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033DDC;
        }
    }

label_80033DD8:
    ctx->pc = 0x80033DD8u;
    ctx->downcount -= 1;
    // 80033DD8: bl      0x80032AB4
    {
            ctx->lr = 0x80033DDCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80032AB4u;
                return;
            }
            goto label_80032AB4;
    }

label_80033DDC:
    ctx->pc = 0x80033DDCu;
    ctx->downcount -= 8;
    // 80033DDC: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033DE0:
    ctx->pc = 0x80033DE0u;
    // 80033DE0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80033DE4:
    ctx->pc = 0x80033DE4u;
    // 80033DE4: stw     r0, 1268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033DE8:
    ctx->pc = 0x80033DE8u;
    // 80033DE8: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033DEC:
    ctx->pc = 0x80033DECu;
    // 80033DEC: addi    r1, r1, 8
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(8);

label_80033DF0:
    ctx->pc = 0x80033DF0u;
    // 80033DF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80033DF4:
    ctx->pc = 0x80033DF4u;
    // 80033DF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033DF8:
    ctx->pc = 0x80033DF8u;
    ctx->downcount -= 13;
    // 80033DF8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80033DFC:
    ctx->pc = 0x80033DFCu;
    // 80033DFC: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033E00:
    ctx->pc = 0x80033E00u;
    // 80033E00: stwu     r1, -40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-40);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80033E04:
    ctx->pc = 0x80033E04u;
    // 80033E04: stw     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80033E08:
    ctx->pc = 0x80033E08u;
    // 80033E08: addi    r31, r5, 0
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(0);

label_80033E0C:
    ctx->pc = 0x80033E0Cu;
    // 80033E0C: stw     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80033E10:
    ctx->pc = 0x80033E10u;
    // 80033E10: addi    r30, r4, 0
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(0);

label_80033E14:
    ctx->pc = 0x80033E14u;
    // 80033E14: stw     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80033E18:
    ctx->pc = 0x80033E18u;
    // 80033E18: addi    r29, r3, 0
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(0);

label_80033E1C:
    ctx->pc = 0x80033E1Cu;
    // 80033E1C: lwz     r6, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80033E20:
    ctx->pc = 0x80033E20u;
    // 80033E20: lwz     r0, 1268(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033E24:
    ctx->pc = 0x80033E24u;
    // 80033E24: cmplwi  r0, 0x0000
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

label_80033E28:
    ctx->pc = 0x80033E28u;
    // 80033E28: bc    12, 2, 0x80033EA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033EA8;
        }
    }

label_80033E2C:
    ctx->pc = 0x80033E2Cu;
    ctx->downcount -= 2;
    // 80033E2C: rlwinm. r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80033E30:
    ctx->pc = 0x80033E30u;
    // 80033E30: bc    12, 2, 0x80033E38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033E38;
        }
    }

label_80033E34:
    ctx->pc = 0x80033E34u;
    ctx->downcount -= 1;
    // 80033E34: bl      0x80035B9C
    {
            ctx->lr = 0x80033E38u;
            ctx->pc = 0x80035B9Cu;
            return;
    }

label_80033E38:
    ctx->pc = 0x80033E38u;
    ctx->downcount -= 4;
    // 80033E38: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033E3C:
    ctx->pc = 0x80033E3Cu;
    // 80033E3C: lwz     r0, 1268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033E40:
    ctx->pc = 0x80033E40u;
    // 80033E40: rlwinm. r0, r0, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80033E44:
    ctx->pc = 0x80033E44u;
    // 80033E44: bc    12, 2, 0x80033E4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033E4C;
        }
    }

label_80033E48:
    ctx->pc = 0x80033E48u;
    ctx->downcount -= 1;
    // 80033E48: bl      0x800364B8
    {
            ctx->lr = 0x80033E4Cu;
            ctx->pc = 0x800364B8u;
            return;
    }

label_80033E4C:
    ctx->pc = 0x80033E4Cu;
    ctx->downcount -= 4;
    // 80033E4C: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033E50:
    ctx->pc = 0x80033E50u;
    // 80033E50: lwz     r0, 1268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033E54:
    ctx->pc = 0x80033E54u;
    // 80033E54: rlwinm. r0, r0, 0, 29, 29
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

label_80033E58:
    ctx->pc = 0x80033E58u;
    // 80033E58: bc    12, 2, 0x80033E60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033E60;
        }
    }

label_80033E5C:
    ctx->pc = 0x80033E5Cu;
    ctx->downcount -= 1;
    // 80033E5C: bl      0x80034128
    {
            ctx->lr = 0x80033E60u;
            goto label_80034128;
    }

label_80033E60:
    ctx->pc = 0x80033E60u;
    ctx->downcount -= 4;
    // 80033E60: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033E64:
    ctx->pc = 0x80033E64u;
    // 80033E64: lwz     r0, 1268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033E68:
    ctx->pc = 0x80033E68u;
    // 80033E68: rlwinm. r0, r0, 0, 28, 28
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

label_80033E6C:
    ctx->pc = 0x80033E6Cu;
    // 80033E6C: bc    12, 2, 0x80033E74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033E74;
        }
    }

label_80033E70:
    ctx->pc = 0x80033E70u;
    ctx->downcount -= 1;
    // 80033E70: bl      0x80032A60
    {
            ctx->lr = 0x80033E74u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80032A60u;
                return;
            }
            goto label_80032A60;
    }

label_80033E74:
    ctx->pc = 0x80033E74u;
    ctx->downcount -= 4;
    // 80033E74: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033E78:
    ctx->pc = 0x80033E78u;
    // 80033E78: lwz     r0, 1268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033E7C:
    ctx->pc = 0x80033E7Cu;
    // 80033E7C: rlwinm. r0, r0, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80033E80:
    ctx->pc = 0x80033E80u;
    // 80033E80: bc    12, 2, 0x80033E88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033E88;
        }
    }

label_80033E84:
    ctx->pc = 0x80033E84u;
    ctx->downcount -= 1;
    // 80033E84: bl      0x800332E0
    {
            ctx->lr = 0x80033E88u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800332E0u;
                return;
            }
            goto label_800332E0;
    }

label_80033E88:
    ctx->pc = 0x80033E88u;
    ctx->downcount -= 4;
    // 80033E88: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033E8C:
    ctx->pc = 0x80033E8Cu;
    // 80033E8C: lwz     r0, 1268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033E90:
    ctx->pc = 0x80033E90u;
    // 80033E90: rlwinm. r0, r0, 0, 27, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000018u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80033E94:
    ctx->pc = 0x80033E94u;
    // 80033E94: bc    12, 2, 0x80033E9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033E9C;
        }
    }

label_80033E98:
    ctx->pc = 0x80033E98u;
    ctx->downcount -= 1;
    // 80033E98: bl      0x80032AB4
    {
            ctx->lr = 0x80033E9Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80032AB4u;
                return;
            }
            goto label_80032AB4;
    }

label_80033E9C:
    ctx->pc = 0x80033E9Cu;
    ctx->downcount -= 3;
    // 80033E9C: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033EA0:
    ctx->pc = 0x80033EA0u;
    // 80033EA0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80033EA4:
    ctx->pc = 0x80033EA4u;
    // 80033EA4: stw     r0, 1268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033EA8:
    ctx->pc = 0x80033EA8u;
    ctx->downcount -= 4;
    // 80033EA8: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033EAC:
    ctx->pc = 0x80033EACu;
    // 80033EAC: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033EB0:
    ctx->pc = 0x80033EB0u;
    // 80033EB0: cmplwi  r0, 0x0000
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

label_80033EB4:
    ctx->pc = 0x80033EB4u;
    // 80033EB4: bc    4, 2, 0x80033EBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80033EBC;
        }
    }

label_80033EB8:
    ctx->pc = 0x80033EB8u;
    ctx->downcount -= 1;
    // 80033EB8: bl      0x80033EE8
    {
            ctx->lr = 0x80033EBCu;
            goto label_80033EE8;
    }

label_80033EBC:
    ctx->pc = 0x80033EBCu;
    ctx->downcount -= 12;
    // 80033EBC: or   r0, r30, r29
    {
        ctx->gpr[0] = ctx->gpr[30] | ctx->gpr[29];
    }

label_80033EC0:
    ctx->pc = 0x80033EC0u;
    // 80033EC0: lis     r3, -13311
    ctx->gpr[3] = ((u32)(s32)(-13311) << 16);

label_80033EC4:
    ctx->pc = 0x80033EC4u;
    // 80033EC4: stb     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80033EC8:
    ctx->pc = 0x80033EC8u;
    // 80033EC8: sth     r31, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_80033ECC:
    ctx->pc = 0x80033ECCu;
    // 80033ECC: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033ED0:
    ctx->pc = 0x80033ED0u;
    // 80033ED0: lwz     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80033ED4:
    ctx->pc = 0x80033ED4u;
    // 80033ED4: lwz     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80033ED8:
    ctx->pc = 0x80033ED8u;
    // 80033ED8: lwz     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80033EDC:
    ctx->pc = 0x80033EDCu;
    // 80033EDC: addi    r1, r1, 40
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(40);

label_80033EE0:
    ctx->pc = 0x80033EE0u;
    // 80033EE0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80033EE4:
    ctx->pc = 0x80033EE4u;
    // 80033EE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033EE8:
    ctx->pc = 0x80033EE8u;
    ctx->downcount -= 17;
    // 80033EE8: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033EEC:
    ctx->pc = 0x80033EECu;
    // 80033EEC: li      r0, 152
    ctx->gpr[0] = (u32)(s32)(152);

label_80033EF0:
    ctx->pc = 0x80033EF0u;
    // 80033EF0: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_80033EF4:
    ctx->pc = 0x80033EF4u;
    // 80033EF4: lhz     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_80033EF8:
    ctx->pc = 0x80033EF8u;
    // 80033EF8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80033EFC:
    ctx->pc = 0x80033EFCu;
    // 80033EFC: lhz     r3, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80033F00:
    ctx->pc = 0x80033F00u;
    // 80033F00: mullw   r7, r6, r3
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[7] = (u32)product;
    }

label_80033F04:
    ctx->pc = 0x80033F04u;
    // 80033F04: stb     r0, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80033F08:
    ctx->pc = 0x80033F08u;
    // 80033F08: sth     r6, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_80033F0C:
    ctx->pc = 0x80033F0Cu;
    // 80033F0C: addi    r3, r7, 3
    ctx->gpr[3] = ctx->gpr[7] + (u32)(s32)(3);

label_80033F10:
    ctx->pc = 0x80033F10u;
    // 80033F10: cmplwi  r7, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80033F14:
    ctx->pc = 0x80033F14u;
    // 80033F14: rlwinm r3, r3, 30, 2, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 30u) & 0x3FFFFFFFu;
    }

label_80033F18:
    ctx->pc = 0x80033F18u;
    // 80033F18: bc    4, 1, 0x80033F60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80033F60;
        }
    }

label_80033F1C:
    ctx->pc = 0x80033F1Cu;
    ctx->downcount -= 4;
    // 80033F1C: rlwinm. r0, r3, 29, 3, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 29u) & 0x1FFFFFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80033F20:
    ctx->pc = 0x80033F20u;
    // 80033F20: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80033F24:
    ctx->pc = 0x80033F24u;
    // 80033F24: bc    12, 2, 0x80033F54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033F54;
        }
    }

label_80033F28:
    loop_80033F28(ctx);
    if (ctx->pc == 0x80033F4Cu) goto label_80033F4C;
    return;
label_80033F2C:
    ctx->pc = 0x80033F2Cu;
    // 80033F2C: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80033F30:
    ctx->pc = 0x80033F30u;
    // 80033F30: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80033F34:
    ctx->pc = 0x80033F34u;
    // 80033F34: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80033F38:
    ctx->pc = 0x80033F38u;
    // 80033F38: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80033F3C:
    ctx->pc = 0x80033F3Cu;
    // 80033F3C: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80033F40:
    ctx->pc = 0x80033F40u;
    // 80033F40: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80033F44:
    ctx->pc = 0x80033F44u;
    // 80033F44: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80033F48:
    // 80033F48: bc    16, 0, 0x80033F28
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80033F28u;
                return;
            }
            goto label_80033F28;
        }
    }

label_80033F4C:
    ctx->pc = 0x80033F4Cu;
    ctx->downcount -= 2;
    // 80033F4C: andi.   r3, r3, 0x0007
    {
        ctx->gpr[3] = ctx->gpr[3] & 0x0007u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80033F50:
    ctx->pc = 0x80033F50u;
    // 80033F50: bc    12, 2, 0x80033F60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80033F60;
        }
    }

label_80033F54:
    ctx->pc = 0x80033F54u;
    ctx->downcount -= 2;
    // 80033F54: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_80033F58:
    loop_80033F58(ctx);
    if (ctx->pc == 0x80033F60u) goto label_80033F60;
    return;
label_80033F5C:
    // 80033F5C: bc    16, 0, 0x80033F58
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80033F58u;
                return;
            }
            goto label_80033F58;
        }
    }

label_80033F60:
    ctx->pc = 0x80033F60u;
    ctx->downcount -= 4;
    // 80033F60: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033F64:
    ctx->pc = 0x80033F64u;
    // 80033F64: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80033F68:
    ctx->pc = 0x80033F68u;
    // 80033F68: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80033F6C:
    ctx->pc = 0x80033F6Cu;
    // 80033F6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033F70:
    ctx->pc = 0x80033F70u;
    ctx->downcount -= 18;
    // 80033F70: lwz     r7, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80033F74:
    ctx->pc = 0x80033F74u;
    // 80033F74: rlwinm r6, r4, 16, 0, 15
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_80033F78:
    ctx->pc = 0x80033F78u;
    // 80033F78: li      r5, 97
    ctx->gpr[5] = (u32)(s32)(97);

label_80033F7C:
    ctx->pc = 0x80033F7Cu;
    // 80033F7C: lwz     r0, 124(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033F80:
    ctx->pc = 0x80033F80u;
    // 80033F80: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_80033F84:
    ctx->pc = 0x80033F84u;
    // 80033F84: rlwinm r0, r0, 0, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF00u;
    }

label_80033F88:
    ctx->pc = 0x80033F88u;
    // 80033F88: rlwimi r0, r3, 0, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

label_80033F8C:
    ctx->pc = 0x80033F8Cu;
    // 80033F8C: stw     r0, 124(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033F90:
    ctx->pc = 0x80033F90u;
    // 80033F90: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80033F94:
    ctx->pc = 0x80033F94u;
    // 80033F94: lwz     r3, 124(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033F98:
    ctx->pc = 0x80033F98u;
    // 80033F98: rlwinm r3, r3, 0, 16, 12
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFF8FFFFu;
    }

label_80033F9C:
    ctx->pc = 0x80033F9Cu;
    // 80033F9C: or   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] | ctx->gpr[6];
    }

label_80033FA0:
    ctx->pc = 0x80033FA0u;
    // 80033FA0: stw     r3, 124(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80033FA4:
    ctx->pc = 0x80033FA4u;
    // 80033FA4: stb     r5, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80033FA8:
    ctx->pc = 0x80033FA8u;
    // 80033FA8: lwz     r3, 124(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033FAC:
    ctx->pc = 0x80033FACu;
    // 80033FAC: stw     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80033FB0:
    ctx->pc = 0x80033FB0u;
    // 80033FB0: sth     r0, 2(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80033FB4:
    ctx->pc = 0x80033FB4u;
    // 80033FB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80033FB8:
    ctx->pc = 0x80033FB8u;
    ctx->downcount -= 18;
    // 80033FB8: lwz     r7, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80033FBC:
    ctx->pc = 0x80033FBCu;
    // 80033FBC: rlwinm r6, r4, 19, 0, 12
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[4], 19u) & 0xFFF80000u;
    }

label_80033FC0:
    ctx->pc = 0x80033FC0u;
    // 80033FC0: li      r5, 97
    ctx->gpr[5] = (u32)(s32)(97);

label_80033FC4:
    ctx->pc = 0x80033FC4u;
    // 80033FC4: lwz     r0, 124(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80033FC8:
    ctx->pc = 0x80033FC8u;
    // 80033FC8: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_80033FCC:
    ctx->pc = 0x80033FCCu;
    // 80033FCC: rlwinm r0, r0, 0, 24, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF00FFu;
    }

label_80033FD0:
    ctx->pc = 0x80033FD0u;
    // 80033FD0: rlwimi r0, r3, 8, 16, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 8u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x0000FF00u) | (rot & 0x0000FF00u);
    }

label_80033FD4:
    ctx->pc = 0x80033FD4u;
    // 80033FD4: stw     r0, 124(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80033FD8:
    ctx->pc = 0x80033FD8u;
    // 80033FD8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80033FDC:
    ctx->pc = 0x80033FDCu;
    // 80033FDC: lwz     r3, 124(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033FE0:
    ctx->pc = 0x80033FE0u;
    // 80033FE0: rlwinm r3, r3, 0, 13, 9
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFC7FFFFu;
    }

label_80033FE4:
    ctx->pc = 0x80033FE4u;
    // 80033FE4: or   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] | ctx->gpr[6];
    }

label_80033FE8:
    ctx->pc = 0x80033FE8u;
    // 80033FE8: stw     r3, 124(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80033FEC:
    ctx->pc = 0x80033FECu;
    // 80033FEC: stb     r5, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80033FF0:
    ctx->pc = 0x80033FF0u;
    // 80033FF0: lwz     r3, 124(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80033FF4:
    ctx->pc = 0x80033FF4u;
    // 80033FF4: stw     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80033FF8:
    ctx->pc = 0x80033FF8u;
    // 80033FF8: sth     r0, 2(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80033FFC:
    ctx->pc = 0x80033FFCu;
    // 80033FFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034000:
    ctx->pc = 0x80034000u;
    ctx->downcount -= 23;
    // 80034000: lwz     r6, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80034004:
    ctx->pc = 0x80034004u;
    // 80034004: rlwinm r8, r3, 2, 0, 29
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80034008:
    ctx->pc = 0x80034008u;
    // 80034008: add   r7, r6, r8
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_8003400C:
    ctx->pc = 0x8003400Cu;
    // 8003400C: lwz     r0, 184(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80034010:
    ctx->pc = 0x80034010u;
    // 80034010: add   r9, r6, r8
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80034014:
    ctx->pc = 0x80034014u;
    // 80034014: rlwinm r3, r0, 0, 14, 12
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFBFFFFu;
    }

label_80034018:
    ctx->pc = 0x80034018u;
    // 80034018: rlwinm r0, r4, 18, 6, 13
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 18u) & 0x03FC0000u;
    }

label_8003401C:
    ctx->pc = 0x8003401Cu;
    // 8003401C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80034020:
    ctx->pc = 0x80034020u;
    // 80034020: stw     r0, 184(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034024:
    ctx->pc = 0x80034024u;
    // 80034024: rlwinm r0, r5, 19, 5, 12
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 19u) & 0x07F80000u;
    }

label_80034028:
    ctx->pc = 0x80034028u;
    // 80034028: li      r5, 97
    ctx->gpr[5] = (u32)(s32)(97);

label_8003402C:
    ctx->pc = 0x8003402Cu;
    // 8003402C: lwz     r3, 184(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034030:
    ctx->pc = 0x80034030u;
    // 80034030: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_80034034:
    ctx->pc = 0x80034034u;
    // 80034034: rlwinm r3, r3, 0, 13, 11
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFF7FFFFu;
    }

label_80034038:
    ctx->pc = 0x80034038u;
    // 80034038: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_8003403C:
    ctx->pc = 0x8003403Cu;
    // 8003403C: stw     r0, 184(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034040:
    ctx->pc = 0x80034040u;
    // 80034040: add   r3, r6, r8
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80034044:
    ctx->pc = 0x80034044u;
    // 80034044: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80034048:
    ctx->pc = 0x80034048u;
    // 80034048: stb     r5, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_8003404C:
    ctx->pc = 0x8003404Cu;
    // 8003404C: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034050:
    ctx->pc = 0x80034050u;
    // 80034050: stw     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80034054:
    ctx->pc = 0x80034054u;
    // 80034054: sth     r0, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80034058:
    ctx->pc = 0x80034058u;
    // 80034058: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_8003405C:
    ctx->pc = 0x8003405Cu;
    ctx->downcount -= 2;
    // 8003405C: cmpwi   r3, 2
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

label_80034060:
    ctx->pc = 0x80034060u;
    // 80034060: bc    12, 2, 0x8003407C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003407C;
        }
    }

label_80034064:
    ctx->pc = 0x80034064u;
    ctx->downcount -= 1;
    // 80034064: bc    4, 0, 0x80034080
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034080;
        }
    }

label_80034068:
    ctx->pc = 0x80034068u;
    ctx->downcount -= 2;
    // 80034068: cmpwi   r3, 1
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

label_8003406C:
    ctx->pc = 0x8003406Cu;
    // 8003406C: bc    4, 0, 0x80034074
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034074;
        }
    }

label_80034070:
    ctx->pc = 0x80034070u;
    ctx->downcount -= 1;
    // 80034070: b       0x80034080
    {
            goto label_80034080;
    }

label_80034074:
    ctx->pc = 0x80034074u;
    ctx->downcount -= 2;
    // 80034074: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80034078:
    ctx->pc = 0x80034078u;
    // 80034078: b       0x80034080
    {
            goto label_80034080;
    }

label_8003407C:
    ctx->pc = 0x8003407Cu;
    ctx->downcount -= 1;
    // 8003407C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80034080:
    ctx->pc = 0x80034080u;
    ctx->downcount -= 10;
    // 80034080: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80034084:
    ctx->pc = 0x80034084u;
    // 80034084: rlwinm r0, r3, 14, 0, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 14u) & 0xFFFFC000u;
    }

label_80034088:
    ctx->pc = 0x80034088u;
    // 80034088: lwz     r3, 516(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(516);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003408C:
    ctx->pc = 0x8003408Cu;
    // 8003408C: rlwinm r3, r3, 0, 18, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFF3FFFu;
    }

label_80034090:
    ctx->pc = 0x80034090u;
    // 80034090: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80034094:
    ctx->pc = 0x80034094u;
    // 80034094: stw     r0, 516(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034098:
    ctx->pc = 0x80034098u;
    // 80034098: lwz     r0, 1268(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003409C:
    ctx->pc = 0x8003409Cu;
    // 8003409C: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_800340A0:
    ctx->pc = 0x800340A0u;
    // 800340A0: stw     r0, 1268(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800340A4:
    ctx->pc = 0x800340A4u;
    // 800340A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800340A8:
    ctx->pc = 0x800340A8u;
    ctx->downcount -= 5;
    // 800340A8: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800340AC:
    ctx->pc = 0x800340ACu;
    // 800340AC: lwz     r0, 516(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(516);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800340B0:
    ctx->pc = 0x800340B0u;
    // 800340B0: rlwinm r0, r0, 18, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 18u) & 0x00000003u;
    }

label_800340B4:
    ctx->pc = 0x800340B4u;
    // 800340B4: cmpwi   r0, 2
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

label_800340B8:
    ctx->pc = 0x800340B8u;
    // 800340B8: bc    12, 2, 0x800340D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800340D8;
        }
    }

label_800340BC:
    ctx->pc = 0x800340BCu;
    ctx->downcount -= 1;
    // 800340BC: bc    4, 0, 0x800340E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800340E4;
        }
    }

label_800340C0:
    ctx->pc = 0x800340C0u;
    ctx->downcount -= 2;
    // 800340C0: cmpwi   r0, 1
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

label_800340C4:
    ctx->pc = 0x800340C4u;
    // 800340C4: bc    4, 0, 0x800340CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800340CC;
        }
    }

label_800340C8:
    ctx->pc = 0x800340C8u;
    ctx->downcount -= 1;
    // 800340C8: b       0x800340E4
    {
            goto label_800340E4;
    }

label_800340CC:
    ctx->pc = 0x800340CCu;
    ctx->downcount -= 3;
    // 800340CC: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_800340D0:
    ctx->pc = 0x800340D0u;
    // 800340D0: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800340D4:
    ctx->pc = 0x800340D4u;
    // 800340D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800340D8:
    ctx->pc = 0x800340D8u;
    ctx->downcount -= 3;
    // 800340D8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_800340DC:
    ctx->pc = 0x800340DCu;
    // 800340DC: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800340E0:
    ctx->pc = 0x800340E0u;
    // 800340E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800340E4:
    ctx->pc = 0x800340E4u;
    ctx->downcount -= 2;
    // 800340E4: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800340E8:
    ctx->pc = 0x800340E8u;
    // 800340E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800340EC:
    ctx->pc = 0x800340ECu;
    ctx->downcount -= 15;
    // 800340EC: lwz     r6, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800340F0:
    ctx->pc = 0x800340F0u;
    // 800340F0: rlwinm r0, r3, 19, 5, 12
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 19u) & 0x07F80000u;
    }

label_800340F4:
    ctx->pc = 0x800340F4u;
    // 800340F4: li      r4, 97
    ctx->gpr[4] = (u32)(s32)(97);

label_800340F8:
    ctx->pc = 0x800340F8u;
    // 800340F8: lwz     r5, 516(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(516);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800340FC:
    ctx->pc = 0x800340FCu;
    // 800340FC: lis     r3, -13311
    ctx->gpr[3] = ((u32)(s32)(-13311) << 16);

label_80034100:
    ctx->pc = 0x80034100u;
    // 80034100: rlwinm r5, r5, 0, 13, 11
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFF7FFFFu;
    }

label_80034104:
    ctx->pc = 0x80034104u;
    // 80034104: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80034108:
    ctx->pc = 0x80034108u;
    // 80034108: stw     r0, 516(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003410C:
    ctx->pc = 0x8003410Cu;
    // 8003410C: lis     r0, -504
    ctx->gpr[0] = ((u32)(s32)(-504) << 16);

label_80034110:
    ctx->pc = 0x80034110u;
    // 80034110: stb     r4, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80034114:
    ctx->pc = 0x80034114u;
    // 80034114: stw     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034118:
    ctx->pc = 0x80034118u;
    // 80034118: stb     r4, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8003411C:
    ctx->pc = 0x8003411Cu;
    // 8003411C: lwz     r0, 516(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(516);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80034120:
    ctx->pc = 0x80034120u;
    // 80034120: stw     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034124:
    ctx->pc = 0x80034124u;
    // 80034124: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034128:
    ctx->pc = 0x80034128u;
    ctx->downcount -= 9;
    // 80034128: li      r0, 97
    ctx->gpr[0] = (u32)(s32)(97);

label_8003412C:
    ctx->pc = 0x8003412Cu;
    // 8003412C: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80034130:
    ctx->pc = 0x80034130u;
    // 80034130: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_80034134:
    ctx->pc = 0x80034134u;
    // 80034134: stb     r0, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80034138:
    ctx->pc = 0x80034138u;
    // 80034138: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8003413C:
    ctx->pc = 0x8003413Cu;
    // 8003413C: lwz     r3, 516(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(516);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034140:
    ctx->pc = 0x80034140u;
    // 80034140: stw     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80034144:
    ctx->pc = 0x80034144u;
    // 80034144: sth     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80034148:
    ctx->pc = 0x80034148u;
    // 80034148: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_8003414C:
    ctx->pc = 0x8003414Cu;
    ctx->downcount -= 6;
    // 8003414C: cmplw   r3, r4
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80034150:
    ctx->pc = 0x80034150u;
    // 80034150: rlwinm r7, r5, 0, 16, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x0000FFFFu;
    }

label_80034154:
    ctx->pc = 0x80034154u;
    // 80034154: rlwinm r0, r6, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x0000FFFFu;
    }

label_80034158:
    ctx->pc = 0x80034158u;
    // 80034158: rlwinm r5, r5, 1, 16, 30
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 1u) & 0x0000FFFEu;
    }

label_8003415C:
    ctx->pc = 0x8003415Cu;
    // 8003415C: rlwinm r6, r6, 1, 16, 30
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0x0000FFFEu;
    }

label_80034160:
    ctx->pc = 0x80034160u;
    // 80034160: bc    12, 2, 0x800341DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800341DC;
        }
    }

label_80034164:
    ctx->pc = 0x80034164u;
    ctx->downcount -= 30;
    // 80034164: lwz     r9, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80034168:
    ctx->pc = 0x80034168u;
    // 80034168: lwz     r8, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8003416C:
    ctx->pc = 0x8003416Cu;
    // 8003416C: stw     r9, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80034170:
    ctx->pc = 0x80034170u;
    // 80034170: stw     r8, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80034174:
    ctx->pc = 0x80034174u;
    // 80034174: lwz     r9, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80034178:
    ctx->pc = 0x80034178u;
    // 80034178: lwz     r8, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8003417C:
    ctx->pc = 0x8003417Cu;
    // 8003417C: stw     r9, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80034180:
    ctx->pc = 0x80034180u;
    // 80034180: stw     r8, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80034184:
    ctx->pc = 0x80034184u;
    // 80034184: lwz     r9, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80034188:
    ctx->pc = 0x80034188u;
    // 80034188: lwz     r8, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8003418C:
    ctx->pc = 0x8003418Cu;
    // 8003418C: stw     r9, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80034190:
    ctx->pc = 0x80034190u;
    // 80034190: stw     r8, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80034194:
    ctx->pc = 0x80034194u;
    // 80034194: lwz     r9, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80034198:
    ctx->pc = 0x80034198u;
    // 80034198: lwz     r8, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8003419C:
    ctx->pc = 0x8003419Cu;
    // 8003419C: stw     r9, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_800341A0:
    ctx->pc = 0x800341A0u;
    // 800341A0: stw     r8, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_800341A4:
    ctx->pc = 0x800341A4u;
    // 800341A4: lwz     r9, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_800341A8:
    ctx->pc = 0x800341A8u;
    // 800341A8: lwz     r8, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_800341AC:
    ctx->pc = 0x800341ACu;
    // 800341AC: stw     r9, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_800341B0:
    ctx->pc = 0x800341B0u;
    // 800341B0: stw     r8, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_800341B4:
    ctx->pc = 0x800341B4u;
    // 800341B4: lwz     r9, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_800341B8:
    ctx->pc = 0x800341B8u;
    // 800341B8: lwz     r8, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_800341BC:
    ctx->pc = 0x800341BCu;
    // 800341BC: stw     r9, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_800341C0:
    ctx->pc = 0x800341C0u;
    // 800341C0: stw     r8, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_800341C4:
    ctx->pc = 0x800341C4u;
    // 800341C4: lwz     r9, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_800341C8:
    ctx->pc = 0x800341C8u;
    // 800341C8: lwz     r8, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_800341CC:
    ctx->pc = 0x800341CCu;
    // 800341CC: stw     r9, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_800341D0:
    ctx->pc = 0x800341D0u;
    // 800341D0: stw     r8, 52(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_800341D4:
    ctx->pc = 0x800341D4u;
    // 800341D4: lwz     r8, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_800341D8:
    ctx->pc = 0x800341D8u;
    // 800341D8: stw     r8, 56(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_800341DC:
    ctx->pc = 0x800341DCu;
    ctx->downcount -= 55;
    // 800341DC: lhz     r8, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read16(ctx, ea);
    }

label_800341E0:
    ctx->pc = 0x800341E0u;
    // 800341E0: subf   r8, r5, r8
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

label_800341E4:
    ctx->pc = 0x800341E4u;
    // 800341E4: sth     r8, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_800341E8:
    ctx->pc = 0x800341E8u;
    // 800341E8: lhz     r10, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        ctx->gpr[10] = mem_read16(ctx, ea);
    }

label_800341EC:
    ctx->pc = 0x800341ECu;
    // 800341EC: lhz     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read16(ctx, ea);
    }

label_800341F0:
    ctx->pc = 0x800341F0u;
    // 800341F0: mullw   r9, r6, r10
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[10];
        ctx->gpr[9] = (u32)product;
    }

label_800341F4:
    ctx->pc = 0x800341F4u;
    // 800341F4: divwu   r8, r9, r8
    {
        u32 divisor = ctx->gpr[8];
        ctx->gpr[8] = divisor == 0 ? 0u : ctx->gpr[9] / divisor;
    }

label_800341F8:
    ctx->pc = 0x800341F8u;
    // 800341F8: subf   r8, r8, r10
    {
        u32 a = ~ctx->gpr[8];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

label_800341FC:
    ctx->pc = 0x800341FCu;
    // 800341FC: sth     r8, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_80034200:
    ctx->pc = 0x80034200u;
    // 80034200: lwz     r8, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80034204:
    ctx->pc = 0x80034204u;
    // 80034204: cmpwi   r8, 0
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80034208:
    ctx->pc = 0x80034208u;
    // 80034208: bc    4, 2, 0x8003422C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003422C;
        }
    }

label_8003420C:
    ctx->pc = 0x8003420Cu;
    ctx->downcount -= 4;
    // 8003420C: lwz     r8, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80034210:
    ctx->pc = 0x80034210u;
    // 80034210: rlwinm r8, r8, 0, 30, 30
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[8], 0u) & 0x00000002u;
    }

label_80034214:
    ctx->pc = 0x80034214u;
    // 80034214: cmpwi   r8, 2
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80034218:
    ctx->pc = 0x80034218u;
    // 80034218: bc    12, 2, 0x8003422C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003422C;
        }
    }

label_8003421C:
    ctx->pc = 0x8003421Cu;
    ctx->downcount -= 4;
    // 8003421C: lhz     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read16(ctx, ea);
    }

label_80034220:
    ctx->pc = 0x80034220u;
    // 80034220: subf   r8, r0, r8
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

label_80034224:
    ctx->pc = 0x80034224u;
    // 80034224: sth     r8, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_80034228:
    ctx->pc = 0x80034228u;
    // 80034228: b       0x80034238
    {
            goto label_80034238;
    }

label_8003422C:
    ctx->pc = 0x8003422Cu;
    ctx->downcount -= 3;
    // 8003422C: lhz     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read16(ctx, ea);
    }

label_80034230:
    ctx->pc = 0x80034230u;
    // 80034230: subf   r8, r6, r8
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

label_80034234:
    ctx->pc = 0x80034234u;
    // 80034234: sth     r8, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_80034238:
    ctx->pc = 0x80034238u;
    ctx->downcount -= 13;
    // 80034238: lhz     r8, 14(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14);
        ctx->gpr[8] = mem_read16(ctx, ea);
    }

label_8003423C:
    ctx->pc = 0x8003423Cu;
    // 8003423C: subf   r5, r5, r8
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80034240:
    ctx->pc = 0x80034240u;
    // 80034240: sth     r5, 14(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_80034244:
    ctx->pc = 0x80034244u;
    // 80034244: lhz     r5, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_80034248:
    ctx->pc = 0x80034248u;
    // 80034248: subf   r5, r6, r5
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_8003424C:
    ctx->pc = 0x8003424Cu;
    // 8003424C: sth     r5, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_80034250:
    ctx->pc = 0x80034250u;
    // 80034250: lhz     r5, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_80034254:
    ctx->pc = 0x80034254u;
    // 80034254: add   r5, r5, r7
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80034258:
    ctx->pc = 0x80034258u;
    // 80034258: sth     r5, 10(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8003425C:
    ctx->pc = 0x8003425Cu;
    // 8003425C: lhz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80034260:
    ctx->pc = 0x80034260u;
    // 80034260: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80034264:
    ctx->pc = 0x80034264u;
    // 80034264: sth     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80034268:
    ctx->pc = 0x80034268u;
    // 80034268: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_8003426C:
    ctx->pc = 0x8003426Cu;
    ctx->downcount -= 36;
    // 8003426C: lwz     r9, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80034270:
    ctx->pc = 0x80034270u;
    // 80034270: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80034274:
    ctx->pc = 0x80034274u;
    // 80034274: rlwinm r7, r5, 0, 16, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x0000FFFFu;
    }

label_80034278:
    ctx->pc = 0x80034278u;
    // 80034278: stw     r10, 480(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(480);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8003427C:
    ctx->pc = 0x8003427Cu;
    // 8003427C: rlwinm r5, r6, 0, 16, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x0000FFFFu;
    }

label_80034280:
    ctx->pc = 0x80034280u;
    // 80034280: addi    r0, r5, -1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1);

label_80034284:
    ctx->pc = 0x80034284u;
    // 80034284: lwz     r8, 480(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(480);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80034288:
    ctx->pc = 0x80034288u;
    // 80034288: rlwinm r3, r3, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_8003428C:
    ctx->pc = 0x8003428Cu;
    // 8003428C: rlwinm r4, r4, 10, 6, 21
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 10u) & 0x03FFFC00u;
    }

label_80034290:
    ctx->pc = 0x80034290u;
    // 80034290: rlwinm r5, r8, 0, 0, 21
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[8], 0u) & 0xFFFFFC00u;
    }

label_80034294:
    ctx->pc = 0x80034294u;
    // 80034294: or   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[3];
    }

label_80034298:
    ctx->pc = 0x80034298u;
    // 80034298: stw     r3, 480(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(480);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8003429C:
    ctx->pc = 0x8003429Cu;
    // 8003429C: addi    r3, r7, -1
    ctx->gpr[3] = ctx->gpr[7] + (u32)(s32)(-1);

label_800342A0:
    ctx->pc = 0x800342A0u;
    // 800342A0: rlwinm r0, r0, 10, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 10u) & 0xFFFFFC00u;
    }

label_800342A4:
    ctx->pc = 0x800342A4u;
    // 800342A4: lwz     r5, 480(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(480);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800342A8:
    ctx->pc = 0x800342A8u;
    // 800342A8: rlwinm r5, r5, 0, 22, 11
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFF003FFu;
    }

label_800342AC:
    ctx->pc = 0x800342ACu;
    // 800342AC: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_800342B0:
    ctx->pc = 0x800342B0u;
    // 800342B0: stw     r4, 480(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(480);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800342B4:
    ctx->pc = 0x800342B4u;
    // 800342B4: lwz     r4, 480(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(480);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800342B8:
    ctx->pc = 0x800342B8u;
    // 800342B8: rlwinm r4, r4, 0, 8, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00FFFFFFu;
    }

label_800342BC:
    ctx->pc = 0x800342BCu;
    // 800342BC: oris    r4, r4, 0x4900
    ctx->gpr[4] = ctx->gpr[4] | (0x4900u << 16);

label_800342C0:
    ctx->pc = 0x800342C0u;
    // 800342C0: stw     r4, 480(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(480);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800342C4:
    ctx->pc = 0x800342C4u;
    // 800342C4: stw     r10, 484(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_800342C8:
    ctx->pc = 0x800342C8u;
    // 800342C8: lwz     r4, 484(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(484);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800342CC:
    ctx->pc = 0x800342CCu;
    // 800342CC: rlwinm r4, r4, 0, 0, 21
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFC00u;
    }

label_800342D0:
    ctx->pc = 0x800342D0u;
    // 800342D0: or   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
    }

label_800342D4:
    ctx->pc = 0x800342D4u;
    // 800342D4: stw     r3, 484(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800342D8:
    ctx->pc = 0x800342D8u;
    // 800342D8: lwz     r3, 484(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(484);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800342DC:
    ctx->pc = 0x800342DCu;
    // 800342DC: rlwinm r3, r3, 0, 22, 11
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFF003FFu;
    }

label_800342E0:
    ctx->pc = 0x800342E0u;
    // 800342E0: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800342E4:
    ctx->pc = 0x800342E4u;
    // 800342E4: stw     r0, 484(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800342E8:
    ctx->pc = 0x800342E8u;
    // 800342E8: lwz     r0, 484(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(484);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800342EC:
    ctx->pc = 0x800342ECu;
    // 800342EC: rlwinm r0, r0, 0, 8, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00FFFFFFu;
    }

label_800342F0:
    ctx->pc = 0x800342F0u;
    // 800342F0: oris    r0, r0, 0x4A00
    ctx->gpr[0] = ctx->gpr[0] | (0x4A00u << 16);

label_800342F4:
    ctx->pc = 0x800342F4u;
    // 800342F4: stw     r0, 484(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800342F8:
    ctx->pc = 0x800342F8u;
    // 800342F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800342FC:
    ctx->pc = 0x800342FCu;
    ctx->downcount -= 36;
    // 800342FC: lwz     r9, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80034300:
    ctx->pc = 0x80034300u;
    // 80034300: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80034304:
    ctx->pc = 0x80034304u;
    // 80034304: rlwinm r7, r5, 0, 16, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x0000FFFFu;
    }

label_80034308:
    ctx->pc = 0x80034308u;
    // 80034308: stw     r10, 496(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8003430C:
    ctx->pc = 0x8003430Cu;
    // 8003430C: rlwinm r5, r6, 0, 16, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x0000FFFFu;
    }

label_80034310:
    ctx->pc = 0x80034310u;
    // 80034310: addi    r0, r5, -1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1);

label_80034314:
    ctx->pc = 0x80034314u;
    // 80034314: lwz     r8, 496(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(496);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80034318:
    ctx->pc = 0x80034318u;
    // 80034318: rlwinm r3, r3, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_8003431C:
    ctx->pc = 0x8003431Cu;
    // 8003431C: rlwinm r4, r4, 10, 6, 21
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 10u) & 0x03FFFC00u;
    }

label_80034320:
    ctx->pc = 0x80034320u;
    // 80034320: rlwinm r5, r8, 0, 0, 21
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[8], 0u) & 0xFFFFFC00u;
    }

label_80034324:
    ctx->pc = 0x80034324u;
    // 80034324: or   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[3];
    }

label_80034328:
    ctx->pc = 0x80034328u;
    // 80034328: stw     r3, 496(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8003432C:
    ctx->pc = 0x8003432Cu;
    // 8003432C: addi    r3, r7, -1
    ctx->gpr[3] = ctx->gpr[7] + (u32)(s32)(-1);

label_80034330:
    ctx->pc = 0x80034330u;
    // 80034330: rlwinm r0, r0, 10, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 10u) & 0xFFFFFC00u;
    }

label_80034334:
    ctx->pc = 0x80034334u;
    // 80034334: lwz     r5, 496(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(496);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80034338:
    ctx->pc = 0x80034338u;
    // 80034338: rlwinm r5, r5, 0, 22, 11
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFF003FFu;
    }

label_8003433C:
    ctx->pc = 0x8003433Cu;
    // 8003433C: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_80034340:
    ctx->pc = 0x80034340u;
    // 80034340: stw     r4, 496(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80034344:
    ctx->pc = 0x80034344u;
    // 80034344: lwz     r4, 496(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(496);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80034348:
    ctx->pc = 0x80034348u;
    // 80034348: rlwinm r4, r4, 0, 8, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00FFFFFFu;
    }

label_8003434C:
    ctx->pc = 0x8003434Cu;
    // 8003434C: oris    r4, r4, 0x4900
    ctx->gpr[4] = ctx->gpr[4] | (0x4900u << 16);

label_80034350:
    ctx->pc = 0x80034350u;
    // 80034350: stw     r4, 496(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(496);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80034354:
    ctx->pc = 0x80034354u;
    // 80034354: stw     r10, 500(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80034358:
    ctx->pc = 0x80034358u;
    // 80034358: lwz     r4, 500(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(500);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003435C:
    ctx->pc = 0x8003435Cu;
    // 8003435C: rlwinm r4, r4, 0, 0, 21
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFC00u;
    }

label_80034360:
    ctx->pc = 0x80034360u;
    // 80034360: or   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
    }

label_80034364:
    ctx->pc = 0x80034364u;
    // 80034364: stw     r3, 500(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80034368:
    ctx->pc = 0x80034368u;
    // 80034368: lwz     r3, 500(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(500);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003436C:
    ctx->pc = 0x8003436Cu;
    // 8003436C: rlwinm r3, r3, 0, 22, 11
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFF003FFu;
    }

label_80034370:
    ctx->pc = 0x80034370u;
    // 80034370: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80034374:
    ctx->pc = 0x80034374u;
    // 80034374: stw     r0, 500(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034378:
    ctx->pc = 0x80034378u;
    // 80034378: lwz     r0, 500(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(500);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003437C:
    ctx->pc = 0x8003437Cu;
    // 8003437C: rlwinm r0, r0, 0, 8, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00FFFFFFu;
    }

label_80034380:
    ctx->pc = 0x80034380u;
    // 80034380: oris    r0, r0, 0x4A00
    ctx->gpr[0] = ctx->gpr[0] | (0x4A00u << 16);

label_80034384:
    ctx->pc = 0x80034384u;
    // 80034384: stw     r0, 500(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(500);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034388:
    ctx->pc = 0x80034388u;
    // 80034388: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_8003438C:
    ctx->pc = 0x8003438Cu;
    ctx->downcount -= 15;
    // 8003438C: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80034390:
    ctx->pc = 0x80034390u;
    // 80034390: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80034394:
    ctx->pc = 0x80034394u;
    // 80034394: stw     r0, 488(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(488);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034398:
    ctx->pc = 0x80034398u;
    // 80034398: addi    r5, r4, 488
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(488);

label_8003439C:
    ctx->pc = 0x8003439Cu;
    // 8003439C: rlwinm r0, r3, 1, 16, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x0000FFFEu;
    }

label_800343A0:
    ctx->pc = 0x800343A0u;
    // 800343A0: lwz     r4, 488(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(488);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800343A4:
    ctx->pc = 0x800343A4u;
    // 800343A4: srawi r0, r0, 5
    {
        u32 sh = 5u;
        u32 value = ctx->gpr[0];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[0] = value;
        } else if (sh > 31) {
            ctx->gpr[0] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[0] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_800343A8:
    ctx->pc = 0x800343A8u;
    // 800343A8: rlwinm r3, r4, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFC00u;
    }

label_800343AC:
    ctx->pc = 0x800343ACu;
    // 800343AC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800343B0:
    ctx->pc = 0x800343B0u;
    // 800343B0: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800343B4:
    ctx->pc = 0x800343B4u;
    // 800343B4: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800343B8:
    ctx->pc = 0x800343B8u;
    // 800343B8: rlwinm r0, r0, 0, 8, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00FFFFFFu;
    }

label_800343BC:
    ctx->pc = 0x800343BCu;
    // 800343BC: oris    r0, r0, 0x4D00
    ctx->gpr[0] = ctx->gpr[0] | (0x4D00u << 16);

label_800343C0:
    ctx->pc = 0x800343C0u;
    // 800343C0: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800343C4:
    ctx->pc = 0x800343C4u;
    // 800343C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800343C8:
    ctx->pc = 0x800343C8u;
    ctx->downcount -= 14;
    // 800343C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800343CC:
    ctx->pc = 0x800343CCu;
    // 800343CC: cmpwi   r5, 19
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(19);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800343D0:
    ctx->pc = 0x800343D0u;
    // 800343D0: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800343D4:
    ctx->pc = 0x800343D4u;
    // 800343D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800343D8:
    ctx->pc = 0x800343D8u;
    // 800343D8: addi    r8, r3, 0
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(0);

label_800343DC:
    ctx->pc = 0x800343DCu;
    // 800343DC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800343E0:
    ctx->pc = 0x800343E0u;
    // 800343E0: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800343E4:
    ctx->pc = 0x800343E4u;
    // 800343E4: rlwinm r31, r5, 0, 28, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x0000000Fu;
    }

label_800343E8:
    ctx->pc = 0x800343E8u;
    // 800343E8: stw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800343EC:
    ctx->pc = 0x800343ECu;
    // 800343EC: addi    r30, r6, 0
    ctx->gpr[30] = ctx->gpr[6] + (u32)(s32)(0);

label_800343F0:
    ctx->pc = 0x800343F0u;
    // 800343F0: lwz     r7, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_800343F4:
    ctx->pc = 0x800343F4u;
    // 800343F4: stb     r0, 512(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(512);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800343F8:
    ctx->pc = 0x800343F8u;
    // 800343F8: addi    r7, r4, 0
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(0);

label_800343FC:
    ctx->pc = 0x800343FCu;
    // 800343FC: bc    4, 2, 0x80034404
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034404;
        }
    }

label_80034400:
    ctx->pc = 0x80034400u;
    ctx->downcount -= 1;
    // 80034400: li      r31, 11
    ctx->gpr[31] = (u32)(s32)(11);

label_80034404:
    ctx->pc = 0x80034404u;
    ctx->downcount -= 2;
    // 80034404: cmpwi   r5, 38
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(38);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80034408:
    ctx->pc = 0x80034408u;
    // 80034408: bc    12, 2, 0x80034424
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80034424;
        }
    }

label_8003440C:
    ctx->pc = 0x8003440Cu;
    ctx->downcount -= 1;
    // 8003440C: bc    4, 0, 0x80034440
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034440;
        }
    }

label_80034410:
    ctx->pc = 0x80034410u;
    ctx->downcount -= 2;
    // 80034410: cmpwi   r5, 4
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80034414:
    ctx->pc = 0x80034414u;
    // 80034414: bc    4, 0, 0x80034440
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034440;
        }
    }

label_80034418:
    ctx->pc = 0x80034418u;
    ctx->downcount -= 2;
    // 80034418: cmpwi   r5, 0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003441C:
    ctx->pc = 0x8003441Cu;
    // 8003441C: bc    4, 0, 0x80034424
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034424;
        }
    }

label_80034420:
    ctx->pc = 0x80034420u;
    ctx->downcount -= 1;
    // 80034420: b       0x80034440
    {
            goto label_80034440;
    }

label_80034424:
    ctx->pc = 0x80034424u;
    ctx->downcount -= 7;
    // 80034424: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034428:
    ctx->pc = 0x80034428u;
    // 80034428: lwzu     r0, 508(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(508);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_8003442C:
    ctx->pc = 0x8003442Cu;
    // 8003442C: rlwinm r0, r0, 0, 17, 14
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFE7FFFu;
    }

label_80034430:
    ctx->pc = 0x80034430u;
    // 80034430: oris    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | (0x0001u << 16);

label_80034434:
    ctx->pc = 0x80034434u;
    // 80034434: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_80034438:
    ctx->pc = 0x80034438u;
    // 80034438: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003443C:
    ctx->pc = 0x8003443Cu;
    // 8003443C: b       0x80034454
    {
            goto label_80034454;
    }

label_80034440:
    ctx->pc = 0x80034440u;
    ctx->downcount -= 5;
    // 80034440: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034444:
    ctx->pc = 0x80034444u;
    // 80034444: lwzu     r0, 508(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(508);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_80034448:
    ctx->pc = 0x80034448u;
    // 80034448: rlwinm r0, r0, 0, 17, 14
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFE7FFFu;
    }

label_8003444C:
    ctx->pc = 0x8003444Cu;
    // 8003444C: oris    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | (0x0001u << 16);

label_80034450:
    ctx->pc = 0x80034450u;
    // 80034450: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034454:
    ctx->pc = 0x80034454u;
    ctx->downcount -= 18;
    // 80034454: rlwinm r4, r5, 0, 27, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000010u;
    }

label_80034458:
    ctx->pc = 0x80034458u;
    // 80034458: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003445C:
    ctx->pc = 0x8003445Cu;
    // 8003445C: addi    r0, r4, -16
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-16);

label_80034460:
    ctx->pc = 0x80034460u;
    // 80034460: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80034464:
    ctx->pc = 0x80034464u;
    // 80034464: rlwinm r0, r0, 27, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x000000FFu;
    }

label_80034468:
    ctx->pc = 0x80034468u;
    // 80034468: stb     r0, 512(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(512);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8003446C:
    ctx->pc = 0x8003446Cu;
    // 8003446C: addi    r4, r8, 0
    ctx->gpr[4] = ctx->gpr[8] + (u32)(s32)(0);

label_80034470:
    ctx->pc = 0x80034470u;
    // 80034470: addi    r6, r1, 32
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(32);

label_80034474:
    ctx->pc = 0x80034474u;
    // 80034474: lwzu     r0, 508(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(508);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_80034478:
    ctx->pc = 0x80034478u;
    // 80034478: addi    r8, r1, 24
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(24);

label_8003447C:
    ctx->pc = 0x8003447Cu;
    // 8003447C: rlwinm r0, r0, 0, 29, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF7u;
    }

label_80034480:
    ctx->pc = 0x80034480u;
    // 80034480: rlwimi r0, r31, 0, 28, 28
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[31], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000008u) | (rot & 0x00000008u);
    }

label_80034484:
    ctx->pc = 0x80034484u;
    // 80034484: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034488:
    ctx->pc = 0x80034488u;
    // 80034488: addi    r3, r5, 0
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(0);

label_8003448C:
    ctx->pc = 0x8003448Cu;
    // 8003448C: addi    r5, r7, 0
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(0);

label_80034490:
    ctx->pc = 0x80034490u;
    // 80034490: rlwinm r31, r31, 0, 29, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x00000007u;
    }

label_80034494:
    ctx->pc = 0x80034494u;
    // 80034494: addi    r7, r1, 28
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(28);

label_80034498:
    ctx->pc = 0x80034498u;
    // 80034498: bl      0x8003511C
    {
            ctx->lr = 0x8003449Cu;
            goto label_8003511C;
    }

label_8003449C:
    ctx->pc = 0x8003449Cu;
    ctx->downcount -= 37;
    // 8003449C: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800344A0:
    ctx->pc = 0x800344A0u;
    // 800344A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800344A4:
    ctx->pc = 0x800344A4u;
    // 800344A4: stw     r0, 504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(504);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800344A8:
    ctx->pc = 0x800344A8u;
    // 800344A8: addi    r7, r3, 504
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(504);

label_800344AC:
    ctx->pc = 0x800344ACu;
    // 800344AC: addi    r8, r3, 508
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(508);

label_800344B0:
    ctx->pc = 0x800344B0u;
    // 800344B0: lwz     r5, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800344B4:
    ctx->pc = 0x800344B4u;
    // 800344B4: rlwinm r3, r30, 9, 15, 22
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[30], 9u) & 0x0001FE00u;
    }

label_800344B8:
    ctx->pc = 0x800344B8u;
    // 800344B8: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800344BC:
    ctx->pc = 0x800344BCu;
    // 800344BC: rlwinm r0, r31, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 4u) & 0xFFFFFFF0u;
    }

label_800344C0:
    ctx->pc = 0x800344C0u;
    // 800344C0: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800344C4:
    ctx->pc = 0x800344C4u;
    // 800344C4: mullw   r4, r5, r4
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[4] = (u32)product;
    }

label_800344C8:
    ctx->pc = 0x800344C8u;
    // 800344C8: rlwinm r5, r6, 0, 0, 21
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFFFC00u;
    }

label_800344CC:
    ctx->pc = 0x800344CCu;
    // 800344CC: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_800344D0:
    ctx->pc = 0x800344D0u;
    // 800344D0: stw     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800344D4:
    ctx->pc = 0x800344D4u;
    // 800344D4: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800344D8:
    ctx->pc = 0x800344D8u;
    // 800344D8: rlwinm r4, r4, 0, 8, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00FFFFFFu;
    }

label_800344DC:
    ctx->pc = 0x800344DCu;
    // 800344DC: oris    r4, r4, 0x4D00
    ctx->gpr[4] = ctx->gpr[4] | (0x4D00u << 16);

label_800344E0:
    ctx->pc = 0x800344E0u;
    // 800344E0: stw     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800344E4:
    ctx->pc = 0x800344E4u;
    // 800344E4: lwz     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800344E8:
    ctx->pc = 0x800344E8u;
    // 800344E8: rlwinm r4, r4, 0, 23, 21
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFDFFu;
    }

label_800344EC:
    ctx->pc = 0x800344ECu;
    // 800344EC: or   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
    }

label_800344F0:
    ctx->pc = 0x800344F0u;
    // 800344F0: stw     r3, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800344F4:
    ctx->pc = 0x800344F4u;
    // 800344F4: lwz     r3, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800344F8:
    ctx->pc = 0x800344F8u;
    // 800344F8: rlwinm r3, r3, 0, 28, 24
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFF8Fu;
    }

label_800344FC:
    ctx->pc = 0x800344FCu;
    // 800344FC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80034500:
    ctx->pc = 0x80034500u;
    // 80034500: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034504:
    ctx->pc = 0x80034504u;
    // 80034504: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80034508:
    ctx->pc = 0x80034508u;
    // 80034508: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003450C:
    ctx->pc = 0x8003450Cu;
    // 8003450C: lwz     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80034510:
    ctx->pc = 0x80034510u;
    // 80034510: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80034514:
    ctx->pc = 0x80034514u;
    // 80034514: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80034518:
    ctx->pc = 0x80034518u;
    // 80034518: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_8003451C:
    ctx->pc = 0x8003451Cu;
    ctx->downcount -= 10;
    // 8003451C: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80034520:
    ctx->pc = 0x80034520u;
    // 80034520: rlwinm r0, r3, 12, 0, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 12u) & 0xFFFFF000u;
    }

label_80034524:
    ctx->pc = 0x80034524u;
    // 80034524: lwz     r3, 492(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034528:
    ctx->pc = 0x80034528u;
    // 80034528: rlwinm r3, r3, 0, 20, 17
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFCFFFu;
    }

label_8003452C:
    ctx->pc = 0x8003452Cu;
    // 8003452C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80034530:
    ctx->pc = 0x80034530u;
    // 80034530: stw     r0, 492(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034534:
    ctx->pc = 0x80034534u;
    // 80034534: lwzu     r0, 508(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(508);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_80034538:
    ctx->pc = 0x80034538u;
    // 80034538: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_8003453C:
    ctx->pc = 0x8003453Cu;
    // 8003453C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034540:
    ctx->pc = 0x80034540u;
    // 80034540: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034544:
    ctx->pc = 0x80034544u;
    ctx->downcount -= 26;
    // 80034544: lwz     r6, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80034548:
    ctx->pc = 0x80034548u;
    // 80034548: rlwinm r4, r3, 0, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000001u;
    }

label_8003454C:
    ctx->pc = 0x8003454Cu;
    // 8003454C: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_80034550:
    ctx->pc = 0x80034550u;
    // 80034550: lwz     r4, 492(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(492);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80034554:
    ctx->pc = 0x80034554u;
    // 80034554: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80034558:
    ctx->pc = 0x80034558u;
    // 80034558: rlwinm r3, r3, 0, 30, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000002u;
    }

label_8003455C:
    ctx->pc = 0x8003455Cu;
    // 8003455C: rlwinm r5, r4, 0, 0, 30
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFFEu;
    }

label_80034560:
    ctx->pc = 0x80034560u;
    // 80034560: rlwinm r4, r0, 27, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x000000FFu;
    }

label_80034564:
    ctx->pc = 0x80034564u;
    // 80034564: or   r0, r5, r4
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[4];
    }

label_80034568:
    ctx->pc = 0x80034568u;
    // 80034568: stw     r0, 492(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003456C:
    ctx->pc = 0x8003456Cu;
    // 8003456C: addi    r0, r3, -2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2);

label_80034570:
    ctx->pc = 0x80034570u;
    // 80034570: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80034574:
    ctx->pc = 0x80034574u;
    // 80034574: lwz     r3, 492(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034578:
    ctx->pc = 0x80034578u;
    // 80034578: rlwinm r5, r0, 28, 23, 30
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 28u) & 0x000001FEu;
    }

label_8003457C:
    ctx->pc = 0x8003457Cu;
    // 8003457C: rlwinm r3, r3, 0, 31, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFFDu;
    }

label_80034580:
    ctx->pc = 0x80034580u;
    // 80034580: or   r0, r3, r5
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[5];
    }

label_80034584:
    ctx->pc = 0x80034584u;
    // 80034584: stw     r0, 492(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034588:
    ctx->pc = 0x80034588u;
    // 80034588: lwz     r0, 508(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(508);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003458C:
    ctx->pc = 0x8003458Cu;
    // 8003458C: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_80034590:
    ctx->pc = 0x80034590u;
    // 80034590: or   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[4];
    }

label_80034594:
    ctx->pc = 0x80034594u;
    // 80034594: stw     r0, 508(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(508);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034598:
    ctx->pc = 0x80034598u;
    // 80034598: lwz     r0, 508(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(508);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003459C:
    ctx->pc = 0x8003459Cu;
    // 8003459C: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_800345A0:
    ctx->pc = 0x800345A0u;
    // 800345A0: or   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[5];
    }

label_800345A4:
    ctx->pc = 0x800345A4u;
    // 800345A4: stw     r0, 508(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(508);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800345A8:
    ctx->pc = 0x800345A8u;
    // 800345A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800345AC:
    ctx->pc = 0x800345ACu;
    ctx->downcount -= 22;
    // 800345AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800345B0:
    ctx->pc = 0x800345B0u;
    // 800345B0: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800345B4:
    ctx->pc = 0x800345B4u;
    // 800345B4: stwu     r1, -8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800345B8:
    ctx->pc = 0x800345B8u;
    // 800345B8: lfs     f0, -31128(r2)
    if (!ppc_fp_available_inline(ctx, 0x800345B8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_800345BC:
    ctx->pc = 0x800345BCu;
    // 800345BC: fdivs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x800345BCu)) return;
    ppc_fdivs(ctx, 1, 0, 1);

label_800345C0:
    ctx->pc = 0x800345C0u;
    // 800345C0: bl      0x80006CAC
    {
            ctx->lr = 0x800345C4u;
            ctx->pc = 0x80006CACu;
            return;
    }

label_800345C4:
    ctx->pc = 0x800345C4u;
    ctx->downcount -= 65;
    // 800345C4: rlwinm r6, r3, 0, 23, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000001FFu;
    }

label_800345C8:
    ctx->pc = 0x800345C8u;
    // 800345C8: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800345CC:
    ctx->pc = 0x800345CCu;
    // 800345CC: li      r0, 97
    ctx->gpr[0] = (u32)(s32)(97);

label_800345D0:
    ctx->pc = 0x800345D0u;
    // 800345D0: lis     r3, -13311
    ctx->gpr[3] = ((u32)(s32)(-13311) << 16);

label_800345D4:
    ctx->pc = 0x800345D4u;
    // 800345D4: stb     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800345D8:
    ctx->pc = 0x800345D8u;
    // 800345D8: oris    r0, r6, 0x4E00
    ctx->gpr[0] = ctx->gpr[6] | (0x4E00u << 16);

label_800345DC:
    ctx->pc = 0x800345DCu;
    // 800345DC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800345E0:
    ctx->pc = 0x800345E0u;
    // 800345E0: stw     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800345E4:
    ctx->pc = 0x800345E4u;
    // 800345E4: subfic  r3, r6, 256
    {
        u64 res = (u64)(u32)(s32)(256) + (u64)(~ctx->gpr[6]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_800345E8:
    ctx->pc = 0x800345E8u;
    // 800345E8: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_800345EC:
    ctx->pc = 0x800345ECu;
    // 800345EC: sth     r5, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_800345F0:
    ctx->pc = 0x800345F0u;
    // 800345F0: subfe   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_800345F4:
    ctx->pc = 0x800345F4u;
    // 800345F4: rlwinm r0, r0, 10, 14, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 10u) & 0x0003FC00u;
    }

label_800345F8:
    ctx->pc = 0x800345F8u;
    // 800345F8: lwz     r3, 492(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800345FC:
    ctx->pc = 0x800345FCu;
    // 800345FC: cmplwi  r6, 0x0080
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x0080u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80034600:
    ctx->pc = 0x80034600u;
    // 80034600: addi    r5, r6, 0
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(0);

label_80034604:
    ctx->pc = 0x80034604u;
    // 80034604: rlwinm r3, r3, 0, 22, 20
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFBFFu;
    }

label_80034608:
    ctx->pc = 0x80034608u;
    // 80034608: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_8003460C:
    ctx->pc = 0x8003460Cu;
    // 8003460C: stw     r0, 492(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034610:
    ctx->pc = 0x80034610u;
    // 80034610: lwz     r0, 484(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(484);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80034614:
    ctx->pc = 0x80034614u;
    // 80034614: rlwinm r4, r0, 22, 22, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 22u) & 0x000003FFu;
    }

label_80034618:
    ctx->pc = 0x80034618u;
    // 80034618: rlwinm r0, r0, 30, 14, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x0003FF00u;
    }

label_8003461C:
    ctx->pc = 0x8003461Cu;
    // 8003461C: divwu   r3, r0, r6
    {
        u32 divisor = ctx->gpr[6];
        ctx->gpr[3] = divisor == 0 ? 0u : ctx->gpr[0] / divisor;
    }

label_80034620:
    ctx->pc = 0x80034620u;
    // 80034620: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_80034624:
    ctx->pc = 0x80034624u;
    // 80034624: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80034628:
    ctx->pc = 0x80034628u;
    // 80034628: bc    4, 1, 0x80034658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034658;
        }
    }

label_8003462C:
    ctx->pc = 0x8003462Cu;
    ctx->downcount -= 2;
    // 8003462C: cmplwi  r6, 0x0100
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x0100u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80034630:
    ctx->pc = 0x80034630u;
    // 80034630: bc    4, 0, 0x80034658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034658;
        }
    }

label_80034634:
    ctx->pc = 0x80034634u;
    ctx->downcount -= 1;
    // 80034634: b       0x8003463C
    {
            goto label_8003463C;
    }

label_80034638:
    loop_80034638(ctx);
    if (ctx->pc == 0x80034644u) goto label_80034644;
    return;
label_8003463C:
    ctx->downcount -= 2;
    // 8003463C: rlwinm. r0, r5, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80034640:
    // 80034640: bc    12, 2, 0x80034638
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80034638u;
                return;
            }
            goto label_80034638;
        }
    }

label_80034644:
    ctx->pc = 0x80034644u;
    ctx->downcount -= 47;
    // 80034644: divwu   r0, r4, r5
    {
        u32 divisor = ctx->gpr[5];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[4] / divisor;
    }

label_80034648:
    ctx->pc = 0x80034648u;
    // 80034648: mullw   r0, r0, r5
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_8003464C:
    ctx->pc = 0x8003464Cu;
    // 8003464C: subf.   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80034650:
    ctx->pc = 0x80034650u;
    // 80034650: bc    4, 2, 0x80034658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034658;
        }
    }

label_80034654:
    ctx->pc = 0x80034654u;
    ctx->downcount -= 1;
    // 80034654: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80034658:
    ctx->pc = 0x80034658u;
    ctx->downcount -= 2;
    // 80034658: cmplwi  r3, 0x0400
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0400u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003465C:
    ctx->pc = 0x8003465Cu;
    // 8003465C: bc    4, 1, 0x80034664
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034664;
        }
    }

label_80034660:
    ctx->pc = 0x80034660u;
    ctx->downcount -= 1;
    // 80034660: li      r3, 1024
    ctx->gpr[3] = (u32)(s32)(1024);

label_80034664:
    ctx->pc = 0x80034664u;
    ctx->downcount -= 5;
    // 80034664: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80034668:
    ctx->pc = 0x80034668u;
    // 80034668: addi    r1, r1, 8
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(8);

label_8003466C:
    ctx->pc = 0x8003466Cu;
    // 8003466C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80034670:
    ctx->pc = 0x80034670u;
    // 80034670: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034674:
    ctx->pc = 0x80034674u;
    ctx->downcount -= 26;
    // 80034674: rlwinm r0, r4, 0, 8, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00FFFFFFu;
    }

label_80034678:
    ctx->pc = 0x80034678u;
    // 80034678: lbz     r4, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8003467C:
    ctx->pc = 0x8003467Cu;
    // 8003467C: lbz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80034680:
    ctx->pc = 0x80034680u;
    // 80034680: li      r6, 97
    ctx->gpr[6] = (u32)(s32)(97);

label_80034684:
    ctx->pc = 0x80034684u;
    // 80034684: rlwinm r7, r4, 8, 0, 23
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_80034688:
    ctx->pc = 0x80034688u;
    // 80034688: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003468C:
    ctx->pc = 0x8003468Cu;
    // 8003468C: rlwimi r7, r5, 0, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 0u);
        ctx->gpr[7] = (ctx->gpr[7] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

label_80034690:
    ctx->pc = 0x80034690u;
    // 80034690: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_80034694:
    ctx->pc = 0x80034694u;
    // 80034694: rlwinm r7, r7, 0, 8, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x00FFFFFFu;
    }

label_80034698:
    ctx->pc = 0x80034698u;
    // 80034698: stb     r6, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_8003469C:
    ctx->pc = 0x8003469Cu;
    // 8003469C: oris    r7, r7, 0x4F00
    ctx->gpr[7] = ctx->gpr[7] | (0x4F00u << 16);

label_800346A0:
    ctx->pc = 0x800346A0u;
    // 800346A0: stw     r7, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_800346A4:
    ctx->pc = 0x800346A4u;
    // 800346A4: oris    r7, r0, 0x5100
    ctx->gpr[7] = ctx->gpr[0] | (0x5100u << 16);

label_800346A8:
    ctx->pc = 0x800346A8u;
    // 800346A8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800346AC:
    ctx->pc = 0x800346ACu;
    // 800346AC: lbz     r8, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_800346B0:
    ctx->pc = 0x800346B0u;
    // 800346B0: lbz     r3, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_800346B4:
    ctx->pc = 0x800346B4u;
    // 800346B4: rlwinm r3, r3, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 8u) & 0xFFFFFF00u;
    }

label_800346B8:
    ctx->pc = 0x800346B8u;
    // 800346B8: stb     r6, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_800346BC:
    ctx->pc = 0x800346BCu;
    // 800346BC: rlwimi r3, r8, 0, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[8], 0u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

label_800346C0:
    ctx->pc = 0x800346C0u;
    // 800346C0: rlwinm r3, r3, 0, 8, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00FFFFFFu;
    }

label_800346C4:
    ctx->pc = 0x800346C4u;
    // 800346C4: oris    r3, r3, 0x5000
    ctx->gpr[3] = ctx->gpr[3] | (0x5000u << 16);

label_800346C8:
    ctx->pc = 0x800346C8u;
    // 800346C8: stw     r3, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800346CC:
    ctx->pc = 0x800346CCu;
    // 800346CC: stb     r6, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_800346D0:
    ctx->pc = 0x800346D0u;
    // 800346D0: stw     r7, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_800346D4:
    ctx->pc = 0x800346D4u;
    // 800346D4: sth     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800346D8:
    ctx->pc = 0x800346D8u;
    // 800346D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800346DC:
    ctx->pc = 0x800346DCu;
    ctx->downcount -= 14;
    // 800346DC: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800346E0:
    ctx->pc = 0x800346E0u;
    // 800346E0: rlwinm. r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800346E4:
    ctx->pc = 0x800346E4u;
    // 800346E4: stmw     r23, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_800346E8:
    ctx->pc = 0x800346E8u;
    // 800346E8: bc    12, 2, 0x80034810
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80034810;
        }
    }

label_800346EC:
    ctx->pc = 0x800346ECu;
    ctx->downcount -= 73;
    // 800346EC: lbz     r0, 1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800346F0:
    ctx->pc = 0x800346F0u;
    // 800346F0: lbz     r3, 7(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_800346F4:
    ctx->pc = 0x800346F4u;
    // 800346F4: rlwinm r30, r0, 4, 0, 27
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_800346F8:
    ctx->pc = 0x800346F8u;
    // 800346F8: lbz     r8, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_800346FC:
    ctx->pc = 0x800346FCu;
    // 800346FC: lbz     r0, 19(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80034700:
    ctx->pc = 0x80034700u;
    // 80034700: rlwinm r25, r3, 4, 0, 27
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_80034704:
    ctx->pc = 0x80034704u;
    // 80034704: lbz     r10, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        ctx->gpr[10] = mem_read8(ctx, ea);
    }

label_80034708:
    ctx->pc = 0x80034708u;
    // 80034708: rlwimi r30, r8, 0, 28, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[8], 0u);
        ctx->gpr[30] = (ctx->gpr[30] & ~0x0000000Fu) | (rot & 0x0000000Fu);
    }

label_8003470C:
    ctx->pc = 0x8003470Cu;
    // 8003470C: lbz     r11, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[11] = mem_read8(ctx, ea);
    }

label_80034710:
    ctx->pc = 0x80034710u;
    // 80034710: lbz     r7, 13(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80034714:
    ctx->pc = 0x80034714u;
    // 80034714: rlwimi r25, r10, 0, 28, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[10], 0u);
        ctx->gpr[25] = (ctx->gpr[25] & ~0x0000000Fu) | (rot & 0x0000000Fu);
    }

label_80034718:
    ctx->pc = 0x80034718u;
    // 80034718: rlwinm r27, r11, 8, 0, 23
    {
        ctx->gpr[27] = dolrecomp_rotl32(ctx->gpr[11], 8u) & 0xFFFFFF00u;
    }

label_8003471C:
    ctx->pc = 0x8003471Cu;
    // 8003471C: lbz     r9, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[9] = mem_read8(ctx, ea);
    }

label_80034720:
    ctx->pc = 0x80034720u;
    // 80034720: lbz     r3, 14(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80034724:
    ctx->pc = 0x80034724u;
    // 80034724: rlwinm r26, r9, 8, 0, 23
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[9], 8u) & 0xFFFFFF00u;
    }

label_80034728:
    ctx->pc = 0x80034728u;
    // 80034728: lbz     r28, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        ctx->gpr[28] = mem_read8(ctx, ea);
    }

label_8003472C:
    ctx->pc = 0x8003472Cu;
    // 8003472C: rlwimi r27, r30, 0, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[30], 0u);
        ctx->gpr[27] = (ctx->gpr[27] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

label_80034730:
    ctx->pc = 0x80034730u;
    // 80034730: lbz     r9, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[9] = mem_read8(ctx, ea);
    }

label_80034734:
    ctx->pc = 0x80034734u;
    // 80034734: rlwinm r23, r7, 4, 0, 27
    {
        ctx->gpr[23] = dolrecomp_rotl32(ctx->gpr[7], 4u) & 0xFFFFFFF0u;
    }

label_80034738:
    ctx->pc = 0x80034738u;
    // 80034738: lbz     r12, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read8(ctx, ea);
    }

label_8003473C:
    ctx->pc = 0x8003473Cu;
    // 8003473C: lbz     r7, 21(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(21);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80034740:
    ctx->pc = 0x80034740u;
    // 80034740: rlwinm r24, r3, 8, 0, 23
    {
        ctx->gpr[24] = dolrecomp_rotl32(ctx->gpr[3], 8u) & 0xFFFFFF00u;
    }

label_80034744:
    ctx->pc = 0x80034744u;
    // 80034744: rlwimi r23, r12, 0, 28, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[12], 0u);
        ctx->gpr[23] = (ctx->gpr[23] & ~0x0000000Fu) | (rot & 0x0000000Fu);
    }

label_80034748:
    ctx->pc = 0x80034748u;
    // 80034748: lbz     r29, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        ctx->gpr[29] = mem_read8(ctx, ea);
    }

label_8003474C:
    ctx->pc = 0x8003474Cu;
    // 8003474C: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_80034750:
    ctx->pc = 0x80034750u;
    // 80034750: rlwimi r0, r29, 0, 28, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[29], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x0000000Fu) | (rot & 0x0000000Fu);
    }

label_80034754:
    ctx->pc = 0x80034754u;
    // 80034754: lbz     r8, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_80034758:
    ctx->pc = 0x80034758u;
    // 80034758: rlwinm r28, r28, 12, 0, 19
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[28], 12u) & 0xFFFFF000u;
    }

label_8003475C:
    ctx->pc = 0x8003475Cu;
    // 8003475C: lbz     r31, 9(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(9);
        ctx->gpr[31] = mem_read8(ctx, ea);
    }

label_80034760:
    ctx->pc = 0x80034760u;
    // 80034760: rlwimi r28, r27, 0, 20, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[27], 0u);
        ctx->gpr[28] = (ctx->gpr[28] & ~0x00000FFFu) | (rot & 0x00000FFFu);
    }

label_80034764:
    ctx->pc = 0x80034764u;
    // 80034764: lbz     r29, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[29] = mem_read8(ctx, ea);
    }

label_80034768:
    ctx->pc = 0x80034768u;
    // 80034768: rlwimi r24, r23, 0, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[23], 0u);
        ctx->gpr[24] = (ctx->gpr[24] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

label_8003476C:
    ctx->pc = 0x8003476Cu;
    // 8003476C: lbz     r10, 15(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(15);
        ctx->gpr[10] = mem_read8(ctx, ea);
    }

label_80034770:
    ctx->pc = 0x80034770u;
    // 80034770: rlwinm r23, r8, 8, 0, 23
    {
        ctx->gpr[23] = dolrecomp_rotl32(ctx->gpr[8], 8u) & 0xFFFFFF00u;
    }

label_80034774:
    ctx->pc = 0x80034774u;
    // 80034774: lbz     r12, 10(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10);
        ctx->gpr[12] = mem_read8(ctx, ea);
    }

label_80034778:
    ctx->pc = 0x80034778u;
    // 80034778: rlwimi r26, r25, 0, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[25], 0u);
        ctx->gpr[26] = (ctx->gpr[26] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

label_8003477C:
    ctx->pc = 0x8003477Cu;
    // 8003477C: lbz     r3, 22(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80034780:
    ctx->pc = 0x80034780u;
    // 80034780: rlwinm r25, r10, 12, 0, 19
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[10], 12u) & 0xFFFFF000u;
    }

label_80034784:
    ctx->pc = 0x80034784u;
    // 80034784: lbz     r30, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        ctx->gpr[30] = mem_read8(ctx, ea);
    }

label_80034788:
    ctx->pc = 0x80034788u;
    // 80034788: rlwimi r23, r0, 0, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 0u);
        ctx->gpr[23] = (ctx->gpr[23] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

label_8003478C:
    ctx->pc = 0x8003478Cu;
    // 8003478C: lbz     r0, 23(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(23);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80034790:
    ctx->pc = 0x80034790u;
    // 80034790: rlwinm r27, r31, 12, 0, 19
    {
        ctx->gpr[27] = dolrecomp_rotl32(ctx->gpr[31], 12u) & 0xFFFFF000u;
    }

label_80034794:
    ctx->pc = 0x80034794u;
    // 80034794: lbz     r11, 11(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(11);
        ctx->gpr[11] = mem_read8(ctx, ea);
    }

label_80034798:
    ctx->pc = 0x80034798u;
    // 80034798: lbz     r8, 17(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

label_8003479C:
    ctx->pc = 0x8003479Cu;
    // 8003479C: rlwinm r4, r29, 16, 0, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[29], 16u) & 0xFFFF0000u;
    }

label_800347A0:
    ctx->pc = 0x800347A0u;
    // 800347A0: rlwinm r7, r7, 12, 0, 19
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 12u) & 0xFFFFF000u;
    }

label_800347A4:
    ctx->pc = 0x800347A4u;
    // 800347A4: rlwinm r10, r12, 16, 0, 15
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[12], 16u) & 0xFFFF0000u;
    }

label_800347A8:
    ctx->pc = 0x800347A8u;
    // 800347A8: rlwimi r27, r26, 0, 20, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[26], 0u);
        ctx->gpr[27] = (ctx->gpr[27] & ~0x00000FFFu) | (rot & 0x00000FFFu);
    }

label_800347AC:
    ctx->pc = 0x800347ACu;
    // 800347AC: rlwinm r12, r3, 16, 0, 15
    {
        ctx->gpr[12] = dolrecomp_rotl32(ctx->gpr[3], 16u) & 0xFFFF0000u;
    }

label_800347B0:
    ctx->pc = 0x800347B0u;
    // 800347B0: rlwimi r7, r23, 0, 20, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[23], 0u);
        ctx->gpr[7] = (ctx->gpr[7] & ~0x00000FFFu) | (rot & 0x00000FFFu);
    }

label_800347B4:
    ctx->pc = 0x800347B4u;
    // 800347B4: rlwimi r4, r28, 0, 16, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[28], 0u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0x0000FFFFu) | (rot & 0x0000FFFFu);
    }

label_800347B8:
    ctx->pc = 0x800347B8u;
    // 800347B8: rlwinm r3, r30, 20, 0, 11
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[30], 20u) & 0xFFF00000u;
    }

label_800347BC:
    ctx->pc = 0x800347BCu;
    // 800347BC: rlwimi r25, r24, 0, 20, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[24], 0u);
        ctx->gpr[25] = (ctx->gpr[25] & ~0x00000FFFu) | (rot & 0x00000FFFu);
    }

label_800347C0:
    ctx->pc = 0x800347C0u;
    // 800347C0: rlwinm r9, r9, 16, 0, 15
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[9], 16u) & 0xFFFF0000u;
    }

label_800347C4:
    ctx->pc = 0x800347C4u;
    // 800347C4: rlwimi r10, r27, 0, 16, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[27], 0u);
        ctx->gpr[10] = (ctx->gpr[10] & ~0x0000FFFFu) | (rot & 0x0000FFFFu);
    }

label_800347C8:
    ctx->pc = 0x800347C8u;
    // 800347C8: rlwimi r3, r4, 0, 12, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0x000FFFFFu) | (rot & 0x000FFFFFu);
    }

label_800347CC:
    ctx->pc = 0x800347CCu;
    // 800347CC: rlwimi r12, r7, 0, 16, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 0u);
        ctx->gpr[12] = (ctx->gpr[12] & ~0x0000FFFFu) | (rot & 0x0000FFFFu);
    }

label_800347D0:
    ctx->pc = 0x800347D0u;
    // 800347D0: rlwinm r7, r3, 0, 8, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00FFFFFFu;
    }

label_800347D4:
    ctx->pc = 0x800347D4u;
    // 800347D4: rlwinm r3, r11, 20, 0, 11
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[11], 20u) & 0xFFF00000u;
    }

label_800347D8:
    ctx->pc = 0x800347D8u;
    // 800347D8: rlwimi r3, r10, 0, 12, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[10], 0u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0x000FFFFFu) | (rot & 0x000FFFFFu);
    }

label_800347DC:
    ctx->pc = 0x800347DCu;
    // 800347DC: rlwinm r4, r3, 0, 8, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00FFFFFFu;
    }

label_800347E0:
    ctx->pc = 0x800347E0u;
    // 800347E0: rlwinm r3, r8, 20, 0, 11
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[8], 20u) & 0xFFF00000u;
    }

label_800347E4:
    ctx->pc = 0x800347E4u;
    // 800347E4: rlwimi r9, r25, 0, 16, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[25], 0u);
        ctx->gpr[9] = (ctx->gpr[9] & ~0x0000FFFFu) | (rot & 0x0000FFFFu);
    }

label_800347E8:
    ctx->pc = 0x800347E8u;
    // 800347E8: rlwimi r3, r9, 0, 12, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[9], 0u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0x000FFFFFu) | (rot & 0x000FFFFFu);
    }

label_800347EC:
    ctx->pc = 0x800347ECu;
    // 800347EC: rlwinm r0, r0, 20, 0, 11
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 20u) & 0xFFF00000u;
    }

label_800347F0:
    ctx->pc = 0x800347F0u;
    // 800347F0: rlwimi r0, r12, 0, 12, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[12], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000FFFFFu) | (rot & 0x000FFFFFu);
    }

label_800347F4:
    ctx->pc = 0x800347F4u;
    // 800347F4: rlwinm r3, r3, 0, 8, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00FFFFFFu;
    }

label_800347F8:
    ctx->pc = 0x800347F8u;
    // 800347F8: rlwinm r0, r0, 0, 8, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00FFFFFFu;
    }

label_800347FC:
    ctx->pc = 0x800347FCu;
    // 800347FC: oris    r8, r7, 0x0100
    ctx->gpr[8] = ctx->gpr[7] | (0x0100u << 16);

label_80034800:
    ctx->pc = 0x80034800u;
    // 80034800: oris    r7, r4, 0x0200
    ctx->gpr[7] = ctx->gpr[4] | (0x0200u << 16);

label_80034804:
    ctx->pc = 0x80034804u;
    // 80034804: oris    r9, r3, 0x0300
    ctx->gpr[9] = ctx->gpr[3] | (0x0300u << 16);

label_80034808:
    ctx->pc = 0x80034808u;
    // 80034808: oris    r10, r0, 0x0400
    ctx->gpr[10] = ctx->gpr[0] | (0x0400u << 16);

label_8003480C:
    ctx->pc = 0x8003480Cu;
    // 8003480C: b       0x80034830
    {
            goto label_80034830;
    }

label_80034810:
    ctx->pc = 0x80034810u;
    ctx->downcount -= 8;
    // 80034810: lis     r8, 358
    ctx->gpr[8] = ((u32)(s32)(358) << 16);

label_80034814:
    ctx->pc = 0x80034814u;
    // 80034814: lis     r7, 614
    ctx->gpr[7] = ((u32)(s32)(614) << 16);

label_80034818:
    ctx->pc = 0x80034818u;
    // 80034818: lis     r4, 870
    ctx->gpr[4] = ((u32)(s32)(870) << 16);

label_8003481C:
    ctx->pc = 0x8003481Cu;
    // 8003481C: lis     r3, 1126
    ctx->gpr[3] = ((u32)(s32)(1126) << 16);

label_80034820:
    ctx->pc = 0x80034820u;
    // 80034820: addi    r8, r8, 26214
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(26214);

label_80034824:
    ctx->pc = 0x80034824u;
    // 80034824: addi    r7, r7, 26214
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(26214);

label_80034828:
    ctx->pc = 0x80034828u;
    // 80034828: addi    r9, r4, 26214
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(26214);

label_8003482C:
    ctx->pc = 0x8003482Cu;
    // 8003482C: addi    r10, r3, 26214
    ctx->gpr[10] = ctx->gpr[3] + (u32)(s32)(26214);

label_80034830:
    ctx->pc = 0x80034830u;
    ctx->downcount -= 12;
    // 80034830: li      r4, 97
    ctx->gpr[4] = (u32)(s32)(97);

label_80034834:
    ctx->pc = 0x80034834u;
    // 80034834: lis     r3, -13311
    ctx->gpr[3] = ((u32)(s32)(-13311) << 16);

label_80034838:
    ctx->pc = 0x80034838u;
    // 80034838: stb     r4, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8003483C:
    ctx->pc = 0x8003483Cu;
    // 8003483C: rlwinm. r0, r5, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80034840:
    ctx->pc = 0x80034840u;
    // 80034840: stw     r8, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80034844:
    ctx->pc = 0x80034844u;
    // 80034844: stb     r4, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80034848:
    ctx->pc = 0x80034848u;
    // 80034848: stw     r7, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8003484C:
    ctx->pc = 0x8003484Cu;
    // 8003484C: stb     r4, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80034850:
    ctx->pc = 0x80034850u;
    // 80034850: stw     r9, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80034854:
    ctx->pc = 0x80034854u;
    // 80034854: stb     r4, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80034858:
    ctx->pc = 0x80034858u;
    // 80034858: stw     r10, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8003485C:
    ctx->pc = 0x8003485Cu;
    // 8003485C: bc    12, 2, 0x800348C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800348C4;
        }
    }

label_80034860:
    ctx->pc = 0x80034860u;
    ctx->downcount -= 25;
    // 80034860: lbz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80034864:
    ctx->pc = 0x80034864u;
    // 80034864: lbz     r3, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80034868:
    ctx->pc = 0x80034868u;
    // 80034868: oris    r5, r0, 0x5300
    ctx->gpr[5] = ctx->gpr[0] | (0x5300u << 16);

label_8003486C:
    ctx->pc = 0x8003486Cu;
    // 8003486C: lbz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80034870:
    ctx->pc = 0x80034870u;
    // 80034870: lbz     r4, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80034874:
    ctx->pc = 0x80034874u;
    // 80034874: rlwinm r7, r5, 0, 26, 19
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFFF03Fu;
    }

label_80034878:
    ctx->pc = 0x80034878u;
    // 80034878: rlwinm r5, r3, 6, 0, 25
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 6u) & 0xFFFFFFC0u;
    }

label_8003487C:
    ctx->pc = 0x8003487Cu;
    // 8003487C: lbz     r3, 5(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(5);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80034880:
    ctx->pc = 0x80034880u;
    // 80034880: or   r7, r7, r5
    {
        ctx->gpr[7] = ctx->gpr[7] | ctx->gpr[5];
    }

label_80034884:
    ctx->pc = 0x80034884u;
    // 80034884: oris    r8, r0, 0x5400
    ctx->gpr[8] = ctx->gpr[0] | (0x5400u << 16);

label_80034888:
    ctx->pc = 0x80034888u;
    // 80034888: lbz     r5, 3(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8003488C:
    ctx->pc = 0x8003488Cu;
    // 8003488C: lbz     r0, 6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80034890:
    ctx->pc = 0x80034890u;
    // 80034890: rlwinm r6, r7, 0, 20, 13
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0xFFFC0FFFu;
    }

label_80034894:
    ctx->pc = 0x80034894u;
    // 80034894: rlwinm r4, r4, 12, 0, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 12u) & 0xFFFFF000u;
    }

label_80034898:
    ctx->pc = 0x80034898u;
    // 80034898: or   r6, r6, r4
    {
        ctx->gpr[6] = ctx->gpr[6] | ctx->gpr[4];
    }

label_8003489C:
    ctx->pc = 0x8003489Cu;
    // 8003489C: rlwinm r4, r8, 0, 26, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[8], 0u) & 0xFFFFF03Fu;
    }

label_800348A0:
    ctx->pc = 0x800348A0u;
    // 800348A0: rlwinm r3, r3, 6, 0, 25
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 6u) & 0xFFFFFFC0u;
    }

label_800348A4:
    ctx->pc = 0x800348A4u;
    // 800348A4: or   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
    }

label_800348A8:
    ctx->pc = 0x800348A8u;
    // 800348A8: rlwinm r6, r6, 0, 14, 7
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFF03FFFFu;
    }

label_800348AC:
    ctx->pc = 0x800348ACu;
    // 800348AC: rlwinm r4, r5, 18, 0, 13
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[5], 18u) & 0xFFFC0000u;
    }

label_800348B0:
    ctx->pc = 0x800348B0u;
    // 800348B0: rlwinm r3, r3, 0, 20, 13
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFC0FFFu;
    }

label_800348B4:
    ctx->pc = 0x800348B4u;
    // 800348B4: rlwinm r0, r0, 12, 0, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 12u) & 0xFFFFF000u;
    }

label_800348B8:
    ctx->pc = 0x800348B8u;
    // 800348B8: or   r6, r6, r4
    {
        ctx->gpr[6] = ctx->gpr[6] | ctx->gpr[4];
    }

label_800348BC:
    ctx->pc = 0x800348BCu;
    // 800348BC: or   r7, r3, r0
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800348C0:
    ctx->pc = 0x800348C0u;
    // 800348C0: b       0x800348D4
    {
            goto label_800348D4;
    }

label_800348C4:
    ctx->pc = 0x800348C4u;
    ctx->downcount -= 4;
    // 800348C4: lis     r4, 21337
    ctx->gpr[4] = ((u32)(s32)(21337) << 16);

label_800348C8:
    ctx->pc = 0x800348C8u;
    // 800348C8: lis     r3, 21504
    ctx->gpr[3] = ((u32)(s32)(21504) << 16);

label_800348CC:
    ctx->pc = 0x800348CCu;
    // 800348CC: addi    r6, r4, 20480
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(20480);

label_800348D0:
    ctx->pc = 0x800348D0u;
    // 800348D0: addi    r7, r3, 21
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(21);

label_800348D4:
    ctx->pc = 0x800348D4u;
    ctx->downcount -= 22;
    // 800348D4: li      r5, 97
    ctx->gpr[5] = (u32)(s32)(97);

label_800348D8:
    ctx->pc = 0x800348D8u;
    // 800348D8: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800348DC:
    ctx->pc = 0x800348DCu;
    // 800348DC: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_800348E0:
    ctx->pc = 0x800348E0u;
    // 800348E0: stb     r5, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_800348E4:
    ctx->pc = 0x800348E4u;
    // 800348E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800348E8:
    ctx->pc = 0x800348E8u;
    // 800348E8: stw     r6, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_800348EC:
    ctx->pc = 0x800348ECu;
    // 800348EC: stb     r5, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_800348F0:
    ctx->pc = 0x800348F0u;
    // 800348F0: stw     r7, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_800348F4:
    ctx->pc = 0x800348F4u;
    // 800348F4: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800348F8:
    ctx->pc = 0x800348F8u;
    // 800348F8: lmw     r23, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_800348FC:
    ctx->pc = 0x800348FCu;
    // 800348FC: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_80034900:
    ctx->pc = 0x80034900u;
    // 80034900: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034904:
    ctx->pc = 0x80034904u;
    ctx->downcount -= 7;
    // 80034904: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80034908:
    ctx->pc = 0x80034908u;
    // 80034908: rlwinm r0, r3, 7, 0, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 7u) & 0xFFFFFF80u;
    }

label_8003490C:
    ctx->pc = 0x8003490Cu;
    // 8003490C: lwzu     r3, 492(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(492);
        ctx->gpr[3] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_80034910:
    ctx->pc = 0x80034910u;
    // 80034910: rlwinm r3, r3, 0, 25, 22
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFE7Fu;
    }

label_80034914:
    ctx->pc = 0x80034914u;
    // 80034914: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80034918:
    ctx->pc = 0x80034918u;
    // 80034918: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003491C:
    ctx->pc = 0x8003491Cu;
    // 8003491C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034920:
    ctx->pc = 0x80034920u;
    ctx->downcount -= 2;
    // 80034920: rlwinm. r0, r4, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80034924:
    ctx->pc = 0x80034924u;
    // 80034924: bc    12, 2, 0x80034960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80034960;
        }
    }

label_80034928:
    ctx->pc = 0x80034928u;
    ctx->downcount -= 14;
    // 80034928: lwz     r7, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8003492C:
    ctx->pc = 0x8003492Cu;
    // 8003492C: li      r0, 97
    ctx->gpr[0] = (u32)(s32)(97);

label_80034930:
    ctx->pc = 0x80034930u;
    // 80034930: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_80034934:
    ctx->pc = 0x80034934u;
    // 80034934: lwz     r6, 472(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(472);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80034938:
    ctx->pc = 0x80034938u;
    // 80034938: rlwinm r6, r6, 0, 0, 30
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFFFFFEu;
    }

label_8003493C:
    ctx->pc = 0x8003493Cu;
    // 8003493C: stb     r0, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80034940:
    ctx->pc = 0x80034940u;
    // 80034940: ori     r6, r6, 0x0001
    ctx->gpr[6] = ctx->gpr[6] | 0x0001u;

label_80034944:
    ctx->pc = 0x80034944u;
    // 80034944: rlwinm r6, r6, 0, 31, 27
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFFFFF1u;
    }

label_80034948:
    ctx->pc = 0x80034948u;
    // 80034948: ori     r6, r6, 0x000E
    ctx->gpr[6] = ctx->gpr[6] | 0x000Eu;

label_8003494C:
    ctx->pc = 0x8003494Cu;
    // 8003494C: stw     r6, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80034950:
    ctx->pc = 0x80034950u;
    // 80034950: lwz     r6, 464(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(464);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80034954:
    ctx->pc = 0x80034954u;
    // 80034954: stb     r0, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80034958:
    ctx->pc = 0x80034958u;
    // 80034958: rlwinm r0, r6, 0, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFFFFFCu;
    }

label_8003495C:
    ctx->pc = 0x8003495Cu;
    // 8003495C: stw     r0, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034960:
    ctx->pc = 0x80034960u;
    ctx->downcount -= 3;
    // 80034960: rlwinm. r0, r4, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80034964:
    ctx->pc = 0x80034964u;
    // 80034964: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80034968:
    ctx->pc = 0x80034968u;
    // 80034968: bc    4, 2, 0x80034980
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034980;
        }
    }

label_8003496C:
    ctx->pc = 0x8003496Cu;
    ctx->downcount -= 5;
    // 8003496C: lwz     r5, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80034970:
    ctx->pc = 0x80034970u;
    // 80034970: lwz     r5, 476(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(476);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80034974:
    ctx->pc = 0x80034974u;
    // 80034974: rlwinm r5, r5, 0, 29, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000007u;
    }

label_80034978:
    ctx->pc = 0x80034978u;
    // 80034978: cmplwi  r5, 0x0003
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0003u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003497C:
    ctx->pc = 0x8003497Cu;
    // 8003497C: bc    4, 2, 0x800349AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800349AC;
        }
    }

label_80034980:
    ctx->pc = 0x80034980u;
    ctx->downcount -= 5;
    // 80034980: lwz     r5, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80034984:
    ctx->pc = 0x80034984u;
    // 80034984: lwz     r7, 476(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(476);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80034988:
    ctx->pc = 0x80034988u;
    // 80034988: rlwinm r5, r7, 26, 31, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[7], 26u) & 0x00000001u;
    }

label_8003498C:
    ctx->pc = 0x8003498Cu;
    // 8003498C: cmplwi  r5, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80034990:
    ctx->pc = 0x80034990u;
    // 80034990: bc    4, 2, 0x800349AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800349AC;
        }
    }

label_80034994:
    ctx->pc = 0x80034994u;
    ctx->downcount -= 6;
    // 80034994: li      r0, 97
    ctx->gpr[0] = (u32)(s32)(97);

label_80034998:
    ctx->pc = 0x80034998u;
    // 80034998: lis     r6, -13311
    ctx->gpr[6] = ((u32)(s32)(-13311) << 16);

label_8003499C:
    ctx->pc = 0x8003499Cu;
    // 8003499C: stb     r0, -32768(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800349A0:
    ctx->pc = 0x800349A0u;
    // 800349A0: rlwinm r5, r7, 0, 26, 24
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0xFFFFFFBFu;
    }

label_800349A4:
    ctx->pc = 0x800349A4u;
    // 800349A4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_800349A8:
    ctx->pc = 0x800349A8u;
    // 800349A8: stw     r5, -32768(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800349AC:
    ctx->pc = 0x800349ACu;
    ctx->downcount -= 34;
    // 800349AC: li      r9, 97
    ctx->gpr[9] = (u32)(s32)(97);

label_800349B0:
    ctx->pc = 0x800349B0u;
    // 800349B0: lwz     r7, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_800349B4:
    ctx->pc = 0x800349B4u;
    // 800349B4: lis     r8, -13311
    ctx->gpr[8] = ((u32)(s32)(-13311) << 16);

label_800349B8:
    ctx->pc = 0x800349B8u;
    // 800349B8: stb     r9, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_800349BC:
    ctx->pc = 0x800349BCu;
    // 800349BC: rlwinm r3, r3, 27, 8, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 27u) & 0x00FFFFFFu;
    }

label_800349C0:
    ctx->pc = 0x800349C0u;
    // 800349C0: oris    r10, r3, 0x4B00
    ctx->gpr[10] = ctx->gpr[3] | (0x4B00u << 16);

label_800349C4:
    ctx->pc = 0x800349C4u;
    // 800349C4: lwz     r6, 480(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(480);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800349C8:
    ctx->pc = 0x800349C8u;
    // 800349C8: rlwinm. r5, r4, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800349CC:
    ctx->pc = 0x800349CCu;
    // 800349CC: rlwinm r3, r4, 11, 13, 20
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 11u) & 0x0007F800u;
    }

label_800349D0:
    ctx->pc = 0x800349D0u;
    // 800349D0: stw     r6, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_800349D4:
    ctx->pc = 0x800349D4u;
    // 800349D4: stb     r9, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_800349D8:
    ctx->pc = 0x800349D8u;
    // 800349D8: lwz     r4, 484(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(484);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800349DC:
    ctx->pc = 0x800349DCu;
    // 800349DC: stw     r4, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800349E0:
    ctx->pc = 0x800349E0u;
    // 800349E0: stb     r9, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_800349E4:
    ctx->pc = 0x800349E4u;
    // 800349E4: lwz     r4, 488(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(488);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800349E8:
    ctx->pc = 0x800349E8u;
    // 800349E8: stw     r4, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800349EC:
    ctx->pc = 0x800349ECu;
    // 800349EC: stb     r9, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_800349F0:
    ctx->pc = 0x800349F0u;
    // 800349F0: stw     r10, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_800349F4:
    ctx->pc = 0x800349F4u;
    // 800349F4: lwz     r4, 492(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(492);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800349F8:
    ctx->pc = 0x800349F8u;
    // 800349F8: rlwinm r4, r4, 0, 21, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFF7FFu;
    }

label_800349FC:
    ctx->pc = 0x800349FCu;
    // 800349FC: or   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
    }

label_80034A00:
    ctx->pc = 0x80034A00u;
    // 80034A00: stw     r3, 492(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80034A04:
    ctx->pc = 0x80034A04u;
    // 80034A04: lwz     r3, 492(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034A08:
    ctx->pc = 0x80034A08u;
    // 80034A08: rlwinm r3, r3, 0, 18, 16
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFBFFFu;
    }

label_80034A0C:
    ctx->pc = 0x80034A0Cu;
    // 80034A0C: ori     r3, r3, 0x4000
    ctx->gpr[3] = ctx->gpr[3] | 0x4000u;

label_80034A10:
    ctx->pc = 0x80034A10u;
    // 80034A10: stw     r3, 492(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80034A14:
    ctx->pc = 0x80034A14u;
    // 80034A14: lwz     r3, 492(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034A18:
    ctx->pc = 0x80034A18u;
    // 80034A18: rlwinm r3, r3, 0, 8, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00FFFFFFu;
    }

label_80034A1C:
    ctx->pc = 0x80034A1Cu;
    // 80034A1C: oris    r3, r3, 0x5200
    ctx->gpr[3] = ctx->gpr[3] | (0x5200u << 16);

label_80034A20:
    ctx->pc = 0x80034A20u;
    // 80034A20: stw     r3, 492(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80034A24:
    ctx->pc = 0x80034A24u;
    // 80034A24: stb     r9, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_80034A28:
    ctx->pc = 0x80034A28u;
    // 80034A28: lwz     r3, 492(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(492);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034A2C:
    ctx->pc = 0x80034A2Cu;
    // 80034A2C: stw     r3, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80034A30:
    ctx->pc = 0x80034A30u;
    // 80034A30: bc    12, 2, 0x80034A4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80034A4C;
        }
    }

label_80034A34:
    ctx->pc = 0x80034A34u;
    ctx->downcount -= 6;
    // 80034A34: stb     r9, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_80034A38:
    ctx->pc = 0x80034A38u;
    // 80034A38: lwz     r3, 472(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(472);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034A3C:
    ctx->pc = 0x80034A3Cu;
    // 80034A3C: stw     r3, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80034A40:
    ctx->pc = 0x80034A40u;
    // 80034A40: stb     r9, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_80034A44:
    ctx->pc = 0x80034A44u;
    // 80034A44: lwz     r3, 464(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034A48:
    ctx->pc = 0x80034A48u;
    // 80034A48: stw     r3, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80034A4C:
    ctx->pc = 0x80034A4Cu;
    ctx->downcount -= 2;
    // 80034A4C: rlwinm. r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80034A50:
    ctx->pc = 0x80034A50u;
    // 80034A50: bc    12, 2, 0x80034A6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80034A6C;
        }
    }

label_80034A54:
    ctx->pc = 0x80034A54u;
    ctx->downcount -= 6;
    // 80034A54: li      r0, 97
    ctx->gpr[0] = (u32)(s32)(97);

label_80034A58:
    ctx->pc = 0x80034A58u;
    // 80034A58: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034A5C:
    ctx->pc = 0x80034A5Cu;
    // 80034A5C: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_80034A60:
    ctx->pc = 0x80034A60u;
    // 80034A60: stb     r0, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80034A64:
    ctx->pc = 0x80034A64u;
    // 80034A64: lwz     r0, 476(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(476);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80034A68:
    ctx->pc = 0x80034A68u;
    // 80034A68: stw     r0, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034A6C:
    ctx->pc = 0x80034A6Cu;
    ctx->downcount -= 4;
    // 80034A6C: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034A70:
    ctx->pc = 0x80034A70u;
    // 80034A70: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80034A74:
    ctx->pc = 0x80034A74u;
    // 80034A74: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80034A78:
    ctx->pc = 0x80034A78u;
    // 80034A78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034A7C:
    ctx->pc = 0x80034A7Cu;
    ctx->downcount -= 2;
    // 80034A7C: rlwinm. r0, r4, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80034A80:
    ctx->pc = 0x80034A80u;
    // 80034A80: bc    12, 2, 0x80034ABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80034ABC;
        }
    }

label_80034A84:
    ctx->pc = 0x80034A84u;
    ctx->downcount -= 14;
    // 80034A84: lwz     r7, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80034A88:
    ctx->pc = 0x80034A88u;
    // 80034A88: li      r0, 97
    ctx->gpr[0] = (u32)(s32)(97);

label_80034A8C:
    ctx->pc = 0x80034A8Cu;
    // 80034A8C: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_80034A90:
    ctx->pc = 0x80034A90u;
    // 80034A90: lwz     r6, 472(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(472);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80034A94:
    ctx->pc = 0x80034A94u;
    // 80034A94: rlwinm r6, r6, 0, 0, 30
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFFFFFEu;
    }

label_80034A98:
    ctx->pc = 0x80034A98u;
    // 80034A98: stb     r0, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80034A9C:
    ctx->pc = 0x80034A9Cu;
    // 80034A9C: ori     r6, r6, 0x0001
    ctx->gpr[6] = ctx->gpr[6] | 0x0001u;

label_80034AA0:
    ctx->pc = 0x80034AA0u;
    // 80034AA0: rlwinm r6, r6, 0, 31, 27
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFFFFF1u;
    }

label_80034AA4:
    ctx->pc = 0x80034AA4u;
    // 80034AA4: ori     r6, r6, 0x000E
    ctx->gpr[6] = ctx->gpr[6] | 0x000Eu;

label_80034AA8:
    ctx->pc = 0x80034AA8u;
    // 80034AA8: stw     r6, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80034AAC:
    ctx->pc = 0x80034AACu;
    // 80034AAC: lwz     r6, 464(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(464);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80034AB0:
    ctx->pc = 0x80034AB0u;
    // 80034AB0: stb     r0, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80034AB4:
    ctx->pc = 0x80034AB4u;
    // 80034AB4: rlwinm r0, r6, 0, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFFFFFCu;
    }

label_80034AB8:
    ctx->pc = 0x80034AB8u;
    // 80034AB8: stw     r0, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034ABC:
    ctx->pc = 0x80034ABCu;
    ctx->downcount -= 6;
    // 80034ABC: lwz     r6, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80034AC0:
    ctx->pc = 0x80034AC0u;
    // 80034AC0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80034AC4:
    ctx->pc = 0x80034AC4u;
    // 80034AC4: lbz     r5, 512(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(512);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80034AC8:
    ctx->pc = 0x80034AC8u;
    // 80034AC8: lwz     r7, 476(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(476);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80034ACC:
    ctx->pc = 0x80034ACCu;
    // 80034ACC: cmplwi  r5, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80034AD0:
    ctx->pc = 0x80034AD0u;
    // 80034AD0: bc    12, 2, 0x80034AEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80034AEC;
        }
    }

label_80034AD4:
    ctx->pc = 0x80034AD4u;
    ctx->downcount -= 3;
    // 80034AD4: rlwinm r5, r7, 0, 29, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x00000007u;
    }

label_80034AD8:
    ctx->pc = 0x80034AD8u;
    // 80034AD8: cmplwi  r5, 0x0003
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0003u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80034ADC:
    ctx->pc = 0x80034ADCu;
    // 80034ADC: bc    12, 2, 0x80034AEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80034AEC;
        }
    }

label_80034AE0:
    ctx->pc = 0x80034AE0u;
    ctx->downcount -= 3;
    // 80034AE0: rlwinm r0, r7, 0, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0xFFFFFFF8u;
    }

label_80034AE4:
    ctx->pc = 0x80034AE4u;
    // 80034AE4: ori     r7, r0, 0x0003
    ctx->gpr[7] = ctx->gpr[0] | 0x0003u;

label_80034AE8:
    ctx->pc = 0x80034AE8u;
    // 80034AE8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80034AEC:
    ctx->pc = 0x80034AECu;
    ctx->downcount -= 2;
    // 80034AEC: rlwinm. r5, r4, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80034AF0:
    ctx->pc = 0x80034AF0u;
    // 80034AF0: bc    4, 2, 0x80034B00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034B00;
        }
    }

label_80034AF4:
    ctx->pc = 0x80034AF4u;
    ctx->downcount -= 3;
    // 80034AF4: rlwinm r5, r7, 0, 29, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x00000007u;
    }

label_80034AF8:
    ctx->pc = 0x80034AF8u;
    // 80034AF8: cmplwi  r5, 0x0003
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0003u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80034AFC:
    ctx->pc = 0x80034AFCu;
    // 80034AFC: bc    4, 2, 0x80034B14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034B14;
        }
    }

label_80034B00:
    ctx->pc = 0x80034B00u;
    ctx->downcount -= 3;
    // 80034B00: rlwinm r5, r7, 26, 31, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[7], 26u) & 0x00000001u;
    }

label_80034B04:
    ctx->pc = 0x80034B04u;
    // 80034B04: cmplwi  r5, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80034B08:
    ctx->pc = 0x80034B08u;
    // 80034B08: bc    4, 2, 0x80034B14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034B14;
        }
    }

label_80034B0C:
    ctx->pc = 0x80034B0Cu;
    ctx->downcount -= 2;
    // 80034B0C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80034B10:
    ctx->pc = 0x80034B10u;
    // 80034B10: rlwinm r7, r7, 0, 26, 24
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0xFFFFFFBFu;
    }

label_80034B14:
    ctx->pc = 0x80034B14u;
    ctx->downcount -= 2;
    // 80034B14: rlwinm. r5, r0, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80034B18:
    ctx->pc = 0x80034B18u;
    // 80034B18: bc    12, 2, 0x80034B2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80034B2C;
        }
    }

label_80034B1C:
    ctx->pc = 0x80034B1Cu;
    ctx->downcount -= 4;
    // 80034B1C: li      r6, 97
    ctx->gpr[6] = (u32)(s32)(97);

label_80034B20:
    ctx->pc = 0x80034B20u;
    // 80034B20: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_80034B24:
    ctx->pc = 0x80034B24u;
    // 80034B24: stb     r6, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80034B28:
    ctx->pc = 0x80034B28u;
    // 80034B28: stw     r7, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80034B2C:
    ctx->pc = 0x80034B2Cu;
    ctx->downcount -= 33;
    // 80034B2C: li      r9, 97
    ctx->gpr[9] = (u32)(s32)(97);

label_80034B30:
    ctx->pc = 0x80034B30u;
    // 80034B30: lwz     r7, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80034B34:
    ctx->pc = 0x80034B34u;
    // 80034B34: lis     r8, -13311
    ctx->gpr[8] = ((u32)(s32)(-13311) << 16);

label_80034B38:
    ctx->pc = 0x80034B38u;
    // 80034B38: stb     r9, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_80034B3C:
    ctx->pc = 0x80034B3Cu;
    // 80034B3C: rlwinm r3, r3, 27, 8, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 27u) & 0x00FFFFFFu;
    }

label_80034B40:
    ctx->pc = 0x80034B40u;
    // 80034B40: oris    r10, r3, 0x4B00
    ctx->gpr[10] = ctx->gpr[3] | (0x4B00u << 16);

label_80034B44:
    ctx->pc = 0x80034B44u;
    // 80034B44: lwz     r6, 496(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(496);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80034B48:
    ctx->pc = 0x80034B48u;
    // 80034B48: rlwinm. r5, r4, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80034B4C:
    ctx->pc = 0x80034B4Cu;
    // 80034B4C: rlwinm r3, r4, 11, 13, 20
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 11u) & 0x0007F800u;
    }

label_80034B50:
    ctx->pc = 0x80034B50u;
    // 80034B50: stw     r6, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80034B54:
    ctx->pc = 0x80034B54u;
    // 80034B54: stb     r9, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_80034B58:
    ctx->pc = 0x80034B58u;
    // 80034B58: lwz     r4, 500(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(500);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80034B5C:
    ctx->pc = 0x80034B5Cu;
    // 80034B5C: stw     r4, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80034B60:
    ctx->pc = 0x80034B60u;
    // 80034B60: stb     r9, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_80034B64:
    ctx->pc = 0x80034B64u;
    // 80034B64: lwz     r4, 504(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(504);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80034B68:
    ctx->pc = 0x80034B68u;
    // 80034B68: stw     r4, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80034B6C:
    ctx->pc = 0x80034B6Cu;
    // 80034B6C: stb     r9, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_80034B70:
    ctx->pc = 0x80034B70u;
    // 80034B70: stw     r10, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80034B74:
    ctx->pc = 0x80034B74u;
    // 80034B74: lwz     r4, 508(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(508);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80034B78:
    ctx->pc = 0x80034B78u;
    // 80034B78: rlwinm r4, r4, 0, 21, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFF7FFu;
    }

label_80034B7C:
    ctx->pc = 0x80034B7Cu;
    // 80034B7C: or   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
    }

label_80034B80:
    ctx->pc = 0x80034B80u;
    // 80034B80: stw     r3, 508(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(508);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80034B84:
    ctx->pc = 0x80034B84u;
    // 80034B84: lwz     r3, 508(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(508);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034B88:
    ctx->pc = 0x80034B88u;
    // 80034B88: rlwinm r3, r3, 0, 18, 16
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFBFFFu;
    }

label_80034B8C:
    ctx->pc = 0x80034B8Cu;
    // 80034B8C: stw     r3, 508(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(508);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80034B90:
    ctx->pc = 0x80034B90u;
    // 80034B90: lwz     r3, 508(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(508);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034B94:
    ctx->pc = 0x80034B94u;
    // 80034B94: rlwinm r3, r3, 0, 8, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00FFFFFFu;
    }

label_80034B98:
    ctx->pc = 0x80034B98u;
    // 80034B98: oris    r3, r3, 0x5200
    ctx->gpr[3] = ctx->gpr[3] | (0x5200u << 16);

label_80034B9C:
    ctx->pc = 0x80034B9Cu;
    // 80034B9C: stw     r3, 508(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(508);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80034BA0:
    ctx->pc = 0x80034BA0u;
    // 80034BA0: stb     r9, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_80034BA4:
    ctx->pc = 0x80034BA4u;
    // 80034BA4: lwz     r3, 508(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(508);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034BA8:
    ctx->pc = 0x80034BA8u;
    // 80034BA8: stw     r3, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80034BAC:
    ctx->pc = 0x80034BACu;
    // 80034BAC: bc    12, 2, 0x80034BC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80034BC8;
        }
    }

label_80034BB0:
    ctx->pc = 0x80034BB0u;
    ctx->downcount -= 6;
    // 80034BB0: stb     r9, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_80034BB4:
    ctx->pc = 0x80034BB4u;
    // 80034BB4: lwz     r3, 472(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(472);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034BB8:
    ctx->pc = 0x80034BB8u;
    // 80034BB8: stw     r3, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80034BBC:
    ctx->pc = 0x80034BBCu;
    // 80034BBC: stb     r9, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_80034BC0:
    ctx->pc = 0x80034BC0u;
    // 80034BC0: lwz     r3, 464(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034BC4:
    ctx->pc = 0x80034BC4u;
    // 80034BC4: stw     r3, -32768(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80034BC8:
    ctx->pc = 0x80034BC8u;
    ctx->downcount -= 2;
    // 80034BC8: rlwinm. r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80034BCC:
    ctx->pc = 0x80034BCCu;
    // 80034BCC: bc    12, 2, 0x80034BE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80034BE8;
        }
    }

label_80034BD0:
    ctx->pc = 0x80034BD0u;
    ctx->downcount -= 6;
    // 80034BD0: li      r0, 97
    ctx->gpr[0] = (u32)(s32)(97);

label_80034BD4:
    ctx->pc = 0x80034BD4u;
    // 80034BD4: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034BD8:
    ctx->pc = 0x80034BD8u;
    // 80034BD8: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_80034BDC:
    ctx->pc = 0x80034BDCu;
    // 80034BDC: stb     r0, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80034BE0:
    ctx->pc = 0x80034BE0u;
    // 80034BE0: lwz     r0, 476(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(476);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80034BE4:
    ctx->pc = 0x80034BE4u;
    // 80034BE4: stw     r0, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034BE8:
    ctx->pc = 0x80034BE8u;
    ctx->downcount -= 4;
    // 80034BE8: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034BEC:
    ctx->pc = 0x80034BECu;
    // 80034BEC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80034BF0:
    ctx->pc = 0x80034BF0u;
    // 80034BF0: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80034BF4:
    ctx->pc = 0x80034BF4u;
    // 80034BF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034BF8:
    ctx->pc = 0x80034BF8u;
    ctx->downcount -= 14;
    // 80034BF8: li      r6, 97
    ctx->gpr[6] = (u32)(s32)(97);

label_80034BFC:
    ctx->pc = 0x80034BFCu;
    // 80034BFC: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034C00:
    ctx->pc = 0x80034C00u;
    // 80034C00: lis     r5, -13311
    ctx->gpr[5] = ((u32)(s32)(-13311) << 16);

label_80034C04:
    ctx->pc = 0x80034C04u;
    // 80034C04: lis     r4, 21760
    ctx->gpr[4] = ((u32)(s32)(21760) << 16);

label_80034C08:
    ctx->pc = 0x80034C08u;
    // 80034C08: stb     r6, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80034C0C:
    ctx->pc = 0x80034C0Cu;
    // 80034C0C: addi    r0, r4, 1023
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1023);

label_80034C10:
    ctx->pc = 0x80034C10u;
    // 80034C10: stw     r0, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034C14:
    ctx->pc = 0x80034C14u;
    // 80034C14: lis     r4, 22016
    ctx->gpr[4] = ((u32)(s32)(22016) << 16);

label_80034C18:
    ctx->pc = 0x80034C18u;
    // 80034C18: addi    r4, r4, 1023
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1023);

label_80034C1C:
    ctx->pc = 0x80034C1Cu;
    // 80034C1C: stb     r6, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80034C20:
    ctx->pc = 0x80034C20u;
    // 80034C20: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80034C24:
    ctx->pc = 0x80034C24u;
    // 80034C24: stw     r4, -32768(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80034C28:
    ctx->pc = 0x80034C28u;
    // 80034C28: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80034C2C:
    ctx->pc = 0x80034C2Cu;
    // 80034C2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034C30:
    ctx->pc = 0x80034C30u;
    ctx->downcount -= 4;
    // 80034C30: stfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80034C30u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80034C34:
    ctx->pc = 0x80034C34u;
    // 80034C34: stfs     f2, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80034C34u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_80034C38:
    ctx->pc = 0x80034C38u;
    // 80034C38: stfs     f3, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80034C38u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_80034C3C:
    ctx->pc = 0x80034C3Cu;
    // 80034C3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034C40:
    ctx->pc = 0x80034C40u;
    ctx->downcount -= 3;
    // 80034C40: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80034C44:
    ctx->pc = 0x80034C44u;
    // 80034C44: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034C48:
    ctx->pc = 0x80034C48u;
    // 80034C48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034C4C:
    ctx->pc = 0x80034C4Cu;
    ctx->downcount -= 31;
    // 80034C4C: cntlzw r0, r4
    {
        u32 v = ctx->gpr[4];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80034C50:
    ctx->pc = 0x80034C50u;
    // 80034C50: subfic  r0, r0, 31
    {
        u64 res = (u64)(u32)(s32)(31) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80034C54:
    ctx->pc = 0x80034C54u;
    // 80034C54: rlwinm r5, r0, 4, 25, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0x00000070u;
    }

label_80034C58:
    ctx->pc = 0x80034C58u;
    // 80034C58: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_80034C5C:
    ctx->pc = 0x80034C5Cu;
    // 80034C5C: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_80034C60:
    ctx->pc = 0x80034C60u;
    // 80034C60: addi    r5, r5, 1536
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1536);

label_80034C64:
    ctx->pc = 0x80034C64u;
    // 80034C64: stb     r0, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80034C68:
    ctx->pc = 0x80034C68u;
    // 80034C68: oris    r0, r5, 0x000F
    ctx->gpr[0] = ctx->gpr[5] | (0x000Fu << 16);

label_80034C6C:
    ctx->pc = 0x80034C6Cu;
    // 80034C6C: stwu     r0, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[4] = ea;
    }

label_80034C70:
    ctx->pc = 0x80034C70u;
    // 80034C70: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80034C74:
    ctx->pc = 0x80034C74u;
    // 80034C74: xor   r6, r6, r6
    {
        ctx->gpr[6] = ctx->gpr[6] ^ ctx->gpr[6];
    }

label_80034C78:
    ctx->pc = 0x80034C78u;
    // 80034C78: psq_l   f5, 16(r3), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80034C78u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ppc_psq_load_inline(ctx, 5u, ea, false, 0u, false, 0x80034C78u);
        if (ctx->exception) return;
    }

label_80034C7C:
    ctx->pc = 0x80034C7Cu;
    // 80034C7C: psq_l   f4, 24(r3), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80034C7Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 4u, ea, false, 0u, false, 0x80034C7Cu);
        if (ctx->exception) return;
    }

label_80034C80:
    ctx->pc = 0x80034C80u;
    // 80034C80: psq_l   f3, 32(r3), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80034C80u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ppc_psq_load_inline(ctx, 3u, ea, false, 0u, false, 0x80034C80u);
        if (ctx->exception) return;
    }

label_80034C84:
    ctx->pc = 0x80034C84u;
    // 80034C84: psq_l   f2, 40(r3), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80034C84u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 2u, ea, false, 0u, false, 0x80034C84u);
        if (ctx->exception) return;
    }

label_80034C88:
    ctx->pc = 0x80034C88u;
    // 80034C88: psq_l   f1, 48(r3), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80034C88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ppc_psq_load_inline(ctx, 1u, ea, false, 0u, false, 0x80034C88u);
        if (ctx->exception) return;
    }

label_80034C8C:
    ctx->pc = 0x80034C8Cu;
    // 80034C8C: psq_l   f0, 56(r3), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80034C8Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 0u, ea, false, 0u, false, 0x80034C8Cu);
        if (ctx->exception) return;
    }

label_80034C90:
    ctx->pc = 0x80034C90u;
    // 80034C90: stw     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80034C94:
    ctx->pc = 0x80034C94u;
    // 80034C94: stw     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80034C98:
    ctx->pc = 0x80034C98u;
    // 80034C98: stw     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80034C9C:
    ctx->pc = 0x80034C9Cu;
    // 80034C9C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034CA0:
    ctx->pc = 0x80034CA0u;
    // 80034CA0: psq_st   f5, 0(r4), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80034CA0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 5u, ea, false, 0u, false, 0x80034CA0u);
        if (ctx->exception) return;
    }

label_80034CA4:
    ctx->pc = 0x80034CA4u;
    // 80034CA4: psq_st   f4, 0(r4), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80034CA4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 4u, ea, false, 0u, false, 0x80034CA4u);
        if (ctx->exception) return;
    }

label_80034CA8:
    ctx->pc = 0x80034CA8u;
    // 80034CA8: psq_st   f3, 0(r4), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80034CA8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 3u, ea, false, 0u, false, 0x80034CA8u);
        if (ctx->exception) return;
    }

label_80034CAC:
    ctx->pc = 0x80034CACu;
    // 80034CAC: psq_st   f2, 0(r4), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80034CACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 2u, ea, false, 0u, false, 0x80034CACu);
        if (ctx->exception) return;
    }

label_80034CB0:
    ctx->pc = 0x80034CB0u;
    // 80034CB0: psq_st   f1, 0(r4), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80034CB0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 1u, ea, false, 0u, false, 0x80034CB0u);
        if (ctx->exception) return;
    }

label_80034CB4:
    ctx->pc = 0x80034CB4u;
    // 80034CB4: psq_st   f0, 0(r4), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80034CB4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 0u, ea, false, 0u, false, 0x80034CB4u);
        if (ctx->exception) return;
    }

label_80034CB8:
    ctx->pc = 0x80034CB8u;
    // 80034CB8: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034CBC:
    ctx->pc = 0x80034CBCu;
    // 80034CBC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80034CC0:
    ctx->pc = 0x80034CC0u;
    // 80034CC0: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80034CC4:
    ctx->pc = 0x80034CC4u;
    // 80034CC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034CC8:
    ctx->pc = 0x80034CC8u;
    ctx->downcount -= 2;
    // 80034CC8: cmpwi   r3, 3
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

label_80034CCC:
    ctx->pc = 0x80034CCCu;
    // 80034CCC: bc    12, 2, 0x80034D54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80034D54;
        }
    }

label_80034CD0:
    ctx->pc = 0x80034CD0u;
    ctx->downcount -= 1;
    // 80034CD0: bc    4, 0, 0x80034CEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034CEC;
        }
    }

label_80034CD4:
    ctx->pc = 0x80034CD4u;
    ctx->downcount -= 2;
    // 80034CD4: cmpwi   r3, 1
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

label_80034CD8:
    ctx->pc = 0x80034CD8u;
    // 80034CD8: bc    12, 2, 0x80034D1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80034D1C;
        }
    }

label_80034CDC:
    ctx->pc = 0x80034CDCu;
    ctx->downcount -= 1;
    // 80034CDC: bc    4, 0, 0x80034D3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034D3C;
        }
    }

label_80034CE0:
    ctx->pc = 0x80034CE0u;
    ctx->downcount -= 2;
    // 80034CE0: cmpwi   r3, 0
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

label_80034CE4:
    ctx->pc = 0x80034CE4u;
    // 80034CE4: bc    4, 0, 0x80034CFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034CFC;
        }
    }

label_80034CE8:
    ctx->pc = 0x80034CE8u;
    ctx->downcount -= 1;
    // 80034CE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034CEC:
    ctx->pc = 0x80034CECu;
    ctx->downcount -= 2;
    // 80034CEC: cmpwi   r3, 5
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80034CF0:
    ctx->pc = 0x80034CF0u;
    // 80034CF0: bc    12, 2, 0x80034D78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80034D78;
        }
    }

label_80034CF4:
    ctx->pc = 0x80034CF4u;
    ctx->downcount -= 1;
    // 80034CF4: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034CF8:
    ctx->pc = 0x80034CF8u;
    ctx->downcount -= 1;
    // 80034CF8: b       0x80034D6C
    {
            goto label_80034D6C;
    }

label_80034CFC:
    ctx->pc = 0x80034CFCu;
    ctx->downcount -= 8;
    // 80034CFC: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034D00:
    ctx->pc = 0x80034D00u;
    // 80034D00: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80034D04:
    ctx->pc = 0x80034D04u;
    // 80034D04: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80034D08:
    ctx->pc = 0x80034D08u;
    // 80034D08: lwz     r3, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034D0C:
    ctx->pc = 0x80034D0Cu;
    // 80034D0C: rlwinm r0, r0, 0, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF00u;
    }

label_80034D10:
    ctx->pc = 0x80034D10u;
    // 80034D10: or   r7, r0, r0
    {
        ctx->gpr[7] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80034D14:
    ctx->pc = 0x80034D14u;
    // 80034D14: rlwimi r7, r3, 0, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 0u);
        ctx->gpr[7] = (ctx->gpr[7] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

label_80034D18:
    ctx->pc = 0x80034D18u;
    // 80034D18: b       0x80034D88
    {
            goto label_80034D88;
    }

label_80034D1C:
    ctx->pc = 0x80034D1Cu;
    ctx->downcount -= 8;
    // 80034D1C: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034D20:
    ctx->pc = 0x80034D20u;
    // 80034D20: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80034D24:
    ctx->pc = 0x80034D24u;
    // 80034D24: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80034D28:
    ctx->pc = 0x80034D28u;
    // 80034D28: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034D2C:
    ctx->pc = 0x80034D2Cu;
    // 80034D2C: rlwinm r0, r0, 0, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF00u;
    }

label_80034D30:
    ctx->pc = 0x80034D30u;
    // 80034D30: or   r7, r0, r0
    {
        ctx->gpr[7] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80034D34:
    ctx->pc = 0x80034D34u;
    // 80034D34: rlwimi r7, r3, 0, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 0u);
        ctx->gpr[7] = (ctx->gpr[7] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

label_80034D38:
    ctx->pc = 0x80034D38u;
    // 80034D38: b       0x80034D88
    {
            goto label_80034D88;
    }

label_80034D3C:
    ctx->pc = 0x80034D3Cu;
    ctx->downcount -= 6;
    // 80034D3C: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034D40:
    ctx->pc = 0x80034D40u;
    // 80034D40: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80034D44:
    ctx->pc = 0x80034D44u;
    // 80034D44: lbz     r7, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80034D48:
    ctx->pc = 0x80034D48u;
    // 80034D48: lwz     r3, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034D4C:
    ctx->pc = 0x80034D4Cu;
    // 80034D4C: rlwimi r7, r3, 0, 0, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 0u);
        ctx->gpr[7] = (ctx->gpr[7] & ~0xFFFFFF00u) | (rot & 0xFFFFFF00u);
    }

label_80034D50:
    ctx->pc = 0x80034D50u;
    // 80034D50: b       0x80034D88
    {
            goto label_80034D88;
    }

label_80034D54:
    ctx->pc = 0x80034D54u;
    ctx->downcount -= 6;
    // 80034D54: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034D58:
    ctx->pc = 0x80034D58u;
    // 80034D58: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80034D5C:
    ctx->pc = 0x80034D5Cu;
    // 80034D5C: lbz     r7, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80034D60:
    ctx->pc = 0x80034D60u;
    // 80034D60: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034D64:
    ctx->pc = 0x80034D64u;
    // 80034D64: rlwimi r7, r3, 0, 0, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 0u);
        ctx->gpr[7] = (ctx->gpr[7] & ~0xFFFFFF00u) | (rot & 0xFFFFFF00u);
    }

label_80034D68:
    ctx->pc = 0x80034D68u;
    // 80034D68: b       0x80034D88
    {
            goto label_80034D88;
    }

label_80034D6C:
    ctx->pc = 0x80034D6Cu;
    ctx->downcount -= 3;
    // 80034D6C: lwz     r7, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80034D70:
    ctx->pc = 0x80034D70u;
    // 80034D70: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80034D74:
    ctx->pc = 0x80034D74u;
    // 80034D74: b       0x80034D88
    {
            goto label_80034D88;
    }

label_80034D78:
    ctx->pc = 0x80034D78u;
    ctx->downcount -= 3;
    // 80034D78: lwz     r7, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80034D7C:
    ctx->pc = 0x80034D7Cu;
    // 80034D7C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80034D80:
    ctx->pc = 0x80034D80u;
    // 80034D80: b       0x80034D88
    {
            goto label_80034D88;
    }

label_80034D84:
    ctx->pc = 0x80034D84u;
    ctx->downcount -= 1;
    // 80034D84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034D88:
    ctx->pc = 0x80034D88u;
    ctx->downcount -= 13;
    // 80034D88: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_80034D8C:
    ctx->pc = 0x80034D8Cu;
    // 80034D8C: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80034D90:
    ctx->pc = 0x80034D90u;
    // 80034D90: lis     r6, -13311
    ctx->gpr[6] = ((u32)(s32)(-13311) << 16);

label_80034D94:
    ctx->pc = 0x80034D94u;
    // 80034D94: stb     r0, -32768(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80034D98:
    ctx->pc = 0x80034D98u;
    // 80034D98: addi    r3, r5, 4106
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(4106);

label_80034D9C:
    ctx->pc = 0x80034D9Cu;
    // 80034D9C: rlwinm r0, r5, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_80034DA0:
    ctx->pc = 0x80034DA0u;
    // 80034DA0: stw     r3, -32768(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80034DA4:
    ctx->pc = 0x80034DA4u;
    // 80034DA4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80034DA8:
    ctx->pc = 0x80034DA8u;
    // 80034DA8: add   r3, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80034DAC:
    ctx->pc = 0x80034DACu;
    // 80034DAC: stw     r7, -32768(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80034DB0:
    ctx->pc = 0x80034DB0u;
    // 80034DB0: sth     r5, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_80034DB4:
    ctx->pc = 0x80034DB4u;
    // 80034DB4: stw     r7, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80034DB8:
    ctx->pc = 0x80034DB8u;
    // 80034DB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034DBC:
    ctx->pc = 0x80034DBCu;
    ctx->downcount -= 2;
    // 80034DBC: cmpwi   r3, 3
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

label_80034DC0:
    ctx->pc = 0x80034DC0u;
    // 80034DC0: bc    12, 2, 0x80034E48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80034E48;
        }
    }

label_80034DC4:
    ctx->pc = 0x80034DC4u;
    ctx->downcount -= 1;
    // 80034DC4: bc    4, 0, 0x80034DE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034DE0;
        }
    }

label_80034DC8:
    ctx->pc = 0x80034DC8u;
    ctx->downcount -= 2;
    // 80034DC8: cmpwi   r3, 1
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

label_80034DCC:
    ctx->pc = 0x80034DCCu;
    // 80034DCC: bc    12, 2, 0x80034E10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80034E10;
        }
    }

label_80034DD0:
    ctx->pc = 0x80034DD0u;
    ctx->downcount -= 1;
    // 80034DD0: bc    4, 0, 0x80034E30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034E30;
        }
    }

label_80034DD4:
    ctx->pc = 0x80034DD4u;
    ctx->downcount -= 2;
    // 80034DD4: cmpwi   r3, 0
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

label_80034DD8:
    ctx->pc = 0x80034DD8u;
    // 80034DD8: bc    4, 0, 0x80034DF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034DF0;
        }
    }

label_80034DDC:
    ctx->pc = 0x80034DDCu;
    ctx->downcount -= 1;
    // 80034DDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034DE0:
    ctx->pc = 0x80034DE0u;
    ctx->downcount -= 2;
    // 80034DE0: cmpwi   r3, 5
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80034DE4:
    ctx->pc = 0x80034DE4u;
    // 80034DE4: bc    12, 2, 0x80034E6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80034E6C;
        }
    }

label_80034DE8:
    ctx->pc = 0x80034DE8u;
    ctx->downcount -= 1;
    // 80034DE8: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034DEC:
    ctx->pc = 0x80034DECu;
    ctx->downcount -= 1;
    // 80034DEC: b       0x80034E60
    {
            goto label_80034E60;
    }

label_80034DF0:
    ctx->pc = 0x80034DF0u;
    ctx->downcount -= 8;
    // 80034DF0: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034DF4:
    ctx->pc = 0x80034DF4u;
    // 80034DF4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80034DF8:
    ctx->pc = 0x80034DF8u;
    // 80034DF8: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80034DFC:
    ctx->pc = 0x80034DFCu;
    // 80034DFC: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034E00:
    ctx->pc = 0x80034E00u;
    // 80034E00: rlwinm r0, r0, 0, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF00u;
    }

label_80034E04:
    ctx->pc = 0x80034E04u;
    // 80034E04: or   r7, r0, r0
    {
        ctx->gpr[7] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80034E08:
    ctx->pc = 0x80034E08u;
    // 80034E08: rlwimi r7, r3, 0, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 0u);
        ctx->gpr[7] = (ctx->gpr[7] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

label_80034E0C:
    ctx->pc = 0x80034E0Cu;
    // 80034E0C: b       0x80034E7C
    {
            goto label_80034E7C;
    }

label_80034E10:
    ctx->pc = 0x80034E10u;
    ctx->downcount -= 8;
    // 80034E10: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034E14:
    ctx->pc = 0x80034E14u;
    // 80034E14: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80034E18:
    ctx->pc = 0x80034E18u;
    // 80034E18: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80034E1C:
    ctx->pc = 0x80034E1Cu;
    // 80034E1C: lwz     r3, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034E20:
    ctx->pc = 0x80034E20u;
    // 80034E20: rlwinm r0, r0, 0, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF00u;
    }

label_80034E24:
    ctx->pc = 0x80034E24u;
    // 80034E24: or   r7, r0, r0
    {
        ctx->gpr[7] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80034E28:
    ctx->pc = 0x80034E28u;
    // 80034E28: rlwimi r7, r3, 0, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 0u);
        ctx->gpr[7] = (ctx->gpr[7] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

label_80034E2C:
    ctx->pc = 0x80034E2Cu;
    // 80034E2C: b       0x80034E7C
    {
            goto label_80034E7C;
    }

label_80034E30:
    ctx->pc = 0x80034E30u;
    ctx->downcount -= 6;
    // 80034E30: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034E34:
    ctx->pc = 0x80034E34u;
    // 80034E34: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80034E38:
    ctx->pc = 0x80034E38u;
    // 80034E38: lbz     r7, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80034E3C:
    ctx->pc = 0x80034E3Cu;
    // 80034E3C: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034E40:
    ctx->pc = 0x80034E40u;
    // 80034E40: rlwimi r7, r3, 0, 0, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 0u);
        ctx->gpr[7] = (ctx->gpr[7] & ~0xFFFFFF00u) | (rot & 0xFFFFFF00u);
    }

label_80034E44:
    ctx->pc = 0x80034E44u;
    // 80034E44: b       0x80034E7C
    {
            goto label_80034E7C;
    }

label_80034E48:
    ctx->pc = 0x80034E48u;
    ctx->downcount -= 6;
    // 80034E48: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034E4C:
    ctx->pc = 0x80034E4Cu;
    // 80034E4C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80034E50:
    ctx->pc = 0x80034E50u;
    // 80034E50: lbz     r7, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80034E54:
    ctx->pc = 0x80034E54u;
    // 80034E54: lwz     r3, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034E58:
    ctx->pc = 0x80034E58u;
    // 80034E58: rlwimi r7, r3, 0, 0, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 0u);
        ctx->gpr[7] = (ctx->gpr[7] & ~0xFFFFFF00u) | (rot & 0xFFFFFF00u);
    }

label_80034E5C:
    ctx->pc = 0x80034E5Cu;
    // 80034E5C: b       0x80034E7C
    {
            goto label_80034E7C;
    }

label_80034E60:
    ctx->pc = 0x80034E60u;
    ctx->downcount -= 3;
    // 80034E60: lwz     r7, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80034E64:
    ctx->pc = 0x80034E64u;
    // 80034E64: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80034E68:
    ctx->pc = 0x80034E68u;
    // 80034E68: b       0x80034E7C
    {
            goto label_80034E7C;
    }

label_80034E6C:
    ctx->pc = 0x80034E6Cu;
    ctx->downcount -= 3;
    // 80034E6C: lwz     r7, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80034E70:
    ctx->pc = 0x80034E70u;
    // 80034E70: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80034E74:
    ctx->pc = 0x80034E74u;
    // 80034E74: b       0x80034E7C
    {
            goto label_80034E7C;
    }

label_80034E78:
    ctx->pc = 0x80034E78u;
    ctx->downcount -= 1;
    // 80034E78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034E7C:
    ctx->pc = 0x80034E7Cu;
    ctx->downcount -= 13;
    // 80034E7C: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_80034E80:
    ctx->pc = 0x80034E80u;
    // 80034E80: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80034E84:
    ctx->pc = 0x80034E84u;
    // 80034E84: lis     r6, -13311
    ctx->gpr[6] = ((u32)(s32)(-13311) << 16);

label_80034E88:
    ctx->pc = 0x80034E88u;
    // 80034E88: stb     r0, -32768(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80034E8C:
    ctx->pc = 0x80034E8Cu;
    // 80034E8C: addi    r3, r5, 4108
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(4108);

label_80034E90:
    ctx->pc = 0x80034E90u;
    // 80034E90: rlwinm r0, r5, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_80034E94:
    ctx->pc = 0x80034E94u;
    // 80034E94: stw     r3, -32768(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80034E98:
    ctx->pc = 0x80034E98u;
    // 80034E98: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80034E9C:
    ctx->pc = 0x80034E9Cu;
    // 80034E9C: add   r3, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80034EA0:
    ctx->pc = 0x80034EA0u;
    // 80034EA0: stw     r7, -32768(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80034EA4:
    ctx->pc = 0x80034EA4u;
    // 80034EA4: sth     r5, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_80034EA8:
    ctx->pc = 0x80034EA8u;
    // 80034EA8: stw     r7, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80034EAC:
    ctx->pc = 0x80034EACu;
    // 80034EAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034EB0:
    ctx->pc = 0x80034EB0u;
    ctx->downcount -= 17;
    // 80034EB0: lwz     r6, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80034EB4:
    ctx->pc = 0x80034EB4u;
    // 80034EB4: rlwinm r0, r3, 4, 20, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0x00000FF0u;
    }

label_80034EB8:
    ctx->pc = 0x80034EB8u;
    // 80034EB8: rlwinm r8, r3, 0, 24, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_80034EBC:
    ctx->pc = 0x80034EBCu;
    // 80034EBC: lwz     r5, 516(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(516);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80034EC0:
    ctx->pc = 0x80034EC0u;
    // 80034EC0: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_80034EC4:
    ctx->pc = 0x80034EC4u;
    // 80034EC4: lis     r3, -13311
    ctx->gpr[3] = ((u32)(s32)(-13311) << 16);

label_80034EC8:
    ctx->pc = 0x80034EC8u;
    // 80034EC8: rlwinm r5, r5, 0, 28, 24
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFFFF8Fu;
    }

label_80034ECC:
    ctx->pc = 0x80034ECCu;
    // 80034ECC: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80034ED0:
    ctx->pc = 0x80034ED0u;
    // 80034ED0: stw     r0, 516(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034ED4:
    ctx->pc = 0x80034ED4u;
    // 80034ED4: li      r0, 4105
    ctx->gpr[0] = (u32)(s32)(4105);

label_80034ED8:
    ctx->pc = 0x80034ED8u;
    // 80034ED8: stb     r4, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_80034EDC:
    ctx->pc = 0x80034EDCu;
    // 80034EDC: stw     r0, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034EE0:
    ctx->pc = 0x80034EE0u;
    // 80034EE0: stw     r8, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_80034EE4:
    ctx->pc = 0x80034EE4u;
    // 80034EE4: lwz     r0, 1268(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80034EE8:
    ctx->pc = 0x80034EE8u;
    // 80034EE8: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_80034EEC:
    ctx->pc = 0x80034EECu;
    // 80034EEC: stw     r0, 1268(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034EF0:
    ctx->pc = 0x80034EF0u;
    // 80034EF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034EF4:
    ctx->pc = 0x80034EF4u;
    ctx->downcount -= 8;
    // 80034EF4: rlwinm r0, r4, 1, 23, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 1u) & 0x000001FEu;
    }

label_80034EF8:
    ctx->pc = 0x80034EF8u;
    // 80034EF8: or   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[6];
    }

label_80034EFC:
    ctx->pc = 0x80034EFCu;
    // 80034EFC: rlwinm r4, r0, 0, 26, 24
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFBFu;
    }

label_80034F00:
    ctx->pc = 0x80034F00u;
    // 80034F00: rlwinm r0, r5, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 6u) & 0xFFFFFFC0u;
    }

label_80034F04:
    ctx->pc = 0x80034F04u;
    // 80034F04: cmpwi   r9, 0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80034F08:
    ctx->pc = 0x80034F08u;
    // 80034F08: rlwinm r10, r3, 0, 30, 31
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000003u;
    }

label_80034F0C:
    ctx->pc = 0x80034F0Cu;
    // 80034F0C: or   r6, r4, r0
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80034F10:
    ctx->pc = 0x80034F10u;
    // 80034F10: bc    4, 2, 0x80034F18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034F18;
        }
    }

label_80034F14:
    ctx->pc = 0x80034F14u;
    ctx->downcount -= 1;
    // 80034F14: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80034F18:
    ctx->pc = 0x80034F18u;
    ctx->downcount -= 27;
    // 80034F18: subfic  r4, r9, 2
    {
        u64 res = (u64)(u32)(s32)(2) + (u64)(~ctx->gpr[9]) + 1u;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80034F1C:
    ctx->pc = 0x80034F1Cu;
    // 80034F1C: addic   r0, r4, -1
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80034F20:
    ctx->pc = 0x80034F20u;
    // 80034F20: subfe   r5, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80034F24:
    ctx->pc = 0x80034F24u;
    // 80034F24: neg  r4, r9
    {
        u32 a = ctx->gpr[9];
        ctx->gpr[4] = (~a) + 1u;
    }

label_80034F28:
    ctx->pc = 0x80034F28u;
    // 80034F28: addic   r0, r4, -1
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80034F2C:
    ctx->pc = 0x80034F2Cu;
    // 80034F2C: subfe   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80034F30:
    ctx->pc = 0x80034F30u;
    // 80034F30: rlwinm r6, r6, 0, 25, 22
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFFFE7Fu;
    }

label_80034F34:
    ctx->pc = 0x80034F34u;
    // 80034F34: rlwinm r4, r8, 7, 0, 24
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[8], 7u) & 0xFFFFFF80u;
    }

label_80034F38:
    ctx->pc = 0x80034F38u;
    // 80034F38: or   r4, r6, r4
    {
        ctx->gpr[4] = ctx->gpr[6] | ctx->gpr[4];
    }

label_80034F3C:
    ctx->pc = 0x80034F3Cu;
    // 80034F3C: rlwinm r6, r4, 0, 23, 21
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFDFFu;
    }

label_80034F40:
    ctx->pc = 0x80034F40u;
    // 80034F40: rlwinm r4, r5, 9, 0, 22
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[5], 9u) & 0xFFFFFE00u;
    }

label_80034F44:
    ctx->pc = 0x80034F44u;
    // 80034F44: or   r4, r6, r4
    {
        ctx->gpr[4] = ctx->gpr[6] | ctx->gpr[4];
    }

label_80034F48:
    ctx->pc = 0x80034F48u;
    // 80034F48: rlwinm r4, r4, 0, 22, 20
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFBFFu;
    }

label_80034F4C:
    ctx->pc = 0x80034F4Cu;
    // 80034F4C: rlwinm r0, r0, 10, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 10u) & 0xFFFFFC00u;
    }

label_80034F50:
    ctx->pc = 0x80034F50u;
    // 80034F50: or   r6, r4, r0
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80034F54:
    ctx->pc = 0x80034F54u;
    // 80034F54: rlwinm r6, r6, 0, 30, 25
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFFFFC3u;
    }

label_80034F58:
    ctx->pc = 0x80034F58u;
    // 80034F58: rlwimi r6, r7, 2, 26, 29
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 2u);
        ctx->gpr[6] = (ctx->gpr[6] & ~0x0000003Cu) | (rot & 0x0000003Cu);
    }

label_80034F5C:
    ctx->pc = 0x80034F5Cu;
    // 80034F5C: rlwinm r6, r6, 0, 21, 16
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFF87FFu;
    }

label_80034F60:
    ctx->pc = 0x80034F60u;
    // 80034F60: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_80034F64:
    ctx->pc = 0x80034F64u;
    // 80034F64: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_80034F68:
    ctx->pc = 0x80034F68u;
    // 80034F68: stb     r5, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80034F6C:
    ctx->pc = 0x80034F6Cu;
    // 80034F6C: addi    r0, r10, 4110
    ctx->gpr[0] = ctx->gpr[10] + (u32)(s32)(4110);

label_80034F70:
    ctx->pc = 0x80034F70u;
    // 80034F70: rlwimi r6, r7, 7, 17, 20
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 7u);
        ctx->gpr[6] = (ctx->gpr[6] & ~0x00007800u) | (rot & 0x00007800u);
    }

label_80034F74:
    ctx->pc = 0x80034F74u;
    // 80034F74: stw     r0, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034F78:
    ctx->pc = 0x80034F78u;
    // 80034F78: cmpwi   r3, 4
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

label_80034F7C:
    ctx->pc = 0x80034F7Cu;
    // 80034F7C: stw     r6, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80034F80:
    ctx->pc = 0x80034F80u;
    // 80034F80: bc    4, 2, 0x80034F98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034F98;
        }
    }

label_80034F84:
    ctx->pc = 0x80034F84u;
    ctx->downcount -= 5;
    // 80034F84: stb     r5, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80034F88:
    ctx->pc = 0x80034F88u;
    // 80034F88: li      r0, 4112
    ctx->gpr[0] = (u32)(s32)(4112);

label_80034F8C:
    ctx->pc = 0x80034F8Cu;
    // 80034F8C: stw     r0, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034F90:
    ctx->pc = 0x80034F90u;
    // 80034F90: stw     r6, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80034F94:
    ctx->pc = 0x80034F94u;
    // 80034F94: b       0x80034FB0
    {
            goto label_80034FB0;
    }

label_80034F98:
    ctx->pc = 0x80034F98u;
    ctx->downcount -= 2;
    // 80034F98: cmpwi   r3, 5
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80034F9C:
    ctx->pc = 0x80034F9Cu;
    // 80034F9C: bc    4, 2, 0x80034FB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80034FB0;
        }
    }

label_80034FA0:
    ctx->pc = 0x80034FA0u;
    ctx->downcount -= 4;
    // 80034FA0: stb     r5, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80034FA4:
    ctx->pc = 0x80034FA4u;
    // 80034FA4: li      r0, 4113
    ctx->gpr[0] = (u32)(s32)(4113);

label_80034FA8:
    ctx->pc = 0x80034FA8u;
    // 80034FA8: stw     r0, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80034FAC:
    ctx->pc = 0x80034FACu;
    // 80034FAC: stw     r6, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80034FB0:
    ctx->pc = 0x80034FB0u;
    ctx->downcount -= 4;
    // 80034FB0: lwz     r3, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80034FB4:
    ctx->pc = 0x80034FB4u;
    // 80034FB4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80034FB8:
    ctx->pc = 0x80034FB8u;
    // 80034FB8: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80034FBC:
    ctx->pc = 0x80034FBCu;
    // 80034FBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80034FC0:
    ctx->pc = 0x80034FC0u;
    ctx->downcount -= 4;
    // 80034FC0: stwu     r1, -40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-40);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80034FC4:
    ctx->pc = 0x80034FC4u;
    // 80034FC4: cmplwi  r5, 0x003C
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x003Cu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80034FC8:
    ctx->pc = 0x80034FC8u;
    // 80034FC8: stw     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80034FCC:
    ctx->pc = 0x80034FCCu;
    // 80034FCC: bc    12, 1, 0x8003500C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003500C;
        }
    }

label_80034FD0:
    ctx->pc = 0x80034FD0u;
    ctx->downcount -= 7;
    // 80034FD0: lis     r8, -32760
    ctx->gpr[8] = ((u32)(s32)(-32760) << 16);

label_80034FD4:
    ctx->pc = 0x80034FD4u;
    // 80034FD4: addi    r8, r8, -1544
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-1544);

label_80034FD8:
    ctx->pc = 0x80034FD8u;
    // 80034FD8: rlwinm r0, r5, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_80034FDC:
    ctx->pc = 0x80034FDCu;
    // 80034FDC: lwzx    r0, r8, r0
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80034FE0:
    ctx->pc = 0x80034FE0u;
    // 80034FE0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80034FE4:
    ctx->pc = 0x80034FE4u;
    // 80034FE4: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80034FE8:
    ctx->pc = 0x80034FE8u;
    ctx->downcount -= 3;
    // 80034FE8: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_80034FEC:
    ctx->pc = 0x80034FECu;
    // 80034FEC: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_80034FF0:
    ctx->pc = 0x80034FF0u;
    // 80034FF0: b       0x80035014
    {
            goto label_80035014;
    }

label_80034FF4:
    ctx->pc = 0x80034FF4u;
    ctx->downcount -= 3;
    // 80034FF4: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_80034FF8:
    ctx->pc = 0x80034FF8u;
    // 80034FF8: li      r8, 2
    ctx->gpr[8] = (u32)(s32)(2);

label_80034FFC:
    ctx->pc = 0x80034FFCu;
    // 80034FFC: b       0x80035014
    {
            goto label_80035014;
    }

label_80035000:
    ctx->pc = 0x80035000u;
    ctx->downcount -= 3;
    // 80035000: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80035004:
    ctx->pc = 0x80035004u;
    // 80035004: li      r8, 2
    ctx->gpr[8] = (u32)(s32)(2);

label_80035008:
    ctx->pc = 0x80035008u;
    // 80035008: b       0x80035014
    {
            goto label_80035014;
    }

label_8003500C:
    ctx->pc = 0x8003500Cu;
    ctx->downcount -= 2;
    // 8003500C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80035010:
    ctx->pc = 0x80035010u;
    // 80035010: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80035014:
    ctx->pc = 0x80035014u;
    ctx->downcount -= 2;
    // 80035014: cmplwi  r5, 0x0006
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0006u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80035018:
    ctx->pc = 0x80035018u;
    // 80035018: bc    12, 2, 0x80035024
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80035024;
        }
    }

label_8003501C:
    ctx->pc = 0x8003501Cu;
    ctx->downcount -= 2;
    // 8003501C: cmplwi  r5, 0x0016
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0016u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80035020:
    ctx->pc = 0x80035020u;
    // 80035020: bc    4, 2, 0x8003502C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003502C;
        }
    }

label_80035024:
    ctx->pc = 0x80035024u;
    ctx->downcount -= 2;
    // 80035024: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80035028:
    ctx->pc = 0x80035028u;
    // 80035028: b       0x80035030
    {
            goto label_80035030;
    }

label_8003502C:
    ctx->pc = 0x8003502Cu;
    ctx->downcount -= 1;
    // 8003502C: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_80035030:
    ctx->pc = 0x80035030u;
    ctx->downcount -= 3;
    // 80035030: rlwinm r6, r6, 0, 24, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x000000FFu;
    }

label_80035034:
    ctx->pc = 0x80035034u;
    // 80035034: cmplwi  r6, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80035038:
    ctx->pc = 0x80035038u;
    // 80035038: bc    4, 2, 0x800350D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800350D8;
        }
    }

label_8003503C:
    ctx->pc = 0x8003503Cu;
    ctx->downcount -= 11;
    // 8003503C: rlwinm r9, r7, 0, 24, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x000000FFu;
    }

label_80035040:
    ctx->pc = 0x80035040u;
    // 80035040: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80035044:
    ctx->pc = 0x80035044u;
    // 80035044: mtctr    r9
    ctx->ctr = ctx->gpr[9];

label_80035048:
    ctx->pc = 0x80035048u;
    // 80035048: slw   r7, r6, r8
    {
        u32 sh = ctx->gpr[8] & 0x3Fu;
        ctx->gpr[7] = sh > 31 ? 0u : (ctx->gpr[6] << sh);
    }

label_8003504C:
    ctx->pc = 0x8003504Cu;
    // 8003504C: slw   r6, r6, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[6] = sh > 31 ? 0u : (ctx->gpr[6] << sh);
    }

label_80035050:
    ctx->pc = 0x80035050u;
    // 80035050: cmplwi  r9, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[9]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80035054:
    ctx->pc = 0x80035054u;
    // 80035054: addi    r10, r6, -1
    ctx->gpr[10] = ctx->gpr[6] + (u32)(s32)(-1);

label_80035058:
    ctx->pc = 0x80035058u;
    // 80035058: addi    r7, r7, -1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-1);

label_8003505C:
    ctx->pc = 0x8003505Cu;
    // 8003505C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80035060:
    ctx->pc = 0x80035060u;
    // 80035060: bc    4, 1, 0x8003510C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003510C;
        }
    }

label_80035064:
    ctx->downcount -= 19;
    // 80035064: rlwinm r11, r3, 0, 16, 31
    {
        ctx->gpr[11] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_80035068:
    // 80035068: add   r6, r11, r10
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8003506C:
    // 8003506C: rlwinm r12, r4, 0, 16, 31
    {
        ctx->gpr[12] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x0000FFFFu;
    }

label_80035070:
    // 80035070: sraw   r9, r6, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        u32 value = ctx->gpr[6];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[9] = value;
        } else if (sh > 31) {
            ctx->gpr[9] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[9] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_80035074:
    // 80035074: add   r6, r12, r7
    {
        u32 a = ctx->gpr[12];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80035078:
    // 80035078: sraw   r6, r6, r8
    {
        u32 sh = ctx->gpr[8] & 0x3Fu;
        u32 value = ctx->gpr[6];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[6] = value;
        } else if (sh > 31) {
            ctx->gpr[6] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[6] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8003507C:
    // 8003507C: mullw   r6, r9, r6
    {
        s64 product = (s64)(s32)ctx->gpr[9] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[6] = (u32)product;
    }

label_80035080:
    // 80035080: mullw   r6, r5, r6
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[6] = (u32)product;
    }

label_80035084:
    // 80035084: cmplwi  r11, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[11]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80035088:
    // 80035088: add   r31, r31, r6
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_8003508C:
    // 8003508C: bc    4, 2, 0x80035098
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80035098;
        }
    }

label_80035090:
    ctx->downcount -= 2;
    // 80035090: cmplwi  r12, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[12]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80035094:
    // 80035094: bc    12, 2, 0x8003510C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003510C;
        }
    }

label_80035098:
    ctx->downcount -= 3;
    // 80035098: rlwinm r3, r3, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_8003509C:
    // 8003509C: cmplwi  r3, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800350A0:
    // 800350A0: bc    4, 1, 0x800350AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800350AC;
        }
    }

label_800350A4:
    ctx->downcount -= 2;
    // 800350A4: srawi r6, r11, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[11];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[6] = value;
        } else if (sh > 31) {
            ctx->gpr[6] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[6] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_800350A8:
    // 800350A8: b       0x800350B0
    {
            goto label_800350B0;
    }

label_800350AC:
    ctx->downcount -= 1;
    // 800350AC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_800350B0:
    ctx->downcount -= 4;
    // 800350B0: rlwinm r3, r4, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x0000FFFFu;
    }

label_800350B4:
    // 800350B4: cmplwi  r3, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800350B8:
    // 800350B8: rlwinm r3, r6, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x0000FFFFu;
    }

label_800350BC:
    // 800350BC: bc    4, 1, 0x800350C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800350C8;
        }
    }

label_800350C0:
    ctx->downcount -= 2;
    // 800350C0: srawi r4, r12, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[12];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[4] = value;
        } else if (sh > 31) {
            ctx->gpr[4] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[4] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_800350C4:
    // 800350C4: b       0x800350CC
    {
            goto label_800350CC;
    }

label_800350C8:
    ctx->downcount -= 1;
    // 800350C8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_800350CC:
    ctx->downcount -= 2;
    // 800350CC: rlwinm r4, r4, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x0000FFFFu;
    }

label_800350D0:
    // 800350D0: bc    16, 0, 0x80035064
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80035064u;
                return;
            }
            goto label_80035064;
        }
    }

label_800350D4:
    ctx->pc = 0x800350D4u;
    ctx->downcount -= 1;
    // 800350D4: b       0x8003510C
    {
            goto label_8003510C;
    }

label_800350D8:
    ctx->pc = 0x800350D8u;
    ctx->downcount -= 21;
    // 800350D8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_800350DC:
    ctx->pc = 0x800350DCu;
    // 800350DC: slw   r7, r6, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[7] = sh > 31 ? 0u : (ctx->gpr[6] << sh);
    }

label_800350E0:
    ctx->pc = 0x800350E0u;
    // 800350E0: slw   r6, r6, r8
    {
        u32 sh = ctx->gpr[8] & 0x3Fu;
        ctx->gpr[6] = sh > 31 ? 0u : (ctx->gpr[6] << sh);
    }

label_800350E4:
    ctx->pc = 0x800350E4u;
    // 800350E4: rlwinm r9, r3, 0, 16, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_800350E8:
    ctx->pc = 0x800350E8u;
    // 800350E8: addi    r3, r7, -1
    ctx->gpr[3] = ctx->gpr[7] + (u32)(s32)(-1);

label_800350EC:
    ctx->pc = 0x800350ECu;
    // 800350EC: add   r7, r9, r3
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_800350F0:
    ctx->pc = 0x800350F0u;
    // 800350F0: rlwinm r4, r4, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x0000FFFFu;
    }

label_800350F4:
    ctx->pc = 0x800350F4u;
    // 800350F4: addi    r3, r6, -1
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(-1);

label_800350F8:
    ctx->pc = 0x800350F8u;
    // 800350F8: sraw   r6, r7, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        u32 value = ctx->gpr[7];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[6] = value;
        } else if (sh > 31) {
            ctx->gpr[6] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[6] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_800350FC:
    ctx->pc = 0x800350FCu;
    // 800350FC: add   r0, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80035100:
    ctx->pc = 0x80035100u;
    // 80035100: sraw   r0, r0, r8
    {
        u32 sh = ctx->gpr[8] & 0x3Fu;
        u32 value = ctx->gpr[0];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[0] = value;
        } else if (sh > 31) {
            ctx->gpr[0] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[0] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_80035104:
    ctx->pc = 0x80035104u;
    // 80035104: mullw   r0, r6, r0
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80035108:
    ctx->pc = 0x80035108u;
    // 80035108: mullw   r31, r5, r0
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[31] = (u32)product;
    }

label_8003510C:
    ctx->pc = 0x8003510Cu;
    ctx->downcount -= 4;
    // 8003510C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80035110:
    ctx->pc = 0x80035110u;
    // 80035110: lwz     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80035114:
    ctx->pc = 0x80035114u;
    // 80035114: addi    r1, r1, 40
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(40);

label_80035118:
    ctx->pc = 0x80035118u;
    // 80035118: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_8003511C:
    ctx->pc = 0x8003511Cu;
    ctx->downcount -= 2;
    // 8003511C: cmplwi  r3, 0x003C
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x003Cu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80035120:
    ctx->pc = 0x80035120u;
    // 80035120: bc    12, 1, 0x80035160
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80035160;
        }
    }

label_80035124:
    ctx->pc = 0x80035124u;
    ctx->downcount -= 7;
    // 80035124: lis     r9, -32760
    ctx->gpr[9] = ((u32)(s32)(-32760) << 16);

label_80035128:
    ctx->pc = 0x80035128u;
    // 80035128: addi    r9, r9, -1300
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-1300);

label_8003512C:
    ctx->pc = 0x8003512Cu;
    // 8003512C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80035130:
    ctx->pc = 0x80035130u;
    // 80035130: lwzx    r0, r9, r0
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80035134:
    ctx->pc = 0x80035134u;
    // 80035134: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80035138:
    ctx->pc = 0x80035138u;
    // 80035138: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8003513C:
    ctx->pc = 0x8003513Cu;
    ctx->downcount -= 3;
    // 8003513C: li      r11, 3
    ctx->gpr[11] = (u32)(s32)(3);

label_80035140:
    ctx->pc = 0x80035140u;
    // 80035140: li      r12, 3
    ctx->gpr[12] = (u32)(s32)(3);

label_80035144:
    ctx->pc = 0x80035144u;
    // 80035144: b       0x80035168
    {
            goto label_80035168;
    }

label_80035148:
    ctx->pc = 0x80035148u;
    ctx->downcount -= 3;
    // 80035148: li      r11, 3
    ctx->gpr[11] = (u32)(s32)(3);

label_8003514C:
    ctx->pc = 0x8003514Cu;
    // 8003514C: li      r12, 2
    ctx->gpr[12] = (u32)(s32)(2);

label_80035150:
    ctx->pc = 0x80035150u;
    // 80035150: b       0x80035168
    {
            goto label_80035168;
    }

label_80035154:
    ctx->pc = 0x80035154u;
    ctx->downcount -= 3;
    // 80035154: li      r11, 2
    ctx->gpr[11] = (u32)(s32)(2);

label_80035158:
    ctx->pc = 0x80035158u;
    // 80035158: li      r12, 2
    ctx->gpr[12] = (u32)(s32)(2);

label_8003515C:
    ctx->pc = 0x8003515Cu;
    // 8003515C: b       0x80035168
    {
            goto label_80035168;
    }

label_80035160:
    ctx->pc = 0x80035160u;
    ctx->downcount -= 2;
    // 80035160: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_80035164:
    ctx->pc = 0x80035164u;
    // 80035164: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_80035168:
    ctx->pc = 0x80035168u;
    ctx->downcount -= 2;
    // 80035168: rlwinm. r0, r4, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x0000FFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003516C:
    ctx->pc = 0x8003516Cu;
    // 8003516C: bc    4, 2, 0x80035174
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80035174;
        }
    }

label_80035170:
    ctx->pc = 0x80035170u;
    ctx->downcount -= 1;
    // 80035170: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80035174:
    ctx->pc = 0x80035174u;
    ctx->downcount -= 2;
    // 80035174: rlwinm. r0, r5, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x0000FFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80035178:
    ctx->pc = 0x80035178u;
    // 80035178: bc    4, 2, 0x80035180
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80035180;
        }
    }

label_8003517C:
    ctx->pc = 0x8003517Cu;
    ctx->downcount -= 1;
    // 8003517C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80035180:
    ctx->pc = 0x80035180u;
    ctx->downcount -= 15;
    // 80035180: li      r10, 1
    ctx->gpr[10] = (u32)(s32)(1);

label_80035184:
    ctx->pc = 0x80035184u;
    // 80035184: slw   r9, r10, r11
    {
        u32 sh = ctx->gpr[11] & 0x3Fu;
        ctx->gpr[9] = sh > 31 ? 0u : (ctx->gpr[10] << sh);
    }

label_80035188:
    ctx->pc = 0x80035188u;
    // 80035188: rlwinm r4, r4, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x0000FFFFu;
    }

label_8003518C:
    ctx->pc = 0x8003518Cu;
    // 8003518C: addi    r0, r9, -1
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-1);

label_80035190:
    ctx->pc = 0x80035190u;
    // 80035190: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80035194:
    ctx->pc = 0x80035194u;
    // 80035194: sraw   r0, r0, r11
    {
        u32 sh = ctx->gpr[11] & 0x3Fu;
        u32 value = ctx->gpr[0];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[0] = value;
        } else if (sh > 31) {
            ctx->gpr[0] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[0] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_80035198:
    ctx->pc = 0x80035198u;
    // 80035198: slw   r4, r10, r12
    {
        u32 sh = ctx->gpr[12] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[10] << sh);
    }

label_8003519C:
    ctx->pc = 0x8003519Cu;
    // 8003519C: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800351A0:
    ctx->pc = 0x800351A0u;
    // 800351A0: rlwinm r5, r5, 0, 16, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x0000FFFFu;
    }

label_800351A4:
    ctx->pc = 0x800351A4u;
    // 800351A4: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_800351A8:
    ctx->pc = 0x800351A8u;
    // 800351A8: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_800351AC:
    ctx->pc = 0x800351ACu;
    // 800351AC: sraw   r0, r0, r12
    {
        u32 sh = ctx->gpr[12] & 0x3Fu;
        u32 value = ctx->gpr[0];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[0] = value;
        } else if (sh > 31) {
            ctx->gpr[0] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[0] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_800351B0:
    ctx->pc = 0x800351B0u;
    // 800351B0: cmpwi   r3, 6
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800351B4:
    ctx->pc = 0x800351B4u;
    // 800351B4: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800351B8:
    ctx->pc = 0x800351B8u;
    // 800351B8: bc    12, 2, 0x800351C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800351C8;
        }
    }

label_800351BC:
    ctx->pc = 0x800351BCu;
    ctx->downcount -= 2;
    // 800351BC: cmpwi   r3, 22
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(22);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800351C0:
    ctx->pc = 0x800351C0u;
    // 800351C0: bc    12, 2, 0x800351C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800351C8;
        }
    }

label_800351C4:
    ctx->pc = 0x800351C4u;
    ctx->downcount -= 1;
    // 800351C4: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_800351C8:
    ctx->pc = 0x800351C8u;
    ctx->downcount -= 2;
    // 800351C8: cmpwi   r10, 0
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800351CC:
    ctx->pc = 0x800351CCu;
    // 800351CC: bc    12, 2, 0x800351D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800351D8;
        }
    }

label_800351D0:
    ctx->pc = 0x800351D0u;
    ctx->downcount -= 2;
    // 800351D0: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_800351D4:
    ctx->pc = 0x800351D4u;
    // 800351D4: b       0x800351DC
    {
            goto label_800351DC;
    }

label_800351D8:
    ctx->pc = 0x800351D8u;
    ctx->downcount -= 1;
    // 800351D8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_800351DC:
    ctx->pc = 0x800351DCu;
    ctx->downcount -= 2;
    // 800351DC: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800351E0:
    ctx->pc = 0x800351E0u;
    // 800351E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800351E4:
    ctx->pc = 0x800351E4u;
    ctx->downcount -= 25;
    // 800351E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800351E8:
    ctx->pc = 0x800351E8u;
    // 800351E8: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800351EC:
    ctx->pc = 0x800351ECu;
    // 800351EC: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800351F0:
    ctx->pc = 0x800351F0u;
    // 800351F0: stmw     r24, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_800351F4:
    ctx->pc = 0x800351F4u;
    // 800351F4: addi    r27, r4, 0
    ctx->gpr[27] = ctx->gpr[4] + (u32)(s32)(0);

label_800351F8:
    ctx->pc = 0x800351F8u;
    // 800351F8: addi    r28, r5, 0
    ctx->gpr[28] = ctx->gpr[5] + (u32)(s32)(0);

label_800351FC:
    ctx->pc = 0x800351FCu;
    // 800351FC: addi    r31, r3, 0
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(0);

label_80035200:
    ctx->pc = 0x80035200u;
    // 80035200: addi    r29, r6, 0
    ctx->gpr[29] = ctx->gpr[6] + (u32)(s32)(0);

label_80035204:
    ctx->pc = 0x80035204u;
    // 80035204: addi    r30, r7, 0
    ctx->gpr[30] = ctx->gpr[7] + (u32)(s32)(0);

label_80035208:
    ctx->pc = 0x80035208u;
    // 80035208: addi    r24, r8, 0
    ctx->gpr[24] = ctx->gpr[8] + (u32)(s32)(0);

label_8003520C:
    ctx->pc = 0x8003520Cu;
    // 8003520C: addi    r25, r9, 0
    ctx->gpr[25] = ctx->gpr[9] + (u32)(s32)(0);

label_80035210:
    ctx->pc = 0x80035210u;
    // 80035210: addi    r26, r10, 0
    ctx->gpr[26] = ctx->gpr[10] + (u32)(s32)(0);

label_80035214:
    ctx->pc = 0x80035214u;
    // 80035214: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80035218:
    ctx->pc = 0x80035218u;
    // 80035218: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_8003521C:
    ctx->pc = 0x8003521Cu;
    // 8003521C: bl      0x80003100
    {
            ctx->lr = 0x80035220u;
            ctx->pc = 0x80003100u;
            return;
    }

label_80035220:
    ctx->pc = 0x80035220u;
    ctx->downcount -= 15;
    // 80035220: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80035224:
    ctx->pc = 0x80035224u;
    // 80035224: rlwinm. r0, r26, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[26], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80035228:
    ctx->pc = 0x80035228u;
    // 80035228: rlwinm r3, r25, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[25], 2u) & 0xFFFFFFFCu;
    }

label_8003522C:
    ctx->pc = 0x8003522Cu;
    // 8003522C: rlwinm r4, r4, 0, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFFCu;
    }

label_80035230:
    ctx->pc = 0x80035230u;
    // 80035230: or   r4, r4, r24
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[24];
    }

label_80035234:
    ctx->pc = 0x80035234u;
    // 80035234: stw     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80035238:
    ctx->pc = 0x80035238u;
    // 80035238: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003523C:
    ctx->pc = 0x8003523Cu;
    // 8003523C: rlwinm r0, r0, 0, 30, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF3u;
    }

label_80035240:
    ctx->pc = 0x80035240u;
    // 80035240: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_80035244:
    ctx->pc = 0x80035244u;
    // 80035244: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035248:
    ctx->pc = 0x80035248u;
    // 80035248: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003524C:
    ctx->pc = 0x8003524Cu;
    // 8003524C: rlwinm r0, r0, 0, 28, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFEFu;
    }

label_80035250:
    ctx->pc = 0x80035250u;
    // 80035250: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_80035254:
    ctx->pc = 0x80035254u;
    // 80035254: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035258:
    ctx->pc = 0x80035258u;
    // 80035258: bc    12, 2, 0x800352FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800352FC;
        }
    }

label_8003525C:
    ctx->pc = 0x8003525Cu;
    ctx->downcount -= 6;
    // 8003525C: lbz     r3, 31(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(31);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80035260:
    ctx->pc = 0x80035260u;
    // 80035260: addi    r0, r30, -8
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(-8);

label_80035264:
    ctx->pc = 0x80035264u;
    // 80035264: cmplwi  r0, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80035268:
    ctx->pc = 0x80035268u;
    // 80035268: ori     r0, r3, 0x0001
    ctx->gpr[0] = ctx->gpr[3] | 0x0001u;

label_8003526C:
    ctx->pc = 0x8003526Cu;
    // 8003526C: stb     r0, 31(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(31);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80035270:
    ctx->pc = 0x80035270u;
    // 80035270: bc    12, 1, 0x80035288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80035288;
        }
    }

label_80035274:
    ctx->pc = 0x80035274u;
    ctx->downcount -= 5;
    // 80035274: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80035278:
    ctx->pc = 0x80035278u;
    // 80035278: rlwinm r0, r0, 0, 27, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF1Fu;
    }

label_8003527C:
    ctx->pc = 0x8003527Cu;
    // 8003527C: ori     r0, r0, 0x00A0
    ctx->gpr[0] = ctx->gpr[0] | 0x00A0u;

label_80035280:
    ctx->pc = 0x80035280u;
    // 80035280: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035284:
    ctx->pc = 0x80035284u;
    // 80035284: b       0x80035298
    {
            goto label_80035298;
    }

label_80035288:
    ctx->pc = 0x80035288u;
    ctx->downcount -= 4;
    // 80035288: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003528C:
    ctx->pc = 0x8003528Cu;
    // 8003528C: rlwinm r0, r0, 0, 27, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF1Fu;
    }

label_80035290:
    ctx->pc = 0x80035290u;
    // 80035290: ori     r0, r0, 0x00C0
    ctx->gpr[0] = ctx->gpr[0] | 0x00C0u;

label_80035294:
    ctx->pc = 0x80035294u;
    // 80035294: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035298:
    ctx->pc = 0x80035298u;
    ctx->downcount -= 4;
    // 80035298: rlwinm r3, r28, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x0000FFFFu;
    }

label_8003529C:
    ctx->pc = 0x8003529Cu;
    // 8003529C: rlwinm r0, r29, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x0000FFFFu;
    }

label_800352A0:
    ctx->pc = 0x800352A0u;
    // 800352A0: cmplw   r3, r0
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800352A4:
    ctx->pc = 0x800352A4u;
    // 800352A4: bc    4, 1, 0x800352B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800352B4;
        }
    }

label_800352A8:
    ctx->pc = 0x800352A8u;
    ctx->downcount -= 3;
    // 800352A8: cntlzw r0, r3
    {
        u32 v = ctx->gpr[3];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_800352AC:
    ctx->pc = 0x800352ACu;
    // 800352AC: subfic  r0, r0, 31
    {
        u64 res = (u64)(u32)(s32)(31) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_800352B0:
    ctx->pc = 0x800352B0u;
    // 800352B0: b       0x800352BC
    {
            goto label_800352BC;
    }

label_800352B4:
    ctx->pc = 0x800352B4u;
    ctx->downcount -= 2;
    // 800352B4: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_800352B8:
    ctx->pc = 0x800352B8u;
    // 800352B8: subfic  r0, r0, 31
    {
        u64 res = (u64)(u32)(s32)(31) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_800352BC:
    ctx->pc = 0x800352BCu;
    ctx->downcount -= 16;
    // 800352BC: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800352C0:
    ctx->pc = 0x800352C0u;
    // 800352C0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_800352C4:
    ctx->pc = 0x800352C4u;
    // 800352C4: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800352C8:
    ctx->pc = 0x800352C8u;
    // 800352C8: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800352CC:
    ctx->pc = 0x800352CCu;
    // 800352CC: lfd     f1, -31112(r2)
    if (!ppc_fp_available_inline(ctx, 0x800352CCu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31112);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_800352D0:
    ctx->pc = 0x800352D0u;
    // 800352D0: rlwinm r3, r3, 0, 24, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFF00FFu;
    }

label_800352D4:
    ctx->pc = 0x800352D4u;
    // 800352D4: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x800352D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_800352D8:
    ctx->pc = 0x800352D8u;
    // 800352D8: lfs     f2, -31120(r2)
    if (!ppc_fp_available_inline(ctx, 0x800352D8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_800352DC:
    ctx->pc = 0x800352DCu;
    // 800352DC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x800352DCu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_800352E0:
    ctx->pc = 0x800352E0u;
    // 800352E0: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x800352E0u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_800352E4:
    ctx->pc = 0x800352E4u;
    // 800352E4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x800352E4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_800352E8:
    ctx->pc = 0x800352E8u;
    // 800352E8: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x800352E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_800352EC:
    ctx->pc = 0x800352ECu;
    // 800352EC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800352F0:
    ctx->pc = 0x800352F0u;
    // 800352F0: rlwimi r3, r0, 8, 16, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 8u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0x0000FF00u) | (rot & 0x0000FF00u);
    }

label_800352F4:
    ctx->pc = 0x800352F4u;
    // 800352F4: stw     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800352F8:
    ctx->pc = 0x800352F8u;
    // 800352F8: b       0x8003530C
    {
            goto label_8003530C;
    }

label_800352FC:
    ctx->pc = 0x800352FCu;
    ctx->downcount -= 4;
    // 800352FC: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80035300:
    ctx->pc = 0x80035300u;
    // 80035300: rlwinm r0, r0, 0, 27, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF1Fu;
    }

label_80035304:
    ctx->pc = 0x80035304u;
    // 80035304: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_80035308:
    ctx->pc = 0x80035308u;
    // 80035308: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003530C:
    ctx->pc = 0x8003530Cu;
    ctx->downcount -= 26;
    // 8003530C: stw     r30, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80035310:
    ctx->pc = 0x80035310u;
    // 80035310: rlwinm r3, r29, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x0000FFFFu;
    }

label_80035314:
    ctx->pc = 0x80035314u;
    // 80035314: rlwinm r7, r30, 0, 28, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x0000000Fu;
    }

label_80035318:
    ctx->pc = 0x80035318u;
    // 80035318: lwz     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003531C:
    ctx->pc = 0x8003531Cu;
    // 8003531C: rlwinm r4, r28, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x0000FFFFu;
    }

label_80035320:
    ctx->pc = 0x80035320u;
    // 80035320: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80035324:
    ctx->pc = 0x80035324u;
    // 80035324: rlwinm r6, r5, 0, 0, 21
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFFFC00u;
    }

label_80035328:
    ctx->pc = 0x80035328u;
    // 80035328: addi    r5, r4, -1
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-1);

label_8003532C:
    ctx->pc = 0x8003532Cu;
    // 8003532C: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_80035330:
    ctx->pc = 0x80035330u;
    // 80035330: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80035334:
    ctx->pc = 0x80035334u;
    // 80035334: rlwinm r5, r0, 10, 0, 21
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 10u) & 0xFFFFFC00u;
    }

label_80035338:
    ctx->pc = 0x80035338u;
    // 80035338: rlwinm r0, r27, 27, 7, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[27], 27u) & 0x01FFFFFFu;
    }

label_8003533C:
    ctx->pc = 0x8003533Cu;
    // 8003533C: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80035340:
    ctx->pc = 0x80035340u;
    // 80035340: cmplwi  r7, 0x000E
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(0x000Eu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80035344:
    ctx->pc = 0x80035344u;
    // 80035344: rlwinm r6, r6, 0, 22, 11
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFF003FFu;
    }

label_80035348:
    ctx->pc = 0x80035348u;
    // 80035348: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_8003534C:
    ctx->pc = 0x8003534Cu;
    // 8003534C: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80035350:
    ctx->pc = 0x80035350u;
    // 80035350: lwz     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80035354:
    ctx->pc = 0x80035354u;
    // 80035354: rlwinm r5, r5, 0, 12, 7
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFF0FFFFFu;
    }

label_80035358:
    ctx->pc = 0x80035358u;
    // 80035358: rlwimi r5, r30, 20, 8, 11
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[30], 20u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0x00F00000u) | (rot & 0x00F00000u);
    }

label_8003535C:
    ctx->pc = 0x8003535Cu;
    // 8003535C: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80035360:
    ctx->pc = 0x80035360u;
    // 80035360: lwz     r5, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80035364:
    ctx->pc = 0x80035364u;
    // 80035364: rlwinm r5, r5, 0, 0, 10
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFE00000u;
    }

label_80035368:
    ctx->pc = 0x80035368u;
    // 80035368: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_8003536C:
    ctx->pc = 0x8003536Cu;
    // 8003536C: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035370:
    ctx->pc = 0x80035370u;
    // 80035370: bc    12, 1, 0x800353F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800353F0;
        }
    }

label_80035374:
    ctx->pc = 0x80035374u;
    ctx->downcount -= 7;
    // 80035374: lis     r5, -32760
    ctx->gpr[5] = ((u32)(s32)(-32760) << 16);

label_80035378:
    ctx->pc = 0x80035378u;
    // 80035378: addi    r5, r5, -1056
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1056);

label_8003537C:
    ctx->pc = 0x8003537Cu;
    // 8003537C: rlwinm r0, r7, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 2u) & 0xFFFFFFFCu;
    }

label_80035380:
    ctx->pc = 0x80035380u;
    // 80035380: lwzx    r0, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80035384:
    ctx->pc = 0x80035384u;
    // 80035384: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80035388:
    ctx->pc = 0x80035388u;
    // 80035388: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8003538C:
    ctx->pc = 0x8003538Cu;
    ctx->downcount -= 5;
    // 8003538C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80035390:
    ctx->pc = 0x80035390u;
    // 80035390: stb     r0, 30(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(30);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80035394:
    ctx->pc = 0x80035394u;
    // 80035394: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_80035398:
    ctx->pc = 0x80035398u;
    // 80035398: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_8003539C:
    ctx->pc = 0x8003539Cu;
    // 8003539C: b       0x80035400
    {
            goto label_80035400;
    }

label_800353A0:
    ctx->pc = 0x800353A0u;
    ctx->downcount -= 5;
    // 800353A0: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_800353A4:
    ctx->pc = 0x800353A4u;
    // 800353A4: stb     r0, 30(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(30);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800353A8:
    ctx->pc = 0x800353A8u;
    // 800353A8: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_800353AC:
    ctx->pc = 0x800353ACu;
    // 800353AC: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_800353B0:
    ctx->pc = 0x800353B0u;
    // 800353B0: b       0x80035400
    {
            goto label_80035400;
    }

label_800353B4:
    ctx->pc = 0x800353B4u;
    ctx->downcount -= 5;
    // 800353B4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_800353B8:
    ctx->pc = 0x800353B8u;
    // 800353B8: stb     r0, 30(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(30);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800353BC:
    ctx->pc = 0x800353BCu;
    // 800353BC: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_800353C0:
    ctx->pc = 0x800353C0u;
    // 800353C0: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_800353C4:
    ctx->pc = 0x800353C4u;
    // 800353C4: b       0x80035400
    {
            goto label_80035400;
    }

label_800353C8:
    ctx->pc = 0x800353C8u;
    ctx->downcount -= 5;
    // 800353C8: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_800353CC:
    ctx->pc = 0x800353CCu;
    // 800353CC: stb     r0, 30(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(30);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800353D0:
    ctx->pc = 0x800353D0u;
    // 800353D0: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_800353D4:
    ctx->pc = 0x800353D4u;
    // 800353D4: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_800353D8:
    ctx->pc = 0x800353D8u;
    // 800353D8: b       0x80035400
    {
            goto label_80035400;
    }

label_800353DC:
    ctx->pc = 0x800353DCu;
    ctx->downcount -= 5;
    // 800353DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800353E0:
    ctx->pc = 0x800353E0u;
    // 800353E0: stb     r0, 30(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(30);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800353E4:
    ctx->pc = 0x800353E4u;
    // 800353E4: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_800353E8:
    ctx->pc = 0x800353E8u;
    // 800353E8: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_800353EC:
    ctx->pc = 0x800353ECu;
    // 800353EC: b       0x80035400
    {
            goto label_80035400;
    }

label_800353F0:
    ctx->pc = 0x800353F0u;
    ctx->downcount -= 4;
    // 800353F0: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_800353F4:
    ctx->pc = 0x800353F4u;
    // 800353F4: stb     r0, 30(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(30);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800353F8:
    ctx->pc = 0x800353F8u;
    // 800353F8: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_800353FC:
    ctx->pc = 0x800353FCu;
    // 800353FC: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_80035400:
    ctx->pc = 0x80035400u;
    ctx->downcount -= 37;
    // 80035400: rlwinm r8, r0, 0, 16, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80035404:
    ctx->pc = 0x80035404u;
    // 80035404: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80035408:
    ctx->pc = 0x80035408u;
    // 80035408: slw   r5, r6, r8
    {
        u32 sh = ctx->gpr[8] & 0x3Fu;
        ctx->gpr[5] = sh > 31 ? 0u : (ctx->gpr[6] << sh);
    }

label_8003540C:
    ctx->pc = 0x8003540Cu;
    // 8003540C: rlwinm r7, r7, 0, 16, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x0000FFFFu;
    }

label_80035410:
    ctx->pc = 0x80035410u;
    // 80035410: addi    r0, r5, -1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1);

label_80035414:
    ctx->pc = 0x80035414u;
    // 80035414: slw   r5, r6, r7
    {
        u32 sh = ctx->gpr[7] & 0x3Fu;
        ctx->gpr[5] = sh > 31 ? 0u : (ctx->gpr[6] << sh);
    }

label_80035418:
    ctx->pc = 0x80035418u;
    // 80035418: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8003541C:
    ctx->pc = 0x8003541Cu;
    // 8003541C: addi    r0, r5, -1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1);

label_80035420:
    ctx->pc = 0x80035420u;
    // 80035420: sraw   r4, r4, r8
    {
        u32 sh = ctx->gpr[8] & 0x3Fu;
        u32 value = ctx->gpr[4];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[4] = value;
        } else if (sh > 31) {
            ctx->gpr[4] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[4] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_80035424:
    ctx->pc = 0x80035424u;
    // 80035424: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80035428:
    ctx->pc = 0x80035428u;
    // 80035428: sraw   r0, r0, r7
    {
        u32 sh = ctx->gpr[7] & 0x3Fu;
        u32 value = ctx->gpr[0];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[0] = value;
        } else if (sh > 31) {
            ctx->gpr[0] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[0] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8003542C:
    ctx->pc = 0x8003542Cu;
    // 8003542C: mullw   r0, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80035430:
    ctx->pc = 0x80035430u;
    // 80035430: rlwinm r0, r0, 0, 17, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00007FFFu;
    }

label_80035434:
    ctx->pc = 0x80035434u;
    // 80035434: sth     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80035438:
    ctx->pc = 0x80035438u;
    // 80035438: lbz     r0, 31(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(31);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003543C:
    ctx->pc = 0x8003543Cu;
    // 8003543C: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_80035440:
    ctx->pc = 0x80035440u;
    // 80035440: stb     r0, 31(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(31);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80035444:
    ctx->pc = 0x80035444u;
    // 80035444: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80035448:
    ctx->pc = 0x80035448u;
    // 80035448: lmw     r24, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8003544C:
    ctx->pc = 0x8003544Cu;
    // 8003544C: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80035450:
    ctx->pc = 0x80035450u;
    // 80035450: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80035454:
    ctx->pc = 0x80035454u;
    // 80035454: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80035458:
    ctx->pc = 0x80035458u;
    ctx->downcount -= 8;
    // 80035458: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003545C:
    ctx->pc = 0x8003545Cu;
    // 8003545C: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035460:
    ctx->pc = 0x80035460u;
    // 80035460: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80035464:
    ctx->pc = 0x80035464u;
    // 80035464: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80035468:
    ctx->pc = 0x80035468u;
    // 80035468: lwz     r31, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003546C:
    ctx->pc = 0x8003546Cu;
    // 8003546C: stw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80035470:
    ctx->pc = 0x80035470u;
    // 80035470: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80035474:
    ctx->pc = 0x80035474u;
    // 80035474: bl      0x800351E4
    {
            ctx->lr = 0x80035478u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800351E4u;
                return;
            }
            goto label_800351E4;
    }

label_80035478:
    ctx->pc = 0x80035478u;
    ctx->downcount -= 11;
    // 80035478: lbz     r0, 31(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(31);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003547C:
    ctx->pc = 0x8003547Cu;
    // 8003547C: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_80035480:
    ctx->pc = 0x80035480u;
    // 80035480: stb     r0, 31(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(31);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80035484:
    ctx->pc = 0x80035484u;
    // 80035484: stw     r31, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80035488:
    ctx->pc = 0x80035488u;
    // 80035488: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003548C:
    ctx->pc = 0x8003548Cu;
    // 8003548C: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80035490:
    ctx->pc = 0x80035490u;
    // 80035490: lwz     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80035494:
    ctx->pc = 0x80035494u;
    // 80035494: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80035498:
    ctx->pc = 0x80035498u;
    // 80035498: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003549C:
    ctx->pc = 0x8003549Cu;
    // 8003549C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800354A0:
    ctx->pc = 0x800354A0u;
    ctx->downcount -= 4;
    // 800354A0: stwu     r1, -56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-56);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800354A4:
    ctx->pc = 0x800354A4u;
    // 800354A4: lfs     f0, -31104(r2)
    if (!ppc_fp_available_inline(ctx, 0x800354A4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_800354A8:
    ctx->pc = 0x800354A8u;
    // 800354A8: fcmpo   cr0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x800354A8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[0], true);

label_800354AC:
    ctx->pc = 0x800354ACu;
    // 800354AC: bc    4, 0, 0x800354B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800354B8;
        }
    }

label_800354B0:
    ctx->pc = 0x800354B0u;
    ctx->downcount -= 2;
    // 800354B0: fmr    f3, f0
    if (!ppc_fp_available_inline(ctx, 0x800354B0u)) return;
    ctx->fpr[3] = ctx->fpr[0];

label_800354B4:
    ctx->pc = 0x800354B4u;
    // 800354B4: b       0x800354CC
    {
            goto label_800354CC;
    }

label_800354B8:
    ctx->pc = 0x800354B8u;
    ctx->downcount -= 4;
    // 800354B8: lfs     f0, -31100(r2)
    if (!ppc_fp_available_inline(ctx, 0x800354B8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31100);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_800354BC:
    ctx->pc = 0x800354BCu;
    // 800354BC: fcmpo   cr0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x800354BCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[0], true);

label_800354C0:
    ctx->pc = 0x800354C0u;
    // 800354C0: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_800354C4:
    ctx->pc = 0x800354C4u;
    // 800354C4: bc    4, 2, 0x800354CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800354CC;
        }
    }

label_800354C8:
    ctx->pc = 0x800354C8u;
    ctx->downcount -= 1;
    // 800354C8: lfs     f3, -31096(r2)
    if (!ppc_fp_available_inline(ctx, 0x800354C8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31096);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_800354CC:
    ctx->pc = 0x800354CCu;
    ctx->downcount -= 11;
    // 800354CC: lfs     f0, -31092(r2)
    if (!ppc_fp_available_inline(ctx, 0x800354CCu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_800354D0:
    ctx->pc = 0x800354D0u;
    // 800354D0: cmpwi   r5, 1
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800354D4:
    ctx->pc = 0x800354D4u;
    // 800354D4: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800354D8:
    ctx->pc = 0x800354D8u;
    // 800354D8: fmuls   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x800354D8u)) return;
    ppc_fmuls(ctx, 0, 0, 3);

label_800354DC:
    ctx->pc = 0x800354DCu;
    // 800354DC: rlwinm r5, r0, 0, 23, 14
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFE01FFu;
    }

label_800354E0:
    ctx->pc = 0x800354E0u;
    // 800354E0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x800354E0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_800354E4:
    ctx->pc = 0x800354E4u;
    // 800354E4: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x800354E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_800354E8:
    ctx->pc = 0x800354E8u;
    // 800354E8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800354EC:
    ctx->pc = 0x800354ECu;
    // 800354EC: rlwimi r5, r0, 9, 15, 22
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 9u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0x0001FE00u) | (rot & 0x0001FE00u);
    }

label_800354F0:
    ctx->pc = 0x800354F0u;
    // 800354F0: stw     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800354F4:
    ctx->pc = 0x800354F4u;
    // 800354F4: bc    4, 2, 0x80035500
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80035500;
        }
    }

label_800354F8:
    ctx->pc = 0x800354F8u;
    ctx->downcount -= 2;
    // 800354F8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_800354FC:
    ctx->pc = 0x800354FCu;
    // 800354FC: b       0x80035504
    {
            goto label_80035504;
    }

label_80035500:
    ctx->pc = 0x80035500u;
    ctx->downcount -= 1;
    // 80035500: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80035504:
    ctx->pc = 0x80035504u;
    ctx->downcount -= 14;
    // 80035504: lwz     r9, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80035508:
    ctx->pc = 0x80035508u;
    // 80035508: rlwinm. r0, r7, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003550C:
    ctx->pc = 0x8003550Cu;
    // 8003550C: rlwinm r5, r5, 4, 0, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 4u) & 0xFFFFFFF0u;
    }

label_80035510:
    ctx->pc = 0x80035510u;
    // 80035510: rlwinm r7, r9, 0, 28, 26
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[9], 0u) & 0xFFFFFFEFu;
    }

label_80035514:
    ctx->pc = 0x80035514u;
    // 80035514: or   r5, r7, r5
    {
        ctx->gpr[5] = ctx->gpr[7] | ctx->gpr[5];
    }

label_80035518:
    ctx->pc = 0x80035518u;
    // 80035518: stw     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8003551C:
    ctx->pc = 0x8003551Cu;
    // 8003551C: addi    r5, r13, -32448
    ctx->gpr[5] = ctx->gpr[13] + (u32)(s32)(-32448);

label_80035520:
    ctx->pc = 0x80035520u;
    // 80035520: lbzx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80035524:
    ctx->pc = 0x80035524u;
    // 80035524: lwz     r7, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80035528:
    ctx->pc = 0x80035528u;
    // 80035528: rlwinm r0, r0, 5, 0, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 5u) & 0xFFFFFFE0u;
    }

label_8003552C:
    ctx->pc = 0x8003552Cu;
    // 8003552C: rlwinm r4, r7, 0, 27, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0xFFFFFF1Fu;
    }

label_80035530:
    ctx->pc = 0x80035530u;
    // 80035530: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80035534:
    ctx->pc = 0x80035534u;
    // 80035534: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035538:
    ctx->pc = 0x80035538u;
    // 80035538: bc    12, 2, 0x80035544
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80035544;
        }
    }

label_8003553C:
    ctx->pc = 0x8003553Cu;
    ctx->downcount -= 2;
    // 8003553C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80035540:
    ctx->pc = 0x80035540u;
    // 80035540: b       0x80035548
    {
            goto label_80035548;
    }

label_80035544:
    ctx->pc = 0x80035544u;
    ctx->downcount -= 1;
    // 80035544: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80035548:
    ctx->pc = 0x80035548u;
    ctx->downcount -= 24;
    // 80035548: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003554C:
    ctx->pc = 0x8003554Cu;
    // 8003554C: rlwinm r0, r0, 8, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80035550:
    ctx->pc = 0x80035550u;
    // 80035550: rlwinm r4, r4, 0, 24, 22
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFEFFu;
    }

label_80035554:
    ctx->pc = 0x80035554u;
    // 80035554: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80035558:
    ctx->pc = 0x80035558u;
    // 80035558: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003555C:
    ctx->pc = 0x8003555Cu;
    // 8003555C: rlwinm r4, r8, 19, 0, 12
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[8], 19u) & 0xFFF80000u;
    }

label_80035560:
    ctx->pc = 0x80035560u;
    // 80035560: rlwinm r0, r6, 21, 3, 10
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 21u) & 0x1FE00000u;
    }

label_80035564:
    ctx->pc = 0x80035564u;
    // 80035564: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80035568:
    ctx->pc = 0x80035568u;
    // 80035568: rlwinm r5, r5, 0, 15, 13
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFDFFFFu;
    }

label_8003556C:
    ctx->pc = 0x8003556Cu;
    // 8003556C: stw     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80035570:
    ctx->pc = 0x80035570u;
    // 80035570: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80035574:
    ctx->pc = 0x80035574u;
    // 80035574: rlwinm r5, r5, 0, 14, 12
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFBFFFFu;
    }

label_80035578:
    ctx->pc = 0x80035578u;
    // 80035578: stw     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8003557C:
    ctx->pc = 0x8003557Cu;
    // 8003557C: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80035580:
    ctx->pc = 0x80035580u;
    // 80035580: rlwinm r5, r5, 0, 13, 10
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFE7FFFFu;
    }

label_80035584:
    ctx->pc = 0x80035584u;
    // 80035584: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_80035588:
    ctx->pc = 0x80035588u;
    // 80035588: stw     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8003558C:
    ctx->pc = 0x8003558Cu;
    // 8003558C: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80035590:
    ctx->pc = 0x80035590u;
    // 80035590: rlwinm r4, r4, 0, 11, 9
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFDFFFFFu;
    }

label_80035594:
    ctx->pc = 0x80035594u;
    // 80035594: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80035598:
    ctx->pc = 0x80035598u;
    // 80035598: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003559C:
    ctx->pc = 0x8003559Cu;
    // 8003559C: lfs     f0, -31088(r2)
    if (!ppc_fp_available_inline(ctx, 0x8003559Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_800355A0:
    ctx->pc = 0x800355A0u;
    // 800355A0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x800355A0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_800355A4:
    ctx->pc = 0x800355A4u;
    // 800355A4: bc    4, 0, 0x800355B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800355B0;
        }
    }

label_800355A8:
    ctx->pc = 0x800355A8u;
    ctx->downcount -= 2;
    // 800355A8: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x800355A8u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_800355AC:
    ctx->pc = 0x800355ACu;
    // 800355AC: b       0x800355C0
    {
            goto label_800355C0;
    }

label_800355B0:
    ctx->pc = 0x800355B0u;
    ctx->downcount -= 3;
    // 800355B0: lfs     f0, -31084(r2)
    if (!ppc_fp_available_inline(ctx, 0x800355B0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_800355B4:
    ctx->pc = 0x800355B4u;
    // 800355B4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x800355B4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_800355B8:
    ctx->pc = 0x800355B8u;
    // 800355B8: bc    4, 1, 0x800355C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800355C0;
        }
    }

label_800355BC:
    ctx->pc = 0x800355BCu;
    ctx->downcount -= 1;
    // 800355BC: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x800355BCu)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_800355C0:
    ctx->pc = 0x800355C0u;
    ctx->downcount -= 8;
    // 800355C0: lfs     f3, -31120(r2)
    if (!ppc_fp_available_inline(ctx, 0x800355C0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_800355C4:
    ctx->pc = 0x800355C4u;
    // 800355C4: lfs     f0, -31088(r2)
    if (!ppc_fp_available_inline(ctx, 0x800355C4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_800355C8:
    ctx->pc = 0x800355C8u;
    // 800355C8: fmuls   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x800355C8u)) return;
    ppc_fmuls(ctx, 1, 3, 1);

label_800355CC:
    ctx->pc = 0x800355CCu;
    // 800355CC: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x800355CCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_800355D0:
    ctx->pc = 0x800355D0u;
    // 800355D0: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x800355D0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_800355D4:
    ctx->pc = 0x800355D4u;
    // 800355D4: stfd     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x800355D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_800355D8:
    ctx->pc = 0x800355D8u;
    // 800355D8: lwz     r4, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800355DC:
    ctx->pc = 0x800355DCu;
    // 800355DC: bc    4, 0, 0x800355E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800355E8;
        }
    }

label_800355E0:
    ctx->pc = 0x800355E0u;
    ctx->downcount -= 2;
    // 800355E0: fmr    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x800355E0u)) return;
    ctx->fpr[2] = ctx->fpr[0];

label_800355E4:
    ctx->pc = 0x800355E4u;
    // 800355E4: b       0x800355F8
    {
            goto label_800355F8;
    }

label_800355E8:
    ctx->pc = 0x800355E8u;
    ctx->downcount -= 3;
    // 800355E8: lfs     f0, -31084(r2)
    if (!ppc_fp_available_inline(ctx, 0x800355E8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_800355EC:
    ctx->pc = 0x800355ECu;
    // 800355EC: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x800355ECu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_800355F0:
    ctx->pc = 0x800355F0u;
    // 800355F0: bc    4, 1, 0x800355F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800355F8;
        }
    }

label_800355F4:
    ctx->pc = 0x800355F4u;
    ctx->downcount -= 1;
    // 800355F4: fmr    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x800355F4u)) return;
    ctx->fpr[2] = ctx->fpr[0];

label_800355F8:
    ctx->pc = 0x800355F8u;
    ctx->downcount -= 15;
    // 800355F8: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800355FC:
    ctx->pc = 0x800355FCu;
    // 800355FC: rlwinm r0, r0, 0, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF00u;
    }

label_80035600:
    ctx->pc = 0x80035600u;
    // 80035600: rlwimi r0, r4, 0, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

label_80035604:
    ctx->pc = 0x80035604u;
    // 80035604: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035608:
    ctx->pc = 0x80035608u;
    // 80035608: lfs     f0, -31120(r2)
    if (!ppc_fp_available_inline(ctx, 0x80035608u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8003560C:
    ctx->pc = 0x8003560Cu;
    // 8003560C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80035610:
    ctx->pc = 0x80035610u;
    // 80035610: fmuls   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80035610u)) return;
    ppc_fmuls(ctx, 0, 0, 2);

label_80035614:
    ctx->pc = 0x80035614u;
    // 80035614: rlwinm r4, r0, 0, 24, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF00FFu;
    }

label_80035618:
    ctx->pc = 0x80035618u;
    // 80035618: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80035618u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8003561C:
    ctx->pc = 0x8003561Cu;
    // 8003561C: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8003561Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_80035620:
    ctx->pc = 0x80035620u;
    // 80035620: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80035624:
    ctx->pc = 0x80035624u;
    // 80035624: rlwimi r4, r0, 8, 16, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 8u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0x0000FF00u) | (rot & 0x0000FF00u);
    }

label_80035628:
    ctx->pc = 0x80035628u;
    // 80035628: stw     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8003562C:
    ctx->pc = 0x8003562Cu;
    // 8003562C: addi    r1, r1, 56
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(56);

label_80035630:
    ctx->pc = 0x80035630u;
    // 80035630: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80035634:
    ctx->pc = 0x80035634u;
    ctx->downcount -= 2;
    // 80035634: lwz     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80035638:
    ctx->pc = 0x80035638u;
    // 80035638: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_8003563C:
    ctx->pc = 0x8003563Cu;
    ctx->downcount -= 68;
    // 8003563C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80035640:
    ctx->pc = 0x80035640u;
    // 80035640: addi    r7, r13, -32488
    ctx->gpr[7] = ctx->gpr[13] + (u32)(s32)(-32488);

label_80035644:
    ctx->pc = 0x80035644u;
    // 80035644: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035648:
    ctx->pc = 0x80035648u;
    // 80035648: stwu     r1, -40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-40);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003564C:
    ctx->pc = 0x8003564Cu;
    // 8003564C: stw     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80035650:
    ctx->pc = 0x80035650u;
    // 80035650: lis     r31, -13311
    ctx->gpr[31] = ((u32)(s32)(-13311) << 16);

label_80035654:
    ctx->pc = 0x80035654u;
    // 80035654: stw     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80035658:
    ctx->pc = 0x80035658u;
    // 80035658: li      r30, 97
    ctx->gpr[30] = (u32)(s32)(97);

label_8003565C:
    ctx->pc = 0x8003565Cu;
    // 8003565C: stw     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80035660:
    ctx->pc = 0x80035660u;
    // 80035660: addi    r29, r5, 0
    ctx->gpr[29] = ctx->gpr[5] + (u32)(s32)(0);

label_80035664:
    ctx->pc = 0x80035664u;
    // 80035664: addi    r5, r13, -32472
    ctx->gpr[5] = ctx->gpr[13] + (u32)(s32)(-32472);

label_80035668:
    ctx->pc = 0x80035668u;
    // 80035668: stw     r28, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003566C:
    ctx->pc = 0x8003566Cu;
    // 8003566C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80035670:
    ctx->pc = 0x80035670u;
    // 80035670: lwz     r6, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80035674:
    ctx->pc = 0x80035674u;
    // 80035674: addi    r3, r13, -32504
    ctx->gpr[3] = ctx->gpr[13] + (u32)(s32)(-32504);

label_80035678:
    ctx->pc = 0x80035678u;
    // 80035678: lbzx    r0, r3, r29
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[29];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003567C:
    ctx->pc = 0x8003567Cu;
    // 8003567C: addi    r3, r13, -32496
    ctx->gpr[3] = ctx->gpr[13] + (u32)(s32)(-32496);

label_80035680:
    ctx->pc = 0x80035680u;
    // 80035680: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80035684:
    ctx->pc = 0x80035684u;
    // 80035684: rlwimi r0, r6, 0, 8, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00FFFFFFu) | (rot & 0x00FFFFFFu);
    }

label_80035688:
    ctx->pc = 0x80035688u;
    // 80035688: stw     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003568C:
    ctx->pc = 0x8003568Cu;
    // 8003568C: addi    r6, r13, -32480
    ctx->gpr[6] = ctx->gpr[13] + (u32)(s32)(-32480);

label_80035690:
    ctx->pc = 0x80035690u;
    // 80035690: lbzx    r0, r3, r29
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[29];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80035694:
    ctx->pc = 0x80035694u;
    // 80035694: addi    r3, r13, -32464
    ctx->gpr[3] = ctx->gpr[13] + (u32)(s32)(-32464);

label_80035698:
    ctx->pc = 0x80035698u;
    // 80035698: lwz     r8, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8003569C:
    ctx->pc = 0x8003569Cu;
    // 8003569C: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_800356A0:
    ctx->pc = 0x800356A0u;
    // 800356A0: rlwimi r0, r8, 0, 8, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[8], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00FFFFFFu) | (rot & 0x00FFFFFFu);
    }

label_800356A4:
    ctx->pc = 0x800356A4u;
    // 800356A4: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800356A8:
    ctx->pc = 0x800356A8u;
    // 800356A8: lbzx    r0, r7, r29
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[29];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800356AC:
    ctx->pc = 0x800356ACu;
    // 800356AC: lwz     r8, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_800356B0:
    ctx->pc = 0x800356B0u;
    // 800356B0: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_800356B4:
    ctx->pc = 0x800356B4u;
    // 800356B4: rlwimi r0, r8, 0, 8, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[8], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00FFFFFFu) | (rot & 0x00FFFFFFu);
    }

label_800356B8:
    ctx->pc = 0x800356B8u;
    // 800356B8: stw     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800356BC:
    ctx->pc = 0x800356BCu;
    // 800356BC: lbzx    r0, r6, r29
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[29];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800356C0:
    ctx->pc = 0x800356C0u;
    // 800356C0: lwz     r7, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_800356C4:
    ctx->pc = 0x800356C4u;
    // 800356C4: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_800356C8:
    ctx->pc = 0x800356C8u;
    // 800356C8: rlwimi r0, r7, 0, 8, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00FFFFFFu) | (rot & 0x00FFFFFFu);
    }

label_800356CC:
    ctx->pc = 0x800356CCu;
    // 800356CC: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800356D0:
    ctx->pc = 0x800356D0u;
    // 800356D0: lbzx    r0, r5, r29
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[29];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800356D4:
    ctx->pc = 0x800356D4u;
    // 800356D4: lwz     r6, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800356D8:
    ctx->pc = 0x800356D8u;
    // 800356D8: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_800356DC:
    ctx->pc = 0x800356DCu;
    // 800356DC: rlwimi r0, r6, 0, 8, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00FFFFFFu) | (rot & 0x00FFFFFFu);
    }

label_800356E0:
    ctx->pc = 0x800356E0u;
    // 800356E0: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800356E4:
    ctx->pc = 0x800356E4u;
    // 800356E4: lbzx    r0, r3, r29
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[29];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_800356E8:
    ctx->pc = 0x800356E8u;
    // 800356E8: lwz     r5, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800356EC:
    ctx->pc = 0x800356ECu;
    // 800356EC: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_800356F0:
    ctx->pc = 0x800356F0u;
    // 800356F0: rlwimi r0, r5, 0, 8, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00FFFFFFu) | (rot & 0x00FFFFFFu);
    }

label_800356F4:
    ctx->pc = 0x800356F4u;
    // 800356F4: stw     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800356F8:
    ctx->pc = 0x800356F8u;
    // 800356F8: stb     r30, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_800356FC:
    ctx->pc = 0x800356FCu;
    // 800356FC: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80035700:
    ctx->pc = 0x80035700u;
    // 80035700: stw     r0, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035704:
    ctx->pc = 0x80035704u;
    // 80035704: stb     r30, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80035708:
    ctx->pc = 0x80035708u;
    // 80035708: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003570C:
    ctx->pc = 0x8003570Cu;
    // 8003570C: stw     r0, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035710:
    ctx->pc = 0x80035710u;
    // 80035710: stb     r30, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80035714:
    ctx->pc = 0x80035714u;
    // 80035714: lwz     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80035718:
    ctx->pc = 0x80035718u;
    // 80035718: stw     r0, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003571C:
    ctx->pc = 0x8003571Cu;
    // 8003571C: stb     r30, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80035720:
    ctx->pc = 0x80035720u;
    // 80035720: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80035724:
    ctx->pc = 0x80035724u;
    // 80035724: stw     r0, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035728:
    ctx->pc = 0x80035728u;
    // 80035728: stb     r30, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_8003572C:
    ctx->pc = 0x8003572Cu;
    // 8003572C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80035730:
    ctx->pc = 0x80035730u;
    // 80035730: stw     r0, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035734:
    ctx->pc = 0x80035734u;
    // 80035734: stb     r30, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80035738:
    ctx->pc = 0x80035738u;
    // 80035738: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003573C:
    ctx->pc = 0x8003573Cu;
    // 8003573C: stw     r0, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035740:
    ctx->pc = 0x80035740u;
    // 80035740: lbz     r0, 31(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(31);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80035744:
    ctx->pc = 0x80035744u;
    // 80035744: rlwinm. r0, r0, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80035748:
    ctx->pc = 0x80035748u;
    // 80035748: bc    4, 2, 0x80035784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80035784;
        }
    }

label_8003574C:
    ctx->pc = 0x8003574Cu;
    ctx->downcount -= 6;
    // 8003574C: lwz     r4, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80035750:
    ctx->pc = 0x80035750u;
    // 80035750: lwz     r3, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80035754:
    ctx->pc = 0x80035754u;
    // 80035754: lwz     r12, 1044(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1044);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80035758:
    ctx->pc = 0x80035758u;
    // 80035758: mtlr    r12
    ctx->lr = ctx->gpr[12];

label_8003575C:
    ctx->pc = 0x8003575Cu;
    // 8003575C: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80035760u;
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80035760:
    ctx->pc = 0x80035760u;
    ctx->downcount -= 9;
    // 80035760: addi    r4, r13, -32456
    ctx->gpr[4] = ctx->gpr[13] + (u32)(s32)(-32456);

label_80035764:
    ctx->pc = 0x80035764u;
    // 80035764: lwz     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80035768:
    ctx->pc = 0x80035768u;
    // 80035768: lbzx    r0, r4, r29
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[29];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003576C:
    ctx->pc = 0x8003576Cu;
    // 8003576C: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80035770:
    ctx->pc = 0x80035770u;
    // 80035770: rlwimi r0, r5, 0, 8, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00FFFFFFu) | (rot & 0x00FFFFFFu);
    }

label_80035774:
    ctx->pc = 0x80035774u;
    // 80035774: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035778:
    ctx->pc = 0x80035778u;
    // 80035778: stb     r30, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_8003577C:
    ctx->pc = 0x8003577Cu;
    // 8003577C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80035780:
    ctx->pc = 0x80035780u;
    // 80035780: stw     r0, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035784:
    ctx->pc = 0x80035784u;
    ctx->downcount -= 21;
    // 80035784: lwz     r5, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80035788:
    ctx->pc = 0x80035788u;
    // 80035788: rlwinm r4, r29, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_8003578C:
    ctx->pc = 0x8003578Cu;
    // 8003578C: lwz     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80035790:
    ctx->pc = 0x80035790u;
    // 80035790: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80035794:
    ctx->pc = 0x80035794u;
    // 80035794: add   r4, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80035798:
    ctx->pc = 0x80035798u;
    // 80035798: stw     r3, 1116(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1116);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8003579C:
    ctx->pc = 0x8003579Cu;
    // 8003579C: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800357A0:
    ctx->pc = 0x800357A0u;
    // 800357A0: stw     r3, 1148(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800357A4:
    ctx->pc = 0x800357A4u;
    // 800357A4: lwz     r3, 1268(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1268);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800357A8:
    ctx->pc = 0x800357A8u;
    // 800357A8: ori     r3, r3, 0x0001
    ctx->gpr[3] = ctx->gpr[3] | 0x0001u;

label_800357AC:
    ctx->pc = 0x800357ACu;
    // 800357AC: stw     r3, 1268(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1268);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800357B0:
    ctx->pc = 0x800357B0u;
    // 800357B0: sth     r0, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800357B4:
    ctx->pc = 0x800357B4u;
    // 800357B4: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800357B8:
    ctx->pc = 0x800357B8u;
    // 800357B8: lwz     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800357BC:
    ctx->pc = 0x800357BCu;
    // 800357BC: lwz     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800357C0:
    ctx->pc = 0x800357C0u;
    // 800357C0: lwz     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_800357C4:
    ctx->pc = 0x800357C4u;
    // 800357C4: lwz     r28, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_800357C8:
    ctx->pc = 0x800357C8u;
    // 800357C8: addi    r1, r1, 40
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(40);

label_800357CC:
    ctx->pc = 0x800357CCu;
    // 800357CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800357D0:
    ctx->pc = 0x800357D0u;
    // 800357D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_800357D4:
    ctx->pc = 0x800357D4u;
    ctx->downcount -= 12;
    // 800357D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800357D8:
    ctx->pc = 0x800357D8u;
    // 800357D8: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800357DC:
    ctx->pc = 0x800357DCu;
    // 800357DC: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800357E0:
    ctx->pc = 0x800357E0u;
    // 800357E0: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800357E4:
    ctx->pc = 0x800357E4u;
    // 800357E4: addi    r31, r4, 0
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(0);

label_800357E8:
    ctx->pc = 0x800357E8u;
    // 800357E8: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800357EC:
    ctx->pc = 0x800357ECu;
    // 800357EC: addi    r30, r3, 0
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(0);

label_800357F0:
    ctx->pc = 0x800357F0u;
    // 800357F0: lwz     r5, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800357F4:
    ctx->pc = 0x800357F4u;
    // 800357F4: lwz     r12, 1040(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1040);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_800357F8:
    ctx->pc = 0x800357F8u;
    // 800357F8: mtlr    r12
    ctx->lr = ctx->gpr[12];

label_800357FC:
    ctx->pc = 0x800357FCu;
    // 800357FC: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80035800u;
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80035800:
    ctx->pc = 0x80035800u;
    ctx->downcount -= 4;
    // 80035800: addi    r4, r3, 0
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(0);

label_80035804:
    ctx->pc = 0x80035804u;
    // 80035804: addi    r3, r30, 0
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(0);

label_80035808:
    ctx->pc = 0x80035808u;
    // 80035808: addi    r5, r31, 0
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(0);

label_8003580C:
    ctx->pc = 0x8003580Cu;
    // 8003580C: bl      0x8003563C
    {
            ctx->lr = 0x80035810u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003563Cu;
                return;
            }
            goto label_8003563C;
    }

label_80035810:
    ctx->pc = 0x80035810u;
    ctx->downcount -= 7;
    // 80035810: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80035814:
    ctx->pc = 0x80035814u;
    // 80035814: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80035818:
    ctx->pc = 0x80035818u;
    // 80035818: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8003581C:
    ctx->pc = 0x8003581Cu;
    // 8003581C: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_80035820:
    ctx->pc = 0x80035820u;
    // 80035820: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80035824:
    ctx->pc = 0x80035824u;
    // 80035824: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80035828:
    ctx->pc = 0x80035828u;
    ctx->downcount -= 18;
    // 80035828: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8003582C:
    ctx->pc = 0x8003582Cu;
    // 8003582C: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035830:
    ctx->pc = 0x80035830u;
    // 80035830: rlwinm r5, r5, 10, 0, 21
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 10u) & 0xFFFFFC00u;
    }

label_80035834:
    ctx->pc = 0x80035834u;
    // 80035834: rlwinm r0, r4, 27, 7, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 27u) & 0x01FFFFFFu;
    }

label_80035838:
    ctx->pc = 0x80035838u;
    // 80035838: lwz     r7, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8003583C:
    ctx->pc = 0x8003583Cu;
    // 8003583C: rlwinm r4, r7, 0, 22, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0xFFFFF3FFu;
    }

label_80035840:
    ctx->pc = 0x80035840u;
    // 80035840: or   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[5];
    }

label_80035844:
    ctx->pc = 0x80035844u;
    // 80035844: stw     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80035848:
    ctx->pc = 0x80035848u;
    // 80035848: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003584C:
    ctx->pc = 0x8003584Cu;
    // 8003584C: rlwinm r4, r4, 0, 0, 10
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFE00000u;
    }

label_80035850:
    ctx->pc = 0x80035850u;
    // 80035850: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80035854:
    ctx->pc = 0x80035854u;
    // 80035854: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035858:
    ctx->pc = 0x80035858u;
    // 80035858: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003585C:
    ctx->pc = 0x8003585Cu;
    // 8003585C: rlwinm r0, r0, 0, 8, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00FFFFFFu;
    }

label_80035860:
    ctx->pc = 0x80035860u;
    // 80035860: oris    r0, r0, 0x6400
    ctx->gpr[0] = ctx->gpr[0] | (0x6400u << 16);

label_80035864:
    ctx->pc = 0x80035864u;
    // 80035864: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035868:
    ctx->pc = 0x80035868u;
    // 80035868: sth     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_8003586C:
    ctx->pc = 0x8003586Cu;
    // 8003586C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_80035870:
    ctx->pc = 0x80035870u;
    ctx->downcount -= 12;
    // 80035870: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80035874:
    ctx->pc = 0x80035874u;
    // 80035874: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80035878:
    ctx->pc = 0x80035878u;
    // 80035878: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003587C:
    ctx->pc = 0x8003587Cu;
    // 8003587C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80035880:
    ctx->pc = 0x80035880u;
    // 80035880: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80035884:
    ctx->pc = 0x80035884u;
    // 80035884: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80035888:
    ctx->pc = 0x80035888u;
    // 80035888: addi    r3, r4, 0
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(0);

label_8003588C:
    ctx->pc = 0x8003588Cu;
    // 8003588C: lwz     r5, -31168(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31168);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80035890:
    ctx->pc = 0x80035890u;
    // 80035890: lwz     r12, 1044(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1044);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80035894:
    ctx->pc = 0x80035894u;
    // 80035894: mtlr    r12
    ctx->lr = ctx->gpr[12];

label_80035898:
    ctx->pc = 0x80035898u;
    // 80035898: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8003589Cu;
            ctx->pc = target;
            goto return_dispatch_800318A0;
        }
    }

label_8003589C:
    ctx->pc = 0x8003589Cu;
    ctx->downcount -= 1;
    // 8003589C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

    ctx->pc = 0x800358A0u;
    return;
return_dispatch_800318A0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x800318C0u: goto label_800318C0;
    case 0x800318D8u: goto label_800318D8;
    case 0x800318E4u: goto label_800318E4;
    case 0x800318F4u: goto label_800318F4;
    case 0x80031904u: goto label_80031904;
    case 0x80031914u: goto label_80031914;
    case 0x80031924u: goto label_80031924;
    case 0x80031934u: goto label_80031934;
    case 0x80031944u: goto label_80031944;
    case 0x80031954u: goto label_80031954;
    case 0x80031964u: goto label_80031964;
    case 0x800319A8u: goto label_800319A8;
    case 0x800319B4u: goto label_800319B4;
    case 0x800319BCu: goto label_800319BC;
    case 0x800319CCu: goto label_800319CC;
    case 0x800319DCu: goto label_800319DC;
    case 0x80031A20u: goto label_80031A20;
    case 0x80031A2Cu: goto label_80031A2C;
    case 0x80031A34u: goto label_80031A34;
    case 0x80031A3Cu: goto label_80031A3C;
    case 0x80031A44u: goto label_80031A44;
    case 0x80031A58u: goto label_80031A58;
    case 0x80031A64u: goto label_80031A64;
    case 0x80031A6Cu: goto label_80031A6C;
    case 0x80031A8Cu: goto label_80031A8C;
    case 0x80031AA0u: goto label_80031AA0;
    case 0x80031AB4u: goto label_80031AB4;
    case 0x80031AD4u: goto label_80031AD4;
    case 0x80031AE8u: goto label_80031AE8;
    case 0x80031AFCu: goto label_80031AFC;
    case 0x80031B00u: goto label_80031B00;
    case 0x80031B1Cu: goto label_80031B1C;
    case 0x80031B28u: goto label_80031B28;
    case 0x80031B3Cu: goto label_80031B3C;
    case 0x80031B50u: goto label_80031B50;
    case 0x80031B64u: goto label_80031B64;
    case 0x80031B78u: goto label_80031B78;
    case 0x80031B8Cu: goto label_80031B8C;
    case 0x80031BA0u: goto label_80031BA0;
    case 0x80031BB4u: goto label_80031BB4;
    case 0x80031BC8u: goto label_80031BC8;
    case 0x80031BDCu: goto label_80031BDC;
    case 0x80031BF0u: goto label_80031BF0;
    case 0x80031C04u: goto label_80031C04;
    case 0x80031C18u: goto label_80031C18;
    case 0x80031C2Cu: goto label_80031C2C;
    case 0x80031C40u: goto label_80031C40;
    case 0x80031C54u: goto label_80031C54;
    case 0x80031C68u: goto label_80031C68;
    case 0x80031C70u: goto label_80031C70;
    case 0x80031C7Cu: goto label_80031C7C;
    case 0x80031C94u: goto label_80031C94;
    case 0x80031CA4u: goto label_80031CA4;
    case 0x80031CBCu: goto label_80031CBC;
    case 0x80031CC8u: goto label_80031CC8;
    case 0x80031CD8u: goto label_80031CD8;
    case 0x80031CFCu: goto label_80031CFC;
    case 0x80031D14u: goto label_80031D14;
    case 0x80031D2Cu: goto label_80031D2C;
    case 0x80031D44u: goto label_80031D44;
    case 0x80031D5Cu: goto label_80031D5C;
    case 0x80031D70u: goto label_80031D70;
    case 0x80031D80u: goto label_80031D80;
    case 0x80031D90u: goto label_80031D90;
    case 0x80031DA0u: goto label_80031DA0;
    case 0x80031DB0u: goto label_80031DB0;
    case 0x80031DD4u: goto label_80031DD4;
    case 0x80031DE4u: goto label_80031DE4;
    case 0x80031DF8u: goto label_80031DF8;
    case 0x80031E00u: goto label_80031E00;
    case 0x80031E08u: goto label_80031E08;
    case 0x80031E18u: goto label_80031E18;
    case 0x80031E20u: goto label_80031E20;
    case 0x80031E28u: goto label_80031E28;
    case 0x80031E34u: goto label_80031E34;
    case 0x80031E40u: goto label_80031E40;
    case 0x80031E4Cu: goto label_80031E4C;
    case 0x80031E74u: goto label_80031E74;
    case 0x80031E88u: goto label_80031E88;
    case 0x80031E94u: goto label_80031E94;
    case 0x80031ECCu: goto label_80031ECC;
    case 0x80031ED4u: goto label_80031ED4;
    case 0x80031EE8u: goto label_80031EE8;
    case 0x80031EF0u: goto label_80031EF0;
    case 0x80031EF8u: goto label_80031EF8;
    case 0x80031EFCu: goto label_80031EFC;
    case 0x80031F04u: goto label_80031F04;
    case 0x80031F0Cu: goto label_80031F0C;
    case 0x80031F14u: goto label_80031F14;
    case 0x80031F28u: goto label_80031F28;
    case 0x80031F34u: goto label_80031F34;
    case 0x80031F3Cu: goto label_80031F3C;
    case 0x80031F48u: goto label_80031F48;
    case 0x80031F58u: goto label_80031F58;
    case 0x80031F64u: goto label_80031F64;
    case 0x80031F68u: goto label_80031F68;
    case 0x80031FC8u: goto label_80031FC8;
    case 0x80031FDCu: goto label_80031FDC;
    case 0x80031FE8u: goto label_80031FE8;
    case 0x8003201Cu: goto label_8003201C;
    case 0x80032028u: goto label_80032028;
    case 0x80032038u: goto label_80032038;
    case 0x80032080u: goto label_80032080;
    case 0x80032088u: goto label_80032088;
    case 0x80032094u: goto label_80032094;
    case 0x8003209Cu: goto label_8003209C;
    case 0x800320A4u: goto label_800320A4;
    case 0x800320FCu: goto label_800320FC;
    case 0x8003210Cu: goto label_8003210C;
    case 0x8003214Cu: goto label_8003214C;
    case 0x80032178u: goto label_80032178;
    case 0x800321BCu: goto label_800321BC;
    case 0x80032218u: goto label_80032218;
    case 0x80032224u: goto label_80032224;
    case 0x8003222Cu: goto label_8003222C;
    case 0x80032244u: goto label_80032244;
    case 0x80032258u: goto label_80032258;
    case 0x80032290u: goto label_80032290;
    case 0x80032298u: goto label_80032298;
    case 0x800322CCu: goto label_800322CC;
    case 0x800322D4u: goto label_800322D4;
    case 0x800322E0u: goto label_800322E0;
    case 0x800323ACu: goto label_800323AC;
    case 0x800323D0u: goto label_800323D0;
    case 0x800323D8u: goto label_800323D8;
    case 0x800323F0u: goto label_800323F0;
    case 0x800323F8u: goto label_800323F8;
    case 0x80032404u: goto label_80032404;
    case 0x80032408u: goto label_80032408;
    case 0x80032410u: goto label_80032410;
    case 0x80032448u: goto label_80032448;
    case 0x80032450u: goto label_80032450;
    case 0x80032488u: goto label_80032488;
    case 0x80032490u: goto label_80032490;
    case 0x80032494u: goto label_80032494;
    case 0x80032AA4u: goto label_80032AA4;
    case 0x800336D8u: goto label_800336D8;
    case 0x800337DCu: goto label_800337DC;
    case 0x80033808u: goto label_80033808;
    case 0x8003383Cu: goto label_8003383C;
    case 0x80033874u: goto label_80033874;
    case 0x8003388Cu: goto label_8003388C;
    case 0x800338F8u: goto label_800338F8;
    case 0x80033910u: goto label_80033910;
    case 0x8003393Cu: goto label_8003393C;
    case 0x80033950u: goto label_80033950;
    case 0x80033998u: goto label_80033998;
    case 0x800339B8u: goto label_800339B8;
    case 0x800339C8u: goto label_800339C8;
    case 0x800339CCu: goto label_800339CC;
    case 0x800339DCu: goto label_800339DC;
    case 0x800339F0u: goto label_800339F0;
    case 0x80033B64u: goto label_80033B64;
    case 0x80033B6Cu: goto label_80033B6C;
    case 0x80033BBCu: goto label_80033BBC;
    case 0x80033BC4u: goto label_80033BC4;
    case 0x80033BD4u: goto label_80033BD4;
    case 0x80033BDCu: goto label_80033BDC;
    case 0x80033BE4u: goto label_80033BE4;
    case 0x80033C30u: goto label_80033C30;
    case 0x80033C38u: goto label_80033C38;
    case 0x80033C98u: goto label_80033C98;
    case 0x80033CA0u: goto label_80033CA0;
    case 0x80033CACu: goto label_80033CAC;
    case 0x80033CB4u: goto label_80033CB4;
    case 0x80033CBCu: goto label_80033CBC;
    case 0x80033CC4u: goto label_80033CC4;
    case 0x80033CF4u: goto label_80033CF4;
    case 0x80033D04u: goto label_80033D04;
    case 0x80033D0Cu: goto label_80033D0C;
    case 0x80033D14u: goto label_80033D14;
    case 0x80033D1Cu: goto label_80033D1C;
    case 0x80033D78u: goto label_80033D78;
    case 0x80033D8Cu: goto label_80033D8C;
    case 0x80033DA0u: goto label_80033DA0;
    case 0x80033DB4u: goto label_80033DB4;
    case 0x80033DC8u: goto label_80033DC8;
    case 0x80033DDCu: goto label_80033DDC;
    case 0x80033E38u: goto label_80033E38;
    case 0x80033E4Cu: goto label_80033E4C;
    case 0x80033E60u: goto label_80033E60;
    case 0x80033E74u: goto label_80033E74;
    case 0x80033E88u: goto label_80033E88;
    case 0x80033E9Cu: goto label_80033E9C;
    case 0x80033EBCu: goto label_80033EBC;
    case 0x8003449Cu: goto label_8003449C;
    case 0x800345C4u: goto label_800345C4;
    case 0x80035220u: goto label_80035220;
    case 0x80035478u: goto label_80035478;
    case 0x80035760u: goto label_80035760;
    case 0x80035800u: goto label_80035800;
    case 0x80035810u: goto label_80035810;
    case 0x8003589Cu: goto label_8003589C;
    default: return;
    }
}

