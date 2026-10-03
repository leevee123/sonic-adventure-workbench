// DolRecomp output
#include "../generated.h"

void func_80B7F100(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80B7F100[651] = {
        &&label_80B7F100,
        &&label_80B7F104,
        &&label_80B7F108,
        &&label_80B7F10C,
        &&label_80B7F110,
        &&label_80B7F114,
        &&label_80B7F118,
        &&label_80B7F11C,
        &&label_80B7F120,
        &&label_80B7F124,
        &&label_80B7F128,
        &&label_80B7F12C,
        &&label_80B7F130,
        &&label_80B7F134,
        &&label_80B7F138,
        &&label_80B7F13C,
        &&label_80B7F140,
        &&label_80B7F144,
        &&label_80B7F148,
        &&label_80B7F14C,
        &&label_80B7F150,
        &&label_80B7F154,
        &&label_80B7F158,
        &&label_80B7F15C,
        &&label_80B7F160,
        &&label_80B7F164,
        &&label_80B7F168,
        &&label_80B7F16C,
        &&label_80B7F170,
        &&label_80B7F174,
        &&label_80B7F178,
        &&label_80B7F17C,
        &&label_80B7F180,
        &&label_80B7F184,
        &&label_80B7F188,
        &&label_80B7F18C,
        &&label_80B7F190,
        &&label_80B7F194,
        &&label_80B7F198,
        &&label_80B7F19C,
        &&label_80B7F1A0,
        &&label_80B7F1A4,
        &&label_80B7F1A8,
        &&label_80B7F1AC,
        &&label_80B7F1B0,
        &&label_80B7F1B4,
        &&label_80B7F1B8,
        &&label_80B7F1BC,
        &&label_80B7F1C0,
        &&label_80B7F1C4,
        &&label_80B7F1C8,
        &&label_80B7F1CC,
        &&label_80B7F1D0,
        &&label_80B7F1D4,
        &&label_80B7F1D8,
        &&label_80B7F1DC,
        &&label_80B7F1E0,
        &&label_80B7F1E4,
        &&label_80B7F1E8,
        &&label_80B7F1EC,
        &&label_80B7F1F0,
        &&label_80B7F1F4,
        &&label_80B7F1F8,
        &&label_80B7F1FC,
        &&label_80B7F200,
        &&label_80B7F204,
        &&label_80B7F208,
        &&label_80B7F20C,
        &&label_80B7F210,
        &&label_80B7F214,
        &&label_80B7F218,
        &&label_80B7F21C,
        &&label_80B7F220,
        &&label_80B7F224,
        &&label_80B7F228,
        &&label_80B7F22C,
        &&label_80B7F230,
        &&label_80B7F234,
        &&label_80B7F238,
        &&label_80B7F23C,
        &&label_80B7F240,
        &&label_80B7F244,
        &&label_80B7F248,
        &&label_80B7F24C,
        &&label_80B7F250,
        &&label_80B7F254,
        &&label_80B7F258,
        &&label_80B7F25C,
        &&label_80B7F260,
        &&label_80B7F264,
        &&label_80B7F268,
        &&label_80B7F26C,
        &&label_80B7F270,
        &&label_80B7F274,
        &&label_80B7F278,
        &&label_80B7F27C,
        &&label_80B7F280,
        &&label_80B7F284,
        &&label_80B7F288,
        &&label_80B7F28C,
        &&label_80B7F290,
        &&label_80B7F294,
        &&label_80B7F298,
        &&label_80B7F29C,
        &&label_80B7F2A0,
        &&label_80B7F2A4,
        &&label_80B7F2A8,
        &&label_80B7F2AC,
        &&label_80B7F2B0,
        &&label_80B7F2B4,
        &&label_80B7F2B8,
        &&label_80B7F2BC,
        &&label_80B7F2C0,
        &&label_80B7F2C4,
        &&label_80B7F2C8,
        &&label_80B7F2CC,
        &&label_80B7F2D0,
        &&label_80B7F2D4,
        &&label_80B7F2D8,
        &&label_80B7F2DC,
        &&label_80B7F2E0,
        &&label_80B7F2E4,
        &&label_80B7F2E8,
        &&label_80B7F2EC,
        &&label_80B7F2F0,
        &&label_80B7F2F4,
        &&label_80B7F2F8,
        &&label_80B7F2FC,
        &&label_80B7F300,
        &&label_80B7F304,
        &&label_80B7F308,
        &&label_80B7F30C,
        &&label_80B7F310,
        &&label_80B7F314,
        &&label_80B7F318,
        &&label_80B7F31C,
        &&label_80B7F320,
        &&label_80B7F324,
        &&label_80B7F328,
        &&label_80B7F32C,
        &&label_80B7F330,
        &&label_80B7F334,
        &&label_80B7F338,
        &&label_80B7F33C,
        &&label_80B7F340,
        &&label_80B7F344,
        &&label_80B7F348,
        &&label_80B7F34C,
        &&label_80B7F350,
        &&label_80B7F354,
        &&label_80B7F358,
        &&label_80B7F35C,
        &&label_80B7F360,
        &&label_80B7F364,
        &&label_80B7F368,
        &&label_80B7F36C,
        &&label_80B7F370,
        &&label_80B7F374,
        &&label_80B7F378,
        &&label_80B7F37C,
        &&label_80B7F380,
        &&label_80B7F384,
        &&label_80B7F388,
        &&label_80B7F38C,
        &&label_80B7F390,
        &&label_80B7F394,
        &&label_80B7F398,
        &&label_80B7F39C,
        &&label_80B7F3A0,
        &&label_80B7F3A4,
        &&label_80B7F3A8,
        &&label_80B7F3AC,
        &&label_80B7F3B0,
        &&label_80B7F3B4,
        &&label_80B7F3B8,
        &&label_80B7F3BC,
        &&label_80B7F3C0,
        &&label_80B7F3C4,
        &&label_80B7F3C8,
        &&label_80B7F3CC,
        &&label_80B7F3D0,
        &&label_80B7F3D4,
        &&label_80B7F3D8,
        &&label_80B7F3DC,
        &&label_80B7F3E0,
        &&label_80B7F3E4,
        &&label_80B7F3E8,
        &&label_80B7F3EC,
        &&label_80B7F3F0,
        &&label_80B7F3F4,
        &&label_80B7F3F8,
        &&label_80B7F3FC,
        &&label_80B7F400,
        &&label_80B7F404,
        &&label_80B7F408,
        &&label_80B7F40C,
        &&label_80B7F410,
        &&label_80B7F414,
        &&label_80B7F418,
        &&label_80B7F41C,
        &&label_80B7F420,
        &&label_80B7F424,
        &&label_80B7F428,
        &&label_80B7F42C,
        &&label_80B7F430,
        &&label_80B7F434,
        &&label_80B7F438,
        &&label_80B7F43C,
        &&label_80B7F440,
        &&label_80B7F444,
        &&label_80B7F448,
        &&label_80B7F44C,
        &&label_80B7F450,
        &&label_80B7F454,
        &&label_80B7F458,
        &&label_80B7F45C,
        &&label_80B7F460,
        &&label_80B7F464,
        &&label_80B7F468,
        &&label_80B7F46C,
        &&label_80B7F470,
        &&label_80B7F474,
        &&label_80B7F478,
        &&label_80B7F47C,
        &&label_80B7F480,
        &&label_80B7F484,
        &&label_80B7F488,
        &&label_80B7F48C,
        &&label_80B7F490,
        &&label_80B7F494,
        &&label_80B7F498,
        &&label_80B7F49C,
        &&label_80B7F4A0,
        &&label_80B7F4A4,
        &&label_80B7F4A8,
        &&label_80B7F4AC,
        &&label_80B7F4B0,
        &&label_80B7F4B4,
        &&label_80B7F4B8,
        &&label_80B7F4BC,
        &&label_80B7F4C0,
        &&label_80B7F4C4,
        &&label_80B7F4C8,
        &&label_80B7F4CC,
        &&label_80B7F4D0,
        &&label_80B7F4D4,
        &&label_80B7F4D8,
        &&label_80B7F4DC,
        &&label_80B7F4E0,
        &&label_80B7F4E4,
        &&label_80B7F4E8,
        &&label_80B7F4EC,
        &&label_80B7F4F0,
        &&label_80B7F4F4,
        &&label_80B7F4F8,
        &&label_80B7F4FC,
        &&label_80B7F500,
        &&label_80B7F504,
        &&label_80B7F508,
        &&label_80B7F50C,
        &&label_80B7F510,
        &&label_80B7F514,
        &&label_80B7F518,
        &&label_80B7F51C,
        &&label_80B7F520,
        &&label_80B7F524,
        &&label_80B7F528,
        &&label_80B7F52C,
        &&label_80B7F530,
        &&label_80B7F534,
        &&label_80B7F538,
        &&label_80B7F53C,
        &&label_80B7F540,
        &&label_80B7F544,
        &&label_80B7F548,
        &&label_80B7F54C,
        &&label_80B7F550,
        &&label_80B7F554,
        &&label_80B7F558,
        &&label_80B7F55C,
        &&label_80B7F560,
        &&label_80B7F564,
        &&label_80B7F568,
        &&label_80B7F56C,
        &&label_80B7F570,
        &&label_80B7F574,
        &&label_80B7F578,
        &&label_80B7F57C,
        &&label_80B7F580,
        &&label_80B7F584,
        &&label_80B7F588,
        &&label_80B7F58C,
        &&label_80B7F590,
        &&label_80B7F594,
        &&label_80B7F598,
        &&label_80B7F59C,
        &&label_80B7F5A0,
        &&label_80B7F5A4,
        &&label_80B7F5A8,
        &&label_80B7F5AC,
        &&label_80B7F5B0,
        &&label_80B7F5B4,
        &&label_80B7F5B8,
        &&label_80B7F5BC,
        &&label_80B7F5C0,
        &&label_80B7F5C4,
        &&label_80B7F5C8,
        &&label_80B7F5CC,
        &&label_80B7F5D0,
        &&label_80B7F5D4,
        &&label_80B7F5D8,
        &&label_80B7F5DC,
        &&label_80B7F5E0,
        &&label_80B7F5E4,
        &&label_80B7F5E8,
        &&label_80B7F5EC,
        &&label_80B7F5F0,
        &&label_80B7F5F4,
        &&label_80B7F5F8,
        &&label_80B7F5FC,
        &&label_80B7F600,
        &&label_80B7F604,
        &&label_80B7F608,
        &&label_80B7F60C,
        &&label_80B7F610,
        &&label_80B7F614,
        &&label_80B7F618,
        &&label_80B7F61C,
        &&label_80B7F620,
        &&label_80B7F624,
        &&label_80B7F628,
        &&label_80B7F62C,
        &&label_80B7F630,
        &&label_80B7F634,
        &&label_80B7F638,
        &&label_80B7F63C,
        &&label_80B7F640,
        &&label_80B7F644,
        &&label_80B7F648,
        &&label_80B7F64C,
        &&label_80B7F650,
        &&label_80B7F654,
        &&label_80B7F658,
        &&label_80B7F65C,
        &&label_80B7F660,
        &&label_80B7F664,
        &&label_80B7F668,
        &&label_80B7F66C,
        &&label_80B7F670,
        &&label_80B7F674,
        &&label_80B7F678,
        &&label_80B7F67C,
        &&label_80B7F680,
        &&label_80B7F684,
        &&label_80B7F688,
        &&label_80B7F68C,
        &&label_80B7F690,
        &&label_80B7F694,
        &&label_80B7F698,
        &&label_80B7F69C,
        &&label_80B7F6A0,
        &&label_80B7F6A4,
        &&label_80B7F6A8,
        &&label_80B7F6AC,
        &&label_80B7F6B0,
        &&label_80B7F6B4,
        &&label_80B7F6B8,
        &&label_80B7F6BC,
        &&label_80B7F6C0,
        &&label_80B7F6C4,
        &&label_80B7F6C8,
        &&label_80B7F6CC,
        &&label_80B7F6D0,
        &&label_80B7F6D4,
        &&label_80B7F6D8,
        &&label_80B7F6DC,
        &&label_80B7F6E0,
        &&label_80B7F6E4,
        &&label_80B7F6E8,
        &&label_80B7F6EC,
        &&label_80B7F6F0,
        &&label_80B7F6F4,
        &&label_80B7F6F8,
        &&label_80B7F6FC,
        &&label_80B7F700,
        &&label_80B7F704,
        &&label_80B7F708,
        &&label_80B7F70C,
        &&label_80B7F710,
        &&label_80B7F714,
        &&label_80B7F718,
        &&label_80B7F71C,
        &&label_80B7F720,
        &&label_80B7F724,
        &&label_80B7F728,
        &&label_80B7F72C,
        &&label_80B7F730,
        &&label_80B7F734,
        &&label_80B7F738,
        &&label_80B7F73C,
        &&label_80B7F740,
        &&label_80B7F744,
        &&label_80B7F748,
        &&label_80B7F74C,
        &&label_80B7F750,
        &&label_80B7F754,
        &&label_80B7F758,
        &&label_80B7F75C,
        &&label_80B7F760,
        &&label_80B7F764,
        &&label_80B7F768,
        &&label_80B7F76C,
        &&label_80B7F770,
        &&label_80B7F774,
        &&label_80B7F778,
        &&label_80B7F77C,
        &&label_80B7F780,
        &&label_80B7F784,
        &&label_80B7F788,
        &&label_80B7F78C,
        &&label_80B7F790,
        &&label_80B7F794,
        &&label_80B7F798,
        &&label_80B7F79C,
        &&label_80B7F7A0,
        &&label_80B7F7A4,
        &&label_80B7F7A8,
        &&label_80B7F7AC,
        &&label_80B7F7B0,
        &&label_80B7F7B4,
        &&label_80B7F7B8,
        &&label_80B7F7BC,
        &&label_80B7F7C0,
        &&label_80B7F7C4,
        &&label_80B7F7C8,
        &&label_80B7F7CC,
        &&label_80B7F7D0,
        &&label_80B7F7D4,
        &&label_80B7F7D8,
        &&label_80B7F7DC,
        &&label_80B7F7E0,
        &&label_80B7F7E4,
        &&label_80B7F7E8,
        &&label_80B7F7EC,
        &&label_80B7F7F0,
        &&label_80B7F7F4,
        &&label_80B7F7F8,
        &&label_80B7F7FC,
        &&label_80B7F800,
        &&label_80B7F804,
        &&label_80B7F808,
        &&label_80B7F80C,
        &&label_80B7F810,
        &&label_80B7F814,
        &&label_80B7F818,
        &&label_80B7F81C,
        &&label_80B7F820,
        &&label_80B7F824,
        &&label_80B7F828,
        &&label_80B7F82C,
        &&label_80B7F830,
        &&label_80B7F834,
        &&label_80B7F838,
        &&label_80B7F83C,
        &&label_80B7F840,
        &&label_80B7F844,
        &&label_80B7F848,
        &&label_80B7F84C,
        &&label_80B7F850,
        &&label_80B7F854,
        &&label_80B7F858,
        &&label_80B7F85C,
        &&label_80B7F860,
        &&label_80B7F864,
        &&label_80B7F868,
        &&label_80B7F86C,
        &&label_80B7F870,
        &&label_80B7F874,
        &&label_80B7F878,
        &&label_80B7F87C,
        &&label_80B7F880,
        &&label_80B7F884,
        &&label_80B7F888,
        &&label_80B7F88C,
        &&label_80B7F890,
        &&label_80B7F894,
        &&label_80B7F898,
        &&label_80B7F89C,
        &&label_80B7F8A0,
        &&label_80B7F8A4,
        &&label_80B7F8A8,
        &&label_80B7F8AC,
        &&label_80B7F8B0,
        &&label_80B7F8B4,
        &&label_80B7F8B8,
        &&label_80B7F8BC,
        &&label_80B7F8C0,
        &&label_80B7F8C4,
        &&label_80B7F8C8,
        &&label_80B7F8CC,
        &&label_80B7F8D0,
        &&label_80B7F8D4,
        &&label_80B7F8D8,
        &&label_80B7F8DC,
        &&label_80B7F8E0,
        &&label_80B7F8E4,
        &&label_80B7F8E8,
        &&label_80B7F8EC,
        &&label_80B7F8F0,
        &&label_80B7F8F4,
        &&label_80B7F8F8,
        &&label_80B7F8FC,
        &&label_80B7F900,
        &&label_80B7F904,
        &&label_80B7F908,
        &&label_80B7F90C,
        &&label_80B7F910,
        &&label_80B7F914,
        &&label_80B7F918,
        &&label_80B7F91C,
        &&label_80B7F920,
        &&label_80B7F924,
        &&label_80B7F928,
        &&label_80B7F92C,
        &&label_80B7F930,
        &&label_80B7F934,
        &&label_80B7F938,
        &&label_80B7F93C,
        &&label_80B7F940,
        &&label_80B7F944,
        &&label_80B7F948,
        &&label_80B7F94C,
        &&label_80B7F950,
        &&label_80B7F954,
        &&label_80B7F958,
        &&label_80B7F95C,
        &&label_80B7F960,
        &&label_80B7F964,
        &&label_80B7F968,
        &&label_80B7F96C,
        &&label_80B7F970,
        &&label_80B7F974,
        &&label_80B7F978,
        &&label_80B7F97C,
        &&label_80B7F980,
        &&label_80B7F984,
        &&label_80B7F988,
        &&label_80B7F98C,
        &&label_80B7F990,
        &&label_80B7F994,
        &&label_80B7F998,
        &&label_80B7F99C,
        &&label_80B7F9A0,
        &&label_80B7F9A4,
        &&label_80B7F9A8,
        &&label_80B7F9AC,
        &&label_80B7F9B0,
        &&label_80B7F9B4,
        &&label_80B7F9B8,
        &&label_80B7F9BC,
        &&label_80B7F9C0,
        &&label_80B7F9C4,
        &&label_80B7F9C8,
        &&label_80B7F9CC,
        &&label_80B7F9D0,
        &&label_80B7F9D4,
        &&label_80B7F9D8,
        &&label_80B7F9DC,
        &&label_80B7F9E0,
        &&label_80B7F9E4,
        &&label_80B7F9E8,
        &&label_80B7F9EC,
        &&label_80B7F9F0,
        &&label_80B7F9F4,
        &&label_80B7F9F8,
        &&label_80B7F9FC,
        &&label_80B7FA00,
        &&label_80B7FA04,
        &&label_80B7FA08,
        &&label_80B7FA0C,
        &&label_80B7FA10,
        &&label_80B7FA14,
        &&label_80B7FA18,
        &&label_80B7FA1C,
        &&label_80B7FA20,
        &&label_80B7FA24,
        &&label_80B7FA28,
        &&label_80B7FA2C,
        &&label_80B7FA30,
        &&label_80B7FA34,
        &&label_80B7FA38,
        &&label_80B7FA3C,
        &&label_80B7FA40,
        &&label_80B7FA44,
        &&label_80B7FA48,
        &&label_80B7FA4C,
        &&label_80B7FA50,
        &&label_80B7FA54,
        &&label_80B7FA58,
        &&label_80B7FA5C,
        &&label_80B7FA60,
        &&label_80B7FA64,
        &&label_80B7FA68,
        &&label_80B7FA6C,
        &&label_80B7FA70,
        &&label_80B7FA74,
        &&label_80B7FA78,
        &&label_80B7FA7C,
        &&label_80B7FA80,
        &&label_80B7FA84,
        &&label_80B7FA88,
        &&label_80B7FA8C,
        &&label_80B7FA90,
        &&label_80B7FA94,
        &&label_80B7FA98,
        &&label_80B7FA9C,
        &&label_80B7FAA0,
        &&label_80B7FAA4,
        &&label_80B7FAA8,
        &&label_80B7FAAC,
        &&label_80B7FAB0,
        &&label_80B7FAB4,
        &&label_80B7FAB8,
        &&label_80B7FABC,
        &&label_80B7FAC0,
        &&label_80B7FAC4,
        &&label_80B7FAC8,
        &&label_80B7FACC,
        &&label_80B7FAD0,
        &&label_80B7FAD4,
        &&label_80B7FAD8,
        &&label_80B7FADC,
        &&label_80B7FAE0,
        &&label_80B7FAE4,
        &&label_80B7FAE8,
        &&label_80B7FAEC,
        &&label_80B7FAF0,
        &&label_80B7FAF4,
        &&label_80B7FAF8,
        &&label_80B7FAFC,
        &&label_80B7FB00,
        &&label_80B7FB04,
        &&label_80B7FB08,
        &&label_80B7FB0C,
        &&label_80B7FB10,
        &&label_80B7FB14,
        &&label_80B7FB18,
        &&label_80B7FB1C,
        &&label_80B7FB20,
        &&label_80B7FB24,
        &&label_80B7FB28
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80B7F100u && pc <= 0x80B7FB28u && ((pc - 0x80B7F100u) & 3u) == 0u)
            goto *pc_table_80B7F100[(pc - 0x80B7F100u) >> 2];
    }
    return;
