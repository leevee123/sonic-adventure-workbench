// DolRecomp output
#include "../generated.h"

void func_80D342C0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D342C0[579] = {
        &&label_80D342C0,
        &&label_80D342C4,
        &&label_80D342C8,
        &&label_80D342CC,
        &&label_80D342D0,
        &&label_80D342D4,
        &&label_80D342D8,
        &&label_80D342DC,
        &&label_80D342E0,
        &&label_80D342E4,
        &&label_80D342E8,
        &&label_80D342EC,
        &&label_80D342F0,
        &&label_80D342F4,
        &&label_80D342F8,
        &&label_80D342FC,
        &&label_80D34300,
        &&label_80D34304,
        &&label_80D34308,
        &&label_80D3430C,
        &&label_80D34310,
        &&label_80D34314,
        &&label_80D34318,
        &&label_80D3431C,
        &&label_80D34320,
        &&label_80D34324,
        &&label_80D34328,
        &&label_80D3432C,
        &&label_80D34330,
        &&label_80D34334,
        &&label_80D34338,
        &&label_80D3433C,
        &&label_80D34340,
        &&label_80D34344,
        &&label_80D34348,
        &&label_80D3434C,
        &&label_80D34350,
        &&label_80D34354,
        &&label_80D34358,
        &&label_80D3435C,
        &&label_80D34360,
        &&label_80D34364,
        &&label_80D34368,
        &&label_80D3436C,
        &&label_80D34370,
        &&label_80D34374,
        &&label_80D34378,
        &&label_80D3437C,
        &&label_80D34380,
        &&label_80D34384,
        &&label_80D34388,
        &&label_80D3438C,
        &&label_80D34390,
        &&label_80D34394,
        &&label_80D34398,
        &&label_80D3439C,
        &&label_80D343A0,
        &&label_80D343A4,
        &&label_80D343A8,
        &&label_80D343AC,
        &&label_80D343B0,
        &&label_80D343B4,
        &&label_80D343B8,
        &&label_80D343BC,
        &&label_80D343C0,
        &&label_80D343C4,
        &&label_80D343C8,
        &&label_80D343CC,
        &&label_80D343D0,
        &&label_80D343D4,
        &&label_80D343D8,
        &&label_80D343DC,
        &&label_80D343E0,
        &&label_80D343E4,
        &&label_80D343E8,
        &&label_80D343EC,
        &&label_80D343F0,
        &&label_80D343F4,
        &&label_80D343F8,
        &&label_80D343FC,
        &&label_80D34400,
        &&label_80D34404,
        &&label_80D34408,
        &&label_80D3440C,
        &&label_80D34410,
        &&label_80D34414,
        &&label_80D34418,
        &&label_80D3441C,
        &&label_80D34420,
        &&label_80D34424,
        &&label_80D34428,
        &&label_80D3442C,
        &&label_80D34430,
        &&label_80D34434,
        &&label_80D34438,
        &&label_80D3443C,
        &&label_80D34440,
        &&label_80D34444,
        &&label_80D34448,
        &&label_80D3444C,
        &&label_80D34450,
        &&label_80D34454,
        &&label_80D34458,
        &&label_80D3445C,
        &&label_80D34460,
        &&label_80D34464,
        &&label_80D34468,
        &&label_80D3446C,
        &&label_80D34470,
        &&label_80D34474,
        &&label_80D34478,
        &&label_80D3447C,
        &&label_80D34480,
        &&label_80D34484,
        &&label_80D34488,
        &&label_80D3448C,
        &&label_80D34490,
        &&label_80D34494,
        &&label_80D34498,
        &&label_80D3449C,
        &&label_80D344A0,
        &&label_80D344A4,
        &&label_80D344A8,
        &&label_80D344AC,
        &&label_80D344B0,
        &&label_80D344B4,
        &&label_80D344B8,
        &&label_80D344BC,
        &&label_80D344C0,
        &&label_80D344C4,
        &&label_80D344C8,
        &&label_80D344CC,
        &&label_80D344D0,
        &&label_80D344D4,
        &&label_80D344D8,
        &&label_80D344DC,
        &&label_80D344E0,
        &&label_80D344E4,
        &&label_80D344E8,
        &&label_80D344EC,
        &&label_80D344F0,
        &&label_80D344F4,
        &&label_80D344F8,
        &&label_80D344FC,
        &&label_80D34500,
        &&label_80D34504,
        &&label_80D34508,
        &&label_80D3450C,
        &&label_80D34510,
        &&label_80D34514,
        &&label_80D34518,
        &&label_80D3451C,
        &&label_80D34520,
        &&label_80D34524,
        &&label_80D34528,
        &&label_80D3452C,
        &&label_80D34530,
        &&label_80D34534,
        &&label_80D34538,
        &&label_80D3453C,
        &&label_80D34540,
        &&label_80D34544,
        &&label_80D34548,
        &&label_80D3454C,
        &&label_80D34550,
        &&label_80D34554,
        &&label_80D34558,
        &&label_80D3455C,
        &&label_80D34560,
        &&label_80D34564,
        &&label_80D34568,
        &&label_80D3456C,
        &&label_80D34570,
        &&label_80D34574,
        &&label_80D34578,
        &&label_80D3457C,
        &&label_80D34580,
        &&label_80D34584,
        &&label_80D34588,
        &&label_80D3458C,
        &&label_80D34590,
        &&label_80D34594,
        &&label_80D34598,
        &&label_80D3459C,
        &&label_80D345A0,
        &&label_80D345A4,
        &&label_80D345A8,
        &&label_80D345AC,
        &&label_80D345B0,
        &&label_80D345B4,
        &&label_80D345B8,
        &&label_80D345BC,
        &&label_80D345C0,
        &&label_80D345C4,
        &&label_80D345C8,
        &&label_80D345CC,
        &&label_80D345D0,
        &&label_80D345D4,
        &&label_80D345D8,
        &&label_80D345DC,
        &&label_80D345E0,
        &&label_80D345E4,
        &&label_80D345E8,
        &&label_80D345EC,
        &&label_80D345F0,
        &&label_80D345F4,
        &&label_80D345F8,
        &&label_80D345FC,
        &&label_80D34600,
        &&label_80D34604,
        &&label_80D34608,
        &&label_80D3460C,
        &&label_80D34610,
        &&label_80D34614,
        &&label_80D34618,
        &&label_80D3461C,
        &&label_80D34620,
        &&label_80D34624,
        &&label_80D34628,
        &&label_80D3462C,
        &&label_80D34630,
        &&label_80D34634,
        &&label_80D34638,
        &&label_80D3463C,
        &&label_80D34640,
        &&label_80D34644,
        &&label_80D34648,
        &&label_80D3464C,
        &&label_80D34650,
        &&label_80D34654,
        &&label_80D34658,
        &&label_80D3465C,
        &&label_80D34660,
        &&label_80D34664,
        &&label_80D34668,
        &&label_80D3466C,
        &&label_80D34670,
        &&label_80D34674,
        &&label_80D34678,
        &&label_80D3467C,
        &&label_80D34680,
        &&label_80D34684,
        &&label_80D34688,
        &&label_80D3468C,
        &&label_80D34690,
        &&label_80D34694,
        &&label_80D34698,
        &&label_80D3469C,
        &&label_80D346A0,
        &&label_80D346A4,
        &&label_80D346A8,
        &&label_80D346AC,
        &&label_80D346B0,
        &&label_80D346B4,
        &&label_80D346B8,
        &&label_80D346BC,
        &&label_80D346C0,
        &&label_80D346C4,
        &&label_80D346C8,
        &&label_80D346CC,
        &&label_80D346D0,
        &&label_80D346D4,
        &&label_80D346D8,
        &&label_80D346DC,
        &&label_80D346E0,
        &&label_80D346E4,
        &&label_80D346E8,
        &&label_80D346EC,
        &&label_80D346F0,
        &&label_80D346F4,
        &&label_80D346F8,
        &&label_80D346FC,
        &&label_80D34700,
        &&label_80D34704,
        &&label_80D34708,
        &&label_80D3470C,
        &&label_80D34710,
        &&label_80D34714,
        &&label_80D34718,
        &&label_80D3471C,
        &&label_80D34720,
        &&label_80D34724,
        &&label_80D34728,
        &&label_80D3472C,
        &&label_80D34730,
        &&label_80D34734,
        &&label_80D34738,
        &&label_80D3473C,
        &&label_80D34740,
        &&label_80D34744,
        &&label_80D34748,
        &&label_80D3474C,
        &&label_80D34750,
        &&label_80D34754,
        &&label_80D34758,
        &&label_80D3475C,
        &&label_80D34760,
        &&label_80D34764,
        &&label_80D34768,
        &&label_80D3476C,
        &&label_80D34770,
        &&label_80D34774,
        &&label_80D34778,
        &&label_80D3477C,
        &&label_80D34780,
        &&label_80D34784,
        &&label_80D34788,
        &&label_80D3478C,
        &&label_80D34790,
        &&label_80D34794,
        &&label_80D34798,
        &&label_80D3479C,
        &&label_80D347A0,
        &&label_80D347A4,
        &&label_80D347A8,
        &&label_80D347AC,
        &&label_80D347B0,
        &&label_80D347B4,
        &&label_80D347B8,
        &&label_80D347BC,
        &&label_80D347C0,
        &&label_80D347C4,
        &&label_80D347C8,
        &&label_80D347CC,
        &&label_80D347D0,
        &&label_80D347D4,
        &&label_80D347D8,
        &&label_80D347DC,
        &&label_80D347E0,
        &&label_80D347E4,
        &&label_80D347E8,
        &&label_80D347EC,
        &&label_80D347F0,
        &&label_80D347F4,
        &&label_80D347F8,
        &&label_80D347FC,
        &&label_80D34800,
        &&label_80D34804,
        &&label_80D34808,
        &&label_80D3480C,
        &&label_80D34810,
        &&label_80D34814,
        &&label_80D34818,
        &&label_80D3481C,
        &&label_80D34820,
        &&label_80D34824,
        &&label_80D34828,
        &&label_80D3482C,
        &&label_80D34830,
        &&label_80D34834,
        &&label_80D34838,
        &&label_80D3483C,
        &&label_80D34840,
        &&label_80D34844,
        &&label_80D34848,
        &&label_80D3484C,
        &&label_80D34850,
        &&label_80D34854,
        &&label_80D34858,
        &&label_80D3485C,
        &&label_80D34860,
        &&label_80D34864,
        &&label_80D34868,
        &&label_80D3486C,
        &&label_80D34870,
        &&label_80D34874,
        &&label_80D34878,
        &&label_80D3487C,
        &&label_80D34880,
        &&label_80D34884,
        &&label_80D34888,
        &&label_80D3488C,
        &&label_80D34890,
        &&label_80D34894,
        &&label_80D34898,
        &&label_80D3489C,
        &&label_80D348A0,
        &&label_80D348A4,
        &&label_80D348A8,
        &&label_80D348AC,
        &&label_80D348B0,
        &&label_80D348B4,
        &&label_80D348B8,
        &&label_80D348BC,
        &&label_80D348C0,
        &&label_80D348C4,
        &&label_80D348C8,
        &&label_80D348CC,
        &&label_80D348D0,
        &&label_80D348D4,
        &&label_80D348D8,
        &&label_80D348DC,
        &&label_80D348E0,
        &&label_80D348E4,
        &&label_80D348E8,
        &&label_80D348EC,
        &&label_80D348F0,
        &&label_80D348F4,
        &&label_80D348F8,
        &&label_80D348FC,
        &&label_80D34900,
        &&label_80D34904,
        &&label_80D34908,
        &&label_80D3490C,
        &&label_80D34910,
        &&label_80D34914,
        &&label_80D34918,
        &&label_80D3491C,
        &&label_80D34920,
        &&label_80D34924,
        &&label_80D34928,
        &&label_80D3492C,
        &&label_80D34930,
        &&label_80D34934,
        &&label_80D34938,
        &&label_80D3493C,
        &&label_80D34940,
        &&label_80D34944,
        &&label_80D34948,
        &&label_80D3494C,
        &&label_80D34950,
        &&label_80D34954,
        &&label_80D34958,
        &&label_80D3495C,
        &&label_80D34960,
        &&label_80D34964,
        &&label_80D34968,
        &&label_80D3496C,
        &&label_80D34970,
        &&label_80D34974,
        &&label_80D34978,
        &&label_80D3497C,
        &&label_80D34980,
        &&label_80D34984,
        &&label_80D34988,
        &&label_80D3498C,
        &&label_80D34990,
        &&label_80D34994,
        &&label_80D34998,
        &&label_80D3499C,
        &&label_80D349A0,
        &&label_80D349A4,
        &&label_80D349A8,
        &&label_80D349AC,
        &&label_80D349B0,
        &&label_80D349B4,
        &&label_80D349B8,
        &&label_80D349BC,
        &&label_80D349C0,
        &&label_80D349C4,
        &&label_80D349C8,
        &&label_80D349CC,
        &&label_80D349D0,
        &&label_80D349D4,
        &&label_80D349D8,
        &&label_80D349DC,
        &&label_80D349E0,
        &&label_80D349E4,
        &&label_80D349E8,
        &&label_80D349EC,
        &&label_80D349F0,
        &&label_80D349F4,
        &&label_80D349F8,
        &&label_80D349FC,
        &&label_80D34A00,
        &&label_80D34A04,
        &&label_80D34A08,
        &&label_80D34A0C,
        &&label_80D34A10,
        &&label_80D34A14,
        &&label_80D34A18,
        &&label_80D34A1C,
        &&label_80D34A20,
        &&label_80D34A24,
        &&label_80D34A28,
        &&label_80D34A2C,
        &&label_80D34A30,
        &&label_80D34A34,
        &&label_80D34A38,
        &&label_80D34A3C,
        &&label_80D34A40,
        &&label_80D34A44,
        &&label_80D34A48,
        &&label_80D34A4C,
        &&label_80D34A50,
        &&label_80D34A54,
        &&label_80D34A58,
        &&label_80D34A5C,
        &&label_80D34A60,
        &&label_80D34A64,
        &&label_80D34A68,
        &&label_80D34A6C,
        &&label_80D34A70,
        &&label_80D34A74,
        &&label_80D34A78,
        &&label_80D34A7C,
        &&label_80D34A80,
        &&label_80D34A84,
        &&label_80D34A88,
        &&label_80D34A8C,
        &&label_80D34A90,
        &&label_80D34A94,
        &&label_80D34A98,
        &&label_80D34A9C,
        &&label_80D34AA0,
        &&label_80D34AA4,
        &&label_80D34AA8,
        &&label_80D34AAC,
        &&label_80D34AB0,
        &&label_80D34AB4,
        &&label_80D34AB8,
        &&label_80D34ABC,
        &&label_80D34AC0,
        &&label_80D34AC4,
        &&label_80D34AC8,
        &&label_80D34ACC,
        &&label_80D34AD0,
        &&label_80D34AD4,
        &&label_80D34AD8,
        &&label_80D34ADC,
        &&label_80D34AE0,
        &&label_80D34AE4,
        &&label_80D34AE8,
        &&label_80D34AEC,
        &&label_80D34AF0,
        &&label_80D34AF4,
        &&label_80D34AF8,
        &&label_80D34AFC,
        &&label_80D34B00,
        &&label_80D34B04,
        &&label_80D34B08,
        &&label_80D34B0C,
        &&label_80D34B10,
        &&label_80D34B14,
        &&label_80D34B18,
        &&label_80D34B1C,
        &&label_80D34B20,
        &&label_80D34B24,
        &&label_80D34B28,
        &&label_80D34B2C,
        &&label_80D34B30,
        &&label_80D34B34,
        &&label_80D34B38,
        &&label_80D34B3C,
        &&label_80D34B40,
        &&label_80D34B44,
        &&label_80D34B48,
        &&label_80D34B4C,
        &&label_80D34B50,
        &&label_80D34B54,
        &&label_80D34B58,
        &&label_80D34B5C,
        &&label_80D34B60,
        &&label_80D34B64,
        &&label_80D34B68,
        &&label_80D34B6C,
        &&label_80D34B70,
        &&label_80D34B74,
        &&label_80D34B78,
        &&label_80D34B7C,
        &&label_80D34B80,
        &&label_80D34B84,
        &&label_80D34B88,
        &&label_80D34B8C,
        &&label_80D34B90,
        &&label_80D34B94,
        &&label_80D34B98,
        &&label_80D34B9C,
        &&label_80D34BA0,
        &&label_80D34BA4,
        &&label_80D34BA8,
        &&label_80D34BAC,
        &&label_80D34BB0,
        &&label_80D34BB4,
        &&label_80D34BB8,
        &&label_80D34BBC,
        &&label_80D34BC0,
        &&label_80D34BC4,
        &&label_80D34BC8
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D342C0u && pc <= 0x80D34BC8u && ((pc - 0x80D342C0u) & 3u) == 0u)
            goto *pc_table_80D342C0[(pc - 0x80D342C0u) >> 2];
    }
    return;
