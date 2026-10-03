// DolRecomp output
#include "../generated.h"

static void loop_80003154(CPUState* ctx) {
label_80003154:
    ctx->downcount -= 3;
    // 80003154: addic.  r3, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    ctx->pc = 0x80003158u;
    // 80003158: stbu     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
        ctx->gpr[6] = ea;
    }

    // 8000315C: bc    4, 2, 0x80003154
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003154u;
                return;
            }
            goto label_80003154;
        }
    }

    ctx->pc = 0x80003160u;
}

static void loop_8000318C(CPUState* ctx) {
label_8000318C:
    ctx->downcount -= 10;
    ctx->pc = 0x8000318Cu;
    // 8000318C: stw     r7, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    // 80003190: addic.  r3, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    ctx->pc = 0x80003194u;
    // 80003194: stw     r7, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x80003198u;
    // 80003198: stw     r7, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x8000319Cu;
    // 8000319C: stw     r7, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x800031A0u;
    // 800031A0: stw     r7, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x800031A4u;
    // 800031A4: stw     r7, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x800031A8u;
    // 800031A8: stw     r7, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x800031ACu;
    // 800031AC: stwu     r7, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
        ctx->gpr[4] = ea;
    }

    // 800031B0: bc    4, 2, 0x8000318C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000318Cu;
                return;
            }
            goto label_8000318C;
        }
    }

    ctx->pc = 0x800031B4u;
}

static void loop_800031BC(CPUState* ctx) {
label_800031BC:
    ctx->downcount -= 3;
    // 800031BC: addic.  r3, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    ctx->pc = 0x800031C0u;
    // 800031C0: stwu     r7, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
        ctx->gpr[4] = ea;
    }

    // 800031C4: bc    4, 2, 0x800031BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800031BCu;
                return;
            }
            goto label_800031BC;
        }
    }

    ctx->pc = 0x800031C8u;
}

static void loop_800031D8(CPUState* ctx) {
label_800031D8:
    ctx->downcount -= 3;
    // 800031D8: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    ctx->pc = 0x800031DCu;
    // 800031DC: stbu     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
        ctx->gpr[6] = ea;
    }

    // 800031E0: bc    4, 2, 0x800031D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800031D8u;
                return;
            }
            goto label_800031D8;
        }
    }

    ctx->pc = 0x800031E4u;
}

static void loop_80003200(CPUState* ctx) {
label_80003200:
    ctx->downcount -= 2;
    ctx->pc = 0x80003200u;
    // 80003200: lbzu     r0, 1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x80003204u;
    // 80003204: stbu     r0, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 80003208: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    // 8000320C: bc    4, 2, 0x80003200
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003200u;
                return;
            }
            goto label_80003200;
        }
    }

    ctx->pc = 0x80003210u;
}

static void loop_80003224(CPUState* ctx) {
label_80003224:
    ctx->downcount -= 2;
    ctx->pc = 0x80003224u;
    // 80003224: lbzu     r0, -1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-1);
        ctx->gpr[0] = mem_read8(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x80003228u;
    // 80003228: stbu     r0, -1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 8000322C: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    // 80003230: bc    4, 2, 0x80003224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003224u;
                return;
            }
            goto label_80003224;
        }
    }

    ctx->pc = 0x80003234u;
}

static void loop_80003278(CPUState* ctx) {
label_80003278:
    ctx->downcount -= 2;
    ctx->pc = 0x80003278u;
    // 80003278: lbzu     r0, 1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x8000327Cu;
    // 8000327C: stbu     r0, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 80003280: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    // 80003284: bc    4, 2, 0x80003278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003278u;
                return;
            }
            goto label_80003278;
        }
    }

    ctx->pc = 0x80003288u;
}

static void loop_800053F4(CPUState* ctx) {
label_800053F4:
    ctx->downcount -= 5;
    // 800053F4: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

    ctx->pc = 0x800053F8u;
    // 800053F8: lwz     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    // 800053FC: add   r7, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

    ctx->pc = 0x80005400u;
    // 80005400: stw     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    // 80005404: bc    16, 0, 0x800053F4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800053F4u;
                return;
            }
            goto label_800053F4;
        }
    }

    ctx->pc = 0x80005408u;
}

void func_80003100(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x80003100u: goto label_80003100;
    case 0x80003104u: goto label_80003104;
    case 0x80003108u: goto label_80003108;
    case 0x8000310Cu: goto label_8000310C;
    case 0x80003110u: goto label_80003110;
    case 0x80003114u: goto label_80003114;
    case 0x80003118u: goto label_80003118;
    case 0x8000311Cu: goto label_8000311C;
    case 0x80003120u: goto label_80003120;
    case 0x80003124u: goto label_80003124;
    case 0x80003128u: goto label_80003128;
    case 0x8000312Cu: goto label_8000312C;
    case 0x80003130u: goto label_80003130;
    case 0x80003134u: goto label_80003134;
    case 0x80003138u: goto label_80003138;
    case 0x8000313Cu: goto label_8000313C;
    case 0x80003140u: goto label_80003140;
    case 0x80003144u: goto label_80003144;
    case 0x80003148u: goto label_80003148;
    case 0x8000314Cu: goto label_8000314C;
    case 0x80003150u: goto label_80003150;
    case 0x80003154u: goto label_80003154;
    case 0x80003158u: goto label_80003158;
    case 0x8000315Cu: goto label_8000315C;
    case 0x80003160u: goto label_80003160;
    case 0x80003164u: goto label_80003164;
    case 0x80003168u: goto label_80003168;
    case 0x8000316Cu: goto label_8000316C;
    case 0x80003170u: goto label_80003170;
    case 0x80003174u: goto label_80003174;
    case 0x80003178u: goto label_80003178;
    case 0x8000317Cu: goto label_8000317C;
    case 0x80003180u: goto label_80003180;
    case 0x80003184u: goto label_80003184;
    case 0x80003188u: goto label_80003188;
    case 0x8000318Cu: goto label_8000318C;
    case 0x80003190u: goto label_80003190;
    case 0x80003194u: goto label_80003194;
    case 0x80003198u: goto label_80003198;
    case 0x8000319Cu: goto label_8000319C;
    case 0x800031A0u: goto label_800031A0;
    case 0x800031A4u: goto label_800031A4;
    case 0x800031A8u: goto label_800031A8;
    case 0x800031ACu: goto label_800031AC;
    case 0x800031B0u: goto label_800031B0;
    case 0x800031B4u: goto label_800031B4;
    case 0x800031B8u: goto label_800031B8;
    case 0x800031BCu: goto label_800031BC;
    case 0x800031C0u: goto label_800031C0;
    case 0x800031C4u: goto label_800031C4;
    case 0x800031C8u: goto label_800031C8;
    case 0x800031CCu: goto label_800031CC;
    case 0x800031D0u: goto label_800031D0;
    case 0x800031D4u: goto label_800031D4;
    case 0x800031D8u: goto label_800031D8;
    case 0x800031DCu: goto label_800031DC;
    case 0x800031E0u: goto label_800031E0;
    case 0x800031E4u: goto label_800031E4;
    case 0x800031E8u: goto label_800031E8;
    case 0x800031ECu: goto label_800031EC;
    case 0x800031F0u: goto label_800031F0;
    case 0x800031F4u: goto label_800031F4;
    case 0x800031F8u: goto label_800031F8;
    case 0x800031FCu: goto label_800031FC;
    case 0x80003200u: goto label_80003200;
    case 0x80003204u: goto label_80003204;
    case 0x80003208u: goto label_80003208;
    case 0x8000320Cu: goto label_8000320C;
    case 0x80003210u: goto label_80003210;
    case 0x80003214u: goto label_80003214;
    case 0x80003218u: goto label_80003218;
    case 0x8000321Cu: goto label_8000321C;
    case 0x80003220u: goto label_80003220;
    case 0x80003224u: goto label_80003224;
    case 0x80003228u: goto label_80003228;
    case 0x8000322Cu: goto label_8000322C;
    case 0x80003230u: goto label_80003230;
    case 0x80003234u: goto label_80003234;
    case 0x80003238u: goto label_80003238;
    case 0x8000323Cu: goto label_8000323C;
    case 0x80003240u: goto label_80003240;
    case 0x80003244u: goto label_80003244;
    case 0x80003248u: goto label_80003248;
    case 0x8000324Cu: goto label_8000324C;
    case 0x80003250u: goto label_80003250;
    case 0x80003254u: goto label_80003254;
    case 0x80003258u: goto label_80003258;
    case 0x8000325Cu: goto label_8000325C;
    case 0x80003260u: goto label_80003260;
    case 0x80003264u: goto label_80003264;
    case 0x80003268u: goto label_80003268;
    case 0x8000326Cu: goto label_8000326C;
    case 0x80003270u: goto label_80003270;
    case 0x80003274u: goto label_80003274;
    case 0x80003278u: goto label_80003278;
    case 0x8000327Cu: goto label_8000327C;
    case 0x80003280u: goto label_80003280;
    case 0x80003284u: goto label_80003284;
    case 0x80003288u: goto label_80003288;
    case 0x8000328Cu: goto label_8000328C;
    case 0x80003290u: goto label_80003290;
    case 0x80003294u: goto label_80003294;
    case 0x80003298u: goto label_80003298;
    case 0x8000329Cu: goto label_8000329C;
    case 0x800032A0u: goto label_800032A0;
    case 0x800032A4u: goto label_800032A4;
    case 0x800032A8u: goto label_800032A8;
    case 0x800032ACu: goto label_800032AC;
    case 0x800032B0u: goto label_800032B0;
    case 0x800032B4u: goto label_800032B4;
    case 0x800032B8u: goto label_800032B8;
    case 0x800032BCu: goto label_800032BC;
    case 0x800032C0u: goto label_800032C0;
    case 0x800032C4u: goto label_800032C4;
    case 0x800032C8u: goto label_800032C8;
    case 0x800032CCu: goto label_800032CC;
    case 0x800032D0u: goto label_800032D0;
    case 0x800032D4u: goto label_800032D4;
    case 0x800032D8u: goto label_800032D8;
    case 0x800032DCu: goto label_800032DC;
    case 0x800032E0u: goto label_800032E0;
    case 0x800032E4u: goto label_800032E4;
    case 0x800032E8u: goto label_800032E8;
    case 0x800032ECu: goto label_800032EC;
    case 0x800032F0u: goto label_800032F0;
    case 0x800032F4u: goto label_800032F4;
    case 0x800032F8u: goto label_800032F8;
    case 0x800032FCu: goto label_800032FC;
    case 0x80003300u: goto label_80003300;
    case 0x80003304u: goto label_80003304;
    case 0x80003308u: goto label_80003308;
    case 0x8000330Cu: goto label_8000330C;
    case 0x80003310u: goto label_80003310;
    case 0x80003314u: goto label_80003314;
    case 0x80003318u: goto label_80003318;
    case 0x8000331Cu: goto label_8000331C;
    case 0x80003320u: goto label_80003320;
    case 0x80003324u: goto label_80003324;
    case 0x80003328u: goto label_80003328;
    case 0x8000332Cu: goto label_8000332C;
    case 0x80003330u: goto label_80003330;
    case 0x80003334u: goto label_80003334;
    case 0x80003338u: goto label_80003338;
    case 0x8000333Cu: goto label_8000333C;
    case 0x80003340u: goto label_80003340;
    case 0x80003344u: goto label_80003344;
    case 0x80003348u: goto label_80003348;
    case 0x8000334Cu: goto label_8000334C;
    case 0x80003350u: goto label_80003350;
    case 0x80003354u: goto label_80003354;
    case 0x80003358u: goto label_80003358;
    case 0x8000335Cu: goto label_8000335C;
    case 0x80003360u: goto label_80003360;
    case 0x80003364u: goto label_80003364;
    case 0x80003368u: goto label_80003368;
    case 0x8000336Cu: goto label_8000336C;
    case 0x80003370u: goto label_80003370;
    case 0x80003374u: goto label_80003374;
    case 0x80003378u: goto label_80003378;
    case 0x8000337Cu: goto label_8000337C;
    case 0x80003380u: goto label_80003380;
    case 0x80003384u: goto label_80003384;
    case 0x80003388u: goto label_80003388;
    case 0x8000338Cu: goto label_8000338C;
    case 0x80003390u: goto label_80003390;
    case 0x80003394u: goto label_80003394;
    case 0x80003398u: goto label_80003398;
    case 0x8000339Cu: goto label_8000339C;
    case 0x800033A0u: goto label_800033A0;
    case 0x800033A4u: goto label_800033A4;
    case 0x800033A8u: goto label_800033A8;
    case 0x800033ACu: goto label_800033AC;
    case 0x800033B0u: goto label_800033B0;
    case 0x800033B4u: goto label_800033B4;
    case 0x800033B8u: goto label_800033B8;
    case 0x800033BCu: goto label_800033BC;
    case 0x800033C0u: goto label_800033C0;
    case 0x800033C4u: goto label_800033C4;
    case 0x800033C8u: goto label_800033C8;
    case 0x800033CCu: goto label_800033CC;
    case 0x800033D0u: goto label_800033D0;
    case 0x800033D4u: goto label_800033D4;
    case 0x800033D8u: goto label_800033D8;
    case 0x800033DCu: goto label_800033DC;
    case 0x800033E0u: goto label_800033E0;
    case 0x800033E4u: goto label_800033E4;
    case 0x800033E8u: goto label_800033E8;
    case 0x800033ECu: goto label_800033EC;
    case 0x800033F0u: goto label_800033F0;
    case 0x800033F4u: goto label_800033F4;
    case 0x800033F8u: goto label_800033F8;
    case 0x800033FCu: goto label_800033FC;
    case 0x80003400u: goto label_80003400;
    case 0x80003404u: goto label_80003404;
    case 0x80003408u: goto label_80003408;
    case 0x8000340Cu: goto label_8000340C;
    case 0x80003410u: goto label_80003410;
    case 0x80003414u: goto label_80003414;
    case 0x80003418u: goto label_80003418;
    case 0x8000341Cu: goto label_8000341C;
    case 0x80003420u: goto label_80003420;
    case 0x80003424u: goto label_80003424;
    case 0x80003428u: goto label_80003428;
    case 0x8000342Cu: goto label_8000342C;
    case 0x80003430u: goto label_80003430;
    case 0x80003434u: goto label_80003434;
    case 0x80003438u: goto label_80003438;
    case 0x8000343Cu: goto label_8000343C;
    case 0x80003440u: goto label_80003440;
    case 0x80003444u: goto label_80003444;
    case 0x80003448u: goto label_80003448;
    case 0x8000344Cu: goto label_8000344C;
    case 0x80003450u: goto label_80003450;
    case 0x80003454u: goto label_80003454;
    case 0x80003458u: goto label_80003458;
    case 0x8000345Cu: goto label_8000345C;
    case 0x80003460u: goto label_80003460;
    case 0x80003464u: goto label_80003464;
    case 0x80003468u: goto label_80003468;
    case 0x8000346Cu: goto label_8000346C;
    case 0x80003470u: goto label_80003470;
    case 0x80003474u: goto label_80003474;
    case 0x80003478u: goto label_80003478;
    case 0x8000347Cu: goto label_8000347C;
    case 0x80003480u: goto label_80003480;
    case 0x80003484u: goto label_80003484;
    case 0x80003488u: goto label_80003488;
    case 0x8000348Cu: goto label_8000348C;
    case 0x80003490u: goto label_80003490;
    case 0x80003494u: goto label_80003494;
    case 0x80003498u: goto label_80003498;
    case 0x8000349Cu: goto label_8000349C;
    case 0x800034A0u: goto label_800034A0;
    case 0x800034A4u: goto label_800034A4;
    case 0x800034A8u: goto label_800034A8;
    case 0x800034ACu: goto label_800034AC;
    case 0x800034B0u: goto label_800034B0;
    case 0x800034B4u: goto label_800034B4;
    case 0x800034B8u: goto label_800034B8;
    case 0x800034BCu: goto label_800034BC;
    case 0x800034C0u: goto label_800034C0;
    case 0x800034C4u: goto label_800034C4;
    case 0x800034C8u: goto label_800034C8;
    case 0x800034CCu: goto label_800034CC;
    case 0x800034D0u: goto label_800034D0;
    case 0x800034D4u: goto label_800034D4;
    case 0x800034D8u: goto label_800034D8;
    case 0x800034DCu: goto label_800034DC;
    case 0x800034E0u: goto label_800034E0;
    case 0x800034E4u: goto label_800034E4;
    case 0x800034E8u: goto label_800034E8;
    case 0x800034ECu: goto label_800034EC;
    case 0x800034F0u: goto label_800034F0;
    case 0x800034F4u: goto label_800034F4;
    case 0x800034F8u: goto label_800034F8;
    case 0x800034FCu: goto label_800034FC;
    case 0x80003500u: goto label_80003500;
    case 0x80003504u: goto label_80003504;
    case 0x80003508u: goto label_80003508;
    case 0x8000350Cu: goto label_8000350C;
    case 0x80003510u: goto label_80003510;
    case 0x80003514u: goto label_80003514;
    case 0x80003518u: goto label_80003518;
    case 0x8000351Cu: goto label_8000351C;
    case 0x80003520u: goto label_80003520;
    case 0x80003524u: goto label_80003524;
    case 0x80003528u: goto label_80003528;
    case 0x8000352Cu: goto label_8000352C;
    case 0x80003530u: goto label_80003530;
    case 0x80003534u: goto label_80003534;
    case 0x80003538u: goto label_80003538;
    case 0x8000353Cu: goto label_8000353C;
    case 0x80003540u: goto label_80003540;
    case 0x80003544u: goto label_80003544;
    case 0x80003548u: goto label_80003548;
    case 0x8000354Cu: goto label_8000354C;
    case 0x80003550u: goto label_80003550;
    case 0x80003554u: goto label_80003554;
    case 0x80003558u: goto label_80003558;
    case 0x8000355Cu: goto label_8000355C;
    case 0x80003560u: goto label_80003560;
    case 0x80003564u: goto label_80003564;
    case 0x80003568u: goto label_80003568;
    case 0x8000356Cu: goto label_8000356C;
    case 0x80003570u: goto label_80003570;
    case 0x80003574u: goto label_80003574;
    case 0x80003578u: goto label_80003578;
    case 0x8000357Cu: goto label_8000357C;
    case 0x80003580u: goto label_80003580;
    case 0x80003584u: goto label_80003584;
    case 0x80003588u: goto label_80003588;
    case 0x8000358Cu: goto label_8000358C;
    case 0x80003590u: goto label_80003590;
    case 0x80003594u: goto label_80003594;
    case 0x80003598u: goto label_80003598;
    case 0x8000359Cu: goto label_8000359C;
    case 0x800035A0u: goto label_800035A0;
    case 0x800035A4u: goto label_800035A4;
    case 0x800035A8u: goto label_800035A8;
    case 0x800035ACu: goto label_800035AC;
    case 0x800035B0u: goto label_800035B0;
    case 0x800035B4u: goto label_800035B4;
    case 0x800035B8u: goto label_800035B8;
    case 0x800035BCu: goto label_800035BC;
    case 0x800035C0u: goto label_800035C0;
    case 0x800035C4u: goto label_800035C4;
    case 0x800035C8u: goto label_800035C8;
    case 0x800035CCu: goto label_800035CC;
    case 0x800035D0u: goto label_800035D0;
    case 0x800035D4u: goto label_800035D4;
    case 0x800035D8u: goto label_800035D8;
    case 0x800035DCu: goto label_800035DC;
    case 0x800035E0u: goto label_800035E0;
    case 0x800035E4u: goto label_800035E4;
    case 0x800035E8u: goto label_800035E8;
    case 0x800035ECu: goto label_800035EC;
    case 0x800035F0u: goto label_800035F0;
    case 0x800035F4u: goto label_800035F4;
    case 0x800035F8u: goto label_800035F8;
    case 0x800035FCu: goto label_800035FC;
    case 0x80003600u: goto label_80003600;
    case 0x80003604u: goto label_80003604;
    case 0x80003608u: goto label_80003608;
    case 0x8000360Cu: goto label_8000360C;
    case 0x80003610u: goto label_80003610;
    case 0x80003614u: goto label_80003614;
    case 0x80003618u: goto label_80003618;
    case 0x8000361Cu: goto label_8000361C;
    case 0x80003620u: goto label_80003620;
    case 0x80003624u: goto label_80003624;
    case 0x80003628u: goto label_80003628;
    case 0x8000362Cu: goto label_8000362C;
    case 0x80003630u: goto label_80003630;
    case 0x80003634u: goto label_80003634;
    case 0x80003638u: goto label_80003638;
    case 0x8000363Cu: goto label_8000363C;
    case 0x80003640u: goto label_80003640;
    case 0x80003644u: goto label_80003644;
    case 0x80003648u: goto label_80003648;
    case 0x8000364Cu: goto label_8000364C;
    case 0x80003650u: goto label_80003650;
    case 0x80003654u: goto label_80003654;
    case 0x80003658u: goto label_80003658;
    case 0x8000365Cu: goto label_8000365C;
    case 0x80003660u: goto label_80003660;
    case 0x80003664u: goto label_80003664;
    case 0x80003668u: goto label_80003668;
    case 0x8000366Cu: goto label_8000366C;
    case 0x80003670u: goto label_80003670;
    case 0x80003674u: goto label_80003674;
    case 0x80003678u: goto label_80003678;
    case 0x8000367Cu: goto label_8000367C;
    case 0x80003680u: goto label_80003680;
    case 0x80003684u: goto label_80003684;
    case 0x80003688u: goto label_80003688;
    case 0x8000368Cu: goto label_8000368C;
    case 0x80003690u: goto label_80003690;
    case 0x80003694u: goto label_80003694;
    case 0x80003698u: goto label_80003698;
    case 0x8000369Cu: goto label_8000369C;
    case 0x800036A0u: goto label_800036A0;
    case 0x800036A4u: goto label_800036A4;
    case 0x800036A8u: goto label_800036A8;
    case 0x800036ACu: goto label_800036AC;
    case 0x800036B0u: goto label_800036B0;
    case 0x800036B4u: goto label_800036B4;
    case 0x800036B8u: goto label_800036B8;
    case 0x800036BCu: goto label_800036BC;
    case 0x800036C0u: goto label_800036C0;
    case 0x800036C4u: goto label_800036C4;
    case 0x800036C8u: goto label_800036C8;
    case 0x800036CCu: goto label_800036CC;
    case 0x800036D0u: goto label_800036D0;
    case 0x800036D4u: goto label_800036D4;
    case 0x800036D8u: goto label_800036D8;
    case 0x800036DCu: goto label_800036DC;
    case 0x800036E0u: goto label_800036E0;
    case 0x800036E4u: goto label_800036E4;
    case 0x800036E8u: goto label_800036E8;
    case 0x800036ECu: goto label_800036EC;
    case 0x800036F0u: goto label_800036F0;
    case 0x800036F4u: goto label_800036F4;
    case 0x800036F8u: goto label_800036F8;
    case 0x800036FCu: goto label_800036FC;
    case 0x80003700u: goto label_80003700;
    case 0x80003704u: goto label_80003704;
    case 0x80003708u: goto label_80003708;
    case 0x8000370Cu: goto label_8000370C;
    case 0x80003710u: goto label_80003710;
    case 0x80003714u: goto label_80003714;
    case 0x80003718u: goto label_80003718;
    case 0x8000371Cu: goto label_8000371C;
    case 0x80003720u: goto label_80003720;
    case 0x80003724u: goto label_80003724;
    case 0x80003728u: goto label_80003728;
    case 0x8000372Cu: goto label_8000372C;
    case 0x80003730u: goto label_80003730;
    case 0x80003734u: goto label_80003734;
    case 0x80003738u: goto label_80003738;
    case 0x8000373Cu: goto label_8000373C;
    case 0x80003740u: goto label_80003740;
    case 0x80003744u: goto label_80003744;
    case 0x80003748u: goto label_80003748;
    case 0x8000374Cu: goto label_8000374C;
    case 0x80003750u: goto label_80003750;
    case 0x80003754u: goto label_80003754;
    case 0x80003758u: goto label_80003758;
    case 0x8000375Cu: goto label_8000375C;
    case 0x80003760u: goto label_80003760;
    case 0x80003764u: goto label_80003764;
    case 0x80003768u: goto label_80003768;
    case 0x8000376Cu: goto label_8000376C;
    case 0x80003770u: goto label_80003770;
    case 0x80003774u: goto label_80003774;
    case 0x80003778u: goto label_80003778;
    case 0x8000377Cu: goto label_8000377C;
    case 0x80003780u: goto label_80003780;
    case 0x80003784u: goto label_80003784;
    case 0x80003788u: goto label_80003788;
    case 0x8000378Cu: goto label_8000378C;
    case 0x80003790u: goto label_80003790;
    case 0x80003794u: goto label_80003794;
    case 0x80003798u: goto label_80003798;
    case 0x8000379Cu: goto label_8000379C;
    case 0x800037A0u: goto label_800037A0;
    case 0x800037A4u: goto label_800037A4;
    case 0x800037A8u: goto label_800037A8;
    case 0x800037ACu: goto label_800037AC;
    case 0x800037B0u: goto label_800037B0;
    case 0x800037B4u: goto label_800037B4;
    case 0x800037B8u: goto label_800037B8;
    case 0x800037BCu: goto label_800037BC;
    case 0x800037C0u: goto label_800037C0;
    case 0x800037C4u: goto label_800037C4;
    case 0x800037C8u: goto label_800037C8;
    case 0x800037CCu: goto label_800037CC;
    case 0x800037D0u: goto label_800037D0;
    case 0x800037D4u: goto label_800037D4;
    case 0x800037D8u: goto label_800037D8;
    case 0x800037DCu: goto label_800037DC;
    case 0x800037E0u: goto label_800037E0;
    case 0x800037E4u: goto label_800037E4;
    case 0x800037E8u: goto label_800037E8;
    case 0x800037ECu: goto label_800037EC;
    case 0x800037F0u: goto label_800037F0;
    case 0x800037F4u: goto label_800037F4;
    case 0x800037F8u: goto label_800037F8;
    case 0x800037FCu: goto label_800037FC;
    case 0x80003800u: goto label_80003800;
    case 0x80003804u: goto label_80003804;
    case 0x80003808u: goto label_80003808;
    case 0x8000380Cu: goto label_8000380C;
    case 0x80003810u: goto label_80003810;
    case 0x80003814u: goto label_80003814;
    case 0x80003818u: goto label_80003818;
    case 0x8000381Cu: goto label_8000381C;
    case 0x80003820u: goto label_80003820;
    case 0x80003824u: goto label_80003824;
    case 0x80003828u: goto label_80003828;
    case 0x8000382Cu: goto label_8000382C;
    case 0x80003830u: goto label_80003830;
    case 0x80003834u: goto label_80003834;
    case 0x80003838u: goto label_80003838;
    case 0x8000383Cu: goto label_8000383C;
    case 0x80003840u: goto label_80003840;
    case 0x80003844u: goto label_80003844;
    case 0x80003848u: goto label_80003848;
    case 0x8000384Cu: goto label_8000384C;
    case 0x80003850u: goto label_80003850;
    case 0x80003854u: goto label_80003854;
    case 0x80003858u: goto label_80003858;
    case 0x8000385Cu: goto label_8000385C;
    case 0x80003860u: goto label_80003860;
    case 0x80003864u: goto label_80003864;
    case 0x80003868u: goto label_80003868;
    case 0x8000386Cu: goto label_8000386C;
    case 0x80003870u: goto label_80003870;
    case 0x80003874u: goto label_80003874;
    case 0x80003878u: goto label_80003878;
    case 0x8000387Cu: goto label_8000387C;
    case 0x80003880u: goto label_80003880;
    case 0x80003884u: goto label_80003884;
    case 0x80003888u: goto label_80003888;
    case 0x8000388Cu: goto label_8000388C;
    case 0x80003890u: goto label_80003890;
    case 0x80003894u: goto label_80003894;
    case 0x80003898u: goto label_80003898;
    case 0x8000389Cu: goto label_8000389C;
    case 0x800038A0u: goto label_800038A0;
    case 0x800038A4u: goto label_800038A4;
    case 0x800038A8u: goto label_800038A8;
    case 0x800038ACu: goto label_800038AC;
    case 0x800038B0u: goto label_800038B0;
    case 0x800038B4u: goto label_800038B4;
    case 0x800038B8u: goto label_800038B8;
    case 0x800038BCu: goto label_800038BC;
    case 0x800038C0u: goto label_800038C0;
    case 0x800038C4u: goto label_800038C4;
    case 0x800038C8u: goto label_800038C8;
    case 0x800038CCu: goto label_800038CC;
    case 0x800038D0u: goto label_800038D0;
    case 0x800038D4u: goto label_800038D4;
    case 0x800038D8u: goto label_800038D8;
    case 0x800038DCu: goto label_800038DC;
    case 0x800038E0u: goto label_800038E0;
    case 0x800038E4u: goto label_800038E4;
    case 0x800038E8u: goto label_800038E8;
    case 0x800038ECu: goto label_800038EC;
    case 0x800038F0u: goto label_800038F0;
    case 0x800038F4u: goto label_800038F4;
    case 0x800038F8u: goto label_800038F8;
    case 0x800038FCu: goto label_800038FC;
    case 0x80003900u: goto label_80003900;
    case 0x80003904u: goto label_80003904;
    case 0x80003908u: goto label_80003908;
    case 0x8000390Cu: goto label_8000390C;
    case 0x80003910u: goto label_80003910;
    case 0x80003914u: goto label_80003914;
    case 0x80003918u: goto label_80003918;
    case 0x8000391Cu: goto label_8000391C;
    case 0x80003920u: goto label_80003920;
    case 0x80003924u: goto label_80003924;
    case 0x80003928u: goto label_80003928;
    case 0x8000392Cu: goto label_8000392C;
    case 0x80003930u: goto label_80003930;
    case 0x80003934u: goto label_80003934;
    case 0x80003938u: goto label_80003938;
    case 0x8000393Cu: goto label_8000393C;
    case 0x80003940u: goto label_80003940;
    case 0x80003944u: goto label_80003944;
    case 0x80003948u: goto label_80003948;
    case 0x8000394Cu: goto label_8000394C;
    case 0x80003950u: goto label_80003950;
    case 0x80003954u: goto label_80003954;
    case 0x80003958u: goto label_80003958;
    case 0x8000395Cu: goto label_8000395C;
    case 0x80003960u: goto label_80003960;
    case 0x80003964u: goto label_80003964;
    case 0x80003968u: goto label_80003968;
    case 0x8000396Cu: goto label_8000396C;
    case 0x80003970u: goto label_80003970;
    case 0x80003974u: goto label_80003974;
    case 0x80003978u: goto label_80003978;
    case 0x8000397Cu: goto label_8000397C;
    case 0x80003980u: goto label_80003980;
    case 0x80003984u: goto label_80003984;
    case 0x80003988u: goto label_80003988;
    case 0x8000398Cu: goto label_8000398C;
    case 0x80003990u: goto label_80003990;
    case 0x80003994u: goto label_80003994;
    case 0x80003998u: goto label_80003998;
    case 0x8000399Cu: goto label_8000399C;
    case 0x800039A0u: goto label_800039A0;
    case 0x800039A4u: goto label_800039A4;
    case 0x800039A8u: goto label_800039A8;
    case 0x800039ACu: goto label_800039AC;
    case 0x800039B0u: goto label_800039B0;
    case 0x800039B4u: goto label_800039B4;
    case 0x800039B8u: goto label_800039B8;
    case 0x800039BCu: goto label_800039BC;
    case 0x800039C0u: goto label_800039C0;
    case 0x800039C4u: goto label_800039C4;
    case 0x800039C8u: goto label_800039C8;
    case 0x800039CCu: goto label_800039CC;
    case 0x800039D0u: goto label_800039D0;
    case 0x800039D4u: goto label_800039D4;
    case 0x800039D8u: goto label_800039D8;
    case 0x800039DCu: goto label_800039DC;
    case 0x800039E0u: goto label_800039E0;
    case 0x800039E4u: goto label_800039E4;
    case 0x800039E8u: goto label_800039E8;
    case 0x800039ECu: goto label_800039EC;
    case 0x800039F0u: goto label_800039F0;
    case 0x800039F4u: goto label_800039F4;
    case 0x800039F8u: goto label_800039F8;
    case 0x800039FCu: goto label_800039FC;
    case 0x80003A00u: goto label_80003A00;
    case 0x80003A04u: goto label_80003A04;
    case 0x80003A08u: goto label_80003A08;
    case 0x80003A0Cu: goto label_80003A0C;
    case 0x80003A10u: goto label_80003A10;
    case 0x80003A14u: goto label_80003A14;
    case 0x80003A18u: goto label_80003A18;
    case 0x80003A1Cu: goto label_80003A1C;
    case 0x80003A20u: goto label_80003A20;
    case 0x80003A24u: goto label_80003A24;
    case 0x80003A28u: goto label_80003A28;
    case 0x80003A2Cu: goto label_80003A2C;
    case 0x80003A30u: goto label_80003A30;
    case 0x80003A34u: goto label_80003A34;
    case 0x80003A38u: goto label_80003A38;
    case 0x80003A3Cu: goto label_80003A3C;
    case 0x80003A40u: goto label_80003A40;
    case 0x80003A44u: goto label_80003A44;
    case 0x80003A48u: goto label_80003A48;
    case 0x80003A4Cu: goto label_80003A4C;
    case 0x80003A50u: goto label_80003A50;
    case 0x80003A54u: goto label_80003A54;
    case 0x80003A58u: goto label_80003A58;
    case 0x80003A5Cu: goto label_80003A5C;
    case 0x80003A60u: goto label_80003A60;
    case 0x80003A64u: goto label_80003A64;
    case 0x80003A68u: goto label_80003A68;
    case 0x80003A6Cu: goto label_80003A6C;
    case 0x80003A70u: goto label_80003A70;
    case 0x80003A74u: goto label_80003A74;
    case 0x80003A78u: goto label_80003A78;
    case 0x80003A7Cu: goto label_80003A7C;
    case 0x80003A80u: goto label_80003A80;
    case 0x80003A84u: goto label_80003A84;
    case 0x80003A88u: goto label_80003A88;
    case 0x80003A8Cu: goto label_80003A8C;
    case 0x80003A90u: goto label_80003A90;
    case 0x80003A94u: goto label_80003A94;
    case 0x80003A98u: goto label_80003A98;
    case 0x80003A9Cu: goto label_80003A9C;
    case 0x80003AA0u: goto label_80003AA0;
    case 0x80003AA4u: goto label_80003AA4;
    case 0x80003AA8u: goto label_80003AA8;
    case 0x80003AACu: goto label_80003AAC;
    case 0x80003AB0u: goto label_80003AB0;
    case 0x80003AB4u: goto label_80003AB4;
    case 0x80003AB8u: goto label_80003AB8;
    case 0x80003ABCu: goto label_80003ABC;
    case 0x80003AC0u: goto label_80003AC0;
    case 0x80003AC4u: goto label_80003AC4;
    case 0x80003AC8u: goto label_80003AC8;
    case 0x80003ACCu: goto label_80003ACC;
    case 0x80003AD0u: goto label_80003AD0;
    case 0x80003AD4u: goto label_80003AD4;
    case 0x80003AD8u: goto label_80003AD8;
    case 0x80003ADCu: goto label_80003ADC;
    case 0x80003AE0u: goto label_80003AE0;
    case 0x80003AE4u: goto label_80003AE4;
    case 0x80003AE8u: goto label_80003AE8;
    case 0x80003AECu: goto label_80003AEC;
    case 0x80003AF0u: goto label_80003AF0;
    case 0x80003AF4u: goto label_80003AF4;
    case 0x80003AF8u: goto label_80003AF8;
    case 0x80003AFCu: goto label_80003AFC;
    case 0x80003B00u: goto label_80003B00;
    case 0x80003B04u: goto label_80003B04;
    case 0x80003B08u: goto label_80003B08;
    case 0x80003B0Cu: goto label_80003B0C;
    case 0x80003B10u: goto label_80003B10;
    case 0x80003B14u: goto label_80003B14;
    case 0x80003B18u: goto label_80003B18;
    case 0x80003B1Cu: goto label_80003B1C;
    case 0x80003B20u: goto label_80003B20;
    case 0x80003B24u: goto label_80003B24;
    case 0x80003B28u: goto label_80003B28;
    case 0x80003B2Cu: goto label_80003B2C;
    case 0x80003B30u: goto label_80003B30;
    case 0x80003B34u: goto label_80003B34;
    case 0x80003B38u: goto label_80003B38;
    case 0x80003B3Cu: goto label_80003B3C;
    case 0x80003B40u: goto label_80003B40;
    case 0x80003B44u: goto label_80003B44;
    case 0x80003B48u: goto label_80003B48;
    case 0x80003B4Cu: goto label_80003B4C;
    case 0x80003B50u: goto label_80003B50;
    case 0x80003B54u: goto label_80003B54;
    case 0x80003B58u: goto label_80003B58;
    case 0x80003B5Cu: goto label_80003B5C;
    case 0x80003B60u: goto label_80003B60;
    case 0x80003B64u: goto label_80003B64;
    case 0x80003B68u: goto label_80003B68;
    case 0x80003B6Cu: goto label_80003B6C;
    case 0x80003B70u: goto label_80003B70;
    case 0x80003B74u: goto label_80003B74;
    case 0x80003B78u: goto label_80003B78;
    case 0x80003B7Cu: goto label_80003B7C;
    case 0x80003B80u: goto label_80003B80;
    case 0x80003B84u: goto label_80003B84;
    case 0x80003B88u: goto label_80003B88;
    case 0x80003B8Cu: goto label_80003B8C;
    case 0x80003B90u: goto label_80003B90;
    case 0x80003B94u: goto label_80003B94;
    case 0x80003B98u: goto label_80003B98;
    case 0x80003B9Cu: goto label_80003B9C;
    case 0x80003BA0u: goto label_80003BA0;
    case 0x80003BA4u: goto label_80003BA4;
    case 0x80003BA8u: goto label_80003BA8;
    case 0x80003BACu: goto label_80003BAC;
    case 0x80003BB0u: goto label_80003BB0;
    case 0x80003BB4u: goto label_80003BB4;
    case 0x80003BB8u: goto label_80003BB8;
    case 0x80003BBCu: goto label_80003BBC;
    case 0x80003BC0u: goto label_80003BC0;
    case 0x80003BC4u: goto label_80003BC4;
    case 0x80003BC8u: goto label_80003BC8;
    case 0x80003BCCu: goto label_80003BCC;
    case 0x80003BD0u: goto label_80003BD0;
    case 0x80003BD4u: goto label_80003BD4;
    case 0x80003BD8u: goto label_80003BD8;
    case 0x80003BDCu: goto label_80003BDC;
    case 0x80003BE0u: goto label_80003BE0;
    case 0x80003BE4u: goto label_80003BE4;
    case 0x80003BE8u: goto label_80003BE8;
    case 0x80003BECu: goto label_80003BEC;
    case 0x80003BF0u: goto label_80003BF0;
    case 0x80003BF4u: goto label_80003BF4;
    case 0x80003BF8u: goto label_80003BF8;
    case 0x80003BFCu: goto label_80003BFC;
    case 0x80003C00u: goto label_80003C00;
    case 0x80003C04u: goto label_80003C04;
    case 0x80003C08u: goto label_80003C08;
    case 0x80003C0Cu: goto label_80003C0C;
    case 0x80003C10u: goto label_80003C10;
    case 0x80003C14u: goto label_80003C14;
    case 0x80003C18u: goto label_80003C18;
    case 0x80003C1Cu: goto label_80003C1C;
    case 0x80003C20u: goto label_80003C20;
    case 0x80003C24u: goto label_80003C24;
    case 0x80003C28u: goto label_80003C28;
    case 0x80003C2Cu: goto label_80003C2C;
    case 0x80003C30u: goto label_80003C30;
    case 0x80003C34u: goto label_80003C34;
    case 0x80003C38u: goto label_80003C38;
    case 0x80003C3Cu: goto label_80003C3C;
    case 0x80003C40u: goto label_80003C40;
    case 0x80003C44u: goto label_80003C44;
    case 0x80003C48u: goto label_80003C48;
    case 0x80003C4Cu: goto label_80003C4C;
    case 0x80003C50u: goto label_80003C50;
    case 0x80003C54u: goto label_80003C54;
    case 0x80003C58u: goto label_80003C58;
    case 0x80003C5Cu: goto label_80003C5C;
    case 0x80003C60u: goto label_80003C60;
    case 0x80003C64u: goto label_80003C64;
    case 0x80003C68u: goto label_80003C68;
    case 0x80003C6Cu: goto label_80003C6C;
    case 0x80003C70u: goto label_80003C70;
    case 0x80003C74u: goto label_80003C74;
    case 0x80003C78u: goto label_80003C78;
    case 0x80003C7Cu: goto label_80003C7C;
    case 0x80003C80u: goto label_80003C80;
    case 0x80003C84u: goto label_80003C84;
    case 0x80003C88u: goto label_80003C88;
    case 0x80003C8Cu: goto label_80003C8C;
    case 0x80003C90u: goto label_80003C90;
    case 0x80003C94u: goto label_80003C94;
    case 0x80003C98u: goto label_80003C98;
    case 0x80003C9Cu: goto label_80003C9C;
    case 0x80003CA0u: goto label_80003CA0;
    case 0x80003CA4u: goto label_80003CA4;
    case 0x80003CA8u: goto label_80003CA8;
    case 0x80003CACu: goto label_80003CAC;
    case 0x80003CB0u: goto label_80003CB0;
    case 0x80003CB4u: goto label_80003CB4;
    case 0x80003CB8u: goto label_80003CB8;
    case 0x80003CBCu: goto label_80003CBC;
    case 0x80003CC0u: goto label_80003CC0;
    case 0x80003CC4u: goto label_80003CC4;
    case 0x80003CC8u: goto label_80003CC8;
    case 0x80003CCCu: goto label_80003CCC;
    case 0x80003CD0u: goto label_80003CD0;
    case 0x80003CD4u: goto label_80003CD4;
    case 0x80003CD8u: goto label_80003CD8;
    case 0x80003CDCu: goto label_80003CDC;
    case 0x80003CE0u: goto label_80003CE0;
    case 0x80003CE4u: goto label_80003CE4;
    case 0x80003CE8u: goto label_80003CE8;
    case 0x80003CECu: goto label_80003CEC;
    case 0x80003CF0u: goto label_80003CF0;
    case 0x80003CF4u: goto label_80003CF4;
    case 0x80003CF8u: goto label_80003CF8;
    case 0x80003CFCu: goto label_80003CFC;
    case 0x80003D00u: goto label_80003D00;
    case 0x80003D04u: goto label_80003D04;
    case 0x80003D08u: goto label_80003D08;
    case 0x80003D0Cu: goto label_80003D0C;
    case 0x80003D10u: goto label_80003D10;
    case 0x80003D14u: goto label_80003D14;
    case 0x80003D18u: goto label_80003D18;
    case 0x80003D1Cu: goto label_80003D1C;
    case 0x80003D20u: goto label_80003D20;
    case 0x80003D24u: goto label_80003D24;
    case 0x80003D28u: goto label_80003D28;
    case 0x80003D2Cu: goto label_80003D2C;
    case 0x80003D30u: goto label_80003D30;
    case 0x80003D34u: goto label_80003D34;
    case 0x80003D38u: goto label_80003D38;
    case 0x80003D3Cu: goto label_80003D3C;
    case 0x80003D40u: goto label_80003D40;
    case 0x80003D44u: goto label_80003D44;
    case 0x80003D48u: goto label_80003D48;
    case 0x80003D4Cu: goto label_80003D4C;
    case 0x80003D50u: goto label_80003D50;
    case 0x80003D54u: goto label_80003D54;
    case 0x80003D58u: goto label_80003D58;
    case 0x80003D5Cu: goto label_80003D5C;
    case 0x80003D60u: goto label_80003D60;
    case 0x80003D64u: goto label_80003D64;
    case 0x80003D68u: goto label_80003D68;
    case 0x80003D6Cu: goto label_80003D6C;
    case 0x80003D70u: goto label_80003D70;
    case 0x80003D74u: goto label_80003D74;
    case 0x80003D78u: goto label_80003D78;
    case 0x80003D7Cu: goto label_80003D7C;
    case 0x80003D80u: goto label_80003D80;
    case 0x80003D84u: goto label_80003D84;
    case 0x80003D88u: goto label_80003D88;
    case 0x80003D8Cu: goto label_80003D8C;
    case 0x80003D90u: goto label_80003D90;
    case 0x80003D94u: goto label_80003D94;
    case 0x80003D98u: goto label_80003D98;
    case 0x80003D9Cu: goto label_80003D9C;
    case 0x80003DA0u: goto label_80003DA0;
    case 0x80003DA4u: goto label_80003DA4;
    case 0x80003DA8u: goto label_80003DA8;
    case 0x80003DACu: goto label_80003DAC;
    case 0x80003DB0u: goto label_80003DB0;
    case 0x80003DB4u: goto label_80003DB4;
    case 0x80003DB8u: goto label_80003DB8;
    case 0x80003DBCu: goto label_80003DBC;
    case 0x80003DC0u: goto label_80003DC0;
    case 0x80003DC4u: goto label_80003DC4;
    case 0x80003DC8u: goto label_80003DC8;
    case 0x80003DCCu: goto label_80003DCC;
    case 0x80003DD0u: goto label_80003DD0;
    case 0x80003DD4u: goto label_80003DD4;
    case 0x80003DD8u: goto label_80003DD8;
    case 0x80003DDCu: goto label_80003DDC;
    case 0x80003DE0u: goto label_80003DE0;
    case 0x80003DE4u: goto label_80003DE4;
    case 0x80003DE8u: goto label_80003DE8;
    case 0x80003DECu: goto label_80003DEC;
    case 0x80003DF0u: goto label_80003DF0;
    case 0x80003DF4u: goto label_80003DF4;
    case 0x80003DF8u: goto label_80003DF8;
    case 0x80003DFCu: goto label_80003DFC;
    case 0x80003E00u: goto label_80003E00;
    case 0x80003E04u: goto label_80003E04;
    case 0x80003E08u: goto label_80003E08;
    case 0x80003E0Cu: goto label_80003E0C;
    case 0x80003E10u: goto label_80003E10;
    case 0x80003E14u: goto label_80003E14;
    case 0x80003E18u: goto label_80003E18;
    case 0x80003E1Cu: goto label_80003E1C;
    case 0x80003E20u: goto label_80003E20;
    case 0x80003E24u: goto label_80003E24;
    case 0x80003E28u: goto label_80003E28;
    case 0x80003E2Cu: goto label_80003E2C;
    case 0x80003E30u: goto label_80003E30;
    case 0x80003E34u: goto label_80003E34;
    case 0x80003E38u: goto label_80003E38;
    case 0x80003E3Cu: goto label_80003E3C;
    case 0x80003E40u: goto label_80003E40;
    case 0x80003E44u: goto label_80003E44;
    case 0x80003E48u: goto label_80003E48;
    case 0x80003E4Cu: goto label_80003E4C;
    case 0x80003E50u: goto label_80003E50;
    case 0x80003E54u: goto label_80003E54;
    case 0x80003E58u: goto label_80003E58;
    case 0x80003E5Cu: goto label_80003E5C;
    case 0x80003E60u: goto label_80003E60;
    case 0x80003E64u: goto label_80003E64;
    case 0x80003E68u: goto label_80003E68;
    case 0x80003E6Cu: goto label_80003E6C;
    case 0x80003E70u: goto label_80003E70;
    case 0x80003E74u: goto label_80003E74;
    case 0x80003E78u: goto label_80003E78;
    case 0x80003E7Cu: goto label_80003E7C;
    case 0x80003E80u: goto label_80003E80;
    case 0x80003E84u: goto label_80003E84;
    case 0x80003E88u: goto label_80003E88;
    case 0x80003E8Cu: goto label_80003E8C;
    case 0x80003E90u: goto label_80003E90;
    case 0x80003E94u: goto label_80003E94;
    case 0x80003E98u: goto label_80003E98;
    case 0x80003E9Cu: goto label_80003E9C;
    case 0x80003EA0u: goto label_80003EA0;
    case 0x80003EA4u: goto label_80003EA4;
    case 0x80003EA8u: goto label_80003EA8;
    case 0x80003EACu: goto label_80003EAC;
    case 0x80003EB0u: goto label_80003EB0;
    case 0x80003EB4u: goto label_80003EB4;
    case 0x80003EB8u: goto label_80003EB8;
    case 0x80003EBCu: goto label_80003EBC;
    case 0x80003EC0u: goto label_80003EC0;
    case 0x80003EC4u: goto label_80003EC4;
    case 0x80003EC8u: goto label_80003EC8;
    case 0x80003ECCu: goto label_80003ECC;
    case 0x80003ED0u: goto label_80003ED0;
    case 0x80003ED4u: goto label_80003ED4;
    case 0x80003ED8u: goto label_80003ED8;
    case 0x80003EDCu: goto label_80003EDC;
    case 0x80003EE0u: goto label_80003EE0;
    case 0x80003EE4u: goto label_80003EE4;
    case 0x80003EE8u: goto label_80003EE8;
    case 0x80003EECu: goto label_80003EEC;
    case 0x80003EF0u: goto label_80003EF0;
    case 0x80003EF4u: goto label_80003EF4;
    case 0x80003EF8u: goto label_80003EF8;
    case 0x80003EFCu: goto label_80003EFC;
    case 0x80003F00u: goto label_80003F00;
    case 0x80003F04u: goto label_80003F04;
    case 0x80003F08u: goto label_80003F08;
    case 0x80003F0Cu: goto label_80003F0C;
    case 0x80003F10u: goto label_80003F10;
    case 0x80003F14u: goto label_80003F14;
    case 0x80003F18u: goto label_80003F18;
    case 0x80003F1Cu: goto label_80003F1C;
    case 0x80003F20u: goto label_80003F20;
    case 0x80003F24u: goto label_80003F24;
    case 0x80003F28u: goto label_80003F28;
    case 0x80003F2Cu: goto label_80003F2C;
    case 0x80003F30u: goto label_80003F30;
    case 0x80003F34u: goto label_80003F34;
    case 0x80003F38u: goto label_80003F38;
    case 0x80003F3Cu: goto label_80003F3C;
    case 0x80003F40u: goto label_80003F40;
    case 0x80003F44u: goto label_80003F44;
    case 0x80003F48u: goto label_80003F48;
    case 0x80003F4Cu: goto label_80003F4C;
    case 0x80003F50u: goto label_80003F50;
    case 0x80003F54u: goto label_80003F54;
    case 0x80003F58u: goto label_80003F58;
    case 0x80003F5Cu: goto label_80003F5C;
    case 0x80003F60u: goto label_80003F60;
    case 0x80003F64u: goto label_80003F64;
    case 0x80003F68u: goto label_80003F68;
    case 0x80003F6Cu: goto label_80003F6C;
    case 0x80003F70u: goto label_80003F70;
    case 0x80003F74u: goto label_80003F74;
    case 0x80003F78u: goto label_80003F78;
    case 0x80003F7Cu: goto label_80003F7C;
    case 0x80003F80u: goto label_80003F80;
    case 0x80003F84u: goto label_80003F84;
    case 0x80003F88u: goto label_80003F88;
    case 0x80003F8Cu: goto label_80003F8C;
    case 0x80003F90u: goto label_80003F90;
    case 0x80003F94u: goto label_80003F94;
    case 0x80003F98u: goto label_80003F98;
    case 0x80003F9Cu: goto label_80003F9C;
    case 0x80003FA0u: goto label_80003FA0;
    case 0x80003FA4u: goto label_80003FA4;
    case 0x80003FA8u: goto label_80003FA8;
    case 0x80003FACu: goto label_80003FAC;
    case 0x80003FB0u: goto label_80003FB0;
    case 0x80003FB4u: goto label_80003FB4;
    case 0x80003FB8u: goto label_80003FB8;
    case 0x80003FBCu: goto label_80003FBC;
    case 0x80003FC0u: goto label_80003FC0;
    case 0x80003FC4u: goto label_80003FC4;
    case 0x80003FC8u: goto label_80003FC8;
    case 0x80003FCCu: goto label_80003FCC;
    case 0x80003FD0u: goto label_80003FD0;
    case 0x80003FD4u: goto label_80003FD4;
    case 0x80003FD8u: goto label_80003FD8;
    case 0x80003FDCu: goto label_80003FDC;
    case 0x80003FE0u: goto label_80003FE0;
    case 0x80003FE4u: goto label_80003FE4;
    case 0x80003FE8u: goto label_80003FE8;
    case 0x80003FECu: goto label_80003FEC;
    case 0x80003FF0u: goto label_80003FF0;
    case 0x80003FF4u: goto label_80003FF4;
    case 0x80003FF8u: goto label_80003FF8;
    case 0x80003FFCu: goto label_80003FFC;
    case 0x80004000u: goto label_80004000;
    case 0x80004004u: goto label_80004004;
    case 0x80004008u: goto label_80004008;
    case 0x8000400Cu: goto label_8000400C;
    case 0x80004010u: goto label_80004010;
    case 0x80004014u: goto label_80004014;
    case 0x80004018u: goto label_80004018;
    case 0x8000401Cu: goto label_8000401C;
    case 0x80004020u: goto label_80004020;
    case 0x80004024u: goto label_80004024;
    case 0x80004028u: goto label_80004028;
    case 0x8000402Cu: goto label_8000402C;
    case 0x80004030u: goto label_80004030;
    case 0x80004034u: goto label_80004034;
    case 0x80004038u: goto label_80004038;
    case 0x8000403Cu: goto label_8000403C;
    case 0x80004040u: goto label_80004040;
    case 0x80004044u: goto label_80004044;
    case 0x80004048u: goto label_80004048;
    case 0x8000404Cu: goto label_8000404C;
    case 0x80004050u: goto label_80004050;
    case 0x80004054u: goto label_80004054;
    case 0x80004058u: goto label_80004058;
    case 0x8000405Cu: goto label_8000405C;
    case 0x80004060u: goto label_80004060;
    case 0x80004064u: goto label_80004064;
    case 0x80004068u: goto label_80004068;
    case 0x8000406Cu: goto label_8000406C;
    case 0x80004070u: goto label_80004070;
    case 0x80004074u: goto label_80004074;
    case 0x80004078u: goto label_80004078;
    case 0x8000407Cu: goto label_8000407C;
    case 0x80004080u: goto label_80004080;
    case 0x80004084u: goto label_80004084;
    case 0x80004088u: goto label_80004088;
    case 0x8000408Cu: goto label_8000408C;
    case 0x80004090u: goto label_80004090;
    case 0x80004094u: goto label_80004094;
    case 0x80004098u: goto label_80004098;
    case 0x8000409Cu: goto label_8000409C;
    case 0x800040A0u: goto label_800040A0;
    case 0x800040A4u: goto label_800040A4;
    case 0x800040A8u: goto label_800040A8;
    case 0x800040ACu: goto label_800040AC;
    case 0x800040B0u: goto label_800040B0;
    case 0x800040B4u: goto label_800040B4;
    case 0x800040B8u: goto label_800040B8;
    case 0x800040BCu: goto label_800040BC;
    case 0x800040C0u: goto label_800040C0;
    case 0x800040C4u: goto label_800040C4;
    case 0x800040C8u: goto label_800040C8;
    case 0x800040CCu: goto label_800040CC;
    case 0x800040D0u: goto label_800040D0;
    case 0x800040D4u: goto label_800040D4;
    case 0x800040D8u: goto label_800040D8;
    case 0x800040DCu: goto label_800040DC;
    case 0x800040E0u: goto label_800040E0;
    case 0x800040E4u: goto label_800040E4;
    case 0x800040E8u: goto label_800040E8;
    case 0x800040ECu: goto label_800040EC;
    case 0x800040F0u: goto label_800040F0;
    case 0x800040F4u: goto label_800040F4;
    case 0x800040F8u: goto label_800040F8;
    case 0x800040FCu: goto label_800040FC;
    case 0x80004100u: goto label_80004100;
    case 0x80004104u: goto label_80004104;
    case 0x80004108u: goto label_80004108;
    case 0x8000410Cu: goto label_8000410C;
    case 0x80004110u: goto label_80004110;
    case 0x80004114u: goto label_80004114;
    case 0x80004118u: goto label_80004118;
    case 0x8000411Cu: goto label_8000411C;
    case 0x80004120u: goto label_80004120;
    case 0x80004124u: goto label_80004124;
    case 0x80004128u: goto label_80004128;
    case 0x8000412Cu: goto label_8000412C;
    case 0x80004130u: goto label_80004130;
    case 0x80004134u: goto label_80004134;
    case 0x80004138u: goto label_80004138;
    case 0x8000413Cu: goto label_8000413C;
    case 0x80004140u: goto label_80004140;
    case 0x80004144u: goto label_80004144;
    case 0x80004148u: goto label_80004148;
    case 0x8000414Cu: goto label_8000414C;
    case 0x80004150u: goto label_80004150;
    case 0x80004154u: goto label_80004154;
    case 0x80004158u: goto label_80004158;
    case 0x8000415Cu: goto label_8000415C;
    case 0x80004160u: goto label_80004160;
    case 0x80004164u: goto label_80004164;
    case 0x80004168u: goto label_80004168;
    case 0x8000416Cu: goto label_8000416C;
    case 0x80004170u: goto label_80004170;
    case 0x80004174u: goto label_80004174;
    case 0x80004178u: goto label_80004178;
    case 0x8000417Cu: goto label_8000417C;
    case 0x80004180u: goto label_80004180;
    case 0x80004184u: goto label_80004184;
    case 0x80004188u: goto label_80004188;
    case 0x8000418Cu: goto label_8000418C;
    case 0x80004190u: goto label_80004190;
    case 0x80004194u: goto label_80004194;
    case 0x80004198u: goto label_80004198;
    case 0x8000419Cu: goto label_8000419C;
    case 0x800041A0u: goto label_800041A0;
    case 0x800041A4u: goto label_800041A4;
    case 0x800041A8u: goto label_800041A8;
    case 0x800041ACu: goto label_800041AC;
    case 0x800041B0u: goto label_800041B0;
    case 0x800041B4u: goto label_800041B4;
    case 0x800041B8u: goto label_800041B8;
    case 0x800041BCu: goto label_800041BC;
    case 0x800041C0u: goto label_800041C0;
    case 0x800041C4u: goto label_800041C4;
    case 0x800041C8u: goto label_800041C8;
    case 0x800041CCu: goto label_800041CC;
    case 0x800041D0u: goto label_800041D0;
    case 0x800041D4u: goto label_800041D4;
    case 0x800041D8u: goto label_800041D8;
    case 0x800041DCu: goto label_800041DC;
    case 0x800041E0u: goto label_800041E0;
    case 0x800041E4u: goto label_800041E4;
    case 0x800041E8u: goto label_800041E8;
    case 0x800041ECu: goto label_800041EC;
    case 0x800041F0u: goto label_800041F0;
    case 0x800041F4u: goto label_800041F4;
    case 0x800041F8u: goto label_800041F8;
    case 0x800041FCu: goto label_800041FC;
    case 0x80004200u: goto label_80004200;
    case 0x80004204u: goto label_80004204;
    case 0x80004208u: goto label_80004208;
    case 0x8000420Cu: goto label_8000420C;
    case 0x80004210u: goto label_80004210;
    case 0x80004214u: goto label_80004214;
    case 0x80004218u: goto label_80004218;
    case 0x8000421Cu: goto label_8000421C;
    case 0x80004220u: goto label_80004220;
    case 0x80004224u: goto label_80004224;
    case 0x80004228u: goto label_80004228;
    case 0x8000422Cu: goto label_8000422C;
    case 0x80004230u: goto label_80004230;
    case 0x80004234u: goto label_80004234;
    case 0x80004238u: goto label_80004238;
    case 0x8000423Cu: goto label_8000423C;
    case 0x80004240u: goto label_80004240;
    case 0x80004244u: goto label_80004244;
    case 0x80004248u: goto label_80004248;
    case 0x8000424Cu: goto label_8000424C;
    case 0x80004250u: goto label_80004250;
    case 0x80004254u: goto label_80004254;
    case 0x80004258u: goto label_80004258;
    case 0x8000425Cu: goto label_8000425C;
    case 0x80004260u: goto label_80004260;
    case 0x80004264u: goto label_80004264;
    case 0x80004268u: goto label_80004268;
    case 0x8000426Cu: goto label_8000426C;
    case 0x80004270u: goto label_80004270;
    case 0x80004274u: goto label_80004274;
    case 0x80004278u: goto label_80004278;
    case 0x8000427Cu: goto label_8000427C;
    case 0x80004280u: goto label_80004280;
    case 0x80004284u: goto label_80004284;
    case 0x80004288u: goto label_80004288;
    case 0x8000428Cu: goto label_8000428C;
    case 0x80004290u: goto label_80004290;
    case 0x80004294u: goto label_80004294;
    case 0x80004298u: goto label_80004298;
    case 0x8000429Cu: goto label_8000429C;
    case 0x800042A0u: goto label_800042A0;
    case 0x800042A4u: goto label_800042A4;
    case 0x800042A8u: goto label_800042A8;
    case 0x800042ACu: goto label_800042AC;
    case 0x800042B0u: goto label_800042B0;
    case 0x800042B4u: goto label_800042B4;
    case 0x800042B8u: goto label_800042B8;
    case 0x800042BCu: goto label_800042BC;
    case 0x800042C0u: goto label_800042C0;
    case 0x800042C4u: goto label_800042C4;
    case 0x800042C8u: goto label_800042C8;
    case 0x800042CCu: goto label_800042CC;
    case 0x800042D0u: goto label_800042D0;
    case 0x800042D4u: goto label_800042D4;
    case 0x800042D8u: goto label_800042D8;
    case 0x800042DCu: goto label_800042DC;
    case 0x800042E0u: goto label_800042E0;
    case 0x800042E4u: goto label_800042E4;
    case 0x800042E8u: goto label_800042E8;
    case 0x800042ECu: goto label_800042EC;
    case 0x800042F0u: goto label_800042F0;
    case 0x800042F4u: goto label_800042F4;
    case 0x800042F8u: goto label_800042F8;
    case 0x800042FCu: goto label_800042FC;
    case 0x80004300u: goto label_80004300;
    case 0x80004304u: goto label_80004304;
    case 0x80004308u: goto label_80004308;
    case 0x8000430Cu: goto label_8000430C;
    case 0x80004310u: goto label_80004310;
    case 0x80004314u: goto label_80004314;
    case 0x80004318u: goto label_80004318;
    case 0x8000431Cu: goto label_8000431C;
    case 0x80004320u: goto label_80004320;
    case 0x80004324u: goto label_80004324;
    case 0x80004328u: goto label_80004328;
    case 0x8000432Cu: goto label_8000432C;
    case 0x80004330u: goto label_80004330;
    case 0x80004334u: goto label_80004334;
    case 0x80004338u: goto label_80004338;
    case 0x8000433Cu: goto label_8000433C;
    case 0x80004340u: goto label_80004340;
    case 0x80004344u: goto label_80004344;
    case 0x80004348u: goto label_80004348;
    case 0x8000434Cu: goto label_8000434C;
    case 0x80004350u: goto label_80004350;
    case 0x80004354u: goto label_80004354;
    case 0x80004358u: goto label_80004358;
    case 0x8000435Cu: goto label_8000435C;
    case 0x80004360u: goto label_80004360;
    case 0x80004364u: goto label_80004364;
    case 0x80004368u: goto label_80004368;
    case 0x8000436Cu: goto label_8000436C;
    case 0x80004370u: goto label_80004370;
    case 0x80004374u: goto label_80004374;
    case 0x80004378u: goto label_80004378;
    case 0x8000437Cu: goto label_8000437C;
    case 0x80004380u: goto label_80004380;
    case 0x80004384u: goto label_80004384;
    case 0x80004388u: goto label_80004388;
    case 0x8000438Cu: goto label_8000438C;
    case 0x80004390u: goto label_80004390;
    case 0x80004394u: goto label_80004394;
    case 0x80004398u: goto label_80004398;
    case 0x8000439Cu: goto label_8000439C;
    case 0x800043A0u: goto label_800043A0;
    case 0x800043A4u: goto label_800043A4;
    case 0x800043A8u: goto label_800043A8;
    case 0x800043ACu: goto label_800043AC;
    case 0x800043B0u: goto label_800043B0;
    case 0x800043B4u: goto label_800043B4;
    case 0x800043B8u: goto label_800043B8;
    case 0x800043BCu: goto label_800043BC;
    case 0x800043C0u: goto label_800043C0;
    case 0x800043C4u: goto label_800043C4;
    case 0x800043C8u: goto label_800043C8;
    case 0x800043CCu: goto label_800043CC;
    case 0x800043D0u: goto label_800043D0;
    case 0x800043D4u: goto label_800043D4;
    case 0x800043D8u: goto label_800043D8;
    case 0x800043DCu: goto label_800043DC;
    case 0x800043E0u: goto label_800043E0;
    case 0x800043E4u: goto label_800043E4;
    case 0x800043E8u: goto label_800043E8;
    case 0x800043ECu: goto label_800043EC;
    case 0x800043F0u: goto label_800043F0;
    case 0x800043F4u: goto label_800043F4;
    case 0x800043F8u: goto label_800043F8;
    case 0x800043FCu: goto label_800043FC;
    case 0x80004400u: goto label_80004400;
    case 0x80004404u: goto label_80004404;
    case 0x80004408u: goto label_80004408;
    case 0x8000440Cu: goto label_8000440C;
    case 0x80004410u: goto label_80004410;
    case 0x80004414u: goto label_80004414;
    case 0x80004418u: goto label_80004418;
    case 0x8000441Cu: goto label_8000441C;
    case 0x80004420u: goto label_80004420;
    case 0x80004424u: goto label_80004424;
    case 0x80004428u: goto label_80004428;
    case 0x8000442Cu: goto label_8000442C;
    case 0x80004430u: goto label_80004430;
    case 0x80004434u: goto label_80004434;
    case 0x80004438u: goto label_80004438;
    case 0x8000443Cu: goto label_8000443C;
    case 0x80004440u: goto label_80004440;
    case 0x80004444u: goto label_80004444;
    case 0x80004448u: goto label_80004448;
    case 0x8000444Cu: goto label_8000444C;
    case 0x80004450u: goto label_80004450;
    case 0x80004454u: goto label_80004454;
    case 0x80004458u: goto label_80004458;
    case 0x8000445Cu: goto label_8000445C;
    case 0x80004460u: goto label_80004460;
    case 0x80004464u: goto label_80004464;
    case 0x80004468u: goto label_80004468;
    case 0x8000446Cu: goto label_8000446C;
    case 0x80004470u: goto label_80004470;
    case 0x80004474u: goto label_80004474;
    case 0x80004478u: goto label_80004478;
    case 0x8000447Cu: goto label_8000447C;
    case 0x80004480u: goto label_80004480;
    case 0x80004484u: goto label_80004484;
    case 0x80004488u: goto label_80004488;
    case 0x8000448Cu: goto label_8000448C;
    case 0x80004490u: goto label_80004490;
    case 0x80004494u: goto label_80004494;
    case 0x80004498u: goto label_80004498;
    case 0x8000449Cu: goto label_8000449C;
    case 0x800044A0u: goto label_800044A0;
    case 0x800044A4u: goto label_800044A4;
    case 0x800044A8u: goto label_800044A8;
    case 0x800044ACu: goto label_800044AC;
    case 0x800044B0u: goto label_800044B0;
    case 0x800044B4u: goto label_800044B4;
    case 0x800044B8u: goto label_800044B8;
    case 0x800044BCu: goto label_800044BC;
    case 0x800044C0u: goto label_800044C0;
    case 0x800044C4u: goto label_800044C4;
    case 0x800044C8u: goto label_800044C8;
    case 0x800044CCu: goto label_800044CC;
    case 0x800044D0u: goto label_800044D0;
    case 0x800044D4u: goto label_800044D4;
    case 0x800044D8u: goto label_800044D8;
    case 0x800044DCu: goto label_800044DC;
    case 0x800044E0u: goto label_800044E0;
    case 0x800044E4u: goto label_800044E4;
    case 0x800044E8u: goto label_800044E8;
    case 0x800044ECu: goto label_800044EC;
    case 0x800044F0u: goto label_800044F0;
    case 0x800044F4u: goto label_800044F4;
    case 0x800044F8u: goto label_800044F8;
    case 0x800044FCu: goto label_800044FC;
    case 0x80004500u: goto label_80004500;
    case 0x80004504u: goto label_80004504;
    case 0x80004508u: goto label_80004508;
    case 0x8000450Cu: goto label_8000450C;
    case 0x80004510u: goto label_80004510;
    case 0x80004514u: goto label_80004514;
    case 0x80004518u: goto label_80004518;
    case 0x8000451Cu: goto label_8000451C;
    case 0x80004520u: goto label_80004520;
    case 0x80004524u: goto label_80004524;
    case 0x80004528u: goto label_80004528;
    case 0x8000452Cu: goto label_8000452C;
    case 0x80004530u: goto label_80004530;
    case 0x80004534u: goto label_80004534;
    case 0x80004538u: goto label_80004538;
    case 0x8000453Cu: goto label_8000453C;
    case 0x80004540u: goto label_80004540;
    case 0x80004544u: goto label_80004544;
    case 0x80004548u: goto label_80004548;
    case 0x8000454Cu: goto label_8000454C;
    case 0x80004550u: goto label_80004550;
    case 0x80004554u: goto label_80004554;
    case 0x80004558u: goto label_80004558;
    case 0x8000455Cu: goto label_8000455C;
    case 0x80004560u: goto label_80004560;
    case 0x80004564u: goto label_80004564;
    case 0x80004568u: goto label_80004568;
    case 0x8000456Cu: goto label_8000456C;
    case 0x80004570u: goto label_80004570;
    case 0x80004574u: goto label_80004574;
    case 0x80004578u: goto label_80004578;
    case 0x8000457Cu: goto label_8000457C;
    case 0x80004580u: goto label_80004580;
    case 0x80004584u: goto label_80004584;
    case 0x80004588u: goto label_80004588;
    case 0x8000458Cu: goto label_8000458C;
    case 0x80004590u: goto label_80004590;
    case 0x80004594u: goto label_80004594;
    case 0x80004598u: goto label_80004598;
    case 0x8000459Cu: goto label_8000459C;
    case 0x800045A0u: goto label_800045A0;
    case 0x800045A4u: goto label_800045A4;
    case 0x800045A8u: goto label_800045A8;
    case 0x800045ACu: goto label_800045AC;
    case 0x800045B0u: goto label_800045B0;
    case 0x800045B4u: goto label_800045B4;
    case 0x800045B8u: goto label_800045B8;
    case 0x800045BCu: goto label_800045BC;
    case 0x800045C0u: goto label_800045C0;
    case 0x800045C4u: goto label_800045C4;
    case 0x800045C8u: goto label_800045C8;
    case 0x800045CCu: goto label_800045CC;
    case 0x800045D0u: goto label_800045D0;
    case 0x800045D4u: goto label_800045D4;
    case 0x800045D8u: goto label_800045D8;
    case 0x800045DCu: goto label_800045DC;
    case 0x800045E0u: goto label_800045E0;
    case 0x800045E4u: goto label_800045E4;
    case 0x800045E8u: goto label_800045E8;
    case 0x800045ECu: goto label_800045EC;
    case 0x800045F0u: goto label_800045F0;
    case 0x800045F4u: goto label_800045F4;
    case 0x800045F8u: goto label_800045F8;
    case 0x800045FCu: goto label_800045FC;
    case 0x80004600u: goto label_80004600;
    case 0x80004604u: goto label_80004604;
    case 0x80004608u: goto label_80004608;
    case 0x8000460Cu: goto label_8000460C;
    case 0x80004610u: goto label_80004610;
    case 0x80004614u: goto label_80004614;
    case 0x80004618u: goto label_80004618;
    case 0x8000461Cu: goto label_8000461C;
    case 0x80004620u: goto label_80004620;
    case 0x80004624u: goto label_80004624;
    case 0x80004628u: goto label_80004628;
    case 0x8000462Cu: goto label_8000462C;
    case 0x80004630u: goto label_80004630;
    case 0x80004634u: goto label_80004634;
    case 0x80004638u: goto label_80004638;
    case 0x8000463Cu: goto label_8000463C;
    case 0x80004640u: goto label_80004640;
    case 0x80004644u: goto label_80004644;
    case 0x80004648u: goto label_80004648;
    case 0x8000464Cu: goto label_8000464C;
    case 0x80004650u: goto label_80004650;
    case 0x80004654u: goto label_80004654;
    case 0x80004658u: goto label_80004658;
    case 0x8000465Cu: goto label_8000465C;
    case 0x80004660u: goto label_80004660;
    case 0x80004664u: goto label_80004664;
    case 0x80004668u: goto label_80004668;
    case 0x8000466Cu: goto label_8000466C;
    case 0x80004670u: goto label_80004670;
    case 0x80004674u: goto label_80004674;
    case 0x80004678u: goto label_80004678;
    case 0x8000467Cu: goto label_8000467C;
    case 0x80004680u: goto label_80004680;
    case 0x80004684u: goto label_80004684;
    case 0x80004688u: goto label_80004688;
    case 0x8000468Cu: goto label_8000468C;
    case 0x80004690u: goto label_80004690;
    case 0x80004694u: goto label_80004694;
    case 0x80004698u: goto label_80004698;
    case 0x8000469Cu: goto label_8000469C;
    case 0x800046A0u: goto label_800046A0;
    case 0x800046A4u: goto label_800046A4;
    case 0x800046A8u: goto label_800046A8;
    case 0x800046ACu: goto label_800046AC;
    case 0x800046B0u: goto label_800046B0;
    case 0x800046B4u: goto label_800046B4;
    case 0x800046B8u: goto label_800046B8;
    case 0x800046BCu: goto label_800046BC;
    case 0x800046C0u: goto label_800046C0;
    case 0x800046C4u: goto label_800046C4;
    case 0x800046C8u: goto label_800046C8;
    case 0x800046CCu: goto label_800046CC;
    case 0x800046D0u: goto label_800046D0;
    case 0x800046D4u: goto label_800046D4;
    case 0x800046D8u: goto label_800046D8;
    case 0x800046DCu: goto label_800046DC;
    case 0x800046E0u: goto label_800046E0;
    case 0x800046E4u: goto label_800046E4;
    case 0x800046E8u: goto label_800046E8;
    case 0x800046ECu: goto label_800046EC;
    case 0x800046F0u: goto label_800046F0;
    case 0x800046F4u: goto label_800046F4;
    case 0x800046F8u: goto label_800046F8;
    case 0x800046FCu: goto label_800046FC;
    case 0x80004700u: goto label_80004700;
    case 0x80004704u: goto label_80004704;
    case 0x80004708u: goto label_80004708;
    case 0x8000470Cu: goto label_8000470C;
    case 0x80004710u: goto label_80004710;
    case 0x80004714u: goto label_80004714;
    case 0x80004718u: goto label_80004718;
    case 0x8000471Cu: goto label_8000471C;
    case 0x80004720u: goto label_80004720;
    case 0x80004724u: goto label_80004724;
    case 0x80004728u: goto label_80004728;
    case 0x8000472Cu: goto label_8000472C;
    case 0x80004730u: goto label_80004730;
    case 0x80004734u: goto label_80004734;
    case 0x80004738u: goto label_80004738;
    case 0x8000473Cu: goto label_8000473C;
    case 0x80004740u: goto label_80004740;
    case 0x80004744u: goto label_80004744;
    case 0x80004748u: goto label_80004748;
    case 0x8000474Cu: goto label_8000474C;
    case 0x80004750u: goto label_80004750;
    case 0x80004754u: goto label_80004754;
    case 0x80004758u: goto label_80004758;
    case 0x8000475Cu: goto label_8000475C;
    case 0x80004760u: goto label_80004760;
    case 0x80004764u: goto label_80004764;
    case 0x80004768u: goto label_80004768;
    case 0x8000476Cu: goto label_8000476C;
    case 0x80004770u: goto label_80004770;
    case 0x80004774u: goto label_80004774;
    case 0x80004778u: goto label_80004778;
    case 0x8000477Cu: goto label_8000477C;
    case 0x80004780u: goto label_80004780;
    case 0x80004784u: goto label_80004784;
    case 0x80004788u: goto label_80004788;
    case 0x8000478Cu: goto label_8000478C;
    case 0x80004790u: goto label_80004790;
    case 0x80004794u: goto label_80004794;
    case 0x80004798u: goto label_80004798;
    case 0x8000479Cu: goto label_8000479C;
    case 0x800047A0u: goto label_800047A0;
    case 0x800047A4u: goto label_800047A4;
    case 0x800047A8u: goto label_800047A8;
    case 0x800047ACu: goto label_800047AC;
    case 0x800047B0u: goto label_800047B0;
    case 0x800047B4u: goto label_800047B4;
    case 0x800047B8u: goto label_800047B8;
    case 0x800047BCu: goto label_800047BC;
    case 0x800047C0u: goto label_800047C0;
    case 0x800047C4u: goto label_800047C4;
    case 0x800047C8u: goto label_800047C8;
    case 0x800047CCu: goto label_800047CC;
    case 0x800047D0u: goto label_800047D0;
    case 0x800047D4u: goto label_800047D4;
    case 0x800047D8u: goto label_800047D8;
    case 0x800047DCu: goto label_800047DC;
    case 0x800047E0u: goto label_800047E0;
    case 0x800047E4u: goto label_800047E4;
    case 0x800047E8u: goto label_800047E8;
    case 0x800047ECu: goto label_800047EC;
    case 0x800047F0u: goto label_800047F0;
    case 0x800047F4u: goto label_800047F4;
    case 0x800047F8u: goto label_800047F8;
    case 0x800047FCu: goto label_800047FC;
    case 0x80004800u: goto label_80004800;
    case 0x80004804u: goto label_80004804;
    case 0x80004808u: goto label_80004808;
    case 0x8000480Cu: goto label_8000480C;
    case 0x80004810u: goto label_80004810;
    case 0x80004814u: goto label_80004814;
    case 0x80004818u: goto label_80004818;
    case 0x8000481Cu: goto label_8000481C;
    case 0x80004820u: goto label_80004820;
    case 0x80004824u: goto label_80004824;
    case 0x80004828u: goto label_80004828;
    case 0x8000482Cu: goto label_8000482C;
    case 0x80004830u: goto label_80004830;
    case 0x80004834u: goto label_80004834;
    case 0x80004838u: goto label_80004838;
    case 0x8000483Cu: goto label_8000483C;
    case 0x80004840u: goto label_80004840;
    case 0x80004844u: goto label_80004844;
    case 0x80004848u: goto label_80004848;
    case 0x8000484Cu: goto label_8000484C;
    case 0x80004850u: goto label_80004850;
    case 0x80004854u: goto label_80004854;
    case 0x80004858u: goto label_80004858;
    case 0x8000485Cu: goto label_8000485C;
    case 0x80004860u: goto label_80004860;
    case 0x80004864u: goto label_80004864;
    case 0x80004868u: goto label_80004868;
    case 0x8000486Cu: goto label_8000486C;
    case 0x80004870u: goto label_80004870;
    case 0x80004874u: goto label_80004874;
    case 0x80004878u: goto label_80004878;
    case 0x8000487Cu: goto label_8000487C;
    case 0x80004880u: goto label_80004880;
    case 0x80004884u: goto label_80004884;
    case 0x80004888u: goto label_80004888;
    case 0x8000488Cu: goto label_8000488C;
    case 0x80004890u: goto label_80004890;
    case 0x80004894u: goto label_80004894;
    case 0x80004898u: goto label_80004898;
    case 0x8000489Cu: goto label_8000489C;
    case 0x800048A0u: goto label_800048A0;
    case 0x800048A4u: goto label_800048A4;
    case 0x800048A8u: goto label_800048A8;
    case 0x800048ACu: goto label_800048AC;
    case 0x800048B0u: goto label_800048B0;
    case 0x800048B4u: goto label_800048B4;
    case 0x800048B8u: goto label_800048B8;
    case 0x800048BCu: goto label_800048BC;
    case 0x800048C0u: goto label_800048C0;
    case 0x800048C4u: goto label_800048C4;
    case 0x800048C8u: goto label_800048C8;
    case 0x800048CCu: goto label_800048CC;
    case 0x800048D0u: goto label_800048D0;
    case 0x800048D4u: goto label_800048D4;
    case 0x800048D8u: goto label_800048D8;
    case 0x800048DCu: goto label_800048DC;
    case 0x800048E0u: goto label_800048E0;
    case 0x800048E4u: goto label_800048E4;
    case 0x800048E8u: goto label_800048E8;
    case 0x800048ECu: goto label_800048EC;
    case 0x800048F0u: goto label_800048F0;
    case 0x800048F4u: goto label_800048F4;
    case 0x800048F8u: goto label_800048F8;
    case 0x800048FCu: goto label_800048FC;
    case 0x80004900u: goto label_80004900;
    case 0x80004904u: goto label_80004904;
    case 0x80004908u: goto label_80004908;
    case 0x8000490Cu: goto label_8000490C;
    case 0x80004910u: goto label_80004910;
    case 0x80004914u: goto label_80004914;
    case 0x80004918u: goto label_80004918;
    case 0x8000491Cu: goto label_8000491C;
    case 0x80004920u: goto label_80004920;
    case 0x80004924u: goto label_80004924;
    case 0x80004928u: goto label_80004928;
    case 0x8000492Cu: goto label_8000492C;
    case 0x80004930u: goto label_80004930;
    case 0x80004934u: goto label_80004934;
    case 0x80004938u: goto label_80004938;
    case 0x8000493Cu: goto label_8000493C;
    case 0x80004940u: goto label_80004940;
    case 0x80004944u: goto label_80004944;
    case 0x80004948u: goto label_80004948;
    case 0x8000494Cu: goto label_8000494C;
    case 0x80004950u: goto label_80004950;
    case 0x80004954u: goto label_80004954;
    case 0x80004958u: goto label_80004958;
    case 0x8000495Cu: goto label_8000495C;
    case 0x80004960u: goto label_80004960;
    case 0x80004964u: goto label_80004964;
    case 0x80004968u: goto label_80004968;
    case 0x8000496Cu: goto label_8000496C;
    case 0x80004970u: goto label_80004970;
    case 0x80004974u: goto label_80004974;
    case 0x80004978u: goto label_80004978;
    case 0x8000497Cu: goto label_8000497C;
    case 0x80004980u: goto label_80004980;
    case 0x80004984u: goto label_80004984;
    case 0x80004988u: goto label_80004988;
    case 0x8000498Cu: goto label_8000498C;
    case 0x80004990u: goto label_80004990;
    case 0x80004994u: goto label_80004994;
    case 0x80004998u: goto label_80004998;
    case 0x8000499Cu: goto label_8000499C;
    case 0x800049A0u: goto label_800049A0;
    case 0x800049A4u: goto label_800049A4;
    case 0x800049A8u: goto label_800049A8;
    case 0x800049ACu: goto label_800049AC;
    case 0x800049B0u: goto label_800049B0;
    case 0x800049B4u: goto label_800049B4;
    case 0x800049B8u: goto label_800049B8;
    case 0x800049BCu: goto label_800049BC;
    case 0x800049C0u: goto label_800049C0;
    case 0x800049C4u: goto label_800049C4;
    case 0x800049C8u: goto label_800049C8;
    case 0x800049CCu: goto label_800049CC;
    case 0x800049D0u: goto label_800049D0;
    case 0x800049D4u: goto label_800049D4;
    case 0x800049D8u: goto label_800049D8;
    case 0x800049DCu: goto label_800049DC;
    case 0x800049E0u: goto label_800049E0;
    case 0x800049E4u: goto label_800049E4;
    case 0x800049E8u: goto label_800049E8;
    case 0x800049ECu: goto label_800049EC;
    case 0x800049F0u: goto label_800049F0;
    case 0x800049F4u: goto label_800049F4;
    case 0x800049F8u: goto label_800049F8;
    case 0x800049FCu: goto label_800049FC;
    case 0x80004A00u: goto label_80004A00;
    case 0x80004A04u: goto label_80004A04;
    case 0x80004A08u: goto label_80004A08;
    case 0x80004A0Cu: goto label_80004A0C;
    case 0x80004A10u: goto label_80004A10;
    case 0x80004A14u: goto label_80004A14;
    case 0x80004A18u: goto label_80004A18;
    case 0x80004A1Cu: goto label_80004A1C;
    case 0x80004A20u: goto label_80004A20;
    case 0x80004A24u: goto label_80004A24;
    case 0x80004A28u: goto label_80004A28;
    case 0x80004A2Cu: goto label_80004A2C;
    case 0x80004A30u: goto label_80004A30;
    case 0x80004A34u: goto label_80004A34;
    case 0x80004A38u: goto label_80004A38;
    case 0x80004A3Cu: goto label_80004A3C;
    case 0x80004A40u: goto label_80004A40;
    case 0x80004A44u: goto label_80004A44;
    case 0x80004A48u: goto label_80004A48;
    case 0x80004A4Cu: goto label_80004A4C;
    case 0x80004A50u: goto label_80004A50;
    case 0x80004A54u: goto label_80004A54;
    case 0x80004A58u: goto label_80004A58;
    case 0x80004A5Cu: goto label_80004A5C;
    case 0x80004A60u: goto label_80004A60;
    case 0x80004A64u: goto label_80004A64;
    case 0x80004A68u: goto label_80004A68;
    case 0x80004A6Cu: goto label_80004A6C;
    case 0x80004A70u: goto label_80004A70;
    case 0x80004A74u: goto label_80004A74;
    case 0x80004A78u: goto label_80004A78;
    case 0x80004A7Cu: goto label_80004A7C;
    case 0x80004A80u: goto label_80004A80;
    case 0x80004A84u: goto label_80004A84;
    case 0x80004A88u: goto label_80004A88;
    case 0x80004A8Cu: goto label_80004A8C;
    case 0x80004A90u: goto label_80004A90;
    case 0x80004A94u: goto label_80004A94;
    case 0x80004A98u: goto label_80004A98;
    case 0x80004A9Cu: goto label_80004A9C;
    case 0x80004AA0u: goto label_80004AA0;
    case 0x80004AA4u: goto label_80004AA4;
    case 0x80004AA8u: goto label_80004AA8;
    case 0x80004AACu: goto label_80004AAC;
    case 0x80004AB0u: goto label_80004AB0;
    case 0x80004AB4u: goto label_80004AB4;
    case 0x80004AB8u: goto label_80004AB8;
    case 0x80004ABCu: goto label_80004ABC;
    case 0x80004AC0u: goto label_80004AC0;
    case 0x80004AC4u: goto label_80004AC4;
    case 0x80004AC8u: goto label_80004AC8;
    case 0x80004ACCu: goto label_80004ACC;
    case 0x80004AD0u: goto label_80004AD0;
    case 0x80004AD4u: goto label_80004AD4;
    case 0x80004AD8u: goto label_80004AD8;
    case 0x80004ADCu: goto label_80004ADC;
    case 0x80004AE0u: goto label_80004AE0;
    case 0x80004AE4u: goto label_80004AE4;
    case 0x80004AE8u: goto label_80004AE8;
    case 0x80004AECu: goto label_80004AEC;
    case 0x80004AF0u: goto label_80004AF0;
    case 0x80004AF4u: goto label_80004AF4;
    case 0x80004AF8u: goto label_80004AF8;
    case 0x80004AFCu: goto label_80004AFC;
    case 0x80004B00u: goto label_80004B00;
    case 0x80004B04u: goto label_80004B04;
    case 0x80004B08u: goto label_80004B08;
    case 0x80004B0Cu: goto label_80004B0C;
    case 0x80004B10u: goto label_80004B10;
    case 0x80004B14u: goto label_80004B14;
    case 0x80004B18u: goto label_80004B18;
    case 0x80004B1Cu: goto label_80004B1C;
    case 0x80004B20u: goto label_80004B20;
    case 0x80004B24u: goto label_80004B24;
    case 0x80004B28u: goto label_80004B28;
    case 0x80004B2Cu: goto label_80004B2C;
    case 0x80004B30u: goto label_80004B30;
    case 0x80004B34u: goto label_80004B34;
    case 0x80004B38u: goto label_80004B38;
    case 0x80004B3Cu: goto label_80004B3C;
    case 0x80004B40u: goto label_80004B40;
    case 0x80004B44u: goto label_80004B44;
    case 0x80004B48u: goto label_80004B48;
    case 0x80004B4Cu: goto label_80004B4C;
    case 0x80004B50u: goto label_80004B50;
    case 0x80004B54u: goto label_80004B54;
    case 0x80004B58u: goto label_80004B58;
    case 0x80004B5Cu: goto label_80004B5C;
    case 0x80004B60u: goto label_80004B60;
    case 0x80004B64u: goto label_80004B64;
    case 0x80004B68u: goto label_80004B68;
    case 0x80004B6Cu: goto label_80004B6C;
    case 0x80004B70u: goto label_80004B70;
    case 0x80004B74u: goto label_80004B74;
    case 0x80004B78u: goto label_80004B78;
    case 0x80004B7Cu: goto label_80004B7C;
    case 0x80004B80u: goto label_80004B80;
    case 0x80004B84u: goto label_80004B84;
    case 0x80004B88u: goto label_80004B88;
    case 0x80004B8Cu: goto label_80004B8C;
    case 0x80004B90u: goto label_80004B90;
    case 0x80004B94u: goto label_80004B94;
    case 0x80004B98u: goto label_80004B98;
    case 0x80004B9Cu: goto label_80004B9C;
    case 0x80004BA0u: goto label_80004BA0;
    case 0x80004BA4u: goto label_80004BA4;
    case 0x80004BA8u: goto label_80004BA8;
    case 0x80004BACu: goto label_80004BAC;
    case 0x80004BB0u: goto label_80004BB0;
    case 0x80004BB4u: goto label_80004BB4;
    case 0x80004BB8u: goto label_80004BB8;
    case 0x80004BBCu: goto label_80004BBC;
    case 0x80004BC0u: goto label_80004BC0;
    case 0x80004BC4u: goto label_80004BC4;
    case 0x80004BC8u: goto label_80004BC8;
    case 0x80004BCCu: goto label_80004BCC;
    case 0x80004BD0u: goto label_80004BD0;
    case 0x80004BD4u: goto label_80004BD4;
    case 0x80004BD8u: goto label_80004BD8;
    case 0x80004BDCu: goto label_80004BDC;
    case 0x80004BE0u: goto label_80004BE0;
    case 0x80004BE4u: goto label_80004BE4;
    case 0x80004BE8u: goto label_80004BE8;
    case 0x80004BECu: goto label_80004BEC;
    case 0x80004BF0u: goto label_80004BF0;
    case 0x80004BF4u: goto label_80004BF4;
    case 0x80004BF8u: goto label_80004BF8;
    case 0x80004BFCu: goto label_80004BFC;
    case 0x80004C00u: goto label_80004C00;
    case 0x80004C04u: goto label_80004C04;
    case 0x80004C08u: goto label_80004C08;
    case 0x80004C0Cu: goto label_80004C0C;
    case 0x80004C10u: goto label_80004C10;
    case 0x80004C14u: goto label_80004C14;
    case 0x80004C18u: goto label_80004C18;
    case 0x80004C1Cu: goto label_80004C1C;
    case 0x80004C20u: goto label_80004C20;
    case 0x80004C24u: goto label_80004C24;
    case 0x80004C28u: goto label_80004C28;
    case 0x80004C2Cu: goto label_80004C2C;
    case 0x80004C30u: goto label_80004C30;
    case 0x80004C34u: goto label_80004C34;
    case 0x80004C38u: goto label_80004C38;
    case 0x80004C3Cu: goto label_80004C3C;
    case 0x80004C40u: goto label_80004C40;
    case 0x80004C44u: goto label_80004C44;
    case 0x80004C48u: goto label_80004C48;
    case 0x80004C4Cu: goto label_80004C4C;
    case 0x80004C50u: goto label_80004C50;
    case 0x80004C54u: goto label_80004C54;
    case 0x80004C58u: goto label_80004C58;
    case 0x80004C5Cu: goto label_80004C5C;
    case 0x80004C60u: goto label_80004C60;
    case 0x80004C64u: goto label_80004C64;
    case 0x80004C68u: goto label_80004C68;
    case 0x80004C6Cu: goto label_80004C6C;
    case 0x80004C70u: goto label_80004C70;
    case 0x80004C74u: goto label_80004C74;
    case 0x80004C78u: goto label_80004C78;
    case 0x80004C7Cu: goto label_80004C7C;
    case 0x80004C80u: goto label_80004C80;
    case 0x80004C84u: goto label_80004C84;
    case 0x80004C88u: goto label_80004C88;
    case 0x80004C8Cu: goto label_80004C8C;
    case 0x80004C90u: goto label_80004C90;
    case 0x80004C94u: goto label_80004C94;
    case 0x80004C98u: goto label_80004C98;
    case 0x80004C9Cu: goto label_80004C9C;
    case 0x80004CA0u: goto label_80004CA0;
    case 0x80004CA4u: goto label_80004CA4;
    case 0x80004CA8u: goto label_80004CA8;
    case 0x80004CACu: goto label_80004CAC;
    case 0x80004CB0u: goto label_80004CB0;
    case 0x80004CB4u: goto label_80004CB4;
    case 0x80004CB8u: goto label_80004CB8;
    case 0x80004CBCu: goto label_80004CBC;
    case 0x80004CC0u: goto label_80004CC0;
    case 0x80004CC4u: goto label_80004CC4;
    case 0x80004CC8u: goto label_80004CC8;
    case 0x80004CCCu: goto label_80004CCC;
    case 0x80004CD0u: goto label_80004CD0;
    case 0x80004CD4u: goto label_80004CD4;
    case 0x80004CD8u: goto label_80004CD8;
    case 0x80004CDCu: goto label_80004CDC;
    case 0x80004CE0u: goto label_80004CE0;
    case 0x80004CE4u: goto label_80004CE4;
    case 0x80004CE8u: goto label_80004CE8;
    case 0x80004CECu: goto label_80004CEC;
    case 0x80004CF0u: goto label_80004CF0;
    case 0x80004CF4u: goto label_80004CF4;
    case 0x80004CF8u: goto label_80004CF8;
    case 0x80004CFCu: goto label_80004CFC;
    case 0x80004D00u: goto label_80004D00;
    case 0x80004D04u: goto label_80004D04;
    case 0x80004D08u: goto label_80004D08;
    case 0x80004D0Cu: goto label_80004D0C;
    case 0x80004D10u: goto label_80004D10;
    case 0x80004D14u: goto label_80004D14;
    case 0x80004D18u: goto label_80004D18;
    case 0x80004D1Cu: goto label_80004D1C;
    case 0x80004D20u: goto label_80004D20;
    case 0x80004D24u: goto label_80004D24;
    case 0x80004D28u: goto label_80004D28;
    case 0x80004D2Cu: goto label_80004D2C;
    case 0x80004D30u: goto label_80004D30;
    case 0x80004D34u: goto label_80004D34;
    case 0x80004D38u: goto label_80004D38;
    case 0x80004D3Cu: goto label_80004D3C;
    case 0x80004D40u: goto label_80004D40;
    case 0x80004D44u: goto label_80004D44;
    case 0x80004D48u: goto label_80004D48;
    case 0x80004D4Cu: goto label_80004D4C;
    case 0x80004D50u: goto label_80004D50;
    case 0x80004D54u: goto label_80004D54;
    case 0x80004D58u: goto label_80004D58;
    case 0x80004D5Cu: goto label_80004D5C;
    case 0x80004D60u: goto label_80004D60;
    case 0x80004D64u: goto label_80004D64;
    case 0x80004D68u: goto label_80004D68;
    case 0x80004D6Cu: goto label_80004D6C;
    case 0x80004D70u: goto label_80004D70;
    case 0x80004D74u: goto label_80004D74;
    case 0x80004D78u: goto label_80004D78;
    case 0x80004D7Cu: goto label_80004D7C;
    case 0x80004D80u: goto label_80004D80;
    case 0x80004D84u: goto label_80004D84;
    case 0x80004D88u: goto label_80004D88;
    case 0x80004D8Cu: goto label_80004D8C;
    case 0x80004D90u: goto label_80004D90;
    case 0x80004D94u: goto label_80004D94;
    case 0x80004D98u: goto label_80004D98;
    case 0x80004D9Cu: goto label_80004D9C;
    case 0x80004DA0u: goto label_80004DA0;
    case 0x80004DA4u: goto label_80004DA4;
    case 0x80004DA8u: goto label_80004DA8;
    case 0x80004DACu: goto label_80004DAC;
    case 0x80004DB0u: goto label_80004DB0;
    case 0x80004DB4u: goto label_80004DB4;
    case 0x80004DB8u: goto label_80004DB8;
    case 0x80004DBCu: goto label_80004DBC;
    case 0x80004DC0u: goto label_80004DC0;
    case 0x80004DC4u: goto label_80004DC4;
    case 0x80004DC8u: goto label_80004DC8;
    case 0x80004DCCu: goto label_80004DCC;
    case 0x80004DD0u: goto label_80004DD0;
    case 0x80004DD4u: goto label_80004DD4;
    case 0x80004DD8u: goto label_80004DD8;
    case 0x80004DDCu: goto label_80004DDC;
    case 0x80004DE0u: goto label_80004DE0;
    case 0x80004DE4u: goto label_80004DE4;
    case 0x80004DE8u: goto label_80004DE8;
    case 0x80004DECu: goto label_80004DEC;
    case 0x80004DF0u: goto label_80004DF0;
    case 0x80004DF4u: goto label_80004DF4;
    case 0x80004DF8u: goto label_80004DF8;
    case 0x80004DFCu: goto label_80004DFC;
    case 0x80004E00u: goto label_80004E00;
    case 0x80004E04u: goto label_80004E04;
    case 0x80004E08u: goto label_80004E08;
    case 0x80004E0Cu: goto label_80004E0C;
    case 0x80004E10u: goto label_80004E10;
    case 0x80004E14u: goto label_80004E14;
    case 0x80004E18u: goto label_80004E18;
    case 0x80004E1Cu: goto label_80004E1C;
    case 0x80004E20u: goto label_80004E20;
    case 0x80004E24u: goto label_80004E24;
    case 0x80004E28u: goto label_80004E28;
    case 0x80004E2Cu: goto label_80004E2C;
    case 0x80004E30u: goto label_80004E30;
    case 0x80004E34u: goto label_80004E34;
    case 0x80004E38u: goto label_80004E38;
    case 0x80004E3Cu: goto label_80004E3C;
    case 0x80004E40u: goto label_80004E40;
    case 0x80004E44u: goto label_80004E44;
    case 0x80004E48u: goto label_80004E48;
    case 0x80004E4Cu: goto label_80004E4C;
    case 0x80004E50u: goto label_80004E50;
    case 0x80004E54u: goto label_80004E54;
    case 0x80004E58u: goto label_80004E58;
    case 0x80004E5Cu: goto label_80004E5C;
    case 0x80004E60u: goto label_80004E60;
    case 0x80004E64u: goto label_80004E64;
    case 0x80004E68u: goto label_80004E68;
    case 0x80004E6Cu: goto label_80004E6C;
    case 0x80004E70u: goto label_80004E70;
    case 0x80004E74u: goto label_80004E74;
    case 0x80004E78u: goto label_80004E78;
    case 0x80004E7Cu: goto label_80004E7C;
    case 0x80004E80u: goto label_80004E80;
    case 0x80004E84u: goto label_80004E84;
    case 0x80004E88u: goto label_80004E88;
    case 0x80004E8Cu: goto label_80004E8C;
    case 0x80004E90u: goto label_80004E90;
    case 0x80004E94u: goto label_80004E94;
    case 0x80004E98u: goto label_80004E98;
    case 0x80004E9Cu: goto label_80004E9C;
    case 0x80004EA0u: goto label_80004EA0;
    case 0x80004EA4u: goto label_80004EA4;
    case 0x80004EA8u: goto label_80004EA8;
    case 0x80004EACu: goto label_80004EAC;
    case 0x80004EB0u: goto label_80004EB0;
    case 0x80004EB4u: goto label_80004EB4;
    case 0x80004EB8u: goto label_80004EB8;
    case 0x80004EBCu: goto label_80004EBC;
    case 0x80004EC0u: goto label_80004EC0;
    case 0x80004EC4u: goto label_80004EC4;
    case 0x80004EC8u: goto label_80004EC8;
    case 0x80004ECCu: goto label_80004ECC;
    case 0x80004ED0u: goto label_80004ED0;
    case 0x80004ED4u: goto label_80004ED4;
    case 0x80004ED8u: goto label_80004ED8;
    case 0x80004EDCu: goto label_80004EDC;
    case 0x80004EE0u: goto label_80004EE0;
    case 0x80004EE4u: goto label_80004EE4;
    case 0x80004EE8u: goto label_80004EE8;
    case 0x80004EECu: goto label_80004EEC;
    case 0x80004EF0u: goto label_80004EF0;
    case 0x80004EF4u: goto label_80004EF4;
    case 0x80004EF8u: goto label_80004EF8;
    case 0x80004EFCu: goto label_80004EFC;
    case 0x80004F00u: goto label_80004F00;
    case 0x80004F04u: goto label_80004F04;
    case 0x80004F08u: goto label_80004F08;
    case 0x80004F0Cu: goto label_80004F0C;
    case 0x80004F10u: goto label_80004F10;
    case 0x80004F14u: goto label_80004F14;
    case 0x80004F18u: goto label_80004F18;
    case 0x80004F1Cu: goto label_80004F1C;
    case 0x80004F20u: goto label_80004F20;
    case 0x80004F24u: goto label_80004F24;
    case 0x80004F28u: goto label_80004F28;
    case 0x80004F2Cu: goto label_80004F2C;
    case 0x80004F30u: goto label_80004F30;
    case 0x80004F34u: goto label_80004F34;
    case 0x80004F38u: goto label_80004F38;
    case 0x80004F3Cu: goto label_80004F3C;
    case 0x80004F40u: goto label_80004F40;
    case 0x80004F44u: goto label_80004F44;
    case 0x80004F48u: goto label_80004F48;
    case 0x80004F4Cu: goto label_80004F4C;
    case 0x80004F50u: goto label_80004F50;
    case 0x80004F54u: goto label_80004F54;
    case 0x80004F58u: goto label_80004F58;
    case 0x80004F5Cu: goto label_80004F5C;
    case 0x80004F60u: goto label_80004F60;
    case 0x80004F64u: goto label_80004F64;
    case 0x80004F68u: goto label_80004F68;
    case 0x80004F6Cu: goto label_80004F6C;
    case 0x80004F70u: goto label_80004F70;
    case 0x80004F74u: goto label_80004F74;
    case 0x80004F78u: goto label_80004F78;
    case 0x80004F7Cu: goto label_80004F7C;
    case 0x80004F80u: goto label_80004F80;
    case 0x80004F84u: goto label_80004F84;
    case 0x80004F88u: goto label_80004F88;
    case 0x80004F8Cu: goto label_80004F8C;
    case 0x80004F90u: goto label_80004F90;
    case 0x80004F94u: goto label_80004F94;
    case 0x80004F98u: goto label_80004F98;
    case 0x80004F9Cu: goto label_80004F9C;
    case 0x80004FA0u: goto label_80004FA0;
    case 0x80004FA4u: goto label_80004FA4;
    case 0x80004FA8u: goto label_80004FA8;
    case 0x80004FACu: goto label_80004FAC;
    case 0x80004FB0u: goto label_80004FB0;
    case 0x80004FB4u: goto label_80004FB4;
    case 0x80004FB8u: goto label_80004FB8;
    case 0x80004FBCu: goto label_80004FBC;
    case 0x80004FC0u: goto label_80004FC0;
    case 0x80004FC4u: goto label_80004FC4;
    case 0x80004FC8u: goto label_80004FC8;
    case 0x80004FCCu: goto label_80004FCC;
    case 0x80004FD0u: goto label_80004FD0;
    case 0x80004FD4u: goto label_80004FD4;
    case 0x80004FD8u: goto label_80004FD8;
    case 0x80004FDCu: goto label_80004FDC;
    case 0x80004FE0u: goto label_80004FE0;
    case 0x80004FE4u: goto label_80004FE4;
    case 0x80004FE8u: goto label_80004FE8;
    case 0x80004FECu: goto label_80004FEC;
    case 0x80004FF0u: goto label_80004FF0;
    case 0x80004FF4u: goto label_80004FF4;
    case 0x80004FF8u: goto label_80004FF8;
    case 0x80004FFCu: goto label_80004FFC;
    case 0x80005000u: goto label_80005000;
    case 0x80005004u: goto label_80005004;
    case 0x80005008u: goto label_80005008;
    case 0x8000500Cu: goto label_8000500C;
    case 0x80005010u: goto label_80005010;
    case 0x80005014u: goto label_80005014;
    case 0x80005018u: goto label_80005018;
    case 0x8000501Cu: goto label_8000501C;
    case 0x80005020u: goto label_80005020;
    case 0x80005024u: goto label_80005024;
    case 0x80005028u: goto label_80005028;
    case 0x8000502Cu: goto label_8000502C;
    case 0x80005030u: goto label_80005030;
    case 0x80005034u: goto label_80005034;
    case 0x80005038u: goto label_80005038;
    case 0x8000503Cu: goto label_8000503C;
    case 0x80005040u: goto label_80005040;
    case 0x80005044u: goto label_80005044;
    case 0x80005048u: goto label_80005048;
    case 0x8000504Cu: goto label_8000504C;
    case 0x80005050u: goto label_80005050;
    case 0x80005054u: goto label_80005054;
    case 0x80005058u: goto label_80005058;
    case 0x8000505Cu: goto label_8000505C;
    case 0x80005060u: goto label_80005060;
    case 0x80005064u: goto label_80005064;
    case 0x80005068u: goto label_80005068;
    case 0x8000506Cu: goto label_8000506C;
    case 0x80005070u: goto label_80005070;
    case 0x80005074u: goto label_80005074;
    case 0x80005078u: goto label_80005078;
    case 0x8000507Cu: goto label_8000507C;
    case 0x80005080u: goto label_80005080;
    case 0x80005084u: goto label_80005084;
    case 0x80005088u: goto label_80005088;
    case 0x8000508Cu: goto label_8000508C;
    case 0x80005090u: goto label_80005090;
    case 0x80005094u: goto label_80005094;
    case 0x80005098u: goto label_80005098;
    case 0x8000509Cu: goto label_8000509C;
    case 0x800050A0u: goto label_800050A0;
    case 0x800050A4u: goto label_800050A4;
    case 0x800050A8u: goto label_800050A8;
    case 0x800050ACu: goto label_800050AC;
    case 0x800050B0u: goto label_800050B0;
    case 0x800050B4u: goto label_800050B4;
    case 0x800050B8u: goto label_800050B8;
    case 0x800050BCu: goto label_800050BC;
    case 0x800050C0u: goto label_800050C0;
    case 0x800050C4u: goto label_800050C4;
    case 0x800050C8u: goto label_800050C8;
    case 0x800050CCu: goto label_800050CC;
    case 0x800050D0u: goto label_800050D0;
    case 0x800050D4u: goto label_800050D4;
    case 0x800050D8u: goto label_800050D8;
    case 0x800050DCu: goto label_800050DC;
    case 0x800050E0u: goto label_800050E0;
    case 0x800050E4u: goto label_800050E4;
    case 0x800050E8u: goto label_800050E8;
    case 0x800050ECu: goto label_800050EC;
    case 0x800050F0u: goto label_800050F0;
    case 0x800050F4u: goto label_800050F4;
    case 0x800050F8u: goto label_800050F8;
    case 0x800050FCu: goto label_800050FC;
    case 0x80005100u: goto label_80005100;
    case 0x80005104u: goto label_80005104;
    case 0x80005108u: goto label_80005108;
    case 0x8000510Cu: goto label_8000510C;
    case 0x80005110u: goto label_80005110;
    case 0x80005114u: goto label_80005114;
    case 0x80005118u: goto label_80005118;
    case 0x8000511Cu: goto label_8000511C;
    case 0x80005120u: goto label_80005120;
    case 0x80005124u: goto label_80005124;
    case 0x80005128u: goto label_80005128;
    case 0x8000512Cu: goto label_8000512C;
    case 0x80005130u: goto label_80005130;
    case 0x80005134u: goto label_80005134;
    case 0x80005138u: goto label_80005138;
    case 0x8000513Cu: goto label_8000513C;
    case 0x80005140u: goto label_80005140;
    case 0x80005144u: goto label_80005144;
    case 0x80005148u: goto label_80005148;
    case 0x8000514Cu: goto label_8000514C;
    case 0x80005150u: goto label_80005150;
    case 0x80005154u: goto label_80005154;
    case 0x80005158u: goto label_80005158;
    case 0x8000515Cu: goto label_8000515C;
    case 0x80005160u: goto label_80005160;
    case 0x80005164u: goto label_80005164;
    case 0x80005168u: goto label_80005168;
    case 0x8000516Cu: goto label_8000516C;
    case 0x80005170u: goto label_80005170;
    case 0x80005174u: goto label_80005174;
    case 0x80005178u: goto label_80005178;
    case 0x8000517Cu: goto label_8000517C;
    case 0x80005180u: goto label_80005180;
    case 0x80005184u: goto label_80005184;
    case 0x80005188u: goto label_80005188;
    case 0x8000518Cu: goto label_8000518C;
    case 0x80005190u: goto label_80005190;
    case 0x80005194u: goto label_80005194;
    case 0x80005198u: goto label_80005198;
    case 0x8000519Cu: goto label_8000519C;
    case 0x800051A0u: goto label_800051A0;
    case 0x800051A4u: goto label_800051A4;
    case 0x800051A8u: goto label_800051A8;
    case 0x800051ACu: goto label_800051AC;
    case 0x800051B0u: goto label_800051B0;
    case 0x800051B4u: goto label_800051B4;
    case 0x800051B8u: goto label_800051B8;
    case 0x800051BCu: goto label_800051BC;
    case 0x800051C0u: goto label_800051C0;
    case 0x800051C4u: goto label_800051C4;
    case 0x800051C8u: goto label_800051C8;
    case 0x800051CCu: goto label_800051CC;
    case 0x800051D0u: goto label_800051D0;
    case 0x800051D4u: goto label_800051D4;
    case 0x800051D8u: goto label_800051D8;
    case 0x800051DCu: goto label_800051DC;
    case 0x800051E0u: goto label_800051E0;
    case 0x800051E4u: goto label_800051E4;
    case 0x800051E8u: goto label_800051E8;
    case 0x800051ECu: goto label_800051EC;
    case 0x800051F0u: goto label_800051F0;
    case 0x800051F4u: goto label_800051F4;
    case 0x800051F8u: goto label_800051F8;
    case 0x800051FCu: goto label_800051FC;
    case 0x80005200u: goto label_80005200;
    case 0x80005204u: goto label_80005204;
    case 0x80005208u: goto label_80005208;
    case 0x8000520Cu: goto label_8000520C;
    case 0x80005210u: goto label_80005210;
    case 0x80005214u: goto label_80005214;
    case 0x80005218u: goto label_80005218;
    case 0x8000521Cu: goto label_8000521C;
    case 0x80005220u: goto label_80005220;
    case 0x80005224u: goto label_80005224;
    case 0x80005228u: goto label_80005228;
    case 0x8000522Cu: goto label_8000522C;
    case 0x80005230u: goto label_80005230;
    case 0x80005234u: goto label_80005234;
    case 0x80005238u: goto label_80005238;
    case 0x8000523Cu: goto label_8000523C;
    case 0x80005240u: goto label_80005240;
    case 0x80005244u: goto label_80005244;
    case 0x80005248u: goto label_80005248;
    case 0x8000524Cu: goto label_8000524C;
    case 0x80005250u: goto label_80005250;
    case 0x80005254u: goto label_80005254;
    case 0x80005258u: goto label_80005258;
    case 0x8000525Cu: goto label_8000525C;
    case 0x80005260u: goto label_80005260;
    case 0x80005264u: goto label_80005264;
    case 0x80005268u: goto label_80005268;
    case 0x8000526Cu: goto label_8000526C;
    case 0x80005270u: goto label_80005270;
    case 0x80005274u: goto label_80005274;
    case 0x80005278u: goto label_80005278;
    case 0x8000527Cu: goto label_8000527C;
    case 0x80005280u: goto label_80005280;
    case 0x80005284u: goto label_80005284;
    case 0x80005288u: goto label_80005288;
    case 0x8000528Cu: goto label_8000528C;
    case 0x80005290u: goto label_80005290;
    case 0x80005294u: goto label_80005294;
    case 0x80005298u: goto label_80005298;
    case 0x8000529Cu: goto label_8000529C;
    case 0x800052A0u: goto label_800052A0;
    case 0x800052A4u: goto label_800052A4;
    case 0x800052A8u: goto label_800052A8;
    case 0x800052ACu: goto label_800052AC;
    case 0x800052B0u: goto label_800052B0;
    case 0x800052B4u: goto label_800052B4;
    case 0x800052B8u: goto label_800052B8;
    case 0x800052BCu: goto label_800052BC;
    case 0x800052C0u: goto label_800052C0;
    case 0x800052C4u: goto label_800052C4;
    case 0x800052C8u: goto label_800052C8;
    case 0x800052CCu: goto label_800052CC;
    case 0x800052D0u: goto label_800052D0;
    case 0x800052D4u: goto label_800052D4;
    case 0x800052D8u: goto label_800052D8;
    case 0x800052DCu: goto label_800052DC;
    case 0x800052E0u: goto label_800052E0;
    case 0x800052E4u: goto label_800052E4;
    case 0x800052E8u: goto label_800052E8;
    case 0x800052ECu: goto label_800052EC;
    case 0x800052F0u: goto label_800052F0;
    case 0x800052F4u: goto label_800052F4;
    case 0x800052F8u: goto label_800052F8;
    case 0x800052FCu: goto label_800052FC;
    case 0x80005300u: goto label_80005300;
    case 0x80005304u: goto label_80005304;
    case 0x80005308u: goto label_80005308;
    case 0x8000530Cu: goto label_8000530C;
    case 0x80005310u: goto label_80005310;
    case 0x80005314u: goto label_80005314;
    case 0x80005318u: goto label_80005318;
    case 0x8000531Cu: goto label_8000531C;
    case 0x80005320u: goto label_80005320;
    case 0x80005324u: goto label_80005324;
    case 0x80005328u: goto label_80005328;
    case 0x8000532Cu: goto label_8000532C;
    case 0x80005330u: goto label_80005330;
    case 0x80005334u: goto label_80005334;
    case 0x80005338u: goto label_80005338;
    case 0x8000533Cu: goto label_8000533C;
    case 0x80005340u: goto label_80005340;
    case 0x80005344u: goto label_80005344;
    case 0x80005348u: goto label_80005348;
    case 0x8000534Cu: goto label_8000534C;
    case 0x80005350u: goto label_80005350;
    case 0x80005354u: goto label_80005354;
    case 0x80005358u: goto label_80005358;
    case 0x8000535Cu: goto label_8000535C;
    case 0x80005360u: goto label_80005360;
    case 0x80005364u: goto label_80005364;
    case 0x80005368u: goto label_80005368;
    case 0x8000536Cu: goto label_8000536C;
    case 0x80005370u: goto label_80005370;
    case 0x80005374u: goto label_80005374;
    case 0x80005378u: goto label_80005378;
    case 0x8000537Cu: goto label_8000537C;
    case 0x80005380u: goto label_80005380;
    case 0x80005384u: goto label_80005384;
    case 0x80005388u: goto label_80005388;
    case 0x8000538Cu: goto label_8000538C;
    case 0x80005390u: goto label_80005390;
    case 0x80005394u: goto label_80005394;
    case 0x80005398u: goto label_80005398;
    case 0x8000539Cu: goto label_8000539C;
    case 0x800053A0u: goto label_800053A0;
    case 0x800053A4u: goto label_800053A4;
    case 0x800053A8u: goto label_800053A8;
    case 0x800053ACu: goto label_800053AC;
    case 0x800053B0u: goto label_800053B0;
    case 0x800053B4u: goto label_800053B4;
    case 0x800053B8u: goto label_800053B8;
    case 0x800053BCu: goto label_800053BC;
    case 0x800053C0u: goto label_800053C0;
    case 0x800053C4u: goto label_800053C4;
    case 0x800053C8u: goto label_800053C8;
    case 0x800053CCu: goto label_800053CC;
    case 0x800053D0u: goto label_800053D0;
    case 0x800053D4u: goto label_800053D4;
    case 0x800053D8u: goto label_800053D8;
    case 0x800053DCu: goto label_800053DC;
    case 0x800053E0u: goto label_800053E0;
    case 0x800053E4u: goto label_800053E4;
    case 0x800053E8u: goto label_800053E8;
    case 0x800053ECu: goto label_800053EC;
    case 0x800053F0u: goto label_800053F0;
    case 0x800053F4u: goto label_800053F4;
    case 0x800053F8u: goto label_800053F8;
    case 0x800053FCu: goto label_800053FC;
    case 0x80005400u: goto label_80005400;
    case 0x80005404u: goto label_80005404;
    case 0x80005408u: goto label_80005408;
    case 0x8000540Cu: goto label_8000540C;
    case 0x80005410u: goto label_80005410;
    case 0x80005414u: goto label_80005414;
    case 0x80005418u: goto label_80005418;
    case 0x8000541Cu: goto label_8000541C;
    case 0x80005420u: goto label_80005420;
    case 0x80005424u: goto label_80005424;
    case 0x80005428u: goto label_80005428;
    case 0x8000542Cu: goto label_8000542C;
    case 0x80005430u: goto label_80005430;
    case 0x80005434u: goto label_80005434;
    case 0x80005438u: goto label_80005438;
    case 0x8000543Cu: goto label_8000543C;
    case 0x80005440u: goto label_80005440;
    case 0x80005444u: goto label_80005444;
    case 0x80005448u: goto label_80005448;
    case 0x8000544Cu: goto label_8000544C;
    case 0x80005450u: goto label_80005450;
    case 0x80005454u: goto label_80005454;
    case 0x80005458u: goto label_80005458;
    case 0x8000545Cu: goto label_8000545C;
    case 0x80005460u: goto label_80005460;
    case 0x80005464u: goto label_80005464;
    case 0x80005468u: goto label_80005468;
    case 0x8000546Cu: goto label_8000546C;
    case 0x80005470u: goto label_80005470;
    case 0x80005474u: goto label_80005474;
    case 0x80005478u: goto label_80005478;
    case 0x8000547Cu: goto label_8000547C;
    case 0x80005480u: goto label_80005480;
    case 0x80005484u: goto label_80005484;
    case 0x80005488u: goto label_80005488;
    case 0x8000548Cu: goto label_8000548C;
    case 0x80005490u: goto label_80005490;
    case 0x80005494u: goto label_80005494;
    case 0x80005498u: goto label_80005498;
    case 0x8000549Cu: goto label_8000549C;
    case 0x800054A0u: goto label_800054A0;
    case 0x800054A4u: goto label_800054A4;
    case 0x800054A8u: goto label_800054A8;
    case 0x800054ACu: goto label_800054AC;
    case 0x800054B0u: goto label_800054B0;
    case 0x800054B4u: goto label_800054B4;
    case 0x800054B8u: goto label_800054B8;
    case 0x800054BCu: goto label_800054BC;
    case 0x800054C0u: goto label_800054C0;
    case 0x800054C4u: goto label_800054C4;
    case 0x800054C8u: goto label_800054C8;
    case 0x800054CCu: goto label_800054CC;
    case 0x800054D0u: goto label_800054D0;
    case 0x800054D4u: goto label_800054D4;
    case 0x800054D8u: goto label_800054D8;
    case 0x800054DCu: goto label_800054DC;
    case 0x800054E0u: goto label_800054E0;
    case 0x800054E4u: goto label_800054E4;
    case 0x800054E8u: goto label_800054E8;
    case 0x800054ECu: goto label_800054EC;
    case 0x800054F0u: goto label_800054F0;
    case 0x800054F4u: goto label_800054F4;
    case 0x800054F8u: goto label_800054F8;
    case 0x800054FCu: goto label_800054FC;
    case 0x80005500u: goto label_80005500;
    case 0x80005504u: goto label_80005504;
    case 0x80005508u: goto label_80005508;
    case 0x8000550Cu: goto label_8000550C;
    case 0x80005510u: goto label_80005510;
    case 0x80005514u: goto label_80005514;
    case 0x80005518u: goto label_80005518;
    case 0x8000551Cu: goto label_8000551C;
    case 0x80005520u: goto label_80005520;
    case 0x80005524u: goto label_80005524;
    case 0x80005528u: goto label_80005528;
    case 0x8000552Cu: goto label_8000552C;
    case 0x80005530u: goto label_80005530;
    case 0x80005534u: goto label_80005534;
    case 0x80005538u: goto label_80005538;
    case 0x8000553Cu: goto label_8000553C;
    case 0x80005540u: goto label_80005540;
    case 0x80005544u: goto label_80005544;
    case 0x80005548u: goto label_80005548;
    case 0x8000554Cu: goto label_8000554C;
    case 0x80005550u: goto label_80005550;
    case 0x80005554u: goto label_80005554;
    case 0x80005558u: goto label_80005558;
    case 0x8000555Cu: goto label_8000555C;
    case 0x80005560u: goto label_80005560;
    case 0x80005564u: goto label_80005564;
    case 0x80005568u: goto label_80005568;
    case 0x8000556Cu: goto label_8000556C;
    case 0x80005570u: goto label_80005570;
    case 0x80005574u: goto label_80005574;
    case 0x80005578u: goto label_80005578;
    case 0x8000557Cu: goto label_8000557C;
    case 0x80005580u: goto label_80005580;
    case 0x80005584u: goto label_80005584;
    case 0x80005588u: goto label_80005588;
    case 0x8000558Cu: goto label_8000558C;
    case 0x80005590u: goto label_80005590;
    case 0x80005594u: goto label_80005594;
    case 0x80005598u: goto label_80005598;
    case 0x8000559Cu: goto label_8000559C;
    case 0x800055A0u: goto label_800055A0;
    case 0x800055A4u: goto label_800055A4;
    case 0x800055A8u: goto label_800055A8;
    case 0x800055ACu: goto label_800055AC;
    case 0x800055B0u: goto label_800055B0;
    case 0x800055B4u: goto label_800055B4;
    case 0x800055B8u: goto label_800055B8;
    case 0x800055BCu: goto label_800055BC;
    case 0x800055C0u: goto label_800055C0;
    case 0x800055C4u: goto label_800055C4;
    case 0x800055C8u: goto label_800055C8;
    case 0x800055CCu: goto label_800055CC;
    case 0x800055D0u: goto label_800055D0;
    case 0x800055D4u: goto label_800055D4;
    case 0x800055D8u: goto label_800055D8;
    case 0x800055DCu: goto label_800055DC;
    case 0x800055E0u: goto label_800055E0;
    case 0x800055E4u: goto label_800055E4;
    case 0x800055E8u: goto label_800055E8;
    case 0x800055ECu: goto label_800055EC;
    case 0x800055F0u: goto label_800055F0;
    case 0x800055F4u: goto label_800055F4;
    case 0x800055F8u: goto label_800055F8;
    case 0x800055FCu: goto label_800055FC;
    case 0x80005600u: goto label_80005600;
    case 0x80005604u: goto label_80005604;
    case 0x80005608u: goto label_80005608;
    case 0x8000560Cu: goto label_8000560C;
    case 0x80005610u: goto label_80005610;
    case 0x80005614u: goto label_80005614;
    case 0x80005618u: goto label_80005618;
    case 0x8000561Cu: goto label_8000561C;
    case 0x80005620u: goto label_80005620;
    case 0x80005624u: goto label_80005624;
    case 0x80005628u: goto label_80005628;
    case 0x8000562Cu: goto label_8000562C;
    case 0x80005630u: goto label_80005630;
    case 0x80005634u: goto label_80005634;
    case 0x80005638u: goto label_80005638;
    case 0x8000563Cu: goto label_8000563C;
    case 0x80005640u: goto label_80005640;
    case 0x80005644u: goto label_80005644;
    case 0x80005648u: goto label_80005648;
    case 0x8000564Cu: goto label_8000564C;
    case 0x80005650u: goto label_80005650;
    case 0x80005654u: goto label_80005654;
    case 0x80005658u: goto label_80005658;
    case 0x8000565Cu: goto label_8000565C;
    case 0x80005660u: goto label_80005660;
    case 0x80005664u: goto label_80005664;
    case 0x80005668u: goto label_80005668;
    case 0x8000566Cu: goto label_8000566C;
    case 0x80005670u: goto label_80005670;
    case 0x80005674u: goto label_80005674;
    case 0x80005678u: goto label_80005678;
    case 0x8000567Cu: goto label_8000567C;
    case 0x80005680u: goto label_80005680;
    case 0x80005684u: goto label_80005684;
    case 0x80005688u: goto label_80005688;
    case 0x8000568Cu: goto label_8000568C;
    case 0x80005690u: goto label_80005690;
    case 0x80005694u: goto label_80005694;
    case 0x80005698u: goto label_80005698;
    case 0x8000569Cu: goto label_8000569C;
    case 0x800056A0u: goto label_800056A0;
    case 0x800056A4u: goto label_800056A4;
    case 0x800056A8u: goto label_800056A8;
    case 0x800056ACu: goto label_800056AC;
    case 0x800056B0u: goto label_800056B0;
    case 0x800056B4u: goto label_800056B4;
    case 0x800056B8u: goto label_800056B8;
    case 0x800056BCu: goto label_800056BC;
    default: return;
    }
label_80003100:
    ctx->pc = 0x80003100u;
    ctx->downcount -= 6;
    // 80003100: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80003104:
    ctx->pc = 0x80003104u;
    // 80003104: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80003108:
    ctx->pc = 0x80003108u;
    // 80003108: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000310C:
    ctx->pc = 0x8000310Cu;
    // 8000310C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80003110:
    ctx->pc = 0x80003110u;
    // 80003110: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80003114:
    ctx->pc = 0x80003114u;
    // 80003114: bl      0x80003130
    {
            ctx->lr = 0x80003118u;
            goto label_80003130;
    }

label_80003118:
    ctx->pc = 0x80003118u;
    ctx->downcount -= 7;
    // 80003118: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000311C:
    ctx->pc = 0x8000311Cu;
    // 8000311C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80003120:
    ctx->pc = 0x80003120u;
    // 80003120: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80003124:
    ctx->pc = 0x80003124u;
    // 80003124: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80003128:
    ctx->pc = 0x80003128u;
    // 80003128: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000312C:
    ctx->pc = 0x8000312Cu;
    // 8000312C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_80003130:
    ctx->pc = 0x80003130u;
    ctx->downcount -= 5;
    // 80003130: cmplwi  r5, 0x0020
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0020u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80003134:
    ctx->pc = 0x80003134u;
    // 80003134: rlwinm r4, r4, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
    }

label_80003138:
    ctx->pc = 0x80003138u;
    // 80003138: addi    r6, r3, -1
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-1);

label_8000313C:
    ctx->pc = 0x8000313Cu;
    // 8000313C: or   r7, r4, r4
    {
        ctx->gpr[7] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80003140:
    ctx->pc = 0x80003140u;
    // 80003140: bc    12, 0, 0x800031D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800031D0;
        }
    }

label_80003144:
    ctx->pc = 0x80003144u;
    ctx->downcount -= 3;
    // 80003144: nor   r0, r6, r6
    {
        ctx->gpr[0] = ~(ctx->gpr[6] | ctx->gpr[6]);
    }

label_80003148:
    ctx->pc = 0x80003148u;
    // 80003148: rlwinm. r3, r0, 0, 30, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8000314C:
    ctx->pc = 0x8000314Cu;
    // 8000314C: bc    12, 2, 0x80003160
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80003160;
        }
    }

label_80003150:
    ctx->pc = 0x80003150u;
    ctx->downcount -= 1;
    // 80003150: subf   r5, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80003154:
    loop_80003154(ctx);
    if (ctx->pc == 0x80003160u) goto label_80003160;
    return;
label_80003158:
    ctx->pc = 0x80003158u;
    // 80003158: stbu     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
        ctx->gpr[6] = ea;
    }

label_8000315C:
    // 8000315C: bc    4, 2, 0x80003154
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003154u;
                return;
            }
            goto label_80003154;
        }
    }

label_80003160:
    ctx->pc = 0x80003160u;
    ctx->downcount -= 2;
    // 80003160: cmplwi  r7, 0x0000
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

label_80003164:
    ctx->pc = 0x80003164u;
    // 80003164: bc    12, 2, 0x80003180
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80003180;
        }
    }

label_80003168:
    ctx->pc = 0x80003168u;
    ctx->downcount -= 6;
    // 80003168: rlwinm r3, r7, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[7], 24u) & 0xFF000000u;
    }

label_8000316C:
    ctx->pc = 0x8000316Cu;
    // 8000316C: rlwinm r0, r7, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 16u) & 0xFFFF0000u;
    }

label_80003170:
    ctx->pc = 0x80003170u;
    // 80003170: rlwinm r4, r7, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[7], 8u) & 0xFFFFFF00u;
    }

label_80003174:
    ctx->pc = 0x80003174u;
    // 80003174: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80003178:
    ctx->pc = 0x80003178u;
    // 80003178: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_8000317C:
    ctx->pc = 0x8000317Cu;
    // 8000317C: or   r7, r7, r0
    {
        ctx->gpr[7] = ctx->gpr[7] | ctx->gpr[0];
    }

label_80003180:
    ctx->pc = 0x80003180u;
    ctx->downcount -= 3;
    // 80003180: rlwinm. r3, r5, 27, 5, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[5], 27u) & 0x07FFFFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80003184:
    ctx->pc = 0x80003184u;
    // 80003184: addi    r4, r6, -3
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(-3);

label_80003188:
    ctx->pc = 0x80003188u;
    // 80003188: bc    12, 2, 0x800031B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800031B4;
        }
    }

label_8000318C:
    loop_8000318C(ctx);
    if (ctx->pc == 0x800031B4u) goto label_800031B4;
    return;
label_80003190:
    // 80003190: addic.  r3, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80003194:
    ctx->pc = 0x80003194u;
    // 80003194: stw     r7, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80003198:
    ctx->pc = 0x80003198u;
    // 80003198: stw     r7, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000319C:
    ctx->pc = 0x8000319Cu;
    // 8000319C: stw     r7, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_800031A0:
    ctx->pc = 0x800031A0u;
    // 800031A0: stw     r7, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_800031A4:
    ctx->pc = 0x800031A4u;
    // 800031A4: stw     r7, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_800031A8:
    ctx->pc = 0x800031A8u;
    // 800031A8: stw     r7, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_800031AC:
    ctx->pc = 0x800031ACu;
    // 800031AC: stwu     r7, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
        ctx->gpr[4] = ea;
    }

label_800031B0:
    // 800031B0: bc    4, 2, 0x8000318C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000318Cu;
                return;
            }
            goto label_8000318C;
        }
    }

label_800031B4:
    ctx->pc = 0x800031B4u;
    ctx->downcount -= 2;
    // 800031B4: rlwinm. r3, r5, 30, 29, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[5], 30u) & 0x00000007u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800031B8:
    ctx->pc = 0x800031B8u;
    // 800031B8: bc    12, 2, 0x800031C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800031C8;
        }
    }

label_800031BC:
    loop_800031BC(ctx);
    if (ctx->pc == 0x800031C8u) goto label_800031C8;
    return;
label_800031C0:
    ctx->pc = 0x800031C0u;
    // 800031C0: stwu     r7, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
        ctx->gpr[4] = ea;
    }

label_800031C4:
    // 800031C4: bc    4, 2, 0x800031BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800031BCu;
                return;
            }
            goto label_800031BC;
        }
    }

label_800031C8:
    ctx->pc = 0x800031C8u;
    ctx->downcount -= 2;
    // 800031C8: addi    r6, r4, 3
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(3);

label_800031CC:
    ctx->pc = 0x800031CCu;
    // 800031CC: rlwinm r5, r5, 0, 30, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000003u;
    }

label_800031D0:
    ctx->pc = 0x800031D0u;
    ctx->downcount -= 2;
    // 800031D0: cmplwi  r5, 0x0000
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

label_800031D4:
    ctx->pc = 0x800031D4u;
    // 800031D4: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_800031D8:
    loop_800031D8(ctx);
    if (ctx->pc == 0x800031E4u) goto label_800031E4;
    return;
label_800031DC:
    ctx->pc = 0x800031DCu;
    // 800031DC: stbu     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
        ctx->gpr[6] = ea;
    }

label_800031E0:
    // 800031E0: bc    4, 2, 0x800031D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800031D8u;
                return;
            }
            goto label_800031D8;
        }
    }

label_800031E4:
    ctx->pc = 0x800031E4u;
    ctx->downcount -= 1;
    // 800031E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_800031E8:
    ctx->pc = 0x800031E8u;
    ctx->downcount -= 2;
    // 800031E8: cmplw   r4, r3
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

label_800031EC:
    ctx->pc = 0x800031ECu;
    // 800031EC: bc    12, 0, 0x80003214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80003214;
        }
    }

label_800031F0:
    ctx->pc = 0x800031F0u;
    ctx->downcount -= 4;
    // 800031F0: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_800031F4:
    ctx->pc = 0x800031F4u;
    // 800031F4: addi    r6, r3, -1
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-1);

label_800031F8:
    ctx->pc = 0x800031F8u;
    // 800031F8: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_800031FC:
    ctx->pc = 0x800031FCu;
    // 800031FC: b       0x80003208
    {
            goto label_80003208;
    }

label_80003200:
    loop_80003200(ctx);
    if (ctx->pc == 0x80003210u) goto label_80003210;
    return;
label_80003204:
    ctx->pc = 0x80003204u;
    // 80003204: stbu     r0, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_80003208:
    ctx->downcount -= 2;
    // 80003208: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8000320C:
    // 8000320C: bc    4, 2, 0x80003200
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003200u;
                return;
            }
            goto label_80003200;
        }
    }

label_80003210:
    ctx->pc = 0x80003210u;
    ctx->downcount -= 1;
    // 80003210: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_80003214:
    ctx->pc = 0x80003214u;
    ctx->downcount -= 4;
    // 80003214: add   r4, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80003218:
    ctx->pc = 0x80003218u;
    // 80003218: add   r6, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8000321C:
    ctx->pc = 0x8000321Cu;
    // 8000321C: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_80003220:
    ctx->pc = 0x80003220u;
    // 80003220: b       0x8000322C
    {
            goto label_8000322C;
    }

label_80003224:
    loop_80003224(ctx);
    if (ctx->pc == 0x80003234u) goto label_80003234;
    return;
label_80003228:
    ctx->pc = 0x80003228u;
    // 80003228: stbu     r0, -1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_8000322C:
    ctx->downcount -= 2;
    // 8000322C: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80003230:
    // 80003230: bc    4, 2, 0x80003224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003224u;
                return;
            }
            goto label_80003224;
        }
    }

label_80003234:
    ctx->pc = 0x80003234u;
    ctx->downcount -= 1;
    // 80003234: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_80003238:
    ctx->pc = 0x80003238u;
    ctx->downcount -= 6;
    // 80003238: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8000323C:
    ctx->pc = 0x8000323Cu;
    // 8000323C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80003240:
    ctx->pc = 0x80003240u;
    // 80003240: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80003244:
    ctx->pc = 0x80003244u;
    // 80003244: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80003248:
    ctx->pc = 0x80003248u;
    // 80003248: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8000324C:
    ctx->pc = 0x8000324Cu;
    // 8000324C: bl      0x80018CC4
    {
            ctx->lr = 0x80003250u;
            ctx->pc = 0x80018CC4u;
            return;
    }

label_80003250:
    ctx->pc = 0x80003250u;
    ctx->downcount -= 7;
    // 80003250: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80003254:
    ctx->pc = 0x80003254u;
    // 80003254: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80003258:
    ctx->pc = 0x80003258u;
    // 80003258: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8000325C:
    ctx->pc = 0x8000325Cu;
    // 8000325C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80003260:
    ctx->pc = 0x80003260u;
    // 80003260: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80003264:
    ctx->pc = 0x80003264u;
    // 80003264: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_80003268:
    ctx->pc = 0x80003268u;
    ctx->downcount -= 4;
    // 80003268: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_8000326C:
    ctx->pc = 0x8000326Cu;
    // 8000326C: addi    r6, r3, -1
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-1);

label_80003270:
    ctx->pc = 0x80003270u;
    // 80003270: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_80003274:
    ctx->pc = 0x80003274u;
    // 80003274: b       0x80003280
    {
            goto label_80003280;
    }

label_80003278:
    loop_80003278(ctx);
    if (ctx->pc == 0x80003288u) goto label_80003288;
    return;
label_8000327C:
    ctx->pc = 0x8000327Cu;
    // 8000327C: stbu     r0, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_80003280:
    ctx->downcount -= 2;
    // 80003280: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80003284:
    // 80003284: bc    4, 2, 0x80003278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003278u;
                return;
            }
            goto label_80003278;
        }
    }

label_80003288:
    ctx->pc = 0x80003288u;
    ctx->downcount -= 1;
    // 80003288: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_8000328C:
    ctx->pc = 0x8000328Cu;
    // 8000328C: .long   0x4D657472
    // embedded data

label_80003290:
    ctx->pc = 0x80003290u;
    // 80003290: xoris   r23, r27, 0x6572
    ctx->gpr[23] = ctx->gpr[27] ^ (0x6572u << 16);

label_80003294:
    ctx->pc = 0x80003294u;
    // 80003294: xori    r19, r27, 0x2054
    ctx->gpr[19] = ctx->gpr[27] ^ 0x2054u;

label_80003298:
    ctx->pc = 0x80003298u;
    // 80003298: ori     r18, r11, 0x6765
    ctx->gpr[18] = ctx->gpr[11] | 0x6765u;

label_8000329C:
    ctx->pc = 0x8000329Cu;
    // 8000329C: andis.  r0, r1, 0x5265
    {
        ctx->gpr[0] = ctx->gpr[1] & (0x5265u << 16);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800032A0:
    ctx->pc = 0x800032A0u;
    // 800032A0: andi.   r9, r27, 0x6465
    {
        ctx->gpr[9] = ctx->gpr[27] & 0x6465u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[9];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800032A4:
    ctx->pc = 0x800032A4u;
    // 800032A4: xoris   r20, r19, 0x204B
    ctx->gpr[20] = ctx->gpr[19] ^ (0x204Bu << 16);

label_800032A8:
    ctx->pc = 0x800032A8u;
    // 800032A8: oris    r18, r11, 0x6E65
    ctx->gpr[18] = ctx->gpr[11] | (0x6E65u << 16);

label_800032AC:
    ctx->pc = 0x800032ACu;
    // 800032AC: xoris   r0, r1, 0x666F
    ctx->gpr[0] = ctx->gpr[1] ^ (0x666Fu << 16);

label_800032B0:
    ctx->pc = 0x800032B0u;
    // 800032B0: andi.   r0, r17, 0x506F
    {
        ctx->gpr[0] = ctx->gpr[17] & 0x506Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800032B4:
    ctx->pc = 0x800032B4u;
    // 800032B4: andis.  r5, r27, 0x7250
    {
        ctx->gpr[5] = ctx->gpr[27] & (0x7250u << 16);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800032B8:
    ctx->downcount -= 1;
    // 800032B8: bc    24, 0, 0x800032B8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800032B8u;
                return;
            }
            goto label_800032B8;
        }
    }

label_800032BC:
    ctx->pc = 0x800032BCu;
    // 800032BC: .long   0x00000000
    // embedded data

label_800032C0:
    ctx->pc = 0x800032C0u;
    // 800032C0: .long   0x00000000
    // embedded data

label_800032C4:
    ctx->pc = 0x800032C4u;
    // 800032C4: .long   0x00000000
    // embedded data

label_800032C8:
    ctx->pc = 0x800032C8u;
    // 800032C8: .long   0x00000000
    // embedded data

label_800032CC:
    ctx->pc = 0x800032CCu;
    // 800032CC: .long   0x00000000
    // embedded data

label_800032D0:
    ctx->pc = 0x800032D0u;
    // 800032D0: .long   0x00000000
    // embedded data

label_800032D4:
    ctx->pc = 0x800032D4u;
    // 800032D4: .long   0x00000000
    // embedded data

label_800032D8:
    ctx->pc = 0x800032D8u;
    // 800032D8: .long   0x00000000
    // embedded data

label_800032DC:
    ctx->pc = 0x800032DCu;
    // 800032DC: .long   0x00000000
    // embedded data

label_800032E0:
    ctx->pc = 0x800032E0u;
    // 800032E0: .long   0x00000000
    // embedded data

label_800032E4:
    ctx->pc = 0x800032E4u;
    // 800032E4: .long   0x00000000
    // embedded data

label_800032E8:
    ctx->pc = 0x800032E8u;
    // 800032E8: .long   0x00000000
    // embedded data

label_800032EC:
    ctx->pc = 0x800032ECu;
    // 800032EC: .long   0x00000000
    // embedded data

label_800032F0:
    ctx->pc = 0x800032F0u;
    // 800032F0: .long   0x00000000
    // embedded data

label_800032F4:
    ctx->pc = 0x800032F4u;
    // 800032F4: .long   0x00000000
    // embedded data

label_800032F8:
    ctx->pc = 0x800032F8u;
    // 800032F8: .long   0x00000000
    // embedded data

label_800032FC:
    ctx->pc = 0x800032FCu;
    // 800032FC: .long   0x00000000
    // embedded data

label_80003300:
    ctx->pc = 0x80003300u;
    // 80003300: .long   0x00000000
    // embedded data

label_80003304:
    ctx->pc = 0x80003304u;
    // 80003304: .long   0x00000000
    // embedded data

label_80003308:
    ctx->pc = 0x80003308u;
    // 80003308: .long   0x00000000
    // embedded data

label_8000330C:
    ctx->pc = 0x8000330Cu;
    // 8000330C: .long   0x00000000
    // embedded data

label_80003310:
    ctx->pc = 0x80003310u;
    // 80003310: .long   0x00000000
    // embedded data

label_80003314:
    ctx->pc = 0x80003314u;
    // 80003314: .long   0x00000000
    // embedded data

label_80003318:
    ctx->pc = 0x80003318u;
    // 80003318: .long   0x00000000
    // embedded data

label_8000331C:
    ctx->pc = 0x8000331Cu;
    // 8000331C: .long   0x00000000
    // embedded data

label_80003320:
    ctx->pc = 0x80003320u;
    // 80003320: .long   0x00000000
    // embedded data

label_80003324:
    ctx->pc = 0x80003324u;
    // 80003324: .long   0x00000000
    // embedded data

label_80003328:
    ctx->pc = 0x80003328u;
    // 80003328: .long   0x00000000
    // embedded data

label_8000332C:
    ctx->pc = 0x8000332Cu;
    // 8000332C: .long   0x00000000
    // embedded data

label_80003330:
    ctx->pc = 0x80003330u;
    // 80003330: .long   0x00000000
    // embedded data

label_80003334:
    ctx->pc = 0x80003334u;
    // 80003334: .long   0x00000000
    // embedded data

label_80003338:
    ctx->pc = 0x80003338u;
    // 80003338: .long   0x00000000
    // embedded data

label_8000333C:
    ctx->pc = 0x8000333Cu;
    // 8000333C: .long   0x00000000
    // embedded data

label_80003340:
    ctx->pc = 0x80003340u;
    // 80003340: .long   0x00000000
    // embedded data

label_80003344:
    ctx->pc = 0x80003344u;
    // 80003344: .long   0x00000000
    // embedded data

label_80003348:
    ctx->pc = 0x80003348u;
    // 80003348: .long   0x00000000
    // embedded data

label_8000334C:
    ctx->pc = 0x8000334Cu;
    // 8000334C: .long   0x00000000
    // embedded data

label_80003350:
    ctx->pc = 0x80003350u;
    // 80003350: .long   0x00000000
    // embedded data

label_80003354:
    ctx->pc = 0x80003354u;
    // 80003354: .long   0x00000000
    // embedded data

label_80003358:
    ctx->pc = 0x80003358u;
    // 80003358: .long   0x00000000
    // embedded data

label_8000335C:
    ctx->pc = 0x8000335Cu;
    // 8000335C: .long   0x00000000
    // embedded data

label_80003360:
    ctx->pc = 0x80003360u;
    // 80003360: .long   0x00000000
    // embedded data

label_80003364:
    ctx->pc = 0x80003364u;
    // 80003364: .long   0x00000000
    // embedded data

label_80003368:
    ctx->pc = 0x80003368u;
    // 80003368: .long   0x00000000
    // embedded data

label_8000336C:
    ctx->pc = 0x8000336Cu;
    // 8000336C: .long   0x00000000
    // embedded data

label_80003370:
    ctx->pc = 0x80003370u;
    // 80003370: .long   0x00000000
    // embedded data

label_80003374:
    ctx->pc = 0x80003374u;
    // 80003374: .long   0x00000000
    // embedded data

label_80003378:
    ctx->pc = 0x80003378u;
    // 80003378: .long   0x00000000
    // embedded data

label_8000337C:
    ctx->pc = 0x8000337Cu;
    // 8000337C: .long   0x00000000
    // embedded data

label_80003380:
    ctx->pc = 0x80003380u;
    // 80003380: .long   0x00000000
    // embedded data

label_80003384:
    ctx->pc = 0x80003384u;
    // 80003384: .long   0x00000000
    // embedded data

label_80003388:
    ctx->pc = 0x80003388u;
    // 80003388: .long   0x00000000
    // embedded data

label_8000338C:
    ctx->pc = 0x8000338Cu;
    // 8000338C: b       0x800051C0
    {
            goto label_800051C0;
    }

label_80003390:
    ctx->pc = 0x80003390u;
    // 80003390: .long   0x00000000
    // embedded data

label_80003394:
    ctx->pc = 0x80003394u;
    // 80003394: .long   0x00000000
    // embedded data

label_80003398:
    ctx->pc = 0x80003398u;
    // 80003398: .long   0x00000000
    // embedded data

label_8000339C:
    ctx->pc = 0x8000339Cu;
    // 8000339C: .long   0x00000000
    // embedded data

label_800033A0:
    ctx->pc = 0x800033A0u;
    // 800033A0: .long   0x00000000
    // embedded data

label_800033A4:
    ctx->pc = 0x800033A4u;
    // 800033A4: .long   0x00000000
    // embedded data

label_800033A8:
    ctx->pc = 0x800033A8u;
    // 800033A8: .long   0x00000000
    // embedded data

label_800033AC:
    ctx->pc = 0x800033ACu;
    // 800033AC: .long   0x00000000
    // embedded data

label_800033B0:
    ctx->pc = 0x800033B0u;
    // 800033B0: .long   0x00000000
    // embedded data

label_800033B4:
    ctx->pc = 0x800033B4u;
    // 800033B4: .long   0x00000000
    // embedded data

label_800033B8:
    ctx->pc = 0x800033B8u;
    // 800033B8: .long   0x00000000
    // embedded data

label_800033BC:
    ctx->pc = 0x800033BCu;
    // 800033BC: .long   0x00000000
    // embedded data

label_800033C0:
    ctx->pc = 0x800033C0u;
    // 800033C0: .long   0x00000000
    // embedded data

label_800033C4:
    ctx->pc = 0x800033C4u;
    // 800033C4: .long   0x00000000
    // embedded data

label_800033C8:
    ctx->pc = 0x800033C8u;
    // 800033C8: .long   0x00000000
    // embedded data

label_800033CC:
    ctx->pc = 0x800033CCu;
    // 800033CC: .long   0x00000000
    // embedded data

label_800033D0:
    ctx->pc = 0x800033D0u;
    // 800033D0: .long   0x00000000
    // embedded data

label_800033D4:
    ctx->pc = 0x800033D4u;
    // 800033D4: .long   0x00000000
    // embedded data

label_800033D8:
    ctx->pc = 0x800033D8u;
    // 800033D8: .long   0x00000000
    // embedded data

label_800033DC:
    ctx->pc = 0x800033DCu;
    // 800033DC: .long   0x00000000
    // embedded data

label_800033E0:
    ctx->pc = 0x800033E0u;
    // 800033E0: .long   0x00000000
    // embedded data

label_800033E4:
    ctx->pc = 0x800033E4u;
    // 800033E4: .long   0x00000000
    // embedded data

label_800033E8:
    ctx->pc = 0x800033E8u;
    // 800033E8: .long   0x00000000
    // embedded data

label_800033EC:
    ctx->pc = 0x800033ECu;
    // 800033EC: .long   0x00000000
    // embedded data

label_800033F0:
    ctx->pc = 0x800033F0u;
    // 800033F0: .long   0x00000000
    // embedded data

label_800033F4:
    ctx->pc = 0x800033F4u;
    // 800033F4: .long   0x00000000
    // embedded data

label_800033F8:
    ctx->pc = 0x800033F8u;
    // 800033F8: .long   0x00000000
    // embedded data

label_800033FC:
    ctx->pc = 0x800033FCu;
    // 800033FC: .long   0x00000000
    // embedded data

label_80003400:
    ctx->pc = 0x80003400u;
    // 80003400: .long   0x00000000
    // embedded data

label_80003404:
    ctx->pc = 0x80003404u;
    // 80003404: .long   0x00000000
    // embedded data

label_80003408:
    ctx->pc = 0x80003408u;
    // 80003408: .long   0x00000000
    // embedded data

label_8000340C:
    ctx->pc = 0x8000340Cu;
    // 8000340C: .long   0x00000000
    // embedded data

label_80003410:
    ctx->pc = 0x80003410u;
    // 80003410: .long   0x00000000
    // embedded data

label_80003414:
    ctx->pc = 0x80003414u;
    // 80003414: .long   0x00000000
    // embedded data

label_80003418:
    ctx->pc = 0x80003418u;
    // 80003418: .long   0x00000000
    // embedded data

label_8000341C:
    ctx->pc = 0x8000341Cu;
    // 8000341C: .long   0x00000000
    // embedded data

label_80003420:
    ctx->pc = 0x80003420u;
    // 80003420: .long   0x00000000
    // embedded data

label_80003424:
    ctx->pc = 0x80003424u;
    // 80003424: .long   0x00000000
    // embedded data

label_80003428:
    ctx->pc = 0x80003428u;
    // 80003428: .long   0x00000000
    // embedded data

label_8000342C:
    ctx->pc = 0x8000342Cu;
    // 8000342C: .long   0x00000000
    // embedded data

label_80003430:
    ctx->pc = 0x80003430u;
    // 80003430: .long   0x00000000
    // embedded data

label_80003434:
    ctx->pc = 0x80003434u;
    // 80003434: .long   0x00000000
    // embedded data

label_80003438:
    ctx->pc = 0x80003438u;
    // 80003438: .long   0x00000000
    // embedded data

label_8000343C:
    ctx->pc = 0x8000343Cu;
    // 8000343C: .long   0x00000000
    // embedded data

label_80003440:
    ctx->pc = 0x80003440u;
    // 80003440: .long   0x00000000
    // embedded data

label_80003444:
    ctx->pc = 0x80003444u;
    // 80003444: .long   0x00000000
    // embedded data

label_80003448:
    ctx->pc = 0x80003448u;
    // 80003448: .long   0x00000000
    // embedded data

label_8000344C:
    ctx->pc = 0x8000344Cu;
    // 8000344C: .long   0x00000000
    // embedded data

label_80003450:
    ctx->pc = 0x80003450u;
    // 80003450: .long   0x00000000
    // embedded data

label_80003454:
    ctx->pc = 0x80003454u;
    // 80003454: .long   0x00000000
    // embedded data

label_80003458:
    ctx->pc = 0x80003458u;
    // 80003458: .long   0x00000000
    // embedded data

label_8000345C:
    ctx->pc = 0x8000345Cu;
    // 8000345C: .long   0x00000000
    // embedded data

label_80003460:
    ctx->pc = 0x80003460u;
    // 80003460: .long   0x00000000
    // embedded data

label_80003464:
    ctx->pc = 0x80003464u;
    // 80003464: .long   0x00000000
    // embedded data

label_80003468:
    ctx->pc = 0x80003468u;
    // 80003468: .long   0x00000000
    // embedded data

label_8000346C:
    ctx->pc = 0x8000346Cu;
    // 8000346C: .long   0x00000000
    // embedded data

label_80003470:
    ctx->pc = 0x80003470u;
    // 80003470: .long   0x00000000
    // embedded data

label_80003474:
    ctx->pc = 0x80003474u;
    // 80003474: .long   0x00000000
    // embedded data

label_80003478:
    ctx->pc = 0x80003478u;
    // 80003478: .long   0x00000000
    // embedded data

label_8000347C:
    ctx->pc = 0x8000347Cu;
    // 8000347C: .long   0x00000000
    // embedded data

label_80003480:
    ctx->pc = 0x80003480u;
    // 80003480: .long   0x00000000
    // embedded data

label_80003484:
    ctx->pc = 0x80003484u;
    // 80003484: .long   0x00000000
    // embedded data

label_80003488:
    ctx->pc = 0x80003488u;
    // 80003488: .long   0x00000000
    // embedded data

label_8000348C:
    ctx->pc = 0x8000348Cu;
    // 8000348C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000348Cu);
    return;

label_80003490:
    ctx->pc = 0x80003490u;
    ctx->downcount -= 1;
    // 80003490: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80003494:
    ctx->pc = 0x80003494u;
    // 80003494: icbi    0, r2
    ppc_fallback_instruction(ctx, 0x7C0017ACu, 0x80003494u);
    return;

label_80003498:
    ctx->pc = 0x80003498u;
    // 80003498: mfdar    r2
    ppc_fallback_instruction(ctx, 0x7C5302A6u, 0x80003498u);
    return;

label_8000349C:
    ctx->pc = 0x8000349Cu;
    // 8000349C: dcbi    0, r2
    ppc_fallback_instruction(ctx, 0x7C0013ACu, 0x8000349Cu);
    return;

label_800034A0:
    ctx->pc = 0x800034A0u;
    // 800034A0: mfsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5142A6u, 0x800034A0u);
    return;

label_800034A4:
    ctx->pc = 0x800034A4u;
    // 800034A4: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800034A4u);
    return;

label_800034A8:
    ctx->pc = 0x800034A8u;
    // 800034A8: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x800034A8u);
    return;

label_800034AC:
    ctx->pc = 0x800034ACu;
    // 800034AC: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x800034ACu);
    return;

label_800034B0:
    ctx->pc = 0x800034B0u;
    ctx->downcount -= 13;
    // 800034B0: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_800034B4:
    ctx->pc = 0x800034B4u;
    // 800034B4: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800034B8:
    ctx->pc = 0x800034B8u;
    // 800034B8: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800034BC:
    ctx->pc = 0x800034BCu;
    // 800034BC: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800034C0:
    ctx->pc = 0x800034C0u;
    // 800034C0: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800034C4:
    ctx->pc = 0x800034C4u;
    // 800034C4: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800034C8:
    ctx->pc = 0x800034C8u;
    // 800034C8: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800034CC:
    ctx->pc = 0x800034CCu;
    // 800034CC: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800034D0:
    ctx->pc = 0x800034D0u;
    // 800034D0: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_800034D4:
    ctx->pc = 0x800034D4u;
    // 800034D4: rfi
    ppc_rfi(ctx, 0x800034D4u);
    return;

label_800034D8:
    ctx->pc = 0x800034D8u;
    // 800034D8: .long   0x00000000
    // embedded data

label_800034DC:
    ctx->pc = 0x800034DCu;
    // 800034DC: .long   0x00000000
    // embedded data

label_800034E0:
    ctx->pc = 0x800034E0u;
    // 800034E0: .long   0x00000000
    // embedded data

label_800034E4:
    ctx->pc = 0x800034E4u;
    // 800034E4: .long   0x00000000
    // embedded data

label_800034E8:
    ctx->pc = 0x800034E8u;
    // 800034E8: .long   0x00000000
    // embedded data

label_800034EC:
    ctx->pc = 0x800034ECu;
    // 800034EC: .long   0x00000000
    // embedded data

label_800034F0:
    ctx->pc = 0x800034F0u;
    // 800034F0: .long   0x00000000
    // embedded data

label_800034F4:
    ctx->pc = 0x800034F4u;
    // 800034F4: .long   0x00000000
    // embedded data

label_800034F8:
    ctx->pc = 0x800034F8u;
    // 800034F8: .long   0x00000000
    // embedded data

label_800034FC:
    ctx->pc = 0x800034FCu;
    // 800034FC: .long   0x00000000
    // embedded data

label_80003500:
    ctx->pc = 0x80003500u;
    // 80003500: .long   0x00000000
    // embedded data

label_80003504:
    ctx->pc = 0x80003504u;
    // 80003504: .long   0x00000000
    // embedded data

label_80003508:
    ctx->pc = 0x80003508u;
    // 80003508: .long   0x00000000
    // embedded data

label_8000350C:
    ctx->pc = 0x8000350Cu;
    // 8000350C: .long   0x00000000
    // embedded data

label_80003510:
    ctx->pc = 0x80003510u;
    // 80003510: .long   0x00000000
    // embedded data

label_80003514:
    ctx->pc = 0x80003514u;
    // 80003514: .long   0x00000000
    // embedded data

label_80003518:
    ctx->pc = 0x80003518u;
    // 80003518: .long   0x00000000
    // embedded data

label_8000351C:
    ctx->pc = 0x8000351Cu;
    // 8000351C: .long   0x00000000
    // embedded data

label_80003520:
    ctx->pc = 0x80003520u;
    // 80003520: .long   0x00000000
    // embedded data

label_80003524:
    ctx->pc = 0x80003524u;
    // 80003524: .long   0x00000000
    // embedded data

label_80003528:
    ctx->pc = 0x80003528u;
    // 80003528: .long   0x00000000
    // embedded data

label_8000352C:
    ctx->pc = 0x8000352Cu;
    // 8000352C: .long   0x00000000
    // embedded data

label_80003530:
    ctx->pc = 0x80003530u;
    // 80003530: .long   0x00000000
    // embedded data

label_80003534:
    ctx->pc = 0x80003534u;
    // 80003534: .long   0x00000000
    // embedded data

label_80003538:
    ctx->pc = 0x80003538u;
    // 80003538: .long   0x00000000
    // embedded data

label_8000353C:
    ctx->pc = 0x8000353Cu;
    // 8000353C: .long   0x00000000
    // embedded data

label_80003540:
    ctx->pc = 0x80003540u;
    // 80003540: .long   0x00000000
    // embedded data

label_80003544:
    ctx->pc = 0x80003544u;
    // 80003544: .long   0x00000000
    // embedded data

label_80003548:
    ctx->pc = 0x80003548u;
    // 80003548: .long   0x00000000
    // embedded data

label_8000354C:
    ctx->pc = 0x8000354Cu;
    // 8000354C: .long   0x00000000
    // embedded data

label_80003550:
    ctx->pc = 0x80003550u;
    // 80003550: .long   0x00000000
    // embedded data

label_80003554:
    ctx->pc = 0x80003554u;
    // 80003554: .long   0x00000000
    // embedded data

label_80003558:
    ctx->pc = 0x80003558u;
    // 80003558: .long   0x00000000
    // embedded data

label_8000355C:
    ctx->pc = 0x8000355Cu;
    // 8000355C: .long   0x00000000
    // embedded data

label_80003560:
    ctx->pc = 0x80003560u;
    // 80003560: .long   0x00000000
    // embedded data

label_80003564:
    ctx->pc = 0x80003564u;
    // 80003564: .long   0x00000000
    // embedded data

label_80003568:
    ctx->pc = 0x80003568u;
    // 80003568: .long   0x00000000
    // embedded data

label_8000356C:
    ctx->pc = 0x8000356Cu;
    // 8000356C: .long   0x00000000
    // embedded data

label_80003570:
    ctx->pc = 0x80003570u;
    // 80003570: .long   0x00000000
    // embedded data

label_80003574:
    ctx->pc = 0x80003574u;
    // 80003574: .long   0x00000000
    // embedded data

label_80003578:
    ctx->pc = 0x80003578u;
    // 80003578: .long   0x00000000
    // embedded data

label_8000357C:
    ctx->pc = 0x8000357Cu;
    // 8000357C: .long   0x00000000
    // embedded data

label_80003580:
    ctx->pc = 0x80003580u;
    // 80003580: .long   0x00000000
    // embedded data

label_80003584:
    ctx->pc = 0x80003584u;
    // 80003584: .long   0x00000000
    // embedded data

label_80003588:
    ctx->pc = 0x80003588u;
    // 80003588: .long   0x00000000
    // embedded data

label_8000358C:
    ctx->pc = 0x8000358Cu;
    // 8000358C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000358Cu);
    return;

label_80003590:
    ctx->pc = 0x80003590u;
    // 80003590: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80003590u);
    return;

label_80003594:
    ctx->pc = 0x80003594u;
    // 80003594: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80003594u);
    return;

label_80003598:
    ctx->pc = 0x80003598u;
    ctx->downcount -= 13;
    // 80003598: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_8000359C:
    ctx->pc = 0x8000359Cu;
    // 8000359C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800035A0:
    ctx->pc = 0x800035A0u;
    // 800035A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800035A4:
    ctx->pc = 0x800035A4u;
    // 800035A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800035A8:
    ctx->pc = 0x800035A8u;
    // 800035A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800035AC:
    ctx->pc = 0x800035ACu;
    // 800035AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800035B0:
    ctx->pc = 0x800035B0u;
    // 800035B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800035B4:
    ctx->pc = 0x800035B4u;
    // 800035B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800035B8:
    ctx->pc = 0x800035B8u;
    // 800035B8: li      r3, 768
    ctx->gpr[3] = (u32)(s32)(768);

label_800035BC:
    ctx->pc = 0x800035BCu;
    // 800035BC: rfi
    ppc_rfi(ctx, 0x800035BCu);
    return;

label_800035C0:
    ctx->pc = 0x800035C0u;
    // 800035C0: .long   0x00000000
    // embedded data

label_800035C4:
    ctx->pc = 0x800035C4u;
    // 800035C4: .long   0x00000000
    // embedded data

label_800035C8:
    ctx->pc = 0x800035C8u;
    // 800035C8: .long   0x00000000
    // embedded data

label_800035CC:
    ctx->pc = 0x800035CCu;
    // 800035CC: .long   0x00000000
    // embedded data

label_800035D0:
    ctx->pc = 0x800035D0u;
    // 800035D0: .long   0x00000000
    // embedded data

label_800035D4:
    ctx->pc = 0x800035D4u;
    // 800035D4: .long   0x00000000
    // embedded data

label_800035D8:
    ctx->pc = 0x800035D8u;
    // 800035D8: .long   0x00000000
    // embedded data

label_800035DC:
    ctx->pc = 0x800035DCu;
    // 800035DC: .long   0x00000000
    // embedded data

label_800035E0:
    ctx->pc = 0x800035E0u;
    // 800035E0: .long   0x00000000
    // embedded data

label_800035E4:
    ctx->pc = 0x800035E4u;
    // 800035E4: .long   0x00000000
    // embedded data

label_800035E8:
    ctx->pc = 0x800035E8u;
    // 800035E8: .long   0x00000000
    // embedded data

label_800035EC:
    ctx->pc = 0x800035ECu;
    // 800035EC: .long   0x00000000
    // embedded data

label_800035F0:
    ctx->pc = 0x800035F0u;
    // 800035F0: .long   0x00000000
    // embedded data

label_800035F4:
    ctx->pc = 0x800035F4u;
    // 800035F4: .long   0x00000000
    // embedded data

label_800035F8:
    ctx->pc = 0x800035F8u;
    // 800035F8: .long   0x00000000
    // embedded data

label_800035FC:
    ctx->pc = 0x800035FCu;
    // 800035FC: .long   0x00000000
    // embedded data

label_80003600:
    ctx->pc = 0x80003600u;
    // 80003600: .long   0x00000000
    // embedded data

label_80003604:
    ctx->pc = 0x80003604u;
    // 80003604: .long   0x00000000
    // embedded data

label_80003608:
    ctx->pc = 0x80003608u;
    // 80003608: .long   0x00000000
    // embedded data

label_8000360C:
    ctx->pc = 0x8000360Cu;
    // 8000360C: .long   0x00000000
    // embedded data

label_80003610:
    ctx->pc = 0x80003610u;
    // 80003610: .long   0x00000000
    // embedded data

label_80003614:
    ctx->pc = 0x80003614u;
    // 80003614: .long   0x00000000
    // embedded data

label_80003618:
    ctx->pc = 0x80003618u;
    // 80003618: .long   0x00000000
    // embedded data

label_8000361C:
    ctx->pc = 0x8000361Cu;
    // 8000361C: .long   0x00000000
    // embedded data

label_80003620:
    ctx->pc = 0x80003620u;
    // 80003620: .long   0x00000000
    // embedded data

label_80003624:
    ctx->pc = 0x80003624u;
    // 80003624: .long   0x00000000
    // embedded data

label_80003628:
    ctx->pc = 0x80003628u;
    // 80003628: .long   0x00000000
    // embedded data

label_8000362C:
    ctx->pc = 0x8000362Cu;
    // 8000362C: .long   0x00000000
    // embedded data

label_80003630:
    ctx->pc = 0x80003630u;
    // 80003630: .long   0x00000000
    // embedded data

label_80003634:
    ctx->pc = 0x80003634u;
    // 80003634: .long   0x00000000
    // embedded data

label_80003638:
    ctx->pc = 0x80003638u;
    // 80003638: .long   0x00000000
    // embedded data

label_8000363C:
    ctx->pc = 0x8000363Cu;
    // 8000363C: .long   0x00000000
    // embedded data

label_80003640:
    ctx->pc = 0x80003640u;
    // 80003640: .long   0x00000000
    // embedded data

label_80003644:
    ctx->pc = 0x80003644u;
    // 80003644: .long   0x00000000
    // embedded data

label_80003648:
    ctx->pc = 0x80003648u;
    // 80003648: .long   0x00000000
    // embedded data

label_8000364C:
    ctx->pc = 0x8000364Cu;
    // 8000364C: .long   0x00000000
    // embedded data

label_80003650:
    ctx->pc = 0x80003650u;
    // 80003650: .long   0x00000000
    // embedded data

label_80003654:
    ctx->pc = 0x80003654u;
    // 80003654: .long   0x00000000
    // embedded data

label_80003658:
    ctx->pc = 0x80003658u;
    // 80003658: .long   0x00000000
    // embedded data

label_8000365C:
    ctx->pc = 0x8000365Cu;
    // 8000365C: .long   0x00000000
    // embedded data

label_80003660:
    ctx->pc = 0x80003660u;
    // 80003660: .long   0x00000000
    // embedded data

label_80003664:
    ctx->pc = 0x80003664u;
    // 80003664: .long   0x00000000
    // embedded data

label_80003668:
    ctx->pc = 0x80003668u;
    // 80003668: .long   0x00000000
    // embedded data

label_8000366C:
    ctx->pc = 0x8000366Cu;
    // 8000366C: .long   0x00000000
    // embedded data

label_80003670:
    ctx->pc = 0x80003670u;
    // 80003670: .long   0x00000000
    // embedded data

label_80003674:
    ctx->pc = 0x80003674u;
    // 80003674: .long   0x00000000
    // embedded data

label_80003678:
    ctx->pc = 0x80003678u;
    // 80003678: .long   0x00000000
    // embedded data

label_8000367C:
    ctx->pc = 0x8000367Cu;
    // 8000367C: .long   0x00000000
    // embedded data

label_80003680:
    ctx->pc = 0x80003680u;
    // 80003680: .long   0x00000000
    // embedded data

label_80003684:
    ctx->pc = 0x80003684u;
    // 80003684: .long   0x00000000
    // embedded data

label_80003688:
    ctx->pc = 0x80003688u;
    // 80003688: .long   0x00000000
    // embedded data

label_8000368C:
    ctx->pc = 0x8000368Cu;
    // 8000368C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000368Cu);
    return;

label_80003690:
    ctx->pc = 0x80003690u;
    // 80003690: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80003690u);
    return;

label_80003694:
    ctx->pc = 0x80003694u;
    // 80003694: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80003694u);
    return;

label_80003698:
    ctx->pc = 0x80003698u;
    ctx->downcount -= 13;
    // 80003698: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_8000369C:
    ctx->pc = 0x8000369Cu;
    // 8000369C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800036A0:
    ctx->pc = 0x800036A0u;
    // 800036A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800036A4:
    ctx->pc = 0x800036A4u;
    // 800036A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800036A8:
    ctx->pc = 0x800036A8u;
    // 800036A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800036AC:
    ctx->pc = 0x800036ACu;
    // 800036AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800036B0:
    ctx->pc = 0x800036B0u;
    // 800036B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800036B4:
    ctx->pc = 0x800036B4u;
    // 800036B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800036B8:
    ctx->pc = 0x800036B8u;
    // 800036B8: li      r3, 1024
    ctx->gpr[3] = (u32)(s32)(1024);

label_800036BC:
    ctx->pc = 0x800036BCu;
    // 800036BC: rfi
    ppc_rfi(ctx, 0x800036BCu);
    return;

label_800036C0:
    ctx->pc = 0x800036C0u;
    // 800036C0: .long   0x00000000
    // embedded data

label_800036C4:
    ctx->pc = 0x800036C4u;
    // 800036C4: .long   0x00000000
    // embedded data

label_800036C8:
    ctx->pc = 0x800036C8u;
    // 800036C8: .long   0x00000000
    // embedded data

label_800036CC:
    ctx->pc = 0x800036CCu;
    // 800036CC: .long   0x00000000
    // embedded data

label_800036D0:
    ctx->pc = 0x800036D0u;
    // 800036D0: .long   0x00000000
    // embedded data

label_800036D4:
    ctx->pc = 0x800036D4u;
    // 800036D4: .long   0x00000000
    // embedded data

label_800036D8:
    ctx->pc = 0x800036D8u;
    // 800036D8: .long   0x00000000
    // embedded data

label_800036DC:
    ctx->pc = 0x800036DCu;
    // 800036DC: .long   0x00000000
    // embedded data

label_800036E0:
    ctx->pc = 0x800036E0u;
    // 800036E0: .long   0x00000000
    // embedded data

label_800036E4:
    ctx->pc = 0x800036E4u;
    // 800036E4: .long   0x00000000
    // embedded data

label_800036E8:
    ctx->pc = 0x800036E8u;
    // 800036E8: .long   0x00000000
    // embedded data

label_800036EC:
    ctx->pc = 0x800036ECu;
    // 800036EC: .long   0x00000000
    // embedded data

label_800036F0:
    ctx->pc = 0x800036F0u;
    // 800036F0: .long   0x00000000
    // embedded data

label_800036F4:
    ctx->pc = 0x800036F4u;
    // 800036F4: .long   0x00000000
    // embedded data

label_800036F8:
    ctx->pc = 0x800036F8u;
    // 800036F8: .long   0x00000000
    // embedded data

label_800036FC:
    ctx->pc = 0x800036FCu;
    // 800036FC: .long   0x00000000
    // embedded data

label_80003700:
    ctx->pc = 0x80003700u;
    // 80003700: .long   0x00000000
    // embedded data

label_80003704:
    ctx->pc = 0x80003704u;
    // 80003704: .long   0x00000000
    // embedded data

label_80003708:
    ctx->pc = 0x80003708u;
    // 80003708: .long   0x00000000
    // embedded data

label_8000370C:
    ctx->pc = 0x8000370Cu;
    // 8000370C: .long   0x00000000
    // embedded data

label_80003710:
    ctx->pc = 0x80003710u;
    // 80003710: .long   0x00000000
    // embedded data

label_80003714:
    ctx->pc = 0x80003714u;
    // 80003714: .long   0x00000000
    // embedded data

label_80003718:
    ctx->pc = 0x80003718u;
    // 80003718: .long   0x00000000
    // embedded data

label_8000371C:
    ctx->pc = 0x8000371Cu;
    // 8000371C: .long   0x00000000
    // embedded data

label_80003720:
    ctx->pc = 0x80003720u;
    // 80003720: .long   0x00000000
    // embedded data

label_80003724:
    ctx->pc = 0x80003724u;
    // 80003724: .long   0x00000000
    // embedded data

label_80003728:
    ctx->pc = 0x80003728u;
    // 80003728: .long   0x00000000
    // embedded data

label_8000372C:
    ctx->pc = 0x8000372Cu;
    // 8000372C: .long   0x00000000
    // embedded data

label_80003730:
    ctx->pc = 0x80003730u;
    // 80003730: .long   0x00000000
    // embedded data

label_80003734:
    ctx->pc = 0x80003734u;
    // 80003734: .long   0x00000000
    // embedded data

label_80003738:
    ctx->pc = 0x80003738u;
    // 80003738: .long   0x00000000
    // embedded data

label_8000373C:
    ctx->pc = 0x8000373Cu;
    // 8000373C: .long   0x00000000
    // embedded data

label_80003740:
    ctx->pc = 0x80003740u;
    // 80003740: .long   0x00000000
    // embedded data

label_80003744:
    ctx->pc = 0x80003744u;
    // 80003744: .long   0x00000000
    // embedded data

label_80003748:
    ctx->pc = 0x80003748u;
    // 80003748: .long   0x00000000
    // embedded data

label_8000374C:
    ctx->pc = 0x8000374Cu;
    // 8000374C: .long   0x00000000
    // embedded data

label_80003750:
    ctx->pc = 0x80003750u;
    // 80003750: .long   0x00000000
    // embedded data

label_80003754:
    ctx->pc = 0x80003754u;
    // 80003754: .long   0x00000000
    // embedded data

label_80003758:
    ctx->pc = 0x80003758u;
    // 80003758: .long   0x00000000
    // embedded data

label_8000375C:
    ctx->pc = 0x8000375Cu;
    // 8000375C: .long   0x00000000
    // embedded data

label_80003760:
    ctx->pc = 0x80003760u;
    // 80003760: .long   0x00000000
    // embedded data

label_80003764:
    ctx->pc = 0x80003764u;
    // 80003764: .long   0x00000000
    // embedded data

label_80003768:
    ctx->pc = 0x80003768u;
    // 80003768: .long   0x00000000
    // embedded data

label_8000376C:
    ctx->pc = 0x8000376Cu;
    // 8000376C: .long   0x00000000
    // embedded data

label_80003770:
    ctx->pc = 0x80003770u;
    // 80003770: .long   0x00000000
    // embedded data

label_80003774:
    ctx->pc = 0x80003774u;
    // 80003774: .long   0x00000000
    // embedded data

label_80003778:
    ctx->pc = 0x80003778u;
    // 80003778: .long   0x00000000
    // embedded data

label_8000377C:
    ctx->pc = 0x8000377Cu;
    // 8000377C: .long   0x00000000
    // embedded data

label_80003780:
    ctx->pc = 0x80003780u;
    // 80003780: .long   0x00000000
    // embedded data

label_80003784:
    ctx->pc = 0x80003784u;
    // 80003784: .long   0x00000000
    // embedded data

label_80003788:
    ctx->pc = 0x80003788u;
    // 80003788: .long   0x00000000
    // embedded data

label_8000378C:
    ctx->pc = 0x8000378Cu;
    // 8000378C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000378Cu);
    return;

label_80003790:
    ctx->pc = 0x80003790u;
    // 80003790: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80003790u);
    return;

label_80003794:
    ctx->pc = 0x80003794u;
    // 80003794: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80003794u);
    return;

label_80003798:
    ctx->pc = 0x80003798u;
    ctx->downcount -= 13;
    // 80003798: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_8000379C:
    ctx->pc = 0x8000379Cu;
    // 8000379C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800037A0:
    ctx->pc = 0x800037A0u;
    // 800037A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800037A4:
    ctx->pc = 0x800037A4u;
    // 800037A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800037A8:
    ctx->pc = 0x800037A8u;
    // 800037A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800037AC:
    ctx->pc = 0x800037ACu;
    // 800037AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800037B0:
    ctx->pc = 0x800037B0u;
    // 800037B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800037B4:
    ctx->pc = 0x800037B4u;
    // 800037B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800037B8:
    ctx->pc = 0x800037B8u;
    // 800037B8: li      r3, 1280
    ctx->gpr[3] = (u32)(s32)(1280);

label_800037BC:
    ctx->pc = 0x800037BCu;
    // 800037BC: rfi
    ppc_rfi(ctx, 0x800037BCu);
    return;

label_800037C0:
    ctx->pc = 0x800037C0u;
    // 800037C0: .long   0x00000000
    // embedded data

label_800037C4:
    ctx->pc = 0x800037C4u;
    // 800037C4: .long   0x00000000
    // embedded data

label_800037C8:
    ctx->pc = 0x800037C8u;
    // 800037C8: .long   0x00000000
    // embedded data

label_800037CC:
    ctx->pc = 0x800037CCu;
    // 800037CC: .long   0x00000000
    // embedded data

label_800037D0:
    ctx->pc = 0x800037D0u;
    // 800037D0: .long   0x00000000
    // embedded data

label_800037D4:
    ctx->pc = 0x800037D4u;
    // 800037D4: .long   0x00000000
    // embedded data

label_800037D8:
    ctx->pc = 0x800037D8u;
    // 800037D8: .long   0x00000000
    // embedded data

label_800037DC:
    ctx->pc = 0x800037DCu;
    // 800037DC: .long   0x00000000
    // embedded data

label_800037E0:
    ctx->pc = 0x800037E0u;
    // 800037E0: .long   0x00000000
    // embedded data

label_800037E4:
    ctx->pc = 0x800037E4u;
    // 800037E4: .long   0x00000000
    // embedded data

label_800037E8:
    ctx->pc = 0x800037E8u;
    // 800037E8: .long   0x00000000
    // embedded data

label_800037EC:
    ctx->pc = 0x800037ECu;
    // 800037EC: .long   0x00000000
    // embedded data

label_800037F0:
    ctx->pc = 0x800037F0u;
    // 800037F0: .long   0x00000000
    // embedded data

label_800037F4:
    ctx->pc = 0x800037F4u;
    // 800037F4: .long   0x00000000
    // embedded data

label_800037F8:
    ctx->pc = 0x800037F8u;
    // 800037F8: .long   0x00000000
    // embedded data

label_800037FC:
    ctx->pc = 0x800037FCu;
    // 800037FC: .long   0x00000000
    // embedded data

label_80003800:
    ctx->pc = 0x80003800u;
    // 80003800: .long   0x00000000
    // embedded data

label_80003804:
    ctx->pc = 0x80003804u;
    // 80003804: .long   0x00000000
    // embedded data

label_80003808:
    ctx->pc = 0x80003808u;
    // 80003808: .long   0x00000000
    // embedded data

label_8000380C:
    ctx->pc = 0x8000380Cu;
    // 8000380C: .long   0x00000000
    // embedded data

label_80003810:
    ctx->pc = 0x80003810u;
    // 80003810: .long   0x00000000
    // embedded data

label_80003814:
    ctx->pc = 0x80003814u;
    // 80003814: .long   0x00000000
    // embedded data

label_80003818:
    ctx->pc = 0x80003818u;
    // 80003818: .long   0x00000000
    // embedded data

label_8000381C:
    ctx->pc = 0x8000381Cu;
    // 8000381C: .long   0x00000000
    // embedded data

label_80003820:
    ctx->pc = 0x80003820u;
    // 80003820: .long   0x00000000
    // embedded data

label_80003824:
    ctx->pc = 0x80003824u;
    // 80003824: .long   0x00000000
    // embedded data

label_80003828:
    ctx->pc = 0x80003828u;
    // 80003828: .long   0x00000000
    // embedded data

label_8000382C:
    ctx->pc = 0x8000382Cu;
    // 8000382C: .long   0x00000000
    // embedded data

label_80003830:
    ctx->pc = 0x80003830u;
    // 80003830: .long   0x00000000
    // embedded data

label_80003834:
    ctx->pc = 0x80003834u;
    // 80003834: .long   0x00000000
    // embedded data

label_80003838:
    ctx->pc = 0x80003838u;
    // 80003838: .long   0x00000000
    // embedded data

label_8000383C:
    ctx->pc = 0x8000383Cu;
    // 8000383C: .long   0x00000000
    // embedded data

label_80003840:
    ctx->pc = 0x80003840u;
    // 80003840: .long   0x00000000
    // embedded data

label_80003844:
    ctx->pc = 0x80003844u;
    // 80003844: .long   0x00000000
    // embedded data

label_80003848:
    ctx->pc = 0x80003848u;
    // 80003848: .long   0x00000000
    // embedded data

label_8000384C:
    ctx->pc = 0x8000384Cu;
    // 8000384C: .long   0x00000000
    // embedded data

label_80003850:
    ctx->pc = 0x80003850u;
    // 80003850: .long   0x00000000
    // embedded data

label_80003854:
    ctx->pc = 0x80003854u;
    // 80003854: .long   0x00000000
    // embedded data

label_80003858:
    ctx->pc = 0x80003858u;
    // 80003858: .long   0x00000000
    // embedded data

label_8000385C:
    ctx->pc = 0x8000385Cu;
    // 8000385C: .long   0x00000000
    // embedded data

label_80003860:
    ctx->pc = 0x80003860u;
    // 80003860: .long   0x00000000
    // embedded data

label_80003864:
    ctx->pc = 0x80003864u;
    // 80003864: .long   0x00000000
    // embedded data

label_80003868:
    ctx->pc = 0x80003868u;
    // 80003868: .long   0x00000000
    // embedded data

label_8000386C:
    ctx->pc = 0x8000386Cu;
    // 8000386C: .long   0x00000000
    // embedded data

label_80003870:
    ctx->pc = 0x80003870u;
    // 80003870: .long   0x00000000
    // embedded data

label_80003874:
    ctx->pc = 0x80003874u;
    // 80003874: .long   0x00000000
    // embedded data

label_80003878:
    ctx->pc = 0x80003878u;
    // 80003878: .long   0x00000000
    // embedded data

label_8000387C:
    ctx->pc = 0x8000387Cu;
    // 8000387C: .long   0x00000000
    // embedded data

label_80003880:
    ctx->pc = 0x80003880u;
    // 80003880: .long   0x00000000
    // embedded data

label_80003884:
    ctx->pc = 0x80003884u;
    // 80003884: .long   0x00000000
    // embedded data

label_80003888:
    ctx->pc = 0x80003888u;
    // 80003888: .long   0x00000000
    // embedded data

label_8000388C:
    ctx->pc = 0x8000388Cu;
    // 8000388C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000388Cu);
    return;

label_80003890:
    ctx->pc = 0x80003890u;
    // 80003890: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80003890u);
    return;

label_80003894:
    ctx->pc = 0x80003894u;
    // 80003894: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80003894u);
    return;

label_80003898:
    ctx->pc = 0x80003898u;
    ctx->downcount -= 13;
    // 80003898: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_8000389C:
    ctx->pc = 0x8000389Cu;
    // 8000389C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800038A0:
    ctx->pc = 0x800038A0u;
    // 800038A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800038A4:
    ctx->pc = 0x800038A4u;
    // 800038A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800038A8:
    ctx->pc = 0x800038A8u;
    // 800038A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800038AC:
    ctx->pc = 0x800038ACu;
    // 800038AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800038B0:
    ctx->pc = 0x800038B0u;
    // 800038B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800038B4:
    ctx->pc = 0x800038B4u;
    // 800038B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800038B8:
    ctx->pc = 0x800038B8u;
    // 800038B8: li      r3, 1536
    ctx->gpr[3] = (u32)(s32)(1536);

label_800038BC:
    ctx->pc = 0x800038BCu;
    // 800038BC: rfi
    ppc_rfi(ctx, 0x800038BCu);
    return;

label_800038C0:
    ctx->pc = 0x800038C0u;
    // 800038C0: .long   0x00000000
    // embedded data

label_800038C4:
    ctx->pc = 0x800038C4u;
    // 800038C4: .long   0x00000000
    // embedded data

label_800038C8:
    ctx->pc = 0x800038C8u;
    // 800038C8: .long   0x00000000
    // embedded data

label_800038CC:
    ctx->pc = 0x800038CCu;
    // 800038CC: .long   0x00000000
    // embedded data

label_800038D0:
    ctx->pc = 0x800038D0u;
    // 800038D0: .long   0x00000000
    // embedded data

label_800038D4:
    ctx->pc = 0x800038D4u;
    // 800038D4: .long   0x00000000
    // embedded data

label_800038D8:
    ctx->pc = 0x800038D8u;
    // 800038D8: .long   0x00000000
    // embedded data

label_800038DC:
    ctx->pc = 0x800038DCu;
    // 800038DC: .long   0x00000000
    // embedded data

label_800038E0:
    ctx->pc = 0x800038E0u;
    // 800038E0: .long   0x00000000
    // embedded data

label_800038E4:
    ctx->pc = 0x800038E4u;
    // 800038E4: .long   0x00000000
    // embedded data

label_800038E8:
    ctx->pc = 0x800038E8u;
    // 800038E8: .long   0x00000000
    // embedded data

label_800038EC:
    ctx->pc = 0x800038ECu;
    // 800038EC: .long   0x00000000
    // embedded data

label_800038F0:
    ctx->pc = 0x800038F0u;
    // 800038F0: .long   0x00000000
    // embedded data

label_800038F4:
    ctx->pc = 0x800038F4u;
    // 800038F4: .long   0x00000000
    // embedded data

label_800038F8:
    ctx->pc = 0x800038F8u;
    // 800038F8: .long   0x00000000
    // embedded data

label_800038FC:
    ctx->pc = 0x800038FCu;
    // 800038FC: .long   0x00000000
    // embedded data

label_80003900:
    ctx->pc = 0x80003900u;
    // 80003900: .long   0x00000000
    // embedded data

label_80003904:
    ctx->pc = 0x80003904u;
    // 80003904: .long   0x00000000
    // embedded data

label_80003908:
    ctx->pc = 0x80003908u;
    // 80003908: .long   0x00000000
    // embedded data

label_8000390C:
    ctx->pc = 0x8000390Cu;
    // 8000390C: .long   0x00000000
    // embedded data

label_80003910:
    ctx->pc = 0x80003910u;
    // 80003910: .long   0x00000000
    // embedded data

label_80003914:
    ctx->pc = 0x80003914u;
    // 80003914: .long   0x00000000
    // embedded data

label_80003918:
    ctx->pc = 0x80003918u;
    // 80003918: .long   0x00000000
    // embedded data

label_8000391C:
    ctx->pc = 0x8000391Cu;
    // 8000391C: .long   0x00000000
    // embedded data

label_80003920:
    ctx->pc = 0x80003920u;
    // 80003920: .long   0x00000000
    // embedded data

label_80003924:
    ctx->pc = 0x80003924u;
    // 80003924: .long   0x00000000
    // embedded data

label_80003928:
    ctx->pc = 0x80003928u;
    // 80003928: .long   0x00000000
    // embedded data

label_8000392C:
    ctx->pc = 0x8000392Cu;
    // 8000392C: .long   0x00000000
    // embedded data

label_80003930:
    ctx->pc = 0x80003930u;
    // 80003930: .long   0x00000000
    // embedded data

label_80003934:
    ctx->pc = 0x80003934u;
    // 80003934: .long   0x00000000
    // embedded data

label_80003938:
    ctx->pc = 0x80003938u;
    // 80003938: .long   0x00000000
    // embedded data

label_8000393C:
    ctx->pc = 0x8000393Cu;
    // 8000393C: .long   0x00000000
    // embedded data

label_80003940:
    ctx->pc = 0x80003940u;
    // 80003940: .long   0x00000000
    // embedded data

label_80003944:
    ctx->pc = 0x80003944u;
    // 80003944: .long   0x00000000
    // embedded data

label_80003948:
    ctx->pc = 0x80003948u;
    // 80003948: .long   0x00000000
    // embedded data

label_8000394C:
    ctx->pc = 0x8000394Cu;
    // 8000394C: .long   0x00000000
    // embedded data

label_80003950:
    ctx->pc = 0x80003950u;
    // 80003950: .long   0x00000000
    // embedded data

label_80003954:
    ctx->pc = 0x80003954u;
    // 80003954: .long   0x00000000
    // embedded data

label_80003958:
    ctx->pc = 0x80003958u;
    // 80003958: .long   0x00000000
    // embedded data

label_8000395C:
    ctx->pc = 0x8000395Cu;
    // 8000395C: .long   0x00000000
    // embedded data

label_80003960:
    ctx->pc = 0x80003960u;
    // 80003960: .long   0x00000000
    // embedded data

label_80003964:
    ctx->pc = 0x80003964u;
    // 80003964: .long   0x00000000
    // embedded data

label_80003968:
    ctx->pc = 0x80003968u;
    // 80003968: .long   0x00000000
    // embedded data

label_8000396C:
    ctx->pc = 0x8000396Cu;
    // 8000396C: .long   0x00000000
    // embedded data

label_80003970:
    ctx->pc = 0x80003970u;
    // 80003970: .long   0x00000000
    // embedded data

label_80003974:
    ctx->pc = 0x80003974u;
    // 80003974: .long   0x00000000
    // embedded data

label_80003978:
    ctx->pc = 0x80003978u;
    // 80003978: .long   0x00000000
    // embedded data

label_8000397C:
    ctx->pc = 0x8000397Cu;
    // 8000397C: .long   0x00000000
    // embedded data

label_80003980:
    ctx->pc = 0x80003980u;
    // 80003980: .long   0x00000000
    // embedded data

label_80003984:
    ctx->pc = 0x80003984u;
    // 80003984: .long   0x00000000
    // embedded data

label_80003988:
    ctx->pc = 0x80003988u;
    // 80003988: .long   0x00000000
    // embedded data

label_8000398C:
    ctx->pc = 0x8000398Cu;
    // 8000398C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000398Cu);
    return;

label_80003990:
    ctx->pc = 0x80003990u;
    // 80003990: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80003990u);
    return;

label_80003994:
    ctx->pc = 0x80003994u;
    // 80003994: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80003994u);
    return;

label_80003998:
    ctx->pc = 0x80003998u;
    ctx->downcount -= 13;
    // 80003998: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_8000399C:
    ctx->pc = 0x8000399Cu;
    // 8000399C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800039A0:
    ctx->pc = 0x800039A0u;
    // 800039A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800039A4:
    ctx->pc = 0x800039A4u;
    // 800039A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800039A8:
    ctx->pc = 0x800039A8u;
    // 800039A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800039AC:
    ctx->pc = 0x800039ACu;
    // 800039AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800039B0:
    ctx->pc = 0x800039B0u;
    // 800039B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800039B4:
    ctx->pc = 0x800039B4u;
    // 800039B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800039B8:
    ctx->pc = 0x800039B8u;
    // 800039B8: li      r3, 1792
    ctx->gpr[3] = (u32)(s32)(1792);

label_800039BC:
    ctx->pc = 0x800039BCu;
    // 800039BC: rfi
    ppc_rfi(ctx, 0x800039BCu);
    return;

label_800039C0:
    ctx->pc = 0x800039C0u;
    // 800039C0: .long   0x00000000
    // embedded data

label_800039C4:
    ctx->pc = 0x800039C4u;
    // 800039C4: .long   0x00000000
    // embedded data

label_800039C8:
    ctx->pc = 0x800039C8u;
    // 800039C8: .long   0x00000000
    // embedded data

label_800039CC:
    ctx->pc = 0x800039CCu;
    // 800039CC: .long   0x00000000
    // embedded data

label_800039D0:
    ctx->pc = 0x800039D0u;
    // 800039D0: .long   0x00000000
    // embedded data

label_800039D4:
    ctx->pc = 0x800039D4u;
    // 800039D4: .long   0x00000000
    // embedded data

label_800039D8:
    ctx->pc = 0x800039D8u;
    // 800039D8: .long   0x00000000
    // embedded data

label_800039DC:
    ctx->pc = 0x800039DCu;
    // 800039DC: .long   0x00000000
    // embedded data

label_800039E0:
    ctx->pc = 0x800039E0u;
    // 800039E0: .long   0x00000000
    // embedded data

label_800039E4:
    ctx->pc = 0x800039E4u;
    // 800039E4: .long   0x00000000
    // embedded data

label_800039E8:
    ctx->pc = 0x800039E8u;
    // 800039E8: .long   0x00000000
    // embedded data

label_800039EC:
    ctx->pc = 0x800039ECu;
    // 800039EC: .long   0x00000000
    // embedded data

label_800039F0:
    ctx->pc = 0x800039F0u;
    // 800039F0: .long   0x00000000
    // embedded data

label_800039F4:
    ctx->pc = 0x800039F4u;
    // 800039F4: .long   0x00000000
    // embedded data

label_800039F8:
    ctx->pc = 0x800039F8u;
    // 800039F8: .long   0x00000000
    // embedded data

label_800039FC:
    ctx->pc = 0x800039FCu;
    // 800039FC: .long   0x00000000
    // embedded data

label_80003A00:
    ctx->pc = 0x80003A00u;
    // 80003A00: .long   0x00000000
    // embedded data

label_80003A04:
    ctx->pc = 0x80003A04u;
    // 80003A04: .long   0x00000000
    // embedded data

label_80003A08:
    ctx->pc = 0x80003A08u;
    // 80003A08: .long   0x00000000
    // embedded data

label_80003A0C:
    ctx->pc = 0x80003A0Cu;
    // 80003A0C: .long   0x00000000
    // embedded data

label_80003A10:
    ctx->pc = 0x80003A10u;
    // 80003A10: .long   0x00000000
    // embedded data

label_80003A14:
    ctx->pc = 0x80003A14u;
    // 80003A14: .long   0x00000000
    // embedded data

label_80003A18:
    ctx->pc = 0x80003A18u;
    // 80003A18: .long   0x00000000
    // embedded data

label_80003A1C:
    ctx->pc = 0x80003A1Cu;
    // 80003A1C: .long   0x00000000
    // embedded data

label_80003A20:
    ctx->pc = 0x80003A20u;
    // 80003A20: .long   0x00000000
    // embedded data

label_80003A24:
    ctx->pc = 0x80003A24u;
    // 80003A24: .long   0x00000000
    // embedded data

label_80003A28:
    ctx->pc = 0x80003A28u;
    // 80003A28: .long   0x00000000
    // embedded data

label_80003A2C:
    ctx->pc = 0x80003A2Cu;
    // 80003A2C: .long   0x00000000
    // embedded data

label_80003A30:
    ctx->pc = 0x80003A30u;
    // 80003A30: .long   0x00000000
    // embedded data

label_80003A34:
    ctx->pc = 0x80003A34u;
    // 80003A34: .long   0x00000000
    // embedded data

label_80003A38:
    ctx->pc = 0x80003A38u;
    // 80003A38: .long   0x00000000
    // embedded data

label_80003A3C:
    ctx->pc = 0x80003A3Cu;
    // 80003A3C: .long   0x00000000
    // embedded data

label_80003A40:
    ctx->pc = 0x80003A40u;
    // 80003A40: .long   0x00000000
    // embedded data

label_80003A44:
    ctx->pc = 0x80003A44u;
    // 80003A44: .long   0x00000000
    // embedded data

label_80003A48:
    ctx->pc = 0x80003A48u;
    // 80003A48: .long   0x00000000
    // embedded data

label_80003A4C:
    ctx->pc = 0x80003A4Cu;
    // 80003A4C: .long   0x00000000
    // embedded data

label_80003A50:
    ctx->pc = 0x80003A50u;
    // 80003A50: .long   0x00000000
    // embedded data

label_80003A54:
    ctx->pc = 0x80003A54u;
    // 80003A54: .long   0x00000000
    // embedded data

label_80003A58:
    ctx->pc = 0x80003A58u;
    // 80003A58: .long   0x00000000
    // embedded data

label_80003A5C:
    ctx->pc = 0x80003A5Cu;
    // 80003A5C: .long   0x00000000
    // embedded data

label_80003A60:
    ctx->pc = 0x80003A60u;
    // 80003A60: .long   0x00000000
    // embedded data

label_80003A64:
    ctx->pc = 0x80003A64u;
    // 80003A64: .long   0x00000000
    // embedded data

label_80003A68:
    ctx->pc = 0x80003A68u;
    // 80003A68: .long   0x00000000
    // embedded data

label_80003A6C:
    ctx->pc = 0x80003A6Cu;
    // 80003A6C: .long   0x00000000
    // embedded data

label_80003A70:
    ctx->pc = 0x80003A70u;
    // 80003A70: .long   0x00000000
    // embedded data

label_80003A74:
    ctx->pc = 0x80003A74u;
    // 80003A74: .long   0x00000000
    // embedded data

label_80003A78:
    ctx->pc = 0x80003A78u;
    // 80003A78: .long   0x00000000
    // embedded data

label_80003A7C:
    ctx->pc = 0x80003A7Cu;
    // 80003A7C: .long   0x00000000
    // embedded data

label_80003A80:
    ctx->pc = 0x80003A80u;
    // 80003A80: .long   0x00000000
    // embedded data

label_80003A84:
    ctx->pc = 0x80003A84u;
    // 80003A84: .long   0x00000000
    // embedded data

label_80003A88:
    ctx->pc = 0x80003A88u;
    // 80003A88: .long   0x00000000
    // embedded data

label_80003A8C:
    ctx->pc = 0x80003A8Cu;
    // 80003A8C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80003A8Cu);
    return;

label_80003A90:
    ctx->pc = 0x80003A90u;
    // 80003A90: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80003A90u);
    return;

label_80003A94:
    ctx->pc = 0x80003A94u;
    // 80003A94: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80003A94u);
    return;

label_80003A98:
    ctx->pc = 0x80003A98u;
    ctx->downcount -= 13;
    // 80003A98: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80003A9C:
    ctx->pc = 0x80003A9Cu;
    // 80003A9C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80003AA0:
    ctx->pc = 0x80003AA0u;
    // 80003AA0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80003AA4:
    ctx->pc = 0x80003AA4u;
    // 80003AA4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80003AA8:
    ctx->pc = 0x80003AA8u;
    // 80003AA8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_80003AAC:
    ctx->pc = 0x80003AACu;
    // 80003AAC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80003AB0:
    ctx->pc = 0x80003AB0u;
    // 80003AB0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_80003AB4:
    ctx->pc = 0x80003AB4u;
    // 80003AB4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_80003AB8:
    ctx->pc = 0x80003AB8u;
    // 80003AB8: li      r3, 2048
    ctx->gpr[3] = (u32)(s32)(2048);

label_80003ABC:
    ctx->pc = 0x80003ABCu;
    // 80003ABC: rfi
    ppc_rfi(ctx, 0x80003ABCu);
    return;

label_80003AC0:
    ctx->pc = 0x80003AC0u;
    // 80003AC0: .long   0x00000000
    // embedded data

label_80003AC4:
    ctx->pc = 0x80003AC4u;
    // 80003AC4: .long   0x00000000
    // embedded data

label_80003AC8:
    ctx->pc = 0x80003AC8u;
    // 80003AC8: .long   0x00000000
    // embedded data

label_80003ACC:
    ctx->pc = 0x80003ACCu;
    // 80003ACC: .long   0x00000000
    // embedded data

label_80003AD0:
    ctx->pc = 0x80003AD0u;
    // 80003AD0: .long   0x00000000
    // embedded data

label_80003AD4:
    ctx->pc = 0x80003AD4u;
    // 80003AD4: .long   0x00000000
    // embedded data

label_80003AD8:
    ctx->pc = 0x80003AD8u;
    // 80003AD8: .long   0x00000000
    // embedded data

label_80003ADC:
    ctx->pc = 0x80003ADCu;
    // 80003ADC: .long   0x00000000
    // embedded data

label_80003AE0:
    ctx->pc = 0x80003AE0u;
    // 80003AE0: .long   0x00000000
    // embedded data

label_80003AE4:
    ctx->pc = 0x80003AE4u;
    // 80003AE4: .long   0x00000000
    // embedded data

label_80003AE8:
    ctx->pc = 0x80003AE8u;
    // 80003AE8: .long   0x00000000
    // embedded data

label_80003AEC:
    ctx->pc = 0x80003AECu;
    // 80003AEC: .long   0x00000000
    // embedded data

label_80003AF0:
    ctx->pc = 0x80003AF0u;
    // 80003AF0: .long   0x00000000
    // embedded data

label_80003AF4:
    ctx->pc = 0x80003AF4u;
    // 80003AF4: .long   0x00000000
    // embedded data

label_80003AF8:
    ctx->pc = 0x80003AF8u;
    // 80003AF8: .long   0x00000000
    // embedded data

label_80003AFC:
    ctx->pc = 0x80003AFCu;
    // 80003AFC: .long   0x00000000
    // embedded data

label_80003B00:
    ctx->pc = 0x80003B00u;
    // 80003B00: .long   0x00000000
    // embedded data

label_80003B04:
    ctx->pc = 0x80003B04u;
    // 80003B04: .long   0x00000000
    // embedded data

label_80003B08:
    ctx->pc = 0x80003B08u;
    // 80003B08: .long   0x00000000
    // embedded data

label_80003B0C:
    ctx->pc = 0x80003B0Cu;
    // 80003B0C: .long   0x00000000
    // embedded data

label_80003B10:
    ctx->pc = 0x80003B10u;
    // 80003B10: .long   0x00000000
    // embedded data

label_80003B14:
    ctx->pc = 0x80003B14u;
    // 80003B14: .long   0x00000000
    // embedded data

label_80003B18:
    ctx->pc = 0x80003B18u;
    // 80003B18: .long   0x00000000
    // embedded data

label_80003B1C:
    ctx->pc = 0x80003B1Cu;
    // 80003B1C: .long   0x00000000
    // embedded data

label_80003B20:
    ctx->pc = 0x80003B20u;
    // 80003B20: .long   0x00000000
    // embedded data

label_80003B24:
    ctx->pc = 0x80003B24u;
    // 80003B24: .long   0x00000000
    // embedded data

label_80003B28:
    ctx->pc = 0x80003B28u;
    // 80003B28: .long   0x00000000
    // embedded data

label_80003B2C:
    ctx->pc = 0x80003B2Cu;
    // 80003B2C: .long   0x00000000
    // embedded data

label_80003B30:
    ctx->pc = 0x80003B30u;
    // 80003B30: .long   0x00000000
    // embedded data

label_80003B34:
    ctx->pc = 0x80003B34u;
    // 80003B34: .long   0x00000000
    // embedded data

label_80003B38:
    ctx->pc = 0x80003B38u;
    // 80003B38: .long   0x00000000
    // embedded data

label_80003B3C:
    ctx->pc = 0x80003B3Cu;
    // 80003B3C: .long   0x00000000
    // embedded data

label_80003B40:
    ctx->pc = 0x80003B40u;
    // 80003B40: .long   0x00000000
    // embedded data

label_80003B44:
    ctx->pc = 0x80003B44u;
    // 80003B44: .long   0x00000000
    // embedded data

label_80003B48:
    ctx->pc = 0x80003B48u;
    // 80003B48: .long   0x00000000
    // embedded data

label_80003B4C:
    ctx->pc = 0x80003B4Cu;
    // 80003B4C: .long   0x00000000
    // embedded data

label_80003B50:
    ctx->pc = 0x80003B50u;
    // 80003B50: .long   0x00000000
    // embedded data

label_80003B54:
    ctx->pc = 0x80003B54u;
    // 80003B54: .long   0x00000000
    // embedded data

label_80003B58:
    ctx->pc = 0x80003B58u;
    // 80003B58: .long   0x00000000
    // embedded data

label_80003B5C:
    ctx->pc = 0x80003B5Cu;
    // 80003B5C: .long   0x00000000
    // embedded data

label_80003B60:
    ctx->pc = 0x80003B60u;
    // 80003B60: .long   0x00000000
    // embedded data

label_80003B64:
    ctx->pc = 0x80003B64u;
    // 80003B64: .long   0x00000000
    // embedded data

label_80003B68:
    ctx->pc = 0x80003B68u;
    // 80003B68: .long   0x00000000
    // embedded data

label_80003B6C:
    ctx->pc = 0x80003B6Cu;
    // 80003B6C: .long   0x00000000
    // embedded data

label_80003B70:
    ctx->pc = 0x80003B70u;
    // 80003B70: .long   0x00000000
    // embedded data

label_80003B74:
    ctx->pc = 0x80003B74u;
    // 80003B74: .long   0x00000000
    // embedded data

label_80003B78:
    ctx->pc = 0x80003B78u;
    // 80003B78: .long   0x00000000
    // embedded data

label_80003B7C:
    ctx->pc = 0x80003B7Cu;
    // 80003B7C: .long   0x00000000
    // embedded data

label_80003B80:
    ctx->pc = 0x80003B80u;
    // 80003B80: .long   0x00000000
    // embedded data

label_80003B84:
    ctx->pc = 0x80003B84u;
    // 80003B84: .long   0x00000000
    // embedded data

label_80003B88:
    ctx->pc = 0x80003B88u;
    // 80003B88: .long   0x00000000
    // embedded data

label_80003B8C:
    ctx->pc = 0x80003B8Cu;
    // 80003B8C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80003B8Cu);
    return;

label_80003B90:
    ctx->pc = 0x80003B90u;
    // 80003B90: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80003B90u);
    return;

label_80003B94:
    ctx->pc = 0x80003B94u;
    // 80003B94: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80003B94u);
    return;

label_80003B98:
    ctx->pc = 0x80003B98u;
    ctx->downcount -= 13;
    // 80003B98: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80003B9C:
    ctx->pc = 0x80003B9Cu;
    // 80003B9C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80003BA0:
    ctx->pc = 0x80003BA0u;
    // 80003BA0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80003BA4:
    ctx->pc = 0x80003BA4u;
    // 80003BA4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80003BA8:
    ctx->pc = 0x80003BA8u;
    // 80003BA8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_80003BAC:
    ctx->pc = 0x80003BACu;
    // 80003BAC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80003BB0:
    ctx->pc = 0x80003BB0u;
    // 80003BB0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_80003BB4:
    ctx->pc = 0x80003BB4u;
    // 80003BB4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_80003BB8:
    ctx->pc = 0x80003BB8u;
    // 80003BB8: li      r3, 2304
    ctx->gpr[3] = (u32)(s32)(2304);

label_80003BBC:
    ctx->pc = 0x80003BBCu;
    // 80003BBC: rfi
    ppc_rfi(ctx, 0x80003BBCu);
    return;

label_80003BC0:
    ctx->pc = 0x80003BC0u;
    // 80003BC0: .long   0x00000000
    // embedded data

label_80003BC4:
    ctx->pc = 0x80003BC4u;
    // 80003BC4: .long   0x00000000
    // embedded data

label_80003BC8:
    ctx->pc = 0x80003BC8u;
    // 80003BC8: .long   0x00000000
    // embedded data

label_80003BCC:
    ctx->pc = 0x80003BCCu;
    // 80003BCC: .long   0x00000000
    // embedded data

label_80003BD0:
    ctx->pc = 0x80003BD0u;
    // 80003BD0: .long   0x00000000
    // embedded data

label_80003BD4:
    ctx->pc = 0x80003BD4u;
    // 80003BD4: .long   0x00000000
    // embedded data

label_80003BD8:
    ctx->pc = 0x80003BD8u;
    // 80003BD8: .long   0x00000000
    // embedded data

label_80003BDC:
    ctx->pc = 0x80003BDCu;
    // 80003BDC: .long   0x00000000
    // embedded data

label_80003BE0:
    ctx->pc = 0x80003BE0u;
    // 80003BE0: .long   0x00000000
    // embedded data

label_80003BE4:
    ctx->pc = 0x80003BE4u;
    // 80003BE4: .long   0x00000000
    // embedded data

label_80003BE8:
    ctx->pc = 0x80003BE8u;
    // 80003BE8: .long   0x00000000
    // embedded data

label_80003BEC:
    ctx->pc = 0x80003BECu;
    // 80003BEC: .long   0x00000000
    // embedded data

label_80003BF0:
    ctx->pc = 0x80003BF0u;
    // 80003BF0: .long   0x00000000
    // embedded data

label_80003BF4:
    ctx->pc = 0x80003BF4u;
    // 80003BF4: .long   0x00000000
    // embedded data

label_80003BF8:
    ctx->pc = 0x80003BF8u;
    // 80003BF8: .long   0x00000000
    // embedded data

label_80003BFC:
    ctx->pc = 0x80003BFCu;
    // 80003BFC: .long   0x00000000
    // embedded data

label_80003C00:
    ctx->pc = 0x80003C00u;
    // 80003C00: .long   0x00000000
    // embedded data

label_80003C04:
    ctx->pc = 0x80003C04u;
    // 80003C04: .long   0x00000000
    // embedded data

label_80003C08:
    ctx->pc = 0x80003C08u;
    // 80003C08: .long   0x00000000
    // embedded data

label_80003C0C:
    ctx->pc = 0x80003C0Cu;
    // 80003C0C: .long   0x00000000
    // embedded data

label_80003C10:
    ctx->pc = 0x80003C10u;
    // 80003C10: .long   0x00000000
    // embedded data

label_80003C14:
    ctx->pc = 0x80003C14u;
    // 80003C14: .long   0x00000000
    // embedded data

label_80003C18:
    ctx->pc = 0x80003C18u;
    // 80003C18: .long   0x00000000
    // embedded data

label_80003C1C:
    ctx->pc = 0x80003C1Cu;
    // 80003C1C: .long   0x00000000
    // embedded data

label_80003C20:
    ctx->pc = 0x80003C20u;
    // 80003C20: .long   0x00000000
    // embedded data

label_80003C24:
    ctx->pc = 0x80003C24u;
    // 80003C24: .long   0x00000000
    // embedded data

label_80003C28:
    ctx->pc = 0x80003C28u;
    // 80003C28: .long   0x00000000
    // embedded data

label_80003C2C:
    ctx->pc = 0x80003C2Cu;
    // 80003C2C: .long   0x00000000
    // embedded data

label_80003C30:
    ctx->pc = 0x80003C30u;
    // 80003C30: .long   0x00000000
    // embedded data

label_80003C34:
    ctx->pc = 0x80003C34u;
    // 80003C34: .long   0x00000000
    // embedded data

label_80003C38:
    ctx->pc = 0x80003C38u;
    // 80003C38: .long   0x00000000
    // embedded data

label_80003C3C:
    ctx->pc = 0x80003C3Cu;
    // 80003C3C: .long   0x00000000
    // embedded data

label_80003C40:
    ctx->pc = 0x80003C40u;
    // 80003C40: .long   0x00000000
    // embedded data

label_80003C44:
    ctx->pc = 0x80003C44u;
    // 80003C44: .long   0x00000000
    // embedded data

label_80003C48:
    ctx->pc = 0x80003C48u;
    // 80003C48: .long   0x00000000
    // embedded data

label_80003C4C:
    ctx->pc = 0x80003C4Cu;
    // 80003C4C: .long   0x00000000
    // embedded data

label_80003C50:
    ctx->pc = 0x80003C50u;
    // 80003C50: .long   0x00000000
    // embedded data

label_80003C54:
    ctx->pc = 0x80003C54u;
    // 80003C54: .long   0x00000000
    // embedded data

label_80003C58:
    ctx->pc = 0x80003C58u;
    // 80003C58: .long   0x00000000
    // embedded data

label_80003C5C:
    ctx->pc = 0x80003C5Cu;
    // 80003C5C: .long   0x00000000
    // embedded data

label_80003C60:
    ctx->pc = 0x80003C60u;
    // 80003C60: .long   0x00000000
    // embedded data

label_80003C64:
    ctx->pc = 0x80003C64u;
    // 80003C64: .long   0x00000000
    // embedded data

label_80003C68:
    ctx->pc = 0x80003C68u;
    // 80003C68: .long   0x00000000
    // embedded data

label_80003C6C:
    ctx->pc = 0x80003C6Cu;
    // 80003C6C: .long   0x00000000
    // embedded data

label_80003C70:
    ctx->pc = 0x80003C70u;
    // 80003C70: .long   0x00000000
    // embedded data

label_80003C74:
    ctx->pc = 0x80003C74u;
    // 80003C74: .long   0x00000000
    // embedded data

label_80003C78:
    ctx->pc = 0x80003C78u;
    // 80003C78: .long   0x00000000
    // embedded data

label_80003C7C:
    ctx->pc = 0x80003C7Cu;
    // 80003C7C: .long   0x00000000
    // embedded data

label_80003C80:
    ctx->pc = 0x80003C80u;
    // 80003C80: .long   0x00000000
    // embedded data

label_80003C84:
    ctx->pc = 0x80003C84u;
    // 80003C84: .long   0x00000000
    // embedded data

label_80003C88:
    ctx->pc = 0x80003C88u;
    // 80003C88: .long   0x00000000
    // embedded data

label_80003C8C:
    ctx->pc = 0x80003C8Cu;
    // 80003C8C: .long   0x00000000
    // embedded data

label_80003C90:
    ctx->pc = 0x80003C90u;
    // 80003C90: .long   0x00000000
    // embedded data

label_80003C94:
    ctx->pc = 0x80003C94u;
    // 80003C94: .long   0x00000000
    // embedded data

label_80003C98:
    ctx->pc = 0x80003C98u;
    // 80003C98: .long   0x00000000
    // embedded data

label_80003C9C:
    ctx->pc = 0x80003C9Cu;
    // 80003C9C: .long   0x00000000
    // embedded data

label_80003CA0:
    ctx->pc = 0x80003CA0u;
    // 80003CA0: .long   0x00000000
    // embedded data

label_80003CA4:
    ctx->pc = 0x80003CA4u;
    // 80003CA4: .long   0x00000000
    // embedded data

label_80003CA8:
    ctx->pc = 0x80003CA8u;
    // 80003CA8: .long   0x00000000
    // embedded data

label_80003CAC:
    ctx->pc = 0x80003CACu;
    // 80003CAC: .long   0x00000000
    // embedded data

label_80003CB0:
    ctx->pc = 0x80003CB0u;
    // 80003CB0: .long   0x00000000
    // embedded data

label_80003CB4:
    ctx->pc = 0x80003CB4u;
    // 80003CB4: .long   0x00000000
    // embedded data

label_80003CB8:
    ctx->pc = 0x80003CB8u;
    // 80003CB8: .long   0x00000000
    // embedded data

label_80003CBC:
    ctx->pc = 0x80003CBCu;
    // 80003CBC: .long   0x00000000
    // embedded data

label_80003CC0:
    ctx->pc = 0x80003CC0u;
    // 80003CC0: .long   0x00000000
    // embedded data

label_80003CC4:
    ctx->pc = 0x80003CC4u;
    // 80003CC4: .long   0x00000000
    // embedded data

label_80003CC8:
    ctx->pc = 0x80003CC8u;
    // 80003CC8: .long   0x00000000
    // embedded data

label_80003CCC:
    ctx->pc = 0x80003CCCu;
    // 80003CCC: .long   0x00000000
    // embedded data

label_80003CD0:
    ctx->pc = 0x80003CD0u;
    // 80003CD0: .long   0x00000000
    // embedded data

label_80003CD4:
    ctx->pc = 0x80003CD4u;
    // 80003CD4: .long   0x00000000
    // embedded data

label_80003CD8:
    ctx->pc = 0x80003CD8u;
    // 80003CD8: .long   0x00000000
    // embedded data

label_80003CDC:
    ctx->pc = 0x80003CDCu;
    // 80003CDC: .long   0x00000000
    // embedded data

label_80003CE0:
    ctx->pc = 0x80003CE0u;
    // 80003CE0: .long   0x00000000
    // embedded data

label_80003CE4:
    ctx->pc = 0x80003CE4u;
    // 80003CE4: .long   0x00000000
    // embedded data

label_80003CE8:
    ctx->pc = 0x80003CE8u;
    // 80003CE8: .long   0x00000000
    // embedded data

label_80003CEC:
    ctx->pc = 0x80003CECu;
    // 80003CEC: .long   0x00000000
    // embedded data

label_80003CF0:
    ctx->pc = 0x80003CF0u;
    // 80003CF0: .long   0x00000000
    // embedded data

label_80003CF4:
    ctx->pc = 0x80003CF4u;
    // 80003CF4: .long   0x00000000
    // embedded data

label_80003CF8:
    ctx->pc = 0x80003CF8u;
    // 80003CF8: .long   0x00000000
    // embedded data

label_80003CFC:
    ctx->pc = 0x80003CFCu;
    // 80003CFC: .long   0x00000000
    // embedded data

label_80003D00:
    ctx->pc = 0x80003D00u;
    // 80003D00: .long   0x00000000
    // embedded data

label_80003D04:
    ctx->pc = 0x80003D04u;
    // 80003D04: .long   0x00000000
    // embedded data

label_80003D08:
    ctx->pc = 0x80003D08u;
    // 80003D08: .long   0x00000000
    // embedded data

label_80003D0C:
    ctx->pc = 0x80003D0Cu;
    // 80003D0C: .long   0x00000000
    // embedded data

label_80003D10:
    ctx->pc = 0x80003D10u;
    // 80003D10: .long   0x00000000
    // embedded data

label_80003D14:
    ctx->pc = 0x80003D14u;
    // 80003D14: .long   0x00000000
    // embedded data

label_80003D18:
    ctx->pc = 0x80003D18u;
    // 80003D18: .long   0x00000000
    // embedded data

label_80003D1C:
    ctx->pc = 0x80003D1Cu;
    // 80003D1C: .long   0x00000000
    // embedded data

label_80003D20:
    ctx->pc = 0x80003D20u;
    // 80003D20: .long   0x00000000
    // embedded data

label_80003D24:
    ctx->pc = 0x80003D24u;
    // 80003D24: .long   0x00000000
    // embedded data

label_80003D28:
    ctx->pc = 0x80003D28u;
    // 80003D28: .long   0x00000000
    // embedded data

label_80003D2C:
    ctx->pc = 0x80003D2Cu;
    // 80003D2C: .long   0x00000000
    // embedded data

label_80003D30:
    ctx->pc = 0x80003D30u;
    // 80003D30: .long   0x00000000
    // embedded data

label_80003D34:
    ctx->pc = 0x80003D34u;
    // 80003D34: .long   0x00000000
    // embedded data

label_80003D38:
    ctx->pc = 0x80003D38u;
    // 80003D38: .long   0x00000000
    // embedded data

label_80003D3C:
    ctx->pc = 0x80003D3Cu;
    // 80003D3C: .long   0x00000000
    // embedded data

label_80003D40:
    ctx->pc = 0x80003D40u;
    // 80003D40: .long   0x00000000
    // embedded data

label_80003D44:
    ctx->pc = 0x80003D44u;
    // 80003D44: .long   0x00000000
    // embedded data

label_80003D48:
    ctx->pc = 0x80003D48u;
    // 80003D48: .long   0x00000000
    // embedded data

label_80003D4C:
    ctx->pc = 0x80003D4Cu;
    // 80003D4C: .long   0x00000000
    // embedded data

label_80003D50:
    ctx->pc = 0x80003D50u;
    // 80003D50: .long   0x00000000
    // embedded data

label_80003D54:
    ctx->pc = 0x80003D54u;
    // 80003D54: .long   0x00000000
    // embedded data

label_80003D58:
    ctx->pc = 0x80003D58u;
    // 80003D58: .long   0x00000000
    // embedded data

label_80003D5C:
    ctx->pc = 0x80003D5Cu;
    // 80003D5C: .long   0x00000000
    // embedded data

label_80003D60:
    ctx->pc = 0x80003D60u;
    // 80003D60: .long   0x00000000
    // embedded data

label_80003D64:
    ctx->pc = 0x80003D64u;
    // 80003D64: .long   0x00000000
    // embedded data

label_80003D68:
    ctx->pc = 0x80003D68u;
    // 80003D68: .long   0x00000000
    // embedded data

label_80003D6C:
    ctx->pc = 0x80003D6Cu;
    // 80003D6C: .long   0x00000000
    // embedded data

label_80003D70:
    ctx->pc = 0x80003D70u;
    // 80003D70: .long   0x00000000
    // embedded data

label_80003D74:
    ctx->pc = 0x80003D74u;
    // 80003D74: .long   0x00000000
    // embedded data

label_80003D78:
    ctx->pc = 0x80003D78u;
    // 80003D78: .long   0x00000000
    // embedded data

label_80003D7C:
    ctx->pc = 0x80003D7Cu;
    // 80003D7C: .long   0x00000000
    // embedded data

label_80003D80:
    ctx->pc = 0x80003D80u;
    // 80003D80: .long   0x00000000
    // embedded data

label_80003D84:
    ctx->pc = 0x80003D84u;
    // 80003D84: .long   0x00000000
    // embedded data

label_80003D88:
    ctx->pc = 0x80003D88u;
    // 80003D88: .long   0x00000000
    // embedded data

label_80003D8C:
    ctx->pc = 0x80003D8Cu;
    // 80003D8C: .long   0x00000000
    // embedded data

label_80003D90:
    ctx->pc = 0x80003D90u;
    // 80003D90: .long   0x00000000
    // embedded data

label_80003D94:
    ctx->pc = 0x80003D94u;
    // 80003D94: .long   0x00000000
    // embedded data

label_80003D98:
    ctx->pc = 0x80003D98u;
    // 80003D98: .long   0x00000000
    // embedded data

label_80003D9C:
    ctx->pc = 0x80003D9Cu;
    // 80003D9C: .long   0x00000000
    // embedded data

label_80003DA0:
    ctx->pc = 0x80003DA0u;
    // 80003DA0: .long   0x00000000
    // embedded data

label_80003DA4:
    ctx->pc = 0x80003DA4u;
    // 80003DA4: .long   0x00000000
    // embedded data

label_80003DA8:
    ctx->pc = 0x80003DA8u;
    // 80003DA8: .long   0x00000000
    // embedded data

label_80003DAC:
    ctx->pc = 0x80003DACu;
    // 80003DAC: .long   0x00000000
    // embedded data

label_80003DB0:
    ctx->pc = 0x80003DB0u;
    // 80003DB0: .long   0x00000000
    // embedded data

label_80003DB4:
    ctx->pc = 0x80003DB4u;
    // 80003DB4: .long   0x00000000
    // embedded data

label_80003DB8:
    ctx->pc = 0x80003DB8u;
    // 80003DB8: .long   0x00000000
    // embedded data

label_80003DBC:
    ctx->pc = 0x80003DBCu;
    // 80003DBC: .long   0x00000000
    // embedded data

label_80003DC0:
    ctx->pc = 0x80003DC0u;
    // 80003DC0: .long   0x00000000
    // embedded data

label_80003DC4:
    ctx->pc = 0x80003DC4u;
    // 80003DC4: .long   0x00000000
    // embedded data

label_80003DC8:
    ctx->pc = 0x80003DC8u;
    // 80003DC8: .long   0x00000000
    // embedded data

label_80003DCC:
    ctx->pc = 0x80003DCCu;
    // 80003DCC: .long   0x00000000
    // embedded data

label_80003DD0:
    ctx->pc = 0x80003DD0u;
    // 80003DD0: .long   0x00000000
    // embedded data

label_80003DD4:
    ctx->pc = 0x80003DD4u;
    // 80003DD4: .long   0x00000000
    // embedded data

label_80003DD8:
    ctx->pc = 0x80003DD8u;
    // 80003DD8: .long   0x00000000
    // embedded data

label_80003DDC:
    ctx->pc = 0x80003DDCu;
    // 80003DDC: .long   0x00000000
    // embedded data

label_80003DE0:
    ctx->pc = 0x80003DE0u;
    // 80003DE0: .long   0x00000000
    // embedded data

label_80003DE4:
    ctx->pc = 0x80003DE4u;
    // 80003DE4: .long   0x00000000
    // embedded data

label_80003DE8:
    ctx->pc = 0x80003DE8u;
    // 80003DE8: .long   0x00000000
    // embedded data

label_80003DEC:
    ctx->pc = 0x80003DECu;
    // 80003DEC: .long   0x00000000
    // embedded data

label_80003DF0:
    ctx->pc = 0x80003DF0u;
    // 80003DF0: .long   0x00000000
    // embedded data

label_80003DF4:
    ctx->pc = 0x80003DF4u;
    // 80003DF4: .long   0x00000000
    // embedded data

label_80003DF8:
    ctx->pc = 0x80003DF8u;
    // 80003DF8: .long   0x00000000
    // embedded data

label_80003DFC:
    ctx->pc = 0x80003DFCu;
    // 80003DFC: .long   0x00000000
    // embedded data

label_80003E00:
    ctx->pc = 0x80003E00u;
    // 80003E00: .long   0x00000000
    // embedded data

label_80003E04:
    ctx->pc = 0x80003E04u;
    // 80003E04: .long   0x00000000
    // embedded data

label_80003E08:
    ctx->pc = 0x80003E08u;
    // 80003E08: .long   0x00000000
    // embedded data

label_80003E0C:
    ctx->pc = 0x80003E0Cu;
    // 80003E0C: .long   0x00000000
    // embedded data

label_80003E10:
    ctx->pc = 0x80003E10u;
    // 80003E10: .long   0x00000000
    // embedded data

label_80003E14:
    ctx->pc = 0x80003E14u;
    // 80003E14: .long   0x00000000
    // embedded data

label_80003E18:
    ctx->pc = 0x80003E18u;
    // 80003E18: .long   0x00000000
    // embedded data

label_80003E1C:
    ctx->pc = 0x80003E1Cu;
    // 80003E1C: .long   0x00000000
    // embedded data

label_80003E20:
    ctx->pc = 0x80003E20u;
    // 80003E20: .long   0x00000000
    // embedded data

label_80003E24:
    ctx->pc = 0x80003E24u;
    // 80003E24: .long   0x00000000
    // embedded data

label_80003E28:
    ctx->pc = 0x80003E28u;
    // 80003E28: .long   0x00000000
    // embedded data

label_80003E2C:
    ctx->pc = 0x80003E2Cu;
    // 80003E2C: .long   0x00000000
    // embedded data

label_80003E30:
    ctx->pc = 0x80003E30u;
    // 80003E30: .long   0x00000000
    // embedded data

label_80003E34:
    ctx->pc = 0x80003E34u;
    // 80003E34: .long   0x00000000
    // embedded data

label_80003E38:
    ctx->pc = 0x80003E38u;
    // 80003E38: .long   0x00000000
    // embedded data

label_80003E3C:
    ctx->pc = 0x80003E3Cu;
    // 80003E3C: .long   0x00000000
    // embedded data

label_80003E40:
    ctx->pc = 0x80003E40u;
    // 80003E40: .long   0x00000000
    // embedded data

label_80003E44:
    ctx->pc = 0x80003E44u;
    // 80003E44: .long   0x00000000
    // embedded data

label_80003E48:
    ctx->pc = 0x80003E48u;
    // 80003E48: .long   0x00000000
    // embedded data

label_80003E4C:
    ctx->pc = 0x80003E4Cu;
    // 80003E4C: .long   0x00000000
    // embedded data

label_80003E50:
    ctx->pc = 0x80003E50u;
    // 80003E50: .long   0x00000000
    // embedded data

label_80003E54:
    ctx->pc = 0x80003E54u;
    // 80003E54: .long   0x00000000
    // embedded data

label_80003E58:
    ctx->pc = 0x80003E58u;
    // 80003E58: .long   0x00000000
    // embedded data

label_80003E5C:
    ctx->pc = 0x80003E5Cu;
    // 80003E5C: .long   0x00000000
    // embedded data

label_80003E60:
    ctx->pc = 0x80003E60u;
    // 80003E60: .long   0x00000000
    // embedded data

label_80003E64:
    ctx->pc = 0x80003E64u;
    // 80003E64: .long   0x00000000
    // embedded data

label_80003E68:
    ctx->pc = 0x80003E68u;
    // 80003E68: .long   0x00000000
    // embedded data

label_80003E6C:
    ctx->pc = 0x80003E6Cu;
    // 80003E6C: .long   0x00000000
    // embedded data

label_80003E70:
    ctx->pc = 0x80003E70u;
    // 80003E70: .long   0x00000000
    // embedded data

label_80003E74:
    ctx->pc = 0x80003E74u;
    // 80003E74: .long   0x00000000
    // embedded data

label_80003E78:
    ctx->pc = 0x80003E78u;
    // 80003E78: .long   0x00000000
    // embedded data

label_80003E7C:
    ctx->pc = 0x80003E7Cu;
    // 80003E7C: .long   0x00000000
    // embedded data

label_80003E80:
    ctx->pc = 0x80003E80u;
    // 80003E80: .long   0x00000000
    // embedded data

label_80003E84:
    ctx->pc = 0x80003E84u;
    // 80003E84: .long   0x00000000
    // embedded data

label_80003E88:
    ctx->pc = 0x80003E88u;
    // 80003E88: .long   0x00000000
    // embedded data

label_80003E8C:
    ctx->pc = 0x80003E8Cu;
    // 80003E8C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80003E8Cu);
    return;

label_80003E90:
    ctx->pc = 0x80003E90u;
    // 80003E90: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80003E90u);
    return;

label_80003E94:
    ctx->pc = 0x80003E94u;
    // 80003E94: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80003E94u);
    return;

label_80003E98:
    ctx->pc = 0x80003E98u;
    ctx->downcount -= 13;
    // 80003E98: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80003E9C:
    ctx->pc = 0x80003E9Cu;
    // 80003E9C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80003EA0:
    ctx->pc = 0x80003EA0u;
    // 80003EA0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80003EA4:
    ctx->pc = 0x80003EA4u;
    // 80003EA4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80003EA8:
    ctx->pc = 0x80003EA8u;
    // 80003EA8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_80003EAC:
    ctx->pc = 0x80003EACu;
    // 80003EAC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80003EB0:
    ctx->pc = 0x80003EB0u;
    // 80003EB0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_80003EB4:
    ctx->pc = 0x80003EB4u;
    // 80003EB4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_80003EB8:
    ctx->pc = 0x80003EB8u;
    // 80003EB8: li      r3, 3072
    ctx->gpr[3] = (u32)(s32)(3072);

label_80003EBC:
    ctx->pc = 0x80003EBCu;
    // 80003EBC: rfi
    ppc_rfi(ctx, 0x80003EBCu);
    return;

label_80003EC0:
    ctx->pc = 0x80003EC0u;
    // 80003EC0: .long   0x00000000
    // embedded data

label_80003EC4:
    ctx->pc = 0x80003EC4u;
    // 80003EC4: .long   0x00000000
    // embedded data

label_80003EC8:
    ctx->pc = 0x80003EC8u;
    // 80003EC8: .long   0x00000000
    // embedded data

label_80003ECC:
    ctx->pc = 0x80003ECCu;
    // 80003ECC: .long   0x00000000
    // embedded data

label_80003ED0:
    ctx->pc = 0x80003ED0u;
    // 80003ED0: .long   0x00000000
    // embedded data

label_80003ED4:
    ctx->pc = 0x80003ED4u;
    // 80003ED4: .long   0x00000000
    // embedded data

label_80003ED8:
    ctx->pc = 0x80003ED8u;
    // 80003ED8: .long   0x00000000
    // embedded data

label_80003EDC:
    ctx->pc = 0x80003EDCu;
    // 80003EDC: .long   0x00000000
    // embedded data

label_80003EE0:
    ctx->pc = 0x80003EE0u;
    // 80003EE0: .long   0x00000000
    // embedded data

label_80003EE4:
    ctx->pc = 0x80003EE4u;
    // 80003EE4: .long   0x00000000
    // embedded data

label_80003EE8:
    ctx->pc = 0x80003EE8u;
    // 80003EE8: .long   0x00000000
    // embedded data

label_80003EEC:
    ctx->pc = 0x80003EECu;
    // 80003EEC: .long   0x00000000
    // embedded data

label_80003EF0:
    ctx->pc = 0x80003EF0u;
    // 80003EF0: .long   0x00000000
    // embedded data

label_80003EF4:
    ctx->pc = 0x80003EF4u;
    // 80003EF4: .long   0x00000000
    // embedded data

label_80003EF8:
    ctx->pc = 0x80003EF8u;
    // 80003EF8: .long   0x00000000
    // embedded data

label_80003EFC:
    ctx->pc = 0x80003EFCu;
    // 80003EFC: .long   0x00000000
    // embedded data

label_80003F00:
    ctx->pc = 0x80003F00u;
    // 80003F00: .long   0x00000000
    // embedded data

label_80003F04:
    ctx->pc = 0x80003F04u;
    // 80003F04: .long   0x00000000
    // embedded data

label_80003F08:
    ctx->pc = 0x80003F08u;
    // 80003F08: .long   0x00000000
    // embedded data

label_80003F0C:
    ctx->pc = 0x80003F0Cu;
    // 80003F0C: .long   0x00000000
    // embedded data

label_80003F10:
    ctx->pc = 0x80003F10u;
    // 80003F10: .long   0x00000000
    // embedded data

label_80003F14:
    ctx->pc = 0x80003F14u;
    // 80003F14: .long   0x00000000
    // embedded data

label_80003F18:
    ctx->pc = 0x80003F18u;
    // 80003F18: .long   0x00000000
    // embedded data

label_80003F1C:
    ctx->pc = 0x80003F1Cu;
    // 80003F1C: .long   0x00000000
    // embedded data

label_80003F20:
    ctx->pc = 0x80003F20u;
    // 80003F20: .long   0x00000000
    // embedded data

label_80003F24:
    ctx->pc = 0x80003F24u;
    // 80003F24: .long   0x00000000
    // embedded data

label_80003F28:
    ctx->pc = 0x80003F28u;
    // 80003F28: .long   0x00000000
    // embedded data

label_80003F2C:
    ctx->pc = 0x80003F2Cu;
    // 80003F2C: .long   0x00000000
    // embedded data

label_80003F30:
    ctx->pc = 0x80003F30u;
    // 80003F30: .long   0x00000000
    // embedded data

label_80003F34:
    ctx->pc = 0x80003F34u;
    // 80003F34: .long   0x00000000
    // embedded data

label_80003F38:
    ctx->pc = 0x80003F38u;
    // 80003F38: .long   0x00000000
    // embedded data

label_80003F3C:
    ctx->pc = 0x80003F3Cu;
    // 80003F3C: .long   0x00000000
    // embedded data

label_80003F40:
    ctx->pc = 0x80003F40u;
    // 80003F40: .long   0x00000000
    // embedded data

label_80003F44:
    ctx->pc = 0x80003F44u;
    // 80003F44: .long   0x00000000
    // embedded data

label_80003F48:
    ctx->pc = 0x80003F48u;
    // 80003F48: .long   0x00000000
    // embedded data

label_80003F4C:
    ctx->pc = 0x80003F4Cu;
    // 80003F4C: .long   0x00000000
    // embedded data

label_80003F50:
    ctx->pc = 0x80003F50u;
    // 80003F50: .long   0x00000000
    // embedded data

label_80003F54:
    ctx->pc = 0x80003F54u;
    // 80003F54: .long   0x00000000
    // embedded data

label_80003F58:
    ctx->pc = 0x80003F58u;
    // 80003F58: .long   0x00000000
    // embedded data

label_80003F5C:
    ctx->pc = 0x80003F5Cu;
    // 80003F5C: .long   0x00000000
    // embedded data

label_80003F60:
    ctx->pc = 0x80003F60u;
    // 80003F60: .long   0x00000000
    // embedded data

label_80003F64:
    ctx->pc = 0x80003F64u;
    // 80003F64: .long   0x00000000
    // embedded data

label_80003F68:
    ctx->pc = 0x80003F68u;
    // 80003F68: .long   0x00000000
    // embedded data

label_80003F6C:
    ctx->pc = 0x80003F6Cu;
    // 80003F6C: .long   0x00000000
    // embedded data

label_80003F70:
    ctx->pc = 0x80003F70u;
    // 80003F70: .long   0x00000000
    // embedded data

label_80003F74:
    ctx->pc = 0x80003F74u;
    // 80003F74: .long   0x00000000
    // embedded data

label_80003F78:
    ctx->pc = 0x80003F78u;
    // 80003F78: .long   0x00000000
    // embedded data

label_80003F7C:
    ctx->pc = 0x80003F7Cu;
    // 80003F7C: .long   0x00000000
    // embedded data

label_80003F80:
    ctx->pc = 0x80003F80u;
    // 80003F80: .long   0x00000000
    // embedded data

label_80003F84:
    ctx->pc = 0x80003F84u;
    // 80003F84: .long   0x00000000
    // embedded data

label_80003F88:
    ctx->pc = 0x80003F88u;
    // 80003F88: .long   0x00000000
    // embedded data

label_80003F8C:
    ctx->pc = 0x80003F8Cu;
    // 80003F8C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80003F8Cu);
    return;

label_80003F90:
    ctx->pc = 0x80003F90u;
    // 80003F90: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80003F90u);
    return;

label_80003F94:
    ctx->pc = 0x80003F94u;
    // 80003F94: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80003F94u);
    return;

label_80003F98:
    ctx->pc = 0x80003F98u;
    ctx->downcount -= 13;
    // 80003F98: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80003F9C:
    ctx->pc = 0x80003F9Cu;
    // 80003F9C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80003FA0:
    ctx->pc = 0x80003FA0u;
    // 80003FA0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80003FA4:
    ctx->pc = 0x80003FA4u;
    // 80003FA4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80003FA8:
    ctx->pc = 0x80003FA8u;
    // 80003FA8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_80003FAC:
    ctx->pc = 0x80003FACu;
    // 80003FAC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80003FB0:
    ctx->pc = 0x80003FB0u;
    // 80003FB0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_80003FB4:
    ctx->pc = 0x80003FB4u;
    // 80003FB4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_80003FB8:
    ctx->pc = 0x80003FB8u;
    // 80003FB8: li      r3, 3328
    ctx->gpr[3] = (u32)(s32)(3328);

label_80003FBC:
    ctx->pc = 0x80003FBCu;
    // 80003FBC: rfi
    ppc_rfi(ctx, 0x80003FBCu);
    return;

label_80003FC0:
    ctx->pc = 0x80003FC0u;
    // 80003FC0: .long   0x00000000
    // embedded data

label_80003FC4:
    ctx->pc = 0x80003FC4u;
    // 80003FC4: .long   0x00000000
    // embedded data

label_80003FC8:
    ctx->pc = 0x80003FC8u;
    // 80003FC8: .long   0x00000000
    // embedded data

label_80003FCC:
    ctx->pc = 0x80003FCCu;
    // 80003FCC: .long   0x00000000
    // embedded data

label_80003FD0:
    ctx->pc = 0x80003FD0u;
    // 80003FD0: .long   0x00000000
    // embedded data

label_80003FD4:
    ctx->pc = 0x80003FD4u;
    // 80003FD4: .long   0x00000000
    // embedded data

label_80003FD8:
    ctx->pc = 0x80003FD8u;
    // 80003FD8: .long   0x00000000
    // embedded data

label_80003FDC:
    ctx->pc = 0x80003FDCu;
    // 80003FDC: .long   0x00000000
    // embedded data

label_80003FE0:
    ctx->pc = 0x80003FE0u;
    // 80003FE0: .long   0x00000000
    // embedded data

label_80003FE4:
    ctx->pc = 0x80003FE4u;
    // 80003FE4: .long   0x00000000
    // embedded data

label_80003FE8:
    ctx->pc = 0x80003FE8u;
    // 80003FE8: .long   0x00000000
    // embedded data

label_80003FEC:
    ctx->pc = 0x80003FECu;
    // 80003FEC: .long   0x00000000
    // embedded data

label_80003FF0:
    ctx->pc = 0x80003FF0u;
    // 80003FF0: .long   0x00000000
    // embedded data

label_80003FF4:
    ctx->pc = 0x80003FF4u;
    // 80003FF4: .long   0x00000000
    // embedded data

label_80003FF8:
    ctx->pc = 0x80003FF8u;
    // 80003FF8: .long   0x00000000
    // embedded data

label_80003FFC:
    ctx->pc = 0x80003FFCu;
    // 80003FFC: .long   0x00000000
    // embedded data

label_80004000:
    ctx->pc = 0x80004000u;
    // 80004000: .long   0x00000000
    // embedded data

label_80004004:
    ctx->pc = 0x80004004u;
    // 80004004: .long   0x00000000
    // embedded data

label_80004008:
    ctx->pc = 0x80004008u;
    // 80004008: .long   0x00000000
    // embedded data

label_8000400C:
    ctx->pc = 0x8000400Cu;
    // 8000400C: .long   0x00000000
    // embedded data

label_80004010:
    ctx->pc = 0x80004010u;
    // 80004010: .long   0x00000000
    // embedded data

label_80004014:
    ctx->pc = 0x80004014u;
    // 80004014: .long   0x00000000
    // embedded data

label_80004018:
    ctx->pc = 0x80004018u;
    // 80004018: .long   0x00000000
    // embedded data

label_8000401C:
    ctx->pc = 0x8000401Cu;
    // 8000401C: .long   0x00000000
    // embedded data

label_80004020:
    ctx->pc = 0x80004020u;
    // 80004020: .long   0x00000000
    // embedded data

label_80004024:
    ctx->pc = 0x80004024u;
    // 80004024: .long   0x00000000
    // embedded data

label_80004028:
    ctx->pc = 0x80004028u;
    // 80004028: .long   0x00000000
    // embedded data

label_8000402C:
    ctx->pc = 0x8000402Cu;
    // 8000402C: .long   0x00000000
    // embedded data

label_80004030:
    ctx->pc = 0x80004030u;
    // 80004030: .long   0x00000000
    // embedded data

label_80004034:
    ctx->pc = 0x80004034u;
    // 80004034: .long   0x00000000
    // embedded data

label_80004038:
    ctx->pc = 0x80004038u;
    // 80004038: .long   0x00000000
    // embedded data

label_8000403C:
    ctx->pc = 0x8000403Cu;
    // 8000403C: .long   0x00000000
    // embedded data

label_80004040:
    ctx->pc = 0x80004040u;
    // 80004040: .long   0x00000000
    // embedded data

label_80004044:
    ctx->pc = 0x80004044u;
    // 80004044: .long   0x00000000
    // embedded data

label_80004048:
    ctx->pc = 0x80004048u;
    // 80004048: .long   0x00000000
    // embedded data

label_8000404C:
    ctx->pc = 0x8000404Cu;
    // 8000404C: .long   0x00000000
    // embedded data

label_80004050:
    ctx->pc = 0x80004050u;
    // 80004050: .long   0x00000000
    // embedded data

label_80004054:
    ctx->pc = 0x80004054u;
    // 80004054: .long   0x00000000
    // embedded data

label_80004058:
    ctx->pc = 0x80004058u;
    // 80004058: .long   0x00000000
    // embedded data

label_8000405C:
    ctx->pc = 0x8000405Cu;
    // 8000405C: .long   0x00000000
    // embedded data

label_80004060:
    ctx->pc = 0x80004060u;
    // 80004060: .long   0x00000000
    // embedded data

label_80004064:
    ctx->pc = 0x80004064u;
    // 80004064: .long   0x00000000
    // embedded data

label_80004068:
    ctx->pc = 0x80004068u;
    // 80004068: .long   0x00000000
    // embedded data

label_8000406C:
    ctx->pc = 0x8000406Cu;
    // 8000406C: .long   0x00000000
    // embedded data

label_80004070:
    ctx->pc = 0x80004070u;
    // 80004070: .long   0x00000000
    // embedded data

label_80004074:
    ctx->pc = 0x80004074u;
    // 80004074: .long   0x00000000
    // embedded data

label_80004078:
    ctx->pc = 0x80004078u;
    // 80004078: .long   0x00000000
    // embedded data

label_8000407C:
    ctx->pc = 0x8000407Cu;
    // 8000407C: .long   0x00000000
    // embedded data

label_80004080:
    ctx->pc = 0x80004080u;
    // 80004080: .long   0x00000000
    // embedded data

label_80004084:
    ctx->pc = 0x80004084u;
    // 80004084: .long   0x00000000
    // embedded data

label_80004088:
    ctx->pc = 0x80004088u;
    // 80004088: .long   0x00000000
    // embedded data

label_8000408C:
    ctx->pc = 0x8000408Cu;
    // 8000408C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000408Cu);
    return;

label_80004090:
    ctx->pc = 0x80004090u;
    // 80004090: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004090u);
    return;

label_80004094:
    ctx->pc = 0x80004094u;
    // 80004094: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004094u);
    return;

label_80004098:
    ctx->pc = 0x80004098u;
    ctx->downcount -= 13;
    // 80004098: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_8000409C:
    ctx->pc = 0x8000409Cu;
    // 8000409C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800040A0:
    ctx->pc = 0x800040A0u;
    // 800040A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800040A4:
    ctx->pc = 0x800040A4u;
    // 800040A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800040A8:
    ctx->pc = 0x800040A8u;
    // 800040A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800040AC:
    ctx->pc = 0x800040ACu;
    // 800040AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800040B0:
    ctx->pc = 0x800040B0u;
    // 800040B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800040B4:
    ctx->pc = 0x800040B4u;
    // 800040B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800040B8:
    ctx->pc = 0x800040B8u;
    // 800040B8: li      r3, 3584
    ctx->gpr[3] = (u32)(s32)(3584);

label_800040BC:
    ctx->pc = 0x800040BCu;
    // 800040BC: rfi
    ppc_rfi(ctx, 0x800040BCu);
    return;

label_800040C0:
    ctx->pc = 0x800040C0u;
    // 800040C0: .long   0x00000000
    // embedded data

label_800040C4:
    ctx->pc = 0x800040C4u;
    // 800040C4: .long   0x00000000
    // embedded data

label_800040C8:
    ctx->pc = 0x800040C8u;
    // 800040C8: .long   0x00000000
    // embedded data

label_800040CC:
    ctx->pc = 0x800040CCu;
    // 800040CC: .long   0x00000000
    // embedded data

label_800040D0:
    ctx->pc = 0x800040D0u;
    // 800040D0: .long   0x00000000
    // embedded data

label_800040D4:
    ctx->pc = 0x800040D4u;
    // 800040D4: .long   0x00000000
    // embedded data

label_800040D8:
    ctx->pc = 0x800040D8u;
    // 800040D8: .long   0x00000000
    // embedded data

label_800040DC:
    ctx->pc = 0x800040DCu;
    // 800040DC: .long   0x00000000
    // embedded data

label_800040E0:
    ctx->pc = 0x800040E0u;
    // 800040E0: .long   0x00000000
    // embedded data

label_800040E4:
    ctx->pc = 0x800040E4u;
    // 800040E4: .long   0x00000000
    // embedded data

label_800040E8:
    ctx->pc = 0x800040E8u;
    // 800040E8: .long   0x00000000
    // embedded data

label_800040EC:
    ctx->pc = 0x800040ECu;
    // 800040EC: .long   0x00000000
    // embedded data

label_800040F0:
    ctx->pc = 0x800040F0u;
    // 800040F0: .long   0x00000000
    // embedded data

label_800040F4:
    ctx->pc = 0x800040F4u;
    // 800040F4: .long   0x00000000
    // embedded data

label_800040F8:
    ctx->pc = 0x800040F8u;
    // 800040F8: .long   0x00000000
    // embedded data

label_800040FC:
    ctx->pc = 0x800040FCu;
    // 800040FC: .long   0x00000000
    // embedded data

label_80004100:
    ctx->pc = 0x80004100u;
    // 80004100: .long   0x00000000
    // embedded data

label_80004104:
    ctx->pc = 0x80004104u;
    // 80004104: .long   0x00000000
    // embedded data

label_80004108:
    ctx->pc = 0x80004108u;
    // 80004108: .long   0x00000000
    // embedded data

label_8000410C:
    ctx->pc = 0x8000410Cu;
    // 8000410C: .long   0x00000000
    // embedded data

label_80004110:
    ctx->pc = 0x80004110u;
    // 80004110: .long   0x00000000
    // embedded data

label_80004114:
    ctx->pc = 0x80004114u;
    // 80004114: .long   0x00000000
    // embedded data

label_80004118:
    ctx->pc = 0x80004118u;
    // 80004118: .long   0x00000000
    // embedded data

label_8000411C:
    ctx->pc = 0x8000411Cu;
    // 8000411C: .long   0x00000000
    // embedded data

label_80004120:
    ctx->pc = 0x80004120u;
    // 80004120: .long   0x00000000
    // embedded data

label_80004124:
    ctx->pc = 0x80004124u;
    // 80004124: .long   0x00000000
    // embedded data

label_80004128:
    ctx->pc = 0x80004128u;
    // 80004128: .long   0x00000000
    // embedded data

label_8000412C:
    ctx->pc = 0x8000412Cu;
    // 8000412C: .long   0x00000000
    // embedded data

label_80004130:
    ctx->pc = 0x80004130u;
    // 80004130: .long   0x00000000
    // embedded data

label_80004134:
    ctx->pc = 0x80004134u;
    // 80004134: .long   0x00000000
    // embedded data

label_80004138:
    ctx->pc = 0x80004138u;
    // 80004138: .long   0x00000000
    // embedded data

label_8000413C:
    ctx->pc = 0x8000413Cu;
    // 8000413C: .long   0x00000000
    // embedded data

label_80004140:
    ctx->pc = 0x80004140u;
    // 80004140: .long   0x00000000
    // embedded data

label_80004144:
    ctx->pc = 0x80004144u;
    // 80004144: .long   0x00000000
    // embedded data

label_80004148:
    ctx->pc = 0x80004148u;
    // 80004148: .long   0x00000000
    // embedded data

label_8000414C:
    ctx->pc = 0x8000414Cu;
    // 8000414C: .long   0x00000000
    // embedded data

label_80004150:
    ctx->pc = 0x80004150u;
    // 80004150: .long   0x00000000
    // embedded data

label_80004154:
    ctx->pc = 0x80004154u;
    // 80004154: .long   0x00000000
    // embedded data

label_80004158:
    ctx->pc = 0x80004158u;
    // 80004158: .long   0x00000000
    // embedded data

label_8000415C:
    ctx->pc = 0x8000415Cu;
    // 8000415C: .long   0x00000000
    // embedded data

label_80004160:
    ctx->pc = 0x80004160u;
    // 80004160: .long   0x00000000
    // embedded data

label_80004164:
    ctx->pc = 0x80004164u;
    // 80004164: .long   0x00000000
    // embedded data

label_80004168:
    ctx->pc = 0x80004168u;
    // 80004168: .long   0x00000000
    // embedded data

label_8000416C:
    ctx->pc = 0x8000416Cu;
    // 8000416C: .long   0x00000000
    // embedded data

label_80004170:
    ctx->pc = 0x80004170u;
    // 80004170: .long   0x00000000
    // embedded data

label_80004174:
    ctx->pc = 0x80004174u;
    // 80004174: .long   0x00000000
    // embedded data

label_80004178:
    ctx->pc = 0x80004178u;
    // 80004178: .long   0x00000000
    // embedded data

label_8000417C:
    ctx->pc = 0x8000417Cu;
    // 8000417C: .long   0x00000000
    // embedded data

label_80004180:
    ctx->pc = 0x80004180u;
    // 80004180: .long   0x00000000
    // embedded data

label_80004184:
    ctx->pc = 0x80004184u;
    // 80004184: .long   0x00000000
    // embedded data

label_80004188:
    ctx->pc = 0x80004188u;
    // 80004188: .long   0x00000000
    // embedded data

label_8000418C:
    ctx->pc = 0x8000418Cu;
    // 8000418C: b       0x800041E0
    {
            goto label_800041E0;
    }

label_80004190:
    ctx->pc = 0x80004190u;
    // 80004190: .long   0x00000000
    // embedded data

label_80004194:
    ctx->pc = 0x80004194u;
    // 80004194: .long   0x00000000
    // embedded data

label_80004198:
    ctx->pc = 0x80004198u;
    // 80004198: .long   0x00000000
    // embedded data

label_8000419C:
    ctx->pc = 0x8000419Cu;
    // 8000419C: .long   0x00000000
    // embedded data

label_800041A0:
    ctx->pc = 0x800041A0u;
    // 800041A0: .long   0x00000000
    // embedded data

label_800041A4:
    ctx->pc = 0x800041A4u;
    // 800041A4: .long   0x00000000
    // embedded data

label_800041A8:
    ctx->pc = 0x800041A8u;
    // 800041A8: .long   0x00000000
    // embedded data

label_800041AC:
    ctx->pc = 0x800041ACu;
    // 800041AC: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800041ACu);
    return;

label_800041B0:
    ctx->pc = 0x800041B0u;
    // 800041B0: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x800041B0u);
    return;

label_800041B4:
    ctx->pc = 0x800041B4u;
    // 800041B4: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x800041B4u);
    return;

label_800041B8:
    ctx->pc = 0x800041B8u;
    ctx->downcount -= 13;
    // 800041B8: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_800041BC:
    ctx->pc = 0x800041BCu;
    // 800041BC: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800041C0:
    ctx->pc = 0x800041C0u;
    // 800041C0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800041C4:
    ctx->pc = 0x800041C4u;
    // 800041C4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800041C8:
    ctx->pc = 0x800041C8u;
    // 800041C8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800041CC:
    ctx->pc = 0x800041CCu;
    // 800041CC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800041D0:
    ctx->pc = 0x800041D0u;
    // 800041D0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800041D4:
    ctx->pc = 0x800041D4u;
    // 800041D4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800041D8:
    ctx->pc = 0x800041D8u;
    // 800041D8: li      r3, 3872
    ctx->gpr[3] = (u32)(s32)(3872);

label_800041DC:
    ctx->pc = 0x800041DCu;
    // 800041DC: rfi
    ppc_rfi(ctx, 0x800041DCu);
    return;

label_800041E0:
    ctx->pc = 0x800041E0u;
    // 800041E0: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800041E0u);
    return;

label_800041E4:
    ctx->pc = 0x800041E4u;
    // 800041E4: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x800041E4u);
    return;

label_800041E8:
    ctx->pc = 0x800041E8u;
    // 800041E8: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x800041E8u);
    return;

label_800041EC:
    ctx->pc = 0x800041ECu;
    ctx->downcount -= 13;
    // 800041EC: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_800041F0:
    ctx->pc = 0x800041F0u;
    // 800041F0: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800041F4:
    ctx->pc = 0x800041F4u;
    // 800041F4: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800041F8:
    ctx->pc = 0x800041F8u;
    // 800041F8: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800041FC:
    ctx->pc = 0x800041FCu;
    // 800041FC: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_80004200:
    ctx->pc = 0x80004200u;
    // 80004200: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80004204:
    ctx->pc = 0x80004204u;
    // 80004204: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_80004208:
    ctx->pc = 0x80004208u;
    // 80004208: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_8000420C:
    ctx->pc = 0x8000420Cu;
    // 8000420C: li      r3, 3840
    ctx->gpr[3] = (u32)(s32)(3840);

label_80004210:
    ctx->pc = 0x80004210u;
    // 80004210: rfi
    ppc_rfi(ctx, 0x80004210u);
    return;

label_80004214:
    ctx->pc = 0x80004214u;
    // 80004214: .long   0x00000000
    // embedded data

label_80004218:
    ctx->pc = 0x80004218u;
    // 80004218: .long   0x00000000
    // embedded data

label_8000421C:
    ctx->pc = 0x8000421Cu;
    // 8000421C: .long   0x00000000
    // embedded data

label_80004220:
    ctx->pc = 0x80004220u;
    // 80004220: .long   0x00000000
    // embedded data

label_80004224:
    ctx->pc = 0x80004224u;
    // 80004224: .long   0x00000000
    // embedded data

label_80004228:
    ctx->pc = 0x80004228u;
    // 80004228: .long   0x00000000
    // embedded data

label_8000422C:
    ctx->pc = 0x8000422Cu;
    // 8000422C: .long   0x00000000
    // embedded data

label_80004230:
    ctx->pc = 0x80004230u;
    // 80004230: .long   0x00000000
    // embedded data

label_80004234:
    ctx->pc = 0x80004234u;
    // 80004234: .long   0x00000000
    // embedded data

label_80004238:
    ctx->pc = 0x80004238u;
    // 80004238: .long   0x00000000
    // embedded data

label_8000423C:
    ctx->pc = 0x8000423Cu;
    // 8000423C: .long   0x00000000
    // embedded data

label_80004240:
    ctx->pc = 0x80004240u;
    // 80004240: .long   0x00000000
    // embedded data

label_80004244:
    ctx->pc = 0x80004244u;
    // 80004244: .long   0x00000000
    // embedded data

label_80004248:
    ctx->pc = 0x80004248u;
    // 80004248: .long   0x00000000
    // embedded data

label_8000424C:
    ctx->pc = 0x8000424Cu;
    // 8000424C: .long   0x00000000
    // embedded data

label_80004250:
    ctx->pc = 0x80004250u;
    // 80004250: .long   0x00000000
    // embedded data

label_80004254:
    ctx->pc = 0x80004254u;
    // 80004254: .long   0x00000000
    // embedded data

label_80004258:
    ctx->pc = 0x80004258u;
    // 80004258: .long   0x00000000
    // embedded data

label_8000425C:
    ctx->pc = 0x8000425Cu;
    // 8000425C: .long   0x00000000
    // embedded data

label_80004260:
    ctx->pc = 0x80004260u;
    // 80004260: .long   0x00000000
    // embedded data

label_80004264:
    ctx->pc = 0x80004264u;
    // 80004264: .long   0x00000000
    // embedded data

label_80004268:
    ctx->pc = 0x80004268u;
    // 80004268: .long   0x00000000
    // embedded data

label_8000426C:
    ctx->pc = 0x8000426Cu;
    // 8000426C: .long   0x00000000
    // embedded data

label_80004270:
    ctx->pc = 0x80004270u;
    // 80004270: .long   0x00000000
    // embedded data

label_80004274:
    ctx->pc = 0x80004274u;
    // 80004274: .long   0x00000000
    // embedded data

label_80004278:
    ctx->pc = 0x80004278u;
    // 80004278: .long   0x00000000
    // embedded data

label_8000427C:
    ctx->pc = 0x8000427Cu;
    // 8000427C: .long   0x00000000
    // embedded data

label_80004280:
    ctx->pc = 0x80004280u;
    // 80004280: .long   0x00000000
    // embedded data

label_80004284:
    ctx->pc = 0x80004284u;
    // 80004284: .long   0x00000000
    // embedded data

label_80004288:
    ctx->pc = 0x80004288u;
    // 80004288: .long   0x00000000
    // embedded data

label_8000428C:
    ctx->pc = 0x8000428Cu;
    // 8000428C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000428Cu);
    return;

label_80004290:
    ctx->pc = 0x80004290u;
    ctx->downcount -= 1;
    // 80004290: mfcr    r2
    ctx->gpr[2] = ctx->cr;

label_80004294:
    ctx->pc = 0x80004294u;
    // 80004294: mtsprg2    r2
    ppc_fallback_instruction(ctx, 0x7C5243A6u, 0x80004294u);
    return;

label_80004298:
    ctx->pc = 0x80004298u;
    ctx->downcount -= 3;
    // 80004298: mfmsr   r2
    ctx->gpr[2] = ctx->msr;

label_8000429C:
    ctx->pc = 0x8000429Cu;
    // 8000429C: andis.  r2, r2, 0x0002
    {
        ctx->gpr[2] = ctx->gpr[2] & (0x0002u << 16);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[2];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800042A0:
    ctx->pc = 0x800042A0u;
    // 800042A0: bc    12, 2, 0x800042BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800042BC;
        }
    }

label_800042A4:
    ctx->pc = 0x800042A4u;
    ctx->downcount -= 9;
    // 800042A4: mfmsr   r2
    ctx->gpr[2] = ctx->msr;

label_800042A8:
    ctx->pc = 0x800042A8u;
    // 800042A8: xoris   r2, r2, 0x0002
    ctx->gpr[2] = ctx->gpr[2] ^ (0x0002u << 16);

label_800042AC:
    ctx->pc = 0x800042ACu;
    // 800042AC: sync
    ppc_memory_fence();

label_800042B0:
    ctx->pc = 0x800042B0u;
    // 800042B0: mtmsr   r2
    ctx->msr = ctx->gpr[2];

label_800042B4:
    ctx->pc = 0x800042B4u;
    // 800042B4: sync
    ppc_memory_fence();

label_800042B8:
    ctx->pc = 0x800042B8u;
    // 800042B8: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800042B8u);
    return;

label_800042BC:
    ctx->pc = 0x800042BCu;
    // 800042BC: mfsprg2    r2
    ppc_fallback_instruction(ctx, 0x7C5242A6u, 0x800042BCu);
    return;

label_800042C0:
    ctx->pc = 0x800042C0u;
    ctx->downcount -= 1;
    // 800042C0: mtcr    r2
    ctx->cr = (ctx->cr & ~0xFFFFFFFFu) | (ctx->gpr[2] & 0xFFFFFFFFu);

label_800042C4:
    ctx->pc = 0x800042C4u;
    // 800042C4: mfsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5142A6u, 0x800042C4u);
    return;

label_800042C8:
    ctx->pc = 0x800042C8u;
    // 800042C8: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800042C8u);
    return;

label_800042CC:
    ctx->pc = 0x800042CCu;
    // 800042CC: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x800042CCu);
    return;

label_800042D0:
    ctx->pc = 0x800042D0u;
    // 800042D0: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x800042D0u);
    return;

label_800042D4:
    ctx->pc = 0x800042D4u;
    ctx->downcount -= 13;
    // 800042D4: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_800042D8:
    ctx->pc = 0x800042D8u;
    // 800042D8: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800042DC:
    ctx->pc = 0x800042DCu;
    // 800042DC: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800042E0:
    ctx->pc = 0x800042E0u;
    // 800042E0: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800042E4:
    ctx->pc = 0x800042E4u;
    // 800042E4: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800042E8:
    ctx->pc = 0x800042E8u;
    // 800042E8: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800042EC:
    ctx->pc = 0x800042ECu;
    // 800042EC: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800042F0:
    ctx->pc = 0x800042F0u;
    // 800042F0: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800042F4:
    ctx->pc = 0x800042F4u;
    // 800042F4: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_800042F8:
    ctx->pc = 0x800042F8u;
    // 800042F8: rfi
    ppc_rfi(ctx, 0x800042F8u);
    return;

label_800042FC:
    ctx->pc = 0x800042FCu;
    // 800042FC: .long   0x00000000
    // embedded data

label_80004300:
    ctx->pc = 0x80004300u;
    // 80004300: .long   0x00000000
    // embedded data

label_80004304:
    ctx->pc = 0x80004304u;
    // 80004304: .long   0x00000000
    // embedded data

label_80004308:
    ctx->pc = 0x80004308u;
    // 80004308: .long   0x00000000
    // embedded data

label_8000430C:
    ctx->pc = 0x8000430Cu;
    // 8000430C: .long   0x00000000
    // embedded data

label_80004310:
    ctx->pc = 0x80004310u;
    // 80004310: .long   0x00000000
    // embedded data

label_80004314:
    ctx->pc = 0x80004314u;
    // 80004314: .long   0x00000000
    // embedded data

label_80004318:
    ctx->pc = 0x80004318u;
    // 80004318: .long   0x00000000
    // embedded data

label_8000431C:
    ctx->pc = 0x8000431Cu;
    // 8000431C: .long   0x00000000
    // embedded data

label_80004320:
    ctx->pc = 0x80004320u;
    // 80004320: .long   0x00000000
    // embedded data

label_80004324:
    ctx->pc = 0x80004324u;
    // 80004324: .long   0x00000000
    // embedded data

label_80004328:
    ctx->pc = 0x80004328u;
    // 80004328: .long   0x00000000
    // embedded data

label_8000432C:
    ctx->pc = 0x8000432Cu;
    // 8000432C: .long   0x00000000
    // embedded data

label_80004330:
    ctx->pc = 0x80004330u;
    // 80004330: .long   0x00000000
    // embedded data

label_80004334:
    ctx->pc = 0x80004334u;
    // 80004334: .long   0x00000000
    // embedded data

label_80004338:
    ctx->pc = 0x80004338u;
    // 80004338: .long   0x00000000
    // embedded data

label_8000433C:
    ctx->pc = 0x8000433Cu;
    // 8000433C: .long   0x00000000
    // embedded data

label_80004340:
    ctx->pc = 0x80004340u;
    // 80004340: .long   0x00000000
    // embedded data

label_80004344:
    ctx->pc = 0x80004344u;
    // 80004344: .long   0x00000000
    // embedded data

label_80004348:
    ctx->pc = 0x80004348u;
    // 80004348: .long   0x00000000
    // embedded data

label_8000434C:
    ctx->pc = 0x8000434Cu;
    // 8000434C: .long   0x00000000
    // embedded data

label_80004350:
    ctx->pc = 0x80004350u;
    // 80004350: .long   0x00000000
    // embedded data

label_80004354:
    ctx->pc = 0x80004354u;
    // 80004354: .long   0x00000000
    // embedded data

label_80004358:
    ctx->pc = 0x80004358u;
    // 80004358: .long   0x00000000
    // embedded data

label_8000435C:
    ctx->pc = 0x8000435Cu;
    // 8000435C: .long   0x00000000
    // embedded data

label_80004360:
    ctx->pc = 0x80004360u;
    // 80004360: .long   0x00000000
    // embedded data

label_80004364:
    ctx->pc = 0x80004364u;
    // 80004364: .long   0x00000000
    // embedded data

label_80004368:
    ctx->pc = 0x80004368u;
    // 80004368: .long   0x00000000
    // embedded data

label_8000436C:
    ctx->pc = 0x8000436Cu;
    // 8000436C: .long   0x00000000
    // embedded data

label_80004370:
    ctx->pc = 0x80004370u;
    // 80004370: .long   0x00000000
    // embedded data

label_80004374:
    ctx->pc = 0x80004374u;
    // 80004374: .long   0x00000000
    // embedded data

label_80004378:
    ctx->pc = 0x80004378u;
    // 80004378: .long   0x00000000
    // embedded data

label_8000437C:
    ctx->pc = 0x8000437Cu;
    // 8000437C: .long   0x00000000
    // embedded data

label_80004380:
    ctx->pc = 0x80004380u;
    // 80004380: .long   0x00000000
    // embedded data

label_80004384:
    ctx->pc = 0x80004384u;
    // 80004384: .long   0x00000000
    // embedded data

label_80004388:
    ctx->pc = 0x80004388u;
    // 80004388: .long   0x00000000
    // embedded data

label_8000438C:
    ctx->pc = 0x8000438Cu;
    // 8000438C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000438Cu);
    return;

label_80004390:
    ctx->pc = 0x80004390u;
    ctx->downcount -= 1;
    // 80004390: mfcr    r2
    ctx->gpr[2] = ctx->cr;

label_80004394:
    ctx->pc = 0x80004394u;
    // 80004394: mtsprg2    r2
    ppc_fallback_instruction(ctx, 0x7C5243A6u, 0x80004394u);
    return;

label_80004398:
    ctx->pc = 0x80004398u;
    ctx->downcount -= 3;
    // 80004398: mfmsr   r2
    ctx->gpr[2] = ctx->msr;

label_8000439C:
    ctx->pc = 0x8000439Cu;
    // 8000439C: andis.  r2, r2, 0x0002
    {
        ctx->gpr[2] = ctx->gpr[2] & (0x0002u << 16);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[2];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800043A0:
    ctx->pc = 0x800043A0u;
    // 800043A0: bc    12, 2, 0x800043BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800043BC;
        }
    }

label_800043A4:
    ctx->pc = 0x800043A4u;
    ctx->downcount -= 9;
    // 800043A4: mfmsr   r2
    ctx->gpr[2] = ctx->msr;

label_800043A8:
    ctx->pc = 0x800043A8u;
    // 800043A8: xoris   r2, r2, 0x0002
    ctx->gpr[2] = ctx->gpr[2] ^ (0x0002u << 16);

label_800043AC:
    ctx->pc = 0x800043ACu;
    // 800043AC: sync
    ppc_memory_fence();

label_800043B0:
    ctx->pc = 0x800043B0u;
    // 800043B0: mtmsr   r2
    ctx->msr = ctx->gpr[2];

label_800043B4:
    ctx->pc = 0x800043B4u;
    // 800043B4: sync
    ppc_memory_fence();

label_800043B8:
    ctx->pc = 0x800043B8u;
    // 800043B8: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800043B8u);
    return;

label_800043BC:
    ctx->pc = 0x800043BCu;
    // 800043BC: mfsprg2    r2
    ppc_fallback_instruction(ctx, 0x7C5242A6u, 0x800043BCu);
    return;

label_800043C0:
    ctx->pc = 0x800043C0u;
    ctx->downcount -= 1;
    // 800043C0: mtcr    r2
    ctx->cr = (ctx->cr & ~0xFFFFFFFFu) | (ctx->gpr[2] & 0xFFFFFFFFu);

label_800043C4:
    ctx->pc = 0x800043C4u;
    // 800043C4: mfsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5142A6u, 0x800043C4u);
    return;

label_800043C8:
    ctx->pc = 0x800043C8u;
    // 800043C8: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800043C8u);
    return;

label_800043CC:
    ctx->pc = 0x800043CCu;
    // 800043CC: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x800043CCu);
    return;

label_800043D0:
    ctx->pc = 0x800043D0u;
    // 800043D0: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x800043D0u);
    return;

label_800043D4:
    ctx->pc = 0x800043D4u;
    ctx->downcount -= 13;
    // 800043D4: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_800043D8:
    ctx->pc = 0x800043D8u;
    // 800043D8: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800043DC:
    ctx->pc = 0x800043DCu;
    // 800043DC: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800043E0:
    ctx->pc = 0x800043E0u;
    // 800043E0: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800043E4:
    ctx->pc = 0x800043E4u;
    // 800043E4: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800043E8:
    ctx->pc = 0x800043E8u;
    // 800043E8: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800043EC:
    ctx->pc = 0x800043ECu;
    // 800043EC: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800043F0:
    ctx->pc = 0x800043F0u;
    // 800043F0: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800043F4:
    ctx->pc = 0x800043F4u;
    // 800043F4: li      r3, 4352
    ctx->gpr[3] = (u32)(s32)(4352);

label_800043F8:
    ctx->pc = 0x800043F8u;
    // 800043F8: rfi
    ppc_rfi(ctx, 0x800043F8u);
    return;

label_800043FC:
    ctx->pc = 0x800043FCu;
    // 800043FC: .long   0x00000000
    // embedded data

label_80004400:
    ctx->pc = 0x80004400u;
    // 80004400: .long   0x00000000
    // embedded data

label_80004404:
    ctx->pc = 0x80004404u;
    // 80004404: .long   0x00000000
    // embedded data

label_80004408:
    ctx->pc = 0x80004408u;
    // 80004408: .long   0x00000000
    // embedded data

label_8000440C:
    ctx->pc = 0x8000440Cu;
    // 8000440C: .long   0x00000000
    // embedded data

label_80004410:
    ctx->pc = 0x80004410u;
    // 80004410: .long   0x00000000
    // embedded data

label_80004414:
    ctx->pc = 0x80004414u;
    // 80004414: .long   0x00000000
    // embedded data

label_80004418:
    ctx->pc = 0x80004418u;
    // 80004418: .long   0x00000000
    // embedded data

label_8000441C:
    ctx->pc = 0x8000441Cu;
    // 8000441C: .long   0x00000000
    // embedded data

label_80004420:
    ctx->pc = 0x80004420u;
    // 80004420: .long   0x00000000
    // embedded data

label_80004424:
    ctx->pc = 0x80004424u;
    // 80004424: .long   0x00000000
    // embedded data

label_80004428:
    ctx->pc = 0x80004428u;
    // 80004428: .long   0x00000000
    // embedded data

label_8000442C:
    ctx->pc = 0x8000442Cu;
    // 8000442C: .long   0x00000000
    // embedded data

label_80004430:
    ctx->pc = 0x80004430u;
    // 80004430: .long   0x00000000
    // embedded data

label_80004434:
    ctx->pc = 0x80004434u;
    // 80004434: .long   0x00000000
    // embedded data

label_80004438:
    ctx->pc = 0x80004438u;
    // 80004438: .long   0x00000000
    // embedded data

label_8000443C:
    ctx->pc = 0x8000443Cu;
    // 8000443C: .long   0x00000000
    // embedded data

label_80004440:
    ctx->pc = 0x80004440u;
    // 80004440: .long   0x00000000
    // embedded data

label_80004444:
    ctx->pc = 0x80004444u;
    // 80004444: .long   0x00000000
    // embedded data

label_80004448:
    ctx->pc = 0x80004448u;
    // 80004448: .long   0x00000000
    // embedded data

label_8000444C:
    ctx->pc = 0x8000444Cu;
    // 8000444C: .long   0x00000000
    // embedded data

label_80004450:
    ctx->pc = 0x80004450u;
    // 80004450: .long   0x00000000
    // embedded data

label_80004454:
    ctx->pc = 0x80004454u;
    // 80004454: .long   0x00000000
    // embedded data

label_80004458:
    ctx->pc = 0x80004458u;
    // 80004458: .long   0x00000000
    // embedded data

label_8000445C:
    ctx->pc = 0x8000445Cu;
    // 8000445C: .long   0x00000000
    // embedded data

label_80004460:
    ctx->pc = 0x80004460u;
    // 80004460: .long   0x00000000
    // embedded data

label_80004464:
    ctx->pc = 0x80004464u;
    // 80004464: .long   0x00000000
    // embedded data

label_80004468:
    ctx->pc = 0x80004468u;
    // 80004468: .long   0x00000000
    // embedded data

label_8000446C:
    ctx->pc = 0x8000446Cu;
    // 8000446C: .long   0x00000000
    // embedded data

label_80004470:
    ctx->pc = 0x80004470u;
    // 80004470: .long   0x00000000
    // embedded data

label_80004474:
    ctx->pc = 0x80004474u;
    // 80004474: .long   0x00000000
    // embedded data

label_80004478:
    ctx->pc = 0x80004478u;
    // 80004478: .long   0x00000000
    // embedded data

label_8000447C:
    ctx->pc = 0x8000447Cu;
    // 8000447C: .long   0x00000000
    // embedded data

label_80004480:
    ctx->pc = 0x80004480u;
    // 80004480: .long   0x00000000
    // embedded data

label_80004484:
    ctx->pc = 0x80004484u;
    // 80004484: .long   0x00000000
    // embedded data

label_80004488:
    ctx->pc = 0x80004488u;
    // 80004488: .long   0x00000000
    // embedded data

label_8000448C:
    ctx->pc = 0x8000448Cu;
    // 8000448C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000448Cu);
    return;

label_80004490:
    ctx->pc = 0x80004490u;
    ctx->downcount -= 1;
    // 80004490: mfcr    r2
    ctx->gpr[2] = ctx->cr;

label_80004494:
    ctx->pc = 0x80004494u;
    // 80004494: mtsprg2    r2
    ppc_fallback_instruction(ctx, 0x7C5243A6u, 0x80004494u);
    return;

label_80004498:
    ctx->pc = 0x80004498u;
    ctx->downcount -= 3;
    // 80004498: mfmsr   r2
    ctx->gpr[2] = ctx->msr;

label_8000449C:
    ctx->pc = 0x8000449Cu;
    // 8000449C: andis.  r2, r2, 0x0002
    {
        ctx->gpr[2] = ctx->gpr[2] & (0x0002u << 16);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[2];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800044A0:
    ctx->pc = 0x800044A0u;
    // 800044A0: bc    12, 2, 0x800044BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800044BC;
        }
    }

label_800044A4:
    ctx->pc = 0x800044A4u;
    ctx->downcount -= 9;
    // 800044A4: mfmsr   r2
    ctx->gpr[2] = ctx->msr;

label_800044A8:
    ctx->pc = 0x800044A8u;
    // 800044A8: xoris   r2, r2, 0x0002
    ctx->gpr[2] = ctx->gpr[2] ^ (0x0002u << 16);

label_800044AC:
    ctx->pc = 0x800044ACu;
    // 800044AC: sync
    ppc_memory_fence();

label_800044B0:
    ctx->pc = 0x800044B0u;
    // 800044B0: mtmsr   r2
    ctx->msr = ctx->gpr[2];

label_800044B4:
    ctx->pc = 0x800044B4u;
    // 800044B4: sync
    ppc_memory_fence();

label_800044B8:
    ctx->pc = 0x800044B8u;
    // 800044B8: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800044B8u);
    return;

label_800044BC:
    ctx->pc = 0x800044BCu;
    // 800044BC: mfsprg2    r2
    ppc_fallback_instruction(ctx, 0x7C5242A6u, 0x800044BCu);
    return;

label_800044C0:
    ctx->pc = 0x800044C0u;
    ctx->downcount -= 1;
    // 800044C0: mtcr    r2
    ctx->cr = (ctx->cr & ~0xFFFFFFFFu) | (ctx->gpr[2] & 0xFFFFFFFFu);

label_800044C4:
    ctx->pc = 0x800044C4u;
    // 800044C4: mfsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5142A6u, 0x800044C4u);
    return;

label_800044C8:
    ctx->pc = 0x800044C8u;
    // 800044C8: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800044C8u);
    return;

label_800044CC:
    ctx->pc = 0x800044CCu;
    // 800044CC: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x800044CCu);
    return;

label_800044D0:
    ctx->pc = 0x800044D0u;
    // 800044D0: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x800044D0u);
    return;

label_800044D4:
    ctx->pc = 0x800044D4u;
    ctx->downcount -= 13;
    // 800044D4: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_800044D8:
    ctx->pc = 0x800044D8u;
    // 800044D8: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800044DC:
    ctx->pc = 0x800044DCu;
    // 800044DC: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800044E0:
    ctx->pc = 0x800044E0u;
    // 800044E0: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800044E4:
    ctx->pc = 0x800044E4u;
    // 800044E4: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800044E8:
    ctx->pc = 0x800044E8u;
    // 800044E8: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800044EC:
    ctx->pc = 0x800044ECu;
    // 800044EC: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800044F0:
    ctx->pc = 0x800044F0u;
    // 800044F0: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800044F4:
    ctx->pc = 0x800044F4u;
    // 800044F4: li      r3, 4608
    ctx->gpr[3] = (u32)(s32)(4608);

label_800044F8:
    ctx->pc = 0x800044F8u;
    // 800044F8: rfi
    ppc_rfi(ctx, 0x800044F8u);
    return;

label_800044FC:
    ctx->pc = 0x800044FCu;
    // 800044FC: .long   0x00000000
    // embedded data

label_80004500:
    ctx->pc = 0x80004500u;
    // 80004500: .long   0x00000000
    // embedded data

label_80004504:
    ctx->pc = 0x80004504u;
    // 80004504: .long   0x00000000
    // embedded data

label_80004508:
    ctx->pc = 0x80004508u;
    // 80004508: .long   0x00000000
    // embedded data

label_8000450C:
    ctx->pc = 0x8000450Cu;
    // 8000450C: .long   0x00000000
    // embedded data

label_80004510:
    ctx->pc = 0x80004510u;
    // 80004510: .long   0x00000000
    // embedded data

label_80004514:
    ctx->pc = 0x80004514u;
    // 80004514: .long   0x00000000
    // embedded data

label_80004518:
    ctx->pc = 0x80004518u;
    // 80004518: .long   0x00000000
    // embedded data

label_8000451C:
    ctx->pc = 0x8000451Cu;
    // 8000451C: .long   0x00000000
    // embedded data

label_80004520:
    ctx->pc = 0x80004520u;
    // 80004520: .long   0x00000000
    // embedded data

label_80004524:
    ctx->pc = 0x80004524u;
    // 80004524: .long   0x00000000
    // embedded data

label_80004528:
    ctx->pc = 0x80004528u;
    // 80004528: .long   0x00000000
    // embedded data

label_8000452C:
    ctx->pc = 0x8000452Cu;
    // 8000452C: .long   0x00000000
    // embedded data

label_80004530:
    ctx->pc = 0x80004530u;
    // 80004530: .long   0x00000000
    // embedded data

label_80004534:
    ctx->pc = 0x80004534u;
    // 80004534: .long   0x00000000
    // embedded data

label_80004538:
    ctx->pc = 0x80004538u;
    // 80004538: .long   0x00000000
    // embedded data

label_8000453C:
    ctx->pc = 0x8000453Cu;
    // 8000453C: .long   0x00000000
    // embedded data

label_80004540:
    ctx->pc = 0x80004540u;
    // 80004540: .long   0x00000000
    // embedded data

label_80004544:
    ctx->pc = 0x80004544u;
    // 80004544: .long   0x00000000
    // embedded data

label_80004548:
    ctx->pc = 0x80004548u;
    // 80004548: .long   0x00000000
    // embedded data

label_8000454C:
    ctx->pc = 0x8000454Cu;
    // 8000454C: .long   0x00000000
    // embedded data

label_80004550:
    ctx->pc = 0x80004550u;
    // 80004550: .long   0x00000000
    // embedded data

label_80004554:
    ctx->pc = 0x80004554u;
    // 80004554: .long   0x00000000
    // embedded data

label_80004558:
    ctx->pc = 0x80004558u;
    // 80004558: .long   0x00000000
    // embedded data

label_8000455C:
    ctx->pc = 0x8000455Cu;
    // 8000455C: .long   0x00000000
    // embedded data

label_80004560:
    ctx->pc = 0x80004560u;
    // 80004560: .long   0x00000000
    // embedded data

label_80004564:
    ctx->pc = 0x80004564u;
    // 80004564: .long   0x00000000
    // embedded data

label_80004568:
    ctx->pc = 0x80004568u;
    // 80004568: .long   0x00000000
    // embedded data

label_8000456C:
    ctx->pc = 0x8000456Cu;
    // 8000456C: .long   0x00000000
    // embedded data

label_80004570:
    ctx->pc = 0x80004570u;
    // 80004570: .long   0x00000000
    // embedded data

label_80004574:
    ctx->pc = 0x80004574u;
    // 80004574: .long   0x00000000
    // embedded data

label_80004578:
    ctx->pc = 0x80004578u;
    // 80004578: .long   0x00000000
    // embedded data

label_8000457C:
    ctx->pc = 0x8000457Cu;
    // 8000457C: .long   0x00000000
    // embedded data

label_80004580:
    ctx->pc = 0x80004580u;
    // 80004580: .long   0x00000000
    // embedded data

label_80004584:
    ctx->pc = 0x80004584u;
    // 80004584: .long   0x00000000
    // embedded data

label_80004588:
    ctx->pc = 0x80004588u;
    // 80004588: .long   0x00000000
    // embedded data

label_8000458C:
    ctx->pc = 0x8000458Cu;
    // 8000458C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000458Cu);
    return;

label_80004590:
    ctx->pc = 0x80004590u;
    // 80004590: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004590u);
    return;

label_80004594:
    ctx->pc = 0x80004594u;
    // 80004594: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004594u);
    return;

label_80004598:
    ctx->pc = 0x80004598u;
    ctx->downcount -= 13;
    // 80004598: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_8000459C:
    ctx->pc = 0x8000459Cu;
    // 8000459C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800045A0:
    ctx->pc = 0x800045A0u;
    // 800045A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800045A4:
    ctx->pc = 0x800045A4u;
    // 800045A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800045A8:
    ctx->pc = 0x800045A8u;
    // 800045A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800045AC:
    ctx->pc = 0x800045ACu;
    // 800045AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800045B0:
    ctx->pc = 0x800045B0u;
    // 800045B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800045B4:
    ctx->pc = 0x800045B4u;
    // 800045B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800045B8:
    ctx->pc = 0x800045B8u;
    // 800045B8: li      r3, 4864
    ctx->gpr[3] = (u32)(s32)(4864);

label_800045BC:
    ctx->pc = 0x800045BCu;
    // 800045BC: rfi
    ppc_rfi(ctx, 0x800045BCu);
    return;

label_800045C0:
    ctx->pc = 0x800045C0u;
    // 800045C0: .long   0x00000000
    // embedded data

label_800045C4:
    ctx->pc = 0x800045C4u;
    // 800045C4: .long   0x00000000
    // embedded data

label_800045C8:
    ctx->pc = 0x800045C8u;
    // 800045C8: .long   0x00000000
    // embedded data

label_800045CC:
    ctx->pc = 0x800045CCu;
    // 800045CC: .long   0x00000000
    // embedded data

label_800045D0:
    ctx->pc = 0x800045D0u;
    // 800045D0: .long   0x00000000
    // embedded data

label_800045D4:
    ctx->pc = 0x800045D4u;
    // 800045D4: .long   0x00000000
    // embedded data

label_800045D8:
    ctx->pc = 0x800045D8u;
    // 800045D8: .long   0x00000000
    // embedded data

label_800045DC:
    ctx->pc = 0x800045DCu;
    // 800045DC: .long   0x00000000
    // embedded data

label_800045E0:
    ctx->pc = 0x800045E0u;
    // 800045E0: .long   0x00000000
    // embedded data

label_800045E4:
    ctx->pc = 0x800045E4u;
    // 800045E4: .long   0x00000000
    // embedded data

label_800045E8:
    ctx->pc = 0x800045E8u;
    // 800045E8: .long   0x00000000
    // embedded data

label_800045EC:
    ctx->pc = 0x800045ECu;
    // 800045EC: .long   0x00000000
    // embedded data

label_800045F0:
    ctx->pc = 0x800045F0u;
    // 800045F0: .long   0x00000000
    // embedded data

label_800045F4:
    ctx->pc = 0x800045F4u;
    // 800045F4: .long   0x00000000
    // embedded data

label_800045F8:
    ctx->pc = 0x800045F8u;
    // 800045F8: .long   0x00000000
    // embedded data

label_800045FC:
    ctx->pc = 0x800045FCu;
    // 800045FC: .long   0x00000000
    // embedded data

label_80004600:
    ctx->pc = 0x80004600u;
    // 80004600: .long   0x00000000
    // embedded data

label_80004604:
    ctx->pc = 0x80004604u;
    // 80004604: .long   0x00000000
    // embedded data

label_80004608:
    ctx->pc = 0x80004608u;
    // 80004608: .long   0x00000000
    // embedded data

label_8000460C:
    ctx->pc = 0x8000460Cu;
    // 8000460C: .long   0x00000000
    // embedded data

label_80004610:
    ctx->pc = 0x80004610u;
    // 80004610: .long   0x00000000
    // embedded data

label_80004614:
    ctx->pc = 0x80004614u;
    // 80004614: .long   0x00000000
    // embedded data

label_80004618:
    ctx->pc = 0x80004618u;
    // 80004618: .long   0x00000000
    // embedded data

label_8000461C:
    ctx->pc = 0x8000461Cu;
    // 8000461C: .long   0x00000000
    // embedded data

label_80004620:
    ctx->pc = 0x80004620u;
    // 80004620: .long   0x00000000
    // embedded data

label_80004624:
    ctx->pc = 0x80004624u;
    // 80004624: .long   0x00000000
    // embedded data

label_80004628:
    ctx->pc = 0x80004628u;
    // 80004628: .long   0x00000000
    // embedded data

label_8000462C:
    ctx->pc = 0x8000462Cu;
    // 8000462C: .long   0x00000000
    // embedded data

label_80004630:
    ctx->pc = 0x80004630u;
    // 80004630: .long   0x00000000
    // embedded data

label_80004634:
    ctx->pc = 0x80004634u;
    // 80004634: .long   0x00000000
    // embedded data

label_80004638:
    ctx->pc = 0x80004638u;
    // 80004638: .long   0x00000000
    // embedded data

label_8000463C:
    ctx->pc = 0x8000463Cu;
    // 8000463C: .long   0x00000000
    // embedded data

label_80004640:
    ctx->pc = 0x80004640u;
    // 80004640: .long   0x00000000
    // embedded data

label_80004644:
    ctx->pc = 0x80004644u;
    // 80004644: .long   0x00000000
    // embedded data

label_80004648:
    ctx->pc = 0x80004648u;
    // 80004648: .long   0x00000000
    // embedded data

label_8000464C:
    ctx->pc = 0x8000464Cu;
    // 8000464C: .long   0x00000000
    // embedded data

label_80004650:
    ctx->pc = 0x80004650u;
    // 80004650: .long   0x00000000
    // embedded data

label_80004654:
    ctx->pc = 0x80004654u;
    // 80004654: .long   0x00000000
    // embedded data

label_80004658:
    ctx->pc = 0x80004658u;
    // 80004658: .long   0x00000000
    // embedded data

label_8000465C:
    ctx->pc = 0x8000465Cu;
    // 8000465C: .long   0x00000000
    // embedded data

label_80004660:
    ctx->pc = 0x80004660u;
    // 80004660: .long   0x00000000
    // embedded data

label_80004664:
    ctx->pc = 0x80004664u;
    // 80004664: .long   0x00000000
    // embedded data

label_80004668:
    ctx->pc = 0x80004668u;
    // 80004668: .long   0x00000000
    // embedded data

label_8000466C:
    ctx->pc = 0x8000466Cu;
    // 8000466C: .long   0x00000000
    // embedded data

label_80004670:
    ctx->pc = 0x80004670u;
    // 80004670: .long   0x00000000
    // embedded data

label_80004674:
    ctx->pc = 0x80004674u;
    // 80004674: .long   0x00000000
    // embedded data

label_80004678:
    ctx->pc = 0x80004678u;
    // 80004678: .long   0x00000000
    // embedded data

label_8000467C:
    ctx->pc = 0x8000467Cu;
    // 8000467C: .long   0x00000000
    // embedded data

label_80004680:
    ctx->pc = 0x80004680u;
    // 80004680: .long   0x00000000
    // embedded data

label_80004684:
    ctx->pc = 0x80004684u;
    // 80004684: .long   0x00000000
    // embedded data

label_80004688:
    ctx->pc = 0x80004688u;
    // 80004688: .long   0x00000000
    // embedded data

label_8000468C:
    ctx->pc = 0x8000468Cu;
    // 8000468C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000468Cu);
    return;

label_80004690:
    ctx->pc = 0x80004690u;
    // 80004690: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004690u);
    return;

label_80004694:
    ctx->pc = 0x80004694u;
    // 80004694: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004694u);
    return;

label_80004698:
    ctx->pc = 0x80004698u;
    ctx->downcount -= 13;
    // 80004698: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_8000469C:
    ctx->pc = 0x8000469Cu;
    // 8000469C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800046A0:
    ctx->pc = 0x800046A0u;
    // 800046A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800046A4:
    ctx->pc = 0x800046A4u;
    // 800046A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800046A8:
    ctx->pc = 0x800046A8u;
    // 800046A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800046AC:
    ctx->pc = 0x800046ACu;
    // 800046AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800046B0:
    ctx->pc = 0x800046B0u;
    // 800046B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800046B4:
    ctx->pc = 0x800046B4u;
    // 800046B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800046B8:
    ctx->pc = 0x800046B8u;
    // 800046B8: li      r3, 5120
    ctx->gpr[3] = (u32)(s32)(5120);

label_800046BC:
    ctx->pc = 0x800046BCu;
    // 800046BC: rfi
    ppc_rfi(ctx, 0x800046BCu);
    return;

label_800046C0:
    ctx->pc = 0x800046C0u;
    // 800046C0: .long   0x00000000
    // embedded data

label_800046C4:
    ctx->pc = 0x800046C4u;
    // 800046C4: .long   0x00000000
    // embedded data

label_800046C8:
    ctx->pc = 0x800046C8u;
    // 800046C8: .long   0x00000000
    // embedded data

label_800046CC:
    ctx->pc = 0x800046CCu;
    // 800046CC: .long   0x00000000
    // embedded data

label_800046D0:
    ctx->pc = 0x800046D0u;
    // 800046D0: .long   0x00000000
    // embedded data

label_800046D4:
    ctx->pc = 0x800046D4u;
    // 800046D4: .long   0x00000000
    // embedded data

label_800046D8:
    ctx->pc = 0x800046D8u;
    // 800046D8: .long   0x00000000
    // embedded data

label_800046DC:
    ctx->pc = 0x800046DCu;
    // 800046DC: .long   0x00000000
    // embedded data

label_800046E0:
    ctx->pc = 0x800046E0u;
    // 800046E0: .long   0x00000000
    // embedded data

label_800046E4:
    ctx->pc = 0x800046E4u;
    // 800046E4: .long   0x00000000
    // embedded data

label_800046E8:
    ctx->pc = 0x800046E8u;
    // 800046E8: .long   0x00000000
    // embedded data

label_800046EC:
    ctx->pc = 0x800046ECu;
    // 800046EC: .long   0x00000000
    // embedded data

label_800046F0:
    ctx->pc = 0x800046F0u;
    // 800046F0: .long   0x00000000
    // embedded data

label_800046F4:
    ctx->pc = 0x800046F4u;
    // 800046F4: .long   0x00000000
    // embedded data

label_800046F8:
    ctx->pc = 0x800046F8u;
    // 800046F8: .long   0x00000000
    // embedded data

label_800046FC:
    ctx->pc = 0x800046FCu;
    // 800046FC: .long   0x00000000
    // embedded data

label_80004700:
    ctx->pc = 0x80004700u;
    // 80004700: .long   0x00000000
    // embedded data

label_80004704:
    ctx->pc = 0x80004704u;
    // 80004704: .long   0x00000000
    // embedded data

label_80004708:
    ctx->pc = 0x80004708u;
    // 80004708: .long   0x00000000
    // embedded data

label_8000470C:
    ctx->pc = 0x8000470Cu;
    // 8000470C: .long   0x00000000
    // embedded data

label_80004710:
    ctx->pc = 0x80004710u;
    // 80004710: .long   0x00000000
    // embedded data

label_80004714:
    ctx->pc = 0x80004714u;
    // 80004714: .long   0x00000000
    // embedded data

label_80004718:
    ctx->pc = 0x80004718u;
    // 80004718: .long   0x00000000
    // embedded data

label_8000471C:
    ctx->pc = 0x8000471Cu;
    // 8000471C: .long   0x00000000
    // embedded data

label_80004720:
    ctx->pc = 0x80004720u;
    // 80004720: .long   0x00000000
    // embedded data

label_80004724:
    ctx->pc = 0x80004724u;
    // 80004724: .long   0x00000000
    // embedded data

label_80004728:
    ctx->pc = 0x80004728u;
    // 80004728: .long   0x00000000
    // embedded data

label_8000472C:
    ctx->pc = 0x8000472Cu;
    // 8000472C: .long   0x00000000
    // embedded data

label_80004730:
    ctx->pc = 0x80004730u;
    // 80004730: .long   0x00000000
    // embedded data

label_80004734:
    ctx->pc = 0x80004734u;
    // 80004734: .long   0x00000000
    // embedded data

label_80004738:
    ctx->pc = 0x80004738u;
    // 80004738: .long   0x00000000
    // embedded data

label_8000473C:
    ctx->pc = 0x8000473Cu;
    // 8000473C: .long   0x00000000
    // embedded data

label_80004740:
    ctx->pc = 0x80004740u;
    // 80004740: .long   0x00000000
    // embedded data

label_80004744:
    ctx->pc = 0x80004744u;
    // 80004744: .long   0x00000000
    // embedded data

label_80004748:
    ctx->pc = 0x80004748u;
    // 80004748: .long   0x00000000
    // embedded data

label_8000474C:
    ctx->pc = 0x8000474Cu;
    // 8000474C: .long   0x00000000
    // embedded data

label_80004750:
    ctx->pc = 0x80004750u;
    // 80004750: .long   0x00000000
    // embedded data

label_80004754:
    ctx->pc = 0x80004754u;
    // 80004754: .long   0x00000000
    // embedded data

label_80004758:
    ctx->pc = 0x80004758u;
    // 80004758: .long   0x00000000
    // embedded data

label_8000475C:
    ctx->pc = 0x8000475Cu;
    // 8000475C: .long   0x00000000
    // embedded data

label_80004760:
    ctx->pc = 0x80004760u;
    // 80004760: .long   0x00000000
    // embedded data

label_80004764:
    ctx->pc = 0x80004764u;
    // 80004764: .long   0x00000000
    // embedded data

label_80004768:
    ctx->pc = 0x80004768u;
    // 80004768: .long   0x00000000
    // embedded data

label_8000476C:
    ctx->pc = 0x8000476Cu;
    // 8000476C: .long   0x00000000
    // embedded data

label_80004770:
    ctx->pc = 0x80004770u;
    // 80004770: .long   0x00000000
    // embedded data

label_80004774:
    ctx->pc = 0x80004774u;
    // 80004774: .long   0x00000000
    // embedded data

label_80004778:
    ctx->pc = 0x80004778u;
    // 80004778: .long   0x00000000
    // embedded data

label_8000477C:
    ctx->pc = 0x8000477Cu;
    // 8000477C: .long   0x00000000
    // embedded data

label_80004780:
    ctx->pc = 0x80004780u;
    // 80004780: .long   0x00000000
    // embedded data

label_80004784:
    ctx->pc = 0x80004784u;
    // 80004784: .long   0x00000000
    // embedded data

label_80004788:
    ctx->pc = 0x80004788u;
    // 80004788: .long   0x00000000
    // embedded data

label_8000478C:
    ctx->pc = 0x8000478Cu;
    // 8000478C: .long   0x00000000
    // embedded data

label_80004790:
    ctx->pc = 0x80004790u;
    // 80004790: .long   0x00000000
    // embedded data

label_80004794:
    ctx->pc = 0x80004794u;
    // 80004794: .long   0x00000000
    // embedded data

label_80004798:
    ctx->pc = 0x80004798u;
    // 80004798: .long   0x00000000
    // embedded data

label_8000479C:
    ctx->pc = 0x8000479Cu;
    // 8000479C: .long   0x00000000
    // embedded data

label_800047A0:
    ctx->pc = 0x800047A0u;
    // 800047A0: .long   0x00000000
    // embedded data

label_800047A4:
    ctx->pc = 0x800047A4u;
    // 800047A4: .long   0x00000000
    // embedded data

label_800047A8:
    ctx->pc = 0x800047A8u;
    // 800047A8: .long   0x00000000
    // embedded data

label_800047AC:
    ctx->pc = 0x800047ACu;
    // 800047AC: .long   0x00000000
    // embedded data

label_800047B0:
    ctx->pc = 0x800047B0u;
    // 800047B0: .long   0x00000000
    // embedded data

label_800047B4:
    ctx->pc = 0x800047B4u;
    // 800047B4: .long   0x00000000
    // embedded data

label_800047B8:
    ctx->pc = 0x800047B8u;
    // 800047B8: .long   0x00000000
    // embedded data

label_800047BC:
    ctx->pc = 0x800047BCu;
    // 800047BC: .long   0x00000000
    // embedded data

label_800047C0:
    ctx->pc = 0x800047C0u;
    // 800047C0: .long   0x00000000
    // embedded data

label_800047C4:
    ctx->pc = 0x800047C4u;
    // 800047C4: .long   0x00000000
    // embedded data

label_800047C8:
    ctx->pc = 0x800047C8u;
    // 800047C8: .long   0x00000000
    // embedded data

label_800047CC:
    ctx->pc = 0x800047CCu;
    // 800047CC: .long   0x00000000
    // embedded data

label_800047D0:
    ctx->pc = 0x800047D0u;
    // 800047D0: .long   0x00000000
    // embedded data

label_800047D4:
    ctx->pc = 0x800047D4u;
    // 800047D4: .long   0x00000000
    // embedded data

label_800047D8:
    ctx->pc = 0x800047D8u;
    // 800047D8: .long   0x00000000
    // embedded data

label_800047DC:
    ctx->pc = 0x800047DCu;
    // 800047DC: .long   0x00000000
    // embedded data

label_800047E0:
    ctx->pc = 0x800047E0u;
    // 800047E0: .long   0x00000000
    // embedded data

label_800047E4:
    ctx->pc = 0x800047E4u;
    // 800047E4: .long   0x00000000
    // embedded data

label_800047E8:
    ctx->pc = 0x800047E8u;
    // 800047E8: .long   0x00000000
    // embedded data

label_800047EC:
    ctx->pc = 0x800047ECu;
    // 800047EC: .long   0x00000000
    // embedded data

label_800047F0:
    ctx->pc = 0x800047F0u;
    // 800047F0: .long   0x00000000
    // embedded data

label_800047F4:
    ctx->pc = 0x800047F4u;
    // 800047F4: .long   0x00000000
    // embedded data

label_800047F8:
    ctx->pc = 0x800047F8u;
    // 800047F8: .long   0x00000000
    // embedded data

label_800047FC:
    ctx->pc = 0x800047FCu;
    // 800047FC: .long   0x00000000
    // embedded data

label_80004800:
    ctx->pc = 0x80004800u;
    // 80004800: .long   0x00000000
    // embedded data

label_80004804:
    ctx->pc = 0x80004804u;
    // 80004804: .long   0x00000000
    // embedded data

label_80004808:
    ctx->pc = 0x80004808u;
    // 80004808: .long   0x00000000
    // embedded data

label_8000480C:
    ctx->pc = 0x8000480Cu;
    // 8000480C: .long   0x00000000
    // embedded data

label_80004810:
    ctx->pc = 0x80004810u;
    // 80004810: .long   0x00000000
    // embedded data

label_80004814:
    ctx->pc = 0x80004814u;
    // 80004814: .long   0x00000000
    // embedded data

label_80004818:
    ctx->pc = 0x80004818u;
    // 80004818: .long   0x00000000
    // embedded data

label_8000481C:
    ctx->pc = 0x8000481Cu;
    // 8000481C: .long   0x00000000
    // embedded data

label_80004820:
    ctx->pc = 0x80004820u;
    // 80004820: .long   0x00000000
    // embedded data

label_80004824:
    ctx->pc = 0x80004824u;
    // 80004824: .long   0x00000000
    // embedded data

label_80004828:
    ctx->pc = 0x80004828u;
    // 80004828: .long   0x00000000
    // embedded data

label_8000482C:
    ctx->pc = 0x8000482Cu;
    // 8000482C: .long   0x00000000
    // embedded data

label_80004830:
    ctx->pc = 0x80004830u;
    // 80004830: .long   0x00000000
    // embedded data

label_80004834:
    ctx->pc = 0x80004834u;
    // 80004834: .long   0x00000000
    // embedded data

label_80004838:
    ctx->pc = 0x80004838u;
    // 80004838: .long   0x00000000
    // embedded data

label_8000483C:
    ctx->pc = 0x8000483Cu;
    // 8000483C: .long   0x00000000
    // embedded data

label_80004840:
    ctx->pc = 0x80004840u;
    // 80004840: .long   0x00000000
    // embedded data

label_80004844:
    ctx->pc = 0x80004844u;
    // 80004844: .long   0x00000000
    // embedded data

label_80004848:
    ctx->pc = 0x80004848u;
    // 80004848: .long   0x00000000
    // embedded data

label_8000484C:
    ctx->pc = 0x8000484Cu;
    // 8000484C: .long   0x00000000
    // embedded data

label_80004850:
    ctx->pc = 0x80004850u;
    // 80004850: .long   0x00000000
    // embedded data

label_80004854:
    ctx->pc = 0x80004854u;
    // 80004854: .long   0x00000000
    // embedded data

label_80004858:
    ctx->pc = 0x80004858u;
    // 80004858: .long   0x00000000
    // embedded data

label_8000485C:
    ctx->pc = 0x8000485Cu;
    // 8000485C: .long   0x00000000
    // embedded data

label_80004860:
    ctx->pc = 0x80004860u;
    // 80004860: .long   0x00000000
    // embedded data

label_80004864:
    ctx->pc = 0x80004864u;
    // 80004864: .long   0x00000000
    // embedded data

label_80004868:
    ctx->pc = 0x80004868u;
    // 80004868: .long   0x00000000
    // embedded data

label_8000486C:
    ctx->pc = 0x8000486Cu;
    // 8000486C: .long   0x00000000
    // embedded data

label_80004870:
    ctx->pc = 0x80004870u;
    // 80004870: .long   0x00000000
    // embedded data

label_80004874:
    ctx->pc = 0x80004874u;
    // 80004874: .long   0x00000000
    // embedded data

label_80004878:
    ctx->pc = 0x80004878u;
    // 80004878: .long   0x00000000
    // embedded data

label_8000487C:
    ctx->pc = 0x8000487Cu;
    // 8000487C: .long   0x00000000
    // embedded data

label_80004880:
    ctx->pc = 0x80004880u;
    // 80004880: .long   0x00000000
    // embedded data

label_80004884:
    ctx->pc = 0x80004884u;
    // 80004884: .long   0x00000000
    // embedded data

label_80004888:
    ctx->pc = 0x80004888u;
    // 80004888: .long   0x00000000
    // embedded data

label_8000488C:
    ctx->pc = 0x8000488Cu;
    // 8000488C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000488Cu);
    return;

label_80004890:
    ctx->pc = 0x80004890u;
    // 80004890: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004890u);
    return;

label_80004894:
    ctx->pc = 0x80004894u;
    // 80004894: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004894u);
    return;

label_80004898:
    ctx->pc = 0x80004898u;
    ctx->downcount -= 13;
    // 80004898: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_8000489C:
    ctx->pc = 0x8000489Cu;
    // 8000489C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800048A0:
    ctx->pc = 0x800048A0u;
    // 800048A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800048A4:
    ctx->pc = 0x800048A4u;
    // 800048A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800048A8:
    ctx->pc = 0x800048A8u;
    // 800048A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800048AC:
    ctx->pc = 0x800048ACu;
    // 800048AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800048B0:
    ctx->pc = 0x800048B0u;
    // 800048B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800048B4:
    ctx->pc = 0x800048B4u;
    // 800048B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800048B8:
    ctx->pc = 0x800048B8u;
    // 800048B8: li      r3, 5632
    ctx->gpr[3] = (u32)(s32)(5632);

label_800048BC:
    ctx->pc = 0x800048BCu;
    // 800048BC: rfi
    ppc_rfi(ctx, 0x800048BCu);
    return;

label_800048C0:
    ctx->pc = 0x800048C0u;
    // 800048C0: .long   0x00000000
    // embedded data

label_800048C4:
    ctx->pc = 0x800048C4u;
    // 800048C4: .long   0x00000000
    // embedded data

label_800048C8:
    ctx->pc = 0x800048C8u;
    // 800048C8: .long   0x00000000
    // embedded data

label_800048CC:
    ctx->pc = 0x800048CCu;
    // 800048CC: .long   0x00000000
    // embedded data

label_800048D0:
    ctx->pc = 0x800048D0u;
    // 800048D0: .long   0x00000000
    // embedded data

label_800048D4:
    ctx->pc = 0x800048D4u;
    // 800048D4: .long   0x00000000
    // embedded data

label_800048D8:
    ctx->pc = 0x800048D8u;
    // 800048D8: .long   0x00000000
    // embedded data

label_800048DC:
    ctx->pc = 0x800048DCu;
    // 800048DC: .long   0x00000000
    // embedded data

label_800048E0:
    ctx->pc = 0x800048E0u;
    // 800048E0: .long   0x00000000
    // embedded data

label_800048E4:
    ctx->pc = 0x800048E4u;
    // 800048E4: .long   0x00000000
    // embedded data

label_800048E8:
    ctx->pc = 0x800048E8u;
    // 800048E8: .long   0x00000000
    // embedded data

label_800048EC:
    ctx->pc = 0x800048ECu;
    // 800048EC: .long   0x00000000
    // embedded data

label_800048F0:
    ctx->pc = 0x800048F0u;
    // 800048F0: .long   0x00000000
    // embedded data

label_800048F4:
    ctx->pc = 0x800048F4u;
    // 800048F4: .long   0x00000000
    // embedded data

label_800048F8:
    ctx->pc = 0x800048F8u;
    // 800048F8: .long   0x00000000
    // embedded data

label_800048FC:
    ctx->pc = 0x800048FCu;
    // 800048FC: .long   0x00000000
    // embedded data

label_80004900:
    ctx->pc = 0x80004900u;
    // 80004900: .long   0x00000000
    // embedded data

label_80004904:
    ctx->pc = 0x80004904u;
    // 80004904: .long   0x00000000
    // embedded data

label_80004908:
    ctx->pc = 0x80004908u;
    // 80004908: .long   0x00000000
    // embedded data

label_8000490C:
    ctx->pc = 0x8000490Cu;
    // 8000490C: .long   0x00000000
    // embedded data

label_80004910:
    ctx->pc = 0x80004910u;
    // 80004910: .long   0x00000000
    // embedded data

label_80004914:
    ctx->pc = 0x80004914u;
    // 80004914: .long   0x00000000
    // embedded data

label_80004918:
    ctx->pc = 0x80004918u;
    // 80004918: .long   0x00000000
    // embedded data

label_8000491C:
    ctx->pc = 0x8000491Cu;
    // 8000491C: .long   0x00000000
    // embedded data

label_80004920:
    ctx->pc = 0x80004920u;
    // 80004920: .long   0x00000000
    // embedded data

label_80004924:
    ctx->pc = 0x80004924u;
    // 80004924: .long   0x00000000
    // embedded data

label_80004928:
    ctx->pc = 0x80004928u;
    // 80004928: .long   0x00000000
    // embedded data

label_8000492C:
    ctx->pc = 0x8000492Cu;
    // 8000492C: .long   0x00000000
    // embedded data

label_80004930:
    ctx->pc = 0x80004930u;
    // 80004930: .long   0x00000000
    // embedded data

label_80004934:
    ctx->pc = 0x80004934u;
    // 80004934: .long   0x00000000
    // embedded data

label_80004938:
    ctx->pc = 0x80004938u;
    // 80004938: .long   0x00000000
    // embedded data

label_8000493C:
    ctx->pc = 0x8000493Cu;
    // 8000493C: .long   0x00000000
    // embedded data

label_80004940:
    ctx->pc = 0x80004940u;
    // 80004940: .long   0x00000000
    // embedded data

label_80004944:
    ctx->pc = 0x80004944u;
    // 80004944: .long   0x00000000
    // embedded data

label_80004948:
    ctx->pc = 0x80004948u;
    // 80004948: .long   0x00000000
    // embedded data

label_8000494C:
    ctx->pc = 0x8000494Cu;
    // 8000494C: .long   0x00000000
    // embedded data

label_80004950:
    ctx->pc = 0x80004950u;
    // 80004950: .long   0x00000000
    // embedded data

label_80004954:
    ctx->pc = 0x80004954u;
    // 80004954: .long   0x00000000
    // embedded data

label_80004958:
    ctx->pc = 0x80004958u;
    // 80004958: .long   0x00000000
    // embedded data

label_8000495C:
    ctx->pc = 0x8000495Cu;
    // 8000495C: .long   0x00000000
    // embedded data

label_80004960:
    ctx->pc = 0x80004960u;
    // 80004960: .long   0x00000000
    // embedded data

label_80004964:
    ctx->pc = 0x80004964u;
    // 80004964: .long   0x00000000
    // embedded data

label_80004968:
    ctx->pc = 0x80004968u;
    // 80004968: .long   0x00000000
    // embedded data

label_8000496C:
    ctx->pc = 0x8000496Cu;
    // 8000496C: .long   0x00000000
    // embedded data

label_80004970:
    ctx->pc = 0x80004970u;
    // 80004970: .long   0x00000000
    // embedded data

label_80004974:
    ctx->pc = 0x80004974u;
    // 80004974: .long   0x00000000
    // embedded data

label_80004978:
    ctx->pc = 0x80004978u;
    // 80004978: .long   0x00000000
    // embedded data

label_8000497C:
    ctx->pc = 0x8000497Cu;
    // 8000497C: .long   0x00000000
    // embedded data

label_80004980:
    ctx->pc = 0x80004980u;
    // 80004980: .long   0x00000000
    // embedded data

label_80004984:
    ctx->pc = 0x80004984u;
    // 80004984: .long   0x00000000
    // embedded data

label_80004988:
    ctx->pc = 0x80004988u;
    // 80004988: .long   0x00000000
    // embedded data

label_8000498C:
    ctx->pc = 0x8000498Cu;
    // 8000498C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000498Cu);
    return;

label_80004990:
    ctx->pc = 0x80004990u;
    // 80004990: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004990u);
    return;

label_80004994:
    ctx->pc = 0x80004994u;
    // 80004994: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004994u);
    return;

label_80004998:
    ctx->pc = 0x80004998u;
    ctx->downcount -= 13;
    // 80004998: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_8000499C:
    ctx->pc = 0x8000499Cu;
    // 8000499C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800049A0:
    ctx->pc = 0x800049A0u;
    // 800049A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800049A4:
    ctx->pc = 0x800049A4u;
    // 800049A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800049A8:
    ctx->pc = 0x800049A8u;
    // 800049A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800049AC:
    ctx->pc = 0x800049ACu;
    // 800049AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800049B0:
    ctx->pc = 0x800049B0u;
    // 800049B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800049B4:
    ctx->pc = 0x800049B4u;
    // 800049B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800049B8:
    ctx->pc = 0x800049B8u;
    // 800049B8: li      r3, 5888
    ctx->gpr[3] = (u32)(s32)(5888);

label_800049BC:
    ctx->pc = 0x800049BCu;
    // 800049BC: rfi
    ppc_rfi(ctx, 0x800049BCu);
    return;

label_800049C0:
    ctx->pc = 0x800049C0u;
    // 800049C0: .long   0x00000000
    // embedded data

label_800049C4:
    ctx->pc = 0x800049C4u;
    // 800049C4: .long   0x00000000
    // embedded data

label_800049C8:
    ctx->pc = 0x800049C8u;
    // 800049C8: .long   0x00000000
    // embedded data

label_800049CC:
    ctx->pc = 0x800049CCu;
    // 800049CC: .long   0x00000000
    // embedded data

label_800049D0:
    ctx->pc = 0x800049D0u;
    // 800049D0: .long   0x00000000
    // embedded data

label_800049D4:
    ctx->pc = 0x800049D4u;
    // 800049D4: .long   0x00000000
    // embedded data

label_800049D8:
    ctx->pc = 0x800049D8u;
    // 800049D8: .long   0x00000000
    // embedded data

label_800049DC:
    ctx->pc = 0x800049DCu;
    // 800049DC: .long   0x00000000
    // embedded data

label_800049E0:
    ctx->pc = 0x800049E0u;
    // 800049E0: .long   0x00000000
    // embedded data

label_800049E4:
    ctx->pc = 0x800049E4u;
    // 800049E4: .long   0x00000000
    // embedded data

label_800049E8:
    ctx->pc = 0x800049E8u;
    // 800049E8: .long   0x00000000
    // embedded data

label_800049EC:
    ctx->pc = 0x800049ECu;
    // 800049EC: .long   0x00000000
    // embedded data

label_800049F0:
    ctx->pc = 0x800049F0u;
    // 800049F0: .long   0x00000000
    // embedded data

label_800049F4:
    ctx->pc = 0x800049F4u;
    // 800049F4: .long   0x00000000
    // embedded data

label_800049F8:
    ctx->pc = 0x800049F8u;
    // 800049F8: .long   0x00000000
    // embedded data

label_800049FC:
    ctx->pc = 0x800049FCu;
    // 800049FC: .long   0x00000000
    // embedded data

label_80004A00:
    ctx->pc = 0x80004A00u;
    // 80004A00: .long   0x00000000
    // embedded data

label_80004A04:
    ctx->pc = 0x80004A04u;
    // 80004A04: .long   0x00000000
    // embedded data

label_80004A08:
    ctx->pc = 0x80004A08u;
    // 80004A08: .long   0x00000000
    // embedded data

label_80004A0C:
    ctx->pc = 0x80004A0Cu;
    // 80004A0C: .long   0x00000000
    // embedded data

label_80004A10:
    ctx->pc = 0x80004A10u;
    // 80004A10: .long   0x00000000
    // embedded data

label_80004A14:
    ctx->pc = 0x80004A14u;
    // 80004A14: .long   0x00000000
    // embedded data

label_80004A18:
    ctx->pc = 0x80004A18u;
    // 80004A18: .long   0x00000000
    // embedded data

label_80004A1C:
    ctx->pc = 0x80004A1Cu;
    // 80004A1C: .long   0x00000000
    // embedded data

label_80004A20:
    ctx->pc = 0x80004A20u;
    // 80004A20: .long   0x00000000
    // embedded data

label_80004A24:
    ctx->pc = 0x80004A24u;
    // 80004A24: .long   0x00000000
    // embedded data

label_80004A28:
    ctx->pc = 0x80004A28u;
    // 80004A28: .long   0x00000000
    // embedded data

label_80004A2C:
    ctx->pc = 0x80004A2Cu;
    // 80004A2C: .long   0x00000000
    // embedded data

label_80004A30:
    ctx->pc = 0x80004A30u;
    // 80004A30: .long   0x00000000
    // embedded data

label_80004A34:
    ctx->pc = 0x80004A34u;
    // 80004A34: .long   0x00000000
    // embedded data

label_80004A38:
    ctx->pc = 0x80004A38u;
    // 80004A38: .long   0x00000000
    // embedded data

label_80004A3C:
    ctx->pc = 0x80004A3Cu;
    // 80004A3C: .long   0x00000000
    // embedded data

label_80004A40:
    ctx->pc = 0x80004A40u;
    // 80004A40: .long   0x00000000
    // embedded data

label_80004A44:
    ctx->pc = 0x80004A44u;
    // 80004A44: .long   0x00000000
    // embedded data

label_80004A48:
    ctx->pc = 0x80004A48u;
    // 80004A48: .long   0x00000000
    // embedded data

label_80004A4C:
    ctx->pc = 0x80004A4Cu;
    // 80004A4C: .long   0x00000000
    // embedded data

label_80004A50:
    ctx->pc = 0x80004A50u;
    // 80004A50: .long   0x00000000
    // embedded data

label_80004A54:
    ctx->pc = 0x80004A54u;
    // 80004A54: .long   0x00000000
    // embedded data

label_80004A58:
    ctx->pc = 0x80004A58u;
    // 80004A58: .long   0x00000000
    // embedded data

label_80004A5C:
    ctx->pc = 0x80004A5Cu;
    // 80004A5C: .long   0x00000000
    // embedded data

label_80004A60:
    ctx->pc = 0x80004A60u;
    // 80004A60: .long   0x00000000
    // embedded data

label_80004A64:
    ctx->pc = 0x80004A64u;
    // 80004A64: .long   0x00000000
    // embedded data

label_80004A68:
    ctx->pc = 0x80004A68u;
    // 80004A68: .long   0x00000000
    // embedded data

label_80004A6C:
    ctx->pc = 0x80004A6Cu;
    // 80004A6C: .long   0x00000000
    // embedded data

label_80004A70:
    ctx->pc = 0x80004A70u;
    // 80004A70: .long   0x00000000
    // embedded data

label_80004A74:
    ctx->pc = 0x80004A74u;
    // 80004A74: .long   0x00000000
    // embedded data

label_80004A78:
    ctx->pc = 0x80004A78u;
    // 80004A78: .long   0x00000000
    // embedded data

label_80004A7C:
    ctx->pc = 0x80004A7Cu;
    // 80004A7C: .long   0x00000000
    // embedded data

label_80004A80:
    ctx->pc = 0x80004A80u;
    // 80004A80: .long   0x00000000
    // embedded data

label_80004A84:
    ctx->pc = 0x80004A84u;
    // 80004A84: .long   0x00000000
    // embedded data

label_80004A88:
    ctx->pc = 0x80004A88u;
    // 80004A88: .long   0x00000000
    // embedded data

label_80004A8C:
    ctx->pc = 0x80004A8Cu;
    // 80004A8C: .long   0x00000000
    // embedded data

label_80004A90:
    ctx->pc = 0x80004A90u;
    // 80004A90: .long   0x00000000
    // embedded data

label_80004A94:
    ctx->pc = 0x80004A94u;
    // 80004A94: .long   0x00000000
    // embedded data

label_80004A98:
    ctx->pc = 0x80004A98u;
    // 80004A98: .long   0x00000000
    // embedded data

label_80004A9C:
    ctx->pc = 0x80004A9Cu;
    // 80004A9C: .long   0x00000000
    // embedded data

label_80004AA0:
    ctx->pc = 0x80004AA0u;
    // 80004AA0: .long   0x00000000
    // embedded data

label_80004AA4:
    ctx->pc = 0x80004AA4u;
    // 80004AA4: .long   0x00000000
    // embedded data

label_80004AA8:
    ctx->pc = 0x80004AA8u;
    // 80004AA8: .long   0x00000000
    // embedded data

label_80004AAC:
    ctx->pc = 0x80004AACu;
    // 80004AAC: .long   0x00000000
    // embedded data

label_80004AB0:
    ctx->pc = 0x80004AB0u;
    // 80004AB0: .long   0x00000000
    // embedded data

label_80004AB4:
    ctx->pc = 0x80004AB4u;
    // 80004AB4: .long   0x00000000
    // embedded data

label_80004AB8:
    ctx->pc = 0x80004AB8u;
    // 80004AB8: .long   0x00000000
    // embedded data

label_80004ABC:
    ctx->pc = 0x80004ABCu;
    // 80004ABC: .long   0x00000000
    // embedded data

label_80004AC0:
    ctx->pc = 0x80004AC0u;
    // 80004AC0: .long   0x00000000
    // embedded data

label_80004AC4:
    ctx->pc = 0x80004AC4u;
    // 80004AC4: .long   0x00000000
    // embedded data

label_80004AC8:
    ctx->pc = 0x80004AC8u;
    // 80004AC8: .long   0x00000000
    // embedded data

label_80004ACC:
    ctx->pc = 0x80004ACCu;
    // 80004ACC: .long   0x00000000
    // embedded data

label_80004AD0:
    ctx->pc = 0x80004AD0u;
    // 80004AD0: .long   0x00000000
    // embedded data

label_80004AD4:
    ctx->pc = 0x80004AD4u;
    // 80004AD4: .long   0x00000000
    // embedded data

label_80004AD8:
    ctx->pc = 0x80004AD8u;
    // 80004AD8: .long   0x00000000
    // embedded data

label_80004ADC:
    ctx->pc = 0x80004ADCu;
    // 80004ADC: .long   0x00000000
    // embedded data

label_80004AE0:
    ctx->pc = 0x80004AE0u;
    // 80004AE0: .long   0x00000000
    // embedded data

label_80004AE4:
    ctx->pc = 0x80004AE4u;
    // 80004AE4: .long   0x00000000
    // embedded data

label_80004AE8:
    ctx->pc = 0x80004AE8u;
    // 80004AE8: .long   0x00000000
    // embedded data

label_80004AEC:
    ctx->pc = 0x80004AECu;
    // 80004AEC: .long   0x00000000
    // embedded data

label_80004AF0:
    ctx->pc = 0x80004AF0u;
    // 80004AF0: .long   0x00000000
    // embedded data

label_80004AF4:
    ctx->pc = 0x80004AF4u;
    // 80004AF4: .long   0x00000000
    // embedded data

label_80004AF8:
    ctx->pc = 0x80004AF8u;
    // 80004AF8: .long   0x00000000
    // embedded data

label_80004AFC:
    ctx->pc = 0x80004AFCu;
    // 80004AFC: .long   0x00000000
    // embedded data

label_80004B00:
    ctx->pc = 0x80004B00u;
    // 80004B00: .long   0x00000000
    // embedded data

label_80004B04:
    ctx->pc = 0x80004B04u;
    // 80004B04: .long   0x00000000
    // embedded data

label_80004B08:
    ctx->pc = 0x80004B08u;
    // 80004B08: .long   0x00000000
    // embedded data

label_80004B0C:
    ctx->pc = 0x80004B0Cu;
    // 80004B0C: .long   0x00000000
    // embedded data

label_80004B10:
    ctx->pc = 0x80004B10u;
    // 80004B10: .long   0x00000000
    // embedded data

label_80004B14:
    ctx->pc = 0x80004B14u;
    // 80004B14: .long   0x00000000
    // embedded data

label_80004B18:
    ctx->pc = 0x80004B18u;
    // 80004B18: .long   0x00000000
    // embedded data

label_80004B1C:
    ctx->pc = 0x80004B1Cu;
    // 80004B1C: .long   0x00000000
    // embedded data

label_80004B20:
    ctx->pc = 0x80004B20u;
    // 80004B20: .long   0x00000000
    // embedded data

label_80004B24:
    ctx->pc = 0x80004B24u;
    // 80004B24: .long   0x00000000
    // embedded data

label_80004B28:
    ctx->pc = 0x80004B28u;
    // 80004B28: .long   0x00000000
    // embedded data

label_80004B2C:
    ctx->pc = 0x80004B2Cu;
    // 80004B2C: .long   0x00000000
    // embedded data

label_80004B30:
    ctx->pc = 0x80004B30u;
    // 80004B30: .long   0x00000000
    // embedded data

label_80004B34:
    ctx->pc = 0x80004B34u;
    // 80004B34: .long   0x00000000
    // embedded data

label_80004B38:
    ctx->pc = 0x80004B38u;
    // 80004B38: .long   0x00000000
    // embedded data

label_80004B3C:
    ctx->pc = 0x80004B3Cu;
    // 80004B3C: .long   0x00000000
    // embedded data

label_80004B40:
    ctx->pc = 0x80004B40u;
    // 80004B40: .long   0x00000000
    // embedded data

label_80004B44:
    ctx->pc = 0x80004B44u;
    // 80004B44: .long   0x00000000
    // embedded data

label_80004B48:
    ctx->pc = 0x80004B48u;
    // 80004B48: .long   0x00000000
    // embedded data

label_80004B4C:
    ctx->pc = 0x80004B4Cu;
    // 80004B4C: .long   0x00000000
    // embedded data

label_80004B50:
    ctx->pc = 0x80004B50u;
    // 80004B50: .long   0x00000000
    // embedded data

label_80004B54:
    ctx->pc = 0x80004B54u;
    // 80004B54: .long   0x00000000
    // embedded data

label_80004B58:
    ctx->pc = 0x80004B58u;
    // 80004B58: .long   0x00000000
    // embedded data

label_80004B5C:
    ctx->pc = 0x80004B5Cu;
    // 80004B5C: .long   0x00000000
    // embedded data

label_80004B60:
    ctx->pc = 0x80004B60u;
    // 80004B60: .long   0x00000000
    // embedded data

label_80004B64:
    ctx->pc = 0x80004B64u;
    // 80004B64: .long   0x00000000
    // embedded data

label_80004B68:
    ctx->pc = 0x80004B68u;
    // 80004B68: .long   0x00000000
    // embedded data

label_80004B6C:
    ctx->pc = 0x80004B6Cu;
    // 80004B6C: .long   0x00000000
    // embedded data

label_80004B70:
    ctx->pc = 0x80004B70u;
    // 80004B70: .long   0x00000000
    // embedded data

label_80004B74:
    ctx->pc = 0x80004B74u;
    // 80004B74: .long   0x00000000
    // embedded data

label_80004B78:
    ctx->pc = 0x80004B78u;
    // 80004B78: .long   0x00000000
    // embedded data

label_80004B7C:
    ctx->pc = 0x80004B7Cu;
    // 80004B7C: .long   0x00000000
    // embedded data

label_80004B80:
    ctx->pc = 0x80004B80u;
    // 80004B80: .long   0x00000000
    // embedded data

label_80004B84:
    ctx->pc = 0x80004B84u;
    // 80004B84: .long   0x00000000
    // embedded data

label_80004B88:
    ctx->pc = 0x80004B88u;
    // 80004B88: .long   0x00000000
    // embedded data

label_80004B8C:
    ctx->pc = 0x80004B8Cu;
    // 80004B8C: .long   0x00000000
    // embedded data

label_80004B90:
    ctx->pc = 0x80004B90u;
    // 80004B90: .long   0x00000000
    // embedded data

label_80004B94:
    ctx->pc = 0x80004B94u;
    // 80004B94: .long   0x00000000
    // embedded data

label_80004B98:
    ctx->pc = 0x80004B98u;
    // 80004B98: .long   0x00000000
    // embedded data

label_80004B9C:
    ctx->pc = 0x80004B9Cu;
    // 80004B9C: .long   0x00000000
    // embedded data

label_80004BA0:
    ctx->pc = 0x80004BA0u;
    // 80004BA0: .long   0x00000000
    // embedded data

label_80004BA4:
    ctx->pc = 0x80004BA4u;
    // 80004BA4: .long   0x00000000
    // embedded data

label_80004BA8:
    ctx->pc = 0x80004BA8u;
    // 80004BA8: .long   0x00000000
    // embedded data

label_80004BAC:
    ctx->pc = 0x80004BACu;
    // 80004BAC: .long   0x00000000
    // embedded data

label_80004BB0:
    ctx->pc = 0x80004BB0u;
    // 80004BB0: .long   0x00000000
    // embedded data

label_80004BB4:
    ctx->pc = 0x80004BB4u;
    // 80004BB4: .long   0x00000000
    // embedded data

label_80004BB8:
    ctx->pc = 0x80004BB8u;
    // 80004BB8: .long   0x00000000
    // embedded data

label_80004BBC:
    ctx->pc = 0x80004BBCu;
    // 80004BBC: .long   0x00000000
    // embedded data

label_80004BC0:
    ctx->pc = 0x80004BC0u;
    // 80004BC0: .long   0x00000000
    // embedded data

label_80004BC4:
    ctx->pc = 0x80004BC4u;
    // 80004BC4: .long   0x00000000
    // embedded data

label_80004BC8:
    ctx->pc = 0x80004BC8u;
    // 80004BC8: .long   0x00000000
    // embedded data

label_80004BCC:
    ctx->pc = 0x80004BCCu;
    // 80004BCC: .long   0x00000000
    // embedded data

label_80004BD0:
    ctx->pc = 0x80004BD0u;
    // 80004BD0: .long   0x00000000
    // embedded data

label_80004BD4:
    ctx->pc = 0x80004BD4u;
    // 80004BD4: .long   0x00000000
    // embedded data

label_80004BD8:
    ctx->pc = 0x80004BD8u;
    // 80004BD8: .long   0x00000000
    // embedded data

label_80004BDC:
    ctx->pc = 0x80004BDCu;
    // 80004BDC: .long   0x00000000
    // embedded data

label_80004BE0:
    ctx->pc = 0x80004BE0u;
    // 80004BE0: .long   0x00000000
    // embedded data

label_80004BE4:
    ctx->pc = 0x80004BE4u;
    // 80004BE4: .long   0x00000000
    // embedded data

label_80004BE8:
    ctx->pc = 0x80004BE8u;
    // 80004BE8: .long   0x00000000
    // embedded data

label_80004BEC:
    ctx->pc = 0x80004BECu;
    // 80004BEC: .long   0x00000000
    // embedded data

label_80004BF0:
    ctx->pc = 0x80004BF0u;
    // 80004BF0: .long   0x00000000
    // embedded data

label_80004BF4:
    ctx->pc = 0x80004BF4u;
    // 80004BF4: .long   0x00000000
    // embedded data

label_80004BF8:
    ctx->pc = 0x80004BF8u;
    // 80004BF8: .long   0x00000000
    // embedded data

label_80004BFC:
    ctx->pc = 0x80004BFCu;
    // 80004BFC: .long   0x00000000
    // embedded data

label_80004C00:
    ctx->pc = 0x80004C00u;
    // 80004C00: .long   0x00000000
    // embedded data

label_80004C04:
    ctx->pc = 0x80004C04u;
    // 80004C04: .long   0x00000000
    // embedded data

label_80004C08:
    ctx->pc = 0x80004C08u;
    // 80004C08: .long   0x00000000
    // embedded data

label_80004C0C:
    ctx->pc = 0x80004C0Cu;
    // 80004C0C: .long   0x00000000
    // embedded data

label_80004C10:
    ctx->pc = 0x80004C10u;
    // 80004C10: .long   0x00000000
    // embedded data

label_80004C14:
    ctx->pc = 0x80004C14u;
    // 80004C14: .long   0x00000000
    // embedded data

label_80004C18:
    ctx->pc = 0x80004C18u;
    // 80004C18: .long   0x00000000
    // embedded data

label_80004C1C:
    ctx->pc = 0x80004C1Cu;
    // 80004C1C: .long   0x00000000
    // embedded data

label_80004C20:
    ctx->pc = 0x80004C20u;
    // 80004C20: .long   0x00000000
    // embedded data

label_80004C24:
    ctx->pc = 0x80004C24u;
    // 80004C24: .long   0x00000000
    // embedded data

label_80004C28:
    ctx->pc = 0x80004C28u;
    // 80004C28: .long   0x00000000
    // embedded data

label_80004C2C:
    ctx->pc = 0x80004C2Cu;
    // 80004C2C: .long   0x00000000
    // embedded data

label_80004C30:
    ctx->pc = 0x80004C30u;
    // 80004C30: .long   0x00000000
    // embedded data

label_80004C34:
    ctx->pc = 0x80004C34u;
    // 80004C34: .long   0x00000000
    // embedded data

label_80004C38:
    ctx->pc = 0x80004C38u;
    // 80004C38: .long   0x00000000
    // embedded data

label_80004C3C:
    ctx->pc = 0x80004C3Cu;
    // 80004C3C: .long   0x00000000
    // embedded data

label_80004C40:
    ctx->pc = 0x80004C40u;
    // 80004C40: .long   0x00000000
    // embedded data

label_80004C44:
    ctx->pc = 0x80004C44u;
    // 80004C44: .long   0x00000000
    // embedded data

label_80004C48:
    ctx->pc = 0x80004C48u;
    // 80004C48: .long   0x00000000
    // embedded data

label_80004C4C:
    ctx->pc = 0x80004C4Cu;
    // 80004C4C: .long   0x00000000
    // embedded data

label_80004C50:
    ctx->pc = 0x80004C50u;
    // 80004C50: .long   0x00000000
    // embedded data

label_80004C54:
    ctx->pc = 0x80004C54u;
    // 80004C54: .long   0x00000000
    // embedded data

label_80004C58:
    ctx->pc = 0x80004C58u;
    // 80004C58: .long   0x00000000
    // embedded data

label_80004C5C:
    ctx->pc = 0x80004C5Cu;
    // 80004C5C: .long   0x00000000
    // embedded data

label_80004C60:
    ctx->pc = 0x80004C60u;
    // 80004C60: .long   0x00000000
    // embedded data

label_80004C64:
    ctx->pc = 0x80004C64u;
    // 80004C64: .long   0x00000000
    // embedded data

label_80004C68:
    ctx->pc = 0x80004C68u;
    // 80004C68: .long   0x00000000
    // embedded data

label_80004C6C:
    ctx->pc = 0x80004C6Cu;
    // 80004C6C: .long   0x00000000
    // embedded data

label_80004C70:
    ctx->pc = 0x80004C70u;
    // 80004C70: .long   0x00000000
    // embedded data

label_80004C74:
    ctx->pc = 0x80004C74u;
    // 80004C74: .long   0x00000000
    // embedded data

label_80004C78:
    ctx->pc = 0x80004C78u;
    // 80004C78: .long   0x00000000
    // embedded data

label_80004C7C:
    ctx->pc = 0x80004C7Cu;
    // 80004C7C: .long   0x00000000
    // embedded data

label_80004C80:
    ctx->pc = 0x80004C80u;
    // 80004C80: .long   0x00000000
    // embedded data

label_80004C84:
    ctx->pc = 0x80004C84u;
    // 80004C84: .long   0x00000000
    // embedded data

label_80004C88:
    ctx->pc = 0x80004C88u;
    // 80004C88: .long   0x00000000
    // embedded data

label_80004C8C:
    ctx->pc = 0x80004C8Cu;
    // 80004C8C: .long   0x00000000
    // embedded data

label_80004C90:
    ctx->pc = 0x80004C90u;
    // 80004C90: .long   0x00000000
    // embedded data

label_80004C94:
    ctx->pc = 0x80004C94u;
    // 80004C94: .long   0x00000000
    // embedded data

label_80004C98:
    ctx->pc = 0x80004C98u;
    // 80004C98: .long   0x00000000
    // embedded data

label_80004C9C:
    ctx->pc = 0x80004C9Cu;
    // 80004C9C: .long   0x00000000
    // embedded data

label_80004CA0:
    ctx->pc = 0x80004CA0u;
    // 80004CA0: .long   0x00000000
    // embedded data

label_80004CA4:
    ctx->pc = 0x80004CA4u;
    // 80004CA4: .long   0x00000000
    // embedded data

label_80004CA8:
    ctx->pc = 0x80004CA8u;
    // 80004CA8: .long   0x00000000
    // embedded data

label_80004CAC:
    ctx->pc = 0x80004CACu;
    // 80004CAC: .long   0x00000000
    // embedded data

label_80004CB0:
    ctx->pc = 0x80004CB0u;
    // 80004CB0: .long   0x00000000
    // embedded data

label_80004CB4:
    ctx->pc = 0x80004CB4u;
    // 80004CB4: .long   0x00000000
    // embedded data

label_80004CB8:
    ctx->pc = 0x80004CB8u;
    // 80004CB8: .long   0x00000000
    // embedded data

label_80004CBC:
    ctx->pc = 0x80004CBCu;
    // 80004CBC: .long   0x00000000
    // embedded data

label_80004CC0:
    ctx->pc = 0x80004CC0u;
    // 80004CC0: .long   0x00000000
    // embedded data

label_80004CC4:
    ctx->pc = 0x80004CC4u;
    // 80004CC4: .long   0x00000000
    // embedded data

label_80004CC8:
    ctx->pc = 0x80004CC8u;
    // 80004CC8: .long   0x00000000
    // embedded data

label_80004CCC:
    ctx->pc = 0x80004CCCu;
    // 80004CCC: .long   0x00000000
    // embedded data

label_80004CD0:
    ctx->pc = 0x80004CD0u;
    // 80004CD0: .long   0x00000000
    // embedded data

label_80004CD4:
    ctx->pc = 0x80004CD4u;
    // 80004CD4: .long   0x00000000
    // embedded data

label_80004CD8:
    ctx->pc = 0x80004CD8u;
    // 80004CD8: .long   0x00000000
    // embedded data

label_80004CDC:
    ctx->pc = 0x80004CDCu;
    // 80004CDC: .long   0x00000000
    // embedded data

label_80004CE0:
    ctx->pc = 0x80004CE0u;
    // 80004CE0: .long   0x00000000
    // embedded data

label_80004CE4:
    ctx->pc = 0x80004CE4u;
    // 80004CE4: .long   0x00000000
    // embedded data

label_80004CE8:
    ctx->pc = 0x80004CE8u;
    // 80004CE8: .long   0x00000000
    // embedded data

label_80004CEC:
    ctx->pc = 0x80004CECu;
    // 80004CEC: .long   0x00000000
    // embedded data

label_80004CF0:
    ctx->pc = 0x80004CF0u;
    // 80004CF0: .long   0x00000000
    // embedded data

label_80004CF4:
    ctx->pc = 0x80004CF4u;
    // 80004CF4: .long   0x00000000
    // embedded data

label_80004CF8:
    ctx->pc = 0x80004CF8u;
    // 80004CF8: .long   0x00000000
    // embedded data

label_80004CFC:
    ctx->pc = 0x80004CFCu;
    // 80004CFC: .long   0x00000000
    // embedded data

label_80004D00:
    ctx->pc = 0x80004D00u;
    // 80004D00: .long   0x00000000
    // embedded data

label_80004D04:
    ctx->pc = 0x80004D04u;
    // 80004D04: .long   0x00000000
    // embedded data

label_80004D08:
    ctx->pc = 0x80004D08u;
    // 80004D08: .long   0x00000000
    // embedded data

label_80004D0C:
    ctx->pc = 0x80004D0Cu;
    // 80004D0C: .long   0x00000000
    // embedded data

label_80004D10:
    ctx->pc = 0x80004D10u;
    // 80004D10: .long   0x00000000
    // embedded data

label_80004D14:
    ctx->pc = 0x80004D14u;
    // 80004D14: .long   0x00000000
    // embedded data

label_80004D18:
    ctx->pc = 0x80004D18u;
    // 80004D18: .long   0x00000000
    // embedded data

label_80004D1C:
    ctx->pc = 0x80004D1Cu;
    // 80004D1C: .long   0x00000000
    // embedded data

label_80004D20:
    ctx->pc = 0x80004D20u;
    // 80004D20: .long   0x00000000
    // embedded data

label_80004D24:
    ctx->pc = 0x80004D24u;
    // 80004D24: .long   0x00000000
    // embedded data

label_80004D28:
    ctx->pc = 0x80004D28u;
    // 80004D28: .long   0x00000000
    // embedded data

label_80004D2C:
    ctx->pc = 0x80004D2Cu;
    // 80004D2C: .long   0x00000000
    // embedded data

label_80004D30:
    ctx->pc = 0x80004D30u;
    // 80004D30: .long   0x00000000
    // embedded data

label_80004D34:
    ctx->pc = 0x80004D34u;
    // 80004D34: .long   0x00000000
    // embedded data

label_80004D38:
    ctx->pc = 0x80004D38u;
    // 80004D38: .long   0x00000000
    // embedded data

label_80004D3C:
    ctx->pc = 0x80004D3Cu;
    // 80004D3C: .long   0x00000000
    // embedded data

label_80004D40:
    ctx->pc = 0x80004D40u;
    // 80004D40: .long   0x00000000
    // embedded data

label_80004D44:
    ctx->pc = 0x80004D44u;
    // 80004D44: .long   0x00000000
    // embedded data

label_80004D48:
    ctx->pc = 0x80004D48u;
    // 80004D48: .long   0x00000000
    // embedded data

label_80004D4C:
    ctx->pc = 0x80004D4Cu;
    // 80004D4C: .long   0x00000000
    // embedded data

label_80004D50:
    ctx->pc = 0x80004D50u;
    // 80004D50: .long   0x00000000
    // embedded data

label_80004D54:
    ctx->pc = 0x80004D54u;
    // 80004D54: .long   0x00000000
    // embedded data

label_80004D58:
    ctx->pc = 0x80004D58u;
    // 80004D58: .long   0x00000000
    // embedded data

label_80004D5C:
    ctx->pc = 0x80004D5Cu;
    // 80004D5C: .long   0x00000000
    // embedded data

label_80004D60:
    ctx->pc = 0x80004D60u;
    // 80004D60: .long   0x00000000
    // embedded data

label_80004D64:
    ctx->pc = 0x80004D64u;
    // 80004D64: .long   0x00000000
    // embedded data

label_80004D68:
    ctx->pc = 0x80004D68u;
    // 80004D68: .long   0x00000000
    // embedded data

label_80004D6C:
    ctx->pc = 0x80004D6Cu;
    // 80004D6C: .long   0x00000000
    // embedded data

label_80004D70:
    ctx->pc = 0x80004D70u;
    // 80004D70: .long   0x00000000
    // embedded data

label_80004D74:
    ctx->pc = 0x80004D74u;
    // 80004D74: .long   0x00000000
    // embedded data

label_80004D78:
    ctx->pc = 0x80004D78u;
    // 80004D78: .long   0x00000000
    // embedded data

label_80004D7C:
    ctx->pc = 0x80004D7Cu;
    // 80004D7C: .long   0x00000000
    // embedded data

label_80004D80:
    ctx->pc = 0x80004D80u;
    // 80004D80: .long   0x00000000
    // embedded data

label_80004D84:
    ctx->pc = 0x80004D84u;
    // 80004D84: .long   0x00000000
    // embedded data

label_80004D88:
    ctx->pc = 0x80004D88u;
    // 80004D88: .long   0x00000000
    // embedded data

label_80004D8C:
    ctx->pc = 0x80004D8Cu;
    // 80004D8C: .long   0x00000000
    // embedded data

label_80004D90:
    ctx->pc = 0x80004D90u;
    // 80004D90: .long   0x00000000
    // embedded data

label_80004D94:
    ctx->pc = 0x80004D94u;
    // 80004D94: .long   0x00000000
    // embedded data

label_80004D98:
    ctx->pc = 0x80004D98u;
    // 80004D98: .long   0x00000000
    // embedded data

label_80004D9C:
    ctx->pc = 0x80004D9Cu;
    // 80004D9C: .long   0x00000000
    // embedded data

label_80004DA0:
    ctx->pc = 0x80004DA0u;
    // 80004DA0: .long   0x00000000
    // embedded data

label_80004DA4:
    ctx->pc = 0x80004DA4u;
    // 80004DA4: .long   0x00000000
    // embedded data

label_80004DA8:
    ctx->pc = 0x80004DA8u;
    // 80004DA8: .long   0x00000000
    // embedded data

label_80004DAC:
    ctx->pc = 0x80004DACu;
    // 80004DAC: .long   0x00000000
    // embedded data

label_80004DB0:
    ctx->pc = 0x80004DB0u;
    // 80004DB0: .long   0x00000000
    // embedded data

label_80004DB4:
    ctx->pc = 0x80004DB4u;
    // 80004DB4: .long   0x00000000
    // embedded data

label_80004DB8:
    ctx->pc = 0x80004DB8u;
    // 80004DB8: .long   0x00000000
    // embedded data

label_80004DBC:
    ctx->pc = 0x80004DBCu;
    // 80004DBC: .long   0x00000000
    // embedded data

label_80004DC0:
    ctx->pc = 0x80004DC0u;
    // 80004DC0: .long   0x00000000
    // embedded data

label_80004DC4:
    ctx->pc = 0x80004DC4u;
    // 80004DC4: .long   0x00000000
    // embedded data

label_80004DC8:
    ctx->pc = 0x80004DC8u;
    // 80004DC8: .long   0x00000000
    // embedded data

label_80004DCC:
    ctx->pc = 0x80004DCCu;
    // 80004DCC: .long   0x00000000
    // embedded data

label_80004DD0:
    ctx->pc = 0x80004DD0u;
    // 80004DD0: .long   0x00000000
    // embedded data

label_80004DD4:
    ctx->pc = 0x80004DD4u;
    // 80004DD4: .long   0x00000000
    // embedded data

label_80004DD8:
    ctx->pc = 0x80004DD8u;
    // 80004DD8: .long   0x00000000
    // embedded data

label_80004DDC:
    ctx->pc = 0x80004DDCu;
    // 80004DDC: .long   0x00000000
    // embedded data

label_80004DE0:
    ctx->pc = 0x80004DE0u;
    // 80004DE0: .long   0x00000000
    // embedded data

label_80004DE4:
    ctx->pc = 0x80004DE4u;
    // 80004DE4: .long   0x00000000
    // embedded data

label_80004DE8:
    ctx->pc = 0x80004DE8u;
    // 80004DE8: .long   0x00000000
    // embedded data

label_80004DEC:
    ctx->pc = 0x80004DECu;
    // 80004DEC: .long   0x00000000
    // embedded data

label_80004DF0:
    ctx->pc = 0x80004DF0u;
    // 80004DF0: .long   0x00000000
    // embedded data

label_80004DF4:
    ctx->pc = 0x80004DF4u;
    // 80004DF4: .long   0x00000000
    // embedded data

label_80004DF8:
    ctx->pc = 0x80004DF8u;
    // 80004DF8: .long   0x00000000
    // embedded data

label_80004DFC:
    ctx->pc = 0x80004DFCu;
    // 80004DFC: .long   0x00000000
    // embedded data

label_80004E00:
    ctx->pc = 0x80004E00u;
    // 80004E00: .long   0x00000000
    // embedded data

label_80004E04:
    ctx->pc = 0x80004E04u;
    // 80004E04: .long   0x00000000
    // embedded data

label_80004E08:
    ctx->pc = 0x80004E08u;
    // 80004E08: .long   0x00000000
    // embedded data

label_80004E0C:
    ctx->pc = 0x80004E0Cu;
    // 80004E0C: .long   0x00000000
    // embedded data

label_80004E10:
    ctx->pc = 0x80004E10u;
    // 80004E10: .long   0x00000000
    // embedded data

label_80004E14:
    ctx->pc = 0x80004E14u;
    // 80004E14: .long   0x00000000
    // embedded data

label_80004E18:
    ctx->pc = 0x80004E18u;
    // 80004E18: .long   0x00000000
    // embedded data

label_80004E1C:
    ctx->pc = 0x80004E1Cu;
    // 80004E1C: .long   0x00000000
    // embedded data

label_80004E20:
    ctx->pc = 0x80004E20u;
    // 80004E20: .long   0x00000000
    // embedded data

label_80004E24:
    ctx->pc = 0x80004E24u;
    // 80004E24: .long   0x00000000
    // embedded data

label_80004E28:
    ctx->pc = 0x80004E28u;
    // 80004E28: .long   0x00000000
    // embedded data

label_80004E2C:
    ctx->pc = 0x80004E2Cu;
    // 80004E2C: .long   0x00000000
    // embedded data

label_80004E30:
    ctx->pc = 0x80004E30u;
    // 80004E30: .long   0x00000000
    // embedded data

label_80004E34:
    ctx->pc = 0x80004E34u;
    // 80004E34: .long   0x00000000
    // embedded data

label_80004E38:
    ctx->pc = 0x80004E38u;
    // 80004E38: .long   0x00000000
    // embedded data

label_80004E3C:
    ctx->pc = 0x80004E3Cu;
    // 80004E3C: .long   0x00000000
    // embedded data

label_80004E40:
    ctx->pc = 0x80004E40u;
    // 80004E40: .long   0x00000000
    // embedded data

label_80004E44:
    ctx->pc = 0x80004E44u;
    // 80004E44: .long   0x00000000
    // embedded data

label_80004E48:
    ctx->pc = 0x80004E48u;
    // 80004E48: .long   0x00000000
    // embedded data

label_80004E4C:
    ctx->pc = 0x80004E4Cu;
    // 80004E4C: .long   0x00000000
    // embedded data

label_80004E50:
    ctx->pc = 0x80004E50u;
    // 80004E50: .long   0x00000000
    // embedded data

label_80004E54:
    ctx->pc = 0x80004E54u;
    // 80004E54: .long   0x00000000
    // embedded data

label_80004E58:
    ctx->pc = 0x80004E58u;
    // 80004E58: .long   0x00000000
    // embedded data

label_80004E5C:
    ctx->pc = 0x80004E5Cu;
    // 80004E5C: .long   0x00000000
    // embedded data

label_80004E60:
    ctx->pc = 0x80004E60u;
    // 80004E60: .long   0x00000000
    // embedded data

label_80004E64:
    ctx->pc = 0x80004E64u;
    // 80004E64: .long   0x00000000
    // embedded data

label_80004E68:
    ctx->pc = 0x80004E68u;
    // 80004E68: .long   0x00000000
    // embedded data

label_80004E6C:
    ctx->pc = 0x80004E6Cu;
    // 80004E6C: .long   0x00000000
    // embedded data

label_80004E70:
    ctx->pc = 0x80004E70u;
    // 80004E70: .long   0x00000000
    // embedded data

label_80004E74:
    ctx->pc = 0x80004E74u;
    // 80004E74: .long   0x00000000
    // embedded data

label_80004E78:
    ctx->pc = 0x80004E78u;
    // 80004E78: .long   0x00000000
    // embedded data

label_80004E7C:
    ctx->pc = 0x80004E7Cu;
    // 80004E7C: .long   0x00000000
    // embedded data

label_80004E80:
    ctx->pc = 0x80004E80u;
    // 80004E80: .long   0x00000000
    // embedded data

label_80004E84:
    ctx->pc = 0x80004E84u;
    // 80004E84: .long   0x00000000
    // embedded data

label_80004E88:
    ctx->pc = 0x80004E88u;
    // 80004E88: .long   0x00000000
    // embedded data

label_80004E8C:
    ctx->pc = 0x80004E8Cu;
    // 80004E8C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80004E8Cu);
    return;

label_80004E90:
    ctx->pc = 0x80004E90u;
    // 80004E90: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004E90u);
    return;

label_80004E94:
    ctx->pc = 0x80004E94u;
    // 80004E94: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004E94u);
    return;

label_80004E98:
    ctx->pc = 0x80004E98u;
    ctx->downcount -= 13;
    // 80004E98: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80004E9C:
    ctx->pc = 0x80004E9Cu;
    // 80004E9C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80004EA0:
    ctx->pc = 0x80004EA0u;
    // 80004EA0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80004EA4:
    ctx->pc = 0x80004EA4u;
    // 80004EA4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80004EA8:
    ctx->pc = 0x80004EA8u;
    // 80004EA8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_80004EAC:
    ctx->pc = 0x80004EACu;
    // 80004EAC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80004EB0:
    ctx->pc = 0x80004EB0u;
    // 80004EB0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_80004EB4:
    ctx->pc = 0x80004EB4u;
    // 80004EB4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_80004EB8:
    ctx->pc = 0x80004EB8u;
    // 80004EB8: li      r3, 7168
    ctx->gpr[3] = (u32)(s32)(7168);

label_80004EBC:
    ctx->pc = 0x80004EBCu;
    // 80004EBC: rfi
    ppc_rfi(ctx, 0x80004EBCu);
    return;

label_80004EC0:
    ctx->pc = 0x80004EC0u;
    // 80004EC0: .long   0x00000000
    // embedded data

label_80004EC4:
    ctx->pc = 0x80004EC4u;
    // 80004EC4: .long   0x00000000
    // embedded data

label_80004EC8:
    ctx->pc = 0x80004EC8u;
    // 80004EC8: .long   0x00000000
    // embedded data

label_80004ECC:
    ctx->pc = 0x80004ECCu;
    // 80004ECC: .long   0x00000000
    // embedded data

label_80004ED0:
    ctx->pc = 0x80004ED0u;
    // 80004ED0: .long   0x00000000
    // embedded data

label_80004ED4:
    ctx->pc = 0x80004ED4u;
    // 80004ED4: .long   0x00000000
    // embedded data

label_80004ED8:
    ctx->pc = 0x80004ED8u;
    // 80004ED8: .long   0x00000000
    // embedded data

label_80004EDC:
    ctx->pc = 0x80004EDCu;
    // 80004EDC: .long   0x00000000
    // embedded data

label_80004EE0:
    ctx->pc = 0x80004EE0u;
    // 80004EE0: .long   0x00000000
    // embedded data

label_80004EE4:
    ctx->pc = 0x80004EE4u;
    // 80004EE4: .long   0x00000000
    // embedded data

label_80004EE8:
    ctx->pc = 0x80004EE8u;
    // 80004EE8: .long   0x00000000
    // embedded data

label_80004EEC:
    ctx->pc = 0x80004EECu;
    // 80004EEC: .long   0x00000000
    // embedded data

label_80004EF0:
    ctx->pc = 0x80004EF0u;
    // 80004EF0: .long   0x00000000
    // embedded data

label_80004EF4:
    ctx->pc = 0x80004EF4u;
    // 80004EF4: .long   0x00000000
    // embedded data

label_80004EF8:
    ctx->pc = 0x80004EF8u;
    // 80004EF8: .long   0x00000000
    // embedded data

label_80004EFC:
    ctx->pc = 0x80004EFCu;
    // 80004EFC: .long   0x00000000
    // embedded data

label_80004F00:
    ctx->pc = 0x80004F00u;
    // 80004F00: .long   0x00000000
    // embedded data

label_80004F04:
    ctx->pc = 0x80004F04u;
    // 80004F04: .long   0x00000000
    // embedded data

label_80004F08:
    ctx->pc = 0x80004F08u;
    // 80004F08: .long   0x00000000
    // embedded data

label_80004F0C:
    ctx->pc = 0x80004F0Cu;
    // 80004F0C: .long   0x00000000
    // embedded data

label_80004F10:
    ctx->pc = 0x80004F10u;
    // 80004F10: .long   0x00000000
    // embedded data

label_80004F14:
    ctx->pc = 0x80004F14u;
    // 80004F14: .long   0x00000000
    // embedded data

label_80004F18:
    ctx->pc = 0x80004F18u;
    // 80004F18: .long   0x00000000
    // embedded data

label_80004F1C:
    ctx->pc = 0x80004F1Cu;
    // 80004F1C: .long   0x00000000
    // embedded data

label_80004F20:
    ctx->pc = 0x80004F20u;
    // 80004F20: .long   0x00000000
    // embedded data

label_80004F24:
    ctx->pc = 0x80004F24u;
    // 80004F24: .long   0x00000000
    // embedded data

label_80004F28:
    ctx->pc = 0x80004F28u;
    // 80004F28: .long   0x00000000
    // embedded data

label_80004F2C:
    ctx->pc = 0x80004F2Cu;
    // 80004F2C: .long   0x00000000
    // embedded data

label_80004F30:
    ctx->pc = 0x80004F30u;
    // 80004F30: .long   0x00000000
    // embedded data

label_80004F34:
    ctx->pc = 0x80004F34u;
    // 80004F34: .long   0x00000000
    // embedded data

label_80004F38:
    ctx->pc = 0x80004F38u;
    // 80004F38: .long   0x00000000
    // embedded data

label_80004F3C:
    ctx->pc = 0x80004F3Cu;
    // 80004F3C: .long   0x00000000
    // embedded data

label_80004F40:
    ctx->pc = 0x80004F40u;
    // 80004F40: .long   0x00000000
    // embedded data

label_80004F44:
    ctx->pc = 0x80004F44u;
    // 80004F44: .long   0x00000000
    // embedded data

label_80004F48:
    ctx->pc = 0x80004F48u;
    // 80004F48: .long   0x00000000
    // embedded data

label_80004F4C:
    ctx->pc = 0x80004F4Cu;
    // 80004F4C: .long   0x00000000
    // embedded data

label_80004F50:
    ctx->pc = 0x80004F50u;
    // 80004F50: .long   0x00000000
    // embedded data

label_80004F54:
    ctx->pc = 0x80004F54u;
    // 80004F54: .long   0x00000000
    // embedded data

label_80004F58:
    ctx->pc = 0x80004F58u;
    // 80004F58: .long   0x00000000
    // embedded data

label_80004F5C:
    ctx->pc = 0x80004F5Cu;
    // 80004F5C: .long   0x00000000
    // embedded data

label_80004F60:
    ctx->pc = 0x80004F60u;
    // 80004F60: .long   0x00000000
    // embedded data

label_80004F64:
    ctx->pc = 0x80004F64u;
    // 80004F64: .long   0x00000000
    // embedded data

label_80004F68:
    ctx->pc = 0x80004F68u;
    // 80004F68: .long   0x00000000
    // embedded data

label_80004F6C:
    ctx->pc = 0x80004F6Cu;
    // 80004F6C: .long   0x00000000
    // embedded data

label_80004F70:
    ctx->pc = 0x80004F70u;
    // 80004F70: .long   0x00000000
    // embedded data

label_80004F74:
    ctx->pc = 0x80004F74u;
    // 80004F74: .long   0x00000000
    // embedded data

label_80004F78:
    ctx->pc = 0x80004F78u;
    // 80004F78: .long   0x00000000
    // embedded data

label_80004F7C:
    ctx->pc = 0x80004F7Cu;
    // 80004F7C: .long   0x00000000
    // embedded data

label_80004F80:
    ctx->pc = 0x80004F80u;
    // 80004F80: .long   0x00000000
    // embedded data

label_80004F84:
    ctx->pc = 0x80004F84u;
    // 80004F84: .long   0x00000000
    // embedded data

label_80004F88:
    ctx->pc = 0x80004F88u;
    // 80004F88: .long   0x00000000
    // embedded data

label_80004F8C:
    ctx->pc = 0x80004F8Cu;
    // 80004F8C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80004F8Cu);
    return;

label_80004F90:
    ctx->pc = 0x80004F90u;
    // 80004F90: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004F90u);
    return;

label_80004F94:
    ctx->pc = 0x80004F94u;
    // 80004F94: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004F94u);
    return;

label_80004F98:
    ctx->pc = 0x80004F98u;
    ctx->downcount -= 13;
    // 80004F98: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80004F9C:
    ctx->pc = 0x80004F9Cu;
    // 80004F9C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80004FA0:
    ctx->pc = 0x80004FA0u;
    // 80004FA0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80004FA4:
    ctx->pc = 0x80004FA4u;
    // 80004FA4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80004FA8:
    ctx->pc = 0x80004FA8u;
    // 80004FA8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_80004FAC:
    ctx->pc = 0x80004FACu;
    // 80004FAC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80004FB0:
    ctx->pc = 0x80004FB0u;
    // 80004FB0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_80004FB4:
    ctx->pc = 0x80004FB4u;
    // 80004FB4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_80004FB8:
    ctx->pc = 0x80004FB8u;
    // 80004FB8: li      r3, 7424
    ctx->gpr[3] = (u32)(s32)(7424);

label_80004FBC:
    ctx->pc = 0x80004FBCu;
    // 80004FBC: rfi
    ppc_rfi(ctx, 0x80004FBCu);
    return;

label_80004FC0:
    ctx->pc = 0x80004FC0u;
    // 80004FC0: .long   0x00000000
    // embedded data

label_80004FC4:
    ctx->pc = 0x80004FC4u;
    // 80004FC4: .long   0x00000000
    // embedded data

label_80004FC8:
    ctx->pc = 0x80004FC8u;
    // 80004FC8: .long   0x00000000
    // embedded data

label_80004FCC:
    ctx->pc = 0x80004FCCu;
    // 80004FCC: .long   0x00000000
    // embedded data

label_80004FD0:
    ctx->pc = 0x80004FD0u;
    // 80004FD0: .long   0x00000000
    // embedded data

label_80004FD4:
    ctx->pc = 0x80004FD4u;
    // 80004FD4: .long   0x00000000
    // embedded data

label_80004FD8:
    ctx->pc = 0x80004FD8u;
    // 80004FD8: .long   0x00000000
    // embedded data

label_80004FDC:
    ctx->pc = 0x80004FDCu;
    // 80004FDC: .long   0x00000000
    // embedded data

label_80004FE0:
    ctx->pc = 0x80004FE0u;
    // 80004FE0: .long   0x00000000
    // embedded data

label_80004FE4:
    ctx->pc = 0x80004FE4u;
    // 80004FE4: .long   0x00000000
    // embedded data

label_80004FE8:
    ctx->pc = 0x80004FE8u;
    // 80004FE8: .long   0x00000000
    // embedded data

label_80004FEC:
    ctx->pc = 0x80004FECu;
    // 80004FEC: .long   0x00000000
    // embedded data

label_80004FF0:
    ctx->pc = 0x80004FF0u;
    // 80004FF0: .long   0x00000000
    // embedded data

label_80004FF4:
    ctx->pc = 0x80004FF4u;
    // 80004FF4: .long   0x00000000
    // embedded data

label_80004FF8:
    ctx->pc = 0x80004FF8u;
    // 80004FF8: .long   0x00000000
    // embedded data

label_80004FFC:
    ctx->pc = 0x80004FFCu;
    // 80004FFC: .long   0x00000000
    // embedded data

label_80005000:
    ctx->pc = 0x80005000u;
    // 80005000: .long   0x00000000
    // embedded data

label_80005004:
    ctx->pc = 0x80005004u;
    // 80005004: .long   0x00000000
    // embedded data

label_80005008:
    ctx->pc = 0x80005008u;
    // 80005008: .long   0x00000000
    // embedded data

label_8000500C:
    ctx->pc = 0x8000500Cu;
    // 8000500C: .long   0x00000000
    // embedded data

label_80005010:
    ctx->pc = 0x80005010u;
    // 80005010: .long   0x00000000
    // embedded data

label_80005014:
    ctx->pc = 0x80005014u;
    // 80005014: .long   0x00000000
    // embedded data

label_80005018:
    ctx->pc = 0x80005018u;
    // 80005018: .long   0x00000000
    // embedded data

label_8000501C:
    ctx->pc = 0x8000501Cu;
    // 8000501C: .long   0x00000000
    // embedded data

label_80005020:
    ctx->pc = 0x80005020u;
    // 80005020: .long   0x00000000
    // embedded data

label_80005024:
    ctx->pc = 0x80005024u;
    // 80005024: .long   0x00000000
    // embedded data

label_80005028:
    ctx->pc = 0x80005028u;
    // 80005028: .long   0x00000000
    // embedded data

label_8000502C:
    ctx->pc = 0x8000502Cu;
    // 8000502C: .long   0x00000000
    // embedded data

label_80005030:
    ctx->pc = 0x80005030u;
    // 80005030: .long   0x00000000
    // embedded data

label_80005034:
    ctx->pc = 0x80005034u;
    // 80005034: .long   0x00000000
    // embedded data

label_80005038:
    ctx->pc = 0x80005038u;
    // 80005038: .long   0x00000000
    // embedded data

label_8000503C:
    ctx->pc = 0x8000503Cu;
    // 8000503C: .long   0x00000000
    // embedded data

label_80005040:
    ctx->pc = 0x80005040u;
    // 80005040: .long   0x00000000
    // embedded data

label_80005044:
    ctx->pc = 0x80005044u;
    // 80005044: .long   0x00000000
    // embedded data

label_80005048:
    ctx->pc = 0x80005048u;
    // 80005048: .long   0x00000000
    // embedded data

label_8000504C:
    ctx->pc = 0x8000504Cu;
    // 8000504C: .long   0x00000000
    // embedded data

label_80005050:
    ctx->pc = 0x80005050u;
    // 80005050: .long   0x00000000
    // embedded data

label_80005054:
    ctx->pc = 0x80005054u;
    // 80005054: .long   0x00000000
    // embedded data

label_80005058:
    ctx->pc = 0x80005058u;
    // 80005058: .long   0x00000000
    // embedded data

label_8000505C:
    ctx->pc = 0x8000505Cu;
    // 8000505C: .long   0x00000000
    // embedded data

label_80005060:
    ctx->pc = 0x80005060u;
    // 80005060: .long   0x00000000
    // embedded data

label_80005064:
    ctx->pc = 0x80005064u;
    // 80005064: .long   0x00000000
    // embedded data

label_80005068:
    ctx->pc = 0x80005068u;
    // 80005068: .long   0x00000000
    // embedded data

label_8000506C:
    ctx->pc = 0x8000506Cu;
    // 8000506C: .long   0x00000000
    // embedded data

label_80005070:
    ctx->pc = 0x80005070u;
    // 80005070: .long   0x00000000
    // embedded data

label_80005074:
    ctx->pc = 0x80005074u;
    // 80005074: .long   0x00000000
    // embedded data

label_80005078:
    ctx->pc = 0x80005078u;
    // 80005078: .long   0x00000000
    // embedded data

label_8000507C:
    ctx->pc = 0x8000507Cu;
    // 8000507C: .long   0x00000000
    // embedded data

label_80005080:
    ctx->pc = 0x80005080u;
    // 80005080: .long   0x00000000
    // embedded data

label_80005084:
    ctx->pc = 0x80005084u;
    // 80005084: .long   0x00000000
    // embedded data

label_80005088:
    ctx->pc = 0x80005088u;
    // 80005088: .long   0x00000000
    // embedded data

label_8000508C:
    ctx->pc = 0x8000508Cu;
    // 8000508C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000508Cu);
    return;

label_80005090:
    ctx->pc = 0x80005090u;
    // 80005090: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80005090u);
    return;

label_80005094:
    ctx->pc = 0x80005094u;
    // 80005094: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80005094u);
    return;

label_80005098:
    ctx->pc = 0x80005098u;
    ctx->downcount -= 13;
    // 80005098: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_8000509C:
    ctx->pc = 0x8000509Cu;
    // 8000509C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800050A0:
    ctx->pc = 0x800050A0u;
    // 800050A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800050A4:
    ctx->pc = 0x800050A4u;
    // 800050A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800050A8:
    ctx->pc = 0x800050A8u;
    // 800050A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800050AC:
    ctx->pc = 0x800050ACu;
    // 800050AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800050B0:
    ctx->pc = 0x800050B0u;
    // 800050B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800050B4:
    ctx->pc = 0x800050B4u;
    // 800050B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800050B8:
    ctx->pc = 0x800050B8u;
    // 800050B8: li      r3, 7680
    ctx->gpr[3] = (u32)(s32)(7680);

label_800050BC:
    ctx->pc = 0x800050BCu;
    // 800050BC: rfi
    ppc_rfi(ctx, 0x800050BCu);
    return;

label_800050C0:
    ctx->pc = 0x800050C0u;
    // 800050C0: .long   0x00000000
    // embedded data

label_800050C4:
    ctx->pc = 0x800050C4u;
    // 800050C4: .long   0x00000000
    // embedded data

label_800050C8:
    ctx->pc = 0x800050C8u;
    // 800050C8: .long   0x00000000
    // embedded data

label_800050CC:
    ctx->pc = 0x800050CCu;
    // 800050CC: .long   0x00000000
    // embedded data

label_800050D0:
    ctx->pc = 0x800050D0u;
    // 800050D0: .long   0x00000000
    // embedded data

label_800050D4:
    ctx->pc = 0x800050D4u;
    // 800050D4: .long   0x00000000
    // embedded data

label_800050D8:
    ctx->pc = 0x800050D8u;
    // 800050D8: .long   0x00000000
    // embedded data

label_800050DC:
    ctx->pc = 0x800050DCu;
    // 800050DC: .long   0x00000000
    // embedded data

label_800050E0:
    ctx->pc = 0x800050E0u;
    // 800050E0: .long   0x00000000
    // embedded data

label_800050E4:
    ctx->pc = 0x800050E4u;
    // 800050E4: .long   0x00000000
    // embedded data

label_800050E8:
    ctx->pc = 0x800050E8u;
    // 800050E8: .long   0x00000000
    // embedded data

label_800050EC:
    ctx->pc = 0x800050ECu;
    // 800050EC: .long   0x00000000
    // embedded data

label_800050F0:
    ctx->pc = 0x800050F0u;
    // 800050F0: .long   0x00000000
    // embedded data

label_800050F4:
    ctx->pc = 0x800050F4u;
    // 800050F4: .long   0x00000000
    // embedded data

label_800050F8:
    ctx->pc = 0x800050F8u;
    // 800050F8: .long   0x00000000
    // embedded data

label_800050FC:
    ctx->pc = 0x800050FCu;
    // 800050FC: .long   0x00000000
    // embedded data

label_80005100:
    ctx->pc = 0x80005100u;
    // 80005100: .long   0x00000000
    // embedded data

label_80005104:
    ctx->pc = 0x80005104u;
    // 80005104: .long   0x00000000
    // embedded data

label_80005108:
    ctx->pc = 0x80005108u;
    // 80005108: .long   0x00000000
    // embedded data

label_8000510C:
    ctx->pc = 0x8000510Cu;
    // 8000510C: .long   0x00000000
    // embedded data

label_80005110:
    ctx->pc = 0x80005110u;
    // 80005110: .long   0x00000000
    // embedded data

label_80005114:
    ctx->pc = 0x80005114u;
    // 80005114: .long   0x00000000
    // embedded data

label_80005118:
    ctx->pc = 0x80005118u;
    // 80005118: .long   0x00000000
    // embedded data

label_8000511C:
    ctx->pc = 0x8000511Cu;
    // 8000511C: .long   0x00000000
    // embedded data

label_80005120:
    ctx->pc = 0x80005120u;
    // 80005120: .long   0x00000000
    // embedded data

label_80005124:
    ctx->pc = 0x80005124u;
    // 80005124: .long   0x00000000
    // embedded data

label_80005128:
    ctx->pc = 0x80005128u;
    // 80005128: .long   0x00000000
    // embedded data

label_8000512C:
    ctx->pc = 0x8000512Cu;
    // 8000512C: .long   0x00000000
    // embedded data

label_80005130:
    ctx->pc = 0x80005130u;
    // 80005130: .long   0x00000000
    // embedded data

label_80005134:
    ctx->pc = 0x80005134u;
    // 80005134: .long   0x00000000
    // embedded data

label_80005138:
    ctx->pc = 0x80005138u;
    // 80005138: .long   0x00000000
    // embedded data

label_8000513C:
    ctx->pc = 0x8000513Cu;
    // 8000513C: .long   0x00000000
    // embedded data

label_80005140:
    ctx->pc = 0x80005140u;
    // 80005140: .long   0x00000000
    // embedded data

label_80005144:
    ctx->pc = 0x80005144u;
    // 80005144: .long   0x00000000
    // embedded data

label_80005148:
    ctx->pc = 0x80005148u;
    // 80005148: .long   0x00000000
    // embedded data

label_8000514C:
    ctx->pc = 0x8000514Cu;
    // 8000514C: .long   0x00000000
    // embedded data

label_80005150:
    ctx->pc = 0x80005150u;
    // 80005150: .long   0x00000000
    // embedded data

label_80005154:
    ctx->pc = 0x80005154u;
    // 80005154: .long   0x00000000
    // embedded data

label_80005158:
    ctx->pc = 0x80005158u;
    // 80005158: .long   0x00000000
    // embedded data

label_8000515C:
    ctx->pc = 0x8000515Cu;
    // 8000515C: .long   0x00000000
    // embedded data

label_80005160:
    ctx->pc = 0x80005160u;
    // 80005160: .long   0x00000000
    // embedded data

label_80005164:
    ctx->pc = 0x80005164u;
    // 80005164: .long   0x00000000
    // embedded data

label_80005168:
    ctx->pc = 0x80005168u;
    // 80005168: .long   0x00000000
    // embedded data

label_8000516C:
    ctx->pc = 0x8000516Cu;
    // 8000516C: .long   0x00000000
    // embedded data

label_80005170:
    ctx->pc = 0x80005170u;
    // 80005170: .long   0x00000000
    // embedded data

label_80005174:
    ctx->pc = 0x80005174u;
    // 80005174: .long   0x00000000
    // embedded data

label_80005178:
    ctx->pc = 0x80005178u;
    // 80005178: .long   0x00000000
    // embedded data

label_8000517C:
    ctx->pc = 0x8000517Cu;
    // 8000517C: .long   0x00000000
    // embedded data

label_80005180:
    ctx->pc = 0x80005180u;
    // 80005180: .long   0x00000000
    // embedded data

label_80005184:
    ctx->pc = 0x80005184u;
    // 80005184: .long   0x00000000
    // embedded data

label_80005188:
    ctx->pc = 0x80005188u;
    // 80005188: .long   0x00000000
    // embedded data

label_8000518C:
    ctx->pc = 0x8000518Cu;
    // 8000518C: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x8000518Cu);
    return;

label_80005190:
    ctx->pc = 0x80005190u;
    // 80005190: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80005190u);
    return;

label_80005194:
    ctx->pc = 0x80005194u;
    // 80005194: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80005194u);
    return;

label_80005198:
    ctx->pc = 0x80005198u;
    ctx->downcount -= 13;
    // 80005198: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_8000519C:
    ctx->pc = 0x8000519Cu;
    // 8000519C: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800051A0:
    ctx->pc = 0x800051A0u;
    // 800051A0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800051A4:
    ctx->pc = 0x800051A4u;
    // 800051A4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800051A8:
    ctx->pc = 0x800051A8u;
    // 800051A8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800051AC:
    ctx->pc = 0x800051ACu;
    // 800051AC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800051B0:
    ctx->pc = 0x800051B0u;
    // 800051B0: ori     r3, r3, 0x8DCC
    ctx->gpr[3] = ctx->gpr[3] | 0x8DCCu;

label_800051B4:
    ctx->pc = 0x800051B4u;
    // 800051B4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800051B8:
    ctx->pc = 0x800051B8u;
    // 800051B8: li      r3, 7936
    ctx->gpr[3] = (u32)(s32)(7936);

label_800051BC:
    ctx->pc = 0x800051BCu;
    // 800051BC: rfi
    ppc_rfi(ctx, 0x800051BCu);
    return;

label_800051C0:
    ctx->pc = 0x800051C0u;
    ctx->downcount -= 19;
    // 800051C0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800051C4:
    ctx->pc = 0x800051C4u;
    // 800051C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800051C8:
    ctx->pc = 0x800051C8u;
    // 800051C8: lis     r3, -32759
    ctx->gpr[3] = ((u32)(s32)(-32759) << 16);

label_800051CC:
    ctx->pc = 0x800051CCu;
    // 800051CC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800051D0:
    ctx->pc = 0x800051D0u;
    // 800051D0: addi    r3, r3, -30056
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30056);

label_800051D4:
    ctx->pc = 0x800051D4u;
    // 800051D4: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_800051D8:
    ctx->pc = 0x800051D8u;
    // 800051D8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800051DC:
    ctx->pc = 0x800051DCu;
    // 800051DC: cmplwi  r3, 0x0044
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0044u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800051E0:
    ctx->pc = 0x800051E0u;
    // 800051E0: bc    12, 1, 0x8000520C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000520C;
        }
    }

label_800051E4:
    ctx->pc = 0x800051E4u;
    ctx->downcount -= 3;
    // 800051E4: addi    r0, r3, 16384
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16384);

label_800051E8:
    ctx->pc = 0x800051E8u;
    // 800051E8: cmplwi  r0, 0x0044
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0044u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800051EC:
    ctx->pc = 0x800051ECu;
    // 800051EC: bc    4, 1, 0x8000520C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000520C;
        }
    }

label_800051F0:
    ctx->pc = 0x800051F0u;
    ctx->downcount -= 5;
    // 800051F0: lis     r3, -32759
    ctx->gpr[3] = ((u32)(s32)(-32759) << 16);

label_800051F4:
    ctx->pc = 0x800051F4u;
    // 800051F4: addi    r3, r3, -31296
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31296);

label_800051F8:
    ctx->pc = 0x800051F8u;
    // 800051F8: lwz     r0, 568(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(568);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800051FC:
    ctx->pc = 0x800051FCu;
    // 800051FC: rlwinm. r0, r0, 0, 30, 31
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

label_80005200:
    ctx->pc = 0x80005200u;
    // 80005200: bc    12, 2, 0x8000520C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000520C;
        }
    }

label_80005204:
    ctx->pc = 0x80005204u;
    ctx->downcount -= 2;
    // 80005204: li      r5, 68
    ctx->gpr[5] = (u32)(s32)(68);

label_80005208:
    ctx->pc = 0x80005208u;
    // 80005208: b       0x80005214
    {
            goto label_80005214;
    }

label_8000520C:
    ctx->pc = 0x8000520Cu;
    ctx->downcount -= 2;
    // 8000520C: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_80005210:
    ctx->pc = 0x80005210u;
    // 80005210: addi    r5, r3, 68
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(68);

label_80005214:
    ctx->pc = 0x80005214u;
    ctx->downcount -= 6;
    // 80005214: lis     r4, -32760
    ctx->gpr[4] = ((u32)(s32)(-32760) << 16);

label_80005218:
    ctx->pc = 0x80005218u;
    // 80005218: lis     r3, -32759
    ctx->gpr[3] = ((u32)(s32)(-32759) << 16);

label_8000521C:
    ctx->pc = 0x8000521Cu;
    // 8000521C: lwz     r29, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80005220:
    ctx->pc = 0x80005220u;
    // 80005220: addi    r31, r4, -22112
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-22112);

label_80005224:
    ctx->pc = 0x80005224u;
    // 80005224: addi    r30, r3, -31296
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-31296);

label_80005228:
    ctx->pc = 0x80005228u;
    // 80005228: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8000522C:
    ctx->downcount -= 4;
    // 8000522C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80005230:
    // 80005230: slw   r0, r0, r28
    {
        u32 sh = ctx->gpr[28] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_80005234:
    // 80005234: and.   r0, r29, r0
    {
        ctx->gpr[0] = ctx->gpr[29] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80005238:
    // 80005238: bc    12, 2, 0x800052A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800052A0;
        }
    }

label_8000523C:
    ctx->downcount -= 6;
    // 8000523C: lis     r3, -32759
    ctx->gpr[3] = ((u32)(s32)(-32759) << 16);

label_80005240:
    ctx->pc = 0x80005240u;
    // 80005240: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80005244:
    // 80005244: addi    r3, r3, -30056
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30056);

label_80005248:
    ctx->pc = 0x80005248u;
    // 80005248: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000524C:
    // 8000524C: cmplw   r6, r3
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80005250:
    // 80005250: bc    12, 0, 0x80005274
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80005274;
        }
    }

label_80005254:
    ctx->downcount -= 3;
    // 80005254: addi    r0, r3, 16384
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16384);

label_80005258:
    // 80005258: cmplw   r6, r0
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000525C:
    // 8000525C: bc    4, 0, 0x80005274
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80005274;
        }
    }

label_80005260:
    ctx->pc = 0x80005260u;
    ctx->downcount -= 3;
    // 80005260: lwz     r0, 568(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(568);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005264:
    // 80005264: rlwinm. r0, r0, 0, 30, 31
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

label_80005268:
    // 80005268: bc    12, 2, 0x80005274
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80005274;
        }
    }

label_8000526C:
    ctx->downcount -= 2;
    // 8000526C: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80005270:
    // 80005270: b       0x8000527C
    {
            goto label_8000527C;
    }

label_80005274:
    ctx->downcount -= 2;
    // 80005274: rlwinm r0, r6, 0, 2, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x3FFFFFFFu;
    }

label_80005278:
    // 80005278: oris    r27, r0, 0x8000
    ctx->gpr[27] = ctx->gpr[0] | (0x8000u << 16);

label_8000527C:
    ctx->downcount -= 6;
    // 8000527C: lis     r4, -32768
    ctx->gpr[4] = ((u32)(s32)(-32768) << 16);

label_80005280:
    // 80005280: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80005284:
    // 80005284: addi    r0, r4, 12940
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(12940);

label_80005288:
    // 80005288: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_8000528C:
    // 8000528C: add   r4, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80005290:
    // 80005290: bl      0x80003268
    {
            ctx->lr = 0x80005294u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003268u;
                return;
            }
            goto label_80003268;
    }

label_80005294:
    ctx->downcount -= 3;
    // 80005294: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80005298:
    // 80005298: li      r4, 256
    ctx->gpr[4] = (u32)(s32)(256);

label_8000529C:
    // 8000529C: bl      0x80018C8C
    {
            ctx->lr = 0x800052A0u;
            ctx->pc = 0x80018C8Cu;
            return;
    }

label_800052A0:
    ctx->downcount -= 4;
    // 800052A0: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_800052A4:
    // 800052A4: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_800052A8:
    // 800052A8: cmpwi   r28, 14
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(14);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800052AC:
    // 800052AC: bc    4, 1, 0x8000522C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000522Cu;
                return;
            }
            goto label_8000522C;
        }
    }

label_800052B0:
    ctx->pc = 0x800052B0u;
    ctx->downcount -= 16;
    // 800052B0: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_800052B4:
    ctx->pc = 0x800052B4u;
    // 800052B4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800052B8:
    ctx->pc = 0x800052B8u;
    // 800052B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800052BC:
    ctx->pc = 0x800052BCu;
    // 800052BC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_800052C0:
    ctx->pc = 0x800052C0u;
    // 800052C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_800052C4:
    ctx->pc = 0x800052C4u;
    ctx->downcount -= 8;
    // 800052C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800052C8:
    ctx->pc = 0x800052C8u;
    // 800052C8: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_800052CC:
    ctx->pc = 0x800052CCu;
    // 800052CC: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800052D0:
    ctx->pc = 0x800052D0u;
    // 800052D0: stwu     r1, -8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800052D4:
    ctx->pc = 0x800052D4u;
    // 800052D4: lhz     r0, 12516(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12516);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800052D8:
    ctx->pc = 0x800052D8u;
    // 800052D8: andi.   r0, r0, 0x0EEF
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x0EEFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800052DC:
    ctx->pc = 0x800052DCu;
    // 800052DC: cmpwi   r0, 3823
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(3823);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800052E0:
    ctx->pc = 0x800052E0u;
    // 800052E0: bc    4, 2, 0x800052F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800052F4;
        }
    }

label_800052E4:
    ctx->pc = 0x800052E4u;
    ctx->downcount -= 4;
    // 800052E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800052E8:
    ctx->pc = 0x800052E8u;
    // 800052E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800052EC:
    ctx->pc = 0x800052ECu;
    // 800052EC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800052F0:
    ctx->pc = 0x800052F0u;
    // 800052F0: bl      0x80040744
    {
            ctx->lr = 0x800052F4u;
            ctx->pc = 0x80040744u;
            return;
    }

label_800052F4:
    ctx->pc = 0x800052F4u;
    ctx->downcount -= 5;
    // 800052F4: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800052F8:
    ctx->pc = 0x800052F8u;
    // 800052F8: addi    r1, r1, 8
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(8);

label_800052FC:
    ctx->pc = 0x800052FCu;
    // 800052FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80005300:
    ctx->pc = 0x80005300u;
    // 80005300: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_80005304:
    ctx->pc = 0x80005304u;
    ctx->downcount -= 3;
    // 80005304: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80005308:
    ctx->pc = 0x80005308u;
    // 80005308: stb     r0, -31176(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31176);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8000530C:
    ctx->pc = 0x8000530Cu;
    // 8000530C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_80005310:
    ctx->pc = 0x80005310u;
    ctx->downcount -= 2;
    // 80005310: lbz     r3, -31176(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31176);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80005314:
    ctx->pc = 0x80005314u;
    // 80005314: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_80005318:
    ctx->pc = 0x80005318u;
    ctx->downcount -= 1;
    // 80005318: bl      0x80005474
    {
            ctx->lr = 0x8000531Cu;
            goto label_80005474;
    }

label_8000531C:
    ctx->pc = 0x8000531Cu;
    ctx->downcount -= 1;
    // 8000531C: bl      0x800055C4
    {
            ctx->lr = 0x80005320u;
            goto label_800055C4;
    }

label_80005320:
    ctx->pc = 0x80005320u;
    ctx->downcount -= 5;
    // 80005320: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80005324:
    ctx->pc = 0x80005324u;
    // 80005324: stwu     r1, -8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80005328:
    ctx->pc = 0x80005328u;
    // 80005328: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000532C:
    ctx->pc = 0x8000532Cu;
    // 8000532C: stw     r0, 0(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80005330:
    ctx->pc = 0x80005330u;
    // 80005330: bl      0x80005504
    {
            ctx->lr = 0x80005334u;
            goto label_80005504;
    }

label_80005334:
    ctx->pc = 0x80005334u;
    ctx->downcount -= 9;
    // 80005334: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80005338:
    ctx->pc = 0x80005338u;
    // 80005338: lis     r6, -32768
    ctx->gpr[6] = ((u32)(s32)(-32768) << 16);

label_8000533C:
    ctx->pc = 0x8000533Cu;
    // 8000533C: addi    r6, r6, 68
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(68);

label_80005340:
    ctx->pc = 0x80005340u;
    // 80005340: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80005344:
    ctx->pc = 0x80005344u;
    // 80005344: lis     r6, -32768
    ctx->gpr[6] = ((u32)(s32)(-32768) << 16);

label_80005348:
    ctx->pc = 0x80005348u;
    // 80005348: addi    r6, r6, 244
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(244);

label_8000534C:
    ctx->pc = 0x8000534Cu;
    // 8000534C: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80005350:
    ctx->pc = 0x80005350u;
    // 80005350: cmplwi  r6, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80005354:
    ctx->pc = 0x80005354u;
    // 80005354: bc    12, 2, 0x80005360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80005360;
        }
    }

label_80005358:
    ctx->pc = 0x80005358u;
    ctx->downcount -= 2;
    // 80005358: lwz     r7, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8000535C:
    ctx->pc = 0x8000535Cu;
    // 8000535C: b       0x80005380
    {
            goto label_80005380;
    }

label_80005360:
    ctx->pc = 0x80005360u;
    ctx->downcount -= 5;
    // 80005360: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_80005364:
    ctx->pc = 0x80005364u;
    // 80005364: addi    r5, r5, 52
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(52);

label_80005368:
    ctx->pc = 0x80005368u;
    // 80005368: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000536C:
    ctx->pc = 0x8000536Cu;
    // 8000536C: cmplwi  r5, 0x0000
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

label_80005370:
    ctx->pc = 0x80005370u;
    // 80005370: bc    12, 2, 0x800053BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800053BC;
        }
    }

label_80005374:
    ctx->pc = 0x80005374u;
    ctx->downcount -= 3;
    // 80005374: lis     r7, -32768
    ctx->gpr[7] = ((u32)(s32)(-32768) << 16);

label_80005378:
    ctx->pc = 0x80005378u;
    // 80005378: addi    r7, r7, 12520
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(12520);

label_8000537C:
    ctx->pc = 0x8000537Cu;
    // 8000537C: lwz     r7, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80005380:
    ctx->pc = 0x80005380u;
    ctx->downcount -= 3;
    // 80005380: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80005384:
    ctx->pc = 0x80005384u;
    // 80005384: cmplwi  r7, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80005388:
    ctx->pc = 0x80005388u;
    // 80005388: bc    12, 2, 0x800053AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800053AC;
        }
    }

label_8000538C:
    ctx->pc = 0x8000538Cu;
    ctx->downcount -= 3;
    // 8000538C: cmplwi  r7, 0x0003
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(0x0003u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80005390:
    ctx->pc = 0x80005390u;
    // 80005390: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80005394:
    ctx->pc = 0x80005394u;
    // 80005394: bc    12, 2, 0x800053AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800053AC;
        }
    }

label_80005398:
    ctx->pc = 0x80005398u;
    ctx->downcount -= 2;
    // 80005398: cmplwi  r7, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000539C:
    ctx->pc = 0x8000539Cu;
    // 8000539C: bc    4, 2, 0x800053BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800053BC;
        }
    }

label_800053A0:
    ctx->pc = 0x800053A0u;
    ctx->downcount -= 2;
    // 800053A0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_800053A4:
    ctx->pc = 0x800053A4u;
    // 800053A4: bl      0x80005304
    {
            ctx->lr = 0x800053A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005304u;
                return;
            }
            goto label_80005304;
    }

label_800053A8:
    ctx->pc = 0x800053A8u;
    ctx->downcount -= 1;
    // 800053A8: b       0x800053BC
    {
            goto label_800053BC;
    }

label_800053AC:
    ctx->pc = 0x800053ACu;
    ctx->downcount -= 5;
    // 800053AC: lis     r6, -32766
    ctx->gpr[6] = ((u32)(s32)(-32766) << 16);

label_800053B0:
    ctx->pc = 0x800053B0u;
    // 800053B0: addi    r6, r6, -22992
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22992);

label_800053B4:
    ctx->pc = 0x800053B4u;
    // 800053B4: mtlr    r6
    ctx->lr = ctx->gpr[6];

label_800053B8:
    ctx->pc = 0x800053B8u;
    // 800053B8: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x800053BCu;
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_800053BC:
    ctx->pc = 0x800053BCu;
    ctx->downcount -= 5;
    // 800053BC: lis     r6, -32768
    ctx->gpr[6] = ((u32)(s32)(-32768) << 16);

label_800053C0:
    ctx->pc = 0x800053C0u;
    // 800053C0: addi    r6, r6, 244
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(244);

label_800053C4:
    ctx->pc = 0x800053C4u;
    // 800053C4: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800053C8:
    ctx->pc = 0x800053C8u;
    // 800053C8: cmplwi  r5, 0x0000
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

label_800053CC:
    ctx->pc = 0x800053CCu;
    // 800053CC: bc    13, 2, 0x8000541C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000541C;
        }
    }

label_800053D0:
    ctx->pc = 0x800053D0u;
    ctx->downcount -= 3;
    // 800053D0: lwz     r6, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800053D4:
    ctx->pc = 0x800053D4u;
    // 800053D4: cmplwi  r6, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800053D8:
    ctx->pc = 0x800053D8u;
    // 800053D8: bc    13, 2, 0x8000541C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000541C;
        }
    }

label_800053DC:
    ctx->pc = 0x800053DCu;
    ctx->downcount -= 4;
    // 800053DC: add   r6, r5, r6
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_800053E0:
    ctx->pc = 0x800053E0u;
    // 800053E0: lwz     r14, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[14] = mem_read32(ctx, ea);
    }

label_800053E4:
    ctx->pc = 0x800053E4u;
    // 800053E4: cmplwi  r14, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[14]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800053E8:
    ctx->pc = 0x800053E8u;
    // 800053E8: bc    12, 2, 0x8000541C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000541C;
        }
    }

label_800053EC:
    ctx->pc = 0x800053ECu;
    ctx->downcount -= 3;
    // 800053EC: addi    r15, r6, 4
    ctx->gpr[15] = ctx->gpr[6] + (u32)(s32)(4);

label_800053F0:
    ctx->pc = 0x800053F0u;
    // 800053F0: mtctr    r14
    ctx->ctr = ctx->gpr[14];

label_800053F4:
    loop_800053F4(ctx);
    if (ctx->pc == 0x80005408u) goto label_80005408;
    return;
label_800053F8:
    ctx->pc = 0x800053F8u;
    // 800053F8: lwz     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_800053FC:
    // 800053FC: add   r7, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_80005400:
    ctx->pc = 0x80005400u;
    // 80005400: stw     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80005404:
    // 80005404: bc    16, 0, 0x800053F4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800053F4u;
                return;
            }
            goto label_800053F4;
        }
    }

label_80005408:
    ctx->pc = 0x80005408u;
    ctx->downcount -= 5;
    // 80005408: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_8000540C:
    ctx->pc = 0x8000540Cu;
    // 8000540C: addi    r5, r5, 52
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(52);

label_80005410:
    ctx->pc = 0x80005410u;
    // 80005410: rlwinm r7, r15, 0, 0, 26
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[15], 0u) & 0xFFFFFFE0u;
    }

label_80005414:
    ctx->pc = 0x80005414u;
    // 80005414: stw     r7, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80005418:
    ctx->pc = 0x80005418u;
    // 80005418: b       0x80005424
    {
            goto label_80005424;
    }

label_8000541C:
    ctx->pc = 0x8000541Cu;
    ctx->downcount -= 2;
    // 8000541C: li      r14, 0
    ctx->gpr[14] = (u32)(s32)(0);

label_80005420:
    ctx->pc = 0x80005420u;
    // 80005420: li      r15, 0
    ctx->gpr[15] = (u32)(s32)(0);

label_80005424:
    ctx->pc = 0x80005424u;
    ctx->downcount -= 1;
    // 80005424: bl      0x80029B38
    {
            ctx->lr = 0x80005428u;
            ctx->pc = 0x80029B38u;
            return;
    }

label_80005428:
    ctx->pc = 0x80005428u;
    ctx->downcount -= 1;
    // 80005428: bl      0x8003B20C
    {
            ctx->lr = 0x8000542Cu;
            ctx->pc = 0x8003B20Cu;
            return;
    }

label_8000542C:
    ctx->pc = 0x8000542Cu;
    ctx->downcount -= 5;
    // 8000542C: lis     r4, -32768
    ctx->gpr[4] = ((u32)(s32)(-32768) << 16);

label_80005430:
    ctx->pc = 0x80005430u;
    // 80005430: addi    r4, r4, 12518
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12518);

label_80005434:
    ctx->pc = 0x80005434u;
    // 80005434: lhz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80005438:
    ctx->pc = 0x80005438u;
    // 80005438: andi.   r5, r3, 0x8000
    {
        ctx->gpr[5] = ctx->gpr[3] & 0x8000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8000543C:
    ctx->pc = 0x8000543Cu;
    // 8000543C: bc    12, 2, 0x8000544C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000544C;
        }
    }

label_80005440:
    ctx->pc = 0x80005440u;
    ctx->downcount -= 3;
    // 80005440: andi.   r3, r3, 0x7FFF
    {
        ctx->gpr[3] = ctx->gpr[3] & 0x7FFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80005444:
    ctx->pc = 0x80005444u;
    // 80005444: cmplwi  r3, 0x0001
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

label_80005448:
    ctx->pc = 0x80005448u;
    // 80005448: bc    4, 2, 0x80005450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80005450;
        }
    }

label_8000544C:
    ctx->pc = 0x8000544Cu;
    ctx->downcount -= 1;
    // 8000544C: bl      0x800052C4
    {
            ctx->lr = 0x80005450u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800052C4u;
                return;
            }
            goto label_800052C4;
    }

label_80005450:
    ctx->pc = 0x80005450u;
    ctx->downcount -= 1;
    // 80005450: bl      0x80005310
    {
            ctx->lr = 0x80005454u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005310u;
                return;
            }
            goto label_80005310;
    }

label_80005454:
    ctx->pc = 0x80005454u;
    ctx->downcount -= 2;
    // 80005454: cmplwi  r3, 0x0001
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

label_80005458:
    ctx->pc = 0x80005458u;
    // 80005458: bc    4, 2, 0x80005460
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80005460;
        }
    }

label_8000545C:
    ctx->pc = 0x8000545Cu;
    ctx->downcount -= 1;
    // 8000545C: bl      0x80042D40
    {
            ctx->lr = 0x80005460u;
            ctx->pc = 0x80042D40u;
            return;
    }

label_80005460:
    ctx->pc = 0x80005460u;
    ctx->downcount -= 1;
    // 80005460: bl      0x80042D44
    {
            ctx->lr = 0x80005464u;
            ctx->pc = 0x80042D44u;
            return;
    }

label_80005464:
    ctx->pc = 0x80005464u;
    ctx->downcount -= 3;
    // 80005464: or   r3, r14, r14
    {
        ctx->gpr[3] = ctx->gpr[14] | ctx->gpr[14];
    }

label_80005468:
    ctx->pc = 0x80005468u;
    // 80005468: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_8000546C:
    ctx->pc = 0x8000546Cu;
    // 8000546C: bl      0x800058A0
    {
            ctx->lr = 0x80005470u;
            ctx->pc = 0x800058A0u;
            return;
    }

label_80005470:
    ctx->pc = 0x80005470u;
    ctx->downcount -= 1;
    // 80005470: b       0x80008898
    {
            ctx->pc = 0x80008898u;
            return;
    }

label_80005474:
    ctx->pc = 0x80005474u;
    ctx->downcount -= 36;
    // 80005474: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80005478:
    ctx->pc = 0x80005478u;
    // 80005478: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8000547C:
    ctx->pc = 0x8000547Cu;
    // 8000547C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80005480:
    ctx->pc = 0x80005480u;
    // 80005480: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80005484:
    ctx->pc = 0x80005484u;
    // 80005484: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80005488:
    ctx->pc = 0x80005488u;
    // 80005488: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8000548C:
    ctx->pc = 0x8000548Cu;
    // 8000548C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80005490:
    ctx->pc = 0x80005490u;
    // 80005490: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80005494:
    ctx->pc = 0x80005494u;
    // 80005494: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80005498:
    ctx->pc = 0x80005498u;
    // 80005498: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_8000549C:
    ctx->pc = 0x8000549Cu;
    // 8000549C: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_800054A0:
    ctx->pc = 0x800054A0u;
    // 800054A0: li      r14, 0
    ctx->gpr[14] = (u32)(s32)(0);

label_800054A4:
    ctx->pc = 0x800054A4u;
    // 800054A4: li      r15, 0
    ctx->gpr[15] = (u32)(s32)(0);

label_800054A8:
    ctx->pc = 0x800054A8u;
    // 800054A8: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_800054AC:
    ctx->pc = 0x800054ACu;
    // 800054AC: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_800054B0:
    ctx->pc = 0x800054B0u;
    // 800054B0: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_800054B4:
    ctx->pc = 0x800054B4u;
    // 800054B4: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_800054B8:
    ctx->pc = 0x800054B8u;
    // 800054B8: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_800054BC:
    ctx->pc = 0x800054BCu;
    // 800054BC: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_800054C0:
    ctx->pc = 0x800054C0u;
    // 800054C0: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_800054C4:
    ctx->pc = 0x800054C4u;
    // 800054C4: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_800054C8:
    ctx->pc = 0x800054C8u;
    // 800054C8: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_800054CC:
    ctx->pc = 0x800054CCu;
    // 800054CC: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_800054D0:
    ctx->pc = 0x800054D0u;
    // 800054D0: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_800054D4:
    ctx->pc = 0x800054D4u;
    // 800054D4: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_800054D8:
    ctx->pc = 0x800054D8u;
    // 800054D8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_800054DC:
    ctx->pc = 0x800054DCu;
    // 800054DC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_800054E0:
    ctx->pc = 0x800054E0u;
    // 800054E0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_800054E4:
    ctx->pc = 0x800054E4u;
    // 800054E4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_800054E8:
    ctx->pc = 0x800054E8u;
    // 800054E8: lis     r1, -32755
    ctx->gpr[1] = ((u32)(s32)(-32755) << 16);

label_800054EC:
    ctx->pc = 0x800054ECu;
    // 800054EC: ori     r1, r1, 0x5148
    ctx->gpr[1] = ctx->gpr[1] | 0x5148u;

label_800054F0:
    ctx->pc = 0x800054F0u;
    // 800054F0: lis     r2, -32756
    ctx->gpr[2] = ((u32)(s32)(-32756) << 16);

label_800054F4:
    ctx->pc = 0x800054F4u;
    // 800054F4: ori     r2, r2, 0xC680
    ctx->gpr[2] = ctx->gpr[2] | 0xC680u;

label_800054F8:
    ctx->pc = 0x800054F8u;
    // 800054F8: lis     r13, -32756
    ctx->gpr[13] = ((u32)(s32)(-32756) << 16);

label_800054FC:
    ctx->pc = 0x800054FCu;
    // 800054FC: ori     r13, r13, 0xBE60
    ctx->gpr[13] = ctx->gpr[13] | 0xBE60u;

label_80005500:
    ctx->pc = 0x80005500u;
    // 80005500: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_80005504:
    ctx->pc = 0x80005504u;
    ctx->downcount -= 10;
    // 80005504: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80005508:
    ctx->pc = 0x80005508u;
    // 80005508: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000550C:
    ctx->pc = 0x8000550Cu;
    // 8000550C: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80005510:
    ctx->pc = 0x80005510u;
    // 80005510: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80005514:
    ctx->pc = 0x80005514u;
    // 80005514: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80005518:
    ctx->pc = 0x80005518u;
    // 80005518: stw     r29, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8000551C:
    ctx->pc = 0x8000551Cu;
    // 8000551C: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_80005520:
    ctx->pc = 0x80005520u;
    // 80005520: addi    r0, r3, 22044
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(22044);

label_80005524:
    ctx->pc = 0x80005524u;
    // 80005524: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80005528:
    ctx->pc = 0x80005528u;
    // 80005528: b       0x8000552C
    {
            goto label_8000552C;
    }

label_8000552C:
    ctx->pc = 0x8000552Cu;
    ctx->downcount -= 1;
    // 8000552C: b       0x80005530
    {
            goto label_80005530;
    }

label_80005530:
    ctx->pc = 0x80005530u;
    ctx->downcount -= 3;
    // 80005530: lwz     r30, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80005534:
    // 80005534: cmplwi  r30, 0x0000
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

label_80005538:
    // 80005538: bc    12, 2, 0x80005570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80005570;
        }
    }

label_8000553C:
    ctx->pc = 0x8000553Cu;
    ctx->downcount -= 3;
    // 8000553C: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80005540:
    ctx->pc = 0x80005540u;
    // 80005540: lwz     r31, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80005544:
    // 80005544: bc    12, 2, 0x80005568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80005568;
        }
    }

label_80005548:
    ctx->downcount -= 2;
    // 80005548: cmplw   r31, r4
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000554C:
    // 8000554C: bc    12, 2, 0x80005568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80005568;
        }
    }

label_80005550:
    ctx->downcount -= 3;
    // 80005550: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80005554:
    // 80005554: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80005558:
    // 80005558: bl      0x800031E8
    {
            ctx->lr = 0x8000555Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800031E8u;
                return;
            }
            goto label_800031E8;
    }

label_8000555C:
    ctx->downcount -= 3;
    // 8000555C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80005560:
    // 80005560: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80005564:
    // 80005564: bl      0x800055E8
    {
            ctx->lr = 0x80005568u;
            goto label_800055E8;
    }

label_80005568:
    ctx->downcount -= 2;
    // 80005568: addi    r29, r29, 12
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(12);

label_8000556C:
    // 8000556C: b       0x80005530
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005530u;
                return;
            }
            goto label_80005530;
    }

label_80005570:
    ctx->pc = 0x80005570u;
    ctx->downcount -= 4;
    // 80005570: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_80005574:
    ctx->pc = 0x80005574u;
    // 80005574: addi    r0, r3, 22176
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(22176);

label_80005578:
    ctx->pc = 0x80005578u;
    // 80005578: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8000557C:
    ctx->pc = 0x8000557Cu;
    // 8000557C: b       0x80005580
    {
            goto label_80005580;
    }

label_80005580:
    ctx->pc = 0x80005580u;
    ctx->downcount -= 1;
    // 80005580: b       0x80005584
    {
            goto label_80005584;
    }

label_80005584:
    ctx->pc = 0x80005584u;
    ctx->downcount -= 3;
    // 80005584: lwz     r5, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80005588:
    // 80005588: cmplwi  r5, 0x0000
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

label_8000558C:
    // 8000558C: bc    12, 2, 0x800055A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800055A8;
        }
    }

label_80005590:
    ctx->pc = 0x80005590u;
    ctx->downcount -= 2;
    // 80005590: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80005594:
    // 80005594: bc    12, 2, 0x800055A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800055A0;
        }
    }

label_80005598:
    ctx->downcount -= 2;
    // 80005598: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8000559C:
    // 8000559C: bl      0x80003100
    {
            ctx->lr = 0x800055A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80003100u;
                return;
            }
            goto label_80003100;
    }

label_800055A0:
    ctx->downcount -= 2;
    // 800055A0: addi    r29, r29, 8
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(8);

label_800055A4:
    // 800055A4: b       0x80005584
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80005584u;
                return;
            }
            goto label_80005584;
    }

label_800055A8:
    ctx->pc = 0x800055A8u;
    ctx->downcount -= 8;
    // 800055A8: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800055AC:
    ctx->pc = 0x800055ACu;
    // 800055AC: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800055B0:
    ctx->pc = 0x800055B0u;
    // 800055B0: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800055B4:
    ctx->pc = 0x800055B4u;
    // 800055B4: lwz     r29, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_800055B8:
    ctx->pc = 0x800055B8u;
    // 800055B8: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_800055BC:
    ctx->pc = 0x800055BCu;
    // 800055BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800055C0:
    ctx->pc = 0x800055C0u;
    // 800055C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_800055C4:
    ctx->pc = 0x800055C4u;
    ctx->downcount -= 5;
    // 800055C4: mfmsr   r0
    ctx->gpr[0] = ctx->msr;

label_800055C8:
    ctx->pc = 0x800055C8u;
    // 800055C8: ori     r0, r0, 0x2000
    ctx->gpr[0] = ctx->gpr[0] | 0x2000u;

label_800055CC:
    ctx->pc = 0x800055CCu;
    // 800055CC: mtmsr   r0
    ctx->msr = ctx->gpr[0];

label_800055D0:
    ctx->pc = 0x800055D0u;
    // 800055D0: mflr    r31
    ctx->gpr[31] = ctx->lr;

label_800055D4:
    ctx->pc = 0x800055D4u;
    // 800055D4: bl      0x8003B9B0
    {
            ctx->lr = 0x800055D8u;
            ctx->pc = 0x8003B9B0u;
            return;
    }

label_800055D8:
    ctx->pc = 0x800055D8u;
    ctx->downcount -= 1;
    // 800055D8: bl      0x8003AF58
    {
            ctx->lr = 0x800055DCu;
            ctx->pc = 0x8003AF58u;
            return;
    }

label_800055DC:
    ctx->pc = 0x800055DCu;
    ctx->downcount -= 1;
    // 800055DC: bl      0x8003CF54
    {
            ctx->lr = 0x800055E0u;
            ctx->pc = 0x8003CF54u;
            return;
    }

label_800055E0:
    ctx->pc = 0x800055E0u;
    ctx->downcount -= 3;
    // 800055E0: mtlr    r31
    ctx->lr = ctx->gpr[31];

label_800055E4:
    ctx->pc = 0x800055E4u;
    // 800055E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_800055E8:
    ctx->pc = 0x800055E8u;
    ctx->downcount -= 5;
    // 800055E8: lis     r5, -1
    ctx->gpr[5] = ((u32)(s32)(-1) << 16);

label_800055EC:
    ctx->pc = 0x800055ECu;
    // 800055EC: ori     r5, r5, 0xFFF1
    ctx->gpr[5] = ctx->gpr[5] | 0xFFF1u;

label_800055F0:
    ctx->pc = 0x800055F0u;
    // 800055F0: and   r5, r5, r3
    {
        ctx->gpr[5] = ctx->gpr[5] & ctx->gpr[3];
    }

label_800055F4:
    ctx->pc = 0x800055F4u;
    // 800055F4: subf   r3, r5, r3
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_800055F8:
    ctx->pc = 0x800055F8u;
    // 800055F8: add   r4, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_800055FC:
    ctx->pc = 0x800055FCu;
    // 800055FC: dcbst    0, r5
    ppc_fallback_instruction(ctx, 0x7C00286Cu, 0x800055FCu);
    return;

label_80005600:
    ctx->pc = 0x80005600u;
    ctx->downcount -= 3;
    // 80005600: sync
    ppc_memory_fence();

label_80005604:
    ctx->pc = 0x80005604u;
    // 80005604: icbi    0, r5
    ppc_fallback_instruction(ctx, 0x7C002FACu, 0x80005604u);
    return;

label_80005608:
    ctx->downcount -= 3;
    // 80005608: addic   r5, r5, 8
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(8);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8000560C:
    // 8000560C: addic.  r4, r4, -8
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-8);
        u64 res = a + b;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80005610:
    // 80005610: bc    4, 0, 0x800055FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800055FCu;
                return;
            }
            goto label_800055FC;
        }
    }

label_80005614:
    ctx->pc = 0x80005614u;
    ctx->downcount -= 2;
    // 80005614: isync
    ppc_memory_fence();

label_80005618:
    ctx->pc = 0x80005618u;
    // 80005618: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80003100;
        }
    }

label_8000561C:
    ctx->pc = 0x8000561Cu;
    ctx->downcount -= 2;
    // 8000561C: lwz     r0, 12544(r0)
    {
        u32 ea = (u32)(s32)(12544);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005620:
    ctx->pc = 0x80005620u;
    // 80005620: lwz     r0, 12544(r0)
    {
        u32 ea = (u32)(s32)(12544);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005624:
    ctx->pc = 0x80005624u;
    // 80005624: .long   0x000025C0
    // embedded data

label_80005628:
    ctx->pc = 0x80005628u;
    // 80005628: lwz     r0, 22208(r0)
    {
        u32 ea = (u32)(s32)(22208);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000562C:
    ctx->pc = 0x8000562Cu;
    // 8000562C: lwz     r0, 22208(r0)
    {
        u32 ea = (u32)(s32)(22208);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005630:
    ctx->pc = 0x80005630u;
    // 80005630: .long   0x000000FC
    // embedded data

label_80005634:
    ctx->pc = 0x80005634u;
    // 80005634: lwz     r0, 22464(r0)
    {
        u32 ea = (u32)(s32)(22464);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005638:
    ctx->pc = 0x80005638u;
    // 80005638: lwz     r0, 22464(r0)
    {
        u32 ea = (u32)(s32)(22464);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000563C:
    ctx->pc = 0x8000563Cu;
    // 8000563C: .long   0x000000E0
    // embedded data

label_80005640:
    ctx->pc = 0x80005640u;
    // 80005640: lwz     r0, 22688(r0)
    {
        u32 ea = (u32)(s32)(22688);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005644:
    ctx->pc = 0x80005644u;
    // 80005644: lwz     r0, 22688(r0)
    {
        u32 ea = (u32)(s32)(22688);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005648:
    ctx->pc = 0x80005648u;
    // 80005648: .long   0x00070BE8
    // embedded data

label_8000564C:
    ctx->pc = 0x8000564Cu;
    // 8000564C: lwz     r0, 25760(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(25760);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005650:
    ctx->pc = 0x80005650u;
    // 80005650: lwz     r0, 25760(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(25760);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005654:
    ctx->pc = 0x80005654u;
    // 80005654: .long   0x00000008
    // embedded data

label_80005658:
    ctx->pc = 0x80005658u;
    // 80005658: lwz     r0, 25792(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(25792);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000565C:
    ctx->pc = 0x8000565Cu;
    // 8000565C: lwz     r0, 25792(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(25792);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005660:
    ctx->pc = 0x80005660u;
    // 80005660: .long   0x00000010
    // embedded data

label_80005664:
    ctx->pc = 0x80005664u;
    // 80005664: lwz     r0, 25824(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(25824);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005668:
    ctx->pc = 0x80005668u;
    // 80005668: lwz     r0, 25824(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(25824);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000566C:
    ctx->pc = 0x8000566Cu;
    // 8000566C: .long   0x00003762
    // embedded data

label_80005670:
    ctx->pc = 0x80005670u;
    // 80005670: lwz     r0, -25504(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-25504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005674:
    ctx->pc = 0x80005674u;
    // 80005674: lwz     r0, -25504(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-25504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005678:
    ctx->pc = 0x80005678u;
    // 80005678: .long   0x0000BEAE
    // embedded data

label_8000567C:
    ctx->pc = 0x8000567Cu;
    // 8000567C: lwz     r0, 15968(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(15968);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005680:
    ctx->pc = 0x80005680u;
    // 80005680: lwz     r0, 15968(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(15968);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005684:
    ctx->pc = 0x80005684u;
    // 80005684: .long   0x00000211
    // embedded data

label_80005688:
    ctx->pc = 0x80005688u;
    // 80005688: lwz     r0, 18048(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(18048);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000568C:
    ctx->pc = 0x8000568Cu;
    // 8000568C: lwz     r0, 18048(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(18048);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80005690:
    ctx->pc = 0x80005690u;
    // 80005690: .long   0x00000AC0
    // embedded data

label_80005694:
    ctx->pc = 0x80005694u;
    // 80005694: .long   0x00000000
    // embedded data

label_80005698:
    ctx->pc = 0x80005698u;
    // 80005698: .long   0x00000000
    // embedded data

label_8000569C:
    ctx->pc = 0x8000569Cu;
    // 8000569C: .long   0x00000000
    // embedded data

label_800056A0:
    ctx->pc = 0x800056A0u;
    // 800056A0: lwz     r0, 23328(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(23328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800056A4:
    ctx->pc = 0x800056A4u;
    // 800056A4: .long   0x0003E340
    // embedded data

label_800056A8:
    ctx->pc = 0x800056A8u;
    // 800056A8: lwz     r0, 16512(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(16512);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800056AC:
    ctx->pc = 0x800056ACu;
    // 800056AC: .long   0x000005EC
    // embedded data

label_800056B0:
    ctx->pc = 0x800056B0u;
    // 800056B0: lwz     r0, 20800(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(20800);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800056B4:
    ctx->pc = 0x800056B4u;
    // 800056B4: .long   0x00000008
    // embedded data

label_800056B8:
    ctx->pc = 0x800056B8u;
    // 800056B8: .long   0x00000000
    // embedded data

label_800056BC:
    ctx->pc = 0x800056BCu;
    // 800056BC: .long   0x00000000
    // embedded data

    ctx->pc = 0x800056C0u;
    return;
return_dispatch_80003100:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80003118u: goto label_80003118;
    case 0x80003250u: goto label_80003250;
    case 0x80005294u: goto label_80005294;
    case 0x800052A0u: goto label_800052A0;
    case 0x800052F4u: goto label_800052F4;
    case 0x8000531Cu: goto label_8000531C;
    case 0x80005320u: goto label_80005320;
    case 0x80005334u: goto label_80005334;
    case 0x800053A8u: goto label_800053A8;
    case 0x800053BCu: goto label_800053BC;
    case 0x80005428u: goto label_80005428;
    case 0x8000542Cu: goto label_8000542C;
    case 0x80005450u: goto label_80005450;
    case 0x80005454u: goto label_80005454;
    case 0x80005460u: goto label_80005460;
    case 0x80005464u: goto label_80005464;
    case 0x80005470u: goto label_80005470;
    case 0x8000555Cu: goto label_8000555C;
    case 0x80005568u: goto label_80005568;
    case 0x800055A0u: goto label_800055A0;
    case 0x800055D8u: goto label_800055D8;
    case 0x800055DCu: goto label_800055DC;
    case 0x800055E0u: goto label_800055E0;
    default: return;
    }
}