label_80B7F100:
    ctx->pc = 0x80B7F100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7F100: stwu     r1, -16(r1)
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
label_80B7F104:
    ctx->pc = 0x80B7F104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7F104: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7F108:
    ctx->pc = 0x80B7F108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7F108: stw     r0, 20(r1)
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
label_80B7F10C:
    ctx->pc = 0x80B7F10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F10Cu)) return;
    // 80B7F10C: cmpwi   r3, 2
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

label_80B7F110:
    ctx->pc = 0x80B7F110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F110u)) return;
    // 80B7F110: bc    12, 2, 0x80B7FA94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7FA94;
        }
    }

label_80B7F114:
    ctx->pc = 0x80B7F114u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F114u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7F114: bc    4, 0, 0x80B7F128
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B7F128;
        }
    }

label_80B7F118:
    ctx->pc = 0x80B7F118u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F118u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F118: cmpwi   r3, 0
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

label_80B7F11C:
    ctx->pc = 0x80B7F11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F11Cu)) return;
    // 80B7F11C: bc    12, 2, 0x80B7FB1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B7FB1C;
        }
    }

label_80B7F120:
    ctx->pc = 0x80B7F120u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F120u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7F120: bc    4, 0, 0x80B7F130
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B7F130;
        }
    }

label_80B7F124:
    ctx->pc = 0x80B7F124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7F124: b       0x80B7FB1C
    {
            goto label_80B7FB1C;
    }

label_80B7F128:
    ctx->pc = 0x80B7F128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F128: cmpwi   r3, 4
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

label_80B7F12C:
    ctx->pc = 0x80B7F12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F12Cu)) return;
    // 80B7F12C: b       0x80B7FB1C
    {
            goto label_80B7FB1C;
    }

label_80B7F130:
    ctx->pc = 0x80B7F130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F130: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F134:
    ctx->pc = 0x80B7F134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F134u)) return;
    // 80B7F134: bl      0x8045EC10
    {
            ctx->lr = 0x80B7F138u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80B7F138:
    ctx->pc = 0x80B7F138u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F138u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7F138: bl      0x8045DE7C
    {
            ctx->lr = 0x80B7F13Cu;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80B7F13C:
    ctx->pc = 0x80B7F13Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F13Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7F13C: bl      0x80460A60
    {
            ctx->lr = 0x80B7F140u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80B7F140:
    ctx->pc = 0x80B7F140u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F140u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7F140: bl      0x80460A24
    {
            ctx->lr = 0x80B7F144u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80B7F144:
    ctx->pc = 0x80B7F144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B7F144: lis     r3, -28628
    ctx->gpr[3] = ((u32)(s32)(-28628) << 16);

label_80B7F148:
    ctx->pc = 0x80B7F148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F148u)) return;
    // 80B7F148: addi    r3, r3, -14944
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-14944);

label_80B7F14C:
    ctx->pc = 0x80B7F14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F14Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7F14C: lwz     r3, 0(r3)
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
label_80B7F150:
    ctx->pc = 0x80B7F150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7F150: lbz     r0, 15(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7F154:
    ctx->pc = 0x80B7F154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F154u)) return;
    // 80B7F154: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_80B7F158:
    ctx->pc = 0x80B7F158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F158u)) return;
    // 80B7F158: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80B7F15C:
    ctx->pc = 0x80B7F15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F15Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7F15C: stb     r0, 15(r3)
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
label_80B7F160:
    ctx->pc = 0x80B7F160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F160u)) return;
    // 80B7F160: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F164:
    ctx->pc = 0x80B7F164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F164u)) return;
    // 80B7F164: bl      0x8045F220
    {
            ctx->lr = 0x80B7F168u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F168:
    ctx->pc = 0x80B7F168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7F168: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F16C:
    ctx->pc = 0x80B7F16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F16Cu)) return;
    // 80B7F16C: addi    r4, r4, -32592
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32592);

label_80B7F170:
    ctx->pc = 0x80B7F170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7F170: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7F170u)) return;
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
label_80B7F174:
    ctx->pc = 0x80B7F174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F174u)) return;
    // 80B7F174: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F178:
    ctx->pc = 0x80B7F178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F178u)) return;
    // 80B7F178: addi    r4, r4, -32588
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32588);

label_80B7F17C:
    ctx->pc = 0x80B7F17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F17Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7F17C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7F17Cu)) return;
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
label_80B7F180:
    ctx->pc = 0x80B7F180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F180u)) return;
    // 80B7F180: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F184:
    ctx->pc = 0x80B7F184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F184u)) return;
    // 80B7F184: addi    r4, r4, -32584
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32584);

label_80B7F188:
    ctx->pc = 0x80B7F188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F188: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7F188u)) return;
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
label_80B7F18C:
    ctx->pc = 0x80B7F18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F18Cu)) return;
    // 80B7F18C: bl      0x8045EF2C
    {
            ctx->lr = 0x80B7F190u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B7F190:
    ctx->pc = 0x80B7F190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F190u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F190: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F194:
    ctx->pc = 0x80B7F194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F194u)) return;
    // 80B7F194: bl      0x8045F220
    {
            ctx->lr = 0x80B7F198u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F198:
    ctx->pc = 0x80B7F198u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F198u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7F198: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7F19C:
    ctx->pc = 0x80B7F19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F19Cu)) return;
    // 80B7F19C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B7F1A0:
    ctx->pc = 0x80B7F1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F1A0u)) return;
    // 80B7F1A0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7F1A4:
    ctx->pc = 0x80B7F1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F1A4u)) return;
    // 80B7F1A4: bl      0x8045EEA8
    {
            ctx->lr = 0x80B7F1A8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B7F1A8:
    ctx->pc = 0x80B7F1A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F1A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F1A8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F1AC:
    ctx->pc = 0x80B7F1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F1ACu)) return;
    // 80B7F1AC: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F1B0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F1B0:
    ctx->pc = 0x80B7F1B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F1B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F1B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F1B4:
    ctx->pc = 0x80B7F1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F1B4u)) return;
    // 80B7F1B4: bl      0x8045F220
    {
            ctx->lr = 0x80B7F1B8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F1B8:
    ctx->pc = 0x80B7F1B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F1B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7F1B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7F1BC:
    ctx->pc = 0x80B7F1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F1BCu)) return;
    // 80B7F1BC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B7F1C0:
    ctx->pc = 0x80B7F1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F1C0u)) return;
    // 80B7F1C0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7F1C4:
    ctx->pc = 0x80B7F1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F1C4u)) return;
    // 80B7F1C4: bl      0x8045EEA8
    {
            ctx->lr = 0x80B7F1C8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B7F1C8:
    ctx->pc = 0x80B7F1C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F1C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F1C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F1CC:
    ctx->pc = 0x80B7F1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F1CCu)) return;
    // 80B7F1CC: bl      0x8045F220
    {
            ctx->lr = 0x80B7F1D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F1D0:
    ctx->pc = 0x80B7F1D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F1D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7F1D0: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F1D4:
    ctx->pc = 0x80B7F1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F1D4u)) return;
    // 80B7F1D4: addi    r4, r4, -30560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30560);

label_80B7F1D8:
    ctx->pc = 0x80B7F1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F1D8u)) return;
    // 80B7F1D8: bl      0x8045C060
    {
            ctx->lr = 0x80B7F1DCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B7F1DC:
    ctx->pc = 0x80B7F1DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F1DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F1DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F1E0:
    ctx->pc = 0x80B7F1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F1E0u)) return;
    // 80B7F1E0: bl      0x8045F220
    {
            ctx->lr = 0x80B7F1E4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F1E4:
    ctx->pc = 0x80B7F1E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F1E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7F1E4: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F1E8:
    ctx->pc = 0x80B7F1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F1E8u)) return;
    // 80B7F1E8: addi    r4, r4, -28500
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28500);