label_80D342C0:
    ctx->pc = 0x80D342C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D342C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D342C0: stwu     r1, -16(r1)
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
label_80D342C4:
    ctx->pc = 0x80D342C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D342C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D342C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D342C8:
    ctx->pc = 0x80D342C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D342C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D342C8: stw     r0, 20(r1)
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
label_80D342CC:
    ctx->pc = 0x80D342CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D342CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D342CC: stw     r31, 12(r1)
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
label_80D342D0:
    ctx->pc = 0x80D342D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D342D0u)) return;
    // 80D342D0: cmpwi   r3, 2
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

label_80D342D4:
    ctx->pc = 0x80D342D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D342D4u)) return;
    // 80D342D4: bc    12, 2, 0x80D347DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D347DC;
        }
    }

label_80D342D8:
    ctx->pc = 0x80D342D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D342D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D342D8: bc    4, 0, 0x80D342EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D342EC;
        }
    }

label_80D342DC:
    ctx->pc = 0x80D342DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D342DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D342DC: cmpwi   r3, 0
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

label_80D342E0:
    ctx->pc = 0x80D342E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D342E0u)) return;
    // 80D342E0: bc    12, 2, 0x80D3484C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D3484C;
        }
    }

label_80D342E4:
    ctx->pc = 0x80D342E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D342E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D342E4: bc    4, 0, 0x80D342F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D342F4;
        }
    }

label_80D342E8:
    ctx->pc = 0x80D342E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D342E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D342E8: b       0x80D3484C
    {
            goto label_80D3484C;
    }

label_80D342EC:
    ctx->pc = 0x80D342ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D342ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D342EC: cmpwi   r3, 4
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

label_80D342F0:
    ctx->pc = 0x80D342F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D342F0u)) return;
    // 80D342F0: b       0x80D3484C
    {
            goto label_80D3484C;
    }

label_80D342F4:
    ctx->pc = 0x80D342F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D342F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D342F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D342F8:
    ctx->pc = 0x80D342F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D342F8u)) return;
    // 80D342F8: bl      0x8045EC10
    {
            ctx->lr = 0x80D342FCu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D342FC:
    ctx->pc = 0x80D342FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D342FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D342FC: bl      0x8045DE7C
    {
            ctx->lr = 0x80D34300u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D34300:
    ctx->pc = 0x80D34300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34300: bl      0x80460A60
    {
            ctx->lr = 0x80D34304u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D34304:
    ctx->pc = 0x80D34304u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34304u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34304: bl      0x80460A24
    {
            ctx->lr = 0x80D34308u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D34308:
    ctx->pc = 0x80D34308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80D34308: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D3430C:
    ctx->pc = 0x80D3430Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3430Cu)) return;
    // 80D3430C: lis     r4, -32677
    ctx->gpr[4] = ((u32)(s32)(-32677) << 16);

label_80D34310:
    ctx->pc = 0x80D34310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34310u)) return;
    // 80D34310: addi    r4, r4, -3644
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3644);

label_80D34314:
    ctx->pc = 0x80D34314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34314u)) return;
    // 80D34314: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D34318:
    ctx->pc = 0x80D34318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34318u)) return;
    // 80D34318: addi    r5, r5, -24528
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24528);

label_80D3431C:
    ctx->pc = 0x80D3431Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3431Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D3431C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3431Cu)) return;
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
label_80D34320:
    ctx->pc = 0x80D34320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34320u)) return;
    // 80D34320: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D34324:
    ctx->pc = 0x80D34324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34324u)) return;
    // 80D34324: addi    r5, r5, -24524
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24524);

label_80D34328:
    ctx->pc = 0x80D34328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D34328: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D34328u)) return;
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
label_80D3432C:
    ctx->pc = 0x80D3432Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3432Cu)) return;
    // 80D3432C: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D34330:
    ctx->pc = 0x80D34330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34330u)) return;
    // 80D34330: addi    r5, r5, -24520
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24520);

label_80D34334:
    ctx->pc = 0x80D34334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D34334: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D34334u)) return;
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
label_80D34338:
    ctx->pc = 0x80D34338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34338u)) return;
    // 80D34338: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D3433C:
    ctx->pc = 0x80D3433Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3433Cu)) return;
    // 80D3433C: li      r6, 16384
    ctx->gpr[6] = (u32)(s32)(16384);

label_80D34340:
    ctx->pc = 0x80D34340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34340u)) return;
    // 80D34340: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D34344:
    ctx->pc = 0x80D34344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34344u)) return;
    // 80D34344: bl      0x8045ED84
    {
            ctx->lr = 0x80D34348u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80D34348:
    ctx->pc = 0x80D34348u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34348: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3434C:
    ctx->pc = 0x80D3434Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3434Cu)) return;
    // 80D3434C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D34350u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D34350:
    ctx->pc = 0x80D34350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34350: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D34354:
    ctx->pc = 0x80D34354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34354u)) return;
    // 80D34354: bl      0x8045F220
    {
            ctx->lr = 0x80D34358u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34358:
    ctx->pc = 0x80D34358u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34358u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D34358: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D3435C:
    ctx->pc = 0x80D3435Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3435Cu)) return;
    // 80D3435C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34360:
    ctx->pc = 0x80D34360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34360u)) return;
    // 80D34360: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D34364:
    ctx->pc = 0x80D34364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34364u)) return;
    // 80D34364: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34368:
    ctx->pc = 0x80D34368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34368u)) return;
    // 80D34368: addi    r6, r6, -24516
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-24516);

