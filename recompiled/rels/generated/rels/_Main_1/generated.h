// DolRecomp output
// cpu: gekko

#ifndef RECOMP_GENERATED_H
#define RECOMP_GENERATED_H

#define DOLRECOMP_CPU_GEKKO 1
#define DOLRECOMP_CPU_NAME "gekko"

#include <string.h>
#include <math.h>
#ifndef DOLRECOMP_CPU_HEADER
#define DOLRECOMP_CPU_HEADER "cpu/cpu.h"
#endif
#include DOLRECOMP_CPU_HEADER

#ifndef DOLRECOMP_POLL_READ_STABLE
#define DOLRECOMP_POLL_READ_STABLE(cpu, addr, size) \
    ((void)(cpu), (void)(addr), (void)(size), 0)
#endif

#ifndef DOLRECOMP_C_LOOP_CYCLE_BUDGET
static inline s64 dolrecomp_loop_cycle_budget(const CPUState* ctx) {
    return ctx->cycle_budget > 0 ? ctx->cycle_budget : 256;
}
#define DOLRECOMP_C_LOOP_CYCLE_BUDGET dolrecomp_loop_cycle_budget(ctx)
#endif

static inline bool dolrecomp_block_can_precharge(
    const CPUState* ctx, u32 block_cycles) {
    if (ctx->cycle_deadline_budget <= 0) return true;
    const s64 remaining = ctx->cycle_deadline_budget + ctx->downcount;
    return remaining >= 0 && (u64)remaining >= (u64)block_cycles;
}

/* The precise per-instruction charge runs only when a block could not
   be precharged, so its body is dead on the hot path but was emitted
   at every instruction. Out of line it costs a cold call and saves
   the body; see emit_precise_instruction_charge. */
static inline
#if defined(__GNUC__) || defined(__clang__)
__attribute__((noinline))
#endif
bool dolrecomp_charge_precise(CPUState* ctx, u32 cycles, u32 resume) {
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = resume;
        return false;
    }
    ctx->downcount -= (s64)cycles;
    return true;
}

/* Cross-chunk calls turn guest recursion into host recursion, and a
   chunk frame is not small. Without a ceiling a deep guest call chain
   overflows the host stack, which is a crash rather than a slow
   emulator. Past the limit the call site falls back to returning to
   the chassis, which is always correct -- ctx->pc already names the
   target, so the chassis simply dispatches it as it did before.
   The counter is plain static, not atomic: the chassis runs the module
   on one CPU thread. */
#ifndef DOLRECOMP_C_MAX_CALL_DEPTH
#define DOLRECOMP_C_MAX_CALL_DEPTH 24
#endif
#if defined(__GNUC__) || defined(__clang__)
#define DOLRECOMP_UNUSED __attribute__((unused))
#else
#define DOLRECOMP_UNUSED
#endif
extern unsigned dolrecomp_call_depth;
static inline DOLRECOMP_UNUSED int dolrecomp_call_enter(void) {
    if (dolrecomp_call_depth >= (unsigned)DOLRECOMP_C_MAX_CALL_DEPTH)
        return 0;
    dolrecomp_call_depth++;
    return 1;
}
static inline DOLRECOMP_UNUSED void dolrecomp_call_leave(void) {
    if (dolrecomp_call_depth)
        dolrecomp_call_depth--;
}
#undef DOLRECOMP_UNUSED

static inline u32 dolrecomp_rotl32(u32 value, u32 sh) {
    sh &= 31u;
    return sh ? ((value << sh) | (value >> (32u - sh))) : value;
}

static inline f64 dolrecomp_f32_from_bits(u32 bits) {
    u64 x = bits;
    u64 exp = (x >> 23) & 0xFFu;
    u64 frac = x & 0x007FFFFFu;
    u64 result;
    if (exp > 0 && exp < 255) {
        u64 y = !(exp >> 7);
        u64 z = (y << 61) | (y << 60) | (y << 59);
        result = ((x & 0xC0000000u) << 32) | z |
                 ((x & 0x3FFFFFFFu) << 29);
    } else if (exp == 0 && frac != 0) {
        exp = 1023 - 126;
        do {
            frac <<= 1;
            exp -= 1;
        } while ((frac & 0x00800000u) == 0);
        result = ((x & 0x80000000u) << 32) | (exp << 52) |
                 ((frac & 0x007FFFFFu) << 29);
    } else {
        u64 y = exp >> 7;
        u64 z = (y << 61) | (y << 60) | (y << 59);
        result = ((x & 0xC0000000u) << 32) | z |
                 ((x & 0x3FFFFFFFu) << 29);
    }
    f64 value;
    memcpy(&value, &result, sizeof(value));
    return value;
}