label_80B7F1EC:
    ctx->pc = 0x80B7F1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F1ECu)) return;
    // 80B7F1EC: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B7F1F0:
    ctx->pc = 0x80B7F1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F1F0u)) return;
    // 80B7F1F0: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B7F1F4:
    ctx->pc = 0x80B7F1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F1F4u)) return;
    // 80B7F1F4: lis     r6, -27542
    ctx->gpr[6] = ((u32)(s32)(-27542) << 16);

label_80B7F1F8:
    ctx->pc = 0x80B7F1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F1F8u)) return;
    // 80B7F1F8: addi    r6, r6, -32580
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32580);

label_80B7F1FC:
    ctx->pc = 0x80B7F1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F1FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7F1FC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7F1FCu)) return;
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
label_80B7F200:
    ctx->pc = 0x80B7F200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F200u)) return;
    // 80B7F200: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B7F204:
    ctx->pc = 0x80B7F204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F204u)) return;
    // 80B7F204: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7F208:
    ctx->pc = 0x80B7F208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F208u)) return;
    // 80B7F208: bl      0x8045EBE4
    {
            ctx->lr = 0x80B7F20Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B7F20C:
    ctx->pc = 0x80B7F20Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F20Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B7F20C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F210:
    ctx->pc = 0x80B7F210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F210u)) return;
    // 80B7F210: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7F214:
    ctx->pc = 0x80B7F214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F214u)) return;
    // 80B7F214: li      r5, 7936
    ctx->gpr[5] = (u32)(s32)(7936);

label_80B7F218:
    ctx->pc = 0x80B7F218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F218u)) return;
    // 80B7F218: li      r6, 1024
    ctx->gpr[6] = (u32)(s32)(1024);

label_80B7F21C:
    ctx->pc = 0x80B7F21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F21Cu)) return;
    // 80B7F21C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7F220:
    ctx->pc = 0x80B7F220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F220u)) return;
    // 80B7F220: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7F224u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7F224:
    ctx->pc = 0x80B7F224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7F224: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F228:
    ctx->pc = 0x80B7F228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F228u)) return;
    // 80B7F228: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7F22C:
    ctx->pc = 0x80B7F22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F22Cu)) return;
    // 80B7F22C: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F230:
    ctx->pc = 0x80B7F230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F230u)) return;
    // 80B7F230: addi    r5, r5, -32576
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32576);

label_80B7F234:
    ctx->pc = 0x80B7F234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7F234: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F234u)) return;
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
label_80B7F238:
    ctx->pc = 0x80B7F238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F238u)) return;
    // 80B7F238: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F23C:
    ctx->pc = 0x80B7F23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F23Cu)) return;
    // 80B7F23C: addi    r5, r5, -32572
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32572);

label_80B7F240:
    ctx->pc = 0x80B7F240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7F240: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F240u)) return;
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
label_80B7F244:
    ctx->pc = 0x80B7F244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F244u)) return;
    // 80B7F244: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F248:
    ctx->pc = 0x80B7F248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F248u)) return;
    // 80B7F248: addi    r5, r5, -32568
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32568);

label_80B7F24C:
    ctx->pc = 0x80B7F24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F24Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F24C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F24Cu)) return;
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
label_80B7F250:
    ctx->pc = 0x80B7F250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F250u)) return;
    // 80B7F250: bl      0x8045C750
    {
            ctx->lr = 0x80B7F254u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7F254:
    ctx->pc = 0x80B7F254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B7F254: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F258:
    ctx->pc = 0x80B7F258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F258u)) return;
    // 80B7F258: li      r4, 240
    ctx->gpr[4] = (u32)(s32)(240);

label_80B7F25C:
    ctx->pc = 0x80B7F25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F25Cu)) return;
    // 80B7F25C: li      r5, 5120
    ctx->gpr[5] = (u32)(s32)(5120);

label_80B7F260:
    ctx->pc = 0x80B7F260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F260u)) return;
    // 80B7F260: li      r6, 1024
    ctx->gpr[6] = (u32)(s32)(1024);

label_80B7F264:
    ctx->pc = 0x80B7F264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F264u)) return;
    // 80B7F264: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7F268:
    ctx->pc = 0x80B7F268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F268u)) return;
    // 80B7F268: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7F26Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7F26C:
    ctx->pc = 0x80B7F26Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F26Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F26C: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80B7F270:
    ctx->pc = 0x80B7F270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F270u)) return;
    // 80B7F270: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F274u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F274:
    ctx->pc = 0x80B7F274u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F274u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7F274: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F278:
    ctx->pc = 0x80B7F278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F278u)) return;
    // 80B7F278: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7F27C:
    ctx->pc = 0x80B7F27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F27Cu)) return;
    // 80B7F27C: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80B7F280:
    ctx->pc = 0x80B7F280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F280u)) return;
    // 80B7F280: addi    r5, r7, -12032
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(-12032);

label_80B7F284:
    ctx->pc = 0x80B7F284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F284u)) return;
    // 80B7F284: addi    r6, r7, -2048
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-2048);

label_80B7F288:
    ctx->pc = 0x80B7F288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F288u)) return;
    // 80B7F288: addi    r7, r7, -32768
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-32768);

label_80B7F28C:
    ctx->pc = 0x80B7F28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F28Cu)) return;
    // 80B7F28C: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7F290u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7F290:
    ctx->pc = 0x80B7F290u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F290u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7F290: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F294:
    ctx->pc = 0x80B7F294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F294u)) return;
    // 80B7F294: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7F298:
    ctx->pc = 0x80B7F298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F298u)) return;
    // 80B7F298: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F29C:
    ctx->pc = 0x80B7F29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F29Cu)) return;
    // 80B7F29C: addi    r5, r5, -32564
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32564);

label_80B7F2A0:
    ctx->pc = 0x80B7F2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7F2A0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F2A0u)) return;
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
label_80B7F2A4:
    ctx->pc = 0x80B7F2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2A4u)) return;
    // 80B7F2A4: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F2A8:
    ctx->pc = 0x80B7F2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2A8u)) return;
    // 80B7F2A8: addi    r5, r5, -32560
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32560);

label_80B7F2AC:
    ctx->pc = 0x80B7F2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7F2AC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F2ACu)) return;
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
label_80B7F2B0:
    ctx->pc = 0x80B7F2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2B0u)) return;
    // 80B7F2B0: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F2B4:
    ctx->pc = 0x80B7F2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2B4u)) return;
    // 80B7F2B4: addi    r5, r5, -32556
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32556);

label_80B7F2B8:
    ctx->pc = 0x80B7F2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F2B8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F2B8u)) return;
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
label_80B7F2BC:
    ctx->pc = 0x80B7F2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2BCu)) return;
    // 80B7F2BC: bl      0x8045C750
    {
            ctx->lr = 0x80B7F2C0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7F2C0:
    ctx->pc = 0x80B7F2C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F2C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7F2C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F2C4:
    ctx->pc = 0x80B7F2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2C4u)) return;
    // 80B7F2C4: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80B7F2C8:
    ctx->pc = 0x80B7F2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2C8u)) return;
    // 80B7F2C8: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F2CC:
    ctx->pc = 0x80B7F2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2CCu)) return;
    // 80B7F2CC: addi    r5, r5, -32552
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32552);

label_80B7F2D0:
    ctx->pc = 0x80B7F2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7F2D0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F2D0u)) return;
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
label_80B7F2D4:
    ctx->pc = 0x80B7F2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2D4u)) return;
    // 80B7F2D4: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F2D8:
    ctx->pc = 0x80B7F2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2D8u)) return;
    // 80B7F2D8: addi    r5, r5, -32548
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32548);

label_80B7F2DC:
    ctx->pc = 0x80B7F2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7F2DC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F2DCu)) return;
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
label_80B7F2E0:
    ctx->pc = 0x80B7F2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2E0u)) return;
    // 80B7F2E0: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F2E4:
    ctx->pc = 0x80B7F2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2E4u)) return;
    // 80B7F2E4: addi    r5, r5, -32544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32544);

label_80B7F2E8:
    ctx->pc = 0x80B7F2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F2E8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F2E8u)) return;
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
label_80B7F2EC:
    ctx->pc = 0x80B7F2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2ECu)) return;
    // 80B7F2EC: bl      0x8045C750
    {
            ctx->lr = 0x80B7F2F0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7F2F0:
    ctx->pc = 0x80B7F2F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F2F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7F2F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F2F4:
    ctx->pc = 0x80B7F2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2F4u)) return;
    // 80B7F2F4: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80B7F2F8:
    ctx->pc = 0x80B7F2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2F8u)) return;
    // 80B7F2F8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B7F2FC:
    ctx->pc = 0x80B7F2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F2FCu)) return;
    // 80B7F2FC: addi    r5, r6, -12032
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-12032);

label_80B7F300:
    ctx->pc = 0x80B7F300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F300u)) return;
    // 80B7F300: addi    r6, r6, -2048
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-2048);

label_80B7F304:
    ctx->pc = 0x80B7F304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F304u)) return;
    // 80B7F304: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7F308:
    ctx->pc = 0x80B7F308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F308u)) return;
    // 80B7F308: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7F30Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7F30C:
    ctx->pc = 0x80B7F30Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F30Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F30C: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80B7F310:
    ctx->pc = 0x80B7F310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F310u)) return;
    // 80B7F310: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F314u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F314:
    ctx->pc = 0x80B7F314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7F314: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F318:
    ctx->pc = 0x80B7F318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F318u)) return;
    // 80B7F318: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7F31C:
    ctx->pc = 0x80B7F31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F31Cu)) return;
    // 80B7F31C: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F320:
    ctx->pc = 0x80B7F320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F320u)) return;
    // 80B7F320: addi    r5, r5, -32540
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32540);

label_80B7F324:
    ctx->pc = 0x80B7F324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7F324: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F324u)) return;
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
label_80B7F328:
    ctx->pc = 0x80B7F328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F328u)) return;
    // 80B7F328: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F32C:
    ctx->pc = 0x80B7F32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F32Cu)) return;
    // 80B7F32C: addi    r5, r5, -32536
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32536);

label_80B7F330:
    ctx->pc = 0x80B7F330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7F330: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F330u)) return;
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
label_80B7F334:
    ctx->pc = 0x80B7F334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F334u)) return;
    // 80B7F334: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F338:
    ctx->pc = 0x80B7F338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F338u)) return;
    // 80B7F338: addi    r5, r5, -32532
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32532);

label_80B7F33C:
    ctx->pc = 0x80B7F33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F33Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F33C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F33Cu)) return;
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
label_80B7F340:
    ctx->pc = 0x80B7F340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F340u)) return;
    // 80B7F340: bl      0x8045C750
    {
            ctx->lr = 0x80B7F344u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7F344:
    ctx->pc = 0x80B7F344u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F344u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7F344: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F348:
    ctx->pc = 0x80B7F348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F348u)) return;
    // 80B7F348: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7F34C:
    ctx->pc = 0x80B7F34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F34Cu)) return;
    // 80B7F34C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B7F350:
    ctx->pc = 0x80B7F350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F350u)) return;
    // 80B7F350: addi    r5, r6, -4096
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-4096);

label_80B7F354:
    ctx->pc = 0x80B7F354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F354u)) return;
    // 80B7F354: addi    r6, r6, -5376
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-5376);

label_80B7F358:
    ctx->pc = 0x80B7F358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F358u)) return;
    // 80B7F358: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7F35C:
    ctx->pc = 0x80B7F35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F35Cu)) return;
    // 80B7F35C: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7F360u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7F360:
    ctx->pc = 0x80B7F360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7F360: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F364:
    ctx->pc = 0x80B7F364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F364u)) return;
    // 80B7F364: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80B7F368:
    ctx->pc = 0x80B7F368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F368u)) return;
    // 80B7F368: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F36C:
    ctx->pc = 0x80B7F36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F36Cu)) return;
    // 80B7F36C: addi    r5, r5, -32528
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32528);

label_80B7F370:
    ctx->pc = 0x80B7F370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7F370: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F370u)) return;
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
label_80B7F374:
    ctx->pc = 0x80B7F374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F374u)) return;
    // 80B7F374: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F378:
    ctx->pc = 0x80B7F378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F378u)) return;
    // 80B7F378: addi    r5, r5, -32524
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32524);

label_80B7F37C:
    ctx->pc = 0x80B7F37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F37Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7F37C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F37Cu)) return;
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
label_80B7F380:
    ctx->pc = 0x80B7F380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F380u)) return;
    // 80B7F380: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F384:
    ctx->pc = 0x80B7F384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F384u)) return;
    // 80B7F384: addi    r5, r5, -32520
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32520);

label_80B7F388:
    ctx->pc = 0x80B7F388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F388: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F388u)) return;
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
label_80B7F38C:
    ctx->pc = 0x80B7F38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F38Cu)) return;
    // 80B7F38C: bl      0x8045C750
    {
            ctx->lr = 0x80B7F390u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7F390:
    ctx->pc = 0x80B7F390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F390: li      r3, 72
    ctx->gpr[3] = (u32)(s32)(72);

label_80B7F394:
    ctx->pc = 0x80B7F394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F394u)) return;
    // 80B7F394: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F398u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F398:
    ctx->pc = 0x80B7F398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F398: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F39C:
    ctx->pc = 0x80B7F39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F39Cu)) return;
    // 80B7F39C: bl      0x8045F220
    {
            ctx->lr = 0x80B7F3A0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F3A0:
    ctx->pc = 0x80B7F3A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F3A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7F3A0: bl      0x8045C034
    {
            ctx->lr = 0x80B7F3A4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B7F3A4:
    ctx->pc = 0x80B7F3A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F3A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F3A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F3A8:
    ctx->pc = 0x80B7F3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F3A8u)) return;
    // 80B7F3A8: bl      0x8045F220
    {
            ctx->lr = 0x80B7F3ACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F3AC:
    ctx->pc = 0x80B7F3ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F3ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7F3AC: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F3B0:
    ctx->pc = 0x80B7F3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F3B0u)) return;
    // 80B7F3B0: addi    r4, r4, -30528
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30528);