label_80D3436C:
    ctx->pc = 0x80D3436Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3436Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3436C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D3436Cu)) return;
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
label_80D34370:
    ctx->pc = 0x80D34370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34370u)) return;
    // 80D34370: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34374:
    ctx->pc = 0x80D34374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34374u)) return;
    // 80D34374: addi    r6, r6, -24512
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-24512);

label_80D34378:
    ctx->pc = 0x80D34378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D34378: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34378u)) return;
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
label_80D3437C:
    ctx->pc = 0x80D3437Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3437Cu)) return;
    // 80D3437C: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3437Cu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D34380:
    ctx->pc = 0x80D34380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34380u)) return;
    // 80D34380: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D34384:
    ctx->pc = 0x80D34384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34384u)) return;
    // 80D34384: bl      0x8045C3C0
    {
            ctx->lr = 0x80D34388u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80D34388:
    ctx->pc = 0x80D34388u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34388u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D34388: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3438C:
    ctx->pc = 0x80D3438Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3438Cu)) return;
    // 80D3438C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D34390:
    ctx->pc = 0x80D34390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34390u)) return;
    // 80D34390: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D34394:
    ctx->pc = 0x80D34394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34394u)) return;
    // 80D34394: addi    r5, r5, -24508
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24508);

label_80D34398:
    ctx->pc = 0x80D34398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D34398: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D34398u)) return;
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
label_80D3439C:
    ctx->pc = 0x80D3439Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3439Cu)) return;
    // 80D3439C: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D343A0:
    ctx->pc = 0x80D343A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343A0u)) return;
    // 80D343A0: addi    r5, r5, -24504
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24504);

label_80D343A4:
    ctx->pc = 0x80D343A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D343A4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D343A4u)) return;
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
label_80D343A8:
    ctx->pc = 0x80D343A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343A8u)) return;
    // 80D343A8: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D343AC:
    ctx->pc = 0x80D343ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343ACu)) return;
    // 80D343AC: addi    r5, r5, -24500
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24500);

label_80D343B0:
    ctx->pc = 0x80D343B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D343B0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D343B0u)) return;
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
label_80D343B4:
    ctx->pc = 0x80D343B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343B4u)) return;
    // 80D343B4: bl      0x8045C750
    {
            ctx->lr = 0x80D343B8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D343B8:
    ctx->pc = 0x80D343B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D343B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D343B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D343BC:
    ctx->pc = 0x80D343BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343BCu)) return;
    // 80D343BC: bl      0x8045F220
    {
            ctx->lr = 0x80D343C0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D343C0:
    ctx->pc = 0x80D343C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D343C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D343C0: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D343C4:
    ctx->pc = 0x80D343C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343C4u)) return;
    // 80D343C4: addi    r4, r4, -24496
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24496);

label_80D343C8:
    ctx->pc = 0x80D343C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D343C8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D343C8u)) return;
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
label_80D343CC:
    ctx->pc = 0x80D343CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343CCu)) return;
    // 80D343CC: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D343D0:
    ctx->pc = 0x80D343D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343D0u)) return;
    // 80D343D0: addi    r4, r4, -24492
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24492);

label_80D343D4:
    ctx->pc = 0x80D343D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D343D4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D343D4u)) return;
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
label_80D343D8:
    ctx->pc = 0x80D343D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343D8u)) return;
    // 80D343D8: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D343DC:
    ctx->pc = 0x80D343DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343DCu)) return;
    // 80D343DC: addi    r4, r4, -24488
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24488);

label_80D343E0:
    ctx->pc = 0x80D343E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D343E0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D343E0u)) return;
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
label_80D343E4:
    ctx->pc = 0x80D343E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343E4u)) return;
    // 80D343E4: bl      0x8045EF2C
    {
            ctx->lr = 0x80D343E8u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D343E8:
    ctx->pc = 0x80D343E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D343E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D343E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D343EC:
    ctx->pc = 0x80D343ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343ECu)) return;
    // 80D343EC: bl      0x8045F220
    {
            ctx->lr = 0x80D343F0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D343F0:
    ctx->pc = 0x80D343F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D343F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D343F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D343F4:
    ctx->pc = 0x80D343F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343F4u)) return;
    // 80D343F4: li      r5, 16384
    ctx->gpr[5] = (u32)(s32)(16384);

label_80D343F8:
    ctx->pc = 0x80D343F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343F8u)) return;
    // 80D343F8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D343FC:
    ctx->pc = 0x80D343FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D343FCu)) return;
    // 80D343FC: bl      0x8045EEA8
    {
            ctx->lr = 0x80D34400u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D34400:
    ctx->pc = 0x80D34400u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34400u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34400: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D34404:
    ctx->pc = 0x80D34404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34404u)) return;
    // 80D34404: bl      0x8045F7C8
    {
            ctx->lr = 0x80D34408u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D34408:
    ctx->pc = 0x80D34408u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34408u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34408: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3440C:
    ctx->pc = 0x80D3440Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3440Cu)) return;
    // 80D3440C: bl      0x8045F220
    {
            ctx->lr = 0x80D34410u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34410:
    ctx->pc = 0x80D34410u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34410u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D34410: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D34414:
    ctx->pc = 0x80D34414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34414u)) return;
    // 80D34414: addi    r4, r4, -24484
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24484);

label_80D34418:
    ctx->pc = 0x80D34418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D34418: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D34418u)) return;
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
label_80D3441C:
    ctx->pc = 0x80D3441Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3441Cu)) return;
    // 80D3441C: bl      0x80D349DC
    {
            ctx->lr = 0x80D34420u;
            goto label_80D349DC;
    }

label_80D34420:
    ctx->pc = 0x80D34420u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34420u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D34420: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D34424:
    ctx->pc = 0x80D34424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34424u)) return;
    // 80D34424: addi    r4, r4, -17792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17792);

label_80D34428:
    ctx->pc = 0x80D34428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34428: stw     r3, 0(r4)
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
label_80D3442C:
    ctx->pc = 0x80D3442Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3442Cu)) return;
    // 80D3442C: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80D34430:
    ctx->pc = 0x80D34430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34430u)) return;
    // 80D34430: bl      0x8045F7C8
    {
            ctx->lr = 0x80D34434u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D34434:
    ctx->pc = 0x80D34434u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34434u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34434: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D34438:
    ctx->pc = 0x80D34438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34438u)) return;
    // 80D34438: bl      0x8045F220
    {
            ctx->lr = 0x80D3443Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3443C:
    ctx->pc = 0x80D3443Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3443Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D3443C: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D34440:
    ctx->pc = 0x80D34440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34440u)) return;
    // 80D34440: addi    r4, r4, -24480
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24480);

label_80D34444:
    ctx->pc = 0x80D34444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D34444: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D34444u)) return;
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
label_80D34448:
    ctx->pc = 0x80D34448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34448u)) return;
    // 80D34448: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D3444C:
    ctx->pc = 0x80D3444Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3444Cu)) return;
    // 80D3444C: addi    r4, r4, -24492
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24492);

label_80D34450:
    ctx->pc = 0x80D34450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D34450: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D34450u)) return;
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
label_80D34454:
    ctx->pc = 0x80D34454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34454u)) return;
    // 80D34454: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D34458:
    ctx->pc = 0x80D34458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34458u)) return;
    // 80D34458: addi    r4, r4, -24476
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24476);

label_80D3445C:
    ctx->pc = 0x80D3445Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3445Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3445C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3445Cu)) return;
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
label_80D34460:
    ctx->pc = 0x80D34460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34460u)) return;
    // 80D34460: bl      0x8045E70C
    {
            ctx->lr = 0x80D34464u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D34464:
    ctx->pc = 0x80D34464u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34464u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34464: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80D34468:
    ctx->pc = 0x80D34468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34468u)) return;
    // 80D34468: bl      0x8045F7C8
    {
            ctx->lr = 0x80D3446Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D3446C:
    ctx->pc = 0x80D3446Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3446Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3446C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D34470:
    ctx->pc = 0x80D34470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34470u)) return;
    // 80D34470: bl      0x8045F220
    {
            ctx->lr = 0x80D34474u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34474:
    ctx->pc = 0x80D34474u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34474u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D34474: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D34478:
    ctx->pc = 0x80D34478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34478u)) return;
    // 80D34478: addi    r4, r4, -24472
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24472);

label_80D3447C:
    ctx->pc = 0x80D3447Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3447Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3447C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3447Cu)) return;
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
label_80D34480:
    ctx->pc = 0x80D34480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34480u)) return;
    // 80D34480: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D34484:
    ctx->pc = 0x80D34484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34484u)) return;
    // 80D34484: addi    r4, r4, -24468
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24468);

label_80D34488:
    ctx->pc = 0x80D34488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34488u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D34488: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D34488u)) return;
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
label_80D3448C:
    ctx->pc = 0x80D3448Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3448Cu)) return;
    // 80D3448C: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D34490:
    ctx->pc = 0x80D34490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34490u)) return;
    // 80D34490: addi    r4, r4, -24464
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24464);

label_80D34494:
    ctx->pc = 0x80D34494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D34494: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D34494u)) return;
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
label_80D34498:
    ctx->pc = 0x80D34498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34498u)) return;
    // 80D34498: bl      0x8045E70C
    {
            ctx->lr = 0x80D3449Cu;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D3449C:
    ctx->pc = 0x80D3449Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3449Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D3449C: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D344A0:
    ctx->pc = 0x80D344A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D344A0u)) return;
    // 80D344A0: addi    r3, r3, -17792
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17792);

label_80D344A4:
    ctx->pc = 0x80D344A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D344A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D344A4: lwz     r3, 0(r3)
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
label_80D344A8:
    ctx->pc = 0x80D344A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D344A8u)) return;
    // 80D344A8: cmplwi  r3, 0x0000
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

label_80D344AC:
    ctx->pc = 0x80D344ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D344ACu)) return;
    // 80D344AC: bc    12, 2, 0x80D344C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D344C4;
        }
    }

label_80D344B0:
    ctx->pc = 0x80D344B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D344B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D344B0: bl      0x8050F9E0
    {
            ctx->lr = 0x80D344B4u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D344B4:
    ctx->pc = 0x80D344B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D344B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D344B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D344B8:
    ctx->pc = 0x80D344B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D344B8u)) return;
    // 80D344B8: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D344BC:
    ctx->pc = 0x80D344BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D344BCu)) return;
    // 80D344BC: addi    r3, r3, -17792
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17792);

label_80D344C0:
    ctx->pc = 0x80D344C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D344C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D344C0: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D344C4:
    ctx->pc = 0x80D344C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D344C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D344C4: li      r3, 1548
    ctx->gpr[3] = (u32)(s32)(1548);

label_80D344C8:
    ctx->pc = 0x80D344C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D344C8u)) return;
    // 80D344C8: bl      0x8045BFA0
    {
            ctx->lr = 0x80D344CCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D344CC:
    ctx->pc = 0x80D344CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D344CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D344CC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D344D0:
    ctx->pc = 0x80D344D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D344D0u)) return;
    // 80D344D0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D344D4:
    ctx->pc = 0x80D344D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D344D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D344D4: lwz     r0, 0(r3)
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
label_80D344D8:
    ctx->pc = 0x80D344D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D344D8u)) return;
    // 80D344D8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D344DC:
    ctx->pc = 0x80D344DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D344DCu)) return;
    // 80D344DC: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D344E0:
    ctx->pc = 0x80D344E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D344E0u)) return;
    // 80D344E0: addi    r3, r3, -24028
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24028);