static inline u32 dolrecomp_f32_to_bits(f64 value) {
    u64 bits;
    memcpy(&bits, &value, sizeof(bits));
    u32 exp = (u32)((bits >> 52) & 0x7FFu);
    if (exp > 896 || (bits & 0x7FFFFFFFFFFFFFFFull) == 0) {
        return (u32)(((bits >> 32) & 0xC0000000u) |
                     ((bits >> 29) & 0x3FFFFFFFu));
    }
    if (exp >= 874) {
        u32 result =
            (u32)(0x80000000u | ((bits & 0x000FFFFFFFFFFFFFull) >> 21));
        result >>= 905 - exp;
        result |= (u32)((bits >> 32) & 0x80000000u);
        return result;
    }
    return (u32)(((bits >> 32) & 0xC0000000u) |
                 ((bits >> 29) & 0x3FFFFFFFu));
}

static inline f64 dolrecomp_f64_from_bits(u64 bits) {
    f64 value;
    memcpy(&value, &bits, sizeof(value));
    return value;
}

static inline u64 dolrecomp_f64_to_bits(f64 value) {
    u64 bits;
    memcpy(&bits, &value, sizeof(bits));
    return bits;
}

static inline f64 dolrecomp_ps_from_bits(u32 bits) {
    return dolrecomp_f32_from_bits(bits);
}

static inline u32 dolrecomp_ps_to_bits(f64 value) {
    return dolrecomp_f32_to_bits(value);
}


