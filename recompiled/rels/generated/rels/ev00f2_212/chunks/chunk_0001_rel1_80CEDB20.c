// DolRecomp output
#include "../generated.h"

void func_80CEDB20(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80CEDB20[662] = {
        &&label_80CEDB20,
        &&label_80CEDB24,
        &&label_80CEDB28,
        &&label_80CEDB2C,
        &&label_80CEDB30,
        &&label_80CEDB34,
        &&label_80CEDB38,
        &&label_80CEDB3C,
        &&label_80CEDB40,
        &&label_80CEDB44,
        &&label_80CEDB48,
        &&label_80CEDB4C,
        &&label_80CEDB50,
        &&label_80CEDB54,
        &&label_80CEDB58,
        &&label_80CEDB5C,
        &&label_80CEDB60,
        &&label_80CEDB64,
        &&label_80CEDB68,
        &&label_80CEDB6C,
        &&label_80CEDB70,
        &&label_80CEDB74,
        &&label_80CEDB78,
        &&label_80CEDB7C,
        &&label_80CEDB80,
        &&label_80CEDB84,
        &&label_80CEDB88,
        &&label_80CEDB8C,
        &&label_80CEDB90,
        &&label_80CEDB94,
        &&label_80CEDB98,
        &&label_80CEDB9C,
        &&label_80CEDBA0,
        &&label_80CEDBA4,
        &&label_80CEDBA8,
        &&label_80CEDBAC,
        &&label_80CEDBB0,
        &&label_80CEDBB4,
        &&label_80CEDBB8,
        &&label_80CEDBBC,
        &&label_80CEDBC0,
        &&label_80CEDBC4,
        &&label_80CEDBC8,
        &&label_80CEDBCC,
        &&label_80CEDBD0,
        &&label_80CEDBD4,
        &&label_80CEDBD8,
        &&label_80CEDBDC,
        &&label_80CEDBE0,
        &&label_80CEDBE4,
        &&label_80CEDBE8,
        &&label_80CEDBEC,
        &&label_80CEDBF0,
        &&label_80CEDBF4,
        &&label_80CEDBF8,
        &&label_80CEDBFC,
        &&label_80CEDC00,
        &&label_80CEDC04,
        &&label_80CEDC08,
        &&label_80CEDC0C,
        &&label_80CEDC10,
        &&label_80CEDC14,
        &&label_80CEDC18,
        &&label_80CEDC1C,
        &&label_80CEDC20,
        &&label_80CEDC24,
        &&label_80CEDC28,
        &&label_80CEDC2C,
        &&label_80CEDC30,
        &&label_80CEDC34,
        &&label_80CEDC38,
        &&label_80CEDC3C,
        &&label_80CEDC40,
        &&label_80CEDC44,
        &&label_80CEDC48,
        &&label_80CEDC4C,
        &&label_80CEDC50,
        &&label_80CEDC54,
        &&label_80CEDC58,
        &&label_80CEDC5C,
        &&label_80CEDC60,
        &&label_80CEDC64,
        &&label_80CEDC68,
        &&label_80CEDC6C,
        &&label_80CEDC70,
        &&label_80CEDC74,
        &&label_80CEDC78,
        &&label_80CEDC7C,
        &&label_80CEDC80,
        &&label_80CEDC84,
        &&label_80CEDC88,
        &&label_80CEDC8C,
        &&label_80CEDC90,
        &&label_80CEDC94,
        &&label_80CEDC98,
        &&label_80CEDC9C,
        &&label_80CEDCA0,
        &&label_80CEDCA4,
        &&label_80CEDCA8,
        &&label_80CEDCAC,
        &&label_80CEDCB0,
        &&label_80CEDCB4,
        &&label_80CEDCB8,
        &&label_80CEDCBC,
        &&label_80CEDCC0,
        &&label_80CEDCC4,
        &&label_80CEDCC8,
        &&label_80CEDCCC,
        &&label_80CEDCD0,
        &&label_80CEDCD4,
        &&label_80CEDCD8,
        &&label_80CEDCDC,
        &&label_80CEDCE0,
        &&label_80CEDCE4,
        &&label_80CEDCE8,
        &&label_80CEDCEC,
        &&label_80CEDCF0,
        &&label_80CEDCF4,
        &&label_80CEDCF8,
        &&label_80CEDCFC,
        &&label_80CEDD00,
        &&label_80CEDD04,
        &&label_80CEDD08,
        &&label_80CEDD0C,
        &&label_80CEDD10,
        &&label_80CEDD14,
        &&label_80CEDD18,
        &&label_80CEDD1C,
        &&label_80CEDD20,
        &&label_80CEDD24,
        &&label_80CEDD28,
        &&label_80CEDD2C,
        &&label_80CEDD30,
        &&label_80CEDD34,
        &&label_80CEDD38,
        &&label_80CEDD3C,
        &&label_80CEDD40,
        &&label_80CEDD44,
        &&label_80CEDD48,
        &&label_80CEDD4C,
        &&label_80CEDD50,
        &&label_80CEDD54,
        &&label_80CEDD58,
        &&label_80CEDD5C,
        &&label_80CEDD60,
        &&label_80CEDD64,
        &&label_80CEDD68,
        &&label_80CEDD6C,
        &&label_80CEDD70,
        &&label_80CEDD74,
        &&label_80CEDD78,
        &&label_80CEDD7C,
        &&label_80CEDD80,
        &&label_80CEDD84,
        &&label_80CEDD88,
        &&label_80CEDD8C,
        &&label_80CEDD90,
        &&label_80CEDD94,
        &&label_80CEDD98,
        &&label_80CEDD9C,
        &&label_80CEDDA0,
        &&label_80CEDDA4,
        &&label_80CEDDA8,
        &&label_80CEDDAC,
        &&label_80CEDDB0,
        &&label_80CEDDB4,
        &&label_80CEDDB8,
        &&label_80CEDDBC,
        &&label_80CEDDC0,
        &&label_80CEDDC4,
        &&label_80CEDDC8,
        &&label_80CEDDCC,
        &&label_80CEDDD0,
        &&label_80CEDDD4,
        &&label_80CEDDD8,
        &&label_80CEDDDC,
        &&label_80CEDDE0,
        &&label_80CEDDE4,
        &&label_80CEDDE8,
        &&label_80CEDDEC,
        &&label_80CEDDF0,
        &&label_80CEDDF4,
        &&label_80CEDDF8,
        &&label_80CEDDFC,
        &&label_80CEDE00,
        &&label_80CEDE04,
        &&label_80CEDE08,
        &&label_80CEDE0C,
        &&label_80CEDE10,
        &&label_80CEDE14,
        &&label_80CEDE18,
        &&label_80CEDE1C,
        &&label_80CEDE20,
        &&label_80CEDE24,
        &&label_80CEDE28,
        &&label_80CEDE2C,
        &&label_80CEDE30,
        &&label_80CEDE34,
        &&label_80CEDE38,
        &&label_80CEDE3C,
        &&label_80CEDE40,
        &&label_80CEDE44,
        &&label_80CEDE48,
        &&label_80CEDE4C,
        &&label_80CEDE50,
        &&label_80CEDE54,
        &&label_80CEDE58,
        &&label_80CEDE5C,
        &&label_80CEDE60,
        &&label_80CEDE64,
        &&label_80CEDE68,
        &&label_80CEDE6C,
        &&label_80CEDE70,
        &&label_80CEDE74,
        &&label_80CEDE78,
        &&label_80CEDE7C,
        &&label_80CEDE80,
        &&label_80CEDE84,
        &&label_80CEDE88,
        &&label_80CEDE8C,
        &&label_80CEDE90,
        &&label_80CEDE94,
        &&label_80CEDE98,
        &&label_80CEDE9C,
        &&label_80CEDEA0,
        &&label_80CEDEA4,
        &&label_80CEDEA8,
        &&label_80CEDEAC,
        &&label_80CEDEB0,
        &&label_80CEDEB4,
        &&label_80CEDEB8,
        &&label_80CEDEBC,
        &&label_80CEDEC0,
        &&label_80CEDEC4,
        &&label_80CEDEC8,
        &&label_80CEDECC,
        &&label_80CEDED0,
        &&label_80CEDED4,
        &&label_80CEDED8,
        &&label_80CEDEDC,
        &&label_80CEDEE0,
        &&label_80CEDEE4,
        &&label_80CEDEE8,
        &&label_80CEDEEC,
        &&label_80CEDEF0,
        &&label_80CEDEF4,
        &&label_80CEDEF8,
        &&label_80CEDEFC,
        &&label_80CEDF00,
        &&label_80CEDF04,
        &&label_80CEDF08,
        &&label_80CEDF0C,
        &&label_80CEDF10,
        &&label_80CEDF14,
        &&label_80CEDF18,
        &&label_80CEDF1C,
        &&label_80CEDF20,
        &&label_80CEDF24,
        &&label_80CEDF28,
        &&label_80CEDF2C,
        &&label_80CEDF30,
        &&label_80CEDF34,
        &&label_80CEDF38,
        &&label_80CEDF3C,
        &&label_80CEDF40,
        &&label_80CEDF44,
        &&label_80CEDF48,
        &&label_80CEDF4C,
        &&label_80CEDF50,
        &&label_80CEDF54,
        &&label_80CEDF58,
        &&label_80CEDF5C,
        &&label_80CEDF60,
        &&label_80CEDF64,
        &&label_80CEDF68,
        &&label_80CEDF6C,
        &&label_80CEDF70,
        &&label_80CEDF74,
        &&label_80CEDF78,
        &&label_80CEDF7C,
        &&label_80CEDF80,
        &&label_80CEDF84,
        &&label_80CEDF88,
        &&label_80CEDF8C,
        &&label_80CEDF90,
        &&label_80CEDF94,
        &&label_80CEDF98,
        &&label_80CEDF9C,
        &&label_80CEDFA0,
        &&label_80CEDFA4,
        &&label_80CEDFA8,
        &&label_80CEDFAC,
        &&label_80CEDFB0,
        &&label_80CEDFB4,
        &&label_80CEDFB8,
        &&label_80CEDFBC,
        &&label_80CEDFC0,
        &&label_80CEDFC4,
        &&label_80CEDFC8,
        &&label_80CEDFCC,
        &&label_80CEDFD0,
        &&label_80CEDFD4,
        &&label_80CEDFD8,
        &&label_80CEDFDC,
        &&label_80CEDFE0,
        &&label_80CEDFE4,
        &&label_80CEDFE8,
        &&label_80CEDFEC,
        &&label_80CEDFF0,
        &&label_80CEDFF4,
        &&label_80CEDFF8,
        &&label_80CEDFFC,
        &&label_80CEE000,
        &&label_80CEE004,
        &&label_80CEE008,
        &&label_80CEE00C,
        &&label_80CEE010,
        &&label_80CEE014,
        &&label_80CEE018,
        &&label_80CEE01C,
        &&label_80CEE020,
        &&label_80CEE024,
        &&label_80CEE028,
        &&label_80CEE02C,
        &&label_80CEE030,
        &&label_80CEE034,
        &&label_80CEE038,
        &&label_80CEE03C,
        &&label_80CEE040,
        &&label_80CEE044,
        &&label_80CEE048,
        &&label_80CEE04C,
        &&label_80CEE050,
        &&label_80CEE054,
        &&label_80CEE058,
        &&label_80CEE05C,
        &&label_80CEE060,
        &&label_80CEE064,
        &&label_80CEE068,
        &&label_80CEE06C,
        &&label_80CEE070,
        &&label_80CEE074,
        &&label_80CEE078,
        &&label_80CEE07C,
        &&label_80CEE080,
        &&label_80CEE084,
        &&label_80CEE088,
        &&label_80CEE08C,
        &&label_80CEE090,
        &&label_80CEE094,
        &&label_80CEE098,
        &&label_80CEE09C,
        &&label_80CEE0A0,
        &&label_80CEE0A4,
        &&label_80CEE0A8,
        &&label_80CEE0AC,
        &&label_80CEE0B0,
        &&label_80CEE0B4,
        &&label_80CEE0B8,
        &&label_80CEE0BC,
        &&label_80CEE0C0,
        &&label_80CEE0C4,
        &&label_80CEE0C8,
        &&label_80CEE0CC,
        &&label_80CEE0D0,
        &&label_80CEE0D4,
        &&label_80CEE0D8,
        &&label_80CEE0DC,
        &&label_80CEE0E0,
        &&label_80CEE0E4,
        &&label_80CEE0E8,
        &&label_80CEE0EC,
        &&label_80CEE0F0,
        &&label_80CEE0F4,
        &&label_80CEE0F8,
        &&label_80CEE0FC,
        &&label_80CEE100,
        &&label_80CEE104,
        &&label_80CEE108,
        &&label_80CEE10C,
        &&label_80CEE110,
        &&label_80CEE114,
        &&label_80CEE118,
        &&label_80CEE11C,
        &&label_80CEE120,
        &&label_80CEE124,
        &&label_80CEE128,
        &&label_80CEE12C,
        &&label_80CEE130,
        &&label_80CEE134,
        &&label_80CEE138,
        &&label_80CEE13C,
        &&label_80CEE140,
        &&label_80CEE144,
        &&label_80CEE148,
        &&label_80CEE14C,
        &&label_80CEE150,
        &&label_80CEE154,
        &&label_80CEE158,
        &&label_80CEE15C,
        &&label_80CEE160,
        &&label_80CEE164,
        &&label_80CEE168,
        &&label_80CEE16C,
        &&label_80CEE170,
        &&label_80CEE174,
        &&label_80CEE178,
        &&label_80CEE17C,
        &&label_80CEE180,
        &&label_80CEE184,
        &&label_80CEE188,
        &&label_80CEE18C,
        &&label_80CEE190,
        &&label_80CEE194,
        &&label_80CEE198,
        &&label_80CEE19C,
        &&label_80CEE1A0,
        &&label_80CEE1A4,
        &&label_80CEE1A8,
        &&label_80CEE1AC,
        &&label_80CEE1B0,
        &&label_80CEE1B4,
        &&label_80CEE1B8,
        &&label_80CEE1BC,
        &&label_80CEE1C0,
        &&label_80CEE1C4,
        &&label_80CEE1C8,
        &&label_80CEE1CC,
        &&label_80CEE1D0,
        &&label_80CEE1D4,
        &&label_80CEE1D8,
        &&label_80CEE1DC,
        &&label_80CEE1E0,
        &&label_80CEE1E4,
        &&label_80CEE1E8,
        &&label_80CEE1EC,
        &&label_80CEE1F0,
        &&label_80CEE1F4,
        &&label_80CEE1F8,
        &&label_80CEE1FC,
        &&label_80CEE200,
        &&label_80CEE204,
        &&label_80CEE208,
        &&label_80CEE20C,
        &&label_80CEE210,
        &&label_80CEE214,
        &&label_80CEE218,
        &&label_80CEE21C,
        &&label_80CEE220,
        &&label_80CEE224,
        &&label_80CEE228,
        &&label_80CEE22C,
        &&label_80CEE230,
        &&label_80CEE234,
        &&label_80CEE238,
        &&label_80CEE23C,
        &&label_80CEE240,
        &&label_80CEE244,
        &&label_80CEE248,
        &&label_80CEE24C,
        &&label_80CEE250,
        &&label_80CEE254,
        &&label_80CEE258,
        &&label_80CEE25C,
        &&label_80CEE260,
        &&label_80CEE264,
        &&label_80CEE268,
        &&label_80CEE26C,
        &&label_80CEE270,
        &&label_80CEE274,
        &&label_80CEE278,
        &&label_80CEE27C,
        &&label_80CEE280,
        &&label_80CEE284,
        &&label_80CEE288,
        &&label_80CEE28C,
        &&label_80CEE290,
        &&label_80CEE294,
        &&label_80CEE298,
        &&label_80CEE29C,
        &&label_80CEE2A0,
        &&label_80CEE2A4,
        &&label_80CEE2A8,
        &&label_80CEE2AC,
        &&label_80CEE2B0,
        &&label_80CEE2B4,
        &&label_80CEE2B8,
        &&label_80CEE2BC,
        &&label_80CEE2C0,
        &&label_80CEE2C4,
        &&label_80CEE2C8,
        &&label_80CEE2CC,
        &&label_80CEE2D0,
        &&label_80CEE2D4,
        &&label_80CEE2D8,
        &&label_80CEE2DC,
        &&label_80CEE2E0,
        &&label_80CEE2E4,
        &&label_80CEE2E8,
        &&label_80CEE2EC,
        &&label_80CEE2F0,
        &&label_80CEE2F4,
        &&label_80CEE2F8,
        &&label_80CEE2FC,
        &&label_80CEE300,
        &&label_80CEE304,
        &&label_80CEE308,
        &&label_80CEE30C,
        &&label_80CEE310,
        &&label_80CEE314,
        &&label_80CEE318,
        &&label_80CEE31C,
        &&label_80CEE320,
        &&label_80CEE324,
        &&label_80CEE328,
        &&label_80CEE32C,
        &&label_80CEE330,
        &&label_80CEE334,
        &&label_80CEE338,
        &&label_80CEE33C,
        &&label_80CEE340,
        &&label_80CEE344,
        &&label_80CEE348,
        &&label_80CEE34C,
        &&label_80CEE350,
        &&label_80CEE354,
        &&label_80CEE358,
        &&label_80CEE35C,
        &&label_80CEE360,
        &&label_80CEE364,
        &&label_80CEE368,
        &&label_80CEE36C,
        &&label_80CEE370,
        &&label_80CEE374,
        &&label_80CEE378,
        &&label_80CEE37C,
        &&label_80CEE380,
        &&label_80CEE384,
        &&label_80CEE388,
        &&label_80CEE38C,
        &&label_80CEE390,
        &&label_80CEE394,
        &&label_80CEE398,
        &&label_80CEE39C,
        &&label_80CEE3A0,
        &&label_80CEE3A4,
        &&label_80CEE3A8,
        &&label_80CEE3AC,
        &&label_80CEE3B0,
        &&label_80CEE3B4,
        &&label_80CEE3B8,
        &&label_80CEE3BC,
        &&label_80CEE3C0,
        &&label_80CEE3C4,
        &&label_80CEE3C8,
        &&label_80CEE3CC,
        &&label_80CEE3D0,
        &&label_80CEE3D4,
        &&label_80CEE3D8,
        &&label_80CEE3DC,
        &&label_80CEE3E0,
        &&label_80CEE3E4,
        &&label_80CEE3E8,
        &&label_80CEE3EC,
        &&label_80CEE3F0,
        &&label_80CEE3F4,
        &&label_80CEE3F8,
        &&label_80CEE3FC,
        &&label_80CEE400,
        &&label_80CEE404,
        &&label_80CEE408,
        &&label_80CEE40C,
        &&label_80CEE410,
        &&label_80CEE414,
        &&label_80CEE418,
        &&label_80CEE41C,
        &&label_80CEE420,
        &&label_80CEE424,
        &&label_80CEE428,
        &&label_80CEE42C,
        &&label_80CEE430,
        &&label_80CEE434,
        &&label_80CEE438,
        &&label_80CEE43C,
        &&label_80CEE440,
        &&label_80CEE444,
        &&label_80CEE448,
        &&label_80CEE44C,
        &&label_80CEE450,
        &&label_80CEE454,
        &&label_80CEE458,
        &&label_80CEE45C,
        &&label_80CEE460,
        &&label_80CEE464,
        &&label_80CEE468,
        &&label_80CEE46C,
        &&label_80CEE470,
        &&label_80CEE474,
        &&label_80CEE478,
        &&label_80CEE47C,
        &&label_80CEE480,
        &&label_80CEE484,
        &&label_80CEE488,
        &&label_80CEE48C,
        &&label_80CEE490,
        &&label_80CEE494,
        &&label_80CEE498,
        &&label_80CEE49C,
        &&label_80CEE4A0,
        &&label_80CEE4A4,
        &&label_80CEE4A8,
        &&label_80CEE4AC,
        &&label_80CEE4B0,
        &&label_80CEE4B4,
        &&label_80CEE4B8,
        &&label_80CEE4BC,
        &&label_80CEE4C0,
        &&label_80CEE4C4,
        &&label_80CEE4C8,
        &&label_80CEE4CC,
        &&label_80CEE4D0,
        &&label_80CEE4D4,
        &&label_80CEE4D8,
        &&label_80CEE4DC,
        &&label_80CEE4E0,
        &&label_80CEE4E4,
        &&label_80CEE4E8,
        &&label_80CEE4EC,
        &&label_80CEE4F0,
        &&label_80CEE4F4,
        &&label_80CEE4F8,
        &&label_80CEE4FC,
        &&label_80CEE500,
        &&label_80CEE504,
        &&label_80CEE508,
        &&label_80CEE50C,
        &&label_80CEE510,
        &&label_80CEE514,
        &&label_80CEE518,
        &&label_80CEE51C,
        &&label_80CEE520,
        &&label_80CEE524,
        &&label_80CEE528,
        &&label_80CEE52C,
        &&label_80CEE530,
        &&label_80CEE534,
        &&label_80CEE538,
        &&label_80CEE53C,
        &&label_80CEE540,
        &&label_80CEE544,
        &&label_80CEE548,
        &&label_80CEE54C,
        &&label_80CEE550,
        &&label_80CEE554,
        &&label_80CEE558,
        &&label_80CEE55C,
        &&label_80CEE560,
        &&label_80CEE564,
        &&label_80CEE568,
        &&label_80CEE56C,
        &&label_80CEE570,
        &&label_80CEE574
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80CEDB20u && pc <= 0x80CEE574u && ((pc - 0x80CEDB20u) & 3u) == 0u)
            goto *pc_table_80CEDB20[(pc - 0x80CEDB20u) >> 2];
    }
    return;