label_80D344E4:
    ctx->pc = 0x80D344E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D344E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D344E4: lwzx    r3, r3, r0
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
label_80D344E8:
    ctx->pc = 0x80D344E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D344E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D344E8: lwz     r3, 0(r3)
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
label_80D344EC:
    ctx->pc = 0x80D344ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D344ECu)) return;
    // 80D344EC: bl      0x8045F6FC
    {
            ctx->lr = 0x80D344F0u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D344F0:
    ctx->pc = 0x80D344F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D344F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D344F0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D344F4:
    ctx->pc = 0x80D344F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D344F4u)) return;
    // 80D344F4: bl      0x8045F220
    {
            ctx->lr = 0x80D344F8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D344F8:
    ctx->pc = 0x80D344F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D344F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D344F8: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D344FC:
    ctx->pc = 0x80D344FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D344FCu)) return;
    // 80D344FC: addi    r4, r4, -18052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18052);

label_80D34500:
    ctx->pc = 0x80D34500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34500u)) return;
    // 80D34500: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D34504:
    ctx->pc = 0x80D34504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34504u)) return;
    // 80D34504: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D34508:
    ctx->pc = 0x80D34508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34508u)) return;
    // 80D34508: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D3450C:
    ctx->pc = 0x80D3450Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3450Cu)) return;
    // 80D3450C: addi    r6, r6, -24460
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-24460);

label_80D34510:
    ctx->pc = 0x80D34510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D34510: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D34510u)) return;
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
label_80D34514:
    ctx->pc = 0x80D34514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34514u)) return;
    // 80D34514: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D34518:
    ctx->pc = 0x80D34518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34518u)) return;
    // 80D34518: li      r7, 30
    ctx->gpr[7] = (u32)(s32)(30);

label_80D3451C:
    ctx->pc = 0x80D3451Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3451Cu)) return;
    // 80D3451C: bl      0x8045EBE4
    {
            ctx->lr = 0x80D34520u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D34520:
    ctx->pc = 0x80D34520u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34520u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34520: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D34524:
    ctx->pc = 0x80D34524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34524u)) return;
    // 80D34524: bl      0x8045F220
    {
            ctx->lr = 0x80D34528u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34528:
    ctx->pc = 0x80D34528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34528: bl      0x8045E760
    {
            ctx->lr = 0x80D3452Cu;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D3452C:
    ctx->pc = 0x80D3452Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3452Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3452C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D34530:
    ctx->pc = 0x80D34530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34530u)) return;
    // 80D34530: bl      0x8045F220
    {
            ctx->lr = 0x80D34534u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34534:
    ctx->pc = 0x80D34534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D34534: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80D34538:
    ctx->pc = 0x80D34538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34538u)) return;
    // 80D34538: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80D3453C:
    ctx->pc = 0x80D3453Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3453Cu)) return;
    // 80D3453C: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D34540:
    ctx->pc = 0x80D34540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34540u)) return;
    // 80D34540: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D34544:
    ctx->pc = 0x80D34544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34544u)) return;
    // 80D34544: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D34548:
    ctx->pc = 0x80D34548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34548u)) return;
    // 80D34548: addi    r6, r6, -24456
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-24456);

label_80D3454C:
    ctx->pc = 0x80D3454Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3454Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3454C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D3454Cu)) return;
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
label_80D34550:
    ctx->pc = 0x80D34550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34550u)) return;
    // 80D34550: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D34554:
    ctx->pc = 0x80D34554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34554u)) return;
    // 80D34554: li      r7, 30
    ctx->gpr[7] = (u32)(s32)(30);

label_80D34558:
    ctx->pc = 0x80D34558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34558u)) return;
    // 80D34558: bl      0x8045EBE4
    {
            ctx->lr = 0x80D3455Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D3455C:
    ctx->pc = 0x80D3455Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3455Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D3455C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D34560:
    ctx->pc = 0x80D34560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34560u)) return;
    // 80D34560: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D34564:
    ctx->pc = 0x80D34564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34564: lwz     r0, 0(r3)
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
label_80D34568:
    ctx->pc = 0x80D34568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34568u)) return;
    // 80D34568: cmpwi   r0, 0
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

label_80D3456C:
    ctx->pc = 0x80D3456Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3456Cu)) return;
    // 80D3456C: bc    4, 2, 0x80D34584
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D34584;
        }
    }

label_80D34570:
    ctx->pc = 0x80D34570u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34570u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34570: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D34574:
    ctx->pc = 0x80D34574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34574u)) return;
    // 80D34574: bl      0x8045F220
    {
            ctx->lr = 0x80D34578u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34578:
    ctx->pc = 0x80D34578u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34578u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D34578: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D3457C:
    ctx->pc = 0x80D3457Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3457Cu)) return;
    // 80D3457C: addi    r4, r4, -24000
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24000);

label_80D34580:
    ctx->pc = 0x80D34580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34580u)) return;
    // 80D34580: bl      0x8045C060
    {
            ctx->lr = 0x80D34584u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D34584:
    ctx->pc = 0x80D34584u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34584u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D34584: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D34588:
    ctx->pc = 0x80D34588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34588u)) return;
    // 80D34588: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D3458C:
    ctx->pc = 0x80D3458Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3458Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3458C: lwz     r0, 0(r3)
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
label_80D34590:
    ctx->pc = 0x80D34590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34590u)) return;
    // 80D34590: cmpwi   r0, 1
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

label_80D34594:
    ctx->pc = 0x80D34594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34594u)) return;
    // 80D34594: bc    4, 2, 0x80D345AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D345AC;
        }
    }

label_80D34598:
    ctx->pc = 0x80D34598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34598: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D3459C:
    ctx->pc = 0x80D3459Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3459Cu)) return;
    // 80D3459C: bl      0x8045F220
    {
            ctx->lr = 0x80D345A0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D345A0:
    ctx->pc = 0x80D345A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D345A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D345A0: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D345A4:
    ctx->pc = 0x80D345A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D345A4u)) return;
    // 80D345A4: addi    r4, r4, -23996
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23996);

label_80D345A8:
    ctx->pc = 0x80D345A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D345A8u)) return;
    // 80D345A8: bl      0x8045C060
    {
            ctx->lr = 0x80D345ACu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D345AC:
    ctx->pc = 0x80D345ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D345ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D345AC: bl      0x8045BFF4
    {
            ctx->lr = 0x80D345B0u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D345B0:
    ctx->pc = 0x80D345B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D345B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D345B0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D345B4:
    ctx->pc = 0x80D345B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D345B4u)) return;
    // 80D345B4: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D345B8:
    ctx->pc = 0x80D345B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D345B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D345B8: lwz     r0, 0(r3)
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
label_80D345BC:
    ctx->pc = 0x80D345BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D345BCu)) return;
    // 80D345BC: cmpwi   r0, 0
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

label_80D345C0:
    ctx->pc = 0x80D345C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D345C0u)) return;
    // 80D345C0: bc    4, 2, 0x80D345D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D345D0;
        }
    }

label_80D345C4:
    ctx->pc = 0x80D345C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D345C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D345C4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D345C8:
    ctx->pc = 0x80D345C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D345C8u)) return;
    // 80D345C8: bl      0x8045F220
    {
            ctx->lr = 0x80D345CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D345CC:
    ctx->pc = 0x80D345CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D345CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D345CC: bl      0x8045C034
    {
            ctx->lr = 0x80D345D0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D345D0:
    ctx->pc = 0x80D345D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D345D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D345D0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D345D4:
    ctx->pc = 0x80D345D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D345D4u)) return;
    // 80D345D4: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D345D8:
    ctx->pc = 0x80D345D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D345D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D345D8: lwz     r0, 0(r3)
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
label_80D345DC:
    ctx->pc = 0x80D345DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D345DCu)) return;
    // 80D345DC: cmpwi   r0, 1
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

label_80D345E0:
    ctx->pc = 0x80D345E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D345E0u)) return;
    // 80D345E0: bc    4, 2, 0x80D345F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D345F0;
        }
    }

label_80D345E4:
    ctx->pc = 0x80D345E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D345E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D345E4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D345E8:
    ctx->pc = 0x80D345E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D345E8u)) return;
    // 80D345E8: bl      0x8045F220
    {
            ctx->lr = 0x80D345ECu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D345EC:
    ctx->pc = 0x80D345ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D345ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D345EC: bl      0x8045C034
    {
            ctx->lr = 0x80D345F0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D345F0:
    ctx->pc = 0x80D345F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D345F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D345F0: bl      0x8045C4A4
    {
            ctx->lr = 0x80D345F4u;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80D345F4:
    ctx->pc = 0x80D345F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D345F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D345F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D345F8:
    ctx->pc = 0x80D345F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D345F8u)) return;
    // 80D345F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D345FC:
    ctx->pc = 0x80D345FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D345FCu)) return;
    // 80D345FC: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D34600:
    ctx->pc = 0x80D34600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34600u)) return;
    // 80D34600: addi    r5, r5, -24452
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24452);

label_80D34604:
    ctx->pc = 0x80D34604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D34604: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D34604u)) return;
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
label_80D34608:
    ctx->pc = 0x80D34608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34608u)) return;
    // 80D34608: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D3460C:
    ctx->pc = 0x80D3460Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3460Cu)) return;
    // 80D3460C: addi    r5, r5, -24448
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24448);

label_80D34610:
    ctx->pc = 0x80D34610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D34610: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D34610u)) return;
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
label_80D34614:
    ctx->pc = 0x80D34614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34614u)) return;
    // 80D34614: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D34618:
    ctx->pc = 0x80D34618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34618u)) return;
    // 80D34618: addi    r5, r5, -24444
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24444);

label_80D3461C:
    ctx->pc = 0x80D3461Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3461Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3461C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3461Cu)) return;
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
label_80D34620:
    ctx->pc = 0x80D34620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34620u)) return;
    // 80D34620: bl      0x8045C750
    {
            ctx->lr = 0x80D34624u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D34624:
    ctx->pc = 0x80D34624u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34624u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D34624: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34628:
    ctx->pc = 0x80D34628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34628u)) return;
    // 80D34628: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D3462C:
    ctx->pc = 0x80D3462Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3462Cu)) return;
    // 80D3462C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D34630:
    ctx->pc = 0x80D34630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34630u)) return;
    // 80D34630: addi    r5, r5, -2375
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2375);

label_80D34634:
    ctx->pc = 0x80D34634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34634u)) return;
    // 80D34634: li      r6, 19141
    ctx->gpr[6] = (u32)(s32)(19141);

label_80D34638:
    ctx->pc = 0x80D34638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34638u)) return;
    // 80D34638: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D3463C:
    ctx->pc = 0x80D3463Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3463Cu)) return;
    // 80D3463C: bl      0x8045C7B4
    {
            ctx->lr = 0x80D34640u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D34640:
    ctx->pc = 0x80D34640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D34640: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34644:
    ctx->pc = 0x80D34644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34644u)) return;
    // 80D34644: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80D34648:
    ctx->pc = 0x80D34648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34648u)) return;
    // 80D34648: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D3464C:
    ctx->pc = 0x80D3464Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3464Cu)) return;
    // 80D3464C: addi    r5, r5, -24440
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24440);

label_80D34650:
    ctx->pc = 0x80D34650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D34650: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D34650u)) return;
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
label_80D34654:
    ctx->pc = 0x80D34654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34654u)) return;
    // 80D34654: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D34658:
    ctx->pc = 0x80D34658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34658u)) return;
    // 80D34658: addi    r5, r5, -24436
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24436);