// Function entry points
void func_80400000(CPUState* ctx);
void func_80404000(CPUState* ctx);
void func_80408000(CPUState* ctx);
void func_8040C000(CPUState* ctx);
void func_80410000(CPUState* ctx);
void func_80414000(CPUState* ctx);
void func_80418000(CPUState* ctx);
void func_8041C000(CPUState* ctx);
void func_80420000(CPUState* ctx);
void func_80424000(CPUState* ctx);
void func_80428000(CPUState* ctx);
void func_8042C000(CPUState* ctx);
void func_80430000(CPUState* ctx);
void func_80434000(CPUState* ctx);
void func_80438000(CPUState* ctx);
void func_8043C000(CPUState* ctx);
void func_80440000(CPUState* ctx);
void func_80444000(CPUState* ctx);
void func_80448000(CPUState* ctx);
void func_8044C000(CPUState* ctx);
void func_80450000(CPUState* ctx);
void func_80454000(CPUState* ctx);
void func_80458000(CPUState* ctx);
void func_8045C000(CPUState* ctx);
void func_80460000(CPUState* ctx);
void func_80464000(CPUState* ctx);
void func_80468000(CPUState* ctx);
void func_8046C000(CPUState* ctx);
void func_80470000(CPUState* ctx);
void func_80474000(CPUState* ctx);
void func_80478000(CPUState* ctx);
void func_8047C000(CPUState* ctx);
void func_80480000(CPUState* ctx);
void func_80484000(CPUState* ctx);
void func_80488000(CPUState* ctx);
void func_8048C000(CPUState* ctx);
void func_80490000(CPUState* ctx);
void func_80494000(CPUState* ctx);
void func_80498000(CPUState* ctx);
void func_8049C000(CPUState* ctx);
void func_804A0000(CPUState* ctx);
void func_804A4000(CPUState* ctx);
void func_804A8000(CPUState* ctx);
void func_804AC000(CPUState* ctx);
void func_804B0000(CPUState* ctx);
void func_804B4000(CPUState* ctx);
void func_804B8000(CPUState* ctx);
void func_804BC000(CPUState* ctx);
void func_804C0000(CPUState* ctx);
void func_804C4000(CPUState* ctx);
void func_804C8000(CPUState* ctx);
void func_804CC000(CPUState* ctx);
void func_804D0000(CPUState* ctx);
void func_804D4000(CPUState* ctx);
void func_804D8000(CPUState* ctx);
void func_804DC000(CPUState* ctx);
void func_804E0000(CPUState* ctx);
void func_804E4000(CPUState* ctx);
void func_804E8000(CPUState* ctx);
void func_804EC000(CPUState* ctx);
void func_804F0000(CPUState* ctx);
void func_804F4000(CPUState* ctx);
void func_804F8000(CPUState* ctx);
void func_804FC000(CPUState* ctx);
void func_80500000(CPUState* ctx);
void func_80504000(CPUState* ctx);
void func_80508000(CPUState* ctx);
void func_8050C000(CPUState* ctx);
void func_80510000(CPUState* ctx);
void func_80514000(CPUState* ctx);
void func_80518000(CPUState* ctx);
void func_8051C000(CPUState* ctx);
void func_80520000(CPUState* ctx);
void func_80524000(CPUState* ctx);
void func_80528000(CPUState* ctx);
void func_8052C000(CPUState* ctx);
void func_80530000(CPUState* ctx);
void func_80534000(CPUState* ctx);
void func_80538000(CPUState* ctx);
void func_8053C000(CPUState* ctx);
void func_80540000(CPUState* ctx);
void func_80544000(CPUState* ctx);
void func_80548000(CPUState* ctx);
void func_8054C000(CPUState* ctx);
void func_80550000(CPUState* ctx);
void func_80554000(CPUState* ctx);
void func_80558000(CPUState* ctx);
void func_8055C000(CPUState* ctx);
void func_80560000(CPUState* ctx);
void func_80564000(CPUState* ctx);
void func_80568000(CPUState* ctx);
void func_8056C000(CPUState* ctx);
void func_80570000(CPUState* ctx);
void func_80574000(CPUState* ctx);
void func_80578000(CPUState* ctx);
void func_8057C000(CPUState* ctx);
void func_80580000(CPUState* ctx);
void func_80584000(CPUState* ctx);
void func_80588000(CPUState* ctx);
void func_8058C000(CPUState* ctx);
void func_80590000(CPUState* ctx);
void func_80594000(CPUState* ctx);
void func_80598000(CPUState* ctx);
void func_8059C000(CPUState* ctx);
void func_805A0000(CPUState* ctx);
void func_805A4000(CPUState* ctx);
void func_805A8000(CPUState* ctx);
void func_805AC000(CPUState* ctx);
void func_805B0000(CPUState* ctx);
void func_805B4000(CPUState* ctx);
void func_805B8000(CPUState* ctx);
void func_805BC000(CPUState* ctx);
void func_805C0000(CPUState* ctx);
void func_805C4000(CPUState* ctx);
void func_805C8000(CPUState* ctx);
void func_805CC000(CPUState* ctx);
void func_805D0000(CPUState* ctx);
void func_805D4000(CPUState* ctx);
void func_805D8000(CPUState* ctx);
void func_805DC000(CPUState* ctx);
void func_805E0000(CPUState* ctx);
void func_805E4000(CPUState* ctx);
void func_805E8000(CPUState* ctx);
void func_805EC000(CPUState* ctx);
void func_805F0000(CPUState* ctx);
void func_805F4000(CPUState* ctx);
void func_805F8000(CPUState* ctx);
void func_805FC000(CPUState* ctx);
void func_80600000(CPUState* ctx);
void func_80604000(CPUState* ctx);
void func_80608000(CPUState* ctx);
void func_8060C000(CPUState* ctx);
void func_80610000(CPUState* ctx);
void func_80614000(CPUState* ctx);

#define DOLRECOMP_ENTRY_POINT 0x805F7F04u

typedef void (*DolRecompFunction)(CPUState* ctx);

#if defined(__GNUC__) || defined(__clang__)
#define DOLRECOMP_UNUSED __attribute__((unused))
#else
#define DOLRECOMP_UNUSED
#endif

#if defined(DOLRECOMP_ENABLE_REPLACEMENTS)
int dolrecomp_dispatch_replacement(CPUState* ctx, u32 address);
#else
static inline int dolrecomp_dispatch_replacement(CPUState* ctx, u32 address) {
    (void)ctx;
    (void)address;
    return 0;
}
#endif