label_80CEDB20:
    ctx->pc = 0x80CEDB20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 41u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDB20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 41u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 80CEDB20: lwz     r8, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB24:
    ctx->pc = 0x80CEDB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB24u)) return;
    // 80CEDB24: addi    r7, r3, 12
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(12);

label_80CEDB28:
    ctx->pc = 0x80CEDB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80CEDB28: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB2C:
    ctx->pc = 0x80CEDB2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB2Cu)) return;
    // 80CEDB2C: add   r9, r0, r10
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80CEDB30:
    ctx->pc = 0x80CEDB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB30u)) return;
    // 80CEDB30: add   r8, r8, r7
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_80CEDB34:
    ctx->pc = 0x80CEDB34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80CEDB34: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB38:
    ctx->pc = 0x80CEDB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80CEDB38: lwz     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB3C:
    ctx->pc = 0x80CEDB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80CEDB3C: stw     r7, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB40:
    ctx->pc = 0x80CEDB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80CEDB40: stw     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB44:
    ctx->pc = 0x80CEDB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80CEDB44: lwz     r0, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB48:
    ctx->pc = 0x80CEDB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80CEDB48: stw     r0, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB4C:
    ctx->pc = 0x80CEDB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80CEDB4C: lwz     r8, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB50:
    ctx->pc = 0x80CEDB50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB50u)) return;
    // 80CEDB50: addi    r7, r3, 24
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(24);

label_80CEDB54:
    ctx->pc = 0x80CEDB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80CEDB54: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB58:
    ctx->pc = 0x80CEDB58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80CEDB58u)) return;
    // 80CEDB58: mulli   r10, r11, 12
    ctx->gpr[10] = (u32)((s64)(s32)ctx->gpr[11] * (s64)(s32)12);

label_80CEDB5C:
    ctx->pc = 0x80CEDB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB5Cu)) return;
    // 80CEDB5C: add   r9, r0, r10
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80CEDB60:
    ctx->pc = 0x80CEDB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB60u)) return;
    // 80CEDB60: add   r8, r8, r7
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_80CEDB64:
    ctx->pc = 0x80CEDB64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CEDB64: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB68:
    ctx->pc = 0x80CEDB68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CEDB68: lwz     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB6C:
    ctx->pc = 0x80CEDB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80CEDB6C: stw     r7, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB70:
    ctx->pc = 0x80CEDB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CEDB70: stw     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB74:
    ctx->pc = 0x80CEDB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CEDB74: lwz     r0, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB78:
    ctx->pc = 0x80CEDB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CEDB78: stw     r0, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB7C:
    ctx->pc = 0x80CEDB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CEDB7C: lwz     r7, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB80:
    ctx->pc = 0x80CEDB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB80u)) return;
    // 80CEDB80: addi    r3, r3, 36
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(36);

label_80CEDB84:
    ctx->pc = 0x80CEDB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CEDB84: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB88:
    ctx->pc = 0x80CEDB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB88u)) return;
    // 80CEDB88: add   r8, r0, r10
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_80CEDB8C:
    ctx->pc = 0x80CEDB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB8Cu)) return;
    // 80CEDB8C: add   r7, r7, r3
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_80CEDB90:
    ctx->pc = 0x80CEDB90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CEDB90: lwz     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB94:
    ctx->pc = 0x80CEDB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CEDB94: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB98:
    ctx->pc = 0x80CEDB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CEDB98: stw     r3, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDB9C:
    ctx->pc = 0x80CEDB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDB9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CEDB9C: stw     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDBA0:
    ctx->pc = 0x80CEDBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDBA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CEDBA0: lwz     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDBA4:
    ctx->pc = 0x80CEDBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDBA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEDBA4: stw     r0, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDBA8:
    ctx->pc = 0x80CEDBA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDBA8u)) return;
    // 80CEDBA8: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_80CEDBAC:
    ctx->pc = 0x80CEDBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDBACu)) return;
    // 80CEDBAC: rlwinm r8, r4, 0, 16, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x0000FFFFu;
    }

label_80CEDBB0:
    ctx->pc = 0x80CEDBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDBB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDBB0: lbz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDBB4:
    ctx->pc = 0x80CEDBB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDBB4u)) return;
    // 80CEDBB4: cmpw    r8, r0
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CEDBB8:
    ctx->pc = 0x80CEDBB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDBB8u)) return;
    // 80CEDBB8: bc    12, 0, 0x80CEDADC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x80CEDADCu;
            return;
        }
    }

label_80CEDBBC:
    ctx->pc = 0x80CEDBBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDBBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CEDBBC: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDBC0:
    ctx->pc = 0x80CEDBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDBC0u)) return;
    // 80CEDBC0: bl      0x8050ED40
    {
            ctx->lr = 0x80CEDBC4u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80CEDBC4:
    ctx->pc = 0x80CEDBC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDBC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CEDBC4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CEDBC8:
    ctx->pc = 0x80CEDBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDBC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEDBC8: stw     r0, 16(r31)
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
label_80CEDBCC:
    ctx->pc = 0x80CEDBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDBCCu)) return;
    // 80CEDBCC: addi    r31, r31, 24
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(24);

label_80CEDBD0:
    ctx->pc = 0x80CEDBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDBD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDBD0: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDBD4:
    ctx->pc = 0x80CEDBD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDBD4u)) return;
    // 80CEDBD4: cmplwi  r0, 0x0000
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

label_80CEDBD8:
    ctx->pc = 0x80CEDBD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDBD8u)) return;
    // 80CEDBD8: bc    4, 2, 0x80CEDAB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x80CEDAB8u;
            return;
        }
    }