label_80D3465C:
    ctx->pc = 0x80D3465Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3465Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3465C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3465Cu)) return;
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
label_80D34660:
    ctx->pc = 0x80D34660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34660u)) return;
    // 80D34660: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D34664:
    ctx->pc = 0x80D34664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34664u)) return;
    // 80D34664: addi    r5, r5, -24432
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24432);

label_80D34668:
    ctx->pc = 0x80D34668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D34668: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D34668u)) return;
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
label_80D3466C:
    ctx->pc = 0x80D3466Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3466Cu)) return;
    // 80D3466C: bl      0x8045C750
    {
            ctx->lr = 0x80D34670u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D34670:
    ctx->pc = 0x80D34670u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34670u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D34670: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34674:
    ctx->pc = 0x80D34674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34674u)) return;
    // 80D34674: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80D34678:
    ctx->pc = 0x80D34678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34678u)) return;
    // 80D34678: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D3467C:
    ctx->pc = 0x80D3467Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3467Cu)) return;
    // 80D3467C: addi    r5, r5, -2375
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2375);

label_80D34680:
    ctx->pc = 0x80D34680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34680u)) return;
    // 80D34680: li      r6, 20165
    ctx->gpr[6] = (u32)(s32)(20165);

label_80D34684:
    ctx->pc = 0x80D34684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34684u)) return;
    // 80D34684: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D34688:
    ctx->pc = 0x80D34688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34688u)) return;
    // 80D34688: bl      0x8045C7B4
    {
            ctx->lr = 0x80D3468Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D3468C:
    ctx->pc = 0x80D3468Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3468Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3468C: li      r3, 1549
    ctx->gpr[3] = (u32)(s32)(1549);

label_80D34690:
    ctx->pc = 0x80D34690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34690u)) return;
    // 80D34690: bl      0x8045BFA0
    {
            ctx->lr = 0x80D34694u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D34694:
    ctx->pc = 0x80D34694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D34694: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D34698:
    ctx->pc = 0x80D34698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34698u)) return;
    // 80D34698: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D3469C:
    ctx->pc = 0x80D3469Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3469Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3469C: lwz     r0, 0(r3)
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
label_80D346A0:
    ctx->pc = 0x80D346A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D346A0u)) return;
    // 80D346A0: cmpwi   r0, 0
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

label_80D346A4:
    ctx->pc = 0x80D346A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D346A4u)) return;
    // 80D346A4: bc    4, 2, 0x80D346BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D346BC;
        }
    }

label_80D346A8:
    ctx->pc = 0x80D346A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D346A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D346A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D346AC:
    ctx->pc = 0x80D346ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D346ACu)) return;
    // 80D346AC: bl      0x8045F220
    {
            ctx->lr = 0x80D346B0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D346B0:
    ctx->pc = 0x80D346B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D346B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D346B0: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D346B4:
    ctx->pc = 0x80D346B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D346B4u)) return;
    // 80D346B4: addi    r4, r4, -23992
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23992);

label_80D346B8:
    ctx->pc = 0x80D346B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D346B8u)) return;
    // 80D346B8: bl      0x8045C060
    {
            ctx->lr = 0x80D346BCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D346BC:
    ctx->pc = 0x80D346BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D346BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D346BC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D346C0:
    ctx->pc = 0x80D346C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D346C0u)) return;
    // 80D346C0: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80D346C4:
    ctx->pc = 0x80D346C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D346C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D346C4: lwz     r0, 0(r3)
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
label_80D346C8:
    ctx->pc = 0x80D346C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D346C8u)) return;
    // 80D346C8: cmpwi   r0, 1
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

label_80D346CC:
    ctx->pc = 0x80D346CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D346CCu)) return;
    // 80D346CC: bc    4, 2, 0x80D346E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D346E4;
        }
    }

label_80D346D0:
    ctx->pc = 0x80D346D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D346D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D346D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D346D4:
    ctx->pc = 0x80D346D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D346D4u)) return;
    // 80D346D4: bl      0x8045F220
    {
            ctx->lr = 0x80D346D8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D346D8:
    ctx->pc = 0x80D346D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D346D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D346D8: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D346DC:
    ctx->pc = 0x80D346DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D346DCu)) return;
    // 80D346DC: addi    r4, r4, -23988
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23988);

label_80D346E0:
    ctx->pc = 0x80D346E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D346E0u)) return;
    // 80D346E0: bl      0x8045C060
    {
            ctx->lr = 0x80D346E4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D346E4:
    ctx->pc = 0x80D346E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D346E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D346E4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D346E8:
    ctx->pc = 0x80D346E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D346E8u)) return;
    // 80D346E8: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D346EC:
    ctx->pc = 0x80D346ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D346ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D346EC: lwz     r0, 0(r3)
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
label_80D346F0:
    ctx->pc = 0x80D346F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D346F0u)) return;
    // 80D346F0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D346F4:
    ctx->pc = 0x80D346F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D346F4u)) return;
    // 80D346F4: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D346F8:
    ctx->pc = 0x80D346F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D346F8u)) return;
    // 80D346F8: addi    r3, r3, -24028
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24028);

label_80D346FC:
    ctx->pc = 0x80D346FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D346FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D346FC: lwzx    r3, r3, r0
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
label_80D34700:
    ctx->pc = 0x80D34700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D34700: lwz     r3, 4(r3)
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
label_80D34704:
    ctx->pc = 0x80D34704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34704u)) return;
    // 80D34704: bl      0x8045F6FC
    {
            ctx->lr = 0x80D34708u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D34708:
    ctx->pc = 0x80D34708u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34708u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34708: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80D3470C:
    ctx->pc = 0x80D3470Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3470Cu)) return;
    // 80D3470C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D34710u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D34710:
    ctx->pc = 0x80D34710u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34710u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34710: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34714:
    ctx->pc = 0x80D34714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34714u)) return;
    // 80D34714: bl      0x8045F220
    {
            ctx->lr = 0x80D34718u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34718:
    ctx->pc = 0x80D34718u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34718u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D34718: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D3471C:
    ctx->pc = 0x80D3471Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3471Cu)) return;
    // 80D3471C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D34720:
    ctx->pc = 0x80D34720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34720u)) return;
    // 80D34720: bl      0x8045F220
    {
            ctx->lr = 0x80D34724u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34724:
    ctx->pc = 0x80D34724u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34724u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D34724: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D34728:
    ctx->pc = 0x80D34728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34728u)) return;
    // 80D34728: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D3472C:
    ctx->pc = 0x80D3472Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3472Cu)) return;
    // 80D3472C: addi    r5, r5, -24516
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24516);

label_80D34730:
    ctx->pc = 0x80D34730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D34730: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D34730u)) return;
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
label_80D34734:
    ctx->pc = 0x80D34734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34734u)) return;
    // 80D34734: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D34738:
    ctx->pc = 0x80D34738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34738u)) return;
    // 80D34738: addi    r5, r5, -24428
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24428);

label_80D3473C:
    ctx->pc = 0x80D3473Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3473Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3473C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3473Cu)) return;
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
label_80D34740:
    ctx->pc = 0x80D34740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34740u)) return;
    // 80D34740: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D34740u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D34744:
    ctx->pc = 0x80D34744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34744u)) return;
    // 80D34744: bl      0x8045E734
    {
            ctx->lr = 0x80D34748u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80D34748:
    ctx->pc = 0x80D34748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34748: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80D3474C:
    ctx->pc = 0x80D3474Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3474Cu)) return;
    // 80D3474C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D34750u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D34750:
    ctx->pc = 0x80D34750u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34750u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34750: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D34754:
    ctx->pc = 0x80D34754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34754u)) return;
    // 80D34754: bl      0x8045F220
    {
            ctx->lr = 0x80D34758u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D34758:
    ctx->pc = 0x80D34758u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34758u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D34758: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D3475C:
    ctx->pc = 0x80D3475Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3475Cu)) return;
    // 80D3475C: addi    r4, r4, -23980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23980);

label_80D34760:
    ctx->pc = 0x80D34760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34760u)) return;
    // 80D34760: bl      0x8045C060
    {
            ctx->lr = 0x80D34764u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D34764:
    ctx->pc = 0x80D34764u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34764u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34764: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D34768:
    ctx->pc = 0x80D34768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34768u)) return;
    // 80D34768: bl      0x8045F220
    {
            ctx->lr = 0x80D3476Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3476C:
    ctx->pc = 0x80D3476Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3476Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3476C: bl      0x8045E760
    {
            ctx->lr = 0x80D34770u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D34770:
    ctx->pc = 0x80D34770u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34770u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D34770: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34774:
    ctx->pc = 0x80D34774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34774u)) return;
    // 80D34774: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80D34778:
    ctx->pc = 0x80D34778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34778u)) return;
    // 80D34778: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D3477C:
    ctx->pc = 0x80D3477Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3477Cu)) return;
    // 80D3477C: addi    r5, r5, -24424
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24424);

label_80D34780:
    ctx->pc = 0x80D34780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34780u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D34780: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D34780u)) return;
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
label_80D34784:
    ctx->pc = 0x80D34784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34784u)) return;
    // 80D34784: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D34788:
    ctx->pc = 0x80D34788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34788u)) return;
    // 80D34788: addi    r5, r5, -24420
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24420);

label_80D3478C:
    ctx->pc = 0x80D3478Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3478Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3478C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3478Cu)) return;
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
label_80D34790:
    ctx->pc = 0x80D34790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34790u)) return;
    // 80D34790: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D34794:
    ctx->pc = 0x80D34794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34794u)) return;
    // 80D34794: addi    r5, r5, -24416
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24416);

label_80D34798:
    ctx->pc = 0x80D34798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34798u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D34798: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D34798u)) return;
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
label_80D3479C:
    ctx->pc = 0x80D3479Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3479Cu)) return;
    // 80D3479C: bl      0x8045C750
    {
            ctx->lr = 0x80D347A0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D347A0:
    ctx->pc = 0x80D347A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D347A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D347A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D347A4:
    ctx->pc = 0x80D347A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D347A4u)) return;
    // 80D347A4: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80D347A8:
    ctx->pc = 0x80D347A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D347A8u)) return;
    // 80D347A8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D347AC:
    ctx->pc = 0x80D347ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D347ACu)) return;
    // 80D347AC: addi    r5, r6, -5447
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-5447);

label_80D347B0:
    ctx->pc = 0x80D347B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D347B0u)) return;
    // 80D347B0: addi    r6, r6, -5435
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-5435);

label_80D347B4:
    ctx->pc = 0x80D347B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D347B4u)) return;
    // 80D347B4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D347B8:
    ctx->pc = 0x80D347B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D347B8u)) return;
    // 80D347B8: bl      0x8045C7B4
    {
            ctx->lr = 0x80D347BCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D347BC:
    ctx->pc = 0x80D347BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D347BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D347BC: bl      0x8045BFF4
    {
            ctx->lr = 0x80D347C0u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D347C0:
    ctx->pc = 0x80D347C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D347C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D347C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D347C4:
    ctx->pc = 0x80D347C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D347C4u)) return;
    // 80D347C4: bl      0x8045F220
    {
            ctx->lr = 0x80D347C8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D347C8:
    ctx->pc = 0x80D347C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D347C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D347C8: bl      0x8045C034
    {
            ctx->lr = 0x80D347CCu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D347CC:
    ctx->pc = 0x80D347CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D347CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D347CC: bl      0x8045F32C
    {
            ctx->lr = 0x80D347D0u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80D347D0:
    ctx->pc = 0x80D347D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D347D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D347D0: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80D347D4:
    ctx->pc = 0x80D347D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D347D4u)) return;
    // 80D347D4: bl      0x8045F7C8
    {
            ctx->lr = 0x80D347D8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D347D8:
    ctx->pc = 0x80D347D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D347D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D347D8: b       0x80D3484C
    {
            goto label_80D3484C;
    }

label_80D347DC:
    ctx->pc = 0x80D347DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D347DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D347DC: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D347E0:
    ctx->pc = 0x80D347E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D347E0u)) return;
    // 80D347E0: addi    r3, r3, -17792
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17792);