static inline DolRecompFunction dolrecomp_find_original(u32 address) {
    {
        u32 offset = address - 0x80400000u;
        if (offset < 0x0021467Cu && (offset & 3u) == 0u) {
            static const DolRecompFunction chunk_functions[] = {
                func_80400000,
                func_80404000,
                func_80408000,
                func_8040C000,
                func_80410000,
                func_80414000,
                func_80418000,
                func_8041C000,
                func_80420000,
                func_80424000,
                func_80428000,
                func_8042C000,
                func_80430000,
                func_80434000,
                func_80438000,
                func_8043C000,
                func_80440000,
                func_80444000,
                func_80448000,
                func_8044C000,
                func_80450000,
                func_80454000,
                func_80458000,
                func_8045C000,
                func_80460000,
                func_80464000,
                func_80468000,
                func_8046C000,
                func_80470000,
                func_80474000,
                func_80478000,
                func_8047C000,
                func_80480000,
                func_80484000,
                func_80488000,
                func_8048C000,
                func_80490000,
                func_80494000,
                func_80498000,
                func_8049C000,
                func_804A0000,
                func_804A4000,
                func_804A8000,
                func_804AC000,
                func_804B0000,
                func_804B4000,
                func_804B8000,
                func_804BC000,
                func_804C0000,
                func_804C4000,
                func_804C8000,
                func_804CC000,
                func_804D0000,
                func_804D4000,
                func_804D8000,
                func_804DC000,
                func_804E0000,
                func_804E4000,
                func_804E8000,
                func_804EC000,
                func_804F0000,
                func_804F4000,
                func_804F8000,
                func_804FC000,
                func_80500000,
                func_80504000,
                func_80508000,
                func_8050C000,
                func_80510000,
                func_80514000,
                func_80518000,
                func_8051C000,
                func_80520000,
                func_80524000,
                func_80528000,
                func_8052C000,
                func_80530000,
                func_80534000,
                func_80538000,
                func_8053C000,
                func_80540000,
                func_80544000,
                func_80548000,
                func_8054C000,
                func_80550000,
                func_80554000,
                func_80558000,
                func_8055C000,
                func_80560000,
                func_80564000,
                func_80568000,
                func_8056C000,
                func_80570000,
                func_80574000,
                func_80578000,
                func_8057C000,
                func_80580000,
                func_80584000,
                func_80588000,
                func_8058C000,
                func_80590000,
                func_80594000,
                func_80598000,
                func_8059C000,
                func_805A0000,
                func_805A4000,
                func_805A8000,
                func_805AC000,
                func_805B0000,
                func_805B4000,
                func_805B8000,
                func_805BC000,
                func_805C0000,
                func_805C4000,
                func_805C8000,
                func_805CC000,
                func_805D0000,
                func_805D4000,
                func_805D8000,
                func_805DC000,
                func_805E0000,
                func_805E4000,
                func_805E8000,
                func_805EC000,
                func_805F0000,
                func_805F4000,
                func_805F8000,
                func_805FC000,
                func_80600000,
                func_80604000,
                func_80608000,
                func_8060C000,
                func_80610000,
                func_80614000,
            };
            return chunk_functions[offset / 0x00004000u];
        }
    }
    return NULL;
}

static inline int dolrecomp_call_original(CPUState* ctx, u32 address) {
    DolRecompFunction fn = dolrecomp_find_original(address);
    if (!fn) return 0;
    ctx->pc = address;
    fn(ctx);
    return 1;
}

static inline bool dolrecomp_physical_pc_alias(CPUState* ctx, u32 address, u32* alias_out) {
    if (address < ctx->ram_size) {
        *alias_out = address | GC_RAM_BASE;
        return *alias_out != address;
    }
    return false;
}

static inline int dolrecomp_call(CPUState* ctx, u32 address) {
    u32 alias;
    ctx->pc = address;
    if (dolrecomp_dispatch_replacement(ctx, address)) return 1;
    if (ctx->host_call && ppc_host_call(ctx, address)) return 1;
    if (dolrecomp_call_original(ctx, address)) return 1;
    if (dolrecomp_physical_pc_alias(ctx, address, &alias)) {
        ctx->pc = alias;
        if (dolrecomp_dispatch_replacement(ctx, alias)) return 1;
        if (ctx->host_call && ppc_host_call(ctx, alias)) return 1;
        if (dolrecomp_call_original(ctx, alias)) return 1;
    }
    return 0;
}

static inline DOLRECOMP_UNUSED int dolrecomp_run_blocks(CPUState* ctx, u32 max_blocks) {
    u32 blocks = 0;
    while (max_blocks == 0u || blocks < max_blocks) {
        if (!dolrecomp_call(ctx, ctx->pc)) return 0;
        if (ctx->exception) return 0;
        blocks++;
    }
    return 1;
}

#undef DOLRECOMP_UNUSED

#endif /* RECOMP_GENERATED_H */

// end