label_80CEDBDC:
    ctx->pc = 0x80CEDBDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDBDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEDBDC: psq_l   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CEDBDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80CEDBDCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDBE0:
    ctx->pc = 0x80CEDBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDBE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDBE0: lfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDBE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDBE4:
    ctx->pc = 0x80CEDBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDBE4u)) return;
    // 80CEDBE4: addi    r11, r1, 96
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(96);

label_80CEDBE8:
    ctx->pc = 0x80CEDBE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDBE8u)) return;
    // 80CEDBE8: bl      0x80006DF8
    {
            ctx->lr = 0x80CEDBECu;
            ctx->pc = 0x80006DF8u;
            return;
    }

label_80CEDBEC:
    ctx->pc = 0x80CEDBECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDBECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEDBEC: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDBF0:
    ctx->pc = 0x80CEDBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CEDBF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDBF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDBF4:
    ctx->pc = 0x80CEDBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDBF4u)) return;
    // 80CEDBF4: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_80CEDBF8:
    ctx->pc = 0x80CEDBF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDBF8u)) return;
    // 80CEDBF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CEDB20;
        }
    }

label_80CEDBFC:
    ctx->pc = 0x80CEDBFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDBFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CEDBFC: stwu     r1, -16(r1)
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
label_80CEDC00:
    ctx->pc = 0x80CEDC00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEDC00: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDC04:
    ctx->pc = 0x80CEDC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEDC04: stw     r0, 20(r1)
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
label_80CEDC08:
    ctx->pc = 0x80CEDC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEDC08: stw     r31, 12(r1)
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
label_80CEDC0C:
    ctx->pc = 0x80CEDC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC0Cu)) return;
    // 80CEDC0C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CEDC10:
    ctx->pc = 0x80CEDC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC10u)) return;
    // 80CEDC10: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80CEDC14:
    ctx->pc = 0x80CEDC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC14u)) return;
    // 80CEDC14: bl      0x8050EF60
    {
            ctx->lr = 0x80CEDC18u;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80CEDC18:
    ctx->pc = 0x80CEDC18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDC18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CEDC18: cmplwi  r3, 0x0000
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

label_80CEDC1C:
    ctx->pc = 0x80CEDC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC1Cu)) return;
    // 80CEDC1C: bc    12, 2, 0x80CEDC40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CEDC40;
        }
    }

label_80CEDC20:
    ctx->pc = 0x80CEDC20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDC20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80CEDC20: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CEDC24:
    ctx->pc = 0x80CEDC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CEDC24: sth     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDC28:
    ctx->pc = 0x80CEDC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEDC28: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDC2C:
    ctx->pc = 0x80CEDC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC2Cu)) return;
    // 80CEDC2C: lis     r4, -27364
    ctx->gpr[4] = ((u32)(s32)(-27364) << 16);

label_80CEDC30:
    ctx->pc = 0x80CEDC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC30u)) return;
    // 80CEDC30: addi    r4, r4, -13680
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13680);

label_80CEDC34:
    ctx->pc = 0x80CEDC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDC34: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CEDC34u)) return;
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
label_80CEDC38:
    ctx->pc = 0x80CEDC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CEDC38: stfs     f0, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CEDC38u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDC3C:
    ctx->pc = 0x80CEDC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CEDC3C: stw     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDC40:
    ctx->pc = 0x80CEDC40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDC40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEDC40: lwz     r31, 12(r1)
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
label_80CEDC44:
    ctx->pc = 0x80CEDC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEDC44: lwz     r0, 20(r1)
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
label_80CEDC48:
    ctx->pc = 0x80CEDC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CEDC48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDC48: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDC4C:
    ctx->pc = 0x80CEDC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC4Cu)) return;
    // 80CEDC4C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CEDC50:
    ctx->pc = 0x80CEDC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC50u)) return;
    // 80CEDC50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CEDB20;
        }
    }

label_80CEDC54:
    ctx->pc = 0x80CEDC54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDC54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CEDC54: stwu     r1, -16(r1)
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
label_80CEDC58:
    ctx->pc = 0x80CEDC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CEDC58: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDC5C:
    ctx->pc = 0x80CEDC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CEDC5C: stw     r0, 20(r1)
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
label_80CEDC60:
    ctx->pc = 0x80CEDC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CEDC60: stw     r31, 12(r1)
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
label_80CEDC64:
    ctx->pc = 0x80CEDC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CEDC64: stw     r30, 8(r1)
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
label_80CEDC68:
    ctx->pc = 0x80CEDC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC68u)) return;
    // 80CEDC68: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CEDC6C:
    ctx->pc = 0x80CEDC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEDC6C: lwz     r31, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDC70:
    ctx->pc = 0x80CEDC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC70u)) return;
    // 80CEDC70: li      r0, 14
    ctx->gpr[0] = (u32)(s32)(14);

label_80CEDC74:
    ctx->pc = 0x80CEDC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEDC74: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDC78:
    ctx->pc = 0x80CEDC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDC78: lwz     r0, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDC7C:
    ctx->pc = 0x80CEDC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC7Cu)) return;
    // 80CEDC7C: cmplwi  r0, 0x0000
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

label_80CEDC80:
    ctx->pc = 0x80CEDC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC80u)) return;
    // 80CEDC80: bc    12, 2, 0x80CEDC8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CEDC8C;
        }
    }

label_80CEDC84:
    ctx->pc = 0x80CEDC84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDC84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CEDC84: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CEDC88:
    ctx->pc = 0x80CEDC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC88u)) return;
    // 80CEDC88: bl      0x80CED078
    {
            ctx->lr = 0x80CEDC8Cu;
            ctx->pc = 0x80CED078u;
            return;
    }

label_80CEDC8C:
    ctx->pc = 0x80CEDC8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDC8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CEDC8C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80CEDC90:
    ctx->pc = 0x80CEDC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEDC90: sth     r0, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDC94:
    ctx->pc = 0x80CEDC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDC94: lwz     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDC98:
    ctx->pc = 0x80CEDC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC98u)) return;
    // 80CEDC98: cmplwi  r0, 0x0000
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

label_80CEDC9C:
    ctx->pc = 0x80CEDC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDC9Cu)) return;
    // 80CEDC9C: bc    12, 2, 0x80CEDCAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CEDCAC;
        }
    }

label_80CEDCA0:
    ctx->pc = 0x80CEDCA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDCA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CEDCA0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80CEDCA4:
    ctx->pc = 0x80CEDCA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDCA4u)) return;
    // 80CEDCA4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CEDCA8:
    ctx->pc = 0x80CEDCA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDCA8u)) return;
    // 80CEDCA8: bl      0x80CED44C
    {
            ctx->lr = 0x80CEDCACu;
            ctx->pc = 0x80CED44Cu;
            return;
    }

label_80CEDCAC:
    ctx->pc = 0x80CEDCACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDCACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CEDCAC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80CEDCB0:
    ctx->pc = 0x80CEDCB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDCB0u)) return;
    // 80CEDCB0: bl      0x8050ED40
    {
            ctx->lr = 0x80CEDCB4u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80CEDCB4:
    ctx->pc = 0x80CEDCB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDCB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CEDCB4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CEDCB8:
    ctx->pc = 0x80CEDCB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDCB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CEDCB8: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDCBC:
    ctx->pc = 0x80CEDCBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDCBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CEDCBC: lwz     r31, 12(r1)
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
label_80CEDCC0:
    ctx->pc = 0x80CEDCC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDCC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEDCC0: lwz     r30, 8(r1)
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
label_80CEDCC4:
    ctx->pc = 0x80CEDCC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDCC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEDCC4: lwz     r0, 20(r1)
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
label_80CEDCC8:
    ctx->pc = 0x80CEDCC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CEDCC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDCC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDCCC:
    ctx->pc = 0x80CEDCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDCCCu)) return;
    // 80CEDCCC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CEDCD0:
    ctx->pc = 0x80CEDCD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDCD0u)) return;
    // 80CEDCD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CEDB20;
        }
    }

label_80CEDCD4:
    ctx->pc = 0x80CEDCD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDCD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CEDCD4: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDCD8:
    ctx->pc = 0x80CEDCD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDCD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEDCD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDCDC:
    ctx->pc = 0x80CEDCDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDCDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEDCDC: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDCE0:
    ctx->pc = 0x80CEDCE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDCE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEDCE0: stfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDCE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDCE4:
    ctx->pc = 0x80CEDCE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDCE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDCE4: psq_st   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CEDCE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80CEDCE4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDCE8:
    ctx->pc = 0x80CEDCE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDCE8u)) return;
    // 80CEDCE8: addi    r11, r1, 112
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(112);

label_80CEDCEC:
    ctx->pc = 0x80CEDCECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDCECu)) return;
    // 80CEDCEC: bl      0x80006DAC
    {
            ctx->lr = 0x80CEDCF0u;
            ctx->pc = 0x80006DACu;
            return;
    }

label_80CEDCF0:
    ctx->pc = 0x80CEDCF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDCF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDCF0: lwz     r17, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[17] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDCF4:
    ctx->pc = 0x80CEDCF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDCF4u)) return;
    // 80CEDCF4: cmplwi  r17, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[17]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CEDCF8:
    ctx->pc = 0x80CEDCF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDCF8u)) return;
    // 80CEDCF8: bc    12, 2, 0x80CEE1C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CEE1C8;
        }
    }

label_80CEDCFC:
    ctx->pc = 0x80CEDCFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDCFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEDCFC: lwz     r31, 28(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDD00:
    ctx->pc = 0x80CEDD00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEDD00: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDD04:
    ctx->pc = 0x80CEDD04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEDD04: stw     r5, 12(r1)
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
label_80CEDD08:
    ctx->pc = 0x80CEDD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDD08: lha     r0, 2(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDD0C:
    ctx->pc = 0x80CEDD0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD0Cu)) return;
    // 80CEDD0C: cmpwi   r0, 1
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

label_80CEDD10:
    ctx->pc = 0x80CEDD10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD10u)) return;
    // 80CEDD10: bc    12, 2, 0x80CEDD28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CEDD28;
        }
    }

label_80CEDD14:
    ctx->pc = 0x80CEDD14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDD14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CEDD14: bc    4, 0, 0x80CEDD20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CEDD20;
        }
    }

label_80CEDD18:
    ctx->pc = 0x80CEDD18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDD18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CEDD18: cmpwi   r0, 0
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

label_80CEDD1C:
    ctx->pc = 0x80CEDD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD1Cu)) return;
    // 80CEDD1C: b       0x80CEE1C4
    {
            goto label_80CEE1C4;
    }

label_80CEDD20:
    ctx->pc = 0x80CEDD20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDD20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CEDD20: cmpwi   r0, 3
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

label_80CEDD24:
    ctx->pc = 0x80CEDD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD24u)) return;
    // 80CEDD24: b       0x80CEE1C4
    {
            goto label_80CEE1C4;
    }

label_80CEDD28:
    ctx->pc = 0x80CEDD28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDD28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CEDD28: lis     r3, -32758
    ctx->gpr[3] = ((u32)(s32)(-32758) << 16);

label_80CEDD2C:
    ctx->pc = 0x80CEDD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD2Cu)) return;
    // 80CEDD2C: addi    r3, r3, 29972
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29972);

label_80CEDD30:
    ctx->pc = 0x80CEDD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD30u)) return;
    // 80CEDD30: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80CEDD34:
    ctx->pc = 0x80CEDD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEDD34: lwz     r5, 24(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDD38:
    ctx->pc = 0x80CEDD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDD38: lbz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDD3C:
    ctx->pc = 0x80CEDD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD3Cu)) return;
    // 80CEDD3C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80CEDD40:
    ctx->pc = 0x80CEDD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD40u)) return;
    // 80CEDD40: bl      0x8048F87C
    {
            ctx->lr = 0x80CEDD44u;
            ctx->pc = 0x8048F87Cu;
            return;
    }

label_80CEDD44:
    ctx->pc = 0x80CEDD44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDD44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CEDD44: b       0x80CEE1B4
    {
            goto label_80CEE1B4;
    }

label_80CEDD48:
    ctx->pc = 0x80CEDD48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDD48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CEDD48: lwz     r4, 24(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDD4C:
    ctx->pc = 0x80CEDD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEDD4C: lhz     r0, 4(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDD50:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD50u)) return;
    // 80CEDD50: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_80CEDD54:
    ctx->pc = 0x80CEDD54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEDD54: lwzx    r4, r4, r0
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
label_80CEDD58:
    ctx->pc = 0x80CEDD58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDD58: lwz     r0, 0(r4)
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
label_80CEDD5C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD5Cu)) return;
    // 80CEDD5C: cmplw   r3, r0
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

label_80CEDD60:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD60u)) return;
    // 80CEDD60: bc    12, 2, 0x80CEDD6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CEDD6C;
        }
    }

label_80CEDD64:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDD64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CEDD64: addi    r31, r31, 24
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(24);

label_80CEDD68:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD68u)) return;
    // 80CEDD68: b       0x80CEE1B4
    {
            goto label_80CEE1B4;
    }

label_80CEDD6C:
    ctx->pc = 0x80CEDD6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDD6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDD6C: lbz     r0, 14(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(14);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDD70:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD70u)) return;
    // 80CEDD70: cmplwi  r0, 0x00FF
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x00FFu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CEDD74:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD74u)) return;
    // 80CEDD74: bc    4, 2, 0x80CEDD90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CEDD90;
        }
    }