label_80D347E4:
    ctx->pc = 0x80D347E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D347E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D347E4: lwz     r3, 0(r3)
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
label_80D347E8:
    ctx->pc = 0x80D347E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D347E8u)) return;
    // 80D347E8: cmplwi  r3, 0x0000
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

label_80D347EC:
    ctx->pc = 0x80D347ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D347ECu)) return;
    // 80D347EC: bc    12, 2, 0x80D34804
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D34804;
        }
    }

label_80D347F0:
    ctx->pc = 0x80D347F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D347F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D347F0: bl      0x8050F9E0
    {
            ctx->lr = 0x80D347F4u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D347F4:
    ctx->pc = 0x80D347F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D347F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D347F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D347F8:
    ctx->pc = 0x80D347F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D347F8u)) return;
    // 80D347F8: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D347FC:
    ctx->pc = 0x80D347FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D347FCu)) return;
    // 80D347FC: addi    r3, r3, -17792
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17792);

label_80D34800:
    ctx->pc = 0x80D34800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D34800: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34804:
    ctx->pc = 0x80D34804u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34804u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34804: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34808:
    ctx->pc = 0x80D34808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34808u)) return;
    // 80D34808: bl      0x8045F220
    {
            ctx->lr = 0x80D3480Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3480C:
    ctx->pc = 0x80D3480Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3480Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D3480C: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D34810:
    ctx->pc = 0x80D34810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34810u)) return;
    // 80D34810: addi    r4, r4, -24496
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24496);

label_80D34814:
    ctx->pc = 0x80D34814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D34814: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D34814u)) return;
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
label_80D34818:
    ctx->pc = 0x80D34818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34818u)) return;
    // 80D34818: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D3481C:
    ctx->pc = 0x80D3481Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3481Cu)) return;
    // 80D3481C: addi    r4, r4, -24468
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24468);

label_80D34820:
    ctx->pc = 0x80D34820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D34820: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D34820u)) return;
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
label_80D34824:
    ctx->pc = 0x80D34824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34824u)) return;
    // 80D34824: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D34828:
    ctx->pc = 0x80D34828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34828u)) return;
    // 80D34828: addi    r4, r4, -24488
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24488);

label_80D3482C:
    ctx->pc = 0x80D3482Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3482Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3482C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3482Cu)) return;
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
label_80D34830:
    ctx->pc = 0x80D34830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34830u)) return;
    // 80D34830: bl      0x8045EF2C
    {
            ctx->lr = 0x80D34834u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D34834:
    ctx->pc = 0x80D34834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34834: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D34838:
    ctx->pc = 0x80D34838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34838u)) return;
    // 80D34838: bl      0x8045EC10
    {
            ctx->lr = 0x80D3483Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D3483C:
    ctx->pc = 0x80D3483Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3483Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3483C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D34840:
    ctx->pc = 0x80D34840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34840u)) return;
    // 80D34840: bl      0x8045ED54
    {
            ctx->lr = 0x80D34844u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80D34844:
    ctx->pc = 0x80D34844u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34844u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34844: bl      0x8045DE34
    {
            ctx->lr = 0x80D34848u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D34848:
    ctx->pc = 0x80D34848u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34848u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D34848: bl      0x80460A80
    {
            ctx->lr = 0x80D3484Cu;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D3484C:
    ctx->pc = 0x80D3484Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3484Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D3484C: lwz     r31, 12(r1)
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
label_80D34850:
    ctx->pc = 0x80D34850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D34850: lwz     r0, 20(r1)
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
label_80D34854:
    ctx->pc = 0x80D34854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D34854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34854: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34858:
    ctx->pc = 0x80D34858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34858u)) return;
    // 80D34858: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D3485C:
    ctx->pc = 0x80D3485Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3485Cu)) return;
    // 80D3485C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D342C0;
        }
    }

label_80D34860:
    ctx->pc = 0x80D34860u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34860u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D34860: stwu     r1, -16(r1)
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
label_80D34864:
    ctx->pc = 0x80D34864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D34864: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34868:
    ctx->pc = 0x80D34868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D34868: stw     r0, 20(r1)
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
label_80D3486C:
    ctx->pc = 0x80D3486Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3486Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3486C: stw     r31, 12(r1)
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
label_80D34870:
    ctx->pc = 0x80D34870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D34870: lwz     r4, 32(r3)
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
label_80D34874:
    ctx->pc = 0x80D34874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34874: lwz     r31, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34878:
    ctx->pc = 0x80D34878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34878u)) return;
    // 80D34878: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D3487C:
    ctx->pc = 0x80D3487Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3487Cu)) return;
    // 80D3487C: bl      0x8047EB28
    {
            ctx->lr = 0x80D34880u;
            ctx->pc = 0x8047EB28u;
            return;
    }

label_80D34880:
    ctx->pc = 0x80D34880u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34880u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D34880: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D34884:
    ctx->pc = 0x80D34884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34884u)) return;
    // 80D34884: bl      0x8047EA34
    {
            ctx->lr = 0x80D34888u;
            ctx->pc = 0x8047EA34u;
            return;
    }

label_80D34888:
    ctx->pc = 0x80D34888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D34888: lwz     r31, 12(r1)
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
label_80D3488C:
    ctx->pc = 0x80D3488Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3488Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3488C: lwz     r0, 20(r1)
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
label_80D34890:
    ctx->pc = 0x80D34890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D34890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34890: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34894:
    ctx->pc = 0x80D34894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34894u)) return;
    // 80D34894: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D34898:
    ctx->pc = 0x80D34898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34898u)) return;
    // 80D34898: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D342C0;
        }
    }

label_80D3489C:
    ctx->pc = 0x80D3489Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3489Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D3489C: lwz     r3, 32(r3)
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
label_80D348A0:
    ctx->pc = 0x80D348A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D348A0: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D348A4:
    ctx->pc = 0x80D348A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D348A4: lwz     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D348A8:
    ctx->pc = 0x80D348A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D348A8: lwz     r3, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D348AC:
    ctx->pc = 0x80D348ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D348AC: lfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D348ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
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
label_80D348B0:
    ctx->pc = 0x80D348B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D348B0: stfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D348B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D348B4:
    ctx->pc = 0x80D348B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D348B4: lwz     r3, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D348B8:
    ctx->pc = 0x80D348B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D348B8: lfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D348B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
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
label_80D348BC:
    ctx->pc = 0x80D348BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D348BC: stfs     f0, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D348BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D348C0:
    ctx->pc = 0x80D348C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348C0u)) return;
    // 80D348C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D342C0;
        }
    }

label_80D348C4:
    ctx->pc = 0x80D348C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D348C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D348C4: stwu     r1, -32(r1)
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
label_80D348C8:
    ctx->pc = 0x80D348C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D348C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D348CC:
    ctx->pc = 0x80D348CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D348CC: stw     r0, 36(r1)
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
label_80D348D0:
    ctx->pc = 0x80D348D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D348D0: stw     r31, 28(r1)
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
label_80D348D4:
    ctx->pc = 0x80D348D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D348D4: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D348D8:
    ctx->pc = 0x80D348D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D348D8: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D348DC:
    ctx->pc = 0x80D348DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348DCu)) return;
    // 80D348DC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D348E0:
    ctx->pc = 0x80D348E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348E0u)) return;
    // 80D348E0: lis     r3, -32557
    ctx->gpr[3] = ((u32)(s32)(-32557) << 16);

label_80D348E4:
    ctx->pc = 0x80D348E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348E4u)) return;
    // 80D348E4: addi    r0, r3, 18588
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(18588);

label_80D348E8:
    ctx->pc = 0x80D348E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D348E8: stw     r0, 16(r31)
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
label_80D348EC:
    ctx->pc = 0x80D348ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348ECu)) return;
    // 80D348EC: lis     r3, -32557
    ctx->gpr[3] = ((u32)(s32)(-32557) << 16);

label_80D348F0:
    ctx->pc = 0x80D348F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348F0u)) return;
    // 80D348F0: addi    r0, r3, 18528
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(18528);

label_80D348F4:
    ctx->pc = 0x80D348F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D348F4: stw     r0, 24(r31)
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
label_80D348F8:
    ctx->pc = 0x80D348F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D348F8: lwz     r30, 32(r31)
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
label_80D348FC:
    ctx->pc = 0x80D348FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D348FCu)) return;
    // 80D348FC: bl      0x8047EA80
    {
            ctx->lr = 0x80D34900u;
            ctx->pc = 0x8047EA80u;
            return;
    }

label_80D34900:
    ctx->pc = 0x80D34900u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34900u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D34900: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D34904:
    ctx->pc = 0x80D34904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D34904: stw     r29, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34908:
    ctx->pc = 0x80D34908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34908u)) return;
    // 80D34908: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D3490C:
    ctx->pc = 0x80D3490Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3490Cu)) return;
    // 80D3490C: addi    r3, r3, -17876
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17876);

label_80D34910:
    ctx->pc = 0x80D34910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D34910: lwz     r0, 0(r3)
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
label_80D34914:
    ctx->pc = 0x80D34914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34914u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34914: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34918:
    ctx->pc = 0x80D34918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34918u)) return;
    // 80D34918: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D3491C:
    ctx->pc = 0x80D3491Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3491Cu)) return;
    // 80D3491C: bl      0x80D3489C
    {
            ctx->lr = 0x80D34920u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D3489Cu;
                return;
            }
            goto label_80D3489C;
    }

label_80D34920:
    ctx->pc = 0x80D34920u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34920u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80D34920: lfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D34920u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
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
label_80D34924:
    ctx->pc = 0x80D34924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80D34924: stfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x80D34924u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34928:
    ctx->pc = 0x80D34928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34928u)) return;
    // 80D34928: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D3492C:
    ctx->pc = 0x80D3492Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3492Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D3492C: stw     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34930:
    ctx->pc = 0x80D34930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34930u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D34930: stw     r0, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34934:
    ctx->pc = 0x80D34934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D34934: stw     r0, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34938:
    ctx->pc = 0x80D34938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34938u)) return;
    // 80D34938: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D3493C:
    ctx->pc = 0x80D3493Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3493Cu)) return;
    // 80D3493C: addi    r3, r3, -24408
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24408);

label_80D34940:
    ctx->pc = 0x80D34940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D34940: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D34940u)) return;
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
label_80D34944:
    ctx->pc = 0x80D34944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D34944: stfs     f0, 32(r29)
    if (!ppc_fp_available_inline(ctx, 0x80D34944u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34948:
    ctx->pc = 0x80D34948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34948u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D34948: stfs     f0, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x80D34948u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3494C:
    ctx->pc = 0x80D3494Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3494Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D3494C: stfs     f0, 40(r29)
    if (!ppc_fp_available_inline(ctx, 0x80D3494Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34950:
    ctx->pc = 0x80D34950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34950u)) return;
    // 80D34950: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D34954:
    ctx->pc = 0x80D34954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34954u)) return;
    // 80D34954: addi    r3, r3, -17876
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17876);