label_80B7F3B4:
    ctx->pc = 0x80B7F3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F3B4u)) return;
    // 80B7F3B4: bl      0x8045C060
    {
            ctx->lr = 0x80B7F3B8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B7F3B8:
    ctx->pc = 0x80B7F3B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F3B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F3B8: li      r3, 158
    ctx->gpr[3] = (u32)(s32)(158);

label_80B7F3BC:
    ctx->pc = 0x80B7F3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F3BCu)) return;
    // 80B7F3BC: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F3C0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F3C0:
    ctx->pc = 0x80B7F3C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F3C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F3C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F3C4:
    ctx->pc = 0x80B7F3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F3C4u)) return;
    // 80B7F3C4: bl      0x8045F220
    {
            ctx->lr = 0x80B7F3C8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F3C8:
    ctx->pc = 0x80B7F3C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F3C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7F3C8: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F3CC:
    ctx->pc = 0x80B7F3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F3CCu)) return;
    // 80B7F3CC: addi    r4, r4, -30524
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30524);

label_80B7F3D0:
    ctx->pc = 0x80B7F3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F3D0u)) return;
    // 80B7F3D0: bl      0x8045C060
    {
            ctx->lr = 0x80B7F3D4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B7F3D4:
    ctx->pc = 0x80B7F3D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F3D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F3D4: li      r3, 718
    ctx->gpr[3] = (u32)(s32)(718);

label_80B7F3D8:
    ctx->pc = 0x80B7F3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F3D8u)) return;
    // 80B7F3D8: bl      0x8045BFA0
    {
            ctx->lr = 0x80B7F3DCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B7F3DC:
    ctx->pc = 0x80B7F3DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F3DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B7F3DC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B7F3E0:
    ctx->pc = 0x80B7F3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F3E0u)) return;
    // 80B7F3E0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B7F3E4:
    ctx->pc = 0x80B7F3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F3E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7F3E4: lwz     r0, 0(r3)
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
label_80B7F3E8:
    ctx->pc = 0x80B7F3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F3E8u)) return;
    // 80B7F3E8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B7F3EC:
    ctx->pc = 0x80B7F3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F3ECu)) return;
    // 80B7F3EC: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7F3F0:
    ctx->pc = 0x80B7F3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F3F0u)) return;
    // 80B7F3F0: addi    r3, r3, -30588
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30588);

label_80B7F3F4:
    ctx->pc = 0x80B7F3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F3F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7F3F4: lwzx    r3, r3, r0
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
label_80B7F3F8:
    ctx->pc = 0x80B7F3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F3F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F3F8: lwz     r3, 0(r3)
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
label_80B7F3FC:
    ctx->pc = 0x80B7F3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F3FCu)) return;
    // 80B7F3FC: bl      0x8045F6FC
    {
            ctx->lr = 0x80B7F400u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B7F400:
    ctx->pc = 0x80B7F400u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F400u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F400: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80B7F404:
    ctx->pc = 0x80B7F404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F404u)) return;
    // 80B7F404: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F408u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F408:
    ctx->pc = 0x80B7F408u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F408u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7F408: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F40C:
    ctx->pc = 0x80B7F40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F40Cu)) return;
    // 80B7F40C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7F410:
    ctx->pc = 0x80B7F410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F410u)) return;
    // 80B7F410: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F414:
    ctx->pc = 0x80B7F414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F414u)) return;
    // 80B7F414: addi    r5, r5, -32516
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32516);

label_80B7F418:
    ctx->pc = 0x80B7F418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7F418: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F418u)) return;
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
label_80B7F41C:
    ctx->pc = 0x80B7F41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F41Cu)) return;
    // 80B7F41C: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F420:
    ctx->pc = 0x80B7F420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F420u)) return;
    // 80B7F420: addi    r5, r5, -32512
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32512);

label_80B7F424:
    ctx->pc = 0x80B7F424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7F424: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F424u)) return;
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
label_80B7F428:
    ctx->pc = 0x80B7F428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F428u)) return;
    // 80B7F428: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F42C:
    ctx->pc = 0x80B7F42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F42Cu)) return;
    // 80B7F42C: addi    r5, r5, -32508
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32508);

label_80B7F430:
    ctx->pc = 0x80B7F430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F430: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F430u)) return;
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
label_80B7F434:
    ctx->pc = 0x80B7F434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F434u)) return;
    // 80B7F434: bl      0x8045C750
    {
            ctx->lr = 0x80B7F438u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7F438:
    ctx->pc = 0x80B7F438u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F438u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7F438: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F43C:
    ctx->pc = 0x80B7F43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F43Cu)) return;
    // 80B7F43C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7F440:
    ctx->pc = 0x80B7F440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F440u)) return;
    // 80B7F440: li      r5, 6144
    ctx->gpr[5] = (u32)(s32)(6144);

label_80B7F444:
    ctx->pc = 0x80B7F444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F444u)) return;
    // 80B7F444: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80B7F448:
    ctx->pc = 0x80B7F448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F448u)) return;
    // 80B7F448: addi    r6, r7, -18688
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-18688);

label_80B7F44C:
    ctx->pc = 0x80B7F44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F44Cu)) return;
    // 80B7F44C: addi    r7, r7, -512
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-512);

label_80B7F450:
    ctx->pc = 0x80B7F450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F450u)) return;
    // 80B7F450: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7F454u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7F454:
    ctx->pc = 0x80B7F454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7F454: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F458:
    ctx->pc = 0x80B7F458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F458u)) return;
    // 80B7F458: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80B7F45C:
    ctx->pc = 0x80B7F45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F45Cu)) return;
    // 80B7F45C: li      r5, 6400
    ctx->gpr[5] = (u32)(s32)(6400);

label_80B7F460:
    ctx->pc = 0x80B7F460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F460u)) return;
    // 80B7F460: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80B7F464:
    ctx->pc = 0x80B7F464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F464u)) return;
    // 80B7F464: addi    r6, r7, -19712
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-19712);

label_80B7F468:
    ctx->pc = 0x80B7F468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F468u)) return;
    // 80B7F468: addi    r7, r7, -512
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-512);

label_80B7F46C:
    ctx->pc = 0x80B7F46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F46Cu)) return;
    // 80B7F46C: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7F470u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7F470:
    ctx->pc = 0x80B7F470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F470: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F474:
    ctx->pc = 0x80B7F474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F474u)) return;
    // 80B7F474: bl      0x8045F220
    {
            ctx->lr = 0x80B7F478u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F478:
    ctx->pc = 0x80B7F478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7F478: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F47C:
    ctx->pc = 0x80B7F47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F47Cu)) return;
    // 80B7F47C: addi    r4, r4, -30520
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30520);

label_80B7F480:
    ctx->pc = 0x80B7F480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F480u)) return;
    // 80B7F480: bl      0x8045C060
    {
            ctx->lr = 0x80B7F484u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B7F484:
    ctx->pc = 0x80B7F484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F484: li      r3, 719
    ctx->gpr[3] = (u32)(s32)(719);

label_80B7F488:
    ctx->pc = 0x80B7F488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F488u)) return;
    // 80B7F488: bl      0x8045BFA0
    {
            ctx->lr = 0x80B7F48Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B7F48C:
    ctx->pc = 0x80B7F48Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F48Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B7F48C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B7F490:
    ctx->pc = 0x80B7F490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F490u)) return;
    // 80B7F490: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B7F494:
    ctx->pc = 0x80B7F494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7F494: lwz     r0, 0(r3)
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
label_80B7F498:
    ctx->pc = 0x80B7F498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F498u)) return;
    // 80B7F498: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B7F49C:
    ctx->pc = 0x80B7F49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F49Cu)) return;
    // 80B7F49C: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7F4A0:
    ctx->pc = 0x80B7F4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F4A0u)) return;
    // 80B7F4A0: addi    r3, r3, -30588
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30588);

label_80B7F4A4:
    ctx->pc = 0x80B7F4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F4A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7F4A4: lwzx    r3, r3, r0
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
label_80B7F4A8:
    ctx->pc = 0x80B7F4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F4A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F4A8: lwz     r3, 4(r3)
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
label_80B7F4AC:
    ctx->pc = 0x80B7F4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F4ACu)) return;
    // 80B7F4AC: bl      0x8045F6FC
    {
            ctx->lr = 0x80B7F4B0u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B7F4B0:
    ctx->pc = 0x80B7F4B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F4B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F4B0: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80B7F4B4:
    ctx->pc = 0x80B7F4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F4B4u)) return;
    // 80B7F4B4: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F4B8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F4B8:
    ctx->pc = 0x80B7F4B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F4B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F4B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F4BC:
    ctx->pc = 0x80B7F4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F4BCu)) return;
    // 80B7F4BC: bl      0x8045F220
    {
            ctx->lr = 0x80B7F4C0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F4C0:
    ctx->pc = 0x80B7F4C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F4C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7F4C0: bl      0x8045C034
    {
            ctx->lr = 0x80B7F4C4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B7F4C4:
    ctx->pc = 0x80B7F4C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F4C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F4C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F4C8:
    ctx->pc = 0x80B7F4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F4C8u)) return;
    // 80B7F4C8: bl      0x8045F220
    {
            ctx->lr = 0x80B7F4CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F4CC:
    ctx->pc = 0x80B7F4CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F4CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7F4CC: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F4D0:
    ctx->pc = 0x80B7F4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F4D0u)) return;
    // 80B7F4D0: addi    r4, r4, -30516
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30516);

label_80B7F4D4:
    ctx->pc = 0x80B7F4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F4D4u)) return;
    // 80B7F4D4: bl      0x8045C060
    {
            ctx->lr = 0x80B7F4D8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B7F4D8:
    ctx->pc = 0x80B7F4D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F4D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F4D8: li      r3, 720
    ctx->gpr[3] = (u32)(s32)(720);

label_80B7F4DC:
    ctx->pc = 0x80B7F4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F4DCu)) return;
    // 80B7F4DC: bl      0x8045BFA0
    {
            ctx->lr = 0x80B7F4E0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B7F4E0:
    ctx->pc = 0x80B7F4E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F4E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B7F4E0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B7F4E4:
    ctx->pc = 0x80B7F4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F4E4u)) return;
    // 80B7F4E4: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B7F4E8:
    ctx->pc = 0x80B7F4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F4E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7F4E8: lwz     r0, 0(r3)
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
label_80B7F4EC:
    ctx->pc = 0x80B7F4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F4ECu)) return;
    // 80B7F4EC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B7F4F0:
    ctx->pc = 0x80B7F4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F4F0u)) return;
    // 80B7F4F0: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7F4F4:
    ctx->pc = 0x80B7F4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F4F4u)) return;
    // 80B7F4F4: addi    r3, r3, -30588
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30588);

label_80B7F4F8:
    ctx->pc = 0x80B7F4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F4F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7F4F8: lwzx    r3, r3, r0
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
label_80B7F4FC:
    ctx->pc = 0x80B7F4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F4FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F4FC: lwz     r3, 8(r3)
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
label_80B7F500:
    ctx->pc = 0x80B7F500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F500u)) return;
    // 80B7F500: bl      0x8045F6FC
    {
            ctx->lr = 0x80B7F504u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B7F504:
    ctx->pc = 0x80B7F504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F504: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80B7F508:
    ctx->pc = 0x80B7F508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F508u)) return;
    // 80B7F508: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F50Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F50C:
    ctx->pc = 0x80B7F50Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F50Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F50C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F510:
    ctx->pc = 0x80B7F510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F510u)) return;
    // 80B7F510: bl      0x8045F220
    {
            ctx->lr = 0x80B7F514u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F514:
    ctx->pc = 0x80B7F514u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F514u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7F514: bl      0x8045C034
    {
            ctx->lr = 0x80B7F518u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B7F518:
    ctx->pc = 0x80B7F518u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F518u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7F518: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F51C:
    ctx->pc = 0x80B7F51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F51Cu)) return;
    // 80B7F51C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7F520:
    ctx->pc = 0x80B7F520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F520u)) return;
    // 80B7F520: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F524:
    ctx->pc = 0x80B7F524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F524u)) return;
    // 80B7F524: addi    r5, r5, -32504
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32504);

label_80B7F528:
    ctx->pc = 0x80B7F528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7F528: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F528u)) return;
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
label_80B7F52C:
    ctx->pc = 0x80B7F52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F52Cu)) return;
    // 80B7F52C: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F530:
    ctx->pc = 0x80B7F530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F530u)) return;
    // 80B7F530: addi    r5, r5, -32500
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32500);

label_80B7F534:
    ctx->pc = 0x80B7F534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7F534: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F534u)) return;
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
label_80B7F538:
    ctx->pc = 0x80B7F538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F538u)) return;
    // 80B7F538: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F53C:
    ctx->pc = 0x80B7F53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F53Cu)) return;
    // 80B7F53C: addi    r5, r5, -32496
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32496);

label_80B7F540:
    ctx->pc = 0x80B7F540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F540: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F540u)) return;
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
label_80B7F544:
    ctx->pc = 0x80B7F544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F544u)) return;
    // 80B7F544: bl      0x8045C750
    {
            ctx->lr = 0x80B7F548u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7F548:
    ctx->pc = 0x80B7F548u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F548u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7F548: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F54C:
    ctx->pc = 0x80B7F54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F54Cu)) return;
    // 80B7F54C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7F550:
    ctx->pc = 0x80B7F550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F550u)) return;
    // 80B7F550: li      r5, 3584
    ctx->gpr[5] = (u32)(s32)(3584);

label_80B7F554:
    ctx->pc = 0x80B7F554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F554u)) return;
    // 80B7F554: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80B7F558:
    ctx->pc = 0x80B7F558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F558u)) return;
    // 80B7F558: addi    r6, r7, -18688
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-18688);

label_80B7F55C:
    ctx->pc = 0x80B7F55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F55Cu)) return;
    // 80B7F55C: addi    r7, r7, -512
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-512);

label_80B7F560:
    ctx->pc = 0x80B7F560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F560u)) return;
    // 80B7F560: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7F564u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7F564:
    ctx->pc = 0x80B7F564u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F564u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7F564: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F568:
    ctx->pc = 0x80B7F568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F568u)) return;
    // 80B7F568: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_80B7F56C:
    ctx->pc = 0x80B7F56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F56Cu)) return;
    // 80B7F56C: li      r5, 3584
    ctx->gpr[5] = (u32)(s32)(3584);

label_80B7F570:
    ctx->pc = 0x80B7F570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F570u)) return;
    // 80B7F570: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80B7F574:
    ctx->pc = 0x80B7F574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F574u)) return;
    // 80B7F574: addi    r6, r7, -22016
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-22016);

label_80B7F578:
    ctx->pc = 0x80B7F578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F578u)) return;
    // 80B7F578: addi    r7, r7, -512
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-512);