label_80CEDD78:
    ctx->pc = 0x80CEDD78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDD78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CEDD78: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDD7C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD7Cu)) return;
    // 80CEDD7C: bl      0x8048D760
    {
            ctx->lr = 0x80CEDD80u;
            ctx->pc = 0x8048D760u;
            return;
    }

label_80CEDD80:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDD80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CEDD80: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_80CEDD84:
    ctx->pc = 0x80CEDD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDD84: stb     r0, 14(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDD88:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD88u)) return;
    // 80CEDD88: addi    r31, r31, 24
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(24);

label_80CEDD8C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD8Cu)) return;
    // 80CEDD8C: b       0x80CEE1B4
    {
            goto label_80CEE1B4;
    }

label_80CEDD90:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDD90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CEDD90: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80CEDD94:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD94u)) return;
    // 80CEDD94: lis     r4, -27363
    ctx->gpr[4] = ((u32)(s32)(-27363) << 16);

label_80CEDD98:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD98u)) return;
    // 80CEDD98: addi    r4, r4, -29824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29824);

label_80CEDD9C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDD9Cu)) return;
    // 80CEDD9C: bl      0x8048F81C
    {
            ctx->lr = 0x80CEDDA0u;
            ctx->pc = 0x8048F81Cu;
            return;
    }

label_80CEDDA0:
    ctx->pc = 0x80CEDDA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDDA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDDA0: lbz     r3, 15(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(15);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDDA4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDDA4u)) return;
    // 80CEDDA4: cmplwi  r3, 0x00FF
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x00FFu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CEDDA8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDDA8u)) return;
    // 80CEDDA8: bc    4, 2, 0x80CEDDC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CEDDC8;
        }
    }

label_80CEDDAC:
    ctx->pc = 0x80CEDDACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDDACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDDAC: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDDB0:
    ctx->pc = 0x80CEDDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDDB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CEDDB0: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDDB4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDDB4u)) return;
    // 80CEDDB4: bl      0x8048D760
    {
            ctx->lr = 0x80CEDDB8u;
            ctx->pc = 0x8048D760u;
            return;
    }

label_80CEDDB8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDDB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CEDDB8: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_80CEDDBC:
    ctx->pc = 0x80CEDDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDDBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDDBC: stb     r0, 15(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDDC0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDDC0u)) return;
    // 80CEDDC0: addi    r31, r31, 24
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(24);

label_80CEDDC4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDDC4u)) return;
    // 80CEDDC4: b       0x80CEE1B4
    {
            goto label_80CEE1B4;
    }

label_80CEDDC8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDDC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CEDDC8: lis     r4, -27363
    ctx->gpr[4] = ((u32)(s32)(-27363) << 16);

label_80CEDDCC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDDCCu)) return;
    // 80CEDDCC: addi    r4, r4, -29872
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29872);

label_80CEDDD0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDDD0u)) return;
    // 80CEDDD0: bl      0x8048F81C
    {
            ctx->lr = 0x80CEDDD4u;
            ctx->pc = 0x8048F81Cu;
            return;
    }

label_80CEDDD4:
    ctx->pc = 0x80CEDDD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDDD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CEDDD4: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDDD8:
    ctx->pc = 0x80CEDDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDDD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CEDDD8: lwz     r3, 4(r3)
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
label_80CEDDDC:
    ctx->pc = 0x80CEDDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDDDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CEDDDC: lwz     r27, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDDE0:
    ctx->pc = 0x80CEDDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDDE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CEDDE0: lwz     r29, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDDE4:
    ctx->pc = 0x80CEDDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDDE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CEDDE4: lwz     r3, 8(r31)
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
label_80CEDDE8:
    ctx->pc = 0x80CEDDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDDE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CEDDE8: lwz     r3, 4(r3)
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
label_80CEDDEC:
    ctx->pc = 0x80CEDDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDDECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CEDDEC: lwz     r28, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDDF0:
    ctx->pc = 0x80CEDDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDDF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEDDF0: lwz     r30, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDDF4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDDF4u)) return;
    // 80CEDDF4: lis     r3, -27363
    ctx->gpr[3] = ((u32)(s32)(-27363) << 16);

label_80CEDDF8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDDF8u)) return;
    // 80CEDDF8: addi    r3, r3, -29920
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29920);

label_80CEDDFC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDDFCu)) return;
    // 80CEDDFC: lis     r4, -27363
    ctx->gpr[4] = ((u32)(s32)(-27363) << 16);

label_80CEDE00:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE00u)) return;
    // 80CEDE00: addi    r4, r4, -29824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29824);

label_80CEDE04:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE04u)) return;
    // 80CEDE04: bl      0x8004B05C
    {
            ctx->lr = 0x80CEDE08u;
            ctx->pc = 0x8004B05Cu;
            return;
    }

label_80CEDE08:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDE08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CEDE08: lis     r3, -27363
    ctx->gpr[3] = ((u32)(s32)(-27363) << 16);

label_80CEDE0C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE0Cu)) return;
    // 80CEDE0C: addi    r3, r3, -29968
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29968);

label_80CEDE10:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE10u)) return;
    // 80CEDE10: lis     r4, -27363
    ctx->gpr[4] = ((u32)(s32)(-27363) << 16);

label_80CEDE14:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE14u)) return;
    // 80CEDE14: addi    r4, r4, -29872
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29872);

label_80CEDE18:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE18u)) return;
    // 80CEDE18: bl      0x8004B05C
    {
            ctx->lr = 0x80CEDE1Cu;
            ctx->pc = 0x8004B05Cu;
            return;
    }

label_80CEDE1C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDE1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CEDE1C: lis     r3, -27363
    ctx->gpr[3] = ((u32)(s32)(-27363) << 16);

label_80CEDE20:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE20u)) return;
    // 80CEDE20: addi    r3, r3, -29920
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29920);

label_80CEDE24:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE24u)) return;
    // 80CEDE24: bl      0x8004A734
    {
            ctx->lr = 0x80CEDE28u;
            ctx->pc = 0x8004A734u;
            return;
    }

label_80CEDE28:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDE28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CEDE28: lis     r3, -27363
    ctx->gpr[3] = ((u32)(s32)(-27363) << 16);

label_80CEDE2C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE2Cu)) return;
    // 80CEDE2C: addi    r3, r3, -29968
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29968);

label_80CEDE30:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE30u)) return;
    // 80CEDE30: bl      0x8004A734
    {
            ctx->lr = 0x80CEDE34u;
            ctx->pc = 0x8004A734u;
            return;
    }

label_80CEDE34:
    ctx->pc = 0x80CEDE34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDE34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEDE34: lbz     r0, 13(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(13);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDE38:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE38u)) return;
    // 80CEDE38: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80CEDE3C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE3Cu)) return;
    // 80CEDE3C: cmpwi   r0, 2
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

label_80CEDE40:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE40u)) return;
    // 80CEDE40: bc    12, 2, 0x80CEDFE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CEDFE8;
        }
    }

label_80CEDE44:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDE44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CEDE44: bc    4, 0, 0x80CEDE54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CEDE54;
        }
    }

label_80CEDE48:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDE48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CEDE48: cmpwi   r0, 1
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

label_80CEDE4C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE4Cu)) return;
    // 80CEDE4C: bc    4, 0, 0x80CEDE60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CEDE60;
        }
    }

label_80CEDE50:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDE50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CEDE50: b       0x80CEE198
    {
            goto label_80CEE198;
    }

label_80CEDE54:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDE54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CEDE54: cmpwi   r0, 4
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

label_80CEDE58:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE58u)) return;
    // 80CEDE58: bc    4, 0, 0x80CEE198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CEE198;
        }
    }

label_80CEDE5C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDE5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CEDE5C: b       0x80CEE0B0
    {
            goto label_80CEE0B0;
    }

label_80CEDE60:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDE60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80CEDE60: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_80CEDE64:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE64u)) return;
    // 80CEDE64: lis     r3, -27363
    ctx->gpr[3] = ((u32)(s32)(-27363) << 16);

label_80CEDE68:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE68u)) return;
    // 80CEDE68: addi    r18, r3, -29824
    ctx->gpr[18] = ctx->gpr[3] + (u32)(s32)(-29824);

label_80CEDE6C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE6Cu)) return;
    // 80CEDE6C: lis     r3, -27363
    ctx->gpr[3] = ((u32)(s32)(-27363) << 16);

label_80CEDE70:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE70u)) return;
    // 80CEDE70: addi    r19, r3, -29872
    ctx->gpr[19] = ctx->gpr[3] + (u32)(s32)(-29872);

label_80CEDE74:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE74u)) return;
    // 80CEDE74: lis     r3, -27364
    ctx->gpr[3] = ((u32)(s32)(-27364) << 16);

label_80CEDE78:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE78u)) return;
    // 80CEDE78: addi    r3, r3, -13652
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13652);

label_80CEDE7C:
    ctx->pc = 0x80CEDE7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEDE7C: lfs     f31, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CEDE7Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80CEDE80:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE80u)) return;
    // 80CEDE80: lis     r3, -27363
    ctx->gpr[3] = ((u32)(s32)(-27363) << 16);

label_80CEDE84:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE84u)) return;
    // 80CEDE84: addi    r20, r3, -29920
    ctx->gpr[20] = ctx->gpr[3] + (u32)(s32)(-29920);

label_80CEDE88:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE88u)) return;
    // 80CEDE88: lis     r3, -27363
    ctx->gpr[3] = ((u32)(s32)(-27363) << 16);

label_80CEDE8C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE8Cu)) return;
    // 80CEDE8C: addi    r21, r3, -29968
    ctx->gpr[21] = ctx->gpr[3] + (u32)(s32)(-29968);

label_80CEDE90:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE90u)) return;
    // 80CEDE90: b       0x80CEDFD4
    {
            goto label_80CEDFD4;
    }

label_80CEDE94:
    ctx->pc = 0x80CEDE94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDE94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CEDE94: lwz     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDE98:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE98u)) return;
    // 80CEDE98: rlwinm r26, r4, 2, 0, 29
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_80CEDE9C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDE9Cu)) return;
    // 80CEDE9C: add   r3, r0, r26
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80CEDEA0:
    ctx->pc = 0x80CEDEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDEA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CEDEA0: lhz     r24, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[24] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDEA4:
    ctx->pc = 0x80CEDEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDEA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CEDEA4: lhz     r23, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[23] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDEA8:
    ctx->pc = 0x80CEDEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDEA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CEDEA8: lwz     r5, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDEAC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDEACu)) return;
    // 80CEDEAC: addi    r0, r26, 2
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(2);

label_80CEDEB0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80CEDEB0u)) return;
    // 80CEDEB0: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80CEDEB4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDEB4u)) return;
    // 80CEDEB4: add   r22, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[22] = res;
    }

label_80CEDEB8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDEB8u)) return;
    // 80CEDEB8: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_80CEDEBC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80CEDEBCu)) return;
    // 80CEDEBC: mulli   r0, r4, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)48);

label_80CEDEC0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDEC0u)) return;
    // 80CEDEC0: add   r4, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80CEDEC4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDEC4u)) return;
    // 80CEDEC4: addi    r5, r1, 28
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(28);

label_80CEDEC8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDEC8u)) return;
    // 80CEDEC8: bl      0x8004A5F4
    {
            ctx->lr = 0x80CEDECCu;
            ctx->pc = 0x8004A5F4u;
            return;
    }

label_80CEDECC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDECCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CEDECC: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_80CEDED0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDED0u)) return;
    // 80CEDED0: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_80CEDED4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDED4u)) return;
    // 80CEDED4: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_80CEDED8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDED8u)) return;
    // 80CEDED8: bl      0x8004A5F4
    {
            ctx->lr = 0x80CEDEDCu;
            ctx->pc = 0x8004A5F4u;
            return;
    }

label_80CEDEDC:
    ctx->pc = 0x80CEDEDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 22u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDEDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 22u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CEDEDC: lfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDEDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
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
label_80CEDEE0:
    ctx->pc = 0x80CEDEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDEE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CEDEE0: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDEE0u)) return;
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
label_80CEDEE4:
    ctx->pc = 0x80CEDEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDEE4u)) return;
    // 80CEDEE4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CEDEE4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80CEDEE8:
    ctx->pc = 0x80CEDEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDEE8u)) return;
    // 80CEDEE8: fmuls   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80CEDEE8u)) return;
    ppc_fmuls(ctx, 0, 31, 0);

label_80CEDEEC:
    ctx->pc = 0x80CEDEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDEECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CEDEEC: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDEECu)) return;
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
label_80CEDEF0:
    ctx->pc = 0x80CEDEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDEF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CEDEF0: lfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDEF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
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
label_80CEDEF4:
    ctx->pc = 0x80CEDEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDEF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CEDEF4: lfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDEF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
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
label_80CEDEF8:
    ctx->pc = 0x80CEDEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDEF8u)) return;
    // 80CEDEF8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CEDEF8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80CEDEFC:
    ctx->pc = 0x80CEDEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDEFCu)) return;
    // 80CEDEFC: fmuls   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80CEDEFCu)) return;
    ppc_fmuls(ctx, 0, 31, 0);

label_80CEDF00:
    ctx->pc = 0x80CEDF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CEDF00: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDF00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDF04:
    ctx->pc = 0x80CEDF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CEDF04: lfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDF04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
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
label_80CEDF08:
    ctx->pc = 0x80CEDF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CEDF08: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDF08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
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
label_80CEDF0C:
    ctx->pc = 0x80CEDF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF0Cu)) return;
    // 80CEDF0C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CEDF0Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80CEDF10:
    ctx->pc = 0x80CEDF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF10u)) return;
    // 80CEDF10: fmuls   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80CEDF10u)) return;
    ppc_fmuls(ctx, 0, 31, 0);