label_80D34958:
    ctx->pc = 0x80D34958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D34958: lwz     r0, 4(r3)
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
label_80D3495C:
    ctx->pc = 0x80D3495Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3495Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D3495C: stw     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34960:
    ctx->pc = 0x80D34960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D34960: lwz     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34964:
    ctx->pc = 0x80D34964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D34964: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34968:
    ctx->pc = 0x80D34968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34968u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D34968: lwz     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3496C:
    ctx->pc = 0x80D3496Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3496Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D3496C: stw     r0, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34970:
    ctx->pc = 0x80D34970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34970u)) return;
    // 80D34970: lis     r3, 26624
    ctx->gpr[3] = ((u32)(s32)(26624) << 16);

label_80D34974:
    ctx->pc = 0x80D34974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34974u)) return;
    // 80D34974: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80D34978:
    ctx->pc = 0x80D34978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34978u)) return;
    // 80D34978: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D3497C:
    ctx->pc = 0x80D3497Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3497Cu)) return;
    // 80D3497C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D34980:
    ctx->pc = 0x80D34980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34980u)) return;
    // 80D34980: bl      0x8047EBFC
    {
            ctx->lr = 0x80D34984u;
            ctx->pc = 0x8047EBFCu;
            return;
    }

label_80D34984:
    ctx->pc = 0x80D34984u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34984u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D34984: lha     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34988:
    ctx->pc = 0x80D34988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34988u)) return;
    // 80D34988: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_80D3498C:
    ctx->pc = 0x80D3498Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3498Cu)) return;
    // 80D3498C: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80D34990:
    ctx->pc = 0x80D34990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D34990: sth     r0, 4(r30)
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
label_80D34994:
    ctx->pc = 0x80D34994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D34994: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34998:
    ctx->pc = 0x80D34998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34998u)) return;
    // 80D34998: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D3499C:
    ctx->pc = 0x80D3499Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3499Cu)) return;
    // 80D3499C: addi    r3, r3, -24404
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24404);

label_80D349A0:
    ctx->pc = 0x80D349A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D349A0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D349A0u)) return;
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
label_80D349A4:
    ctx->pc = 0x80D349A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D349A4: stfs     f0, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D349A4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D349A8:
    ctx->pc = 0x80D349A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D349A8: stfs     f0, 20(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D349A8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D349AC:
    ctx->pc = 0x80D349ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D349AC: stfs     f0, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D349ACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D349B0:
    ctx->pc = 0x80D349B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349B0u)) return;
    // 80D349B0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D349B4:
    ctx->pc = 0x80D349B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D349B4: stw     r0, 4(r4)
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
label_80D349B8:
    ctx->pc = 0x80D349B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D349B8: stw     r0, 8(r4)
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
label_80D349BC:
    ctx->pc = 0x80D349BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D349BC: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D349C0:
    ctx->pc = 0x80D349C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D349C0: lwz     r31, 28(r1)
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
label_80D349C4:
    ctx->pc = 0x80D349C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D349C4: lwz     r30, 24(r1)
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
label_80D349C8:
    ctx->pc = 0x80D349C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D349C8: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D349CC:
    ctx->pc = 0x80D349CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D349CC: lwz     r0, 36(r1)
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
label_80D349D0:
    ctx->pc = 0x80D349D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D349D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D349D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D349D4:
    ctx->pc = 0x80D349D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349D4u)) return;
    // 80D349D4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D349D8:
    ctx->pc = 0x80D349D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349D8u)) return;
    // 80D349D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D342C0;
        }
    }

label_80D349DC:
    ctx->pc = 0x80D349DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D349DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D349DC: stwu     r1, -32(r1)
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
label_80D349E0:
    ctx->pc = 0x80D349E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D349E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D349E4:
    ctx->pc = 0x80D349E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D349E4: stw     r0, 36(r1)
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
label_80D349E8:
    ctx->pc = 0x80D349E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D349E8: stfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D349E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D349EC:
    ctx->pc = 0x80D349ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D349EC: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D349F0:
    ctx->pc = 0x80D349F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349F0u)) return;
    // 80D349F0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D349F4:
    ctx->pc = 0x80D349F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349F4u)) return;
    // 80D349F4: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x80D349F4u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_80D349F8:
    ctx->pc = 0x80D349F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349F8u)) return;
    // 80D349F8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80D349FC:
    ctx->pc = 0x80D349FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D349FCu)) return;
    // 80D349FC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80D34A00:
    ctx->pc = 0x80D34A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A00u)) return;
    // 80D34A00: lis     r5, -32557
    ctx->gpr[5] = ((u32)(s32)(-32557) << 16);

label_80D34A04:
    ctx->pc = 0x80D34A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A04u)) return;
    // 80D34A04: addi    r5, r5, 18628
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(18628);

label_80D34A08:
    ctx->pc = 0x80D34A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A08u)) return;
    // 80D34A08: bl      0x8050FD60
    {
            ctx->lr = 0x80D34A0Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D34A0C:
    ctx->pc = 0x80D34A0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34A0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D34A0C: lwz     r4, 32(r3)
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
label_80D34A10:
    ctx->pc = 0x80D34A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D34A10: stfs     f31, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D34A10u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34A14:
    ctx->pc = 0x80D34A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D34A14: lwz     r4, 32(r3)
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
label_80D34A18:
    ctx->pc = 0x80D34A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D34A18: stw     r31, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34A1C:
    ctx->pc = 0x80D34A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D34A1C: lfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D34A1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34A20:
    ctx->pc = 0x80D34A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D34A20: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34A24:
    ctx->pc = 0x80D34A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D34A24: lwz     r0, 36(r1)
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
label_80D34A28:
    ctx->pc = 0x80D34A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D34A28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34A28: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34A2C:
    ctx->pc = 0x80D34A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A2Cu)) return;
    // 80D34A2C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D34A30:
    ctx->pc = 0x80D34A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A30u)) return;
    // 80D34A30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D342C0;
        }
    }

label_80D34A34:
    ctx->pc = 0x80D34A34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34A34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D34A34: lwz     r3, 32(r3)
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
label_80D34A38:
    ctx->pc = 0x80D34A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D34A38: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34A3C:
    ctx->pc = 0x80D34A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D34A3C: lwz     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34A40:
    ctx->pc = 0x80D34A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D34A40: lwz     r3, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34A44:
    ctx->pc = 0x80D34A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D34A44: lfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D34A44u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
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
label_80D34A48:
    ctx->pc = 0x80D34A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D34A48: stfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D34A48u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34A4C:
    ctx->pc = 0x80D34A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D34A4C: lwz     r3, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34A50:
    ctx->pc = 0x80D34A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34A50: lfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D34A50u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
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
label_80D34A54:
    ctx->pc = 0x80D34A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D34A54: stfs     f0, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D34A54u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34A58:
    ctx->pc = 0x80D34A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A58u)) return;
    // 80D34A58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D342C0;
        }
    }

label_80D34A5C:
    ctx->pc = 0x80D34A5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34A5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D34A5C: stwu     r1, -32(r1)
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
label_80D34A60:
    ctx->pc = 0x80D34A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D34A60: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34A64:
    ctx->pc = 0x80D34A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D34A64: stw     r0, 36(r1)
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
label_80D34A68:
    ctx->pc = 0x80D34A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D34A68: stw     r31, 28(r1)
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
label_80D34A6C:
    ctx->pc = 0x80D34A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D34A6C: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34A70:
    ctx->pc = 0x80D34A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D34A70: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34A74:
    ctx->pc = 0x80D34A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A74u)) return;
    // 80D34A74: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D34A78:
    ctx->pc = 0x80D34A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A78u)) return;
    // 80D34A78: lis     r3, -32557
    ctx->gpr[3] = ((u32)(s32)(-32557) << 16);

label_80D34A7C:
    ctx->pc = 0x80D34A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A7Cu)) return;
    // 80D34A7C: addi    r0, r3, 18996
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(18996);

label_80D34A80:
    ctx->pc = 0x80D34A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D34A80: stw     r0, 16(r31)
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
label_80D34A84:
    ctx->pc = 0x80D34A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A84u)) return;
    // 80D34A84: lis     r3, -32557
    ctx->gpr[3] = ((u32)(s32)(-32557) << 16);

label_80D34A88:
    ctx->pc = 0x80D34A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A88u)) return;
    // 80D34A88: addi    r0, r3, 18528
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(18528);

label_80D34A8C:
    ctx->pc = 0x80D34A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34A8C: stw     r0, 24(r31)
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
label_80D34A90:
    ctx->pc = 0x80D34A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D34A90: lwz     r30, 32(r31)
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
label_80D34A94:
    ctx->pc = 0x80D34A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A94u)) return;
    // 80D34A94: bl      0x8047EA80
    {
            ctx->lr = 0x80D34A98u;
            ctx->pc = 0x8047EA80u;
            return;
    }

label_80D34A98:
    ctx->pc = 0x80D34A98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34A98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D34A98: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D34A9C:
    ctx->pc = 0x80D34A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34A9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D34A9C: stw     r29, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34AA0:
    ctx->pc = 0x80D34AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AA0u)) return;
    // 80D34AA0: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D34AA4:
    ctx->pc = 0x80D34AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AA4u)) return;
    // 80D34AA4: addi    r3, r3, -17876
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17876);

label_80D34AA8:
    ctx->pc = 0x80D34AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D34AA8: lwz     r0, 0(r3)
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
label_80D34AAC:
    ctx->pc = 0x80D34AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34AAC: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34AB0:
    ctx->pc = 0x80D34AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AB0u)) return;
    // 80D34AB0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D34AB4:
    ctx->pc = 0x80D34AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AB4u)) return;
    // 80D34AB4: bl      0x80D34A34
    {
            ctx->lr = 0x80D34AB8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D34A34u;
                return;
            }
            goto label_80D34A34;
    }

label_80D34AB8:
    ctx->pc = 0x80D34AB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34AB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80D34AB8: lfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80D34AB8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
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
label_80D34ABC:
    ctx->pc = 0x80D34ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34ABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80D34ABC: stfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x80D34ABCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34AC0:
    ctx->pc = 0x80D34AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AC0u)) return;
    // 80D34AC0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D34AC4:
    ctx->pc = 0x80D34AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D34AC4: stw     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34AC8:
    ctx->pc = 0x80D34AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D34AC8: stw     r0, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34ACC:
    ctx->pc = 0x80D34ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34ACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D34ACC: stw     r0, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34AD0:
    ctx->pc = 0x80D34AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AD0u)) return;
    // 80D34AD0: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D34AD4:
    ctx->pc = 0x80D34AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AD4u)) return;
    // 80D34AD4: addi    r3, r3, -24408
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24408);