label_80B7F57C:
    ctx->pc = 0x80B7F57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F57Cu)) return;
    // 80B7F57C: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7F580u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7F580:
    ctx->pc = 0x80B7F580u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F580u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F580: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F584:
    ctx->pc = 0x80B7F584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F584u)) return;
    // 80B7F584: bl      0x8045F220
    {
            ctx->lr = 0x80B7F588u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F588:
    ctx->pc = 0x80B7F588u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F588u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7F588: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F58C:
    ctx->pc = 0x80B7F58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F58Cu)) return;
    // 80B7F58C: addi    r4, r4, -10272
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10272);

label_80B7F590:
    ctx->pc = 0x80B7F590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F590u)) return;
    // 80B7F590: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B7F594:
    ctx->pc = 0x80B7F594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F594u)) return;
    // 80B7F594: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B7F598:
    ctx->pc = 0x80B7F598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F598u)) return;
    // 80B7F598: lis     r6, -27542
    ctx->gpr[6] = ((u32)(s32)(-27542) << 16);

label_80B7F59C:
    ctx->pc = 0x80B7F59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F59Cu)) return;
    // 80B7F59C: addi    r6, r6, -32580
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32580);

label_80B7F5A0:
    ctx->pc = 0x80B7F5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7F5A0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7F5A0u)) return;
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
label_80B7F5A4:
    ctx->pc = 0x80B7F5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5A4u)) return;
    // 80B7F5A4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7F5A8:
    ctx->pc = 0x80B7F5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5A8u)) return;
    // 80B7F5A8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7F5AC:
    ctx->pc = 0x80B7F5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5ACu)) return;
    // 80B7F5AC: bl      0x8045EBE4
    {
            ctx->lr = 0x80B7F5B0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B7F5B0:
    ctx->pc = 0x80B7F5B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F5B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F5B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F5B4:
    ctx->pc = 0x80B7F5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5B4u)) return;
    // 80B7F5B4: bl      0x8045F220
    {
            ctx->lr = 0x80B7F5B8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F5B8:
    ctx->pc = 0x80B7F5B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F5B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7F5B8: bl      0x8045EB40
    {
            ctx->lr = 0x80B7F5BCu;
            ctx->pc = 0x8045EB40u;
            return;
    }

label_80B7F5BC:
    ctx->pc = 0x80B7F5BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F5BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7F5BC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F5C0:
    ctx->pc = 0x80B7F5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5C0u)) return;
    // 80B7F5C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7F5C4:
    ctx->pc = 0x80B7F5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5C4u)) return;
    // 80B7F5C4: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F5C8:
    ctx->pc = 0x80B7F5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5C8u)) return;
    // 80B7F5C8: addi    r5, r5, -32492
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32492);

label_80B7F5CC:
    ctx->pc = 0x80B7F5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7F5CC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F5CCu)) return;
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
label_80B7F5D0:
    ctx->pc = 0x80B7F5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5D0u)) return;
    // 80B7F5D0: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F5D4:
    ctx->pc = 0x80B7F5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5D4u)) return;
    // 80B7F5D4: addi    r5, r5, -32488
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32488);

label_80B7F5D8:
    ctx->pc = 0x80B7F5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7F5D8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F5D8u)) return;
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
label_80B7F5DC:
    ctx->pc = 0x80B7F5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5DCu)) return;
    // 80B7F5DC: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F5E0:
    ctx->pc = 0x80B7F5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5E0u)) return;
    // 80B7F5E0: addi    r5, r5, -32484
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32484);

label_80B7F5E4:
    ctx->pc = 0x80B7F5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F5E4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F5E4u)) return;
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
label_80B7F5E8:
    ctx->pc = 0x80B7F5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5E8u)) return;
    // 80B7F5E8: bl      0x8045C750
    {
            ctx->lr = 0x80B7F5ECu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7F5EC:
    ctx->pc = 0x80B7F5ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F5ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B7F5EC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F5F0:
    ctx->pc = 0x80B7F5F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5F0u)) return;
    // 80B7F5F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7F5F4:
    ctx->pc = 0x80B7F5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5F4u)) return;
    // 80B7F5F4: li      r5, 1792
    ctx->gpr[5] = (u32)(s32)(1792);

label_80B7F5F8:
    ctx->pc = 0x80B7F5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5F8u)) return;
    // 80B7F5F8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B7F5FC:
    ctx->pc = 0x80B7F5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F5FCu)) return;
    // 80B7F5FC: addi    r6, r6, -3396
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3396);

label_80B7F600:
    ctx->pc = 0x80B7F600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F600u)) return;
    // 80B7F600: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7F604:
    ctx->pc = 0x80B7F604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F604u)) return;
    // 80B7F604: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7F608u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7F608:
    ctx->pc = 0x80B7F608u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F608u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 80B7F608: lis     r3, -28628
    ctx->gpr[3] = ((u32)(s32)(-28628) << 16);

label_80B7F60C:
    ctx->pc = 0x80B7F60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F60Cu)) return;
    // 80B7F60C: addi    r4, r3, -14944
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-14944);

label_80B7F610:
    ctx->pc = 0x80B7F610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B7F610: lwz     r3, 0(r4)
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
label_80B7F614:
    ctx->pc = 0x80B7F614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7F614: lbz     r0, 15(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7F618:
    ctx->pc = 0x80B7F618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F618u)) return;
    // 80B7F618: rlwinm r0, r0, 0, 30, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFBu;
    }

label_80B7F61C:
    ctx->pc = 0x80B7F61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F61Cu)) return;
    // 80B7F61C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80B7F620:
    ctx->pc = 0x80B7F620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7F620: stb     r0, 15(r3)
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
label_80B7F624:
    ctx->pc = 0x80B7F624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7F624: lwz     r3, 0(r4)
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
label_80B7F628:
    ctx->pc = 0x80B7F628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7F628: lbz     r0, 15(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7F62C:
    ctx->pc = 0x80B7F62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F62Cu)) return;
    // 80B7F62C: rlwinm r0, r0, 0, 28, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFEFu;
    }

label_80B7F630:
    ctx->pc = 0x80B7F630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F630u)) return;
    // 80B7F630: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80B7F634:
    ctx->pc = 0x80B7F634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7F634: stb     r0, 15(r3)
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
label_80B7F638:
    ctx->pc = 0x80B7F638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F638u)) return;
    // 80B7F638: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F63C:
    ctx->pc = 0x80B7F63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F63Cu)) return;
    // 80B7F63C: bl      0x8045F220
    {
            ctx->lr = 0x80B7F640u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F640:
    ctx->pc = 0x80B7F640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7F640: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F644:
    ctx->pc = 0x80B7F644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F644u)) return;
    // 80B7F644: addi    r4, r4, -32480
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32480);

label_80B7F648:
    ctx->pc = 0x80B7F648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7F648: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7F648u)) return;
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
label_80B7F64C:
    ctx->pc = 0x80B7F64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F64Cu)) return;
    // 80B7F64C: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F650:
    ctx->pc = 0x80B7F650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F650u)) return;
    // 80B7F650: addi    r4, r4, -32588
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32588);

label_80B7F654:
    ctx->pc = 0x80B7F654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7F654: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7F654u)) return;
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
label_80B7F658:
    ctx->pc = 0x80B7F658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F658u)) return;
    // 80B7F658: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F65C:
    ctx->pc = 0x80B7F65Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F65Cu)) return;
    // 80B7F65C: addi    r4, r4, -32476
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32476);

label_80B7F660:
    ctx->pc = 0x80B7F660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F660: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7F660u)) return;
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
label_80B7F664:
    ctx->pc = 0x80B7F664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F664u)) return;
    // 80B7F664: bl      0x8045EF2C
    {
            ctx->lr = 0x80B7F668u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B7F668:
    ctx->pc = 0x80B7F668u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F668u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F668: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F66C:
    ctx->pc = 0x80B7F66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F66Cu)) return;
    // 80B7F66C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F670u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F670:
    ctx->pc = 0x80B7F670u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F670u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F670: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F674:
    ctx->pc = 0x80B7F674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F674u)) return;
    // 80B7F674: bl      0x8045F220
    {
            ctx->lr = 0x80B7F678u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F678:
    ctx->pc = 0x80B7F678u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F678u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7F678: bl      0x8045EB8C
    {
            ctx->lr = 0x80B7F67Cu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B7F67C:
    ctx->pc = 0x80B7F67Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F67Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F67C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F680:
    ctx->pc = 0x80B7F680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F680u)) return;
    // 80B7F680: bl      0x8045F220
    {
            ctx->lr = 0x80B7F684u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F684:
    ctx->pc = 0x80B7F684u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F684u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7F684: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F688:
    ctx->pc = 0x80B7F688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F688u)) return;
    // 80B7F688: addi    r4, r4, 468
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(468);

label_80B7F68C:
    ctx->pc = 0x80B7F68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F68Cu)) return;
    // 80B7F68C: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B7F690:
    ctx->pc = 0x80B7F690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F690u)) return;
    // 80B7F690: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B7F694:
    ctx->pc = 0x80B7F694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F694u)) return;
    // 80B7F694: lis     r6, -27542
    ctx->gpr[6] = ((u32)(s32)(-27542) << 16);

label_80B7F698:
    ctx->pc = 0x80B7F698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F698u)) return;
    // 80B7F698: addi    r6, r6, -32580
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32580);

label_80B7F69C:
    ctx->pc = 0x80B7F69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F69Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7F69C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7F69Cu)) return;
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
label_80B7F6A0:
    ctx->pc = 0x80B7F6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F6A0u)) return;
    // 80B7F6A0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B7F6A4:
    ctx->pc = 0x80B7F6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F6A4u)) return;
    // 80B7F6A4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7F6A8:
    ctx->pc = 0x80B7F6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F6A8u)) return;
    // 80B7F6A8: bl      0x8045EBE4
    {
            ctx->lr = 0x80B7F6ACu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B7F6AC:
    ctx->pc = 0x80B7F6ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F6ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F6AC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F6B0:
    ctx->pc = 0x80B7F6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F6B0u)) return;
    // 80B7F6B0: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F6B4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F6B4:
    ctx->pc = 0x80B7F6B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F6B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F6B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F6B8:
    ctx->pc = 0x80B7F6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F6B8u)) return;
    // 80B7F6B8: bl      0x8045F220
    {
            ctx->lr = 0x80B7F6BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F6BC:
    ctx->pc = 0x80B7F6BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F6BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7F6BC: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F6C0:
    ctx->pc = 0x80B7F6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F6C0u)) return;
    // 80B7F6C0: addi    r4, r4, 10856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10856);

label_80B7F6C4:
    ctx->pc = 0x80B7F6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F6C4u)) return;
    // 80B7F6C4: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B7F6C8:
    ctx->pc = 0x80B7F6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F6C8u)) return;
    // 80B7F6C8: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B7F6CC:
    ctx->pc = 0x80B7F6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F6CCu)) return;
    // 80B7F6CC: lis     r6, -27542
    ctx->gpr[6] = ((u32)(s32)(-27542) << 16);

label_80B7F6D0:
    ctx->pc = 0x80B7F6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F6D0u)) return;
    // 80B7F6D0: addi    r6, r6, -32580
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32580);

label_80B7F6D4:
    ctx->pc = 0x80B7F6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F6D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7F6D4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7F6D4u)) return;
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
label_80B7F6D8:
    ctx->pc = 0x80B7F6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F6D8u)) return;
    // 80B7F6D8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7F6DC:
    ctx->pc = 0x80B7F6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F6DCu)) return;
    // 80B7F6DC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7F6E0:
    ctx->pc = 0x80B7F6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F6E0u)) return;
    // 80B7F6E0: bl      0x8045EBE4
    {
            ctx->lr = 0x80B7F6E4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B7F6E4:
    ctx->pc = 0x80B7F6E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F6E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F6E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F6E8:
    ctx->pc = 0x80B7F6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F6E8u)) return;
    // 80B7F6E8: bl      0x8045F220
    {
            ctx->lr = 0x80B7F6ECu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F6EC:
    ctx->pc = 0x80B7F6ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F6ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7F6EC: bl      0x8045EB40
    {
            ctx->lr = 0x80B7F6F0u;
            ctx->pc = 0x8045EB40u;
            return;
    }

label_80B7F6F0:
    ctx->pc = 0x80B7F6F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F6F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7F6F0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F6F4:
    ctx->pc = 0x80B7F6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F6F4u)) return;
    // 80B7F6F4: li      r4, 160
    ctx->gpr[4] = (u32)(s32)(160);

label_80B7F6F8:
    ctx->pc = 0x80B7F6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F6F8u)) return;
    // 80B7F6F8: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F6FC:
    ctx->pc = 0x80B7F6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F6FCu)) return;
    // 80B7F6FC: addi    r5, r5, -32472
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32472);

label_80B7F700:
    ctx->pc = 0x80B7F700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7F700: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F700u)) return;
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
label_80B7F704:
    ctx->pc = 0x80B7F704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F704u)) return;
    // 80B7F704: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F708:
    ctx->pc = 0x80B7F708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F708u)) return;
    // 80B7F708: addi    r5, r5, -32468
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32468);

label_80B7F70C:
    ctx->pc = 0x80B7F70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F70Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7F70C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F70Cu)) return;
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
label_80B7F710:
    ctx->pc = 0x80B7F710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F710u)) return;
    // 80B7F710: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F714:
    ctx->pc = 0x80B7F714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F714u)) return;
    // 80B7F714: addi    r5, r5, -32464
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32464);

label_80B7F718:
    ctx->pc = 0x80B7F718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F718: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F718u)) return;
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
label_80B7F71C:
    ctx->pc = 0x80B7F71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F71Cu)) return;
    // 80B7F71C: bl      0x8045C750
    {
            ctx->lr = 0x80B7F720u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7F720:
    ctx->pc = 0x80B7F720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F720: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F724:
    ctx->pc = 0x80B7F724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F724u)) return;
    // 80B7F724: bl      0x8045F220
    {
            ctx->lr = 0x80B7F728u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F728:
    ctx->pc = 0x80B7F728u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F728u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7F728: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F72C:
    ctx->pc = 0x80B7F72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F72Cu)) return;
    // 80B7F72C: addi    r4, r4, 17660
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17660);