label_80CEDF14:
    ctx->pc = 0x80CEDF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CEDF14: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDF14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDF18:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF18u)) return;
    // 80CEDF18: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_80CEDF1C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF1Cu)) return;
    // 80CEDF1C: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_80CEDF20:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80CEDF20u)) return;
    // 80CEDF20: mulli   r22, r24, 12
    ctx->gpr[22] = (u32)((s64)(s32)ctx->gpr[24] * (s64)(s32)12);

label_80CEDF24:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF24u)) return;
    // 80CEDF24: add   r5, r27, r22
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80CEDF28:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF28u)) return;
    // 80CEDF28: bl      0x8004A5F4
    {
            ctx->lr = 0x80CEDF2Cu;
            ctx->pc = 0x8004A5F4u;
            return;
    }

label_80CEDF2C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDF2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CEDF2C: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_80CEDF30:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF30u)) return;
    // 80CEDF30: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_80CEDF34:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80CEDF34u)) return;
    // 80CEDF34: mulli   r23, r23, 12
    ctx->gpr[23] = (u32)((s64)(s32)ctx->gpr[23] * (s64)(s32)12);

label_80CEDF38:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF38u)) return;
    // 80CEDF38: add   r5, r28, r23
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80CEDF3C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF3Cu)) return;
    // 80CEDF3C: bl      0x8004A5F4
    {
            ctx->lr = 0x80CEDF40u;
            ctx->pc = 0x8004A5F4u;
            return;
    }

label_80CEDF40:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDF40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CEDF40: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_80CEDF44:
    ctx->pc = 0x80CEDF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CEDF44: lwz     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDF48:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF48u)) return;
    // 80CEDF48: addi    r0, r26, 1
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(1);

label_80CEDF4C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80CEDF4Cu)) return;
    // 80CEDF4C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80CEDF50:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF50u)) return;
    // 80CEDF50: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80CEDF54:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF54u)) return;
    // 80CEDF54: addi    r5, r1, 28
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(28);

label_80CEDF58:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF58u)) return;
    // 80CEDF58: bl      0x8004ABF4
    {
            ctx->lr = 0x80CEDF5Cu;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80CEDF5C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDF5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80CEDF5C: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_80CEDF60:
    ctx->pc = 0x80CEDF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CEDF60: lwz     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDF64:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF64u)) return;
    // 80CEDF64: addi    r0, r26, 3
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(3);

label_80CEDF68:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80CEDF68u)) return;
    // 80CEDF68: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80CEDF6C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF6Cu)) return;
    // 80CEDF6C: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80CEDF70:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF70u)) return;
    // 80CEDF70: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_80CEDF74:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF74u)) return;
    // 80CEDF74: bl      0x8004ABF4
    {
            ctx->lr = 0x80CEDF78u;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80CEDF78:
    ctx->pc = 0x80CEDF78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDF78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CEDF78: lfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDF78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
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
label_80CEDF7C:
    ctx->pc = 0x80CEDF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CEDF7C: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDF7Cu)) return;
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
label_80CEDF80:
    ctx->pc = 0x80CEDF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF80u)) return;
    // 80CEDF80: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CEDF80u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80CEDF84:
    ctx->pc = 0x80CEDF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CEDF84: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDF84u)) return;
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
label_80CEDF88:
    ctx->pc = 0x80CEDF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CEDF88: lfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDF88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
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
label_80CEDF8C:
    ctx->pc = 0x80CEDF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CEDF8C: lfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDF8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
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
label_80CEDF90:
    ctx->pc = 0x80CEDF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF90u)) return;
    // 80CEDF90: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CEDF90u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80CEDF94:
    ctx->pc = 0x80CEDF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CEDF94: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDF94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDF98:
    ctx->pc = 0x80CEDF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEDF98: lfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDF98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
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
label_80CEDF9C:
    ctx->pc = 0x80CEDF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDF9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEDF9C: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDF9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
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
label_80CEDFA0:
    ctx->pc = 0x80CEDFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDFA0u)) return;
    // 80CEDFA0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CEDFA0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80CEDFA4:
    ctx->pc = 0x80CEDFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDFA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDFA4: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEDFA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDFA8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDFA8u)) return;
    // 80CEDFA8: addi    r3, r1, 28
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(28);

label_80CEDFAC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDFACu)) return;
    // 80CEDFAC: bl      0x80CEC450
    {
            ctx->lr = 0x80CEDFB0u;
            ctx->pc = 0x80CEC450u;
            return;
    }

label_80CEDFB0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDFB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CEDFB0: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_80CEDFB4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDFB4u)) return;
    // 80CEDFB4: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_80CEDFB8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDFB8u)) return;
    // 80CEDFB8: add   r5, r29, r22
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80CEDFBC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDFBCu)) return;
    // 80CEDFBC: bl      0x8004ABF4
    {
            ctx->lr = 0x80CEDFC0u;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80CEDFC0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDFC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CEDFC0: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_80CEDFC4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDFC4u)) return;
    // 80CEDFC4: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_80CEDFC8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDFC8u)) return;
    // 80CEDFC8: add   r5, r30, r23
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80CEDFCC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDFCCu)) return;
    // 80CEDFCC: bl      0x8004ABF4
    {
            ctx->lr = 0x80CEDFD0u;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80CEDFD0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDFD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CEDFD0: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_80CEDFD4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDFD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CEDFD4: rlwinm r4, r25, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[25], 0u) & 0x0000FFFFu;
    }

label_80CEDFD8:
    ctx->pc = 0x80CEDFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDFD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEDFD8: lbz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEDFDC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDFDCu)) return;
    // 80CEDFDC: cmpw    r4, r0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CEDFE0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDFE0u)) return;
    // 80CEDFE0: bc    12, 0, 0x80CEDE94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CEDE94u;
                return;
            }
            goto label_80CEDE94;
        }
    }

label_80CEDFE4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDFE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CEDFE4: b       0x80CEE198
    {
            goto label_80CEE198;
    }

label_80CEDFE8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDFE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CEDFE8: lis     r3, -27363
    ctx->gpr[3] = ((u32)(s32)(-27363) << 16);

label_80CEDFEC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDFECu)) return;
    // 80CEDFEC: addi    r3, r3, -29920
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29920);

label_80CEDFF0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDFF0u)) return;
    // 80CEDFF0: bl      0x8004B49C
    {
            ctx->lr = 0x80CEDFF4u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80CEDFF4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEDFF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CEDFF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CEDFF8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDFF8u)) return;
    // 80CEDFF8: lis     r4, -27363
    ctx->gpr[4] = ((u32)(s32)(-27363) << 16);

label_80CEDFFC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEDFFCu)) return;
    // 80CEDFFC: addi    r4, r4, -29872
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29872);

label_80CEE000:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE000u)) return;
    // 80CEE000: bl      0x8004B460
    {
            ctx->lr = 0x80CEE004u;
            ctx->pc = 0x8004B460u;
            return;
    }

label_80CEE004:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE004u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CEE004: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_80CEE008:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE008u)) return;
    // 80CEE008: b       0x80CEE094
    {
            goto label_80CEE094;
    }

label_80CEE00C:
    ctx->pc = 0x80CEE00Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 26u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE00Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 26u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80CEE00C: lwz     r3, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE010:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE010u)) return;
    // 80CEE010: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_80CEE014:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE014u)) return;
    // 80CEE014: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80CEE018:
    ctx->pc = 0x80CEE018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80CEE018: lhz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE01C:
    ctx->pc = 0x80CEE01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE01Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CEE01C: lhz     r6, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE020:
    ctx->pc = 0x80CEE020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CEE020: lwz     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE024:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80CEE024u)) return;
    // 80CEE024: mulli   r19, r4, 48
    ctx->gpr[19] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)48);

label_80CEE028:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80CEE028u)) return;
    // 80CEE028: mulli   r20, r5, 12
    ctx->gpr[20] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)12);

label_80CEE02C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE02Cu)) return;
    // 80CEE02C: add   r4, r27, r20
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80CEE030:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE030u)) return;
    // 80CEE030: add   r5, r0, r19
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80CEE034:
    ctx->pc = 0x80CEE034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CEE034: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE038:
    ctx->pc = 0x80CEE038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE038u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CEE038: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE03C:
    ctx->pc = 0x80CEE03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE03Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CEE03C: stw     r3, 0(r4)
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
label_80CEE040:
    ctx->pc = 0x80CEE040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE040u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CEE040: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE044:
    ctx->pc = 0x80CEE044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CEE044: lwz     r0, 8(r5)
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
label_80CEE048:
    ctx->pc = 0x80CEE048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CEE048: stw     r0, 8(r4)
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
label_80CEE04C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE04Cu)) return;
    // 80CEE04C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CEE050:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80CEE050u)) return;
    // 80CEE050: mulli   r21, r6, 12
    ctx->gpr[21] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)12);

label_80CEE054:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE054u)) return;
    // 80CEE054: add   r5, r28, r21
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80CEE058:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE058u)) return;
    // 80CEE058: bl      0x8004A5F4
    {
            ctx->lr = 0x80CEE05Cu;
            ctx->pc = 0x8004A5F4u;
            return;
    }

label_80CEE05C:
    ctx->pc = 0x80CEE05Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE05Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CEE05C: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE060:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE060u)) return;
    // 80CEE060: addi    r0, r19, 12
    ctx->gpr[0] = ctx->gpr[19] + (u32)(s32)(12);

label_80CEE064:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE064u)) return;
    // 80CEE064: add   r4, r29, r20
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80CEE068:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE068u)) return;
    // 80CEE068: add   r5, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80CEE06C:
    ctx->pc = 0x80CEE06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE06Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CEE06C: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE070:
    ctx->pc = 0x80CEE070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CEE070: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE074:
    ctx->pc = 0x80CEE074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CEE074: stw     r3, 0(r4)
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
label_80CEE078:
    ctx->pc = 0x80CEE078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE078u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEE078: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE07C:
    ctx->pc = 0x80CEE07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE07Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEE07C: lwz     r0, 8(r5)
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
label_80CEE080:
    ctx->pc = 0x80CEE080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEE080: stw     r0, 8(r4)
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
label_80CEE084:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE084u)) return;
    // 80CEE084: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CEE088:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE088u)) return;
    // 80CEE088: add   r5, r30, r21
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80CEE08C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE08Cu)) return;
    // 80CEE08C: bl      0x8004ABF4
    {
            ctx->lr = 0x80CEE090u;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80CEE090:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CEE090: addi    r18, r18, 1
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(1);

label_80CEE094:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE094u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CEE094: rlwinm r4, r18, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[18], 0u) & 0x0000FFFFu;
    }

label_80CEE098:
    ctx->pc = 0x80CEE098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE098: lbz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE09C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE09Cu)) return;
    // 80CEE09C: cmpw    r4, r0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CEE0A0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE0A0u)) return;
    // 80CEE0A0: bc    12, 0, 0x80CEE00C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CEE00Cu;
                return;
            }
            goto label_80CEE00C;
        }
    }

label_80CEE0A4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE0A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CEE0A4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CEE0A8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE0A8u)) return;
    // 80CEE0A8: bl      0x8004B504
    {
            ctx->lr = 0x80CEE0ACu;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80CEE0AC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE0ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CEE0AC: b       0x80CEE198
    {
            goto label_80CEE198;
    }

label_80CEE0B0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE0B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CEE0B0: lis     r3, -27363
    ctx->gpr[3] = ((u32)(s32)(-27363) << 16);

label_80CEE0B4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE0B4u)) return;
    // 80CEE0B4: addi    r3, r3, -29920
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29920);

label_80CEE0B8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE0B8u)) return;
    // 80CEE0B8: bl      0x8004B49C
    {
            ctx->lr = 0x80CEE0BCu;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80CEE0BC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE0BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CEE0BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CEE0C0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE0C0u)) return;
    // 80CEE0C0: lis     r4, -27363
    ctx->gpr[4] = ((u32)(s32)(-27363) << 16);

label_80CEE0C4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE0C4u)) return;
    // 80CEE0C4: addi    r4, r4, -29872
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29872);

label_80CEE0C8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE0C8u)) return;
    // 80CEE0C8: bl      0x8004B460
    {
            ctx->lr = 0x80CEE0CCu;
            ctx->pc = 0x8004B460u;
            return;
    }

label_80CEE0CC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE0CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CEE0CC: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_80CEE0D0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE0D0u)) return;
    // 80CEE0D0: b       0x80CEE180
    {
            goto label_80CEE180;
    }

label_80CEE0D4:
    ctx->pc = 0x80CEE0D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 33u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE0D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 33u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80CEE0D4: lwz     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE0D8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE0D8u)) return;
    // 80CEE0D8: rlwinm r21, r3, 2, 0, 29
    {
        ctx->gpr[21] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80CEE0DC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE0DCu)) return;
    // 80CEE0DC: add   r5, r0, r21
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80CEE0E0:
    ctx->pc = 0x80CEE0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE0E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80CEE0E0: lhz     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE0E4:
    ctx->pc = 0x80CEE0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE0E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80CEE0E4: lwz     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE0E8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80CEE0E8u)) return;
    // 80CEE0E8: mulli   r18, r3, 48
    ctx->gpr[18] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)48);

label_80CEE0EC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE0ECu)) return;
    // 80CEE0EC: addi    r3, r18, 24
    ctx->gpr[3] = ctx->gpr[18] + (u32)(s32)(24);