label_80D34AD8:
    ctx->pc = 0x80D34AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D34AD8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D34AD8u)) return;
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
label_80D34ADC:
    ctx->pc = 0x80D34ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34ADCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D34ADC: stfs     f0, 32(r29)
    if (!ppc_fp_available_inline(ctx, 0x80D34ADCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34AE0:
    ctx->pc = 0x80D34AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D34AE0: stfs     f0, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x80D34AE0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34AE4:
    ctx->pc = 0x80D34AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D34AE4: stfs     f0, 40(r29)
    if (!ppc_fp_available_inline(ctx, 0x80D34AE4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34AE8:
    ctx->pc = 0x80D34AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AE8u)) return;
    // 80D34AE8: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D34AEC:
    ctx->pc = 0x80D34AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AECu)) return;
    // 80D34AEC: addi    r3, r3, -17876
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-17876);

label_80D34AF0:
    ctx->pc = 0x80D34AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D34AF0: lwz     r0, 4(r3)
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
label_80D34AF4:
    ctx->pc = 0x80D34AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D34AF4: stw     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34AF8:
    ctx->pc = 0x80D34AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D34AF8: lwz     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34AFC:
    ctx->pc = 0x80D34AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34AFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D34AFC: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34B00:
    ctx->pc = 0x80D34B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D34B00: lwz     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34B04:
    ctx->pc = 0x80D34B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D34B04: stw     r0, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34B08:
    ctx->pc = 0x80D34B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B08u)) return;
    // 80D34B08: lis     r3, 26624
    ctx->gpr[3] = ((u32)(s32)(26624) << 16);

label_80D34B0C:
    ctx->pc = 0x80D34B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B0Cu)) return;
    // 80D34B0C: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80D34B10:
    ctx->pc = 0x80D34B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B10u)) return;
    // 80D34B10: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D34B14:
    ctx->pc = 0x80D34B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B14u)) return;
    // 80D34B14: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D34B18:
    ctx->pc = 0x80D34B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B18u)) return;
    // 80D34B18: bl      0x8047EBFC
    {
            ctx->lr = 0x80D34B1Cu;
            ctx->pc = 0x8047EBFCu;
            return;
    }

label_80D34B1C:
    ctx->pc = 0x80D34B1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34B1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D34B1C: lha     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34B20:
    ctx->pc = 0x80D34B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B20u)) return;
    // 80D34B20: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_80D34B24:
    ctx->pc = 0x80D34B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B24u)) return;
    // 80D34B24: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80D34B28:
    ctx->pc = 0x80D34B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D34B28: sth     r0, 4(r30)
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
label_80D34B2C:
    ctx->pc = 0x80D34B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D34B2C: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34B30:
    ctx->pc = 0x80D34B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B30u)) return;
    // 80D34B30: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D34B34:
    ctx->pc = 0x80D34B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B34u)) return;
    // 80D34B34: addi    r3, r3, -24404
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24404);

label_80D34B38:
    ctx->pc = 0x80D34B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D34B38: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D34B38u)) return;
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
label_80D34B3C:
    ctx->pc = 0x80D34B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D34B3C: stfs     f0, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D34B3Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34B40:
    ctx->pc = 0x80D34B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D34B40: stfs     f0, 20(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D34B40u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34B44:
    ctx->pc = 0x80D34B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D34B44: stfs     f0, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D34B44u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34B48:
    ctx->pc = 0x80D34B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B48u)) return;
    // 80D34B48: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D34B4C:
    ctx->pc = 0x80D34B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D34B4C: stw     r0, 4(r4)
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
label_80D34B50:
    ctx->pc = 0x80D34B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D34B50: stw     r0, 8(r4)
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
label_80D34B54:
    ctx->pc = 0x80D34B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D34B54: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34B58:
    ctx->pc = 0x80D34B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D34B58: lwz     r31, 28(r1)
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
label_80D34B5C:
    ctx->pc = 0x80D34B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D34B5C: lwz     r30, 24(r1)
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
label_80D34B60:
    ctx->pc = 0x80D34B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D34B60: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34B64:
    ctx->pc = 0x80D34B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D34B64: lwz     r0, 36(r1)
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
label_80D34B68:
    ctx->pc = 0x80D34B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D34B68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34B68: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34B6C:
    ctx->pc = 0x80D34B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B6Cu)) return;
    // 80D34B6C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D34B70:
    ctx->pc = 0x80D34B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B70u)) return;
    // 80D34B70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D342C0;
        }
    }

label_80D34B74:
    ctx->pc = 0x80D34B74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34B74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D34B74: stwu     r1, -32(r1)
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
label_80D34B78:
    ctx->pc = 0x80D34B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D34B78: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34B7C:
    ctx->pc = 0x80D34B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D34B7C: stw     r0, 36(r1)
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
label_80D34B80:
    ctx->pc = 0x80D34B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D34B80: stfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D34B80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34B84:
    ctx->pc = 0x80D34B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D34B84: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34B88:
    ctx->pc = 0x80D34B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B88u)) return;
    // 80D34B88: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D34B8C:
    ctx->pc = 0x80D34B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B8Cu)) return;
    // 80D34B8C: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x80D34B8Cu)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_80D34B90:
    ctx->pc = 0x80D34B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B90u)) return;
    // 80D34B90: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80D34B94:
    ctx->pc = 0x80D34B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B94u)) return;
    // 80D34B94: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80D34B98:
    ctx->pc = 0x80D34B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B98u)) return;
    // 80D34B98: lis     r5, -32557
    ctx->gpr[5] = ((u32)(s32)(-32557) << 16);

label_80D34B9C:
    ctx->pc = 0x80D34B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34B9Cu)) return;
    // 80D34B9C: addi    r5, r5, 19036
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19036);

label_80D34BA0:
    ctx->pc = 0x80D34BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34BA0u)) return;
    // 80D34BA0: bl      0x8050FD60
    {
            ctx->lr = 0x80D34BA4u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D34BA4:
    ctx->pc = 0x80D34BA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D34BA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D34BA4: lwz     r4, 32(r3)
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
label_80D34BA8:
    ctx->pc = 0x80D34BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34BA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D34BA8: stfs     f31, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D34BA8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34BAC:
    ctx->pc = 0x80D34BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34BACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D34BAC: lwz     r4, 32(r3)
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
label_80D34BB0:
    ctx->pc = 0x80D34BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34BB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D34BB0: stw     r31, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34BB4:
    ctx->pc = 0x80D34BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34BB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D34BB4: lfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D34BB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34BB8:
    ctx->pc = 0x80D34BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34BB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D34BB8: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34BBC:
    ctx->pc = 0x80D34BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34BBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D34BBC: lwz     r0, 36(r1)
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
label_80D34BC0:
    ctx->pc = 0x80D34BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D34BC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D34BC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D34BC4:
    ctx->pc = 0x80D34BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34BC4u)) return;
    // 80D34BC4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D34BC8:
    ctx->pc = 0x80D34BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D34BC8u)) return;
    // 80D34BC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D342C0;
        }
    }

    ctx->pc = 0x80D34BCCu;
    return;
return_dispatch_80D342C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D342FCu: goto label_80D342FC;
    case 0x80D34300u: goto label_80D34300;
    case 0x80D34304u: goto label_80D34304;
    case 0x80D34308u: goto label_80D34308;
    case 0x80D34348u: goto label_80D34348;
    case 0x80D34350u: goto label_80D34350;
    case 0x80D34358u: goto label_80D34358;
    case 0x80D34388u: goto label_80D34388;
    case 0x80D343B8u: goto label_80D343B8;
    case 0x80D343C0u: goto label_80D343C0;
    case 0x80D343E8u: goto label_80D343E8;
    case 0x80D343F0u: goto label_80D343F0;
    case 0x80D34400u: goto label_80D34400;
    case 0x80D34408u: goto label_80D34408;
    case 0x80D34410u: goto label_80D34410;
    case 0x80D34420u: goto label_80D34420;
    case 0x80D34434u: goto label_80D34434;
    case 0x80D3443Cu: goto label_80D3443C;
    case 0x80D34464u: goto label_80D34464;
    case 0x80D3446Cu: goto label_80D3446C;
    case 0x80D34474u: goto label_80D34474;
    case 0x80D3449Cu: goto label_80D3449C;
    case 0x80D344B4u: goto label_80D344B4;
    case 0x80D344CCu: goto label_80D344CC;
    case 0x80D344F0u: goto label_80D344F0;
    case 0x80D344F8u: goto label_80D344F8;
    case 0x80D34520u: goto label_80D34520;
    case 0x80D34528u: goto label_80D34528;
    case 0x80D3452Cu: goto label_80D3452C;
    case 0x80D34534u: goto label_80D34534;
    case 0x80D3455Cu: goto label_80D3455C;
    case 0x80D34578u: goto label_80D34578;
    case 0x80D34584u: goto label_80D34584;
    case 0x80D345A0u: goto label_80D345A0;
    case 0x80D345ACu: goto label_80D345AC;
    case 0x80D345B0u: goto label_80D345B0;
    case 0x80D345CCu: goto label_80D345CC;
    case 0x80D345D0u: goto label_80D345D0;
    case 0x80D345ECu: goto label_80D345EC;
    case 0x80D345F0u: goto label_80D345F0;
    case 0x80D345F4u: goto label_80D345F4;
    case 0x80D34624u: goto label_80D34624;
    case 0x80D34640u: goto label_80D34640;
    case 0x80D34670u: goto label_80D34670;
    case 0x80D3468Cu: goto label_80D3468C;
    case 0x80D34694u: goto label_80D34694;
    case 0x80D346B0u: goto label_80D346B0;
    case 0x80D346BCu: goto label_80D346BC;
    case 0x80D346D8u: goto label_80D346D8;
    case 0x80D346E4u: goto label_80D346E4;
    case 0x80D34708u: goto label_80D34708;
    case 0x80D34710u: goto label_80D34710;
    case 0x80D34718u: goto label_80D34718;
    case 0x80D34724u: goto label_80D34724;
    case 0x80D34748u: goto label_80D34748;
    case 0x80D34750u: goto label_80D34750;
    case 0x80D34758u: goto label_80D34758;
    case 0x80D34764u: goto label_80D34764;
    case 0x80D3476Cu: goto label_80D3476C;
    case 0x80D34770u: goto label_80D34770;
    case 0x80D347A0u: goto label_80D347A0;
    case 0x80D347BCu: goto label_80D347BC;
    case 0x80D347C0u: goto label_80D347C0;
    case 0x80D347C8u: goto label_80D347C8;
    case 0x80D347CCu: goto label_80D347CC;
    case 0x80D347D0u: goto label_80D347D0;
    case 0x80D347D8u: goto label_80D347D8;
    case 0x80D347F4u: goto label_80D347F4;
    case 0x80D3480Cu: goto label_80D3480C;
    case 0x80D34834u: goto label_80D34834;
    case 0x80D3483Cu: goto label_80D3483C;
    case 0x80D34844u: goto label_80D34844;
    case 0x80D34848u: goto label_80D34848;
    case 0x80D3484Cu: goto label_80D3484C;
    case 0x80D34880u: goto label_80D34880;
    case 0x80D34888u: goto label_80D34888;
    case 0x80D34900u: goto label_80D34900;
    case 0x80D34920u: goto label_80D34920;
    case 0x80D34984u: goto label_80D34984;
    case 0x80D34A0Cu: goto label_80D34A0C;
    case 0x80D34A98u: goto label_80D34A98;
    case 0x80D34AB8u: goto label_80D34AB8;
    case 0x80D34B1Cu: goto label_80D34B1C;
    case 0x80D34BA4u: goto label_80D34BA4;
    default: return;
    }
}

