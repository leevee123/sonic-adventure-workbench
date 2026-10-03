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
void func_80BCD560(CPUState* ctx);
void func_80BD1560(CPUState* ctx);

#define DOLRECOMP_ENTRY_POINT 0x00000000u

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
        u32 offset = address - 0x80BCD560u;
        if (offset < 0x000044D8u && (offset & 3u) == 0u) {
            static const DolRecompFunction chunk_functions[] = {
                func_80BCD560,
                func_80BD1560,
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