label_80CEE0F0:
    ctx->pc = 0x80CEE0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE0F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80CEE0F0: lhz     r0, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE0F4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80CEE0F4u)) return;
    // 80CEE0F4: mulli   r19, r0, 12
    ctx->gpr[19] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80CEE0F8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE0F8u)) return;
    // 80CEE0F8: add   r5, r28, r19
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80CEE0FC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE0FCu)) return;
    // 80CEE0FC: add   r4, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80CEE100:
    ctx->pc = 0x80CEE100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80CEE100: lwz     r3, 0(r4)
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
label_80CEE104:
    ctx->pc = 0x80CEE104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80CEE104: lwz     r0, 4(r4)
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
label_80CEE108:
    ctx->pc = 0x80CEE108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80CEE108: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE10C:
    ctx->pc = 0x80CEE10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE10Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CEE10C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE110:
    ctx->pc = 0x80CEE110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CEE110: lwz     r0, 8(r4)
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
label_80CEE114:
    ctx->pc = 0x80CEE114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CEE114: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE118:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE118u)) return;
    // 80CEE118: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CEE11C:
    ctx->pc = 0x80CEE11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE11Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CEE11C: lwz     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE120:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE120u)) return;
    // 80CEE120: addi    r0, r21, 2
    ctx->gpr[0] = ctx->gpr[21] + (u32)(s32)(2);

label_80CEE124:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80CEE124u)) return;
    // 80CEE124: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80CEE128:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE128u)) return;
    // 80CEE128: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80CEE12C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80CEE12Cu)) return;
    // 80CEE12C: mulli   r20, r6, 12
    ctx->gpr[20] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)12);

label_80CEE130:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE130u)) return;
    // 80CEE130: add   r5, r27, r20
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80CEE134:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE134u)) return;
    // 80CEE134: bl      0x8004A5F4
    {
            ctx->lr = 0x80CEE138u;
            ctx->pc = 0x8004A5F4u;
            return;
    }

label_80CEE138:
    ctx->pc = 0x80CEE138u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE138u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80CEE138: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE13C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE13Cu)) return;
    // 80CEE13C: addi    r0, r18, 36
    ctx->gpr[0] = ctx->gpr[18] + (u32)(s32)(36);

label_80CEE140:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE140u)) return;
    // 80CEE140: add   r5, r30, r19
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80CEE144:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE144u)) return;
    // 80CEE144: add   r4, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80CEE148:
    ctx->pc = 0x80CEE148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CEE148: lwz     r3, 0(r4)
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
label_80CEE14C:
    ctx->pc = 0x80CEE14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE14Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CEE14C: lwz     r0, 4(r4)
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
label_80CEE150:
    ctx->pc = 0x80CEE150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CEE150: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE154:
    ctx->pc = 0x80CEE154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CEE154: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE158:
    ctx->pc = 0x80CEE158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CEE158: lwz     r0, 8(r4)
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
label_80CEE15C:
    ctx->pc = 0x80CEE15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE15Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CEE15C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE160:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE160u)) return;
    // 80CEE160: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CEE164:
    ctx->pc = 0x80CEE164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CEE164: lwz     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE168:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE168u)) return;
    // 80CEE168: addi    r0, r21, 3
    ctx->gpr[0] = ctx->gpr[21] + (u32)(s32)(3);

label_80CEE16C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80CEE16Cu)) return;
    // 80CEE16C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80CEE170:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE170u)) return;
    // 80CEE170: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80CEE174:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE174u)) return;
    // 80CEE174: add   r5, r29, r20
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80CEE178:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE178u)) return;
    // 80CEE178: bl      0x8004ABF4
    {
            ctx->lr = 0x80CEE17Cu;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80CEE17C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE17Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CEE17C: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_80CEE180:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE180u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CEE180: rlwinm r3, r22, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[22], 0u) & 0x0000FFFFu;
    }

label_80CEE184:
    ctx->pc = 0x80CEE184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE184u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE184: lbz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE188:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE188u)) return;
    // 80CEE188: cmpw    r3, r0
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

label_80CEE18C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE18Cu)) return;
    // 80CEE18C: bc    12, 0, 0x80CEE0D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CEE0D4u;
                return;
            }
            goto label_80CEE0D4;
        }
    }

label_80CEE190:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE190u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CEE190: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80CEE194:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE194u)) return;
    // 80CEE194: bl      0x8004B504
    {
            ctx->lr = 0x80CEE198u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80CEE198:
    ctx->pc = 0x80CEE198u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE198u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE198: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE19C:
    ctx->pc = 0x80CEE19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE19Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CEE19C: lwz     r3, 4(r3)
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
label_80CEE1A0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE1A0u)) return;
    // 80CEE1A0: bl      0x80CEE4FC
    {
            ctx->lr = 0x80CEE1A4u;
            goto label_80CEE4FC;
    }

label_80CEE1A4:
    ctx->pc = 0x80CEE1A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE1A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE1A4: lwz     r3, 8(r31)
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
label_80CEE1A8:
    ctx->pc = 0x80CEE1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE1A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CEE1A8: lwz     r3, 4(r3)
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
label_80CEE1AC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE1ACu)) return;
    // 80CEE1AC: bl      0x80CEE4FC
    {
            ctx->lr = 0x80CEE1B0u;
            goto label_80CEE4FC;
    }

label_80CEE1B0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE1B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CEE1B0: addi    r31, r31, 24
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(24);

label_80CEE1B4:
    ctx->pc = 0x80CEE1B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE1B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE1B4: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE1B8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE1B8u)) return;
    // 80CEE1B8: cmplwi  r3, 0x0000
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

label_80CEE1BC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE1BCu)) return;
    // 80CEE1BC: bc    4, 2, 0x80CEDD48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CEDD48u;
                return;
            }
            goto label_80CEDD48;
        }
    }

label_80CEE1C0:
    ctx->pc = 0x80CEE1C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE1C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CEE1C0: b       0x80CEE1C8
    {
            goto label_80CEE1C8;
    }

label_80CEE1C4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE1C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CEE1C4: b       0x80CEE1C4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CEE1C4u;
                return;
            }
            goto label_80CEE1C4;
    }

label_80CEE1C8:
    ctx->pc = 0x80CEE1C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE1C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEE1C8: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CEE1C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80CEE1C8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE1CC:
    ctx->pc = 0x80CEE1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE1CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE1CC: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEE1CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE1D0:
    ctx->pc = 0x80CEE1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE1D0u)) return;
    // 80CEE1D0: addi    r11, r1, 112
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(112);

label_80CEE1D4:
    ctx->pc = 0x80CEE1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE1D4u)) return;
    // 80CEE1D4: bl      0x80006DF8
    {
            ctx->lr = 0x80CEE1D8u;
            ctx->pc = 0x80006DF8u;
            return;
    }

label_80CEE1D8:
    ctx->pc = 0x80CEE1D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE1D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEE1D8: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE1DC:
    ctx->pc = 0x80CEE1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CEE1DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE1DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE1E0:
    ctx->pc = 0x80CEE1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE1E0u)) return;
    // 80CEE1E0: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_80CEE1E4:
    ctx->pc = 0x80CEE1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE1E4u)) return;
    // 80CEE1E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CEDB20;
        }
    }

label_80CEE1E8:
    ctx->pc = 0x80CEE1E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE1E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80CEE1E8: stwu     r1, -96(r1)
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
label_80CEE1EC:
    ctx->pc = 0x80CEE1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE1ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CEE1EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE1F0:
    ctx->pc = 0x80CEE1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE1F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CEE1F0: stw     r0, 100(r1)
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
label_80CEE1F4:
    ctx->pc = 0x80CEE1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE1F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CEE1F4: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEE1F4u)) return;
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
label_80CEE1F8:
    ctx->pc = 0x80CEE1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE1F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CEE1F8: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CEE1F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80CEE1F8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE1FC:
    ctx->pc = 0x80CEE1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE1FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CEE1FC: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEE1FCu)) return;
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
label_80CEE200:
    ctx->pc = 0x80CEE200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CEE200: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CEE200u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80CEE200u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE204:
    ctx->pc = 0x80CEE204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CEE204: stw     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE208:
    ctx->pc = 0x80CEE208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CEE208: stw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE20C:
    ctx->pc = 0x80CEE20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE20Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEE20C: stw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE210:
    ctx->pc = 0x80CEE210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEE210: stw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE214:
    ctx->pc = 0x80CEE214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE214u)) return;
    // 80CEE214: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CEE218:
    ctx->pc = 0x80CEE218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE218: lwz     r31, 60(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(60);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE21C:
    ctx->pc = 0x80CEE21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE21Cu)) return;
    // 80CEE21C: cmplwi  r31, 0x0000
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

label_80CEE220:
    ctx->pc = 0x80CEE220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE220u)) return;
    // 80CEE220: bc    12, 2, 0x80CEE4CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CEE4CC;
        }
    }

label_80CEE224:
    ctx->pc = 0x80CEE224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEE224: lwz     r30, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE228:
    ctx->pc = 0x80CEE228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE228: lwz     r29, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE22C:
    ctx->pc = 0x80CEE22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE22Cu)) return;
    // 80CEE22C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80CEE230:
    ctx->pc = 0x80CEE230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE230u)) return;
    // 80CEE230: bl      0x80612BEC
    {
            ctx->lr = 0x80CEE234u;
            ctx->pc = 0x80612BECu;
            return;
    }

label_80CEE234:
    ctx->pc = 0x80CEE234u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE234u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CEE234: cmplwi  r30, 0x0000
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

label_80CEE238:
    ctx->pc = 0x80CEE238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE238u)) return;
    // 80CEE238: bc    12, 2, 0x80CEE4C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CEE4C4;
        }
    }

label_80CEE23C:
    ctx->pc = 0x80CEE23Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE23Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80CEE23C: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE240:
    ctx->pc = 0x80CEE240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CEE240: lwz     r0, 4(r3)
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
label_80CEE244:
    ctx->pc = 0x80CEE244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE244u)) return;
    // 80CEE244: lis     r3, -27364
    ctx->gpr[3] = ((u32)(s32)(-27364) << 16);

label_80CEE248:
    ctx->pc = 0x80CEE248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE248u)) return;
    // 80CEE248: addi    r3, r3, -13672
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13672);

label_80CEE24C:
    ctx->pc = 0x80CEE24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE24Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CEE24C: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CEE24Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE250:
    ctx->pc = 0x80CEE250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CEE250: stw     r0, 36(r1)
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
label_80CEE254:
    ctx->pc = 0x80CEE254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE254u)) return;
    // 80CEE254: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80CEE258:
    ctx->pc = 0x80CEE258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE258u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CEE258: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE25C:
    ctx->pc = 0x80CEE25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE25Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEE25C: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEE25Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE260:
    ctx->pc = 0x80CEE260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE260u)) return;
    // 80CEE260: fsubs   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CEE260u)) return;
    ppc_fsubs(ctx, 30, 0, 1);

label_80CEE264:
    ctx->pc = 0x80CEE264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEE264: lfs     f31, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CEE264u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
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
label_80CEE268:
    ctx->pc = 0x80CEE268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE268: lwz     r3, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE26C:
    ctx->pc = 0x80CEE26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE26Cu)) return;
    // 80CEE26C: cmplwi  r3, 0x0000
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

label_80CEE270:
    ctx->pc = 0x80CEE270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE270u)) return;
    // 80CEE270: bc    12, 2, 0x80CEE278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CEE278;
        }
    }

label_80CEE274:
    ctx->pc = 0x80CEE274u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE274u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CEE274: bl      0x8060F594
    {
            ctx->lr = 0x80CEE278u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80CEE278:
    ctx->pc = 0x80CEE278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CEE278: cmplwi  r29, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80CEE27C:
    ctx->pc = 0x80CEE27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE27Cu)) return;
    // 80CEE27C: bc    12, 2, 0x80CEE430
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CEE430;
        }
    }

label_80CEE280:
    ctx->pc = 0x80CEE280u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE280u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE280: lbz     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE284:
    ctx->pc = 0x80CEE284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE284u)) return;
    // 80CEE284: cmplwi  r0, 0x0000
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

label_80CEE288:
    ctx->pc = 0x80CEE288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE288u)) return;
    // 80CEE288: bc    12, 2, 0x80CEE430
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CEE430;
        }
    }

label_80CEE28C:
    ctx->pc = 0x80CEE28Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE28Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80CEE28C: addi    r0, r1, 16
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(16);

label_80CEE290:
    ctx->pc = 0x80CEE290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE290u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CEE290: stw     r0, 12(r1)
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
label_80CEE294:
    ctx->pc = 0x80CEE294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CEE294: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE298:
    ctx->pc = 0x80CEE298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE298u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CEE298: stw     r0, 8(r1)
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
label_80CEE29C:
    ctx->pc = 0x80CEE29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE29Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CEE29C: lwz     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE2A0:
    ctx->pc = 0x80CEE2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CEE2A0: stw     r3, 16(r1)
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
label_80CEE2A4:
    ctx->pc = 0x80CEE2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEE2A4: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE2A8:
    ctx->pc = 0x80CEE2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEE2A8: stw     r0, 20(r1)
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
label_80CEE2AC:
    ctx->pc = 0x80CEE2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEE2AC: lbz     r0, 0(r29)
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
label_80CEE2B0:
    ctx->pc = 0x80CEE2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2B0u)) return;
    // 80CEE2B0: rlwinm r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_80CEE2B4:
    ctx->pc = 0x80CEE2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2B4u)) return;
    // 80CEE2B4: cmpwi   r0, 0
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

label_80CEE2B8:
    ctx->pc = 0x80CEE2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2B8u)) return;
    // 80CEE2B8: bc    12, 2, 0x80CEE2D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CEE2D0;
        }
    }

label_80CEE2BC:
    ctx->pc = 0x80CEE2BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE2BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CEE2BC: lis     r3, -27364
    ctx->gpr[3] = ((u32)(s32)(-27364) << 16);

label_80CEE2C0:
    ctx->pc = 0x80CEE2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2C0u)) return;
    // 80CEE2C0: addi    r3, r3, -13680
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13680);

