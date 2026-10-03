/* Executes translated retail functions against host reference operations.
 * This console test is not the game runtime or a playable port. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../recompiled/dol/generated/generated.h"

static int guest_call(CPUState* cpu, u32 pc, u32 dst, u32 src, u32 count) {
    cpu->pc=pc;cpu->lr=0x817FFF00u;cpu->gpr[3]=dst;cpu->gpr[4]=src;cpu->gpr[5]=count;
    cpu->gpr[1]=0x81700000u;cpu->exception=0;
    for (int i=0;i<1000 && cpu->pc!=cpu->lr;i++) {
        cpu->downcount=0;cpu->cycle_budget=10000;cpu->cycle_deadline_budget=10000;
        if (!dolrecomp_call(cpu,cpu->pc) || cpu->exception) return 0;
    }
    return cpu->pc==cpu->lr && cpu->gpr[3]==dst;
}

int main(void) {
    CPUState cpu;unsigned cases=0;
    if (!cpu_init(&cpu)) return 1;
    const unsigned lengths[]={0,1,2,3,4,7,8,15,16,31,32,63,64,255,256,1024};
    for(unsigned alignment=0;alignment<4;alignment++) {
        for(unsigned j=0;j<sizeof(lengths)/sizeof(lengths[0]);j++) {
            unsigned count=lengths[j],dst=0x10000+alignment,src=0x20000+alignment;
            unsigned char expected[1056];memset(expected,0xAA,sizeof(expected));
            memset(cpu.ram+dst,0xAA,sizeof(expected));
            for(unsigned k=0;k<sizeof(expected);k++) cpu.ram[src+k]=(unsigned char)(k*37u+11u);
            memcpy(expected,cpu.ram+src,count);
            if(!guest_call(&cpu,0x800031E8u,GC_RAM_BASE+dst,GC_RAM_BASE+src,count) ||
               memcmp(expected,cpu.ram+dst,sizeof(expected))) {
                fprintf(stderr,"retail memcpy failed: alignment=%u count=%u pc=%08X exception=%X\n",alignment,count,cpu.pc,cpu.exception);cpu_free(&cpu);return 1;
            }
            cases++;
            memset(cpu.ram+dst,0xAA,sizeof(expected));memset(expected,0xAA,sizeof(expected));memset(expected,0x5A,count);
            if(!guest_call(&cpu,0x80003100u,GC_RAM_BASE+dst,0x5Au,count) ||
               memcmp(expected,cpu.ram+dst,sizeof(expected))) {
                fprintf(stderr,"retail memset failed: alignment=%u count=%u pc=%08X exception=%X\n",alignment,count,cpu.pc,cpu.exception);cpu_free(&cpu);return 1;
            }
            cases++;
        }
    }
    cpu_free(&cpu);printf("PASS: %u native executions of retail memcpy/memset; zero exceptions; surrounding bytes preserved\n",cases);return 0;
}