label_80B7F730:
    ctx->pc = 0x80B7F730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F730u)) return;
    // 80B7F730: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B7F734:
    ctx->pc = 0x80B7F734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F734u)) return;
    // 80B7F734: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B7F738:
    ctx->pc = 0x80B7F738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F738u)) return;
    // 80B7F738: lis     r6, -27542
    ctx->gpr[6] = ((u32)(s32)(-27542) << 16);

label_80B7F73C:
    ctx->pc = 0x80B7F73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F73Cu)) return;
    // 80B7F73C: addi    r6, r6, -32580
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32580);

label_80B7F740:
    ctx->pc = 0x80B7F740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7F740: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7F740u)) return;
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
label_80B7F744:
    ctx->pc = 0x80B7F744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F744u)) return;
    // 80B7F744: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7F748:
    ctx->pc = 0x80B7F748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F748u)) return;
    // 80B7F748: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80B7F74C:
    ctx->pc = 0x80B7F74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F74Cu)) return;
    // 80B7F74C: bl      0x8045EBE4
    {
            ctx->lr = 0x80B7F750u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B7F750:
    ctx->pc = 0x80B7F750u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F750u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F750: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80B7F754:
    ctx->pc = 0x80B7F754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F754u)) return;
    // 80B7F754: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F758u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F758:
    ctx->pc = 0x80B7F758u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F758u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F758: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F75C:
    ctx->pc = 0x80B7F75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F75Cu)) return;
    // 80B7F75C: bl      0x8045F220
    {
            ctx->lr = 0x80B7F760u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F760:
    ctx->pc = 0x80B7F760u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F760u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7F760: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F764:
    ctx->pc = 0x80B7F764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F764u)) return;
    // 80B7F764: addi    r4, r4, 19760
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19760);

label_80B7F768:
    ctx->pc = 0x80B7F768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F768u)) return;
    // 80B7F768: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B7F76C:
    ctx->pc = 0x80B7F76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F76Cu)) return;
    // 80B7F76C: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B7F770:
    ctx->pc = 0x80B7F770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F770u)) return;
    // 80B7F770: lis     r6, -27542
    ctx->gpr[6] = ((u32)(s32)(-27542) << 16);

label_80B7F774:
    ctx->pc = 0x80B7F774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F774u)) return;
    // 80B7F774: addi    r6, r6, -32580
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32580);

label_80B7F778:
    ctx->pc = 0x80B7F778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7F778: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7F778u)) return;
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
label_80B7F77C:
    ctx->pc = 0x80B7F77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F77Cu)) return;
    // 80B7F77C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B7F780:
    ctx->pc = 0x80B7F780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F780u)) return;
    // 80B7F780: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7F784:
    ctx->pc = 0x80B7F784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F784u)) return;
    // 80B7F784: bl      0x8045EBE4
    {
            ctx->lr = 0x80B7F788u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B7F788:
    ctx->pc = 0x80B7F788u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F788u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F788: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80B7F78C:
    ctx->pc = 0x80B7F78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F78Cu)) return;
    // 80B7F78C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F790u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F790:
    ctx->pc = 0x80B7F790u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F790u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F790: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F794:
    ctx->pc = 0x80B7F794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F794u)) return;
    // 80B7F794: bl      0x8045F220
    {
            ctx->lr = 0x80B7F798u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F798:
    ctx->pc = 0x80B7F798u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F798u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7F798: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F79C:
    ctx->pc = 0x80B7F79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F79Cu)) return;
    // 80B7F79C: addi    r4, r4, -30512
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30512);

label_80B7F7A0:
    ctx->pc = 0x80B7F7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F7A0u)) return;
    // 80B7F7A0: bl      0x8045C060
    {
            ctx->lr = 0x80B7F7A4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B7F7A4:
    ctx->pc = 0x80B7F7A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F7A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F7A4: li      r3, 721
    ctx->gpr[3] = (u32)(s32)(721);

label_80B7F7A8:
    ctx->pc = 0x80B7F7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F7A8u)) return;
    // 80B7F7A8: bl      0x8045BFA0
    {
            ctx->lr = 0x80B7F7ACu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B7F7AC:
    ctx->pc = 0x80B7F7ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F7ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B7F7AC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B7F7B0:
    ctx->pc = 0x80B7F7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F7B0u)) return;
    // 80B7F7B0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B7F7B4:
    ctx->pc = 0x80B7F7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F7B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7F7B4: lwz     r0, 0(r3)
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
label_80B7F7B8:
    ctx->pc = 0x80B7F7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F7B8u)) return;
    // 80B7F7B8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B7F7BC:
    ctx->pc = 0x80B7F7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F7BCu)) return;
    // 80B7F7BC: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7F7C0:
    ctx->pc = 0x80B7F7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F7C0u)) return;
    // 80B7F7C0: addi    r3, r3, -30588
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30588);

label_80B7F7C4:
    ctx->pc = 0x80B7F7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F7C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7F7C4: lwzx    r3, r3, r0
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
label_80B7F7C8:
    ctx->pc = 0x80B7F7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F7C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F7C8: lwz     r3, 12(r3)
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
label_80B7F7CC:
    ctx->pc = 0x80B7F7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F7CCu)) return;
    // 80B7F7CC: bl      0x8045F6FC
    {
            ctx->lr = 0x80B7F7D0u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B7F7D0:
    ctx->pc = 0x80B7F7D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F7D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F7D0: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80B7F7D4:
    ctx->pc = 0x80B7F7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F7D4u)) return;
    // 80B7F7D4: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F7D8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F7D8:
    ctx->pc = 0x80B7F7D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F7D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F7D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F7DC:
    ctx->pc = 0x80B7F7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F7DCu)) return;
    // 80B7F7DC: bl      0x8045F220
    {
            ctx->lr = 0x80B7F7E0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F7E0:
    ctx->pc = 0x80B7F7E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F7E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7F7E0: bl      0x8045C034
    {
            ctx->lr = 0x80B7F7E4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B7F7E4:
    ctx->pc = 0x80B7F7E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F7E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F7E4: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80B7F7E8:
    ctx->pc = 0x80B7F7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F7E8u)) return;
    // 80B7F7E8: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F7ECu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F7EC:
    ctx->pc = 0x80B7F7ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F7ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7F7EC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F7F0:
    ctx->pc = 0x80B7F7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F7F0u)) return;
    // 80B7F7F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7F7F4:
    ctx->pc = 0x80B7F7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F7F4u)) return;
    // 80B7F7F4: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F7F8:
    ctx->pc = 0x80B7F7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F7F8u)) return;
    // 80B7F7F8: addi    r5, r5, -32460
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32460);

label_80B7F7FC:
    ctx->pc = 0x80B7F7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F7FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7F7FC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F7FCu)) return;
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
label_80B7F800:
    ctx->pc = 0x80B7F800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F800u)) return;
    // 80B7F800: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F804:
    ctx->pc = 0x80B7F804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F804u)) return;
    // 80B7F804: addi    r5, r5, -32456
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32456);

label_80B7F808:
    ctx->pc = 0x80B7F808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7F808: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F808u)) return;
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
label_80B7F80C:
    ctx->pc = 0x80B7F80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F80Cu)) return;
    // 80B7F80C: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F810:
    ctx->pc = 0x80B7F810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F810u)) return;
    // 80B7F810: addi    r5, r5, -32452
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32452);

label_80B7F814:
    ctx->pc = 0x80B7F814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F814: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F814u)) return;
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
label_80B7F818:
    ctx->pc = 0x80B7F818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F818u)) return;
    // 80B7F818: bl      0x8045C750
    {
            ctx->lr = 0x80B7F81Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7F81C:
    ctx->pc = 0x80B7F81Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F81Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B7F81C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F820:
    ctx->pc = 0x80B7F820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F820u)) return;
    // 80B7F820: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7F824:
    ctx->pc = 0x80B7F824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F824u)) return;
    // 80B7F824: li      r5, 1024
    ctx->gpr[5] = (u32)(s32)(1024);

label_80B7F828:
    ctx->pc = 0x80B7F828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F828u)) return;
    // 80B7F828: li      r6, 2236
    ctx->gpr[6] = (u32)(s32)(2236);

label_80B7F82C:
    ctx->pc = 0x80B7F82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F82Cu)) return;
    // 80B7F82C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7F830:
    ctx->pc = 0x80B7F830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F830u)) return;
    // 80B7F830: bl      0x8045C7B4
    {
            ctx->lr = 0x80B7F834u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B7F834:
    ctx->pc = 0x80B7F834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B7F834: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B7F838:
    ctx->pc = 0x80B7F838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F838u)) return;
    // 80B7F838: li      r4, 500
    ctx->gpr[4] = (u32)(s32)(500);

label_80B7F83C:
    ctx->pc = 0x80B7F83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F83Cu)) return;
    // 80B7F83C: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F840:
    ctx->pc = 0x80B7F840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F840u)) return;
    // 80B7F840: addi    r5, r5, -32448
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32448);

label_80B7F844:
    ctx->pc = 0x80B7F844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7F844: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F844u)) return;
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
label_80B7F848:
    ctx->pc = 0x80B7F848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F848u)) return;
    // 80B7F848: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F84C:
    ctx->pc = 0x80B7F84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F84Cu)) return;
    // 80B7F84C: addi    r5, r5, -32444
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32444);

label_80B7F850:
    ctx->pc = 0x80B7F850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7F850: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F850u)) return;
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
label_80B7F854:
    ctx->pc = 0x80B7F854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F854u)) return;
    // 80B7F854: lis     r5, -27542
    ctx->gpr[5] = ((u32)(s32)(-27542) << 16);

label_80B7F858:
    ctx->pc = 0x80B7F858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F858u)) return;
    // 80B7F858: addi    r5, r5, -32440
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32440);

label_80B7F85C:
    ctx->pc = 0x80B7F85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F85Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F85C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B7F85Cu)) return;
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
label_80B7F860:
    ctx->pc = 0x80B7F860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F860u)) return;
    // 80B7F860: bl      0x8045C750
    {
            ctx->lr = 0x80B7F864u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B7F864:
    ctx->pc = 0x80B7F864u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F864u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F864: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F868:
    ctx->pc = 0x80B7F868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F868u)) return;
    // 80B7F868: bl      0x8045F220
    {
            ctx->lr = 0x80B7F86Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F86C:
    ctx->pc = 0x80B7F86Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F86Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7F86C: bl      0x8045EB8C
    {
            ctx->lr = 0x80B7F870u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B7F870:
    ctx->pc = 0x80B7F870u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F870u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F870: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F874:
    ctx->pc = 0x80B7F874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F874u)) return;
    // 80B7F874: bl      0x8045F220
    {
            ctx->lr = 0x80B7F878u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F878:
    ctx->pc = 0x80B7F878u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F878u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7F878: lis     r4, -28601
    ctx->gpr[4] = ((u32)(s32)(-28601) << 16);

label_80B7F87C:
    ctx->pc = 0x80B7F87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F87Cu)) return;
    // 80B7F87C: addi    r4, r4, -1396
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1396);

label_80B7F880:
    ctx->pc = 0x80B7F880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F880u)) return;
    // 80B7F880: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B7F884:
    ctx->pc = 0x80B7F884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F884u)) return;
    // 80B7F884: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B7F888:
    ctx->pc = 0x80B7F888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F888u)) return;
    // 80B7F888: lis     r6, -27542
    ctx->gpr[6] = ((u32)(s32)(-27542) << 16);

label_80B7F88C:
    ctx->pc = 0x80B7F88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F88Cu)) return;
    // 80B7F88C: addi    r6, r6, -32436
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32436);

label_80B7F890:
    ctx->pc = 0x80B7F890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7F890: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7F890u)) return;
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
label_80B7F894:
    ctx->pc = 0x80B7F894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F894u)) return;
    // 80B7F894: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B7F898:
    ctx->pc = 0x80B7F898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F898u)) return;
    // 80B7F898: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80B7F89C:
    ctx->pc = 0x80B7F89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F89Cu)) return;
    // 80B7F89C: bl      0x8045EBE4
    {
            ctx->lr = 0x80B7F8A0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B7F8A0:
    ctx->pc = 0x80B7F8A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F8A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F8A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F8A4:
    ctx->pc = 0x80B7F8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F8A4u)) return;
    // 80B7F8A4: bl      0x8045F220
    {
            ctx->lr = 0x80B7F8A8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F8A8:
    ctx->pc = 0x80B7F8A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F8A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7F8A8: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F8AC:
    ctx->pc = 0x80B7F8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F8ACu)) return;
    // 80B7F8AC: addi    r4, r4, -30508
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30508);

label_80B7F8B0:
    ctx->pc = 0x80B7F8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F8B0u)) return;
    // 80B7F8B0: bl      0x8045C060
    {
            ctx->lr = 0x80B7F8B4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B7F8B4:
    ctx->pc = 0x80B7F8B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F8B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F8B4: li      r3, 722
    ctx->gpr[3] = (u32)(s32)(722);

label_80B7F8B8:
    ctx->pc = 0x80B7F8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F8B8u)) return;
    // 80B7F8B8: bl      0x8045BFA0
    {
            ctx->lr = 0x80B7F8BCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B7F8BC:
    ctx->pc = 0x80B7F8BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F8BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B7F8BC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B7F8C0:
    ctx->pc = 0x80B7F8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F8C0u)) return;
    // 80B7F8C0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B7F8C4:
    ctx->pc = 0x80B7F8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F8C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7F8C4: lwz     r0, 0(r3)
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
label_80B7F8C8:
    ctx->pc = 0x80B7F8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F8C8u)) return;
    // 80B7F8C8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B7F8CC:
    ctx->pc = 0x80B7F8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F8CCu)) return;
    // 80B7F8CC: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7F8D0:
    ctx->pc = 0x80B7F8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F8D0u)) return;
    // 80B7F8D0: addi    r3, r3, -30588
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30588);