label_80CEE2C4:
    ctx->pc = 0x80CEE2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE2C4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CEE2C4u)) return;
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
label_80CEE2C8:
    ctx->pc = 0x80CEE2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CEE2C8: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEE2C8u)) return;
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
label_80CEE2CC:
    ctx->pc = 0x80CEE2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2CCu)) return;
    // 80CEE2CC: b       0x80CEE2FC
    {
            goto label_80CEE2FC;
    }

label_80CEE2D0:
    ctx->pc = 0x80CEE2D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE2D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CEE2D0: lwz     r3, 4(r3)
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
label_80CEE2D4:
    ctx->pc = 0x80CEE2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2D4u)) return;
    // 80CEE2D4: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80CEE2D8:
    ctx->pc = 0x80CEE2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2D8u)) return;
    // 80CEE2D8: lis     r3, -27364
    ctx->gpr[3] = ((u32)(s32)(-27364) << 16);

label_80CEE2DC:
    ctx->pc = 0x80CEE2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2DCu)) return;
    // 80CEE2DC: addi    r3, r3, -13672
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13672);

label_80CEE2E0:
    ctx->pc = 0x80CEE2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CEE2E0: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CEE2E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE2E4:
    ctx->pc = 0x80CEE2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEE2E4: stw     r0, 36(r1)
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
label_80CEE2E8:
    ctx->pc = 0x80CEE2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2E8u)) return;
    // 80CEE2E8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80CEE2EC:
    ctx->pc = 0x80CEE2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEE2EC: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE2F0:
    ctx->pc = 0x80CEE2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE2F0: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEE2F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE2F4:
    ctx->pc = 0x80CEE2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2F4u)) return;
    // 80CEE2F4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CEE2F4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80CEE2F8:
    ctx->pc = 0x80CEE2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE2F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CEE2F8: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEE2F8u)) return;
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
label_80CEE2FC:
    ctx->pc = 0x80CEE2FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE2FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CEE2FC: lis     r3, -27364
    ctx->gpr[3] = ((u32)(s32)(-27364) << 16);

label_80CEE300:
    ctx->pc = 0x80CEE300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE300u)) return;
    // 80CEE300: addi    r3, r3, -13680
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13680);

label_80CEE304:
    ctx->pc = 0x80CEE304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEE304: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CEE304u)) return;
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
label_80CEE308:
    ctx->pc = 0x80CEE308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE308: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEE308u)) return;
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
label_80CEE30C:
    ctx->pc = 0x80CEE30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE30Cu)) return;
    // 80CEE30C: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x80CEE30Cu)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_80CEE310:
    ctx->pc = 0x80CEE310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE310u)) return;
    // 80CEE310: bl      0x80CEE554
    {
            ctx->lr = 0x80CEE314u;
            goto label_80CEE554;
    }

label_80CEE314:
    ctx->pc = 0x80CEE314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80CEE314: lis     r3, -27364
    ctx->gpr[3] = ((u32)(s32)(-27364) << 16);

label_80CEE318:
    ctx->pc = 0x80CEE318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE318u)) return;
    // 80CEE318: addi    r3, r3, -13632
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13632);

label_80CEE31C:
    ctx->pc = 0x80CEE31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE31Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CEE31C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CEE31Cu)) return;
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
label_80CEE320:
    ctx->pc = 0x80CEE320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE320u)) return;
    // 80CEE320: fmuls   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CEE320u)) return;
    ppc_fmuls(ctx, 2, 0, 1);

label_80CEE324:
    ctx->pc = 0x80CEE324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CEE324: lbz     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE328:
    ctx->pc = 0x80CEE328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE328u)) return;
    // 80CEE328: lis     r3, -27364
    ctx->gpr[3] = ((u32)(s32)(-27364) << 16);

label_80CEE32C:
    ctx->pc = 0x80CEE32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE32Cu)) return;
    // 80CEE32C: addi    r3, r3, -13672
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13672);

label_80CEE330:
    ctx->pc = 0x80CEE330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CEE330: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CEE330u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE334:
    ctx->pc = 0x80CEE334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CEE334: stw     r0, 36(r1)
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
label_80CEE338:
    ctx->pc = 0x80CEE338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE338u)) return;
    // 80CEE338: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80CEE33C:
    ctx->pc = 0x80CEE33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE33Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEE33C: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE340:
    ctx->pc = 0x80CEE340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEE340: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEE340u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE344:
    ctx->pc = 0x80CEE344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE344u)) return;
    // 80CEE344: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CEE344u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80CEE348:
    ctx->pc = 0x80CEE348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE348u)) return;
    // 80CEE348: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CEE348u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_80CEE34C:
    ctx->pc = 0x80CEE34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE34Cu)) return;
    // 80CEE34C: bc    4, 0, 0x80CEE368
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CEE368;
        }
    }

label_80CEE350:
    ctx->pc = 0x80CEE350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CEE350: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80CEE354:
    ctx->pc = 0x80CEE354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEE354: lwz     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE358:
    ctx->pc = 0x80CEE358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE358: lwz     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE35C:
    ctx->pc = 0x80CEE35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE35Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CEE35C: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEE35Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
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
label_80CEE360:
    ctx->pc = 0x80CEE360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE360u)) return;
    // 80CEE360: bl      0x80CEDCD4
    {
            ctx->lr = 0x80CEE364u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CEDCD4u;
                return;
            }
            goto label_80CEDCD4;
    }

label_80CEE364:
    ctx->pc = 0x80CEE364u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE364u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80CEE364: b       0x80CEE37C
    {
            goto label_80CEE37C;
    }

label_80CEE368:
    ctx->pc = 0x80CEE368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CEE368: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80CEE36C:
    ctx->pc = 0x80CEE36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE36Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEE36C: lwz     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE370:
    ctx->pc = 0x80CEE370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE370: lwz     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE374:
    ctx->pc = 0x80CEE374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CEE374: lfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEE374u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
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
label_80CEE378:
    ctx->pc = 0x80CEE378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE378u)) return;
    // 80CEE378: bl      0x80CEDCD4
    {
            ctx->lr = 0x80CEE37Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CEDCD4u;
                return;
            }
            goto label_80CEDCD4;
    }

label_80CEE37C:
    ctx->pc = 0x80CEE37Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 35u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE37Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 35u : 1u;
    // 80CEE37C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80CEE380:
    ctx->pc = 0x80CEE380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE380u)) return;
    // 80CEE380: lis     r4, -27364
    ctx->gpr[4] = ((u32)(s32)(-27364) << 16);

label_80CEE384:
    ctx->pc = 0x80CEE384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE384u)) return;
    // 80CEE384: addi    r4, r4, -13656
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13656);

label_80CEE388:
    ctx->pc = 0x80CEE388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80CEE388: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CEE388u)) return;
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
label_80CEE38C:
    ctx->pc = 0x80CEE38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE38Cu)) return;
    // 80CEE38C: fadds   f2, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x80CEE38Cu)) return;
    ppc_fadds(ctx, 2, 0, 31);

label_80CEE390:
    ctx->pc = 0x80CEE390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80CEE390: lbz     r4, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE394:
    ctx->pc = 0x80CEE394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE394u)) return;
    // 80CEE394: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_80CEE398:
    ctx->pc = 0x80CEE398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE398u)) return;
    // 80CEE398: lis     r4, -27364
    ctx->gpr[4] = ((u32)(s32)(-27364) << 16);

label_80CEE39C:
    ctx->pc = 0x80CEE39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE39Cu)) return;
    // 80CEE39C: addi    r4, r4, -13664
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13664);

label_80CEE3A0:
    ctx->pc = 0x80CEE3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80CEE3A0: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80CEE3A0u)) return;
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
label_80CEE3A4:
    ctx->pc = 0x80CEE3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3A4u)) return;
    // 80CEE3A4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_80CEE3A8:
    ctx->pc = 0x80CEE3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80CEE3A8: stw     r0, 36(r1)
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
label_80CEE3AC:
    ctx->pc = 0x80CEE3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3ACu)) return;
    // 80CEE3AC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80CEE3B0:
    ctx->pc = 0x80CEE3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80CEE3B0: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE3B4:
    ctx->pc = 0x80CEE3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80CEE3B4: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEE3B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE3B8:
    ctx->pc = 0x80CEE3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3B8u)) return;
    // 80CEE3B8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80CEE3B8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80CEE3BC:
    ctx->pc = 0x80CEE3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80CEE3BCu)) return;
    // 80CEE3BC: fdivs   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80CEE3BCu)) return;
    ppc_fdivs(ctx, 1, 2, 0);

label_80CEE3C0:
    ctx->pc = 0x80CEE3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3C0u)) return;
    // 80CEE3C0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80CEE3C4:
    ctx->pc = 0x80CEE3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3C4u)) return;
    // 80CEE3C4: bl      0x805F8560
    {
            ctx->lr = 0x80CEE3C8u;
            ctx->pc = 0x805F8560u;
            return;
    }

label_80CEE3C8:
    ctx->pc = 0x80CEE3C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE3C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CEE3C8: lis     r3, -27364
    ctx->gpr[3] = ((u32)(s32)(-27364) << 16);

label_80CEE3CC:
    ctx->pc = 0x80CEE3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3CCu)) return;
    // 80CEE3CC: addi    r3, r3, -13656
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13656);

label_80CEE3D0:
    ctx->pc = 0x80CEE3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEE3D0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CEE3D0u)) return;
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
label_80CEE3D4:
    ctx->pc = 0x80CEE3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3D4u)) return;
    // 80CEE3D4: fadds   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80CEE3D4u)) return;
    ppc_fadds(ctx, 31, 31, 0);

label_80CEE3D8:
    ctx->pc = 0x80CEE3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3D8u)) return;
    // 80CEE3D8: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x80CEE3D8u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_80CEE3DC:
    ctx->pc = 0x80CEE3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3DCu)) return;
    // 80CEE3DC: bl      0x80CEE554
    {
            ctx->lr = 0x80CEE3E0u;
            goto label_80CEE554;
    }

label_80CEE3E0:
    ctx->pc = 0x80CEE3E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE3E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CEE3E0: lbz     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE3E4:
    ctx->pc = 0x80CEE3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3E4u)) return;
    // 80CEE3E4: lis     r3, -27364
    ctx->gpr[3] = ((u32)(s32)(-27364) << 16);

label_80CEE3E8:
    ctx->pc = 0x80CEE3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3E8u)) return;
    // 80CEE3E8: addi    r3, r3, -13672
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13672);

label_80CEE3EC:
    ctx->pc = 0x80CEE3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CEE3EC: lfd     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CEE3ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE3F0:
    ctx->pc = 0x80CEE3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CEE3F0: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE3F4:
    ctx->pc = 0x80CEE3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3F4u)) return;
    // 80CEE3F4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80CEE3F8:
    ctx->pc = 0x80CEE3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEE3F8: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE3FC:
    ctx->pc = 0x80CEE3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE3FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEE3FC: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEE3FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE400:
    ctx->pc = 0x80CEE400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE400u)) return;
    // 80CEE400: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80CEE400u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_80CEE404:
    ctx->pc = 0x80CEE404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE404u)) return;
    // 80CEE404: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80CEE404u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80CEE408:
    ctx->pc = 0x80CEE408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE408u)) return;
    // 80CEE408: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80CEE40C:
    ctx->pc = 0x80CEE40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE40Cu)) return;
    // 80CEE40C: bc    4, 2, 0x80CEE4C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CEE4C0;
        }
    }

label_80CEE410:
    ctx->pc = 0x80CEE410u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE410u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CEE410: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80CEE414:
    ctx->pc = 0x80CEE414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE414u)) return;
    // 80CEE414: bl      0x8050ED40
    {
            ctx->lr = 0x80CEE418u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80CEE418:
    ctx->pc = 0x80CEE418u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE418u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CEE418: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80CEE41C:
    ctx->pc = 0x80CEE41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE41Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEE41C: stw     r0, 68(r31)
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
label_80CEE420:
    ctx->pc = 0x80CEE420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE420u)) return;
    // 80CEE420: lis     r3, -27364
    ctx->gpr[3] = ((u32)(s32)(-27364) << 16);

label_80CEE424:
    ctx->pc = 0x80CEE424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE424u)) return;
    // 80CEE424: addi    r3, r3, -13680
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13680);

label_80CEE428:
    ctx->pc = 0x80CEE428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CEE428: lfs     f31, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CEE428u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80CEE42C:
    ctx->pc = 0x80CEE42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE42Cu)) return;
    // 80CEE42C: b       0x80CEE4C0
    {
            goto label_80CEE4C0;
    }

label_80CEE430:
    ctx->pc = 0x80CEE430u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE430u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80CEE430: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80CEE434:
    ctx->pc = 0x80CEE434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEE434: lwz     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE438:
    ctx->pc = 0x80CEE438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE438: lwz     r5, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE43C:
    ctx->pc = 0x80CEE43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE43Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CEE43C: lfs     f1, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CEE43Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
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
label_80CEE440:
    ctx->pc = 0x80CEE440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE440u)) return;
    // 80CEE440: bl      0x80CEDCD4
    {
            ctx->lr = 0x80CEE444u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80CEDCD4u;
                return;
            }
            goto label_80CEDCD4;
    }

label_80CEE444:
    ctx->pc = 0x80CEE444u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE444u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80CEE444: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_80CEE448:
    ctx->pc = 0x80CEE448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE448: lfs     f1, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CEE448u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
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
label_80CEE44C:
    ctx->pc = 0x80CEE44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE44Cu)) return;
    // 80CEE44C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80CEE450:
    ctx->pc = 0x80CEE450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE450u)) return;
    // 80CEE450: bl      0x805FC100
    {
            ctx->lr = 0x80CEE454u;
            ctx->pc = 0x805FC100u;
            return;
    }

label_80CEE454:
    ctx->pc = 0x80CEE454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEE454: lfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x80CEE454u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
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
label_80CEE458:
    ctx->pc = 0x80CEE458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE458u)) return;
    // 80CEE458: fadds   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80CEE458u)) return;
    ppc_fadds(ctx, 31, 31, 0);

label_80CEE45C:
    ctx->pc = 0x80CEE45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE45Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEE45C: lbz     r0, 0(r30)
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
label_80CEE460:
    ctx->pc = 0x80CEE460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE460u)) return;
    // 80CEE460: rlwinm r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_80CEE464:
    ctx->pc = 0x80CEE464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE464u)) return;
    // 80CEE464: cmpwi   r0, 0
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

label_80CEE468:
    ctx->pc = 0x80CEE468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE468u)) return;
    // 80CEE468: bc    12, 2, 0x80CEE48C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CEE48C;
        }
    }

label_80CEE46C:
    ctx->pc = 0x80CEE46Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE46Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80CEE46C: fcmpo   cr0, f31, f30
    if (!ppc_fp_available_inline(ctx, 0x80CEE46Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[30], true);

label_80CEE470:
    ctx->pc = 0x80CEE470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE470u)) return;
    // 80CEE470: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80CEE474:
    ctx->pc = 0x80CEE474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE474u)) return;
    // 80CEE474: bc    4, 2, 0x80CEE4C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CEE4C0;
        }
    }

label_80CEE478:
    ctx->pc = 0x80CEE478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE478: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE47C:
    ctx->pc = 0x80CEE47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE47Cu)) return;
    // 80CEE47C: cmplwi  r0, 0x0000
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

label_80CEE480:
    ctx->pc = 0x80CEE480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE480u)) return;
    // 80CEE480: bc    4, 2, 0x80CEE4A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CEE4A8;
        }
    }

label_80CEE484:
    ctx->pc = 0x80CEE484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CEE484: fsubs   f31, f31, f30
    if (!ppc_fp_available_inline(ctx, 0x80CEE484u)) return;
    ppc_fsubs(ctx, 31, 31, 30);

label_80CEE488:
    ctx->pc = 0x80CEE488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE488u)) return;
    // 80CEE488: b       0x80CEE4C0
    {
            goto label_80CEE4C0;
    }

label_80CEE48C:
    ctx->pc = 0x80CEE48Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE48Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80CEE48C: lis     r3, -27364
    ctx->gpr[3] = ((u32)(s32)(-27364) << 16);

label_80CEE490:
    ctx->pc = 0x80CEE490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE490u)) return;
    // 80CEE490: addi    r3, r3, -13656
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13656);

label_80CEE494:
    ctx->pc = 0x80CEE494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEE494: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CEE494u)) return;
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
label_80CEE498:
    ctx->pc = 0x80CEE498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE498u)) return;
    // 80CEE498: fsubs   f0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x80CEE498u)) return;
    ppc_fsubs(ctx, 0, 30, 0);

label_80CEE49C:
    ctx->pc = 0x80CEE49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE49Cu)) return;
    // 80CEE49C: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80CEE49Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_80CEE4A0:
    ctx->pc = 0x80CEE4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE4A0u)) return;
    // 80CEE4A0: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80CEE4A4:
    ctx->pc = 0x80CEE4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE4A4u)) return;
    // 80CEE4A4: bc    4, 2, 0x80CEE4C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80CEE4C0;
        }
    }

label_80CEE4A8:
    ctx->pc = 0x80CEE4A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE4A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEE4A8: stw     r30, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE4AC:
    ctx->pc = 0x80CEE4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE4ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEE4AC: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE4B0:
    ctx->pc = 0x80CEE4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE4B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEE4B0: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE4B4:
    ctx->pc = 0x80CEE4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE4B4u)) return;
    // 80CEE4B4: lis     r3, -27364
    ctx->gpr[3] = ((u32)(s32)(-27364) << 16);

label_80CEE4B8:
    ctx->pc = 0x80CEE4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE4B8u)) return;
    // 80CEE4B8: addi    r3, r3, -13680
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13680);

label_80CEE4BC:
    ctx->pc = 0x80CEE4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE4BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CEE4BC: lfs     f31, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80CEE4BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80CEE4C0:
    ctx->pc = 0x80CEE4C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE4C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80CEE4C0: stfs     f31, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x80CEE4C0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE4C4:
    ctx->pc = 0x80CEE4C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE4C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80CEE4C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80CEE4C8:
    ctx->pc = 0x80CEE4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE4C8u)) return;
    // 80CEE4C8: bl      0x80612BEC
    {
            ctx->lr = 0x80CEE4CCu;
            ctx->pc = 0x80612BECu;
            return;
    }

label_80CEE4CC:
    ctx->pc = 0x80CEE4CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE4CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80CEE4CC: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CEE4CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80CEE4CCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE4D0:
    ctx->pc = 0x80CEE4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE4D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80CEE4D0: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEE4D0u)) return;
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
label_80CEE4D4:
    ctx->pc = 0x80CEE4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE4D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80CEE4D4: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80CEE4D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80CEE4D4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE4D8:
    ctx->pc = 0x80CEE4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE4D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80CEE4D8: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80CEE4D8u)) return;
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
label_80CEE4DC:
    ctx->pc = 0x80CEE4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE4DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80CEE4DC: lwz     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE4E0:
    ctx->pc = 0x80CEE4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE4E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CEE4E0: lwz     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE4E4:
    ctx->pc = 0x80CEE4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE4E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CEE4E4: lwz     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE4E8:
    ctx->pc = 0x80CEE4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE4E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEE4E8: lwz     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE4EC:
    ctx->pc = 0x80CEE4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE4ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEE4EC: lwz     r0, 100(r1)
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
label_80CEE4F0:
    ctx->pc = 0x80CEE4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CEE4F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE4F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE4F4:
    ctx->pc = 0x80CEE4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE4F4u)) return;
    // 80CEE4F4: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80CEE4F8:
    ctx->pc = 0x80CEE4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE4F8u)) return;
    // 80CEE4F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CEDB20;
        }
    }

label_80CEE4FC:
    ctx->pc = 0x80CEE4FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE4FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80CEE4FC: stwu     r1, -16(r1)
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
label_80CEE500:
    ctx->pc = 0x80CEE500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80CEE500: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE504:
    ctx->pc = 0x80CEE504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEE504: stw     r0, 20(r1)
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
label_80CEE508:
    ctx->pc = 0x80CEE508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEE508: stw     r31, 12(r1)
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
label_80CEE50C:
    ctx->pc = 0x80CEE50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE50Cu)) return;
    // 80CEE50C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80CEE510:
    ctx->pc = 0x80CEE510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE510: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE514:
    ctx->pc = 0x80CEE514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE514u)) return;
    // 80CEE514: cmplwi  r3, 0x0000
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

label_80CEE518:
    ctx->pc = 0x80CEE518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE518u)) return;
    // 80CEE518: bc    12, 2, 0x80CEE528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CEE528;
        }
    }

label_80CEE51C:
    ctx->pc = 0x80CEE51Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE51Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEE51C: lwz     r0, 8(r31)
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
label_80CEE520:
    ctx->pc = 0x80CEE520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80CEE520u)) return;
    // 80CEE520: mulli   r4, r0, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80CEE524:
    ctx->pc = 0x80CEE524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE524u)) return;
    // 80CEE524: bl      0x8003CB50
    {
            ctx->lr = 0x80CEE528u;
            ctx->pc = 0x8003CB50u;
            return;
    }

label_80CEE528:
    ctx->pc = 0x80CEE528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE528: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE52C:
    ctx->pc = 0x80CEE52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE52Cu)) return;
    // 80CEE52C: cmplwi  r3, 0x0000
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

label_80CEE530:
    ctx->pc = 0x80CEE530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE530u)) return;
    // 80CEE530: bc    12, 2, 0x80CEE540
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80CEE540;
        }
    }

label_80CEE534:
    ctx->pc = 0x80CEE534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEE534: lwz     r0, 8(r31)
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
label_80CEE538:
    ctx->pc = 0x80CEE538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80CEE538u)) return;
    // 80CEE538: mulli   r4, r0, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80CEE53C:
    ctx->pc = 0x80CEE53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE53Cu)) return;
    // 80CEE53C: bl      0x8003CB50
    {
            ctx->lr = 0x80CEE540u;
            ctx->pc = 0x8003CB50u;
            return;
    }

label_80CEE540:
    ctx->pc = 0x80CEE540u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE540u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80CEE540: lwz     r31, 12(r1)
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
label_80CEE544:
    ctx->pc = 0x80CEE544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEE544: lwz     r0, 20(r1)
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
label_80CEE548:
    ctx->pc = 0x80CEE548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CEE548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE548: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE54C:
    ctx->pc = 0x80CEE54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE54Cu)) return;
    // 80CEE54C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CEE550:
    ctx->pc = 0x80CEE550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE550u)) return;
    // 80CEE550: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CEDB20;
        }
    }

label_80CEE554:
    ctx->pc = 0x80CEE554u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE554u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80CEE554: stwu     r1, -16(r1)
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
label_80CEE558:
    ctx->pc = 0x80CEE558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE558: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE55C:
    ctx->pc = 0x80CEE55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE55Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80CEE55C: stw     r0, 20(r1)
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
label_80CEE560:
    ctx->pc = 0x80CEE560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE560u)) return;
    // 80CEE560: bl      0x80013A1C
    {
            ctx->lr = 0x80CEE564u;
            ctx->pc = 0x80013A1Cu;
            return;
    }

label_80CEE564:
    ctx->pc = 0x80CEE564u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80CEE564u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80CEE564: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80CEE564u)) return;
    ppc_frsp(ctx, 1, 1);

label_80CEE568:
    ctx->pc = 0x80CEE568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80CEE568: lwz     r0, 20(r1)
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
label_80CEE56C:
    ctx->pc = 0x80CEE56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80CEE56Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80CEE56C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80CEE570:
    ctx->pc = 0x80CEE570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE570u)) return;
    // 80CEE570: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80CEE574:
    ctx->pc = 0x80CEE574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80CEE574u)) return;
    // 80CEE574: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80CEDB20;
        }
    }

    ctx->pc = 0x80CEE578u;
    return;
return_dispatch_80CEDB20:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80CEDBC4u: goto label_80CEDBC4;
    case 0x80CEDBECu: goto label_80CEDBEC;
    case 0x80CEDC18u: goto label_80CEDC18;
    case 0x80CEDC8Cu: goto label_80CEDC8C;
    case 0x80CEDCACu: goto label_80CEDCAC;
    case 0x80CEDCB4u: goto label_80CEDCB4;
    case 0x80CEDCF0u: goto label_80CEDCF0;
    case 0x80CEDD44u: goto label_80CEDD44;
    case 0x80CEDD80u: goto label_80CEDD80;
    case 0x80CEDDA0u: goto label_80CEDDA0;
    case 0x80CEDDB8u: goto label_80CEDDB8;
    case 0x80CEDDD4u: goto label_80CEDDD4;
    case 0x80CEDE08u: goto label_80CEDE08;
    case 0x80CEDE1Cu: goto label_80CEDE1C;
    case 0x80CEDE28u: goto label_80CEDE28;
    case 0x80CEDE34u: goto label_80CEDE34;
    case 0x80CEDECCu: goto label_80CEDECC;
    case 0x80CEDEDCu: goto label_80CEDEDC;
    case 0x80CEDF2Cu: goto label_80CEDF2C;
    case 0x80CEDF40u: goto label_80CEDF40;
    case 0x80CEDF5Cu: goto label_80CEDF5C;
    case 0x80CEDF78u: goto label_80CEDF78;
    case 0x80CEDFB0u: goto label_80CEDFB0;
    case 0x80CEDFC0u: goto label_80CEDFC0;
    case 0x80CEDFD0u: goto label_80CEDFD0;
    case 0x80CEDFF4u: goto label_80CEDFF4;
    case 0x80CEE004u: goto label_80CEE004;
    case 0x80CEE05Cu: goto label_80CEE05C;
    case 0x80CEE090u: goto label_80CEE090;
    case 0x80CEE0ACu: goto label_80CEE0AC;
    case 0x80CEE0BCu: goto label_80CEE0BC;
    case 0x80CEE0CCu: goto label_80CEE0CC;
    case 0x80CEE138u: goto label_80CEE138;
    case 0x80CEE17Cu: goto label_80CEE17C;
    case 0x80CEE198u: goto label_80CEE198;
    case 0x80CEE1A4u: goto label_80CEE1A4;
    case 0x80CEE1B0u: goto label_80CEE1B0;
    case 0x80CEE1D8u: goto label_80CEE1D8;
    case 0x80CEE234u: goto label_80CEE234;
    case 0x80CEE278u: goto label_80CEE278;
    case 0x80CEE314u: goto label_80CEE314;
    case 0x80CEE364u: goto label_80CEE364;
    case 0x80CEE37Cu: goto label_80CEE37C;
    case 0x80CEE3C8u: goto label_80CEE3C8;
    case 0x80CEE3E0u: goto label_80CEE3E0;
    case 0x80CEE418u: goto label_80CEE418;
    case 0x80CEE444u: goto label_80CEE444;
    case 0x80CEE454u: goto label_80CEE454;
    case 0x80CEE4CCu: goto label_80CEE4CC;
    case 0x80CEE528u: goto label_80CEE528;
    case 0x80CEE540u: goto label_80CEE540;
    case 0x80CEE564u: goto label_80CEE564;
    default: return;
    }
}