label_80B7F8D4:
    ctx->pc = 0x80B7F8D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F8D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7F8D4: lwzx    r3, r3, r0
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
label_80B7F8D8:
    ctx->pc = 0x80B7F8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F8D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F8D8: lwz     r3, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7F8DC:
    ctx->pc = 0x80B7F8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F8DCu)) return;
    // 80B7F8DC: bl      0x8045F6FC
    {
            ctx->lr = 0x80B7F8E0u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B7F8E0:
    ctx->pc = 0x80B7F8E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F8E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F8E0: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80B7F8E4:
    ctx->pc = 0x80B7F8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F8E4u)) return;
    // 80B7F8E4: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F8E8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F8E8:
    ctx->pc = 0x80B7F8E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F8E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F8E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F8EC:
    ctx->pc = 0x80B7F8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F8ECu)) return;
    // 80B7F8EC: bl      0x8045F220
    {
            ctx->lr = 0x80B7F8F0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F8F0:
    ctx->pc = 0x80B7F8F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F8F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7F8F0: bl      0x8045C034
    {
            ctx->lr = 0x80B7F8F4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B7F8F4:
    ctx->pc = 0x80B7F8F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F8F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F8F4: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80B7F8F8:
    ctx->pc = 0x80B7F8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F8F8u)) return;
    // 80B7F8F8: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F8FCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F8FC:
    ctx->pc = 0x80B7F8FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F8FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F8FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F900:
    ctx->pc = 0x80B7F900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F900u)) return;
    // 80B7F900: bl      0x8045F220
    {
            ctx->lr = 0x80B7F904u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F904:
    ctx->pc = 0x80B7F904u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F904u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7F904: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F908:
    ctx->pc = 0x80B7F908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F908u)) return;
    // 80B7F908: addi    r4, r4, -30500
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30500);

label_80B7F90C:
    ctx->pc = 0x80B7F90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F90Cu)) return;
    // 80B7F90C: bl      0x8045C060
    {
            ctx->lr = 0x80B7F910u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B7F910:
    ctx->pc = 0x80B7F910u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F910u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F910: li      r3, 723
    ctx->gpr[3] = (u32)(s32)(723);

label_80B7F914:
    ctx->pc = 0x80B7F914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F914u)) return;
    // 80B7F914: bl      0x8045BFA0
    {
            ctx->lr = 0x80B7F918u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B7F918:
    ctx->pc = 0x80B7F918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B7F918: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B7F91C:
    ctx->pc = 0x80B7F91Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F91Cu)) return;
    // 80B7F91C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B7F920:
    ctx->pc = 0x80B7F920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F920u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7F920: lwz     r0, 0(r3)
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
label_80B7F924:
    ctx->pc = 0x80B7F924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F924u)) return;
    // 80B7F924: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B7F928:
    ctx->pc = 0x80B7F928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F928u)) return;
    // 80B7F928: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7F92C:
    ctx->pc = 0x80B7F92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F92Cu)) return;
    // 80B7F92C: addi    r3, r3, -30588
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30588);

label_80B7F930:
    ctx->pc = 0x80B7F930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F930u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7F930: lwzx    r3, r3, r0
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
label_80B7F934:
    ctx->pc = 0x80B7F934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F934: lwz     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7F938:
    ctx->pc = 0x80B7F938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F938u)) return;
    // 80B7F938: bl      0x8045F6FC
    {
            ctx->lr = 0x80B7F93Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B7F93C:
    ctx->pc = 0x80B7F93Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F93Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F93C: li      r3, 150
    ctx->gpr[3] = (u32)(s32)(150);

label_80B7F940:
    ctx->pc = 0x80B7F940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F940u)) return;
    // 80B7F940: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F944u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F944:
    ctx->pc = 0x80B7F944u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F944u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F944: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F948:
    ctx->pc = 0x80B7F948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F948u)) return;
    // 80B7F948: bl      0x8045F220
    {
            ctx->lr = 0x80B7F94Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F94C:
    ctx->pc = 0x80B7F94Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F94Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7F94C: bl      0x8045C034
    {
            ctx->lr = 0x80B7F950u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B7F950:
    ctx->pc = 0x80B7F950u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F950u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F950: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80B7F954:
    ctx->pc = 0x80B7F954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F954u)) return;
    // 80B7F954: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F958u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F958:
    ctx->pc = 0x80B7F958u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F958u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F958: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F95C:
    ctx->pc = 0x80B7F95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F95Cu)) return;
    // 80B7F95C: bl      0x8045F220
    {
            ctx->lr = 0x80B7F960u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F960:
    ctx->pc = 0x80B7F960u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F960u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7F960: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F964:
    ctx->pc = 0x80B7F964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F964u)) return;
    // 80B7F964: addi    r4, r4, -30484
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30484);

label_80B7F968:
    ctx->pc = 0x80B7F968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F968u)) return;
    // 80B7F968: bl      0x8045C060
    {
            ctx->lr = 0x80B7F96Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B7F96C:
    ctx->pc = 0x80B7F96Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F96Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F96C: li      r3, 724
    ctx->gpr[3] = (u32)(s32)(724);

label_80B7F970:
    ctx->pc = 0x80B7F970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F970u)) return;
    // 80B7F970: bl      0x8045BFA0
    {
            ctx->lr = 0x80B7F974u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B7F974:
    ctx->pc = 0x80B7F974u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F974u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B7F974: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B7F978:
    ctx->pc = 0x80B7F978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F978u)) return;
    // 80B7F978: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B7F97C:
    ctx->pc = 0x80B7F97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F97Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7F97C: lwz     r0, 0(r3)
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
label_80B7F980:
    ctx->pc = 0x80B7F980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F980u)) return;
    // 80B7F980: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B7F984:
    ctx->pc = 0x80B7F984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F984u)) return;
    // 80B7F984: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7F988:
    ctx->pc = 0x80B7F988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F988u)) return;
    // 80B7F988: addi    r3, r3, -30588
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30588);

label_80B7F98C:
    ctx->pc = 0x80B7F98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F98Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7F98C: lwzx    r3, r3, r0
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
label_80B7F990:
    ctx->pc = 0x80B7F990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7F990: lwz     r3, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7F994:
    ctx->pc = 0x80B7F994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F994u)) return;
    // 80B7F994: bl      0x8045F6FC
    {
            ctx->lr = 0x80B7F998u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B7F998:
    ctx->pc = 0x80B7F998u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F998u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F998: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80B7F99C:
    ctx->pc = 0x80B7F99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F99Cu)) return;
    // 80B7F99C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F9A0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F9A0:
    ctx->pc = 0x80B7F9A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F9A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F9A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F9A4:
    ctx->pc = 0x80B7F9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F9A4u)) return;
    // 80B7F9A4: bl      0x8045F220
    {
            ctx->lr = 0x80B7F9A8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F9A8:
    ctx->pc = 0x80B7F9A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F9A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7F9A8: bl      0x8045C034
    {
            ctx->lr = 0x80B7F9ACu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B7F9AC:
    ctx->pc = 0x80B7F9ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F9ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F9AC: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80B7F9B0:
    ctx->pc = 0x80B7F9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F9B0u)) return;
    // 80B7F9B0: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7F9B4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7F9B4:
    ctx->pc = 0x80B7F9B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F9B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F9B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F9B8:
    ctx->pc = 0x80B7F9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F9B8u)) return;
    // 80B7F9B8: bl      0x8045F220
    {
            ctx->lr = 0x80B7F9BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F9BC:
    ctx->pc = 0x80B7F9BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F9BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7F9BC: bl      0x8045EB8C
    {
            ctx->lr = 0x80B7F9C0u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B7F9C0:
    ctx->pc = 0x80B7F9C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F9C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F9C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F9C4:
    ctx->pc = 0x80B7F9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F9C4u)) return;
    // 80B7F9C4: bl      0x8045F220
    {
            ctx->lr = 0x80B7F9C8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F9C8:
    ctx->pc = 0x80B7F9C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F9C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7F9C8: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F9CC:
    ctx->pc = 0x80B7F9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F9CCu)) return;
    // 80B7F9CC: addi    r4, r4, 27572
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27572);

label_80B7F9D0:
    ctx->pc = 0x80B7F9D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F9D0u)) return;
    // 80B7F9D0: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B7F9D4:
    ctx->pc = 0x80B7F9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F9D4u)) return;
    // 80B7F9D4: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B7F9D8:
    ctx->pc = 0x80B7F9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F9D8u)) return;
    // 80B7F9D8: lis     r6, -27542
    ctx->gpr[6] = ((u32)(s32)(-27542) << 16);

label_80B7F9DC:
    ctx->pc = 0x80B7F9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F9DCu)) return;
    // 80B7F9DC: addi    r6, r6, -32580
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32580);

label_80B7F9E0:
    ctx->pc = 0x80B7F9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F9E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7F9E0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7F9E0u)) return;
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
label_80B7F9E4:
    ctx->pc = 0x80B7F9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F9E4u)) return;
    // 80B7F9E4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7F9E8:
    ctx->pc = 0x80B7F9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F9E8u)) return;
    // 80B7F9E8: li      r7, 10
    ctx->gpr[7] = (u32)(s32)(10);

label_80B7F9EC:
    ctx->pc = 0x80B7F9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F9ECu)) return;
    // 80B7F9EC: bl      0x8045EBE4
    {
            ctx->lr = 0x80B7F9F0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B7F9F0:
    ctx->pc = 0x80B7F9F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F9F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7F9F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7F9F4:
    ctx->pc = 0x80B7F9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F9F4u)) return;
    // 80B7F9F4: bl      0x8045F220
    {
            ctx->lr = 0x80B7F9F8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7F9F8:
    ctx->pc = 0x80B7F9F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7F9F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7F9F8: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7F9FC:
    ctx->pc = 0x80B7F9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7F9FCu)) return;
    // 80B7F9FC: addi    r4, r4, 29672
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29672);

label_80B7FA00:
    ctx->pc = 0x80B7FA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA00u)) return;
    // 80B7FA00: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B7FA04:
    ctx->pc = 0x80B7FA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA04u)) return;
    // 80B7FA04: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B7FA08:
    ctx->pc = 0x80B7FA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA08u)) return;
    // 80B7FA08: lis     r6, -27542
    ctx->gpr[6] = ((u32)(s32)(-27542) << 16);

label_80B7FA0C:
    ctx->pc = 0x80B7FA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA0Cu)) return;
    // 80B7FA0C: addi    r6, r6, -32580
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32580);

label_80B7FA10:
    ctx->pc = 0x80B7FA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B7FA10: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B7FA10u)) return;
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
label_80B7FA14:
    ctx->pc = 0x80B7FA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA14u)) return;
    // 80B7FA14: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B7FA18:
    ctx->pc = 0x80B7FA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA18u)) return;
    // 80B7FA18: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B7FA1C:
    ctx->pc = 0x80B7FA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA1Cu)) return;
    // 80B7FA1C: bl      0x8045EBE4
    {
            ctx->lr = 0x80B7FA20u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B7FA20:
    ctx->pc = 0x80B7FA20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FA20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7FA20: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80B7FA24:
    ctx->pc = 0x80B7FA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA24u)) return;
    // 80B7FA24: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7FA28u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7FA28:
    ctx->pc = 0x80B7FA28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FA28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7FA28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7FA2C:
    ctx->pc = 0x80B7FA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA2Cu)) return;
    // 80B7FA2C: bl      0x8045F220
    {
            ctx->lr = 0x80B7FA30u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7FA30:
    ctx->pc = 0x80B7FA30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FA30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B7FA30: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7FA34:
    ctx->pc = 0x80B7FA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA34u)) return;
    // 80B7FA34: addi    r4, r4, -30476
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30476);

label_80B7FA38:
    ctx->pc = 0x80B7FA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA38u)) return;
    // 80B7FA38: bl      0x8045C060
    {
            ctx->lr = 0x80B7FA3Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B7FA3C:
    ctx->pc = 0x80B7FA3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FA3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7FA3C: li      r3, 725
    ctx->gpr[3] = (u32)(s32)(725);

label_80B7FA40:
    ctx->pc = 0x80B7FA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA40u)) return;
    // 80B7FA40: bl      0x8045BFA0
    {
            ctx->lr = 0x80B7FA44u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B7FA44:
    ctx->pc = 0x80B7FA44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FA44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B7FA44: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B7FA48:
    ctx->pc = 0x80B7FA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA48u)) return;
    // 80B7FA48: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B7FA4C:
    ctx->pc = 0x80B7FA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7FA4C: lwz     r0, 0(r3)
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
label_80B7FA50:
    ctx->pc = 0x80B7FA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA50u)) return;
    // 80B7FA50: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B7FA54:
    ctx->pc = 0x80B7FA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA54u)) return;
    // 80B7FA54: lis     r3, -27542
    ctx->gpr[3] = ((u32)(s32)(-27542) << 16);

label_80B7FA58:
    ctx->pc = 0x80B7FA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA58u)) return;
    // 80B7FA58: addi    r3, r3, -30588
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30588);

label_80B7FA5C:
    ctx->pc = 0x80B7FA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7FA5C: lwzx    r3, r3, r0
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
label_80B7FA60:
    ctx->pc = 0x80B7FA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7FA60: lwz     r3, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7FA64:
    ctx->pc = 0x80B7FA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA64u)) return;
    // 80B7FA64: bl      0x8045F6FC
    {
            ctx->lr = 0x80B7FA68u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B7FA68:
    ctx->pc = 0x80B7FA68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FA68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7FA68: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80B7FA6C:
    ctx->pc = 0x80B7FA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA6Cu)) return;
    // 80B7FA6C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7FA70u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7FA70:
    ctx->pc = 0x80B7FA70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FA70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7FA70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7FA74:
    ctx->pc = 0x80B7FA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA74u)) return;
    // 80B7FA74: bl      0x8045F220
    {
            ctx->lr = 0x80B7FA78u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7FA78:
    ctx->pc = 0x80B7FA78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FA78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7FA78: bl      0x8045C034
    {
            ctx->lr = 0x80B7FA7Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B7FA7C:
    ctx->pc = 0x80B7FA7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FA7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7FA7C: li      r3, 72
    ctx->gpr[3] = (u32)(s32)(72);

label_80B7FA80:
    ctx->pc = 0x80B7FA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA80u)) return;
    // 80B7FA80: bl      0x8045F7C8
    {
            ctx->lr = 0x80B7FA84u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B7FA84:
    ctx->pc = 0x80B7FA84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FA84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7FA84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7FA88:
    ctx->pc = 0x80B7FA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA88u)) return;
    // 80B7FA88: bl      0x8045F220
    {
            ctx->lr = 0x80B7FA8Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7FA8C:
    ctx->pc = 0x80B7FA8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FA8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7FA8C: bl      0x8045EB8C
    {
            ctx->lr = 0x80B7FA90u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B7FA90:
    ctx->pc = 0x80B7FA90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FA90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7FA90: b       0x80B7FB1C
    {
            goto label_80B7FB1C;
    }

label_80B7FA94:
    ctx->pc = 0x80B7FA94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FA94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7FA94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7FA98:
    ctx->pc = 0x80B7FA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FA98u)) return;
    // 80B7FA98: bl      0x8045F220
    {
            ctx->lr = 0x80B7FA9Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7FA9C:
    ctx->pc = 0x80B7FA9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FA9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B7FA9C: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7FAA0:
    ctx->pc = 0x80B7FAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FAA0u)) return;
    // 80B7FAA0: addi    r4, r4, -32480
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32480);

label_80B7FAA4:
    ctx->pc = 0x80B7FAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FAA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B7FAA4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7FAA4u)) return;
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
label_80B7FAA8:
    ctx->pc = 0x80B7FAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FAA8u)) return;
    // 80B7FAA8: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7FAAC:
    ctx->pc = 0x80B7FAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FAACu)) return;
    // 80B7FAAC: addi    r4, r4, -32588
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32588);

label_80B7FAB0:
    ctx->pc = 0x80B7FAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FAB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7FAB0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7FAB0u)) return;
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
label_80B7FAB4:
    ctx->pc = 0x80B7FAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FAB4u)) return;
    // 80B7FAB4: lis     r4, -27542
    ctx->gpr[4] = ((u32)(s32)(-27542) << 16);

label_80B7FAB8:
    ctx->pc = 0x80B7FAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FAB8u)) return;
    // 80B7FAB8: addi    r4, r4, -32476
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32476);

label_80B7FABC:
    ctx->pc = 0x80B7FABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7FABC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B7FABCu)) return;
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
label_80B7FAC0:
    ctx->pc = 0x80B7FAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FAC0u)) return;
    // 80B7FAC0: bl      0x8045EF2C
    {
            ctx->lr = 0x80B7FAC4u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B7FAC4:
    ctx->pc = 0x80B7FAC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FAC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7FAC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7FAC8:
    ctx->pc = 0x80B7FAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FAC8u)) return;
    // 80B7FAC8: bl      0x8045F220
    {
            ctx->lr = 0x80B7FACCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B7FACC:
    ctx->pc = 0x80B7FACCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FACCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B7FACC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B7FAD0:
    ctx->pc = 0x80B7FAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FAD0u)) return;
    // 80B7FAD0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B7FAD4:
    ctx->pc = 0x80B7FAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FAD4u)) return;
    // 80B7FAD4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B7FAD8:
    ctx->pc = 0x80B7FAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FAD8u)) return;
    // 80B7FAD8: bl      0x8045EEA8
    {
            ctx->lr = 0x80B7FADCu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B7FADC:
    ctx->pc = 0x80B7FADCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FADCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B7FADC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B7FAE0:
    ctx->pc = 0x80B7FAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FAE0u)) return;
    // 80B7FAE0: bl      0x8045EC10
    {
            ctx->lr = 0x80B7FAE4u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80B7FAE4:
    ctx->pc = 0x80B7FAE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FAE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80B7FAE4: lis     r3, -28628
    ctx->gpr[3] = ((u32)(s32)(-28628) << 16);

label_80B7FAE8:
    ctx->pc = 0x80B7FAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FAE8u)) return;
    // 80B7FAE8: addi    r4, r3, -14944
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-14944);

label_80B7FAEC:
    ctx->pc = 0x80B7FAECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FAECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B7FAEC: lwz     r3, 0(r4)
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
label_80B7FAF0:
    ctx->pc = 0x80B7FAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FAF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B7FAF0: lbz     r0, 15(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7FAF4:
    ctx->pc = 0x80B7FAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FAF4u)) return;
    // 80B7FAF4: rlwinm r0, r0, 0, 30, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFBu;
    }

label_80B7FAF8:
    ctx->pc = 0x80B7FAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FAF8u)) return;
    // 80B7FAF8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80B7FAFC:
    ctx->pc = 0x80B7FAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FAFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B7FAFC: stb     r0, 15(r3)
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
label_80B7FB00:
    ctx->pc = 0x80B7FB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FB00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B7FB00: lwz     r3, 0(r4)
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
label_80B7FB04:
    ctx->pc = 0x80B7FB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FB04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7FB04: lbz     r0, 15(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7FB08:
    ctx->pc = 0x80B7FB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FB08u)) return;
    // 80B7FB08: rlwinm r0, r0, 0, 28, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFEFu;
    }

label_80B7FB0C:
    ctx->pc = 0x80B7FB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FB0Cu)) return;
    // 80B7FB0C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80B7FB10:
    ctx->pc = 0x80B7FB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FB10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B7FB10: stb     r0, 15(r3)
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
label_80B7FB14:
    ctx->pc = 0x80B7FB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FB14u)) return;
    // 80B7FB14: bl      0x8045DE34
    {
            ctx->lr = 0x80B7FB18u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80B7FB18:
    ctx->pc = 0x80B7FB18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FB18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B7FB18: bl      0x80460A80
    {
            ctx->lr = 0x80B7FB1Cu;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80B7FB1C:
    ctx->pc = 0x80B7FB1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B7FB1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B7FB1C: lwz     r0, 20(r1)
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
label_80B7FB20:
    ctx->pc = 0x80B7FB20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B7FB20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B7FB20: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B7FB24:
    ctx->pc = 0x80B7FB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FB24u)) return;
    // 80B7FB24: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B7FB28:
    ctx->pc = 0x80B7FB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B7FB28u)) return;
    // 80B7FB28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B7F100;
        }
    }

    ctx->pc = 0x80B7FB2Cu;
    return;
return_dispatch_80B7F100:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80B7F138u: goto label_80B7F138;
    case 0x80B7F13Cu: goto label_80B7F13C;
    case 0x80B7F140u: goto label_80B7F140;
    case 0x80B7F144u: goto label_80B7F144;
    case 0x80B7F168u: goto label_80B7F168;
    case 0x80B7F190u: goto label_80B7F190;
    case 0x80B7F198u: goto label_80B7F198;
    case 0x80B7F1A8u: goto label_80B7F1A8;
    case 0x80B7F1B0u: goto label_80B7F1B0;
    case 0x80B7F1B8u: goto label_80B7F1B8;
    case 0x80B7F1C8u: goto label_80B7F1C8;
    case 0x80B7F1D0u: goto label_80B7F1D0;
    case 0x80B7F1DCu: goto label_80B7F1DC;
    case 0x80B7F1E4u: goto label_80B7F1E4;
    case 0x80B7F20Cu: goto label_80B7F20C;
    case 0x80B7F224u: goto label_80B7F224;
    case 0x80B7F254u: goto label_80B7F254;
    case 0x80B7F26Cu: goto label_80B7F26C;
    case 0x80B7F274u: goto label_80B7F274;
    case 0x80B7F290u: goto label_80B7F290;
    case 0x80B7F2C0u: goto label_80B7F2C0;
    case 0x80B7F2F0u: goto label_80B7F2F0;
    case 0x80B7F30Cu: goto label_80B7F30C;
    case 0x80B7F314u: goto label_80B7F314;
    case 0x80B7F344u: goto label_80B7F344;
    case 0x80B7F360u: goto label_80B7F360;
    case 0x80B7F390u: goto label_80B7F390;
    case 0x80B7F398u: goto label_80B7F398;
    case 0x80B7F3A0u: goto label_80B7F3A0;
    case 0x80B7F3A4u: goto label_80B7F3A4;
    case 0x80B7F3ACu: goto label_80B7F3AC;
    case 0x80B7F3B8u: goto label_80B7F3B8;
    case 0x80B7F3C0u: goto label_80B7F3C0;
    case 0x80B7F3C8u: goto label_80B7F3C8;
    case 0x80B7F3D4u: goto label_80B7F3D4;
    case 0x80B7F3DCu: goto label_80B7F3DC;
    case 0x80B7F400u: goto label_80B7F400;
    case 0x80B7F408u: goto label_80B7F408;
    case 0x80B7F438u: goto label_80B7F438;
    case 0x80B7F454u: goto label_80B7F454;
    case 0x80B7F470u: goto label_80B7F470;
    case 0x80B7F478u: goto label_80B7F478;
    case 0x80B7F484u: goto label_80B7F484;
    case 0x80B7F48Cu: goto label_80B7F48C;
    case 0x80B7F4B0u: goto label_80B7F4B0;
    case 0x80B7F4B8u: goto label_80B7F4B8;
    case 0x80B7F4C0u: goto label_80B7F4C0;
    case 0x80B7F4C4u: goto label_80B7F4C4;
    case 0x80B7F4CCu: goto label_80B7F4CC;
    case 0x80B7F4D8u: goto label_80B7F4D8;
    case 0x80B7F4E0u: goto label_80B7F4E0;
    case 0x80B7F504u: goto label_80B7F504;
    case 0x80B7F50Cu: goto label_80B7F50C;
    case 0x80B7F514u: goto label_80B7F514;
    case 0x80B7F518u: goto label_80B7F518;
    case 0x80B7F548u: goto label_80B7F548;
    case 0x80B7F564u: goto label_80B7F564;
    case 0x80B7F580u: goto label_80B7F580;
    case 0x80B7F588u: goto label_80B7F588;
    case 0x80B7F5B0u: goto label_80B7F5B0;
    case 0x80B7F5B8u: goto label_80B7F5B8;
    case 0x80B7F5BCu: goto label_80B7F5BC;
    case 0x80B7F5ECu: goto label_80B7F5EC;
    case 0x80B7F608u: goto label_80B7F608;
    case 0x80B7F640u: goto label_80B7F640;
    case 0x80B7F668u: goto label_80B7F668;
    case 0x80B7F670u: goto label_80B7F670;
    case 0x80B7F678u: goto label_80B7F678;
    case 0x80B7F67Cu: goto label_80B7F67C;
    case 0x80B7F684u: goto label_80B7F684;
    case 0x80B7F6ACu: goto label_80B7F6AC;
    case 0x80B7F6B4u: goto label_80B7F6B4;
    case 0x80B7F6BCu: goto label_80B7F6BC;
    case 0x80B7F6E4u: goto label_80B7F6E4;
    case 0x80B7F6ECu: goto label_80B7F6EC;
    case 0x80B7F6F0u: goto label_80B7F6F0;
    case 0x80B7F720u: goto label_80B7F720;
    case 0x80B7F728u: goto label_80B7F728;
    case 0x80B7F750u: goto label_80B7F750;
    case 0x80B7F758u: goto label_80B7F758;
    case 0x80B7F760u: goto label_80B7F760;
    case 0x80B7F788u: goto label_80B7F788;
    case 0x80B7F790u: goto label_80B7F790;
    case 0x80B7F798u: goto label_80B7F798;
    case 0x80B7F7A4u: goto label_80B7F7A4;
    case 0x80B7F7ACu: goto label_80B7F7AC;
    case 0x80B7F7D0u: goto label_80B7F7D0;
    case 0x80B7F7D8u: goto label_80B7F7D8;
    case 0x80B7F7E0u: goto label_80B7F7E0;
    case 0x80B7F7E4u: goto label_80B7F7E4;
    case 0x80B7F7ECu: goto label_80B7F7EC;
    case 0x80B7F81Cu: goto label_80B7F81C;
    case 0x80B7F834u: goto label_80B7F834;
    case 0x80B7F864u: goto label_80B7F864;
    case 0x80B7F86Cu: goto label_80B7F86C;
    case 0x80B7F870u: goto label_80B7F870;
    case 0x80B7F878u: goto label_80B7F878;
    case 0x80B7F8A0u: goto label_80B7F8A0;
    case 0x80B7F8A8u: goto label_80B7F8A8;
    case 0x80B7F8B4u: goto label_80B7F8B4;
    case 0x80B7F8BCu: goto label_80B7F8BC;
    case 0x80B7F8E0u: goto label_80B7F8E0;
    case 0x80B7F8E8u: goto label_80B7F8E8;
    case 0x80B7F8F0u: goto label_80B7F8F0;
    case 0x80B7F8F4u: goto label_80B7F8F4;
    case 0x80B7F8FCu: goto label_80B7F8FC;
    case 0x80B7F904u: goto label_80B7F904;
    case 0x80B7F910u: goto label_80B7F910;
    case 0x80B7F918u: goto label_80B7F918;
    case 0x80B7F93Cu: goto label_80B7F93C;
    case 0x80B7F944u: goto label_80B7F944;
    case 0x80B7F94Cu: goto label_80B7F94C;
    case 0x80B7F950u: goto label_80B7F950;
    case 0x80B7F958u: goto label_80B7F958;
    case 0x80B7F960u: goto label_80B7F960;
    case 0x80B7F96Cu: goto label_80B7F96C;
    case 0x80B7F974u: goto label_80B7F974;
    case 0x80B7F998u: goto label_80B7F998;
    case 0x80B7F9A0u: goto label_80B7F9A0;
    case 0x80B7F9A8u: goto label_80B7F9A8;
    case 0x80B7F9ACu: goto label_80B7F9AC;
    case 0x80B7F9B4u: goto label_80B7F9B4;
    case 0x80B7F9BCu: goto label_80B7F9BC;
    case 0x80B7F9C0u: goto label_80B7F9C0;
    case 0x80B7F9C8u: goto label_80B7F9C8;
    case 0x80B7F9F0u: goto label_80B7F9F0;
    case 0x80B7F9F8u: goto label_80B7F9F8;
    case 0x80B7FA20u: goto label_80B7FA20;
    case 0x80B7FA28u: goto label_80B7FA28;
    case 0x80B7FA30u: goto label_80B7FA30;
    case 0x80B7FA3Cu: goto label_80B7FA3C;
    case 0x80B7FA44u: goto label_80B7FA44;
    case 0x80B7FA68u: goto label_80B7FA68;
    case 0x80B7FA70u: goto label_80B7FA70;
    case 0x80B7FA78u: goto label_80B7FA78;
    case 0x80B7FA7Cu: goto label_80B7FA7C;
    case 0x80B7FA84u: goto label_80B7FA84;
    case 0x80B7FA8Cu: goto label_80B7FA8C;
    case 0x80B7FA90u: goto label_80B7FA90;
    case 0x80B7FA9Cu: goto label_80B7FA9C;
    case 0x80B7FAC4u: goto label_80B7FAC4;
    case 0x80B7FACCu: goto label_80B7FACC;
    case 0x80B7FADCu: goto label_80B7FADC;
    case 0x80B7FAE4u: goto label_80B7FAE4;
    case 0x80B7FB18u: goto label_80B7FB18;
    case 0x80B7FB1Cu: goto label_80B7FB1C;
    default: return;
    }
}

