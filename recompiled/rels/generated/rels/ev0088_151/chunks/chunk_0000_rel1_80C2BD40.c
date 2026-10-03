// DolRecomp output
#include "../generated.h"

void func_80C2BD40(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80C2BD40[2108] = {
        &&label_80C2BD40,
        &&label_80C2BD44,
        &&label_80C2BD48,
        &&label_80C2BD4C,
        &&label_80C2BD50,
        &&label_80C2BD54,
        &&label_80C2BD58,
        &&label_80C2BD5C,
        &&label_80C2BD60,
        &&label_80C2BD64,
        &&label_80C2BD68,
        &&label_80C2BD6C,
        &&label_80C2BD70,
        &&label_80C2BD74,
        &&label_80C2BD78,
        &&label_80C2BD7C,
        &&label_80C2BD80,
        &&label_80C2BD84,
        &&label_80C2BD88,
        &&label_80C2BD8C,
        &&label_80C2BD90,
        &&label_80C2BD94,
        &&label_80C2BD98,
        &&label_80C2BD9C,
        &&label_80C2BDA0,
        &&label_80C2BDA4,
        &&label_80C2BDA8,
        &&label_80C2BDAC,
        &&label_80C2BDB0,
        &&label_80C2BDB4,
        &&label_80C2BDB8,
        &&label_80C2BDBC,
        &&label_80C2BDC0,
        &&label_80C2BDC4,
        &&label_80C2BDC8,
        &&label_80C2BDCC,
        &&label_80C2BDD0,
        &&label_80C2BDD4,
        &&label_80C2BDD8,
        &&label_80C2BDDC,
        &&label_80C2BDE0,
        &&label_80C2BDE4,
        &&label_80C2BDE8,
        &&label_80C2BDEC,
        &&label_80C2BDF0,
        &&label_80C2BDF4,
        &&label_80C2BDF8,
        &&label_80C2BDFC,
        &&label_80C2BE00,
        &&label_80C2BE04,
        &&label_80C2BE08,
        &&label_80C2BE0C,
        &&label_80C2BE10,
        &&label_80C2BE14,
        &&label_80C2BE18,
        &&label_80C2BE1C,
        &&label_80C2BE20,
        &&label_80C2BE24,
        &&label_80C2BE28,
        &&label_80C2BE2C,
        &&label_80C2BE30,
        &&label_80C2BE34,
        &&label_80C2BE38,
        &&label_80C2BE3C,
        &&label_80C2BE40,
        &&label_80C2BE44,
        &&label_80C2BE48,
        &&label_80C2BE4C,
        &&label_80C2BE50,
        &&label_80C2BE54,
        &&label_80C2BE58,
        &&label_80C2BE5C,
        &&label_80C2BE60,
        &&label_80C2BE64,
        &&label_80C2BE68,
        &&label_80C2BE6C,
        &&label_80C2BE70,
        &&label_80C2BE74,
        &&label_80C2BE78,
        &&label_80C2BE7C,
        &&label_80C2BE80,
        &&label_80C2BE84,
        &&label_80C2BE88,
        &&label_80C2BE8C,
        &&label_80C2BE90,
        &&label_80C2BE94,
        &&label_80C2BE98,
        &&label_80C2BE9C,
        &&label_80C2BEA0,
        &&label_80C2BEA4,
        &&label_80C2BEA8,
        &&label_80C2BEAC,
        &&label_80C2BEB0,
        &&label_80C2BEB4,
        &&label_80C2BEB8,
        &&label_80C2BEBC,
        &&label_80C2BEC0,
        &&label_80C2BEC4,
        &&label_80C2BEC8,
        &&label_80C2BECC,
        &&label_80C2BED0,
        &&label_80C2BED4,
        &&label_80C2BED8,
        &&label_80C2BEDC,
        &&label_80C2BEE0,
        &&label_80C2BEE4,
        &&label_80C2BEE8,
        &&label_80C2BEEC,
        &&label_80C2BEF0,
        &&label_80C2BEF4,
        &&label_80C2BEF8,
        &&label_80C2BEFC,
        &&label_80C2BF00,
        &&label_80C2BF04,
        &&label_80C2BF08,
        &&label_80C2BF0C,
        &&label_80C2BF10,
        &&label_80C2BF14,
        &&label_80C2BF18,
        &&label_80C2BF1C,
        &&label_80C2BF20,
        &&label_80C2BF24,
        &&label_80C2BF28,
        &&label_80C2BF2C,
        &&label_80C2BF30,
        &&label_80C2BF34,
        &&label_80C2BF38,
        &&label_80C2BF3C,
        &&label_80C2BF40,
        &&label_80C2BF44,
        &&label_80C2BF48,
        &&label_80C2BF4C,
        &&label_80C2BF50,
        &&label_80C2BF54,
        &&label_80C2BF58,
        &&label_80C2BF5C,
        &&label_80C2BF60,
        &&label_80C2BF64,
        &&label_80C2BF68,
        &&label_80C2BF6C,
        &&label_80C2BF70,
        &&label_80C2BF74,
        &&label_80C2BF78,
        &&label_80C2BF7C,
        &&label_80C2BF80,
        &&label_80C2BF84,
        &&label_80C2BF88,
        &&label_80C2BF8C,
        &&label_80C2BF90,
        &&label_80C2BF94,
        &&label_80C2BF98,
        &&label_80C2BF9C,
        &&label_80C2BFA0,
        &&label_80C2BFA4,
        &&label_80C2BFA8,
        &&label_80C2BFAC,
        &&label_80C2BFB0,
        &&label_80C2BFB4,
        &&label_80C2BFB8,
        &&label_80C2BFBC,
        &&label_80C2BFC0,
        &&label_80C2BFC4,
        &&label_80C2BFC8,
        &&label_80C2BFCC,
        &&label_80C2BFD0,
        &&label_80C2BFD4,
        &&label_80C2BFD8,
        &&label_80C2BFDC,
        &&label_80C2BFE0,
        &&label_80C2BFE4,
        &&label_80C2BFE8,
        &&label_80C2BFEC,
        &&label_80C2BFF0,
        &&label_80C2BFF4,
        &&label_80C2BFF8,
        &&label_80C2BFFC,
        &&label_80C2C000,
        &&label_80C2C004,
        &&label_80C2C008,
        &&label_80C2C00C,
        &&label_80C2C010,
        &&label_80C2C014,
        &&label_80C2C018,
        &&label_80C2C01C,
        &&label_80C2C020,
        &&label_80C2C024,
        &&label_80C2C028,
        &&label_80C2C02C,
        &&label_80C2C030,
        &&label_80C2C034,
        &&label_80C2C038,
        &&label_80C2C03C,
        &&label_80C2C040,
        &&label_80C2C044,
        &&label_80C2C048,
        &&label_80C2C04C,
        &&label_80C2C050,
        &&label_80C2C054,
        &&label_80C2C058,
        &&label_80C2C05C,
        &&label_80C2C060,
        &&label_80C2C064,
        &&label_80C2C068,
        &&label_80C2C06C,
        &&label_80C2C070,
        &&label_80C2C074,
        &&label_80C2C078,
        &&label_80C2C07C,
        &&label_80C2C080,
        &&label_80C2C084,
        &&label_80C2C088,
        &&label_80C2C08C,
        &&label_80C2C090,
        &&label_80C2C094,
        &&label_80C2C098,
        &&label_80C2C09C,
        &&label_80C2C0A0,
        &&label_80C2C0A4,
        &&label_80C2C0A8,
        &&label_80C2C0AC,
        &&label_80C2C0B0,
        &&label_80C2C0B4,
        &&label_80C2C0B8,
        &&label_80C2C0BC,
        &&label_80C2C0C0,
        &&label_80C2C0C4,
        &&label_80C2C0C8,
        &&label_80C2C0CC,
        &&label_80C2C0D0,
        &&label_80C2C0D4,
        &&label_80C2C0D8,
        &&label_80C2C0DC,
        &&label_80C2C0E0,
        &&label_80C2C0E4,
        &&label_80C2C0E8,
        &&label_80C2C0EC,
        &&label_80C2C0F0,
        &&label_80C2C0F4,
        &&label_80C2C0F8,
        &&label_80C2C0FC,
        &&label_80C2C100,
        &&label_80C2C104,
        &&label_80C2C108,
        &&label_80C2C10C,
        &&label_80C2C110,
        &&label_80C2C114,
        &&label_80C2C118,
        &&label_80C2C11C,
        &&label_80C2C120,
        &&label_80C2C124,
        &&label_80C2C128,
        &&label_80C2C12C,
        &&label_80C2C130,
        &&label_80C2C134,
        &&label_80C2C138,
        &&label_80C2C13C,
        &&label_80C2C140,
        &&label_80C2C144,
        &&label_80C2C148,
        &&label_80C2C14C,
        &&label_80C2C150,
        &&label_80C2C154,
        &&label_80C2C158,
        &&label_80C2C15C,
        &&label_80C2C160,
        &&label_80C2C164,
        &&label_80C2C168,
        &&label_80C2C16C,
        &&label_80C2C170,
        &&label_80C2C174,
        &&label_80C2C178,
        &&label_80C2C17C,
        &&label_80C2C180,
        &&label_80C2C184,
        &&label_80C2C188,
        &&label_80C2C18C,
        &&label_80C2C190,
        &&label_80C2C194,
        &&label_80C2C198,
        &&label_80C2C19C,
        &&label_80C2C1A0,
        &&label_80C2C1A4,
        &&label_80C2C1A8,
        &&label_80C2C1AC,
        &&label_80C2C1B0,
        &&label_80C2C1B4,
        &&label_80C2C1B8,
        &&label_80C2C1BC,
        &&label_80C2C1C0,
        &&label_80C2C1C4,
        &&label_80C2C1C8,
        &&label_80C2C1CC,
        &&label_80C2C1D0,
        &&label_80C2C1D4,
        &&label_80C2C1D8,
        &&label_80C2C1DC,
        &&label_80C2C1E0,
        &&label_80C2C1E4,
        &&label_80C2C1E8,
        &&label_80C2C1EC,
        &&label_80C2C1F0,
        &&label_80C2C1F4,
        &&label_80C2C1F8,
        &&label_80C2C1FC,
        &&label_80C2C200,
        &&label_80C2C204,
        &&label_80C2C208,
        &&label_80C2C20C,
        &&label_80C2C210,
        &&label_80C2C214,
        &&label_80C2C218,
        &&label_80C2C21C,
        &&label_80C2C220,
        &&label_80C2C224,
        &&label_80C2C228,
        &&label_80C2C22C,
        &&label_80C2C230,
        &&label_80C2C234,
        &&label_80C2C238,
        &&label_80C2C23C,
        &&label_80C2C240,
        &&label_80C2C244,
        &&label_80C2C248,
        &&label_80C2C24C,
        &&label_80C2C250,
        &&label_80C2C254,
        &&label_80C2C258,
        &&label_80C2C25C,
        &&label_80C2C260,
        &&label_80C2C264,
        &&label_80C2C268,
        &&label_80C2C26C,
        &&label_80C2C270,
        &&label_80C2C274,
        &&label_80C2C278,
        &&label_80C2C27C,
        &&label_80C2C280,
        &&label_80C2C284,
        &&label_80C2C288,
        &&label_80C2C28C,
        &&label_80C2C290,
        &&label_80C2C294,
        &&label_80C2C298,
        &&label_80C2C29C,
        &&label_80C2C2A0,
        &&label_80C2C2A4,
        &&label_80C2C2A8,
        &&label_80C2C2AC,
        &&label_80C2C2B0,
        &&label_80C2C2B4,
        &&label_80C2C2B8,
        &&label_80C2C2BC,
        &&label_80C2C2C0,
        &&label_80C2C2C4,
        &&label_80C2C2C8,
        &&label_80C2C2CC,
        &&label_80C2C2D0,
        &&label_80C2C2D4,
        &&label_80C2C2D8,
        &&label_80C2C2DC,
        &&label_80C2C2E0,
        &&label_80C2C2E4,
        &&label_80C2C2E8,
        &&label_80C2C2EC,
        &&label_80C2C2F0,
        &&label_80C2C2F4,
        &&label_80C2C2F8,
        &&label_80C2C2FC,
        &&label_80C2C300,
        &&label_80C2C304,
        &&label_80C2C308,
        &&label_80C2C30C,
        &&label_80C2C310,
        &&label_80C2C314,
        &&label_80C2C318,
        &&label_80C2C31C,
        &&label_80C2C320,
        &&label_80C2C324,
        &&label_80C2C328,
        &&label_80C2C32C,
        &&label_80C2C330,
        &&label_80C2C334,
        &&label_80C2C338,
        &&label_80C2C33C,
        &&label_80C2C340,
        &&label_80C2C344,
        &&label_80C2C348,
        &&label_80C2C34C,
        &&label_80C2C350,
        &&label_80C2C354,
        &&label_80C2C358,
        &&label_80C2C35C,
        &&label_80C2C360,
        &&label_80C2C364,
        &&label_80C2C368,
        &&label_80C2C36C,
        &&label_80C2C370,
        &&label_80C2C374,
        &&label_80C2C378,
        &&label_80C2C37C,
        &&label_80C2C380,
        &&label_80C2C384,
        &&label_80C2C388,
        &&label_80C2C38C,
        &&label_80C2C390,
        &&label_80C2C394,
        &&label_80C2C398,
        &&label_80C2C39C,
        &&label_80C2C3A0,
        &&label_80C2C3A4,
        &&label_80C2C3A8,
        &&label_80C2C3AC,
        &&label_80C2C3B0,
        &&label_80C2C3B4,
        &&label_80C2C3B8,
        &&label_80C2C3BC,
        &&label_80C2C3C0,
        &&label_80C2C3C4,
        &&label_80C2C3C8,
        &&label_80C2C3CC,
        &&label_80C2C3D0,
        &&label_80C2C3D4,
        &&label_80C2C3D8,
        &&label_80C2C3DC,
        &&label_80C2C3E0,
        &&label_80C2C3E4,
        &&label_80C2C3E8,
        &&label_80C2C3EC,
        &&label_80C2C3F0,
        &&label_80C2C3F4,
        &&label_80C2C3F8,
        &&label_80C2C3FC,
        &&label_80C2C400,
        &&label_80C2C404,
        &&label_80C2C408,
        &&label_80C2C40C,
        &&label_80C2C410,
        &&label_80C2C414,
        &&label_80C2C418,
        &&label_80C2C41C,
        &&label_80C2C420,
        &&label_80C2C424,
        &&label_80C2C428,
        &&label_80C2C42C,
        &&label_80C2C430,
        &&label_80C2C434,
        &&label_80C2C438,
        &&label_80C2C43C,
        &&label_80C2C440,
        &&label_80C2C444,
        &&label_80C2C448,
        &&label_80C2C44C,
        &&label_80C2C450,
        &&label_80C2C454,
        &&label_80C2C458,
        &&label_80C2C45C,
        &&label_80C2C460,
        &&label_80C2C464,
        &&label_80C2C468,
        &&label_80C2C46C,
        &&label_80C2C470,
        &&label_80C2C474,
        &&label_80C2C478,
        &&label_80C2C47C,
        &&label_80C2C480,
        &&label_80C2C484,
        &&label_80C2C488,
        &&label_80C2C48C,
        &&label_80C2C490,
        &&label_80C2C494,
        &&label_80C2C498,
        &&label_80C2C49C,
        &&label_80C2C4A0,
        &&label_80C2C4A4,
        &&label_80C2C4A8,
        &&label_80C2C4AC,
        &&label_80C2C4B0,
        &&label_80C2C4B4,
        &&label_80C2C4B8,
        &&label_80C2C4BC,
        &&label_80C2C4C0,
        &&label_80C2C4C4,
        &&label_80C2C4C8,
        &&label_80C2C4CC,
        &&label_80C2C4D0,
        &&label_80C2C4D4,
        &&label_80C2C4D8,
        &&label_80C2C4DC,
        &&label_80C2C4E0,
        &&label_80C2C4E4,
        &&label_80C2C4E8,
        &&label_80C2C4EC,
        &&label_80C2C4F0,
        &&label_80C2C4F4,
        &&label_80C2C4F8,
        &&label_80C2C4FC,
        &&label_80C2C500,
        &&label_80C2C504,
        &&label_80C2C508,
        &&label_80C2C50C,
        &&label_80C2C510,
        &&label_80C2C514,
        &&label_80C2C518,
        &&label_80C2C51C,
        &&label_80C2C520,
        &&label_80C2C524,
        &&label_80C2C528,
        &&label_80C2C52C,
        &&label_80C2C530,
        &&label_80C2C534,
        &&label_80C2C538,
        &&label_80C2C53C,
        &&label_80C2C540,
        &&label_80C2C544,
        &&label_80C2C548,
        &&label_80C2C54C,
        &&label_80C2C550,
        &&label_80C2C554,
        &&label_80C2C558,
        &&label_80C2C55C,
        &&label_80C2C560,
        &&label_80C2C564,
        &&label_80C2C568,
        &&label_80C2C56C,
        &&label_80C2C570,
        &&label_80C2C574,
        &&label_80C2C578,
        &&label_80C2C57C,
        &&label_80C2C580,
        &&label_80C2C584,
        &&label_80C2C588,
        &&label_80C2C58C,
        &&label_80C2C590,
        &&label_80C2C594,
        &&label_80C2C598,
        &&label_80C2C59C,
        &&label_80C2C5A0,
        &&label_80C2C5A4,
        &&label_80C2C5A8,
        &&label_80C2C5AC,
        &&label_80C2C5B0,
        &&label_80C2C5B4,
        &&label_80C2C5B8,
        &&label_80C2C5BC,
        &&label_80C2C5C0,
        &&label_80C2C5C4,
        &&label_80C2C5C8,
        &&label_80C2C5CC,
        &&label_80C2C5D0,
        &&label_80C2C5D4,
        &&label_80C2C5D8,
        &&label_80C2C5DC,
        &&label_80C2C5E0,
        &&label_80C2C5E4,
        &&label_80C2C5E8,
        &&label_80C2C5EC,
        &&label_80C2C5F0,
        &&label_80C2C5F4,
        &&label_80C2C5F8,
        &&label_80C2C5FC,
        &&label_80C2C600,
        &&label_80C2C604,
        &&label_80C2C608,
        &&label_80C2C60C,
        &&label_80C2C610,
        &&label_80C2C614,
        &&label_80C2C618,
        &&label_80C2C61C,
        &&label_80C2C620,
        &&label_80C2C624,
        &&label_80C2C628,
        &&label_80C2C62C,
        &&label_80C2C630,
        &&label_80C2C634,
        &&label_80C2C638,
        &&label_80C2C63C,
        &&label_80C2C640,
        &&label_80C2C644,
        &&label_80C2C648,
        &&label_80C2C64C,
        &&label_80C2C650,
        &&label_80C2C654,
        &&label_80C2C658,
        &&label_80C2C65C,
        &&label_80C2C660,
        &&label_80C2C664,
        &&label_80C2C668,
        &&label_80C2C66C,
        &&label_80C2C670,
        &&label_80C2C674,
        &&label_80C2C678,
        &&label_80C2C67C,
        &&label_80C2C680,
        &&label_80C2C684,
        &&label_80C2C688,
        &&label_80C2C68C,
        &&label_80C2C690,
        &&label_80C2C694,
        &&label_80C2C698,
        &&label_80C2C69C,
        &&label_80C2C6A0,
        &&label_80C2C6A4,
        &&label_80C2C6A8,
        &&label_80C2C6AC,
        &&label_80C2C6B0,
        &&label_80C2C6B4,
        &&label_80C2C6B8,
        &&label_80C2C6BC,
        &&label_80C2C6C0,
        &&label_80C2C6C4,
        &&label_80C2C6C8,
        &&label_80C2C6CC,
        &&label_80C2C6D0,
        &&label_80C2C6D4,
        &&label_80C2C6D8,
        &&label_80C2C6DC,
        &&label_80C2C6E0,
        &&label_80C2C6E4,
        &&label_80C2C6E8,
        &&label_80C2C6EC,
        &&label_80C2C6F0,
        &&label_80C2C6F4,
        &&label_80C2C6F8,
        &&label_80C2C6FC,
        &&label_80C2C700,
        &&label_80C2C704,
        &&label_80C2C708,
        &&label_80C2C70C,
        &&label_80C2C710,
        &&label_80C2C714,
        &&label_80C2C718,
        &&label_80C2C71C,
        &&label_80C2C720,
        &&label_80C2C724,
        &&label_80C2C728,
        &&label_80C2C72C,
        &&label_80C2C730,
        &&label_80C2C734,
        &&label_80C2C738,
        &&label_80C2C73C,
        &&label_80C2C740,
        &&label_80C2C744,
        &&label_80C2C748,
        &&label_80C2C74C,
        &&label_80C2C750,
        &&label_80C2C754,
        &&label_80C2C758,
        &&label_80C2C75C,
        &&label_80C2C760,
        &&label_80C2C764,
        &&label_80C2C768,
        &&label_80C2C76C,
        &&label_80C2C770,
        &&label_80C2C774,
        &&label_80C2C778,
        &&label_80C2C77C,
        &&label_80C2C780,
        &&label_80C2C784,
        &&label_80C2C788,
        &&label_80C2C78C,
        &&label_80C2C790,
        &&label_80C2C794,
        &&label_80C2C798,
        &&label_80C2C79C,
        &&label_80C2C7A0,
        &&label_80C2C7A4,
        &&label_80C2C7A8,
        &&label_80C2C7AC,
        &&label_80C2C7B0,
        &&label_80C2C7B4,
        &&label_80C2C7B8,
        &&label_80C2C7BC,
        &&label_80C2C7C0,
        &&label_80C2C7C4,
        &&label_80C2C7C8,
        &&label_80C2C7CC,
        &&label_80C2C7D0,
        &&label_80C2C7D4,
        &&label_80C2C7D8,
        &&label_80C2C7DC,
        &&label_80C2C7E0,
        &&label_80C2C7E4,
        &&label_80C2C7E8,
        &&label_80C2C7EC,
        &&label_80C2C7F0,
        &&label_80C2C7F4,
        &&label_80C2C7F8,
        &&label_80C2C7FC,
        &&label_80C2C800,
        &&label_80C2C804,
        &&label_80C2C808,
        &&label_80C2C80C,
        &&label_80C2C810,
        &&label_80C2C814,
        &&label_80C2C818,
        &&label_80C2C81C,
        &&label_80C2C820,
        &&label_80C2C824,
        &&label_80C2C828,
        &&label_80C2C82C,
        &&label_80C2C830,
        &&label_80C2C834,
        &&label_80C2C838,
        &&label_80C2C83C,
        &&label_80C2C840,
        &&label_80C2C844,
        &&label_80C2C848,
        &&label_80C2C84C,
        &&label_80C2C850,
        &&label_80C2C854,
        &&label_80C2C858,
        &&label_80C2C85C,
        &&label_80C2C860,
        &&label_80C2C864,
        &&label_80C2C868,
        &&label_80C2C86C,
        &&label_80C2C870,
        &&label_80C2C874,
        &&label_80C2C878,
        &&label_80C2C87C,
        &&label_80C2C880,
        &&label_80C2C884,
        &&label_80C2C888,
        &&label_80C2C88C,
        &&label_80C2C890,
        &&label_80C2C894,
        &&label_80C2C898,
        &&label_80C2C89C,
        &&label_80C2C8A0,
        &&label_80C2C8A4,
        &&label_80C2C8A8,
        &&label_80C2C8AC,
        &&label_80C2C8B0,
        &&label_80C2C8B4,
        &&label_80C2C8B8,
        &&label_80C2C8BC,
        &&label_80C2C8C0,
        &&label_80C2C8C4,
        &&label_80C2C8C8,
        &&label_80C2C8CC,
        &&label_80C2C8D0,
        &&label_80C2C8D4,
        &&label_80C2C8D8,
        &&label_80C2C8DC,
        &&label_80C2C8E0,
        &&label_80C2C8E4,
        &&label_80C2C8E8,
        &&label_80C2C8EC,
        &&label_80C2C8F0,
        &&label_80C2C8F4,
        &&label_80C2C8F8,
        &&label_80C2C8FC,
        &&label_80C2C900,
        &&label_80C2C904,
        &&label_80C2C908,
        &&label_80C2C90C,
        &&label_80C2C910,
        &&label_80C2C914,
        &&label_80C2C918,
        &&label_80C2C91C,
        &&label_80C2C920,
        &&label_80C2C924,
        &&label_80C2C928,
        &&label_80C2C92C,
        &&label_80C2C930,
        &&label_80C2C934,
        &&label_80C2C938,
        &&label_80C2C93C,
        &&label_80C2C940,
        &&label_80C2C944,
        &&label_80C2C948,
        &&label_80C2C94C,
        &&label_80C2C950,
        &&label_80C2C954,
        &&label_80C2C958,
        &&label_80C2C95C,
        &&label_80C2C960,
        &&label_80C2C964,
        &&label_80C2C968,
        &&label_80C2C96C,
        &&label_80C2C970,
        &&label_80C2C974,
        &&label_80C2C978,
        &&label_80C2C97C,
        &&label_80C2C980,
        &&label_80C2C984,
        &&label_80C2C988,
        &&label_80C2C98C,
        &&label_80C2C990,
        &&label_80C2C994,
        &&label_80C2C998,
        &&label_80C2C99C,
        &&label_80C2C9A0,
        &&label_80C2C9A4,
        &&label_80C2C9A8,
        &&label_80C2C9AC,
        &&label_80C2C9B0,
        &&label_80C2C9B4,
        &&label_80C2C9B8,
        &&label_80C2C9BC,
        &&label_80C2C9C0,
        &&label_80C2C9C4,
        &&label_80C2C9C8,
        &&label_80C2C9CC,
        &&label_80C2C9D0,
        &&label_80C2C9D4,
        &&label_80C2C9D8,
        &&label_80C2C9DC,
        &&label_80C2C9E0,
        &&label_80C2C9E4,
        &&label_80C2C9E8,
        &&label_80C2C9EC,
        &&label_80C2C9F0,
        &&label_80C2C9F4,
        &&label_80C2C9F8,
        &&label_80C2C9FC,
        &&label_80C2CA00,
        &&label_80C2CA04,
        &&label_80C2CA08,
        &&label_80C2CA0C,
        &&label_80C2CA10,
        &&label_80C2CA14,
        &&label_80C2CA18,
        &&label_80C2CA1C,
        &&label_80C2CA20,
        &&label_80C2CA24,
        &&label_80C2CA28,
        &&label_80C2CA2C,
        &&label_80C2CA30,
        &&label_80C2CA34,
        &&label_80C2CA38,
        &&label_80C2CA3C,
        &&label_80C2CA40,
        &&label_80C2CA44,
        &&label_80C2CA48,
        &&label_80C2CA4C,
        &&label_80C2CA50,
        &&label_80C2CA54,
        &&label_80C2CA58,
        &&label_80C2CA5C,
        &&label_80C2CA60,
        &&label_80C2CA64,
        &&label_80C2CA68,
        &&label_80C2CA6C,
        &&label_80C2CA70,
        &&label_80C2CA74,
        &&label_80C2CA78,
        &&label_80C2CA7C,
        &&label_80C2CA80,
        &&label_80C2CA84,
        &&label_80C2CA88,
        &&label_80C2CA8C,
        &&label_80C2CA90,
        &&label_80C2CA94,
        &&label_80C2CA98,
        &&label_80C2CA9C,
        &&label_80C2CAA0,
        &&label_80C2CAA4,
        &&label_80C2CAA8,
        &&label_80C2CAAC,
        &&label_80C2CAB0,
        &&label_80C2CAB4,
        &&label_80C2CAB8,
        &&label_80C2CABC,
        &&label_80C2CAC0,
        &&label_80C2CAC4,
        &&label_80C2CAC8,
        &&label_80C2CACC,
        &&label_80C2CAD0,
        &&label_80C2CAD4,
        &&label_80C2CAD8,
        &&label_80C2CADC,
        &&label_80C2CAE0,
        &&label_80C2CAE4,
        &&label_80C2CAE8,
        &&label_80C2CAEC,
        &&label_80C2CAF0,
        &&label_80C2CAF4,
        &&label_80C2CAF8,
        &&label_80C2CAFC,
        &&label_80C2CB00,
        &&label_80C2CB04,
        &&label_80C2CB08,
        &&label_80C2CB0C,
        &&label_80C2CB10,
        &&label_80C2CB14,
        &&label_80C2CB18,
        &&label_80C2CB1C,
        &&label_80C2CB20,
        &&label_80C2CB24,
        &&label_80C2CB28,
        &&label_80C2CB2C,
        &&label_80C2CB30,
        &&label_80C2CB34,
        &&label_80C2CB38,
        &&label_80C2CB3C,
        &&label_80C2CB40,
        &&label_80C2CB44,
        &&label_80C2CB48,
        &&label_80C2CB4C,
        &&label_80C2CB50,
        &&label_80C2CB54,
        &&label_80C2CB58,
        &&label_80C2CB5C,
        &&label_80C2CB60,
        &&label_80C2CB64,
        &&label_80C2CB68,
        &&label_80C2CB6C,
        &&label_80C2CB70,
        &&label_80C2CB74,
        &&label_80C2CB78,
        &&label_80C2CB7C,
        &&label_80C2CB80,
        &&label_80C2CB84,
        &&label_80C2CB88,
        &&label_80C2CB8C,
        &&label_80C2CB90,
        &&label_80C2CB94,
        &&label_80C2CB98,
        &&label_80C2CB9C,
        &&label_80C2CBA0,
        &&label_80C2CBA4,
        &&label_80C2CBA8,
        &&label_80C2CBAC,
        &&label_80C2CBB0,
        &&label_80C2CBB4,
        &&label_80C2CBB8,
        &&label_80C2CBBC,
        &&label_80C2CBC0,
        &&label_80C2CBC4,
        &&label_80C2CBC8,
        &&label_80C2CBCC,
        &&label_80C2CBD0,
        &&label_80C2CBD4,
        &&label_80C2CBD8,
        &&label_80C2CBDC,
        &&label_80C2CBE0,
        &&label_80C2CBE4,
        &&label_80C2CBE8,
        &&label_80C2CBEC,
        &&label_80C2CBF0,
        &&label_80C2CBF4,
        &&label_80C2CBF8,
        &&label_80C2CBFC,
        &&label_80C2CC00,
        &&label_80C2CC04,
        &&label_80C2CC08,
        &&label_80C2CC0C,
        &&label_80C2CC10,
        &&label_80C2CC14,
        &&label_80C2CC18,
        &&label_80C2CC1C,
        &&label_80C2CC20,
        &&label_80C2CC24,
        &&label_80C2CC28,
        &&label_80C2CC2C,
        &&label_80C2CC30,
        &&label_80C2CC34,
        &&label_80C2CC38,
        &&label_80C2CC3C,
        &&label_80C2CC40,
        &&label_80C2CC44,
        &&label_80C2CC48,
        &&label_80C2CC4C,
        &&label_80C2CC50,
        &&label_80C2CC54,
        &&label_80C2CC58,
        &&label_80C2CC5C,
        &&label_80C2CC60,
        &&label_80C2CC64,
        &&label_80C2CC68,
        &&label_80C2CC6C,
        &&label_80C2CC70,
        &&label_80C2CC74,
        &&label_80C2CC78,
        &&label_80C2CC7C,
        &&label_80C2CC80,
        &&label_80C2CC84,
        &&label_80C2CC88,
        &&label_80C2CC8C,
        &&label_80C2CC90,
        &&label_80C2CC94,
        &&label_80C2CC98,
        &&label_80C2CC9C,
        &&label_80C2CCA0,
        &&label_80C2CCA4,
        &&label_80C2CCA8,
        &&label_80C2CCAC,
        &&label_80C2CCB0,
        &&label_80C2CCB4,
        &&label_80C2CCB8,
        &&label_80C2CCBC,
        &&label_80C2CCC0,
        &&label_80C2CCC4,
        &&label_80C2CCC8,
        &&label_80C2CCCC,
        &&label_80C2CCD0,
        &&label_80C2CCD4,
        &&label_80C2CCD8,
        &&label_80C2CCDC,
        &&label_80C2CCE0,
        &&label_80C2CCE4,
        &&label_80C2CCE8,
        &&label_80C2CCEC,
        &&label_80C2CCF0,
        &&label_80C2CCF4,
        &&label_80C2CCF8,
        &&label_80C2CCFC,
        &&label_80C2CD00,
        &&label_80C2CD04,
        &&label_80C2CD08,
        &&label_80C2CD0C,
        &&label_80C2CD10,
        &&label_80C2CD14,
        &&label_80C2CD18,
        &&label_80C2CD1C,
        &&label_80C2CD20,
        &&label_80C2CD24,
        &&label_80C2CD28,
        &&label_80C2CD2C,
        &&label_80C2CD30,
        &&label_80C2CD34,
        &&label_80C2CD38,
        &&label_80C2CD3C,
        &&label_80C2CD40,
        &&label_80C2CD44,
        &&label_80C2CD48,
        &&label_80C2CD4C,
        &&label_80C2CD50,
        &&label_80C2CD54,
        &&label_80C2CD58,
        &&label_80C2CD5C,
        &&label_80C2CD60,
        &&label_80C2CD64,
        &&label_80C2CD68,
        &&label_80C2CD6C,
        &&label_80C2CD70,
        &&label_80C2CD74,
        &&label_80C2CD78,
        &&label_80C2CD7C,
        &&label_80C2CD80,
        &&label_80C2CD84,
        &&label_80C2CD88,
        &&label_80C2CD8C,
        &&label_80C2CD90,
        &&label_80C2CD94,
        &&label_80C2CD98,
        &&label_80C2CD9C,
        &&label_80C2CDA0,
        &&label_80C2CDA4,
        &&label_80C2CDA8,
        &&label_80C2CDAC,
        &&label_80C2CDB0,
        &&label_80C2CDB4,
        &&label_80C2CDB8,
        &&label_80C2CDBC,
        &&label_80C2CDC0,
        &&label_80C2CDC4,
        &&label_80C2CDC8,
        &&label_80C2CDCC,
        &&label_80C2CDD0,
        &&label_80C2CDD4,
        &&label_80C2CDD8,
        &&label_80C2CDDC,
        &&label_80C2CDE0,
        &&label_80C2CDE4,
        &&label_80C2CDE8,
        &&label_80C2CDEC,
        &&label_80C2CDF0,
        &&label_80C2CDF4,
        &&label_80C2CDF8,
        &&label_80C2CDFC,
        &&label_80C2CE00,
        &&label_80C2CE04,
        &&label_80C2CE08,
        &&label_80C2CE0C,
        &&label_80C2CE10,
        &&label_80C2CE14,
        &&label_80C2CE18,
        &&label_80C2CE1C,
        &&label_80C2CE20,
        &&label_80C2CE24,
        &&label_80C2CE28,
        &&label_80C2CE2C,
        &&label_80C2CE30,
        &&label_80C2CE34,
        &&label_80C2CE38,
        &&label_80C2CE3C,
        &&label_80C2CE40,
        &&label_80C2CE44,
        &&label_80C2CE48,
        &&label_80C2CE4C,
        &&label_80C2CE50,
        &&label_80C2CE54,
        &&label_80C2CE58,
        &&label_80C2CE5C,
        &&label_80C2CE60,
        &&label_80C2CE64,
        &&label_80C2CE68,
        &&label_80C2CE6C,
        &&label_80C2CE70,
        &&label_80C2CE74,
        &&label_80C2CE78,
        &&label_80C2CE7C,
        &&label_80C2CE80,
        &&label_80C2CE84,
        &&label_80C2CE88,
        &&label_80C2CE8C,
        &&label_80C2CE90,
        &&label_80C2CE94,
        &&label_80C2CE98,
        &&label_80C2CE9C,
        &&label_80C2CEA0,
        &&label_80C2CEA4,
        &&label_80C2CEA8,
        &&label_80C2CEAC,
        &&label_80C2CEB0,
        &&label_80C2CEB4,
        &&label_80C2CEB8,
        &&label_80C2CEBC,
        &&label_80C2CEC0,
        &&label_80C2CEC4,
        &&label_80C2CEC8,
        &&label_80C2CECC,
        &&label_80C2CED0,
        &&label_80C2CED4,
        &&label_80C2CED8,
        &&label_80C2CEDC,
        &&label_80C2CEE0,
        &&label_80C2CEE4,
        &&label_80C2CEE8,
        &&label_80C2CEEC,
        &&label_80C2CEF0,
        &&label_80C2CEF4,
        &&label_80C2CEF8,
        &&label_80C2CEFC,
        &&label_80C2CF00,
        &&label_80C2CF04,
        &&label_80C2CF08,
        &&label_80C2CF0C,
        &&label_80C2CF10,
        &&label_80C2CF14,
        &&label_80C2CF18,
        &&label_80C2CF1C,
        &&label_80C2CF20,
        &&label_80C2CF24,
        &&label_80C2CF28,
        &&label_80C2CF2C,
        &&label_80C2CF30,
        &&label_80C2CF34,
        &&label_80C2CF38,
        &&label_80C2CF3C,
        &&label_80C2CF40,
        &&label_80C2CF44,
        &&label_80C2CF48,
        &&label_80C2CF4C,
        &&label_80C2CF50,
        &&label_80C2CF54,
        &&label_80C2CF58,
        &&label_80C2CF5C,
        &&label_80C2CF60,
        &&label_80C2CF64,
        &&label_80C2CF68,
        &&label_80C2CF6C,
        &&label_80C2CF70,
        &&label_80C2CF74,
        &&label_80C2CF78,
        &&label_80C2CF7C,
        &&label_80C2CF80,
        &&label_80C2CF84,
        &&label_80C2CF88,
        &&label_80C2CF8C,
        &&label_80C2CF90,
        &&label_80C2CF94,
        &&label_80C2CF98,
        &&label_80C2CF9C,
        &&label_80C2CFA0,
        &&label_80C2CFA4,
        &&label_80C2CFA8,
        &&label_80C2CFAC,
        &&label_80C2CFB0,
        &&label_80C2CFB4,
        &&label_80C2CFB8,
        &&label_80C2CFBC,
        &&label_80C2CFC0,
        &&label_80C2CFC4,
        &&label_80C2CFC8,
        &&label_80C2CFCC,
        &&label_80C2CFD0,
        &&label_80C2CFD4,
        &&label_80C2CFD8,
        &&label_80C2CFDC,
        &&label_80C2CFE0,
        &&label_80C2CFE4,
        &&label_80C2CFE8,
        &&label_80C2CFEC,
        &&label_80C2CFF0,
        &&label_80C2CFF4,
        &&label_80C2CFF8,
        &&label_80C2CFFC,
        &&label_80C2D000,
        &&label_80C2D004,
        &&label_80C2D008,
        &&label_80C2D00C,
        &&label_80C2D010,
        &&label_80C2D014,
        &&label_80C2D018,
        &&label_80C2D01C,
        &&label_80C2D020,
        &&label_80C2D024,
        &&label_80C2D028,
        &&label_80C2D02C,
        &&label_80C2D030,
        &&label_80C2D034,
        &&label_80C2D038,
        &&label_80C2D03C,
        &&label_80C2D040,
        &&label_80C2D044,
        &&label_80C2D048,
        &&label_80C2D04C,
        &&label_80C2D050,
        &&label_80C2D054,
        &&label_80C2D058,
        &&label_80C2D05C,
        &&label_80C2D060,
        &&label_80C2D064,
        &&label_80C2D068,
        &&label_80C2D06C,
        &&label_80C2D070,
        &&label_80C2D074,
        &&label_80C2D078,
        &&label_80C2D07C,
        &&label_80C2D080,
        &&label_80C2D084,
        &&label_80C2D088,
        &&label_80C2D08C,
        &&label_80C2D090,
        &&label_80C2D094,
        &&label_80C2D098,
        &&label_80C2D09C,
        &&label_80C2D0A0,
        &&label_80C2D0A4,
        &&label_80C2D0A8,
        &&label_80C2D0AC,
        &&label_80C2D0B0,
        &&label_80C2D0B4,
        &&label_80C2D0B8,
        &&label_80C2D0BC,
        &&label_80C2D0C0,
        &&label_80C2D0C4,
        &&label_80C2D0C8,
        &&label_80C2D0CC,
        &&label_80C2D0D0,
        &&label_80C2D0D4,
        &&label_80C2D0D8,
        &&label_80C2D0DC,
        &&label_80C2D0E0,
        &&label_80C2D0E4,
        &&label_80C2D0E8,
        &&label_80C2D0EC,
        &&label_80C2D0F0,
        &&label_80C2D0F4,
        &&label_80C2D0F8,
        &&label_80C2D0FC,
        &&label_80C2D100,
        &&label_80C2D104,
        &&label_80C2D108,
        &&label_80C2D10C,
        &&label_80C2D110,
        &&label_80C2D114,
        &&label_80C2D118,
        &&label_80C2D11C,
        &&label_80C2D120,
        &&label_80C2D124,
        &&label_80C2D128,
        &&label_80C2D12C,
        &&label_80C2D130,
        &&label_80C2D134,
        &&label_80C2D138,
        &&label_80C2D13C,
        &&label_80C2D140,
        &&label_80C2D144,
        &&label_80C2D148,
        &&label_80C2D14C,
        &&label_80C2D150,
        &&label_80C2D154,
        &&label_80C2D158,
        &&label_80C2D15C,
        &&label_80C2D160,
        &&label_80C2D164,
        &&label_80C2D168,
        &&label_80C2D16C,
        &&label_80C2D170,
        &&label_80C2D174,
        &&label_80C2D178,
        &&label_80C2D17C,
        &&label_80C2D180,
        &&label_80C2D184,
        &&label_80C2D188,
        &&label_80C2D18C,
        &&label_80C2D190,
        &&label_80C2D194,
        &&label_80C2D198,
        &&label_80C2D19C,
        &&label_80C2D1A0,
        &&label_80C2D1A4,
        &&label_80C2D1A8,
        &&label_80C2D1AC,
        &&label_80C2D1B0,
        &&label_80C2D1B4,
        &&label_80C2D1B8,
        &&label_80C2D1BC,
        &&label_80C2D1C0,
        &&label_80C2D1C4,
        &&label_80C2D1C8,
        &&label_80C2D1CC,
        &&label_80C2D1D0,
        &&label_80C2D1D4,
        &&label_80C2D1D8,
        &&label_80C2D1DC,
        &&label_80C2D1E0,
        &&label_80C2D1E4,
        &&label_80C2D1E8,
        &&label_80C2D1EC,
        &&label_80C2D1F0,
        &&label_80C2D1F4,
        &&label_80C2D1F8,
        &&label_80C2D1FC,
        &&label_80C2D200,
        &&label_80C2D204,
        &&label_80C2D208,
        &&label_80C2D20C,
        &&label_80C2D210,
        &&label_80C2D214,
        &&label_80C2D218,
        &&label_80C2D21C,
        &&label_80C2D220,
        &&label_80C2D224,
        &&label_80C2D228,
        &&label_80C2D22C,
        &&label_80C2D230,
        &&label_80C2D234,
        &&label_80C2D238,
        &&label_80C2D23C,
        &&label_80C2D240,
        &&label_80C2D244,
        &&label_80C2D248,
        &&label_80C2D24C,
        &&label_80C2D250,
        &&label_80C2D254,
        &&label_80C2D258,
        &&label_80C2D25C,
        &&label_80C2D260,
        &&label_80C2D264,
        &&label_80C2D268,
        &&label_80C2D26C,
        &&label_80C2D270,
        &&label_80C2D274,
        &&label_80C2D278,
        &&label_80C2D27C,
        &&label_80C2D280,
        &&label_80C2D284,
        &&label_80C2D288,
        &&label_80C2D28C,
        &&label_80C2D290,
        &&label_80C2D294,
        &&label_80C2D298,
        &&label_80C2D29C,
        &&label_80C2D2A0,
        &&label_80C2D2A4,
        &&label_80C2D2A8,
        &&label_80C2D2AC,
        &&label_80C2D2B0,
        &&label_80C2D2B4,
        &&label_80C2D2B8,
        &&label_80C2D2BC,
        &&label_80C2D2C0,
        &&label_80C2D2C4,
        &&label_80C2D2C8,
        &&label_80C2D2CC,
        &&label_80C2D2D0,
        &&label_80C2D2D4,
        &&label_80C2D2D8,
        &&label_80C2D2DC,
        &&label_80C2D2E0,
        &&label_80C2D2E4,
        &&label_80C2D2E8,
        &&label_80C2D2EC,
        &&label_80C2D2F0,
        &&label_80C2D2F4,
        &&label_80C2D2F8,
        &&label_80C2D2FC,
        &&label_80C2D300,
        &&label_80C2D304,
        &&label_80C2D308,
        &&label_80C2D30C,
        &&label_80C2D310,
        &&label_80C2D314,
        &&label_80C2D318,
        &&label_80C2D31C,
        &&label_80C2D320,
        &&label_80C2D324,
        &&label_80C2D328,
        &&label_80C2D32C,
        &&label_80C2D330,
        &&label_80C2D334,
        &&label_80C2D338,
        &&label_80C2D33C,
        &&label_80C2D340,
        &&label_80C2D344,
        &&label_80C2D348,
        &&label_80C2D34C,
        &&label_80C2D350,
        &&label_80C2D354,
        &&label_80C2D358,
        &&label_80C2D35C,
        &&label_80C2D360,
        &&label_80C2D364,
        &&label_80C2D368,
        &&label_80C2D36C,
        &&label_80C2D370,
        &&label_80C2D374,
        &&label_80C2D378,
        &&label_80C2D37C,
        &&label_80C2D380,
        &&label_80C2D384,
        &&label_80C2D388,
        &&label_80C2D38C,
        &&label_80C2D390,
        &&label_80C2D394,
        &&label_80C2D398,
        &&label_80C2D39C,
        &&label_80C2D3A0,
        &&label_80C2D3A4,
        &&label_80C2D3A8,
        &&label_80C2D3AC,
        &&label_80C2D3B0,
        &&label_80C2D3B4,
        &&label_80C2D3B8,
        &&label_80C2D3BC,
        &&label_80C2D3C0,
        &&label_80C2D3C4,
        &&label_80C2D3C8,
        &&label_80C2D3CC,
        &&label_80C2D3D0,
        &&label_80C2D3D4,
        &&label_80C2D3D8,
        &&label_80C2D3DC,
        &&label_80C2D3E0,
        &&label_80C2D3E4,
        &&label_80C2D3E8,
        &&label_80C2D3EC,
        &&label_80C2D3F0,
        &&label_80C2D3F4,
        &&label_80C2D3F8,
        &&label_80C2D3FC,
        &&label_80C2D400,
        &&label_80C2D404,
        &&label_80C2D408,
        &&label_80C2D40C,
        &&label_80C2D410,
        &&label_80C2D414,
        &&label_80C2D418,
        &&label_80C2D41C,
        &&label_80C2D420,
        &&label_80C2D424,
        &&label_80C2D428,
        &&label_80C2D42C,
        &&label_80C2D430,
        &&label_80C2D434,
        &&label_80C2D438,
        &&label_80C2D43C,
        &&label_80C2D440,
        &&label_80C2D444,
        &&label_80C2D448,
        &&label_80C2D44C,
        &&label_80C2D450,
        &&label_80C2D454,
        &&label_80C2D458,
        &&label_80C2D45C,
        &&label_80C2D460,
        &&label_80C2D464,
        &&label_80C2D468,
        &&label_80C2D46C,
        &&label_80C2D470,
        &&label_80C2D474,
        &&label_80C2D478,
        &&label_80C2D47C,
        &&label_80C2D480,
        &&label_80C2D484,
        &&label_80C2D488,
        &&label_80C2D48C,
        &&label_80C2D490,
        &&label_80C2D494,
        &&label_80C2D498,
        &&label_80C2D49C,
        &&label_80C2D4A0,
        &&label_80C2D4A4,
        &&label_80C2D4A8,
        &&label_80C2D4AC,
        &&label_80C2D4B0,
        &&label_80C2D4B4,
        &&label_80C2D4B8,
        &&label_80C2D4BC,
        &&label_80C2D4C0,
        &&label_80C2D4C4,
        &&label_80C2D4C8,
        &&label_80C2D4CC,
        &&label_80C2D4D0,
        &&label_80C2D4D4,
        &&label_80C2D4D8,
        &&label_80C2D4DC,
        &&label_80C2D4E0,
        &&label_80C2D4E4,
        &&label_80C2D4E8,
        &&label_80C2D4EC,
        &&label_80C2D4F0,
        &&label_80C2D4F4,
        &&label_80C2D4F8,
        &&label_80C2D4FC,
        &&label_80C2D500,
        &&label_80C2D504,
        &&label_80C2D508,
        &&label_80C2D50C,
        &&label_80C2D510,
        &&label_80C2D514,
        &&label_80C2D518,
        &&label_80C2D51C,
        &&label_80C2D520,
        &&label_80C2D524,
        &&label_80C2D528,
        &&label_80C2D52C,
        &&label_80C2D530,
        &&label_80C2D534,
        &&label_80C2D538,
        &&label_80C2D53C,
        &&label_80C2D540,
        &&label_80C2D544,
        &&label_80C2D548,
        &&label_80C2D54C,
        &&label_80C2D550,
        &&label_80C2D554,
        &&label_80C2D558,
        &&label_80C2D55C,
        &&label_80C2D560,
        &&label_80C2D564,
        &&label_80C2D568,
        &&label_80C2D56C,
        &&label_80C2D570,
        &&label_80C2D574,
        &&label_80C2D578,
        &&label_80C2D57C,
        &&label_80C2D580,
        &&label_80C2D584,
        &&label_80C2D588,
        &&label_80C2D58C,
        &&label_80C2D590,
        &&label_80C2D594,
        &&label_80C2D598,
        &&label_80C2D59C,
        &&label_80C2D5A0,
        &&label_80C2D5A4,
        &&label_80C2D5A8,
        &&label_80C2D5AC,
        &&label_80C2D5B0,
        &&label_80C2D5B4,
        &&label_80C2D5B8,
        &&label_80C2D5BC,
        &&label_80C2D5C0,
        &&label_80C2D5C4,
        &&label_80C2D5C8,
        &&label_80C2D5CC,
        &&label_80C2D5D0,
        &&label_80C2D5D4,
        &&label_80C2D5D8,
        &&label_80C2D5DC,
        &&label_80C2D5E0,
        &&label_80C2D5E4,
        &&label_80C2D5E8,
        &&label_80C2D5EC,
        &&label_80C2D5F0,
        &&label_80C2D5F4,
        &&label_80C2D5F8,
        &&label_80C2D5FC,
        &&label_80C2D600,
        &&label_80C2D604,
        &&label_80C2D608,
        &&label_80C2D60C,
        &&label_80C2D610,
        &&label_80C2D614,
        &&label_80C2D618,
        &&label_80C2D61C,
        &&label_80C2D620,
        &&label_80C2D624,
        &&label_80C2D628,
        &&label_80C2D62C,
        &&label_80C2D630,
        &&label_80C2D634,
        &&label_80C2D638,
        &&label_80C2D63C,
        &&label_80C2D640,
        &&label_80C2D644,
        &&label_80C2D648,
        &&label_80C2D64C,
        &&label_80C2D650,
        &&label_80C2D654,
        &&label_80C2D658,
        &&label_80C2D65C,
        &&label_80C2D660,
        &&label_80C2D664,
        &&label_80C2D668,
        &&label_80C2D66C,
        &&label_80C2D670,
        &&label_80C2D674,
        &&label_80C2D678,
        &&label_80C2D67C,
        &&label_80C2D680,
        &&label_80C2D684,
        &&label_80C2D688,
        &&label_80C2D68C,
        &&label_80C2D690,
        &&label_80C2D694,
        &&label_80C2D698,
        &&label_80C2D69C,
        &&label_80C2D6A0,
        &&label_80C2D6A4,
        &&label_80C2D6A8,
        &&label_80C2D6AC,
        &&label_80C2D6B0,
        &&label_80C2D6B4,
        &&label_80C2D6B8,
        &&label_80C2D6BC,
        &&label_80C2D6C0,
        &&label_80C2D6C4,
        &&label_80C2D6C8,
        &&label_80C2D6CC,
        &&label_80C2D6D0,
        &&label_80C2D6D4,
        &&label_80C2D6D8,
        &&label_80C2D6DC,
        &&label_80C2D6E0,
        &&label_80C2D6E4,
        &&label_80C2D6E8,
        &&label_80C2D6EC,
        &&label_80C2D6F0,
        &&label_80C2D6F4,
        &&label_80C2D6F8,
        &&label_80C2D6FC,
        &&label_80C2D700,
        &&label_80C2D704,
        &&label_80C2D708,
        &&label_80C2D70C,
        &&label_80C2D710,
        &&label_80C2D714,
        &&label_80C2D718,
        &&label_80C2D71C,
        &&label_80C2D720,
        &&label_80C2D724,
        &&label_80C2D728,
        &&label_80C2D72C,
        &&label_80C2D730,
        &&label_80C2D734,
        &&label_80C2D738,
        &&label_80C2D73C,
        &&label_80C2D740,
        &&label_80C2D744,
        &&label_80C2D748,
        &&label_80C2D74C,
        &&label_80C2D750,
        &&label_80C2D754,
        &&label_80C2D758,
        &&label_80C2D75C,
        &&label_80C2D760,
        &&label_80C2D764,
        &&label_80C2D768,
        &&label_80C2D76C,
        &&label_80C2D770,
        &&label_80C2D774,
        &&label_80C2D778,
        &&label_80C2D77C,
        &&label_80C2D780,
        &&label_80C2D784,
        &&label_80C2D788,
        &&label_80C2D78C,
        &&label_80C2D790,
        &&label_80C2D794,
        &&label_80C2D798,
        &&label_80C2D79C,
        &&label_80C2D7A0,
        &&label_80C2D7A4,
        &&label_80C2D7A8,
        &&label_80C2D7AC,
        &&label_80C2D7B0,
        &&label_80C2D7B4,
        &&label_80C2D7B8,
        &&label_80C2D7BC,
        &&label_80C2D7C0,
        &&label_80C2D7C4,
        &&label_80C2D7C8,
        &&label_80C2D7CC,
        &&label_80C2D7D0,
        &&label_80C2D7D4,
        &&label_80C2D7D8,
        &&label_80C2D7DC,
        &&label_80C2D7E0,
        &&label_80C2D7E4,
        &&label_80C2D7E8,
        &&label_80C2D7EC,
        &&label_80C2D7F0,
        &&label_80C2D7F4,
        &&label_80C2D7F8,
        &&label_80C2D7FC,
        &&label_80C2D800,
        &&label_80C2D804,
        &&label_80C2D808,
        &&label_80C2D80C,
        &&label_80C2D810,
        &&label_80C2D814,
        &&label_80C2D818,
        &&label_80C2D81C,
        &&label_80C2D820,
        &&label_80C2D824,
        &&label_80C2D828,
        &&label_80C2D82C,
        &&label_80C2D830,
        &&label_80C2D834,
        &&label_80C2D838,
        &&label_80C2D83C,
        &&label_80C2D840,
        &&label_80C2D844,
        &&label_80C2D848,
        &&label_80C2D84C,
        &&label_80C2D850,
        &&label_80C2D854,
        &&label_80C2D858,
        &&label_80C2D85C,
        &&label_80C2D860,
        &&label_80C2D864,
        &&label_80C2D868,
        &&label_80C2D86C,
        &&label_80C2D870,
        &&label_80C2D874,
        &&label_80C2D878,
        &&label_80C2D87C,
        &&label_80C2D880,
        &&label_80C2D884,
        &&label_80C2D888,
        &&label_80C2D88C,
        &&label_80C2D890,
        &&label_80C2D894,
        &&label_80C2D898,
        &&label_80C2D89C,
        &&label_80C2D8A0,
        &&label_80C2D8A4,
        &&label_80C2D8A8,
        &&label_80C2D8AC,
        &&label_80C2D8B0,
        &&label_80C2D8B4,
        &&label_80C2D8B8,
        &&label_80C2D8BC,
        &&label_80C2D8C0,
        &&label_80C2D8C4,
        &&label_80C2D8C8,
        &&label_80C2D8CC,
        &&label_80C2D8D0,
        &&label_80C2D8D4,
        &&label_80C2D8D8,
        &&label_80C2D8DC,
        &&label_80C2D8E0,
        &&label_80C2D8E4,
        &&label_80C2D8E8,
        &&label_80C2D8EC,
        &&label_80C2D8F0,
        &&label_80C2D8F4,
        &&label_80C2D8F8,
        &&label_80C2D8FC,
        &&label_80C2D900,
        &&label_80C2D904,
        &&label_80C2D908,
        &&label_80C2D90C,
        &&label_80C2D910,
        &&label_80C2D914,
        &&label_80C2D918,
        &&label_80C2D91C,
        &&label_80C2D920,
        &&label_80C2D924,
        &&label_80C2D928,
        &&label_80C2D92C,
        &&label_80C2D930,
        &&label_80C2D934,
        &&label_80C2D938,
        &&label_80C2D93C,
        &&label_80C2D940,
        &&label_80C2D944,
        &&label_80C2D948,
        &&label_80C2D94C,
        &&label_80C2D950,
        &&label_80C2D954,
        &&label_80C2D958,
        &&label_80C2D95C,
        &&label_80C2D960,
        &&label_80C2D964,
        &&label_80C2D968,
        &&label_80C2D96C,
        &&label_80C2D970,
        &&label_80C2D974,
        &&label_80C2D978,
        &&label_80C2D97C,
        &&label_80C2D980,
        &&label_80C2D984,
        &&label_80C2D988,
        &&label_80C2D98C,
        &&label_80C2D990,
        &&label_80C2D994,
        &&label_80C2D998,
        &&label_80C2D99C,
        &&label_80C2D9A0,
        &&label_80C2D9A4,
        &&label_80C2D9A8,
        &&label_80C2D9AC,
        &&label_80C2D9B0,
        &&label_80C2D9B4,
        &&label_80C2D9B8,
        &&label_80C2D9BC,
        &&label_80C2D9C0,
        &&label_80C2D9C4,
        &&label_80C2D9C8,
        &&label_80C2D9CC,
        &&label_80C2D9D0,
        &&label_80C2D9D4,
        &&label_80C2D9D8,
        &&label_80C2D9DC,
        &&label_80C2D9E0,
        &&label_80C2D9E4,
        &&label_80C2D9E8,
        &&label_80C2D9EC,
        &&label_80C2D9F0,
        &&label_80C2D9F4,
        &&label_80C2D9F8,
        &&label_80C2D9FC,
        &&label_80C2DA00,
        &&label_80C2DA04,
        &&label_80C2DA08,
        &&label_80C2DA0C,
        &&label_80C2DA10,
        &&label_80C2DA14,
        &&label_80C2DA18,
        &&label_80C2DA1C,
        &&label_80C2DA20,
        &&label_80C2DA24,
        &&label_80C2DA28,
        &&label_80C2DA2C,
        &&label_80C2DA30,
        &&label_80C2DA34,
        &&label_80C2DA38,
        &&label_80C2DA3C,
        &&label_80C2DA40,
        &&label_80C2DA44,
        &&label_80C2DA48,
        &&label_80C2DA4C,
        &&label_80C2DA50,
        &&label_80C2DA54,
        &&label_80C2DA58,
        &&label_80C2DA5C,
        &&label_80C2DA60,
        &&label_80C2DA64,
        &&label_80C2DA68,
        &&label_80C2DA6C,
        &&label_80C2DA70,
        &&label_80C2DA74,
        &&label_80C2DA78,
        &&label_80C2DA7C,
        &&label_80C2DA80,
        &&label_80C2DA84,
        &&label_80C2DA88,
        &&label_80C2DA8C,
        &&label_80C2DA90,
        &&label_80C2DA94,
        &&label_80C2DA98,
        &&label_80C2DA9C,
        &&label_80C2DAA0,
        &&label_80C2DAA4,
        &&label_80C2DAA8,
        &&label_80C2DAAC,
        &&label_80C2DAB0,
        &&label_80C2DAB4,
        &&label_80C2DAB8,
        &&label_80C2DABC,
        &&label_80C2DAC0,
        &&label_80C2DAC4,
        &&label_80C2DAC8,
        &&label_80C2DACC,
        &&label_80C2DAD0,
        &&label_80C2DAD4,
        &&label_80C2DAD8,
        &&label_80C2DADC,
        &&label_80C2DAE0,
        &&label_80C2DAE4,
        &&label_80C2DAE8,
        &&label_80C2DAEC,
        &&label_80C2DAF0,
        &&label_80C2DAF4,
        &&label_80C2DAF8,
        &&label_80C2DAFC,
        &&label_80C2DB00,
        &&label_80C2DB04,
        &&label_80C2DB08,
        &&label_80C2DB0C,
        &&label_80C2DB10,
        &&label_80C2DB14,
        &&label_80C2DB18,
        &&label_80C2DB1C,
        &&label_80C2DB20,
        &&label_80C2DB24,
        &&label_80C2DB28,
        &&label_80C2DB2C,
        &&label_80C2DB30,
        &&label_80C2DB34,
        &&label_80C2DB38,
        &&label_80C2DB3C,
        &&label_80C2DB40,
        &&label_80C2DB44,
        &&label_80C2DB48,
        &&label_80C2DB4C,
        &&label_80C2DB50,
        &&label_80C2DB54,
        &&label_80C2DB58,
        &&label_80C2DB5C,
        &&label_80C2DB60,
        &&label_80C2DB64,
        &&label_80C2DB68,
        &&label_80C2DB6C,
        &&label_80C2DB70,
        &&label_80C2DB74,
        &&label_80C2DB78,
        &&label_80C2DB7C,
        &&label_80C2DB80,
        &&label_80C2DB84,
        &&label_80C2DB88,
        &&label_80C2DB8C,
        &&label_80C2DB90,
        &&label_80C2DB94,
        &&label_80C2DB98,
        &&label_80C2DB9C,
        &&label_80C2DBA0,
        &&label_80C2DBA4,
        &&label_80C2DBA8,
        &&label_80C2DBAC,
        &&label_80C2DBB0,
        &&label_80C2DBB4,
        &&label_80C2DBB8,
        &&label_80C2DBBC,
        &&label_80C2DBC0,
        &&label_80C2DBC4,
        &&label_80C2DBC8,
        &&label_80C2DBCC,
        &&label_80C2DBD0,
        &&label_80C2DBD4,
        &&label_80C2DBD8,
        &&label_80C2DBDC,
        &&label_80C2DBE0,
        &&label_80C2DBE4,
        &&label_80C2DBE8,
        &&label_80C2DBEC,
        &&label_80C2DBF0,
        &&label_80C2DBF4,
        &&label_80C2DBF8,
        &&label_80C2DBFC,
        &&label_80C2DC00,
        &&label_80C2DC04,
        &&label_80C2DC08,
        &&label_80C2DC0C,
        &&label_80C2DC10,
        &&label_80C2DC14,
        &&label_80C2DC18,
        &&label_80C2DC1C,
        &&label_80C2DC20,
        &&label_80C2DC24,
        &&label_80C2DC28,
        &&label_80C2DC2C,
        &&label_80C2DC30,
        &&label_80C2DC34,
        &&label_80C2DC38,
        &&label_80C2DC3C,
        &&label_80C2DC40,
        &&label_80C2DC44,
        &&label_80C2DC48,
        &&label_80C2DC4C,
        &&label_80C2DC50,
        &&label_80C2DC54,
        &&label_80C2DC58,
        &&label_80C2DC5C,
        &&label_80C2DC60,
        &&label_80C2DC64,
        &&label_80C2DC68,
        &&label_80C2DC6C,
        &&label_80C2DC70,
        &&label_80C2DC74,
        &&label_80C2DC78,
        &&label_80C2DC7C,
        &&label_80C2DC80,
        &&label_80C2DC84,
        &&label_80C2DC88,
        &&label_80C2DC8C,
        &&label_80C2DC90,
        &&label_80C2DC94,
        &&label_80C2DC98,
        &&label_80C2DC9C,
        &&label_80C2DCA0,
        &&label_80C2DCA4,
        &&label_80C2DCA8,
        &&label_80C2DCAC,
        &&label_80C2DCB0,
        &&label_80C2DCB4,
        &&label_80C2DCB8,
        &&label_80C2DCBC,
        &&label_80C2DCC0,
        &&label_80C2DCC4,
        &&label_80C2DCC8,
        &&label_80C2DCCC,
        &&label_80C2DCD0,
        &&label_80C2DCD4,
        &&label_80C2DCD8,
        &&label_80C2DCDC,
        &&label_80C2DCE0,
        &&label_80C2DCE4,
        &&label_80C2DCE8,
        &&label_80C2DCEC,
        &&label_80C2DCF0,
        &&label_80C2DCF4,
        &&label_80C2DCF8,
        &&label_80C2DCFC,
        &&label_80C2DD00,
        &&label_80C2DD04,
        &&label_80C2DD08,
        &&label_80C2DD0C,
        &&label_80C2DD10,
        &&label_80C2DD14,
        &&label_80C2DD18,
        &&label_80C2DD1C,
        &&label_80C2DD20,
        &&label_80C2DD24,
        &&label_80C2DD28,
        &&label_80C2DD2C,
        &&label_80C2DD30,
        &&label_80C2DD34,
        &&label_80C2DD38,
        &&label_80C2DD3C,
        &&label_80C2DD40,
        &&label_80C2DD44,
        &&label_80C2DD48,
        &&label_80C2DD4C,
        &&label_80C2DD50,
        &&label_80C2DD54,
        &&label_80C2DD58,
        &&label_80C2DD5C,
        &&label_80C2DD60,
        &&label_80C2DD64,
        &&label_80C2DD68,
        &&label_80C2DD6C,
        &&label_80C2DD70,
        &&label_80C2DD74,
        &&label_80C2DD78,
        &&label_80C2DD7C,
        &&label_80C2DD80,
        &&label_80C2DD84,
        &&label_80C2DD88,
        &&label_80C2DD8C,
        &&label_80C2DD90,
        &&label_80C2DD94,
        &&label_80C2DD98,
        &&label_80C2DD9C,
        &&label_80C2DDA0,
        &&label_80C2DDA4,
        &&label_80C2DDA8,
        &&label_80C2DDAC,
        &&label_80C2DDB0,
        &&label_80C2DDB4,
        &&label_80C2DDB8,
        &&label_80C2DDBC,
        &&label_80C2DDC0,
        &&label_80C2DDC4,
        &&label_80C2DDC8,
        &&label_80C2DDCC,
        &&label_80C2DDD0,
        &&label_80C2DDD4,
        &&label_80C2DDD8,
        &&label_80C2DDDC,
        &&label_80C2DDE0,
        &&label_80C2DDE4,
        &&label_80C2DDE8,
        &&label_80C2DDEC,
        &&label_80C2DDF0,
        &&label_80C2DDF4,
        &&label_80C2DDF8,
        &&label_80C2DDFC,
        &&label_80C2DE00,
        &&label_80C2DE04,
        &&label_80C2DE08,
        &&label_80C2DE0C,
        &&label_80C2DE10,
        &&label_80C2DE14,
        &&label_80C2DE18,
        &&label_80C2DE1C,
        &&label_80C2DE20,
        &&label_80C2DE24,
        &&label_80C2DE28,
        &&label_80C2DE2C
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80C2BD40u && pc <= 0x80C2DE2Cu && ((pc - 0x80C2BD40u) & 3u) == 0u)
            goto *pc_table_80C2BD40[(pc - 0x80C2BD40u) >> 2];
    }
    return;
label_80C2BD40:
    ctx->pc = 0x80C2BD40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 20u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2BD40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 20u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C2BD40: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BD44:
    ctx->pc = 0x80C2BD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C2BD44: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BD48:
    ctx->pc = 0x80C2BD48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C2BD48: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BD4C:
    ctx->pc = 0x80C2BD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C2BD4C: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2BD4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BD50:
    ctx->pc = 0x80C2BD50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C2BD50: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2BD50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80C2BD50u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BD54:
    ctx->pc = 0x80C2BD54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C2BD54: stfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2BD54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BD58:
    ctx->pc = 0x80C2BD58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2BD58: psq_st   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2BD58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80C2BD58u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BD5C:
    ctx->pc = 0x80C2BD5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2BD5C: stfd     f29, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2BD5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BD60:
    ctx->pc = 0x80C2BD60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2BD60: psq_st   f29, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2BD60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80C2BD60u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BD64:
    ctx->pc = 0x80C2BD64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2BD64: stw     r31, 12(r1)
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
label_80C2BD68:
    ctx->pc = 0x80C2BD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2BD68: stw     r30, 8(r1)
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
label_80C2BD6C:
    ctx->pc = 0x80C2BD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD6Cu)) return;
    // 80C2BD6C: fmr    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2BD6Cu)) return;
    ctx->fpr[29] = ctx->fpr[1];

label_80C2BD70:
    ctx->pc = 0x80C2BD70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD70u)) return;
    // 80C2BD70: fmr    f30, f2
    if (!ppc_fp_available_inline(ctx, 0x80C2BD70u)) return;
    ctx->fpr[30] = ctx->fpr[2];

label_80C2BD74:
    ctx->pc = 0x80C2BD74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD74u)) return;
    // 80C2BD74: fmr    f31, f3
    if (!ppc_fp_available_inline(ctx, 0x80C2BD74u)) return;
    ctx->fpr[31] = ctx->fpr[3];

label_80C2BD78:
    ctx->pc = 0x80C2BD78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD78u)) return;
    // 80C2BD78: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C2BD7C:
    ctx->pc = 0x80C2BD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD7Cu)) return;
    // 80C2BD7C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C2BD80:
    ctx->pc = 0x80C2BD80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD80u)) return;
    // 80C2BD80: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C2BD84:
    ctx->pc = 0x80C2BD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD84u)) return;
    // 80C2BD84: lis     r5, -32573
    ctx->gpr[5] = ((u32)(s32)(-32573) << 16);

label_80C2BD88:
    ctx->pc = 0x80C2BD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD88u)) return;
    // 80C2BD88: addi    r5, r5, -16384
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16384);

label_80C2BD8C:
    ctx->pc = 0x80C2BD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD8Cu)) return;
    // 80C2BD8C: bl      0x8050FD60
    {
            ctx->lr = 0x80C2BD90u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C2BD90:
    ctx->pc = 0x80C2BD90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2BD90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C2BD90: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2BD94:
    ctx->pc = 0x80C2BD94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD94u)) return;
    // 80C2BD94: addi    r4, r4, -4732
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4732);

label_80C2BD98:
    ctx->pc = 0x80C2BD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2BD98: stw     r3, 0(r4)
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
label_80C2BD9C:
    ctx->pc = 0x80C2BD9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BD9Cu)) return;
    // 80C2BD9C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_80C2BDA0:
    ctx->pc = 0x80C2BDA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDA0u)) return;
    // 80C2BDA0: bl      0x8050EF60
    {
            ctx->lr = 0x80C2BDA4u;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80C2BDA4:
    ctx->pc = 0x80C2BDA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2BDA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 1u;
    // 80C2BDA4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C2BDA8:
    ctx->pc = 0x80C2BDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDA8u)) return;
    // 80C2BDA8: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2BDAC:
    ctx->pc = 0x80C2BDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDACu)) return;
    // 80C2BDAC: addi    r3, r3, -4732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4732);

label_80C2BDB0:
    ctx->pc = 0x80C2BDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C2BDB0: lwz     r3, 0(r3)
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
label_80C2BDB4:
    ctx->pc = 0x80C2BDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C2BDB4: lwz     r4, 32(r3)
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
label_80C2BDB8:
    ctx->pc = 0x80C2BDB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C2BDB8: stw     r31, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BDBC:
    ctx->pc = 0x80C2BDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDBCu)) return;
    // 80C2BDBC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C2BDC0:
    ctx->pc = 0x80C2BDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C2BDC0: stb     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BDC4:
    ctx->pc = 0x80C2BDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C2BDC4: stfs     f29, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2BDC4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BDC8:
    ctx->pc = 0x80C2BDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C2BDC8: stfs     f30, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2BDC8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BDCC:
    ctx->pc = 0x80C2BDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2BDCC: stfs     f31, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2BDCCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BDD0:
    ctx->pc = 0x80C2BDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2BDD0: stw     r30, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BDD4:
    ctx->pc = 0x80C2BDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDD4u)) return;
    // 80C2BDD4: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2BDD8:
    ctx->pc = 0x80C2BDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDD8u)) return;
    // 80C2BDD8: addi    r3, r3, 25344
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25344);

label_80C2BDDC:
    ctx->pc = 0x80C2BDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2BDDC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2BDDCu)) return;
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
label_80C2BDE0:
    ctx->pc = 0x80C2BDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2BDE0: stfs     f0, 44(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2BDE0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BDE4:
    ctx->pc = 0x80C2BDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2BDE4: stfs     f0, 48(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2BDE4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BDE8:
    ctx->pc = 0x80C2BDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2BDE8: stfs     f0, 52(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2BDE8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BDEC:
    ctx->pc = 0x80C2BDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDECu)) return;
    // 80C2BDEC: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2BDF0:
    ctx->pc = 0x80C2BDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDF0u)) return;
    // 80C2BDF0: addi    r3, r3, 25348
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25348);

label_80C2BDF4:
    ctx->pc = 0x80C2BDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2BDF4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2BDF4u)) return;
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
label_80C2BDF8:
    ctx->pc = 0x80C2BDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2BDF8: stfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2BDF8u)) return;
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
label_80C2BDFC:
    ctx->pc = 0x80C2BDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BDFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2BDFC: lwz     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BE00:
    ctx->pc = 0x80C2BE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE00u)) return;
    // 80C2BE00: bl      0x805C5D1C
    {
            ctx->lr = 0x80C2BE04u;
            ctx->pc = 0x805C5D1Cu;
            return;
    }

label_80C2BE04:
    ctx->pc = 0x80C2BE04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2BE04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C2BE04: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BE08:
    ctx->pc = 0x80C2BE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE08u)) return;
    // 80C2BE08: li      r0, 153
    ctx->gpr[0] = (u32)(s32)(153);

label_80C2BE0C:
    ctx->pc = 0x80C2BE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2BE0C: stb     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BE10:
    ctx->pc = 0x80C2BE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2BE10: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2BE10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C2BE10u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BE14:
    ctx->pc = 0x80C2BE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2BE14: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2BE14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BE18:
    ctx->pc = 0x80C2BE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2BE18: psq_l   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2BE18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80C2BE18u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BE1C:
    ctx->pc = 0x80C2BE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2BE1C: lfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2BE1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BE20:
    ctx->pc = 0x80C2BE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2BE20: psq_l   f29, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2BE20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80C2BE20u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BE24:
    ctx->pc = 0x80C2BE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2BE24: lfd     f29, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2BE24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BE28:
    ctx->pc = 0x80C2BE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2BE28: lwz     r31, 12(r1)
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
label_80C2BE2C:
    ctx->pc = 0x80C2BE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2BE2C: lwz     r30, 8(r1)
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
label_80C2BE30:
    ctx->pc = 0x80C2BE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2BE30: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BE34:
    ctx->pc = 0x80C2BE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2BE34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2BE34: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BE38:
    ctx->pc = 0x80C2BE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE38u)) return;
    // 80C2BE38: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80C2BE3C:
    ctx->pc = 0x80C2BE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE3Cu)) return;
    // 80C2BE3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2BE40:
    ctx->pc = 0x80C2BE40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2BE40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2BE40: stwu     r1, -16(r1)
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
label_80C2BE44:
    ctx->pc = 0x80C2BE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2BE44: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BE48:
    ctx->pc = 0x80C2BE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2BE48: stw     r0, 20(r1)
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
label_80C2BE4C:
    ctx->pc = 0x80C2BE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2BE4C: stw     r31, 12(r1)
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
label_80C2BE50:
    ctx->pc = 0x80C2BE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE50u)) return;
    // 80C2BE50: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2BE54:
    ctx->pc = 0x80C2BE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE54u)) return;
    // 80C2BE54: addi    r3, r3, -4732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4732);

label_80C2BE58:
    ctx->pc = 0x80C2BE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2BE58: lwz     r3, 0(r3)
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
label_80C2BE5C:
    ctx->pc = 0x80C2BE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE5Cu)) return;
    // 80C2BE5C: cmplwi  r3, 0x0000
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

label_80C2BE60:
    ctx->pc = 0x80C2BE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE60u)) return;
    // 80C2BE60: bc    12, 2, 0x80C2BEAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2BEAC;
        }
    }

label_80C2BE64:
    ctx->pc = 0x80C2BE64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2BE64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2BE64: lwz     r3, 32(r3)
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
label_80C2BE68:
    ctx->pc = 0x80C2BE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2BE68: lwz     r31, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BE6C:
    ctx->pc = 0x80C2BE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2BE6C: lwz     r3, 0(r31)
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
label_80C2BE70:
    ctx->pc = 0x80C2BE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE70u)) return;
    // 80C2BE70: cmplwi  r3, 0x0000
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

label_80C2BE74:
    ctx->pc = 0x80C2BE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE74u)) return;
    // 80C2BE74: bc    12, 2, 0x80C2BE84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2BE84;
        }
    }

label_80C2BE78:
    ctx->pc = 0x80C2BE78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2BE78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2BE78: bl      0x8050F9F0
    {
            ctx->lr = 0x80C2BE7Cu;
            ctx->pc = 0x8050F9F0u;
            return;
    }

label_80C2BE7C:
    ctx->pc = 0x80C2BE7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2BE7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2BE7C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C2BE80:
    ctx->pc = 0x80C2BE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2BE80: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BE84:
    ctx->pc = 0x80C2BE84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2BE84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C2BE84: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2BE88:
    ctx->pc = 0x80C2BE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE88u)) return;
    // 80C2BE88: addi    r3, r3, -4732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4732);

label_80C2BE8C:
    ctx->pc = 0x80C2BE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2BE8C: lwz     r3, 0(r3)
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
label_80C2BE90:
    ctx->pc = 0x80C2BE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE90u)) return;
    // 80C2BE90: cmplwi  r3, 0x0000
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

label_80C2BE94:
    ctx->pc = 0x80C2BE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BE94u)) return;
    // 80C2BE94: bc    12, 2, 0x80C2BEAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2BEAC;
        }
    }

label_80C2BE98:
    ctx->pc = 0x80C2BE98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2BE98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2BE98: bl      0x8050F9E0
    {
            ctx->lr = 0x80C2BE9Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C2BE9C:
    ctx->pc = 0x80C2BE9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2BE9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C2BE9C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C2BEA0:
    ctx->pc = 0x80C2BEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BEA0u)) return;
    // 80C2BEA0: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2BEA4:
    ctx->pc = 0x80C2BEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BEA4u)) return;
    // 80C2BEA4: addi    r3, r3, -4732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4732);

label_80C2BEA8:
    ctx->pc = 0x80C2BEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BEA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2BEA8: stw     r0, 0(r3)
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
label_80C2BEAC:
    ctx->pc = 0x80C2BEACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2BEACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2BEAC: lwz     r31, 12(r1)
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
label_80C2BEB0:
    ctx->pc = 0x80C2BEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BEB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2BEB0: lwz     r0, 20(r1)
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
label_80C2BEB4:
    ctx->pc = 0x80C2BEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2BEB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2BEB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BEB8:
    ctx->pc = 0x80C2BEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BEB8u)) return;
    // 80C2BEB8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2BEBC:
    ctx->pc = 0x80C2BEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BEBCu)) return;
    // 80C2BEBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2BEC0:
    ctx->pc = 0x80C2BEC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 96u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2BEC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 96u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 95u : 0u;
    // 80C2BEC0: stwu     r1, -32(r1)
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
label_80C2BEC4:
    ctx->pc = 0x80C2BEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BEC4u)) return;
    // 80C2BEC4: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2BEC8:
    ctx->pc = 0x80C2BEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BEC8u)) return;
    // 80C2BEC8: addi    r4, r4, -4732
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4732);

label_80C2BECC:
    ctx->pc = 0x80C2BECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 92u : 0u;
    // 80C2BECC: lwz     r4, 0(r4)
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
label_80C2BED0:
    ctx->pc = 0x80C2BED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BED0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 91u : 0u;
    // 80C2BED0: lwz     r5, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BED4:
    ctx->pc = 0x80C2BED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 90u : 0u;
    // 80C2BED4: lwz     r6, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BED8:
    ctx->pc = 0x80C2BED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BED8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 89u : 0u;
    // 80C2BED8: lfs     f0, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2BED8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
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
label_80C2BEDC:
    ctx->pc = 0x80C2BEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BEDCu)) return;
    // 80C2BEDC: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2BEDCu)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_80C2BEE0:
    ctx->pc = 0x80C2BEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BEE0u)) return;
    // 80C2BEE0: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2BEE4:
    ctx->pc = 0x80C2BEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BEE4u)) return;
    // 80C2BEE4: addi    r4, r4, 25360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25360);

label_80C2BEE8:
    ctx->pc = 0x80C2BEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BEE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 85u : 0u;
    // 80C2BEE8: lfd     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2BEE8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BEEC:
    ctx->pc = 0x80C2BEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BEECu)) return;
    // 80C2BEEC: xoris   r4, r3, 0x8000
    ctx->gpr[4] = ctx->gpr[3] ^ (0x8000u << 16);

label_80C2BEF0:
    ctx->pc = 0x80C2BEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BEF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 83u : 0u;
    // 80C2BEF0: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BEF4:
    ctx->pc = 0x80C2BEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BEF4u)) return;
    // 80C2BEF4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80C2BEF8:
    ctx->pc = 0x80C2BEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BEF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 81u : 0u;
    // 80C2BEF8: stw     r0, 8(r1)
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
label_80C2BEFC:
    ctx->pc = 0x80C2BEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BEFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 80u : 0u;
    // 80C2BEFC: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2BEFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BF00:
    ctx->pc = 0x80C2BF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF00u)) return;
    // 80C2BF00: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x80C2BF00u)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_80C2BF04:
    ctx->pc = 0x80C2BF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80C2BF04u)) return;
    // 80C2BF04: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2BF04u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_80C2BF08:
    ctx->pc = 0x80C2BF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 61u : 0u;
    // 80C2BF08: stfs     f0, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2BF08u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BF0C:
    ctx->pc = 0x80C2BF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 60u : 0u;
    // 80C2BF0C: lfs     f0, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2BF0Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
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
label_80C2BF10:
    ctx->pc = 0x80C2BF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF10u)) return;
    // 80C2BF10: fsubs   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2BF10u)) return;
    ppc_fsubs(ctx, 1, 2, 0);

label_80C2BF14:
    ctx->pc = 0x80C2BF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 58u : 0u;
    // 80C2BF14: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BF18:
    ctx->pc = 0x80C2BF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 57u : 0u;
    // 80C2BF18: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BF1C:
    ctx->pc = 0x80C2BF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 56u : 0u;
    // 80C2BF1C: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2BF1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BF20:
    ctx->pc = 0x80C2BF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF20u)) return;
    // 80C2BF20: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x80C2BF20u)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_80C2BF24:
    ctx->pc = 0x80C2BF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80C2BF24u)) return;
    // 80C2BF24: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2BF24u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_80C2BF28:
    ctx->pc = 0x80C2BF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80C2BF28: stfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2BF28u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BF2C:
    ctx->pc = 0x80C2BF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80C2BF2C: lfs     f0, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2BF2Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
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
label_80C2BF30:
    ctx->pc = 0x80C2BF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF30u)) return;
    // 80C2BF30: fsubs   f1, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2BF30u)) return;
    ppc_fsubs(ctx, 1, 3, 0);

label_80C2BF34:
    ctx->pc = 0x80C2BF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80C2BF34: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BF38:
    ctx->pc = 0x80C2BF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80C2BF38: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BF3C:
    ctx->pc = 0x80C2BF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80C2BF3C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2BF3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BF40:
    ctx->pc = 0x80C2BF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF40u)) return;
    // 80C2BF40: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x80C2BF40u)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_80C2BF44:
    ctx->pc = 0x80C2BF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80C2BF44u)) return;
    // 80C2BF44: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2BF44u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_80C2BF48:
    ctx->pc = 0x80C2BF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2BF48: stfs     f0, 12(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2BF48u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BF4C:
    ctx->pc = 0x80C2BF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2BF4C: stw     r3, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BF50:
    ctx->pc = 0x80C2BF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF50u)) return;
    // 80C2BF50: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C2BF54:
    ctx->pc = 0x80C2BF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2BF54: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BF58:
    ctx->pc = 0x80C2BF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF58u)) return;
    // 80C2BF58: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2BF5C:
    ctx->pc = 0x80C2BF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF5Cu)) return;
    // 80C2BF5C: addi    r3, r3, 25352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25352);

label_80C2BF60:
    ctx->pc = 0x80C2BF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2BF60: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2BF60u)) return;
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
label_80C2BF64:
    ctx->pc = 0x80C2BF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2BF64: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2BF64u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BF68:
    ctx->pc = 0x80C2BF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2BF68: stfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2BF68u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BF6C:
    ctx->pc = 0x80C2BF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2BF6C: stfs     f0, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2BF6Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BF70:
    ctx->pc = 0x80C2BF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF70u)) return;
    // 80C2BF70: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80C2BF74:
    ctx->pc = 0x80C2BF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2BF74: stb     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BF78:
    ctx->pc = 0x80C2BF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF78u)) return;
    // 80C2BF78: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C2BF7C:
    ctx->pc = 0x80C2BF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF7Cu)) return;
    // 80C2BF7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2BF80:
    ctx->pc = 0x80C2BF80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 87u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2BF80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 87u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 86u : 0u;
    // 80C2BF80: stwu     r1, -16(r1)
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
label_80C2BF84:
    ctx->pc = 0x80C2BF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF84u)) return;
    // 80C2BF84: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2BF88:
    ctx->pc = 0x80C2BF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF88u)) return;
    // 80C2BF88: addi    r4, r4, -4732
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4732);

label_80C2BF8C:
    ctx->pc = 0x80C2BF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 83u : 0u;
    // 80C2BF8C: lwz     r4, 0(r4)
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
label_80C2BF90:
    ctx->pc = 0x80C2BF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 82u : 0u;
    // 80C2BF90: lwz     r5, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BF94:
    ctx->pc = 0x80C2BF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 81u : 0u;
    // 80C2BF94: lwz     r6, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BF98:
    ctx->pc = 0x80C2BF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF98u)) return;
    // 80C2BF98: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2BF9C:
    ctx->pc = 0x80C2BF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BF9Cu)) return;
    // 80C2BF9C: addi    r4, r4, 25352
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25352);

label_80C2BFA0:
    ctx->pc = 0x80C2BFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 78u : 0u;
    // 80C2BFA0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2BFA0u)) return;
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
label_80C2BFA4:
    ctx->pc = 0x80C2BFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 77u : 0u;
    // 80C2BFA4: stfs     f2, 20(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2BFA4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BFA8:
    ctx->pc = 0x80C2BFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFA8u)) return;
    // 80C2BFA8: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2BFAC:
    ctx->pc = 0x80C2BFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFACu)) return;
    // 80C2BFAC: addi    r4, r4, 25360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25360);

label_80C2BFB0:
    ctx->pc = 0x80C2BFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 74u : 0u;
    // 80C2BFB0: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2BFB0u)) return;
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
label_80C2BFB4:
    ctx->pc = 0x80C2BFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFB4u)) return;
    // 80C2BFB4: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_80C2BFB8:
    ctx->pc = 0x80C2BFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 72u : 0u;
    // 80C2BFB8: stw     r0, 12(r1)
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
label_80C2BFBC:
    ctx->pc = 0x80C2BFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFBCu)) return;
    // 80C2BFBC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80C2BFC0:
    ctx->pc = 0x80C2BFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 70u : 0u;
    // 80C2BFC0: stw     r0, 8(r1)
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
label_80C2BFC4:
    ctx->pc = 0x80C2BFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 69u : 0u;
    // 80C2BFC4: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2BFC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BFC8:
    ctx->pc = 0x80C2BFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFC8u)) return;
    // 80C2BFC8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2BFC8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80C2BFCC:
    ctx->pc = 0x80C2BFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80C2BFCCu)) return;
    // 80C2BFCC: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2BFCCu)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_80C2BFD0:
    ctx->pc = 0x80C2BFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 80C2BFD0: stfs     f0, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2BFD0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BFD4:
    ctx->pc = 0x80C2BFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C2BFD4: stw     r3, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BFD8:
    ctx->pc = 0x80C2BFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 80C2BFD8: lbz     r0, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BFDC:
    ctx->pc = 0x80C2BFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C2BFDCu)) return;
    // 80C2BFDC: divw   r0, r0, r3
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C2BFE0:
    ctx->pc = 0x80C2BFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFE0u)) return;
    // 80C2BFE0: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_80C2BFE4:
    ctx->pc = 0x80C2BFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2BFE4: stb     r0, 29(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(29);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BFE8:
    ctx->pc = 0x80C2BFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFE8u)) return;
    // 80C2BFE8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C2BFEC:
    ctx->pc = 0x80C2BFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2BFEC: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BFF0:
    ctx->pc = 0x80C2BFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFF0u)) return;
    // 80C2BFF0: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80C2BFF4:
    ctx->pc = 0x80C2BFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2BFF4: stb     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2BFF8:
    ctx->pc = 0x80C2BFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFF8u)) return;
    // 80C2BFF8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2BFFC:
    ctx->pc = 0x80C2BFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2BFFCu)) return;
    // 80C2BFFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2C000:
    ctx->pc = 0x80C2C000u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C000u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2C000: lis     r4, -32573
    ctx->gpr[4] = ((u32)(s32)(-32573) << 16);

label_80C2C004:
    ctx->pc = 0x80C2C004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C004u)) return;
    // 80C2C004: addi    r0, r4, -16344
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-16344);

label_80C2C008:
    ctx->pc = 0x80C2C008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2C008: stw     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C00C:
    ctx->pc = 0x80C2C00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C00Cu)) return;
    // 80C2C00C: lis     r4, -32573
    ctx->gpr[4] = ((u32)(s32)(-32573) << 16);

label_80C2C010:
    ctx->pc = 0x80C2C010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C010u)) return;
    // 80C2C010: addi    r0, r4, -15048
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-15048);

label_80C2C014:
    ctx->pc = 0x80C2C014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C014: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C018:
    ctx->pc = 0x80C2C018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C018u)) return;
    // 80C2C018: lis     r4, -32573
    ctx->gpr[4] = ((u32)(s32)(-32573) << 16);

label_80C2C01C:
    ctx->pc = 0x80C2C01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C01Cu)) return;
    // 80C2C01C: addi    r0, r4, -14964
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-14964);

label_80C2C020:
    ctx->pc = 0x80C2C020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2C020: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C024:
    ctx->pc = 0x80C2C024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C024u)) return;
    // 80C2C024: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2C028:
    ctx->pc = 0x80C2C028u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C028u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2C028: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C02C:
    ctx->pc = 0x80C2C02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C02Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2C02C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C030:
    ctx->pc = 0x80C2C030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2C030: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C034:
    ctx->pc = 0x80C2C034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2C034: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C038:
    ctx->pc = 0x80C2C038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C038u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2C038: stw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C03C:
    ctx->pc = 0x80C2C03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C03Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2C03C: stw     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C040:
    ctx->pc = 0x80C2C040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C040u)) return;
    // 80C2C040: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C2C044:
    ctx->pc = 0x80C2C044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2C044: lwz     r31, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C048:
    ctx->pc = 0x80C2C048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C048: lwz     r30, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C04C:
    ctx->pc = 0x80C2C04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C04Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2C04C: lbz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C050:
    ctx->pc = 0x80C2C050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C050u)) return;
    // 80C2C050: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80C2C054:
    ctx->pc = 0x80C2C054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C054u)) return;
    // 80C2C054: cmpwi   r0, 2
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

label_80C2C058:
    ctx->pc = 0x80C2C058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C058u)) return;
    // 80C2C058: bc    12, 2, 0x80C2C304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2C304;
        }
    }

label_80C2C05C:
    ctx->pc = 0x80C2C05Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C05Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2C05C: bc    4, 0, 0x80C2C070
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2C070;
        }
    }

label_80C2C060:
    ctx->pc = 0x80C2C060u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C060u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C060: cmpwi   r0, 0
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

label_80C2C064:
    ctx->pc = 0x80C2C064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C064u)) return;
    // 80C2C064: bc    12, 2, 0x80C2C07C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2C07C;
        }
    }

label_80C2C068:
    ctx->pc = 0x80C2C068u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C068u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2C068: bc    4, 0, 0x80C2C218
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2C218;
        }
    }

label_80C2C06C:
    ctx->pc = 0x80C2C06Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C06Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2C06C: b       0x80C2C514
    {
            goto label_80C2C514;
    }

label_80C2C070:
    ctx->pc = 0x80C2C070u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C070u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C070: cmpwi   r0, 4
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

label_80C2C074:
    ctx->pc = 0x80C2C074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C074u)) return;
    // 80C2C074: bc    4, 0, 0x80C2C514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2C514;
        }
    }

label_80C2C078:
    ctx->pc = 0x80C2C078u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C078u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2C078: b       0x80C2C51C
    {
            goto label_80C2C51C;
    }

label_80C2C07C:
    ctx->pc = 0x80C2C07Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C07Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C2C07C: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C07Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80C2C080:
    ctx->pc = 0x80C2C080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C080u)) return;
    // 80C2C080: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C084:
    ctx->pc = 0x80C2C084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C084u)) return;
    // 80C2C084: addi    r3, r3, 25368
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25368);

label_80C2C088:
    ctx->pc = 0x80C2C088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C2C088: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C088u)) return;
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
label_80C2C08C:
    ctx->pc = 0x80C2C08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C08Cu)) return;
    // 80C2C08C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C08Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C2C090:
    ctx->pc = 0x80C2C090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C090u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C2C090: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C090u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C094:
    ctx->pc = 0x80C2C094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C094u)) return;
    // 80C2C094: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C098:
    ctx->pc = 0x80C2C098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C098u)) return;
    // 80C2C098: addi    r3, r3, 25376
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25376);

label_80C2C09C:
    ctx->pc = 0x80C2C09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C09Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C2C09C: lfd     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C09Cu)) return;
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
label_80C2C0A0:
    ctx->pc = 0x80C2C0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0A0u)) return;
    // 80C2C0A0: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C0A4:
    ctx->pc = 0x80C2C0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0A4u)) return;
    // 80C2C0A4: addi    r3, r3, 25384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25384);

label_80C2C0A8:
    ctx->pc = 0x80C2C0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C2C0A8: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C0A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C2C0AC:
    ctx->pc = 0x80C2C0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C2C0AC: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C0ACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80C2C0B0:
    ctx->pc = 0x80C2C0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0B0u)) return;
    // 80C2C0B0: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C0B0u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C2C0B4:
    ctx->pc = 0x80C2C0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0B4u)) return;
    // 80C2C0B4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C0B4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C2C0B8:
    ctx->pc = 0x80C2C0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2C0B8: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2C0B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C0BC:
    ctx->pc = 0x80C2C0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2C0BC: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C0C0:
    ctx->pc = 0x80C2C0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0C0u)) return;
    // 80C2C0C0: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C0C4:
    ctx->pc = 0x80C2C0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0C4u)) return;
    // 80C2C0C4: addi    r3, r3, 25360
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25360);

label_80C2C0C8:
    ctx->pc = 0x80C2C0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2C0C8: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C0C8u)) return;
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
label_80C2C0CC:
    ctx->pc = 0x80C2C0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0CCu)) return;
    // 80C2C0CC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_80C2C0D0:
    ctx->pc = 0x80C2C0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2C0D0: stw     r0, 20(r1)
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
label_80C2C0D4:
    ctx->pc = 0x80C2C0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0D4u)) return;
    // 80C2C0D4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80C2C0D8:
    ctx->pc = 0x80C2C0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2C0D8: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C0DC:
    ctx->pc = 0x80C2C0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C0DC: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2C0DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C0E0:
    ctx->pc = 0x80C2C0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0E0u)) return;
    // 80C2C0E0: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C0E0u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80C2C0E4:
    ctx->pc = 0x80C2C0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0E4u)) return;
    // 80C2C0E4: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C0E4u)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_80C2C0E8:
    ctx->pc = 0x80C2C0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0E8u)) return;
    // 80C2C0E8: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C0E8u)) return;
    ppc_frsp(ctx, 1, 1);

label_80C2C0EC:
    ctx->pc = 0x80C2C0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0ECu)) return;
    // 80C2C0EC: bl      0x80C2D490
    {
            ctx->lr = 0x80C2C0F0u;
            goto label_80C2D490;
    }

label_80C2C0F0:
    ctx->pc = 0x80C2C0F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 32u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C0F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 32u : 1u;
    // 80C2C0F0: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C0F4:
    ctx->pc = 0x80C2C0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0F4u)) return;
    // 80C2C0F4: addi    r3, r3, 25388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25388);

label_80C2C0F8:
    ctx->pc = 0x80C2C0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80C2C0F8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C0F8u)) return;
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
label_80C2C0FC:
    ctx->pc = 0x80C2C0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C0FCu)) return;
    // 80C2C0FC: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C0FCu)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_80C2C100:
    ctx->pc = 0x80C2C100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C100u)) return;
    // 80C2C100: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C104:
    ctx->pc = 0x80C2C104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C104u)) return;
    // 80C2C104: addi    r3, r3, 25352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25352);

label_80C2C108:
    ctx->pc = 0x80C2C108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C2C108: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C108u)) return;
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
label_80C2C10C:
    ctx->pc = 0x80C2C10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C10Cu)) return;
    // 80C2C10C: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C10Cu)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_80C2C110:
    ctx->pc = 0x80C2C110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C2C110: stfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C110u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C114:
    ctx->pc = 0x80C2C114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C114u)) return;
    // 80C2C114: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C118:
    ctx->pc = 0x80C2C118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C118u)) return;
    // 80C2C118: addi    r3, r3, 25376
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25376);

label_80C2C11C:
    ctx->pc = 0x80C2C11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C11Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C2C11C: lfd     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C11Cu)) return;
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
label_80C2C120:
    ctx->pc = 0x80C2C120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C120u)) return;
    // 80C2C120: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C124:
    ctx->pc = 0x80C2C124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C124u)) return;
    // 80C2C124: addi    r3, r3, 25384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25384);

label_80C2C128:
    ctx->pc = 0x80C2C128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C128u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C2C128: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C128u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C2C12C:
    ctx->pc = 0x80C2C12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C12Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C2C12C: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C12Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80C2C130:
    ctx->pc = 0x80C2C130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C130u)) return;
    // 80C2C130: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C130u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C2C134:
    ctx->pc = 0x80C2C134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C134u)) return;
    // 80C2C134: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C134u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C2C138:
    ctx->pc = 0x80C2C138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2C138: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2C138u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C13C:
    ctx->pc = 0x80C2C13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C13Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2C13C: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C140:
    ctx->pc = 0x80C2C140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C140u)) return;
    // 80C2C140: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C144:
    ctx->pc = 0x80C2C144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C144u)) return;
    // 80C2C144: addi    r3, r3, 25360
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25360);

label_80C2C148:
    ctx->pc = 0x80C2C148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2C148: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C148u)) return;
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
label_80C2C14C:
    ctx->pc = 0x80C2C14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C14Cu)) return;
    // 80C2C14C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_80C2C150:
    ctx->pc = 0x80C2C150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2C150: stw     r0, 36(r1)
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
label_80C2C154:
    ctx->pc = 0x80C2C154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C154u)) return;
    // 80C2C154: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80C2C158:
    ctx->pc = 0x80C2C158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2C158: stw     r0, 32(r1)
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
label_80C2C15C:
    ctx->pc = 0x80C2C15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C15Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C15C: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2C15Cu)) return;
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
label_80C2C160:
    ctx->pc = 0x80C2C160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C160u)) return;
    // 80C2C160: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C160u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80C2C164:
    ctx->pc = 0x80C2C164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C164u)) return;
    // 80C2C164: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C164u)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_80C2C168:
    ctx->pc = 0x80C2C168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C168u)) return;
    // 80C2C168: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C168u)) return;
    ppc_frsp(ctx, 1, 1);

label_80C2C16C:
    ctx->pc = 0x80C2C16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C16Cu)) return;
    // 80C2C16C: bl      0x80C2D490
    {
            ctx->lr = 0x80C2C170u;
            goto label_80C2D490;
    }

label_80C2C170:
    ctx->pc = 0x80C2C170u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 32u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C170u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 32u : 1u;
    // 80C2C170: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C174:
    ctx->pc = 0x80C2C174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C174u)) return;
    // 80C2C174: addi    r3, r3, 25388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25388);

label_80C2C178:
    ctx->pc = 0x80C2C178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80C2C178: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C178u)) return;
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
label_80C2C17C:
    ctx->pc = 0x80C2C17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C17Cu)) return;
    // 80C2C17C: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C17Cu)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_80C2C180:
    ctx->pc = 0x80C2C180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C180u)) return;
    // 80C2C180: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C184:
    ctx->pc = 0x80C2C184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C184u)) return;
    // 80C2C184: addi    r3, r3, 25352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25352);

label_80C2C188:
    ctx->pc = 0x80C2C188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C2C188: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C188u)) return;
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
label_80C2C18C:
    ctx->pc = 0x80C2C18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C18Cu)) return;
    // 80C2C18C: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C18Cu)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_80C2C190:
    ctx->pc = 0x80C2C190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C2C190: stfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C190u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C194:
    ctx->pc = 0x80C2C194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C194u)) return;
    // 80C2C194: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C198:
    ctx->pc = 0x80C2C198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C198u)) return;
    // 80C2C198: addi    r3, r3, 25376
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25376);

label_80C2C19C:
    ctx->pc = 0x80C2C19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C19Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C2C19C: lfd     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C19Cu)) return;
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
label_80C2C1A0:
    ctx->pc = 0x80C2C1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1A0u)) return;
    // 80C2C1A0: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C1A4:
    ctx->pc = 0x80C2C1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1A4u)) return;
    // 80C2C1A4: addi    r3, r3, 25384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25384);

label_80C2C1A8:
    ctx->pc = 0x80C2C1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C2C1A8: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C1A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C2C1AC:
    ctx->pc = 0x80C2C1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C2C1AC: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C1ACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80C2C1B0:
    ctx->pc = 0x80C2C1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1B0u)) return;
    // 80C2C1B0: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C1B0u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C2C1B4:
    ctx->pc = 0x80C2C1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1B4u)) return;
    // 80C2C1B4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C1B4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C2C1B8:
    ctx->pc = 0x80C2C1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2C1B8: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2C1B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C1BC:
    ctx->pc = 0x80C2C1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2C1BC: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C1C0:
    ctx->pc = 0x80C2C1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1C0u)) return;
    // 80C2C1C0: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C1C4:
    ctx->pc = 0x80C2C1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1C4u)) return;
    // 80C2C1C4: addi    r3, r3, 25360
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25360);

label_80C2C1C8:
    ctx->pc = 0x80C2C1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2C1C8: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C1C8u)) return;
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
label_80C2C1CC:
    ctx->pc = 0x80C2C1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1CCu)) return;
    // 80C2C1CC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_80C2C1D0:
    ctx->pc = 0x80C2C1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2C1D0: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C1D4:
    ctx->pc = 0x80C2C1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1D4u)) return;
    // 80C2C1D4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80C2C1D8:
    ctx->pc = 0x80C2C1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2C1D8: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C1DC:
    ctx->pc = 0x80C2C1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C1DC: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2C1DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C1E0:
    ctx->pc = 0x80C2C1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1E0u)) return;
    // 80C2C1E0: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C1E0u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80C2C1E4:
    ctx->pc = 0x80C2C1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1E4u)) return;
    // 80C2C1E4: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C1E4u)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_80C2C1E8:
    ctx->pc = 0x80C2C1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1E8u)) return;
    // 80C2C1E8: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C1E8u)) return;
    ppc_frsp(ctx, 1, 1);

label_80C2C1EC:
    ctx->pc = 0x80C2C1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1ECu)) return;
    // 80C2C1EC: bl      0x80C2D46C
    {
            ctx->lr = 0x80C2C1F0u;
            goto label_80C2D46C;
    }

label_80C2C1F0:
    ctx->pc = 0x80C2C1F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C1F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2C1F0: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C1F4:
    ctx->pc = 0x80C2C1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1F4u)) return;
    // 80C2C1F4: addi    r3, r3, 25388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25388);

label_80C2C1F8:
    ctx->pc = 0x80C2C1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2C1F8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C1F8u)) return;
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
label_80C2C1FC:
    ctx->pc = 0x80C2C1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C1FCu)) return;
    // 80C2C1FC: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C1FCu)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_80C2C200:
    ctx->pc = 0x80C2C200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C200u)) return;
    // 80C2C200: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C204:
    ctx->pc = 0x80C2C204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C204u)) return;
    // 80C2C204: addi    r3, r3, 25352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25352);

label_80C2C208:
    ctx->pc = 0x80C2C208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2C208: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C208u)) return;
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
label_80C2C20C:
    ctx->pc = 0x80C2C20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C20Cu)) return;
    // 80C2C20C: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C20Cu)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_80C2C210:
    ctx->pc = 0x80C2C210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2C210: stfs     f0, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C210u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C214:
    ctx->pc = 0x80C2C214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C214u)) return;
    // 80C2C214: b       0x80C2C514
    {
            goto label_80C2C514;
    }

label_80C2C218:
    ctx->pc = 0x80C2C218u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C218u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C2C218: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C218u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_80C2C21C:
    ctx->pc = 0x80C2C21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C21Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C2C21C: lfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C2C21Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
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
label_80C2C220:
    ctx->pc = 0x80C2C220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C220u)) return;
    // 80C2C220: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C220u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C2C224:
    ctx->pc = 0x80C2C224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C2C224: stfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C224u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C228:
    ctx->pc = 0x80C2C228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2C228: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C228u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
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
label_80C2C22C:
    ctx->pc = 0x80C2C22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C22Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2C22C: lfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C2C22Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
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
label_80C2C230:
    ctx->pc = 0x80C2C230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C230u)) return;
    // 80C2C230: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C230u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C2C234:
    ctx->pc = 0x80C2C234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2C234: stfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C234u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C238:
    ctx->pc = 0x80C2C238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2C238: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C238u)) return;
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
label_80C2C23C:
    ctx->pc = 0x80C2C23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C23Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2C23C: lfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C2C23Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
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
label_80C2C240:
    ctx->pc = 0x80C2C240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C240u)) return;
    // 80C2C240: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C240u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C2C244:
    ctx->pc = 0x80C2C244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2C244: stfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C244u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C248:
    ctx->pc = 0x80C2C248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2C248: lwz     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C24C:
    ctx->pc = 0x80C2C24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C24Cu)) return;
    // 80C2C24C: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80C2C250:
    ctx->pc = 0x80C2C250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2C250: stw     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C254:
    ctx->pc = 0x80C2C254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C254u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2C254: lwz     r0, 16(r30)
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
label_80C2C258:
    ctx->pc = 0x80C2C258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C258u)) return;
    // 80C2C258: cmpw    r3, r0
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

label_80C2C25C:
    ctx->pc = 0x80C2C25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C25Cu)) return;
    // 80C2C25C: bc    4, 1, 0x80C2C268
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2C268;
        }
    }

label_80C2C260:
    ctx->pc = 0x80C2C260u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C260u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C260: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C2C264:
    ctx->pc = 0x80C2C264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2C264: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C268:
    ctx->pc = 0x80C2C268u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C268u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C2C268: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C268u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80C2C26C:
    ctx->pc = 0x80C2C26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C26Cu)) return;
    // 80C2C26C: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C270:
    ctx->pc = 0x80C2C270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C270u)) return;
    // 80C2C270: addi    r3, r3, 25368
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25368);

label_80C2C274:
    ctx->pc = 0x80C2C274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C2C274: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C274u)) return;
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
label_80C2C278:
    ctx->pc = 0x80C2C278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C278u)) return;
    // 80C2C278: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C278u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C2C27C:
    ctx->pc = 0x80C2C27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C27Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C2C27C: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C27Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C280:
    ctx->pc = 0x80C2C280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C280u)) return;
    // 80C2C280: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C284:
    ctx->pc = 0x80C2C284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C284u)) return;
    // 80C2C284: addi    r3, r3, 25376
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25376);

label_80C2C288:
    ctx->pc = 0x80C2C288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C2C288: lfd     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C288u)) return;
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
label_80C2C28C:
    ctx->pc = 0x80C2C28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C28Cu)) return;
    // 80C2C28C: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C290:
    ctx->pc = 0x80C2C290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C290u)) return;
    // 80C2C290: addi    r3, r3, 25384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25384);

label_80C2C294:
    ctx->pc = 0x80C2C294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C2C294: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C294u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C2C298:
    ctx->pc = 0x80C2C298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C298u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C2C298: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C298u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80C2C29C:
    ctx->pc = 0x80C2C29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C29Cu)) return;
    // 80C2C29C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C29Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C2C2A0:
    ctx->pc = 0x80C2C2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2A0u)) return;
    // 80C2C2A0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C2A0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C2C2A4:
    ctx->pc = 0x80C2C2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2C2A4: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2C2A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C2A8:
    ctx->pc = 0x80C2C2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2C2A8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C2AC:
    ctx->pc = 0x80C2C2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2ACu)) return;
    // 80C2C2AC: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C2B0:
    ctx->pc = 0x80C2C2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2B0u)) return;
    // 80C2C2B0: addi    r3, r3, 25360
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25360);

label_80C2C2B4:
    ctx->pc = 0x80C2C2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2C2B4: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C2B4u)) return;
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
label_80C2C2B8:
    ctx->pc = 0x80C2C2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2B8u)) return;
    // 80C2C2B8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_80C2C2BC:
    ctx->pc = 0x80C2C2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2C2BC: stw     r0, 44(r1)
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
label_80C2C2C0:
    ctx->pc = 0x80C2C2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2C0u)) return;
    // 80C2C2C0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80C2C2C4:
    ctx->pc = 0x80C2C2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2C2C4: stw     r0, 40(r1)
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
label_80C2C2C8:
    ctx->pc = 0x80C2C2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C2C8: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2C2C8u)) return;
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
label_80C2C2CC:
    ctx->pc = 0x80C2C2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2CCu)) return;
    // 80C2C2CC: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C2CCu)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80C2C2D0:
    ctx->pc = 0x80C2C2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2D0u)) return;
    // 80C2C2D0: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C2D0u)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_80C2C2D4:
    ctx->pc = 0x80C2C2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2D4u)) return;
    // 80C2C2D4: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C2D4u)) return;
    ppc_frsp(ctx, 1, 1);

label_80C2C2D8:
    ctx->pc = 0x80C2C2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2D8u)) return;
    // 80C2C2D8: bl      0x80C2D490
    {
            ctx->lr = 0x80C2C2DCu;
            goto label_80C2D490;
    }

label_80C2C2DC:
    ctx->pc = 0x80C2C2DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C2DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2C2DC: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C2E0:
    ctx->pc = 0x80C2C2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2E0u)) return;
    // 80C2C2E0: addi    r3, r3, 25396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25396);

label_80C2C2E4:
    ctx->pc = 0x80C2C2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2C2E4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C2E4u)) return;
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
label_80C2C2E8:
    ctx->pc = 0x80C2C2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2E8u)) return;
    // 80C2C2E8: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C2E8u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_80C2C2EC:
    ctx->pc = 0x80C2C2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2ECu)) return;
    // 80C2C2EC: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C2F0:
    ctx->pc = 0x80C2C2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2F0u)) return;
    // 80C2C2F0: addi    r3, r3, 25392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25392);

label_80C2C2F4:
    ctx->pc = 0x80C2C2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2C2F4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C2F4u)) return;
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
label_80C2C2F8:
    ctx->pc = 0x80C2C2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2F8u)) return;
    // 80C2C2F8: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C2F8u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_80C2C2FC:
    ctx->pc = 0x80C2C2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C2FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2C2FC: stfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C2FCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C300:
    ctx->pc = 0x80C2C300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C300u)) return;
    // 80C2C300: b       0x80C2C514
    {
            goto label_80C2C514;
    }

label_80C2C304:
    ctx->pc = 0x80C2C304u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C304u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C2C304: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C304u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80C2C308:
    ctx->pc = 0x80C2C308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C308u)) return;
    // 80C2C308: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C30C:
    ctx->pc = 0x80C2C30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C30Cu)) return;
    // 80C2C30C: addi    r3, r3, 25400
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25400);

label_80C2C310:
    ctx->pc = 0x80C2C310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2C310: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C310u)) return;
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
label_80C2C314:
    ctx->pc = 0x80C2C314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C314u)) return;
    // 80C2C314: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C314u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C2C318:
    ctx->pc = 0x80C2C318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2C318: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C318u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C31C:
    ctx->pc = 0x80C2C31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C31Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2C31C: lfs     f1, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C2C31Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
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
label_80C2C320:
    ctx->pc = 0x80C2C320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2C320: lfs     f0, 24(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C2C320u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
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
label_80C2C324:
    ctx->pc = 0x80C2C324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C324u)) return;
    // 80C2C324: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C324u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_80C2C328:
    ctx->pc = 0x80C2C328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2C328: stfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C2C328u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C32C:
    ctx->pc = 0x80C2C32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C32Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2C32C: lwz     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C330:
    ctx->pc = 0x80C2C330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C330u)) return;
    // 80C2C330: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80C2C334:
    ctx->pc = 0x80C2C334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2C334: stw     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C338:
    ctx->pc = 0x80C2C338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2C338: lwz     r0, 16(r30)
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
label_80C2C33C:
    ctx->pc = 0x80C2C33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C33Cu)) return;
    // 80C2C33C: cmpw    r3, r0
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

label_80C2C340:
    ctx->pc = 0x80C2C340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C340u)) return;
    // 80C2C340: bc    4, 1, 0x80C2C34C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2C34C;
        }
    }

label_80C2C344:
    ctx->pc = 0x80C2C344u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C344u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C344: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_80C2C348:
    ctx->pc = 0x80C2C348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2C348: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C34C:
    ctx->pc = 0x80C2C34Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C34Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    // 80C2C34C: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C350:
    ctx->pc = 0x80C2C350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C350u)) return;
    // 80C2C350: addi    r3, r3, 25376
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25376);

label_80C2C354:
    ctx->pc = 0x80C2C354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C2C354: lfd     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C354u)) return;
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
label_80C2C358:
    ctx->pc = 0x80C2C358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C358u)) return;
    // 80C2C358: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C35C:
    ctx->pc = 0x80C2C35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C35Cu)) return;
    // 80C2C35C: addi    r3, r3, 25384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25384);

label_80C2C360:
    ctx->pc = 0x80C2C360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C2C360: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C360u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C2C364:
    ctx->pc = 0x80C2C364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C2C364: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C364u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80C2C368:
    ctx->pc = 0x80C2C368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C368u)) return;
    // 80C2C368: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C368u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C2C36C:
    ctx->pc = 0x80C2C36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C36Cu)) return;
    // 80C2C36C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C36Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C2C370:
    ctx->pc = 0x80C2C370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2C370: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2C370u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C374:
    ctx->pc = 0x80C2C374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2C374: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C378:
    ctx->pc = 0x80C2C378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C378u)) return;
    // 80C2C378: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C37C:
    ctx->pc = 0x80C2C37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C37Cu)) return;
    // 80C2C37C: addi    r3, r3, 25360
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25360);

label_80C2C380:
    ctx->pc = 0x80C2C380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2C380: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C380u)) return;
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
label_80C2C384:
    ctx->pc = 0x80C2C384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C384u)) return;
    // 80C2C384: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_80C2C388:
    ctx->pc = 0x80C2C388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2C388: stw     r0, 44(r1)
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
label_80C2C38C:
    ctx->pc = 0x80C2C38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C38Cu)) return;
    // 80C2C38C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80C2C390:
    ctx->pc = 0x80C2C390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2C390: stw     r0, 40(r1)
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
label_80C2C394:
    ctx->pc = 0x80C2C394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C394: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2C394u)) return;
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
label_80C2C398:
    ctx->pc = 0x80C2C398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C398u)) return;
    // 80C2C398: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C398u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80C2C39C:
    ctx->pc = 0x80C2C39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C39Cu)) return;
    // 80C2C39C: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C39Cu)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_80C2C3A0:
    ctx->pc = 0x80C2C3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3A0u)) return;
    // 80C2C3A0: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C3A0u)) return;
    ppc_frsp(ctx, 1, 1);

label_80C2C3A4:
    ctx->pc = 0x80C2C3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3A4u)) return;
    // 80C2C3A4: bl      0x80C2D490
    {
            ctx->lr = 0x80C2C3A8u;
            goto label_80C2D490;
    }

label_80C2C3A8:
    ctx->pc = 0x80C2C3A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 32u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C3A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 32u : 1u;
    // 80C2C3A8: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C3AC:
    ctx->pc = 0x80C2C3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3ACu)) return;
    // 80C2C3AC: addi    r3, r3, 25388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25388);

label_80C2C3B0:
    ctx->pc = 0x80C2C3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80C2C3B0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C3B0u)) return;
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
label_80C2C3B4:
    ctx->pc = 0x80C2C3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3B4u)) return;
    // 80C2C3B4: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C3B4u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_80C2C3B8:
    ctx->pc = 0x80C2C3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3B8u)) return;
    // 80C2C3B8: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C3BC:
    ctx->pc = 0x80C2C3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3BCu)) return;
    // 80C2C3BC: addi    r3, r3, 25352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25352);

label_80C2C3C0:
    ctx->pc = 0x80C2C3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C2C3C0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C3C0u)) return;
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
label_80C2C3C4:
    ctx->pc = 0x80C2C3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3C4u)) return;
    // 80C2C3C4: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C3C4u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_80C2C3C8:
    ctx->pc = 0x80C2C3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C2C3C8: stfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C3C8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C3CC:
    ctx->pc = 0x80C2C3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3CCu)) return;
    // 80C2C3CC: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C3D0:
    ctx->pc = 0x80C2C3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3D0u)) return;
    // 80C2C3D0: addi    r3, r3, 25376
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25376);

label_80C2C3D4:
    ctx->pc = 0x80C2C3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C2C3D4: lfd     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C3D4u)) return;
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
label_80C2C3D8:
    ctx->pc = 0x80C2C3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3D8u)) return;
    // 80C2C3D8: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C3DC:
    ctx->pc = 0x80C2C3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3DCu)) return;
    // 80C2C3DC: addi    r3, r3, 25384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25384);

label_80C2C3E0:
    ctx->pc = 0x80C2C3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C2C3E0: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C3E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C2C3E4:
    ctx->pc = 0x80C2C3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C2C3E4: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C3E4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80C2C3E8:
    ctx->pc = 0x80C2C3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3E8u)) return;
    // 80C2C3E8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C3E8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C2C3EC:
    ctx->pc = 0x80C2C3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3ECu)) return;
    // 80C2C3EC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C3ECu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C2C3F0:
    ctx->pc = 0x80C2C3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2C3F0: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2C3F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C3F4:
    ctx->pc = 0x80C2C3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2C3F4: lwz     r0, 36(r1)
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
label_80C2C3F8:
    ctx->pc = 0x80C2C3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3F8u)) return;
    // 80C2C3F8: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C3FC:
    ctx->pc = 0x80C2C3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C3FCu)) return;
    // 80C2C3FC: addi    r3, r3, 25360
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25360);

label_80C2C400:
    ctx->pc = 0x80C2C400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2C400: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C400u)) return;
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
label_80C2C404:
    ctx->pc = 0x80C2C404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C404u)) return;
    // 80C2C404: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_80C2C408:
    ctx->pc = 0x80C2C408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2C408: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C40C:
    ctx->pc = 0x80C2C40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C40Cu)) return;
    // 80C2C40C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80C2C410:
    ctx->pc = 0x80C2C410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2C410: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C414:
    ctx->pc = 0x80C2C414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C414: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2C414u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C418:
    ctx->pc = 0x80C2C418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C418u)) return;
    // 80C2C418: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C418u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80C2C41C:
    ctx->pc = 0x80C2C41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C41Cu)) return;
    // 80C2C41C: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C41Cu)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_80C2C420:
    ctx->pc = 0x80C2C420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C420u)) return;
    // 80C2C420: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C420u)) return;
    ppc_frsp(ctx, 1, 1);

label_80C2C424:
    ctx->pc = 0x80C2C424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C424u)) return;
    // 80C2C424: bl      0x80C2D490
    {
            ctx->lr = 0x80C2C428u;
            goto label_80C2D490;
    }

label_80C2C428:
    ctx->pc = 0x80C2C428u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 32u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C428u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 32u : 1u;
    // 80C2C428: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C42C:
    ctx->pc = 0x80C2C42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C42Cu)) return;
    // 80C2C42C: addi    r3, r3, 25388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25388);

label_80C2C430:
    ctx->pc = 0x80C2C430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80C2C430: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C430u)) return;
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
label_80C2C434:
    ctx->pc = 0x80C2C434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C434u)) return;
    // 80C2C434: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C434u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_80C2C438:
    ctx->pc = 0x80C2C438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C438u)) return;
    // 80C2C438: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C43C:
    ctx->pc = 0x80C2C43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C43Cu)) return;
    // 80C2C43C: addi    r3, r3, 25352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25352);

label_80C2C440:
    ctx->pc = 0x80C2C440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C2C440: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C440u)) return;
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
label_80C2C444:
    ctx->pc = 0x80C2C444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C444u)) return;
    // 80C2C444: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C444u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_80C2C448:
    ctx->pc = 0x80C2C448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C2C448: stfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C448u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C44C:
    ctx->pc = 0x80C2C44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C44Cu)) return;
    // 80C2C44C: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C450:
    ctx->pc = 0x80C2C450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C450u)) return;
    // 80C2C450: addi    r3, r3, 25376
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25376);

label_80C2C454:
    ctx->pc = 0x80C2C454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C2C454: lfd     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C454u)) return;
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
label_80C2C458:
    ctx->pc = 0x80C2C458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C458u)) return;
    // 80C2C458: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C45C:
    ctx->pc = 0x80C2C45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C45Cu)) return;
    // 80C2C45C: addi    r3, r3, 25384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25384);

label_80C2C460:
    ctx->pc = 0x80C2C460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C460u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C2C460: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C460u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C2C464:
    ctx->pc = 0x80C2C464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C2C464: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C464u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80C2C468:
    ctx->pc = 0x80C2C468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C468u)) return;
    // 80C2C468: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C468u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C2C46C:
    ctx->pc = 0x80C2C46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C46Cu)) return;
    // 80C2C46C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C46Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C2C470:
    ctx->pc = 0x80C2C470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2C470: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2C470u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C474:
    ctx->pc = 0x80C2C474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2C474: lwz     r0, 20(r1)
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
label_80C2C478:
    ctx->pc = 0x80C2C478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C478u)) return;
    // 80C2C478: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C47C:
    ctx->pc = 0x80C2C47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C47Cu)) return;
    // 80C2C47C: addi    r3, r3, 25360
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25360);

label_80C2C480:
    ctx->pc = 0x80C2C480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C480u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2C480: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C480u)) return;
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
label_80C2C484:
    ctx->pc = 0x80C2C484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C484u)) return;
    // 80C2C484: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_80C2C488:
    ctx->pc = 0x80C2C488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C488u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2C488: stw     r0, 12(r1)
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
label_80C2C48C:
    ctx->pc = 0x80C2C48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C48Cu)) return;
    // 80C2C48C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80C2C490:
    ctx->pc = 0x80C2C490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2C490: stw     r0, 8(r1)
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
label_80C2C494:
    ctx->pc = 0x80C2C494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C494: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2C494u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C498:
    ctx->pc = 0x80C2C498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C498u)) return;
    // 80C2C498: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C498u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80C2C49C:
    ctx->pc = 0x80C2C49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C49Cu)) return;
    // 80C2C49C: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C49Cu)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_80C2C4A0:
    ctx->pc = 0x80C2C4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4A0u)) return;
    // 80C2C4A0: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C4A0u)) return;
    ppc_frsp(ctx, 1, 1);

label_80C2C4A4:
    ctx->pc = 0x80C2C4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4A4u)) return;
    // 80C2C4A4: bl      0x80C2D46C
    {
            ctx->lr = 0x80C2C4A8u;
            goto label_80C2D46C;
    }

label_80C2C4A8:
    ctx->pc = 0x80C2C4A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 26u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C4A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 26u : 1u;
    // 80C2C4A8: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C4AC:
    ctx->pc = 0x80C2C4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4ACu)) return;
    // 80C2C4AC: addi    r3, r3, 25388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25388);

label_80C2C4B0:
    ctx->pc = 0x80C2C4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C2C4B0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C4B0u)) return;
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
label_80C2C4B4:
    ctx->pc = 0x80C2C4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4B4u)) return;
    // 80C2C4B4: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C4B4u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_80C2C4B8:
    ctx->pc = 0x80C2C4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4B8u)) return;
    // 80C2C4B8: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C4BC:
    ctx->pc = 0x80C2C4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4BCu)) return;
    // 80C2C4BC: addi    r3, r3, 25352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25352);

label_80C2C4C0:
    ctx->pc = 0x80C2C4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C2C4C0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C4C0u)) return;
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
label_80C2C4C4:
    ctx->pc = 0x80C2C4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4C4u)) return;
    // 80C2C4C4: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2C4C4u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_80C2C4C8:
    ctx->pc = 0x80C2C4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C2C4C8: stfs     f0, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C4C8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C4CC:
    ctx->pc = 0x80C2C4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C2C4CC: lfs     f1, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C4CCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
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
label_80C2C4D0:
    ctx->pc = 0x80C2C4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C2C4D0: lfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C2C4D0u)) return;
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
label_80C2C4D4:
    ctx->pc = 0x80C2C4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4D4u)) return;
    // 80C2C4D4: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C4D4u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C2C4D8:
    ctx->pc = 0x80C2C4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2C4D8: stfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C4D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C4DC:
    ctx->pc = 0x80C2C4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2C4DC: lfs     f1, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C4DCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
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
label_80C2C4E0:
    ctx->pc = 0x80C2C4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2C4E0: lfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C2C4E0u)) return;
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
label_80C2C4E4:
    ctx->pc = 0x80C2C4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4E4u)) return;
    // 80C2C4E4: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C4E4u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C2C4E8:
    ctx->pc = 0x80C2C4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2C4E8: stfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C4E8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C4EC:
    ctx->pc = 0x80C2C4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2C4EC: lfs     f1, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C4ECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
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
label_80C2C4F0:
    ctx->pc = 0x80C2C4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2C4F0: lfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C2C4F0u)) return;
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
label_80C2C4F4:
    ctx->pc = 0x80C2C4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4F4u)) return;
    // 80C2C4F4: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2C4F4u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C2C4F8:
    ctx->pc = 0x80C2C4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2C4F8: stfs     f0, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2C4F8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C4FC:
    ctx->pc = 0x80C2C4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C4FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C4FC: lbz     r3, 29(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(29);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C500:
    ctx->pc = 0x80C2C500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2C500: lbz     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C504:
    ctx->pc = 0x80C2C504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C504u)) return;
    // 80C2C504: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80C2C508:
    ctx->pc = 0x80C2C508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2C508: stb     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C50C:
    ctx->pc = 0x80C2C50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C50Cu)) return;
    // 80C2C50C: b       0x80C2C514
    {
            goto label_80C2C514;
    }

label_80C2C510:
    ctx->pc = 0x80C2C510u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C510u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2C510: b       0x80C2C51C
    {
            goto label_80C2C51C;
    }

label_80C2C514:
    ctx->pc = 0x80C2C514u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C514u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C514: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C2C518:
    ctx->pc = 0x80C2C518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C518u)) return;
    // 80C2C518: bl      0x80C2C538
    {
            ctx->lr = 0x80C2C51Cu;
            goto label_80C2C538;
    }

label_80C2C51C:
    ctx->pc = 0x80C2C51Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C51Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2C51C: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C520:
    ctx->pc = 0x80C2C520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2C520: lwz     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C524:
    ctx->pc = 0x80C2C524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2C524: lwz     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C528:
    ctx->pc = 0x80C2C528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C528: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C52C:
    ctx->pc = 0x80C2C52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2C52Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2C52C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C530:
    ctx->pc = 0x80C2C530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C530u)) return;
    // 80C2C530: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_80C2C534:
    ctx->pc = 0x80C2C534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C534u)) return;
    // 80C2C534: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2C538:
    ctx->pc = 0x80C2C538u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C538u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C2C538: stwu     r1, -16(r1)
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
label_80C2C53C:
    ctx->pc = 0x80C2C53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C53Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C2C53C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C540:
    ctx->pc = 0x80C2C540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C2C540: stw     r0, 20(r1)
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
label_80C2C544:
    ctx->pc = 0x80C2C544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C544u)) return;
    // 80C2C544: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2C548:
    ctx->pc = 0x80C2C548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C548u)) return;
    // 80C2C548: addi    r3, r3, -4732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4732);

label_80C2C54C:
    ctx->pc = 0x80C2C54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C54Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2C54C: lwz     r3, 0(r3)
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
label_80C2C550:
    ctx->pc = 0x80C2C550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2C550: lwz     r4, 32(r3)
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
label_80C2C554:
    ctx->pc = 0x80C2C554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2C554: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C558:
    ctx->pc = 0x80C2C558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2C558: lbz     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C55C:
    ctx->pc = 0x80C2C55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C55Cu)) return;
    // 80C2C55C: lis     r3, -28652
    ctx->gpr[3] = ((u32)(s32)(-28652) << 16);

label_80C2C560:
    ctx->pc = 0x80C2C560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C560u)) return;
    // 80C2C560: addi    r3, r3, 32584
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32584);

label_80C2C564:
    ctx->pc = 0x80C2C564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2C564: lwz     r3, 4(r3)
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
label_80C2C568:
    ctx->pc = 0x80C2C568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C568: lwz     r3, 16(r3)
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
label_80C2C56C:
    ctx->pc = 0x80C2C56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C56Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2C56C: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C570:
    ctx->pc = 0x80C2C570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C570u)) return;
    // 80C2C570: addi    r3, r4, 32
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(32);

label_80C2C574:
    ctx->pc = 0x80C2C574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C574u)) return;
    // 80C2C574: addi    r4, r4, 44
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(44);

label_80C2C578:
    ctx->pc = 0x80C2C578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C578u)) return;
    // 80C2C578: bl      0x805C5C60
    {
            ctx->lr = 0x80C2C57Cu;
            ctx->pc = 0x805C5C60u;
            return;
    }

label_80C2C57C:
    ctx->pc = 0x80C2C57Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C57Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C57C: lwz     r0, 20(r1)
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
label_80C2C580:
    ctx->pc = 0x80C2C580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2C580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2C580: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C584:
    ctx->pc = 0x80C2C584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C584u)) return;
    // 80C2C584: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2C588:
    ctx->pc = 0x80C2C588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C588u)) return;
    // 80C2C588: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2C58C:
    ctx->pc = 0x80C2C58Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C58Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2C58C: stwu     r1, -16(r1)
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
label_80C2C590:
    ctx->pc = 0x80C2C590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2C590: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C594:
    ctx->pc = 0x80C2C594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C594: stw     r0, 20(r1)
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
label_80C2C598:
    ctx->pc = 0x80C2C598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2C598: lwz     r3, 32(r3)
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
label_80C2C59C:
    ctx->pc = 0x80C2C59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C59Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2C59C: lwz     r3, 16(r3)
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
label_80C2C5A0:
    ctx->pc = 0x80C2C5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C5A0u)) return;
    // 80C2C5A0: cmplwi  r3, 0x0000
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

label_80C2C5A4:
    ctx->pc = 0x80C2C5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C5A4u)) return;
    // 80C2C5A4: bc    12, 2, 0x80C2C5AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2C5AC;
        }
    }

label_80C2C5A8:
    ctx->pc = 0x80C2C5A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C5A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2C5A8: bl      0x8050ED40
    {
            ctx->lr = 0x80C2C5ACu;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80C2C5AC:
    ctx->pc = 0x80C2C5ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C5ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C5AC: lwz     r0, 20(r1)
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
label_80C2C5B0:
    ctx->pc = 0x80C2C5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2C5B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2C5B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C5B4:
    ctx->pc = 0x80C2C5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C5B4u)) return;
    // 80C2C5B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2C5B8:
    ctx->pc = 0x80C2C5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C5B8u)) return;
    // 80C2C5B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2C5BC:
    ctx->pc = 0x80C2C5BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C5BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2C5BC: stwu     r1, -32(r1)
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
label_80C2C5C0:
    ctx->pc = 0x80C2C5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C5C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2C5C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C5C4:
    ctx->pc = 0x80C2C5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C5C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2C5C4: stw     r0, 36(r1)
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
label_80C2C5C8:
    ctx->pc = 0x80C2C5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C5C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2C5C8: stfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2C5C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C5CC:
    ctx->pc = 0x80C2C5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C5CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C5CC: psq_st   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2C5CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80C2C5CCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C5D0:
    ctx->pc = 0x80C2C5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C5D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2C5D0: stw     r31, 12(r1)
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
label_80C2C5D4:
    ctx->pc = 0x80C2C5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C5D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2C5D4: stw     r30, 8(r1)
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
label_80C2C5D8:
    ctx->pc = 0x80C2C5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C5D8u)) return;
    // 80C2C5D8: cmpwi   r3, 2
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

label_80C2C5DC:
    ctx->pc = 0x80C2C5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C5DCu)) return;
    // 80C2C5DC: bc    12, 2, 0x80C2D404
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2D404;
        }
    }

label_80C2C5E0:
    ctx->pc = 0x80C2C5E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C5E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2C5E0: bc    4, 0, 0x80C2C5F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2C5F4;
        }
    }

label_80C2C5E4:
    ctx->pc = 0x80C2C5E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C5E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C5E4: cmpwi   r3, 0
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

label_80C2C5E8:
    ctx->pc = 0x80C2C5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C5E8u)) return;
    // 80C2C5E8: bc    12, 2, 0x80C2D44C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2D44C;
        }
    }

label_80C2C5EC:
    ctx->pc = 0x80C2C5ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C5ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2C5EC: bc    4, 0, 0x80C2C5FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2C5FC;
        }
    }

label_80C2C5F0:
    ctx->pc = 0x80C2C5F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C5F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2C5F0: b       0x80C2D44C
    {
            goto label_80C2D44C;
    }

label_80C2C5F4:
    ctx->pc = 0x80C2C5F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C5F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C5F4: cmpwi   r3, 4
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

label_80C2C5F8:
    ctx->pc = 0x80C2C5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C5F8u)) return;
    // 80C2C5F8: b       0x80C2D44C
    {
            goto label_80C2D44C;
    }

label_80C2C5FC:
    ctx->pc = 0x80C2C5FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C5FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C5FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2C600:
    ctx->pc = 0x80C2C600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C600u)) return;
    // 80C2C600: bl      0x8045EC10
    {
            ctx->lr = 0x80C2C604u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C2C604:
    ctx->pc = 0x80C2C604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2C604: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C608:
    ctx->pc = 0x80C2C608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C608u)) return;
    // 80C2C608: addi    r3, r3, 28344
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28344);

label_80C2C60C:
    ctx->pc = 0x80C2C60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C60Cu)) return;
    // 80C2C60C: bl      0x8050AF58
    {
            ctx->lr = 0x80C2C610u;
            ctx->pc = 0x8050AF58u;
            return;
    }

label_80C2C610:
    ctx->pc = 0x80C2C610u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C610u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C610: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80C2C614:
    ctx->pc = 0x80C2C614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C614u)) return;
    // 80C2C614: bl      0x80C2DAA0
    {
            ctx->lr = 0x80C2C618u;
            goto label_80C2DAA0;
    }

label_80C2C618:
    ctx->pc = 0x80C2C618u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C618u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2C618: bl      0x8045DE7C
    {
            ctx->lr = 0x80C2C61Cu;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80C2C61C:
    ctx->pc = 0x80C2C61Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C61Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2C61C: bl      0x80460A60
    {
            ctx->lr = 0x80C2C620u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80C2C620:
    ctx->pc = 0x80C2C620u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C620u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2C620: bl      0x80460A24
    {
            ctx->lr = 0x80C2C624u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80C2C624:
    ctx->pc = 0x80C2C624u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C624u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C624: li      r3, 33
    ctx->gpr[3] = (u32)(s32)(33);

label_80C2C628:
    ctx->pc = 0x80C2C628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C628u)) return;
    // 80C2C628: bl      0x80406090
    {
            ctx->lr = 0x80C2C62Cu;
            ctx->pc = 0x80406090u;
            return;
    }

label_80C2C62C:
    ctx->pc = 0x80C2C62Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C62Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C62C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2C630:
    ctx->pc = 0x80C2C630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C630u)) return;
    // 80C2C630: bl      0x8045F220
    {
            ctx->lr = 0x80C2C634u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2C634:
    ctx->pc = 0x80C2C634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2C634: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2C638:
    ctx->pc = 0x80C2C638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C638u)) return;
    // 80C2C638: addi    r4, r4, 25404
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25404);

label_80C2C63C:
    ctx->pc = 0x80C2C63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C63Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2C63C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2C63Cu)) return;
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
label_80C2C640:
    ctx->pc = 0x80C2C640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C640u)) return;
    // 80C2C640: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2C644:
    ctx->pc = 0x80C2C644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C644u)) return;
    // 80C2C644: addi    r4, r4, 25348
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25348);

label_80C2C648:
    ctx->pc = 0x80C2C648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C648: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2C648u)) return;
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
label_80C2C64C:
    ctx->pc = 0x80C2C64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C64Cu)) return;
    // 80C2C64C: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2C650:
    ctx->pc = 0x80C2C650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C650u)) return;
    // 80C2C650: addi    r4, r4, 25408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25408);

label_80C2C654:
    ctx->pc = 0x80C2C654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2C654: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2C654u)) return;
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
label_80C2C658:
    ctx->pc = 0x80C2C658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C658u)) return;
    // 80C2C658: bl      0x8045EF2C
    {
            ctx->lr = 0x80C2C65Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C2C65C:
    ctx->pc = 0x80C2C65Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C65Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C65C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2C660:
    ctx->pc = 0x80C2C660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C660u)) return;
    // 80C2C660: bl      0x8045F220
    {
            ctx->lr = 0x80C2C664u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2C664:
    ctx->pc = 0x80C2C664u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C664u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C2C664: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2C668:
    ctx->pc = 0x80C2C668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C668u)) return;
    // 80C2C668: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C2C66C:
    ctx->pc = 0x80C2C66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C66Cu)) return;
    // 80C2C66C: addi    r5, r5, -32256
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32256);

label_80C2C670:
    ctx->pc = 0x80C2C670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C670u)) return;
    // 80C2C670: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C2C674:
    ctx->pc = 0x80C2C674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C674u)) return;
    // 80C2C674: bl      0x8045EEA8
    {
            ctx->lr = 0x80C2C678u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C2C678:
    ctx->pc = 0x80C2C678u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C678u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C678: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2C67C:
    ctx->pc = 0x80C2C67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C67Cu)) return;
    // 80C2C67C: bl      0x8045F220
    {
            ctx->lr = 0x80C2C680u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2C680:
    ctx->pc = 0x80C2C680u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C680u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2C680: lis     r4, -27452
    ctx->gpr[4] = ((u32)(s32)(-27452) << 16);

label_80C2C684:
    ctx->pc = 0x80C2C684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C684u)) return;
    // 80C2C684: addi    r4, r4, -6044
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6044);

label_80C2C688:
    ctx->pc = 0x80C2C688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C688u)) return;
    // 80C2C688: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C2C68C:
    ctx->pc = 0x80C2C68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C68Cu)) return;
    // 80C2C68C: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C2C690:
    ctx->pc = 0x80C2C690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C690u)) return;
    // 80C2C690: lis     r6, -27453
    ctx->gpr[6] = ((u32)(s32)(-27453) << 16);

label_80C2C694:
    ctx->pc = 0x80C2C694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C694u)) return;
    // 80C2C694: addi    r6, r6, 25396
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25396);

label_80C2C698:
    ctx->pc = 0x80C2C698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2C698: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2C698u)) return;
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
label_80C2C69C:
    ctx->pc = 0x80C2C69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C69Cu)) return;
    // 80C2C69C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C2C6A0:
    ctx->pc = 0x80C2C6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6A0u)) return;
    // 80C2C6A0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2C6A4:
    ctx->pc = 0x80C2C6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6A4u)) return;
    // 80C2C6A4: bl      0x8045EBE4
    {
            ctx->lr = 0x80C2C6A8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C2C6A8:
    ctx->pc = 0x80C2C6A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C6A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C6A8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2C6AC:
    ctx->pc = 0x80C2C6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6ACu)) return;
    // 80C2C6AC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2C6B0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2C6B0:
    ctx->pc = 0x80C2C6B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C6B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C6B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2C6B4:
    ctx->pc = 0x80C2C6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6B4u)) return;
    // 80C2C6B4: bl      0x8045F220
    {
            ctx->lr = 0x80C2C6B8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2C6B8:
    ctx->pc = 0x80C2C6B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C6B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2C6B8: lwz     r4, 32(r3)
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
label_80C2C6BC:
    ctx->pc = 0x80C2C6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6BCu)) return;
    // 80C2C6BC: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C6C0:
    ctx->pc = 0x80C2C6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6C0u)) return;
    // 80C2C6C0: addi    r3, r3, 25412
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25412);

label_80C2C6C4:
    ctx->pc = 0x80C2C6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2C6C4: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C6C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C2C6C8:
    ctx->pc = 0x80C2C6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2C6C8: lfs     f2, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2C6C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
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
label_80C2C6CC:
    ctx->pc = 0x80C2C6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6CCu)) return;
    // 80C2C6CC: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C6D0:
    ctx->pc = 0x80C2C6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6D0u)) return;
    // 80C2C6D0: addi    r3, r3, 25416
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25416);

label_80C2C6D4:
    ctx->pc = 0x80C2C6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2C6D4: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C6D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C2C6D8:
    ctx->pc = 0x80C2C6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6D8u)) return;
    // 80C2C6D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2C6DC:
    ctx->pc = 0x80C2C6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6DCu)) return;
    // 80C2C6DC: bl      0x80C2BD40
    {
            ctx->lr = 0x80C2C6E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C2BD40u;
                return;
            }
            goto label_80C2BD40;
    }

label_80C2C6E0:
    ctx->pc = 0x80C2C6E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C6E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C2C6E0: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2C6E4:
    ctx->pc = 0x80C2C6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6E4u)) return;
    // 80C2C6E4: lis     r4, -32676
    ctx->gpr[4] = ((u32)(s32)(-32676) << 16);

label_80C2C6E8:
    ctx->pc = 0x80C2C6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6E8u)) return;
    // 80C2C6E8: addi    r4, r4, 13404
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13404);

label_80C2C6EC:
    ctx->pc = 0x80C2C6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6ECu)) return;
    // 80C2C6EC: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2C6F0:
    ctx->pc = 0x80C2C6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6F0u)) return;
    // 80C2C6F0: addi    r5, r5, 25420
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25420);

label_80C2C6F4:
    ctx->pc = 0x80C2C6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2C6F4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2C6F4u)) return;
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
label_80C2C6F8:
    ctx->pc = 0x80C2C6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6F8u)) return;
    // 80C2C6F8: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2C6FC:
    ctx->pc = 0x80C2C6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C6FCu)) return;
    // 80C2C6FC: addi    r5, r5, 25348
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25348);

label_80C2C700:
    ctx->pc = 0x80C2C700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2C700: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2C700u)) return;
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
label_80C2C704:
    ctx->pc = 0x80C2C704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C704u)) return;
    // 80C2C704: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2C708:
    ctx->pc = 0x80C2C708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C708u)) return;
    // 80C2C708: addi    r5, r5, 25424
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25424);

label_80C2C70C:
    ctx->pc = 0x80C2C70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C70Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C70C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2C70Cu)) return;
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
label_80C2C710:
    ctx->pc = 0x80C2C710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C710u)) return;
    // 80C2C710: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C2C714:
    ctx->pc = 0x80C2C714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C714u)) return;
    // 80C2C714: li      r6, 1536
    ctx->gpr[6] = (u32)(s32)(1536);

label_80C2C718:
    ctx->pc = 0x80C2C718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C718u)) return;
    // 80C2C718: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2C71C:
    ctx->pc = 0x80C2C71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C71Cu)) return;
    // 80C2C71C: bl      0x8045ED84
    {
            ctx->lr = 0x80C2C720u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80C2C720:
    ctx->pc = 0x80C2C720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C720: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2C724:
    ctx->pc = 0x80C2C724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C724u)) return;
    // 80C2C724: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2C728u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2C728:
    ctx->pc = 0x80C2C728u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C728u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C2C728: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2C72C:
    ctx->pc = 0x80C2C72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C72Cu)) return;
    // 80C2C72C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2C730:
    ctx->pc = 0x80C2C730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C730u)) return;
    // 80C2C730: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2C734:
    ctx->pc = 0x80C2C734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C734u)) return;
    // 80C2C734: addi    r5, r5, 25428
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25428);

label_80C2C738:
    ctx->pc = 0x80C2C738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2C738: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2C738u)) return;
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
label_80C2C73C:
    ctx->pc = 0x80C2C73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C73Cu)) return;
    // 80C2C73C: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2C740:
    ctx->pc = 0x80C2C740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C740u)) return;
    // 80C2C740: addi    r5, r5, 25432
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25432);

label_80C2C744:
    ctx->pc = 0x80C2C744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C744: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2C744u)) return;
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
label_80C2C748:
    ctx->pc = 0x80C2C748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C748u)) return;
    // 80C2C748: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2C74C:
    ctx->pc = 0x80C2C74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C74Cu)) return;
    // 80C2C74C: addi    r5, r5, 25436
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25436);

label_80C2C750:
    ctx->pc = 0x80C2C750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2C750: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2C750u)) return;
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
label_80C2C754:
    ctx->pc = 0x80C2C754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C754u)) return;
    // 80C2C754: bl      0x8045C750
    {
            ctx->lr = 0x80C2C758u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C2C758:
    ctx->pc = 0x80C2C758u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C758u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C2C758: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2C75C:
    ctx->pc = 0x80C2C75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C75Cu)) return;
    // 80C2C75C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2C760:
    ctx->pc = 0x80C2C760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C760u)) return;
    // 80C2C760: li      r5, 6912
    ctx->gpr[5] = (u32)(s32)(6912);

label_80C2C764:
    ctx->pc = 0x80C2C764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C764u)) return;
    // 80C2C764: li      r6, 2560
    ctx->gpr[6] = (u32)(s32)(2560);

label_80C2C768:
    ctx->pc = 0x80C2C768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C768u)) return;
    // 80C2C768: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80C2C76C:
    ctx->pc = 0x80C2C76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C76Cu)) return;
    // 80C2C76C: addi    r7, r7, -512
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-512);

label_80C2C770:
    ctx->pc = 0x80C2C770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C770u)) return;
    // 80C2C770: bl      0x8045C7B4
    {
            ctx->lr = 0x80C2C774u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C2C774:
    ctx->pc = 0x80C2C774u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C774u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C2C774: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2C778:
    ctx->pc = 0x80C2C778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C778u)) return;
    // 80C2C778: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80C2C77C:
    ctx->pc = 0x80C2C77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C77Cu)) return;
    // 80C2C77C: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2C780:
    ctx->pc = 0x80C2C780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C780u)) return;
    // 80C2C780: addi    r5, r5, 25428
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25428);

label_80C2C784:
    ctx->pc = 0x80C2C784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2C784: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2C784u)) return;
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
label_80C2C788:
    ctx->pc = 0x80C2C788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C788u)) return;
    // 80C2C788: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2C78C:
    ctx->pc = 0x80C2C78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C78Cu)) return;
    // 80C2C78C: addi    r5, r5, 25432
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25432);

label_80C2C790:
    ctx->pc = 0x80C2C790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C790u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C790: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2C790u)) return;
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
label_80C2C794:
    ctx->pc = 0x80C2C794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C794u)) return;
    // 80C2C794: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2C798:
    ctx->pc = 0x80C2C798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C798u)) return;
    // 80C2C798: addi    r5, r5, 25436
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25436);

label_80C2C79C:
    ctx->pc = 0x80C2C79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C79Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2C79C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2C79Cu)) return;
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
label_80C2C7A0:
    ctx->pc = 0x80C2C7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C7A0u)) return;
    // 80C2C7A0: bl      0x8045C750
    {
            ctx->lr = 0x80C2C7A4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C2C7A4:
    ctx->pc = 0x80C2C7A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C7A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C2C7A4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2C7A8:
    ctx->pc = 0x80C2C7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C7A8u)) return;
    // 80C2C7A8: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80C2C7AC:
    ctx->pc = 0x80C2C7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C7ACu)) return;
    // 80C2C7AC: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C2C7B0:
    ctx->pc = 0x80C2C7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C7B0u)) return;
    // 80C2C7B0: addi    r5, r5, -2560
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2560);

label_80C2C7B4:
    ctx->pc = 0x80C2C7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C7B4u)) return;
    // 80C2C7B4: li      r6, 7936
    ctx->gpr[6] = (u32)(s32)(7936);

label_80C2C7B8:
    ctx->pc = 0x80C2C7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C7B8u)) return;
    // 80C2C7B8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2C7BC:
    ctx->pc = 0x80C2C7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C7BCu)) return;
    // 80C2C7BC: bl      0x8045C7B4
    {
            ctx->lr = 0x80C2C7C0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C2C7C0:
    ctx->pc = 0x80C2C7C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C7C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C7C0: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80C2C7C4:
    ctx->pc = 0x80C2C7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C7C4u)) return;
    // 80C2C7C4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2C7C8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2C7C8:
    ctx->pc = 0x80C2C7C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C7C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C7C8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2C7CC:
    ctx->pc = 0x80C2C7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C7CCu)) return;
    // 80C2C7CC: bl      0x8045F220
    {
            ctx->lr = 0x80C2C7D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2C7D0:
    ctx->pc = 0x80C2C7D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C7D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2C7D0: bl      0x8045C034
    {
            ctx->lr = 0x80C2C7D4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C2C7D4:
    ctx->pc = 0x80C2C7D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C7D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C7D4: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2C7D8:
    ctx->pc = 0x80C2C7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C7D8u)) return;
    // 80C2C7D8: bl      0x8045F220
    {
            ctx->lr = 0x80C2C7DCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2C7DC:
    ctx->pc = 0x80C2C7DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C7DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2C7DC: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2C7E0:
    ctx->pc = 0x80C2C7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C7E0u)) return;
    // 80C2C7E0: addi    r4, r4, 28356
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28356);

label_80C2C7E4:
    ctx->pc = 0x80C2C7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C7E4u)) return;
    // 80C2C7E4: bl      0x8045C060
    {
            ctx->lr = 0x80C2C7E8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C2C7E8:
    ctx->pc = 0x80C2C7E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C7E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C7E8: li      r3, 1049
    ctx->gpr[3] = (u32)(s32)(1049);

label_80C2C7EC:
    ctx->pc = 0x80C2C7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C7ECu)) return;
    // 80C2C7EC: bl      0x8045BFA0
    {
            ctx->lr = 0x80C2C7F0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C2C7F0:
    ctx->pc = 0x80C2C7F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C7F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2C7F0: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80C2C7F4:
    ctx->pc = 0x80C2C7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C7F4u)) return;
    // 80C2C7F4: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C2C7F8:
    ctx->pc = 0x80C2C7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C7F8u)) return;
    // 80C2C7F8: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C2C7FC:
    ctx->pc = 0x80C2C7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C7FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2C7FC: lwz     r0, 0(r4)
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
label_80C2C800:
    ctx->pc = 0x80C2C800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C800u)) return;
    // 80C2C800: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C2C804:
    ctx->pc = 0x80C2C804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C804u)) return;
    // 80C2C804: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2C808:
    ctx->pc = 0x80C2C808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C808u)) return;
    // 80C2C808: addi    r4, r4, 28252
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28252);

label_80C2C80C:
    ctx->pc = 0x80C2C80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C80Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2C80C: lwzx    r4, r4, r0
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
label_80C2C810:
    ctx->pc = 0x80C2C810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2C810: lwz     r4, 0(r4)
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
label_80C2C814:
    ctx->pc = 0x80C2C814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C814u)) return;
    // 80C2C814: bl      0x8045F608
    {
            ctx->lr = 0x80C2C818u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C2C818:
    ctx->pc = 0x80C2C818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C2C818: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2C81C:
    ctx->pc = 0x80C2C81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C81Cu)) return;
    // 80C2C81C: li      r4, 1336
    ctx->gpr[4] = (u32)(s32)(1336);

label_80C2C820:
    ctx->pc = 0x80C2C820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C820u)) return;
    // 80C2C820: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_80C2C824:
    ctx->pc = 0x80C2C824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C824u)) return;
    // 80C2C824: bl      0x80C2DBA8
    {
            ctx->lr = 0x80C2C828u;
            goto label_80C2DBA8;
    }

label_80C2C828:
    ctx->pc = 0x80C2C828u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C828u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80C2C828: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C82C:
    ctx->pc = 0x80C2C82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C82Cu)) return;
    // 80C2C82C: addi    r3, r3, 25440
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25440);

label_80C2C830:
    ctx->pc = 0x80C2C830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C830u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2C830: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C830u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C2C834:
    ctx->pc = 0x80C2C834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C834u)) return;
    // 80C2C834: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C838:
    ctx->pc = 0x80C2C838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C838u)) return;
    // 80C2C838: addi    r3, r3, 25348
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25348);

label_80C2C83C:
    ctx->pc = 0x80C2C83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C83Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2C83C: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C83Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C2C840:
    ctx->pc = 0x80C2C840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C840u)) return;
    // 80C2C840: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2C844:
    ctx->pc = 0x80C2C844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C844u)) return;
    // 80C2C844: addi    r3, r3, 25444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25444);

label_80C2C848:
    ctx->pc = 0x80C2C848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2C848: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2C848u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C2C84C:
    ctx->pc = 0x80C2C84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C84Cu)) return;
    // 80C2C84C: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80C2C850:
    ctx->pc = 0x80C2C850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C850u)) return;
    // 80C2C850: bl      0x80C2BEC0
    {
            ctx->lr = 0x80C2C854u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C2BEC0u;
                return;
            }
            goto label_80C2BEC0;
    }

label_80C2C854:
    ctx->pc = 0x80C2C854u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C854u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C854: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2C858:
    ctx->pc = 0x80C2C858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C858u)) return;
    // 80C2C858: bl      0x8045F220
    {
            ctx->lr = 0x80C2C85Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2C85C:
    ctx->pc = 0x80C2C85Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C85Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2C85C: bl      0x8045C034
    {
            ctx->lr = 0x80C2C860u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C2C860:
    ctx->pc = 0x80C2C860u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C860u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2C860: bl      0x8045F300
    {
            ctx->lr = 0x80C2C864u;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80C2C864:
    ctx->pc = 0x80C2C864u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C864u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C2C864: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2C868:
    ctx->pc = 0x80C2C868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C868u)) return;
    // 80C2C868: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2C86C:
    ctx->pc = 0x80C2C86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C86Cu)) return;
    // 80C2C86C: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2C870:
    ctx->pc = 0x80C2C870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C870u)) return;
    // 80C2C870: addi    r5, r5, 25448
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25448);

label_80C2C874:
    ctx->pc = 0x80C2C874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2C874: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2C874u)) return;
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
label_80C2C878:
    ctx->pc = 0x80C2C878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C878u)) return;
    // 80C2C878: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2C87C:
    ctx->pc = 0x80C2C87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C87Cu)) return;
    // 80C2C87C: addi    r5, r5, 25452
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25452);

label_80C2C880:
    ctx->pc = 0x80C2C880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2C880: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2C880u)) return;
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
label_80C2C884:
    ctx->pc = 0x80C2C884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C884u)) return;
    // 80C2C884: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2C888:
    ctx->pc = 0x80C2C888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C888u)) return;
    // 80C2C888: addi    r5, r5, 25456
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25456);

label_80C2C88C:
    ctx->pc = 0x80C2C88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C88Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2C88C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2C88Cu)) return;
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
label_80C2C890:
    ctx->pc = 0x80C2C890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C890u)) return;
    // 80C2C890: bl      0x8045C750
    {
            ctx->lr = 0x80C2C894u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C2C894:
    ctx->pc = 0x80C2C894u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C894u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C2C894: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2C898:
    ctx->pc = 0x80C2C898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C898u)) return;
    // 80C2C898: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2C89C:
    ctx->pc = 0x80C2C89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C89Cu)) return;
    // 80C2C89C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C2C8A0:
    ctx->pc = 0x80C2C8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C8A0u)) return;
    // 80C2C8A0: addi    r5, r5, -16128
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16128);

label_80C2C8A4:
    ctx->pc = 0x80C2C8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C8A4u)) return;
    // 80C2C8A4: li      r6, 2304
    ctx->gpr[6] = (u32)(s32)(2304);

label_80C2C8A8:
    ctx->pc = 0x80C2C8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C8A8u)) return;
    // 80C2C8A8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2C8AC:
    ctx->pc = 0x80C2C8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C8ACu)) return;
    // 80C2C8AC: bl      0x8045C7B4
    {
            ctx->lr = 0x80C2C8B0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C2C8B0:
    ctx->pc = 0x80C2C8B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C8B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C2C8B0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2C8B4:
    ctx->pc = 0x80C2C8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C8B4u)) return;
    // 80C2C8B4: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80C2C8B8:
    ctx->pc = 0x80C2C8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C8B8u)) return;
    // 80C2C8B8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C2C8BC:
    ctx->pc = 0x80C2C8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C8BCu)) return;
    // 80C2C8BC: addi    r5, r5, -1024
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1024);

label_80C2C8C0:
    ctx->pc = 0x80C2C8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C8C0u)) return;
    // 80C2C8C0: li      r6, 2304
    ctx->gpr[6] = (u32)(s32)(2304);

label_80C2C8C4:
    ctx->pc = 0x80C2C8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C8C4u)) return;
    // 80C2C8C4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2C8C8:
    ctx->pc = 0x80C2C8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C8C8u)) return;
    // 80C2C8C8: bl      0x8045C7B4
    {
            ctx->lr = 0x80C2C8CCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C2C8CC:
    ctx->pc = 0x80C2C8CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C8CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C8CC: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C2C8D0:
    ctx->pc = 0x80C2C8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C8D0u)) return;
    // 80C2C8D0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2C8D4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2C8D4:
    ctx->pc = 0x80C2C8D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C8D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C8D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2C8D8:
    ctx->pc = 0x80C2C8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C8D8u)) return;
    // 80C2C8D8: bl      0x80C2DC18
    {
            ctx->lr = 0x80C2C8DCu;
            goto label_80C2DC18;
    }

label_80C2C8DC:
    ctx->pc = 0x80C2C8DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C8DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C8DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2C8E0:
    ctx->pc = 0x80C2C8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C8E0u)) return;
    // 80C2C8E0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2C8E4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2C8E4:
    ctx->pc = 0x80C2C8E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C8E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C8E4: li      r3, 1050
    ctx->gpr[3] = (u32)(s32)(1050);

label_80C2C8E8:
    ctx->pc = 0x80C2C8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C8E8u)) return;
    // 80C2C8E8: bl      0x8045BFA0
    {
            ctx->lr = 0x80C2C8ECu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C2C8EC:
    ctx->pc = 0x80C2C8ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C8ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C8EC: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2C8F0:
    ctx->pc = 0x80C2C8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C8F0u)) return;
    // 80C2C8F0: bl      0x8045F220
    {
            ctx->lr = 0x80C2C8F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2C8F4:
    ctx->pc = 0x80C2C8F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C8F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2C8F4: lis     r4, -28546
    ctx->gpr[4] = ((u32)(s32)(-28546) << 16);

label_80C2C8F8:
    ctx->pc = 0x80C2C8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C8F8u)) return;
    // 80C2C8F8: addi    r4, r4, -27764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27764);

label_80C2C8FC:
    ctx->pc = 0x80C2C8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C8FCu)) return;
    // 80C2C8FC: lis     r5, -28548
    ctx->gpr[5] = ((u32)(s32)(-28548) << 16);

label_80C2C900:
    ctx->pc = 0x80C2C900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C900u)) return;
    // 80C2C900: addi    r5, r5, -23912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23912);

label_80C2C904:
    ctx->pc = 0x80C2C904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C904u)) return;
    // 80C2C904: lis     r6, -27453
    ctx->gpr[6] = ((u32)(s32)(-27453) << 16);

label_80C2C908:
    ctx->pc = 0x80C2C908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C908u)) return;
    // 80C2C908: addi    r6, r6, 25352
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25352);

label_80C2C90C:
    ctx->pc = 0x80C2C90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C90Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2C90C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2C90Cu)) return;
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
label_80C2C910:
    ctx->pc = 0x80C2C910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C910u)) return;
    // 80C2C910: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C2C914:
    ctx->pc = 0x80C2C914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C914u)) return;
    // 80C2C914: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80C2C918:
    ctx->pc = 0x80C2C918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C918u)) return;
    // 80C2C918: bl      0x8045EBE4
    {
            ctx->lr = 0x80C2C91Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C2C91C:
    ctx->pc = 0x80C2C91Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C91Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C91C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2C920:
    ctx->pc = 0x80C2C920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C920u)) return;
    // 80C2C920: bl      0x8045F220
    {
            ctx->lr = 0x80C2C924u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2C924:
    ctx->pc = 0x80C2C924u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C924u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2C924: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2C928:
    ctx->pc = 0x80C2C928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C928u)) return;
    // 80C2C928: addi    r4, r4, -4804
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4804);

label_80C2C92C:
    ctx->pc = 0x80C2C92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C92Cu)) return;
    // 80C2C92C: lis     r5, -28548
    ctx->gpr[5] = ((u32)(s32)(-28548) << 16);

label_80C2C930:
    ctx->pc = 0x80C2C930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C930u)) return;
    // 80C2C930: addi    r5, r5, -23912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23912);

label_80C2C934:
    ctx->pc = 0x80C2C934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C934u)) return;
    // 80C2C934: lis     r6, -27453
    ctx->gpr[6] = ((u32)(s32)(-27453) << 16);

label_80C2C938:
    ctx->pc = 0x80C2C938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C938u)) return;
    // 80C2C938: addi    r6, r6, 25352
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25352);

label_80C2C93C:
    ctx->pc = 0x80C2C93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C93Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2C93C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2C93Cu)) return;
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
label_80C2C940:
    ctx->pc = 0x80C2C940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C940u)) return;
    // 80C2C940: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C2C944:
    ctx->pc = 0x80C2C944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C944u)) return;
    // 80C2C944: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80C2C948:
    ctx->pc = 0x80C2C948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C948u)) return;
    // 80C2C948: bl      0x8045EBE4
    {
            ctx->lr = 0x80C2C94Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C2C94C:
    ctx->pc = 0x80C2C94Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C94Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2C94C: li      r3, 150
    ctx->gpr[3] = (u32)(s32)(150);

label_80C2C950:
    ctx->pc = 0x80C2C950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C950u)) return;
    // 80C2C950: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C2C954:
    ctx->pc = 0x80C2C954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C954u)) return;
    // 80C2C954: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C2C958:
    ctx->pc = 0x80C2C958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2C958: lwz     r0, 0(r4)
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
label_80C2C95C:
    ctx->pc = 0x80C2C95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C95Cu)) return;
    // 80C2C95C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C2C960:
    ctx->pc = 0x80C2C960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C960u)) return;
    // 80C2C960: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2C964:
    ctx->pc = 0x80C2C964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C964u)) return;
    // 80C2C964: addi    r4, r4, 28252
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28252);

label_80C2C968:
    ctx->pc = 0x80C2C968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C968u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2C968: lwzx    r4, r4, r0
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
label_80C2C96C:
    ctx->pc = 0x80C2C96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C96Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2C96C: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2C970:
    ctx->pc = 0x80C2C970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C970u)) return;
    // 80C2C970: bl      0x8045F608
    {
            ctx->lr = 0x80C2C974u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C2C974:
    ctx->pc = 0x80C2C974u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C974u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C974: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2C978:
    ctx->pc = 0x80C2C978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C978u)) return;
    // 80C2C978: bl      0x8045F220
    {
            ctx->lr = 0x80C2C97Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2C97C:
    ctx->pc = 0x80C2C97Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C97Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2C97C: bl      0x8045C034
    {
            ctx->lr = 0x80C2C980u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C2C980:
    ctx->pc = 0x80C2C980u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C980u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C980: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80C2C984:
    ctx->pc = 0x80C2C984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C984u)) return;
    // 80C2C984: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2C988u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2C988:
    ctx->pc = 0x80C2C988u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C988u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C988: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2C98C:
    ctx->pc = 0x80C2C98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C98Cu)) return;
    // 80C2C98C: bl      0x8045F220
    {
            ctx->lr = 0x80C2C990u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2C990:
    ctx->pc = 0x80C2C990u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C990u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2C990: bl      0x8045EB8C
    {
            ctx->lr = 0x80C2C994u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C2C994:
    ctx->pc = 0x80C2C994u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C994u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C994: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2C998:
    ctx->pc = 0x80C2C998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C998u)) return;
    // 80C2C998: bl      0x8045F220
    {
            ctx->lr = 0x80C2C99Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2C99C:
    ctx->pc = 0x80C2C99Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C99Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2C99C: lis     r4, -28567
    ctx->gpr[4] = ((u32)(s32)(-28567) << 16);

label_80C2C9A0:
    ctx->pc = 0x80C2C9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9A0u)) return;
    // 80C2C9A0: addi    r4, r4, 30148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30148);

label_80C2C9A4:
    ctx->pc = 0x80C2C9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9A4u)) return;
    // 80C2C9A4: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C2C9A8:
    ctx->pc = 0x80C2C9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9A8u)) return;
    // 80C2C9A8: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C2C9AC:
    ctx->pc = 0x80C2C9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9ACu)) return;
    // 80C2C9AC: lis     r6, -27453
    ctx->gpr[6] = ((u32)(s32)(-27453) << 16);

label_80C2C9B0:
    ctx->pc = 0x80C2C9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9B0u)) return;
    // 80C2C9B0: addi    r6, r6, 25352
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25352);

label_80C2C9B4:
    ctx->pc = 0x80C2C9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2C9B4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2C9B4u)) return;
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
label_80C2C9B8:
    ctx->pc = 0x80C2C9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9B8u)) return;
    // 80C2C9B8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C2C9BC:
    ctx->pc = 0x80C2C9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9BCu)) return;
    // 80C2C9BC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2C9C0:
    ctx->pc = 0x80C2C9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9C0u)) return;
    // 80C2C9C0: bl      0x8045EBE4
    {
            ctx->lr = 0x80C2C9C4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C2C9C4:
    ctx->pc = 0x80C2C9C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C9C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2C9C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2C9C8:
    ctx->pc = 0x80C2C9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9C8u)) return;
    // 80C2C9C8: bl      0x8045F220
    {
            ctx->lr = 0x80C2C9CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2C9CC:
    ctx->pc = 0x80C2C9CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C9CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C2C9CC: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2C9D0:
    ctx->pc = 0x80C2C9D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9D0u)) return;
    // 80C2C9D0: addi    r4, r4, 25460
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25460);

label_80C2C9D4:
    ctx->pc = 0x80C2C9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2C9D4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2C9D4u)) return;
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
label_80C2C9D8:
    ctx->pc = 0x80C2C9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9D8u)) return;
    // 80C2C9D8: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2C9DC:
    ctx->pc = 0x80C2C9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9DCu)) return;
    // 80C2C9DC: addi    r4, r4, 25348
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25348);

label_80C2C9E0:
    ctx->pc = 0x80C2C9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2C9E0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2C9E0u)) return;
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
label_80C2C9E4:
    ctx->pc = 0x80C2C9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9E4u)) return;
    // 80C2C9E4: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2C9E8:
    ctx->pc = 0x80C2C9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9E8u)) return;
    // 80C2C9E8: addi    r4, r4, 25464
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25464);

label_80C2C9EC:
    ctx->pc = 0x80C2C9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2C9EC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2C9ECu)) return;
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
label_80C2C9F0:
    ctx->pc = 0x80C2C9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9F0u)) return;
    // 80C2C9F0: fmr    f4, f2
    if (!ppc_fp_available_inline(ctx, 0x80C2C9F0u)) return;
    ctx->fpr[4] = ctx->fpr[2];

label_80C2C9F4:
    ctx->pc = 0x80C2C9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9F4u)) return;
    // 80C2C9F4: fmr    f5, f2
    if (!ppc_fp_available_inline(ctx, 0x80C2C9F4u)) return;
    ctx->fpr[5] = ctx->fpr[2];

label_80C2C9F8:
    ctx->pc = 0x80C2C9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2C9F8u)) return;
    // 80C2C9F8: bl      0x8045E570
    {
            ctx->lr = 0x80C2C9FCu;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80C2C9FC:
    ctx->pc = 0x80C2C9FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2C9FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2C9FC: bl      0x80C2BE40
    {
            ctx->lr = 0x80C2CA00u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C2BE40u;
                return;
            }
            goto label_80C2BE40;
    }

label_80C2CA00:
    ctx->pc = 0x80C2CA00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CA00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CA00: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80C2CA04:
    ctx->pc = 0x80C2CA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA04u)) return;
    // 80C2CA04: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2CA08u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2CA08:
    ctx->pc = 0x80C2CA08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CA08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C2CA08: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2CA0C:
    ctx->pc = 0x80C2CA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA0Cu)) return;
    // 80C2CA0C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2CA10:
    ctx->pc = 0x80C2CA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA10u)) return;
    // 80C2CA10: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2CA14:
    ctx->pc = 0x80C2CA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA14u)) return;
    // 80C2CA14: addi    r5, r5, 25468
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25468);

label_80C2CA18:
    ctx->pc = 0x80C2CA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2CA18: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2CA18u)) return;
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
label_80C2CA1C:
    ctx->pc = 0x80C2CA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA1Cu)) return;
    // 80C2CA1C: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2CA20:
    ctx->pc = 0x80C2CA20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA20u)) return;
    // 80C2CA20: addi    r5, r5, 25472
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25472);

label_80C2CA24:
    ctx->pc = 0x80C2CA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2CA24: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2CA24u)) return;
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
label_80C2CA28:
    ctx->pc = 0x80C2CA28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA28u)) return;
    // 80C2CA28: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2CA2C:
    ctx->pc = 0x80C2CA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA2Cu)) return;
    // 80C2CA2C: addi    r5, r5, 25476
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25476);

label_80C2CA30:
    ctx->pc = 0x80C2CA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2CA30: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2CA30u)) return;
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
label_80C2CA34:
    ctx->pc = 0x80C2CA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA34u)) return;
    // 80C2CA34: bl      0x8045C750
    {
            ctx->lr = 0x80C2CA38u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C2CA38:
    ctx->pc = 0x80C2CA38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CA38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C2CA38: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2CA3C:
    ctx->pc = 0x80C2CA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA3Cu)) return;
    // 80C2CA3C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2CA40:
    ctx->pc = 0x80C2CA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA40u)) return;
    // 80C2CA40: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C2CA44:
    ctx->pc = 0x80C2CA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA44u)) return;
    // 80C2CA44: li      r6, 30720
    ctx->gpr[6] = (u32)(s32)(30720);

label_80C2CA48:
    ctx->pc = 0x80C2CA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA48u)) return;
    // 80C2CA48: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2CA4C:
    ctx->pc = 0x80C2CA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA4Cu)) return;
    // 80C2CA4C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C2CA50u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C2CA50:
    ctx->pc = 0x80C2CA50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CA50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CA50: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2CA54:
    ctx->pc = 0x80C2CA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA54u)) return;
    // 80C2CA54: bl      0x8045F220
    {
            ctx->lr = 0x80C2CA58u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CA58:
    ctx->pc = 0x80C2CA58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CA58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CA58: bl      0x8045EB8C
    {
            ctx->lr = 0x80C2CA5Cu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C2CA5C:
    ctx->pc = 0x80C2CA5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CA5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CA5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CA60:
    ctx->pc = 0x80C2CA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA60u)) return;
    // 80C2CA60: bl      0x8045F220
    {
            ctx->lr = 0x80C2CA64u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CA64:
    ctx->pc = 0x80C2CA64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CA64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CA64: bl      0x8045C360
    {
            ctx->lr = 0x80C2CA68u;
            ctx->pc = 0x8045C360u;
            return;
    }

label_80C2CA68:
    ctx->pc = 0x80C2CA68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CA68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CA68: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CA6C:
    ctx->pc = 0x80C2CA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA6Cu)) return;
    // 80C2CA6C: bl      0x8045F220
    {
            ctx->lr = 0x80C2CA70u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CA70:
    ctx->pc = 0x80C2CA70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CA70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CA70: bl      0x8045E4DC
    {
            ctx->lr = 0x80C2CA74u;
            ctx->pc = 0x8045E4DCu;
            return;
    }

label_80C2CA74:
    ctx->pc = 0x80C2CA74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CA74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CA74: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CA78:
    ctx->pc = 0x80C2CA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA78u)) return;
    // 80C2CA78: bl      0x8045F220
    {
            ctx->lr = 0x80C2CA7Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CA7C:
    ctx->pc = 0x80C2CA7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CA7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CA7C: bl      0x8045EB8C
    {
            ctx->lr = 0x80C2CA80u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C2CA80:
    ctx->pc = 0x80C2CA80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CA80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CA80: bl      0x8045C3AC
    {
            ctx->lr = 0x80C2CA84u;
            ctx->pc = 0x8045C3ACu;
            return;
    }

label_80C2CA84:
    ctx->pc = 0x80C2CA84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CA84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C2CA84: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2CA88:
    ctx->pc = 0x80C2CA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA88u)) return;
    // 80C2CA88: li      r4, 300
    ctx->gpr[4] = (u32)(s32)(300);

label_80C2CA8C:
    ctx->pc = 0x80C2CA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA8Cu)) return;
    // 80C2CA8C: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2CA90:
    ctx->pc = 0x80C2CA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA90u)) return;
    // 80C2CA90: addi    r5, r5, 25480
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25480);

label_80C2CA94:
    ctx->pc = 0x80C2CA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2CA94: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2CA94u)) return;
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
label_80C2CA98:
    ctx->pc = 0x80C2CA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA98u)) return;
    // 80C2CA98: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2CA9C:
    ctx->pc = 0x80C2CA9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CA9Cu)) return;
    // 80C2CA9C: addi    r5, r5, 25472
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25472);

label_80C2CAA0:
    ctx->pc = 0x80C2CAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CAA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2CAA0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2CAA0u)) return;
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
label_80C2CAA4:
    ctx->pc = 0x80C2CAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CAA4u)) return;
    // 80C2CAA4: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2CAA8:
    ctx->pc = 0x80C2CAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CAA8u)) return;
    // 80C2CAA8: addi    r5, r5, 25484
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25484);

label_80C2CAAC:
    ctx->pc = 0x80C2CAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CAACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2CAAC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2CAACu)) return;
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
label_80C2CAB0:
    ctx->pc = 0x80C2CAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CAB0u)) return;
    // 80C2CAB0: bl      0x8045C750
    {
            ctx->lr = 0x80C2CAB4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C2CAB4:
    ctx->pc = 0x80C2CAB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CAB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CAB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CAB8:
    ctx->pc = 0x80C2CAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CAB8u)) return;
    // 80C2CAB8: bl      0x8045F220
    {
            ctx->lr = 0x80C2CABCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CABC:
    ctx->pc = 0x80C2CABCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CABCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2CABC: lis     r4, -27452
    ctx->gpr[4] = ((u32)(s32)(-27452) << 16);

label_80C2CAC0:
    ctx->pc = 0x80C2CAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CAC0u)) return;
    // 80C2CAC0: addi    r4, r4, -24260
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24260);

label_80C2CAC4:
    ctx->pc = 0x80C2CAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CAC4u)) return;
    // 80C2CAC4: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C2CAC8:
    ctx->pc = 0x80C2CAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CAC8u)) return;
    // 80C2CAC8: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C2CACC:
    ctx->pc = 0x80C2CACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CACCu)) return;
    // 80C2CACC: lis     r6, -27453
    ctx->gpr[6] = ((u32)(s32)(-27453) << 16);

label_80C2CAD0:
    ctx->pc = 0x80C2CAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CAD0u)) return;
    // 80C2CAD0: addi    r6, r6, 25352
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25352);

label_80C2CAD4:
    ctx->pc = 0x80C2CAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CAD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2CAD4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2CAD4u)) return;
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
label_80C2CAD8:
    ctx->pc = 0x80C2CAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CAD8u)) return;
    // 80C2CAD8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C2CADC:
    ctx->pc = 0x80C2CADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CADCu)) return;
    // 80C2CADC: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80C2CAE0:
    ctx->pc = 0x80C2CAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CAE0u)) return;
    // 80C2CAE0: bl      0x8045EBE4
    {
            ctx->lr = 0x80C2CAE4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C2CAE4:
    ctx->pc = 0x80C2CAE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CAE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CAE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CAE8:
    ctx->pc = 0x80C2CAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CAE8u)) return;
    // 80C2CAE8: bl      0x8045F220
    {
            ctx->lr = 0x80C2CAECu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CAEC:
    ctx->pc = 0x80C2CAECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CAECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2CAEC: lis     r4, -27452
    ctx->gpr[4] = ((u32)(s32)(-27452) << 16);

label_80C2CAF0:
    ctx->pc = 0x80C2CAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CAF0u)) return;
    // 80C2CAF0: addi    r4, r4, -15360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15360);

label_80C2CAF4:
    ctx->pc = 0x80C2CAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CAF4u)) return;
    // 80C2CAF4: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C2CAF8:
    ctx->pc = 0x80C2CAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CAF8u)) return;
    // 80C2CAF8: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C2CAFC:
    ctx->pc = 0x80C2CAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CAFCu)) return;
    // 80C2CAFC: lis     r6, -27453
    ctx->gpr[6] = ((u32)(s32)(-27453) << 16);

label_80C2CB00:
    ctx->pc = 0x80C2CB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB00u)) return;
    // 80C2CB00: addi    r6, r6, 25396
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25396);

label_80C2CB04:
    ctx->pc = 0x80C2CB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2CB04: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2CB04u)) return;
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
label_80C2CB08:
    ctx->pc = 0x80C2CB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB08u)) return;
    // 80C2CB08: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C2CB0C:
    ctx->pc = 0x80C2CB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB0Cu)) return;
    // 80C2CB0C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2CB10:
    ctx->pc = 0x80C2CB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB10u)) return;
    // 80C2CB10: bl      0x8045EBE4
    {
            ctx->lr = 0x80C2CB14u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C2CB14:
    ctx->pc = 0x80C2CB14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CB14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CB14: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_80C2CB18:
    ctx->pc = 0x80C2CB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB18u)) return;
    // 80C2CB18: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2CB1Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2CB1C:
    ctx->pc = 0x80C2CB1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CB1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CB1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CB20:
    ctx->pc = 0x80C2CB20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB20u)) return;
    // 80C2CB20: bl      0x8045F220
    {
            ctx->lr = 0x80C2CB24u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CB24:
    ctx->pc = 0x80C2CB24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CB24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2CB24: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2CB28:
    ctx->pc = 0x80C2CB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB28u)) return;
    // 80C2CB28: addi    r4, r4, 28360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28360);

label_80C2CB2C:
    ctx->pc = 0x80C2CB2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB2Cu)) return;
    // 80C2CB2C: bl      0x8045C060
    {
            ctx->lr = 0x80C2CB30u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C2CB30:
    ctx->pc = 0x80C2CB30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CB30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CB30: li      r3, 1051
    ctx->gpr[3] = (u32)(s32)(1051);

label_80C2CB34:
    ctx->pc = 0x80C2CB34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB34u)) return;
    // 80C2CB34: bl      0x8045BFA0
    {
            ctx->lr = 0x80C2CB38u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C2CB38:
    ctx->pc = 0x80C2CB38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CB38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C2CB38: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C2CB3C:
    ctx->pc = 0x80C2CB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB3Cu)) return;
    // 80C2CB3C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C2CB40:
    ctx->pc = 0x80C2CB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2CB40: lwz     r0, 0(r3)
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
label_80C2CB44:
    ctx->pc = 0x80C2CB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB44u)) return;
    // 80C2CB44: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C2CB48:
    ctx->pc = 0x80C2CB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB48u)) return;
    // 80C2CB48: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2CB4C:
    ctx->pc = 0x80C2CB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB4Cu)) return;
    // 80C2CB4C: addi    r3, r3, 28252
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28252);

label_80C2CB50:
    ctx->pc = 0x80C2CB50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2CB50: lwzx    r3, r3, r0
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
label_80C2CB54:
    ctx->pc = 0x80C2CB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2CB54: lwz     r3, 8(r3)
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
label_80C2CB58:
    ctx->pc = 0x80C2CB58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB58u)) return;
    // 80C2CB58: bl      0x8045F6FC
    {
            ctx->lr = 0x80C2CB5Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C2CB5C:
    ctx->pc = 0x80C2CB5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CB5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CB5C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2CB60:
    ctx->pc = 0x80C2CB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB60u)) return;
    // 80C2CB60: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2CB64u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2CB64:
    ctx->pc = 0x80C2CB64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CB64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CB64: bl      0x8045BFF4
    {
            ctx->lr = 0x80C2CB68u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80C2CB68:
    ctx->pc = 0x80C2CB68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CB68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CB68: bl      0x8045F32C
    {
            ctx->lr = 0x80C2CB6Cu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C2CB6C:
    ctx->pc = 0x80C2CB6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CB6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CB6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CB70:
    ctx->pc = 0x80C2CB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB70u)) return;
    // 80C2CB70: bl      0x8045F220
    {
            ctx->lr = 0x80C2CB74u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CB74:
    ctx->pc = 0x80C2CB74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CB74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CB74: bl      0x8045C034
    {
            ctx->lr = 0x80C2CB78u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C2CB78:
    ctx->pc = 0x80C2CB78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CB78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CB78: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80C2CB7C:
    ctx->pc = 0x80C2CB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB7Cu)) return;
    // 80C2CB7C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2CB80u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2CB80:
    ctx->pc = 0x80C2CB80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CB80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CB80: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80C2CB84:
    ctx->pc = 0x80C2CB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB84u)) return;
    // 80C2CB84: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2CB88u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2CB88:
    ctx->pc = 0x80C2CB88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CB88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CB88: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2CB8C:
    ctx->pc = 0x80C2CB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB8Cu)) return;
    // 80C2CB8C: bl      0x8045F220
    {
            ctx->lr = 0x80C2CB90u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CB90:
    ctx->pc = 0x80C2CB90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CB90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CB90: bl      0x8045C034
    {
            ctx->lr = 0x80C2CB94u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C2CB94:
    ctx->pc = 0x80C2CB94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CB94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CB94: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2CB98:
    ctx->pc = 0x80C2CB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CB98u)) return;
    // 80C2CB98: bl      0x8045F220
    {
            ctx->lr = 0x80C2CB9Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CB9C:
    ctx->pc = 0x80C2CB9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CB9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2CB9C: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2CBA0:
    ctx->pc = 0x80C2CBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CBA0u)) return;
    // 80C2CBA0: addi    r4, r4, 28364
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28364);

label_80C2CBA4:
    ctx->pc = 0x80C2CBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CBA4u)) return;
    // 80C2CBA4: bl      0x8045C060
    {
            ctx->lr = 0x80C2CBA8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C2CBA8:
    ctx->pc = 0x80C2CBA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CBA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CBA8: li      r3, 1052
    ctx->gpr[3] = (u32)(s32)(1052);

label_80C2CBAC:
    ctx->pc = 0x80C2CBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CBACu)) return;
    // 80C2CBAC: bl      0x8045BFA0
    {
            ctx->lr = 0x80C2CBB0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C2CBB0:
    ctx->pc = 0x80C2CBB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CBB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2CBB0: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C2CBB4:
    ctx->pc = 0x80C2CBB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CBB4u)) return;
    // 80C2CBB4: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C2CBB8:
    ctx->pc = 0x80C2CBB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CBB8u)) return;
    // 80C2CBB8: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C2CBBC:
    ctx->pc = 0x80C2CBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CBBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2CBBC: lwz     r0, 0(r4)
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
label_80C2CBC0:
    ctx->pc = 0x80C2CBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CBC0u)) return;
    // 80C2CBC0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C2CBC4:
    ctx->pc = 0x80C2CBC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CBC4u)) return;
    // 80C2CBC4: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2CBC8:
    ctx->pc = 0x80C2CBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CBC8u)) return;
    // 80C2CBC8: addi    r4, r4, 28252
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28252);

label_80C2CBCC:
    ctx->pc = 0x80C2CBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CBCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2CBCC: lwzx    r4, r4, r0
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
label_80C2CBD0:
    ctx->pc = 0x80C2CBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CBD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2CBD0: lwz     r4, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2CBD4:
    ctx->pc = 0x80C2CBD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CBD4u)) return;
    // 80C2CBD4: bl      0x8045F608
    {
            ctx->lr = 0x80C2CBD8u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C2CBD8:
    ctx->pc = 0x80C2CBD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CBD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CBD8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2CBDC:
    ctx->pc = 0x80C2CBDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CBDCu)) return;
    // 80C2CBDC: bl      0x8045F220
    {
            ctx->lr = 0x80C2CBE0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CBE0:
    ctx->pc = 0x80C2CBE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CBE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CBE0: bl      0x8045C034
    {
            ctx->lr = 0x80C2CBE4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C2CBE4:
    ctx->pc = 0x80C2CBE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CBE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CBE4: bl      0x8045F32C
    {
            ctx->lr = 0x80C2CBE8u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C2CBE8:
    ctx->pc = 0x80C2CBE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CBE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CBE8: li      r3, 1053
    ctx->gpr[3] = (u32)(s32)(1053);

label_80C2CBEC:
    ctx->pc = 0x80C2CBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CBECu)) return;
    // 80C2CBEC: bl      0x8045BFA0
    {
            ctx->lr = 0x80C2CBF0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C2CBF0:
    ctx->pc = 0x80C2CBF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CBF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C2CBF0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C2CBF4:
    ctx->pc = 0x80C2CBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CBF4u)) return;
    // 80C2CBF4: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C2CBF8:
    ctx->pc = 0x80C2CBF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CBF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2CBF8: lwz     r0, 0(r3)
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
label_80C2CBFC:
    ctx->pc = 0x80C2CBFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CBFCu)) return;
    // 80C2CBFC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C2CC00:
    ctx->pc = 0x80C2CC00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC00u)) return;
    // 80C2CC00: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2CC04:
    ctx->pc = 0x80C2CC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC04u)) return;
    // 80C2CC04: addi    r3, r3, 28252
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28252);

label_80C2CC08:
    ctx->pc = 0x80C2CC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2CC08: lwzx    r3, r3, r0
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
label_80C2CC0C:
    ctx->pc = 0x80C2CC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2CC0C: lwz     r3, 16(r3)
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
label_80C2CC10:
    ctx->pc = 0x80C2CC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC10u)) return;
    // 80C2CC10: bl      0x8045F6FC
    {
            ctx->lr = 0x80C2CC14u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C2CC14:
    ctx->pc = 0x80C2CC14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CC14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CC14: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2CC18:
    ctx->pc = 0x80C2CC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC18u)) return;
    // 80C2CC18: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2CC1Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2CC1C:
    ctx->pc = 0x80C2CC1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CC1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CC1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CC20:
    ctx->pc = 0x80C2CC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC20u)) return;
    // 80C2CC20: bl      0x8045F220
    {
            ctx->lr = 0x80C2CC24u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CC24:
    ctx->pc = 0x80C2CC24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CC24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2CC24: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2CC28:
    ctx->pc = 0x80C2CC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC28u)) return;
    // 80C2CC28: addi    r4, r4, 25404
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25404);

label_80C2CC2C:
    ctx->pc = 0x80C2CC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2CC2C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2CC2Cu)) return;
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
label_80C2CC30:
    ctx->pc = 0x80C2CC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC30u)) return;
    // 80C2CC30: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2CC34:
    ctx->pc = 0x80C2CC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC34u)) return;
    // 80C2CC34: addi    r4, r4, 25348
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25348);

label_80C2CC38:
    ctx->pc = 0x80C2CC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2CC38: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2CC38u)) return;
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
label_80C2CC3C:
    ctx->pc = 0x80C2CC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC3Cu)) return;
    // 80C2CC3C: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2CC40:
    ctx->pc = 0x80C2CC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC40u)) return;
    // 80C2CC40: addi    r4, r4, 25408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25408);

label_80C2CC44:
    ctx->pc = 0x80C2CC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2CC44: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2CC44u)) return;
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
label_80C2CC48:
    ctx->pc = 0x80C2CC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC48u)) return;
    // 80C2CC48: bl      0x8045EF2C
    {
            ctx->lr = 0x80C2CC4Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C2CC4C:
    ctx->pc = 0x80C2CC4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CC4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CC4C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CC50:
    ctx->pc = 0x80C2CC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC50u)) return;
    // 80C2CC50: bl      0x8045F220
    {
            ctx->lr = 0x80C2CC54u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CC54:
    ctx->pc = 0x80C2CC54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CC54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C2CC54: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2CC58:
    ctx->pc = 0x80C2CC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC58u)) return;
    // 80C2CC58: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C2CC5C:
    ctx->pc = 0x80C2CC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC5Cu)) return;
    // 80C2CC5C: addi    r5, r5, -32768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32768);

label_80C2CC60:
    ctx->pc = 0x80C2CC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC60u)) return;
    // 80C2CC60: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C2CC64:
    ctx->pc = 0x80C2CC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC64u)) return;
    // 80C2CC64: bl      0x8045EEA8
    {
            ctx->lr = 0x80C2CC68u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C2CC68:
    ctx->pc = 0x80C2CC68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CC68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C2CC68: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2CC6C:
    ctx->pc = 0x80C2CC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC6Cu)) return;
    // 80C2CC6C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2CC70:
    ctx->pc = 0x80C2CC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC70u)) return;
    // 80C2CC70: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2CC74:
    ctx->pc = 0x80C2CC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC74u)) return;
    // 80C2CC74: addi    r5, r5, 25488
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25488);

label_80C2CC78:
    ctx->pc = 0x80C2CC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2CC78: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2CC78u)) return;
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
label_80C2CC7C:
    ctx->pc = 0x80C2CC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC7Cu)) return;
    // 80C2CC7C: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2CC80:
    ctx->pc = 0x80C2CC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC80u)) return;
    // 80C2CC80: addi    r5, r5, 25492
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25492);

label_80C2CC84:
    ctx->pc = 0x80C2CC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2CC84: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2CC84u)) return;
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
label_80C2CC88:
    ctx->pc = 0x80C2CC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC88u)) return;
    // 80C2CC88: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2CC8C:
    ctx->pc = 0x80C2CC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC8Cu)) return;
    // 80C2CC8C: addi    r5, r5, 25496
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25496);

label_80C2CC90:
    ctx->pc = 0x80C2CC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2CC90: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2CC90u)) return;
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
label_80C2CC94:
    ctx->pc = 0x80C2CC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC94u)) return;
    // 80C2CC94: bl      0x8045C750
    {
            ctx->lr = 0x80C2CC98u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C2CC98:
    ctx->pc = 0x80C2CC98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CC98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C2CC98: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2CC9C:
    ctx->pc = 0x80C2CC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CC9Cu)) return;
    // 80C2CC9C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2CCA0:
    ctx->pc = 0x80C2CCA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CCA0u)) return;
    // 80C2CCA0: li      r5, 1280
    ctx->gpr[5] = (u32)(s32)(1280);

label_80C2CCA4:
    ctx->pc = 0x80C2CCA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CCA4u)) return;
    // 80C2CCA4: li      r6, 25856
    ctx->gpr[6] = (u32)(s32)(25856);

label_80C2CCA8:
    ctx->pc = 0x80C2CCA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CCA8u)) return;
    // 80C2CCA8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2CCAC:
    ctx->pc = 0x80C2CCACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CCACu)) return;
    // 80C2CCAC: bl      0x8045C7B4
    {
            ctx->lr = 0x80C2CCB0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C2CCB0:
    ctx->pc = 0x80C2CCB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CCB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CCB0: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80C2CCB4:
    ctx->pc = 0x80C2CCB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CCB4u)) return;
    // 80C2CCB4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2CCB8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2CCB8:
    ctx->pc = 0x80C2CCB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CCB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CCB8: bl      0x8045F300
    {
            ctx->lr = 0x80C2CCBCu;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80C2CCBC:
    ctx->pc = 0x80C2CCBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CCBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CCBC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2CCC0:
    ctx->pc = 0x80C2CCC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CCC0u)) return;
    // 80C2CCC0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2CCC4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2CCC4:
    ctx->pc = 0x80C2CCC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CCC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CCC4: bl      0x8045BFF4
    {
            ctx->lr = 0x80C2CCC8u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80C2CCC8:
    ctx->pc = 0x80C2CCC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CCC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CCC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CCCC:
    ctx->pc = 0x80C2CCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CCCCu)) return;
    // 80C2CCCC: bl      0x8045F220
    {
            ctx->lr = 0x80C2CCD0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CCD0:
    ctx->pc = 0x80C2CCD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CCD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2CCD0: lis     r4, -28567
    ctx->gpr[4] = ((u32)(s32)(-28567) << 16);

label_80C2CCD4:
    ctx->pc = 0x80C2CCD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CCD4u)) return;
    // 80C2CCD4: addi    r4, r4, 17360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17360);

label_80C2CCD8:
    ctx->pc = 0x80C2CCD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CCD8u)) return;
    // 80C2CCD8: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C2CCDC:
    ctx->pc = 0x80C2CCDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CCDCu)) return;
    // 80C2CCDC: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C2CCE0:
    ctx->pc = 0x80C2CCE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CCE0u)) return;
    // 80C2CCE0: lis     r6, -27453
    ctx->gpr[6] = ((u32)(s32)(-27453) << 16);

label_80C2CCE4:
    ctx->pc = 0x80C2CCE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CCE4u)) return;
    // 80C2CCE4: addi    r6, r6, 25352
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25352);

label_80C2CCE8:
    ctx->pc = 0x80C2CCE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CCE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2CCE8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2CCE8u)) return;
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
label_80C2CCEC:
    ctx->pc = 0x80C2CCECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CCECu)) return;
    // 80C2CCEC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C2CCF0:
    ctx->pc = 0x80C2CCF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CCF0u)) return;
    // 80C2CCF0: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80C2CCF4:
    ctx->pc = 0x80C2CCF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CCF4u)) return;
    // 80C2CCF4: bl      0x8045EBE4
    {
            ctx->lr = 0x80C2CCF8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C2CCF8:
    ctx->pc = 0x80C2CCF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CCF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CCF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CCFC:
    ctx->pc = 0x80C2CCFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CCFCu)) return;
    // 80C2CCFC: bl      0x8045F220
    {
            ctx->lr = 0x80C2CD00u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CD00:
    ctx->pc = 0x80C2CD00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CD00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CD00: bl      0x8045C034
    {
            ctx->lr = 0x80C2CD04u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C2CD04:
    ctx->pc = 0x80C2CD04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CD04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CD04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CD08:
    ctx->pc = 0x80C2CD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD08u)) return;
    // 80C2CD08: bl      0x8045F220
    {
            ctx->lr = 0x80C2CD0Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CD0C:
    ctx->pc = 0x80C2CD0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CD0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2CD0C: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2CD10:
    ctx->pc = 0x80C2CD10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD10u)) return;
    // 80C2CD10: addi    r4, r4, 28380
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28380);

label_80C2CD14:
    ctx->pc = 0x80C2CD14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD14u)) return;
    // 80C2CD14: bl      0x8045C060
    {
            ctx->lr = 0x80C2CD18u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C2CD18:
    ctx->pc = 0x80C2CD18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CD18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CD18: li      r3, 1054
    ctx->gpr[3] = (u32)(s32)(1054);

label_80C2CD1C:
    ctx->pc = 0x80C2CD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD1Cu)) return;
    // 80C2CD1C: bl      0x8045BFA0
    {
            ctx->lr = 0x80C2CD20u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C2CD20:
    ctx->pc = 0x80C2CD20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CD20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C2CD20: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C2CD24:
    ctx->pc = 0x80C2CD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD24u)) return;
    // 80C2CD24: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C2CD28:
    ctx->pc = 0x80C2CD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2CD28: lwz     r0, 0(r3)
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
label_80C2CD2C:
    ctx->pc = 0x80C2CD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD2Cu)) return;
    // 80C2CD2C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C2CD30:
    ctx->pc = 0x80C2CD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD30u)) return;
    // 80C2CD30: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2CD34:
    ctx->pc = 0x80C2CD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD34u)) return;
    // 80C2CD34: addi    r3, r3, 28252
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28252);

label_80C2CD38:
    ctx->pc = 0x80C2CD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2CD38: lwzx    r3, r3, r0
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
label_80C2CD3C:
    ctx->pc = 0x80C2CD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2CD3C: lwz     r3, 20(r3)
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
label_80C2CD40:
    ctx->pc = 0x80C2CD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD40u)) return;
    // 80C2CD40: bl      0x8045F6FC
    {
            ctx->lr = 0x80C2CD44u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C2CD44:
    ctx->pc = 0x80C2CD44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CD44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CD44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CD48:
    ctx->pc = 0x80C2CD48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD48u)) return;
    // 80C2CD48: bl      0x8045F220
    {
            ctx->lr = 0x80C2CD4Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CD4C:
    ctx->pc = 0x80C2CD4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CD4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CD4C: bl      0x8045C034
    {
            ctx->lr = 0x80C2CD50u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C2CD50:
    ctx->pc = 0x80C2CD50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CD50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CD50: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80C2CD54:
    ctx->pc = 0x80C2CD54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD54u)) return;
    // 80C2CD54: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2CD58u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2CD58:
    ctx->pc = 0x80C2CD58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CD58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CD58: bl      0x8045F300
    {
            ctx->lr = 0x80C2CD5Cu;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80C2CD5C:
    ctx->pc = 0x80C2CD5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CD5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C2CD5C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2CD60:
    ctx->pc = 0x80C2CD60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD60u)) return;
    // 80C2CD60: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2CD64:
    ctx->pc = 0x80C2CD64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD64u)) return;
    // 80C2CD64: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2CD68:
    ctx->pc = 0x80C2CD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD68u)) return;
    // 80C2CD68: addi    r5, r5, 25500
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25500);

label_80C2CD6C:
    ctx->pc = 0x80C2CD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2CD6C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2CD6Cu)) return;
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
label_80C2CD70:
    ctx->pc = 0x80C2CD70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD70u)) return;
    // 80C2CD70: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2CD74:
    ctx->pc = 0x80C2CD74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD74u)) return;
    // 80C2CD74: addi    r5, r5, 25504
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25504);

label_80C2CD78:
    ctx->pc = 0x80C2CD78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2CD78: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2CD78u)) return;
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
label_80C2CD7C:
    ctx->pc = 0x80C2CD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD7Cu)) return;
    // 80C2CD7C: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2CD80:
    ctx->pc = 0x80C2CD80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD80u)) return;
    // 80C2CD80: addi    r5, r5, 25508
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25508);

label_80C2CD84:
    ctx->pc = 0x80C2CD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2CD84: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2CD84u)) return;
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
label_80C2CD88:
    ctx->pc = 0x80C2CD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD88u)) return;
    // 80C2CD88: bl      0x8045C750
    {
            ctx->lr = 0x80C2CD8Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C2CD8C:
    ctx->pc = 0x80C2CD8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CD8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C2CD8C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2CD90:
    ctx->pc = 0x80C2CD90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD90u)) return;
    // 80C2CD90: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2CD94:
    ctx->pc = 0x80C2CD94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD94u)) return;
    // 80C2CD94: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C2CD98:
    ctx->pc = 0x80C2CD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD98u)) return;
    // 80C2CD98: addi    r5, r5, -2304
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2304);

label_80C2CD9C:
    ctx->pc = 0x80C2CD9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CD9Cu)) return;
    // 80C2CD9C: li      r6, 7680
    ctx->gpr[6] = (u32)(s32)(7680);

label_80C2CDA0:
    ctx->pc = 0x80C2CDA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CDA0u)) return;
    // 80C2CDA0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2CDA4:
    ctx->pc = 0x80C2CDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CDA4u)) return;
    // 80C2CDA4: bl      0x8045C7B4
    {
            ctx->lr = 0x80C2CDA8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C2CDA8:
    ctx->pc = 0x80C2CDA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CDA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CDA8: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80C2CDAC:
    ctx->pc = 0x80C2CDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CDACu)) return;
    // 80C2CDAC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2CDB0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2CDB0:
    ctx->pc = 0x80C2CDB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CDB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CDB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CDB4:
    ctx->pc = 0x80C2CDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CDB4u)) return;
    // 80C2CDB4: bl      0x8045F220
    {
            ctx->lr = 0x80C2CDB8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CDB8:
    ctx->pc = 0x80C2CDB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CDB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2CDB8: lis     r4, -27452
    ctx->gpr[4] = ((u32)(s32)(-27452) << 16);

label_80C2CDBC:
    ctx->pc = 0x80C2CDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CDBCu)) return;
    // 80C2CDBC: addi    r4, r4, 21664
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21664);

label_80C2CDC0:
    ctx->pc = 0x80C2CDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CDC0u)) return;
    // 80C2CDC0: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C2CDC4:
    ctx->pc = 0x80C2CDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CDC4u)) return;
    // 80C2CDC4: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C2CDC8:
    ctx->pc = 0x80C2CDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CDC8u)) return;
    // 80C2CDC8: lis     r6, -27453
    ctx->gpr[6] = ((u32)(s32)(-27453) << 16);

label_80C2CDCC:
    ctx->pc = 0x80C2CDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CDCCu)) return;
    // 80C2CDCC: addi    r6, r6, 25352
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25352);

label_80C2CDD0:
    ctx->pc = 0x80C2CDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CDD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2CDD0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2CDD0u)) return;
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
label_80C2CDD4:
    ctx->pc = 0x80C2CDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CDD4u)) return;
    // 80C2CDD4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C2CDD8:
    ctx->pc = 0x80C2CDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CDD8u)) return;
    // 80C2CDD8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2CDDC:
    ctx->pc = 0x80C2CDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CDDCu)) return;
    // 80C2CDDC: bl      0x8045EBE4
    {
            ctx->lr = 0x80C2CDE0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C2CDE0:
    ctx->pc = 0x80C2CDE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CDE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CDE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CDE4:
    ctx->pc = 0x80C2CDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CDE4u)) return;
    // 80C2CDE4: bl      0x8045F220
    {
            ctx->lr = 0x80C2CDE8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CDE8:
    ctx->pc = 0x80C2CDE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CDE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2CDE8: lis     r4, -27452
    ctx->gpr[4] = ((u32)(s32)(-27452) << 16);

label_80C2CDEC:
    ctx->pc = 0x80C2CDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CDECu)) return;
    // 80C2CDEC: addi    r4, r4, 30020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30020);

label_80C2CDF0:
    ctx->pc = 0x80C2CDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CDF0u)) return;
    // 80C2CDF0: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C2CDF4:
    ctx->pc = 0x80C2CDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CDF4u)) return;
    // 80C2CDF4: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C2CDF8:
    ctx->pc = 0x80C2CDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CDF8u)) return;
    // 80C2CDF8: lis     r6, -27453
    ctx->gpr[6] = ((u32)(s32)(-27453) << 16);

label_80C2CDFC:
    ctx->pc = 0x80C2CDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CDFCu)) return;
    // 80C2CDFC: addi    r6, r6, 25396
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25396);

label_80C2CE00:
    ctx->pc = 0x80C2CE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2CE00: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2CE00u)) return;
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
label_80C2CE04:
    ctx->pc = 0x80C2CE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE04u)) return;
    // 80C2CE04: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C2CE08:
    ctx->pc = 0x80C2CE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE08u)) return;
    // 80C2CE08: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2CE0C:
    ctx->pc = 0x80C2CE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE0Cu)) return;
    // 80C2CE0C: bl      0x8045EBE4
    {
            ctx->lr = 0x80C2CE10u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C2CE10:
    ctx->pc = 0x80C2CE10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CE10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CE10: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80C2CE14:
    ctx->pc = 0x80C2CE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE14u)) return;
    // 80C2CE14: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2CE18u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2CE18:
    ctx->pc = 0x80C2CE18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CE18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CE18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CE1C:
    ctx->pc = 0x80C2CE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE1Cu)) return;
    // 80C2CE1C: bl      0x8045F220
    {
            ctx->lr = 0x80C2CE20u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CE20:
    ctx->pc = 0x80C2CE20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CE20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CE20: bl      0x8045C034
    {
            ctx->lr = 0x80C2CE24u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C2CE24:
    ctx->pc = 0x80C2CE24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CE24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CE24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CE28:
    ctx->pc = 0x80C2CE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE28u)) return;
    // 80C2CE28: bl      0x8045F220
    {
            ctx->lr = 0x80C2CE2Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CE2C:
    ctx->pc = 0x80C2CE2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CE2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2CE2C: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2CE30:
    ctx->pc = 0x80C2CE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE30u)) return;
    // 80C2CE30: addi    r4, r4, 28384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28384);

label_80C2CE34:
    ctx->pc = 0x80C2CE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE34u)) return;
    // 80C2CE34: bl      0x8045C060
    {
            ctx->lr = 0x80C2CE38u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C2CE38:
    ctx->pc = 0x80C2CE38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CE38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CE38: li      r3, 1055
    ctx->gpr[3] = (u32)(s32)(1055);

label_80C2CE3C:
    ctx->pc = 0x80C2CE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE3Cu)) return;
    // 80C2CE3C: bl      0x8045BFA0
    {
            ctx->lr = 0x80C2CE40u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C2CE40:
    ctx->pc = 0x80C2CE40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CE40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C2CE40: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C2CE44:
    ctx->pc = 0x80C2CE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE44u)) return;
    // 80C2CE44: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C2CE48:
    ctx->pc = 0x80C2CE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2CE48: lwz     r0, 0(r3)
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
label_80C2CE4C:
    ctx->pc = 0x80C2CE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE4Cu)) return;
    // 80C2CE4C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C2CE50:
    ctx->pc = 0x80C2CE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE50u)) return;
    // 80C2CE50: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2CE54:
    ctx->pc = 0x80C2CE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE54u)) return;
    // 80C2CE54: addi    r3, r3, 28252
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28252);

label_80C2CE58:
    ctx->pc = 0x80C2CE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2CE58: lwzx    r3, r3, r0
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
label_80C2CE5C:
    ctx->pc = 0x80C2CE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2CE5C: lwz     r3, 24(r3)
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
label_80C2CE60:
    ctx->pc = 0x80C2CE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE60u)) return;
    // 80C2CE60: bl      0x8045F6FC
    {
            ctx->lr = 0x80C2CE64u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C2CE64:
    ctx->pc = 0x80C2CE64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CE64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CE64: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80C2CE68:
    ctx->pc = 0x80C2CE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE68u)) return;
    // 80C2CE68: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2CE6Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2CE6C:
    ctx->pc = 0x80C2CE6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CE6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CE6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CE70:
    ctx->pc = 0x80C2CE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE70u)) return;
    // 80C2CE70: bl      0x8045F220
    {
            ctx->lr = 0x80C2CE74u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CE74:
    ctx->pc = 0x80C2CE74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CE74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CE74: bl      0x8045C034
    {
            ctx->lr = 0x80C2CE78u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C2CE78:
    ctx->pc = 0x80C2CE78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CE78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CE78: bl      0x8045F32C
    {
            ctx->lr = 0x80C2CE7Cu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C2CE7C:
    ctx->pc = 0x80C2CE7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CE7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C2CE7C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2CE80:
    ctx->pc = 0x80C2CE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE80u)) return;
    // 80C2CE80: li      r4, 80
    ctx->gpr[4] = (u32)(s32)(80);

label_80C2CE84:
    ctx->pc = 0x80C2CE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE84u)) return;
    // 80C2CE84: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2CE88:
    ctx->pc = 0x80C2CE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE88u)) return;
    // 80C2CE88: addi    r5, r5, 25512
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25512);

label_80C2CE8C:
    ctx->pc = 0x80C2CE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2CE8C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2CE8Cu)) return;
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
label_80C2CE90:
    ctx->pc = 0x80C2CE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE90u)) return;
    // 80C2CE90: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2CE94:
    ctx->pc = 0x80C2CE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE94u)) return;
    // 80C2CE94: addi    r5, r5, 25516
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25516);

label_80C2CE98:
    ctx->pc = 0x80C2CE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2CE98: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2CE98u)) return;
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
label_80C2CE9C:
    ctx->pc = 0x80C2CE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CE9Cu)) return;
    // 80C2CE9C: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2CEA0:
    ctx->pc = 0x80C2CEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CEA0u)) return;
    // 80C2CEA0: addi    r5, r5, 25520
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25520);

label_80C2CEA4:
    ctx->pc = 0x80C2CEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CEA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2CEA4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2CEA4u)) return;
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
label_80C2CEA8:
    ctx->pc = 0x80C2CEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CEA8u)) return;
    // 80C2CEA8: bl      0x8045C750
    {
            ctx->lr = 0x80C2CEACu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C2CEAC:
    ctx->pc = 0x80C2CEACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CEACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C2CEAC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2CEB0:
    ctx->pc = 0x80C2CEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CEB0u)) return;
    // 80C2CEB0: li      r4, 80
    ctx->gpr[4] = (u32)(s32)(80);

label_80C2CEB4:
    ctx->pc = 0x80C2CEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CEB4u)) return;
    // 80C2CEB4: li      r5, 2048
    ctx->gpr[5] = (u32)(s32)(2048);

label_80C2CEB8:
    ctx->pc = 0x80C2CEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CEB8u)) return;
    // 80C2CEB8: li      r6, 9728
    ctx->gpr[6] = (u32)(s32)(9728);

label_80C2CEBC:
    ctx->pc = 0x80C2CEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CEBCu)) return;
    // 80C2CEBC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2CEC0:
    ctx->pc = 0x80C2CEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CEC0u)) return;
    // 80C2CEC0: bl      0x8045C7B4
    {
            ctx->lr = 0x80C2CEC4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C2CEC4:
    ctx->pc = 0x80C2CEC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CEC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CEC4: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2CEC8:
    ctx->pc = 0x80C2CEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CEC8u)) return;
    // 80C2CEC8: bl      0x8045F220
    {
            ctx->lr = 0x80C2CECCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CECC:
    ctx->pc = 0x80C2CECCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CECCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CECC: bl      0x8045C034
    {
            ctx->lr = 0x80C2CED0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C2CED0:
    ctx->pc = 0x80C2CED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CED0: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2CED4:
    ctx->pc = 0x80C2CED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CED4u)) return;
    // 80C2CED4: bl      0x8045F220
    {
            ctx->lr = 0x80C2CED8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CED8:
    ctx->pc = 0x80C2CED8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CED8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2CED8: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2CEDC:
    ctx->pc = 0x80C2CEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CEDCu)) return;
    // 80C2CEDC: addi    r4, r4, 28392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28392);

label_80C2CEE0:
    ctx->pc = 0x80C2CEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CEE0u)) return;
    // 80C2CEE0: bl      0x8045C060
    {
            ctx->lr = 0x80C2CEE4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C2CEE4:
    ctx->pc = 0x80C2CEE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CEE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CEE4: li      r3, 1056
    ctx->gpr[3] = (u32)(s32)(1056);

label_80C2CEE8:
    ctx->pc = 0x80C2CEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CEE8u)) return;
    // 80C2CEE8: bl      0x8045BFA0
    {
            ctx->lr = 0x80C2CEECu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C2CEEC:
    ctx->pc = 0x80C2CEECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CEECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2CEEC: li      r3, 140
    ctx->gpr[3] = (u32)(s32)(140);

label_80C2CEF0:
    ctx->pc = 0x80C2CEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CEF0u)) return;
    // 80C2CEF0: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C2CEF4:
    ctx->pc = 0x80C2CEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CEF4u)) return;
    // 80C2CEF4: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C2CEF8:
    ctx->pc = 0x80C2CEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CEF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2CEF8: lwz     r0, 0(r4)
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
label_80C2CEFC:
    ctx->pc = 0x80C2CEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CEFCu)) return;
    // 80C2CEFC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C2CF00:
    ctx->pc = 0x80C2CF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF00u)) return;
    // 80C2CF00: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2CF04:
    ctx->pc = 0x80C2CF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF04u)) return;
    // 80C2CF04: addi    r4, r4, 28252
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28252);

label_80C2CF08:
    ctx->pc = 0x80C2CF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2CF08: lwzx    r4, r4, r0
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
label_80C2CF0C:
    ctx->pc = 0x80C2CF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2CF0C: lwz     r4, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2CF10:
    ctx->pc = 0x80C2CF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF10u)) return;
    // 80C2CF10: bl      0x8045F608
    {
            ctx->lr = 0x80C2CF14u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C2CF14:
    ctx->pc = 0x80C2CF14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CF14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CF14: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2CF18:
    ctx->pc = 0x80C2CF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF18u)) return;
    // 80C2CF18: bl      0x8045F220
    {
            ctx->lr = 0x80C2CF1Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CF1C:
    ctx->pc = 0x80C2CF1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CF1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CF1C: bl      0x8045C034
    {
            ctx->lr = 0x80C2CF20u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C2CF20:
    ctx->pc = 0x80C2CF20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CF20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CF20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CF24:
    ctx->pc = 0x80C2CF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF24u)) return;
    // 80C2CF24: bl      0x8045F220
    {
            ctx->lr = 0x80C2CF28u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CF28:
    ctx->pc = 0x80C2CF28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CF28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2CF28: lis     r4, -28567
    ctx->gpr[4] = ((u32)(s32)(-28567) << 16);

label_80C2CF2C:
    ctx->pc = 0x80C2CF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF2Cu)) return;
    // 80C2CF2C: addi    r4, r4, 17360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17360);

label_80C2CF30:
    ctx->pc = 0x80C2CF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF30u)) return;
    // 80C2CF30: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C2CF34:
    ctx->pc = 0x80C2CF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF34u)) return;
    // 80C2CF34: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C2CF38:
    ctx->pc = 0x80C2CF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF38u)) return;
    // 80C2CF38: lis     r6, -27453
    ctx->gpr[6] = ((u32)(s32)(-27453) << 16);

label_80C2CF3C:
    ctx->pc = 0x80C2CF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF3Cu)) return;
    // 80C2CF3C: addi    r6, r6, 25352
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25352);

label_80C2CF40:
    ctx->pc = 0x80C2CF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2CF40: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2CF40u)) return;
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
label_80C2CF44:
    ctx->pc = 0x80C2CF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF44u)) return;
    // 80C2CF44: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C2CF48:
    ctx->pc = 0x80C2CF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF48u)) return;
    // 80C2CF48: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80C2CF4C:
    ctx->pc = 0x80C2CF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF4Cu)) return;
    // 80C2CF4C: bl      0x8045EBE4
    {
            ctx->lr = 0x80C2CF50u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C2CF50:
    ctx->pc = 0x80C2CF50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CF50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CF50: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80C2CF54:
    ctx->pc = 0x80C2CF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF54u)) return;
    // 80C2CF54: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2CF58u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2CF58:
    ctx->pc = 0x80C2CF58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CF58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CF58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CF5C:
    ctx->pc = 0x80C2CF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF5Cu)) return;
    // 80C2CF5C: bl      0x8045F220
    {
            ctx->lr = 0x80C2CF60u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CF60:
    ctx->pc = 0x80C2CF60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CF60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CF60: bl      0x8045C034
    {
            ctx->lr = 0x80C2CF64u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C2CF64:
    ctx->pc = 0x80C2CF64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CF64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CF64: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2CF68:
    ctx->pc = 0x80C2CF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF68u)) return;
    // 80C2CF68: bl      0x8045F220
    {
            ctx->lr = 0x80C2CF6Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CF6C:
    ctx->pc = 0x80C2CF6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CF6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2CF6C: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2CF70:
    ctx->pc = 0x80C2CF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF70u)) return;
    // 80C2CF70: addi    r4, r4, 28404
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28404);

label_80C2CF74:
    ctx->pc = 0x80C2CF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF74u)) return;
    // 80C2CF74: bl      0x8045C060
    {
            ctx->lr = 0x80C2CF78u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C2CF78:
    ctx->pc = 0x80C2CF78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CF78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CF78: li      r3, 1057
    ctx->gpr[3] = (u32)(s32)(1057);

label_80C2CF7C:
    ctx->pc = 0x80C2CF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF7Cu)) return;
    // 80C2CF7C: bl      0x8045BFA0
    {
            ctx->lr = 0x80C2CF80u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C2CF80:
    ctx->pc = 0x80C2CF80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CF80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C2CF80: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C2CF84:
    ctx->pc = 0x80C2CF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF84u)) return;
    // 80C2CF84: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C2CF88:
    ctx->pc = 0x80C2CF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2CF88: lwz     r0, 0(r3)
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
label_80C2CF8C:
    ctx->pc = 0x80C2CF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF8Cu)) return;
    // 80C2CF8C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C2CF90:
    ctx->pc = 0x80C2CF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF90u)) return;
    // 80C2CF90: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2CF94:
    ctx->pc = 0x80C2CF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF94u)) return;
    // 80C2CF94: addi    r3, r3, 28252
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28252);

label_80C2CF98:
    ctx->pc = 0x80C2CF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2CF98: lwzx    r3, r3, r0
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
label_80C2CF9C:
    ctx->pc = 0x80C2CF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CF9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2CF9C: lwz     r3, 32(r3)
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
label_80C2CFA0:
    ctx->pc = 0x80C2CFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CFA0u)) return;
    // 80C2CFA0: bl      0x8045F6FC
    {
            ctx->lr = 0x80C2CFA4u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C2CFA4:
    ctx->pc = 0x80C2CFA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CFA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CFA4: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2CFA8:
    ctx->pc = 0x80C2CFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CFA8u)) return;
    // 80C2CFA8: bl      0x8045F220
    {
            ctx->lr = 0x80C2CFACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CFAC:
    ctx->pc = 0x80C2CFACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CFACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CFAC: bl      0x8045EB8C
    {
            ctx->lr = 0x80C2CFB0u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C2CFB0:
    ctx->pc = 0x80C2CFB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CFB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C2CFB0: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2CFB4:
    ctx->pc = 0x80C2CFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CFB4u)) return;
    // 80C2CFB4: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2CFB8:
    ctx->pc = 0x80C2CFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CFB8u)) return;
    // 80C2CFB8: addi    r4, r4, 25336
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25336);

label_80C2CFBC:
    ctx->pc = 0x80C2CFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CFBCu)) return;
    // 80C2CFBC: bl      0x8045E7E0
    {
            ctx->lr = 0x80C2CFC0u;
            ctx->pc = 0x8045E7E0u;
            return;
    }

label_80C2CFC0:
    ctx->pc = 0x80C2CFC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CFC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CFC0: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80C2CFC4:
    ctx->pc = 0x80C2CFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CFC4u)) return;
    // 80C2CFC4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2CFC8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2CFC8:
    ctx->pc = 0x80C2CFC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CFC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CFC8: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C2CFCC:
    ctx->pc = 0x80C2CFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CFCCu)) return;
    // 80C2CFCC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2CFD0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2CFD0:
    ctx->pc = 0x80C2CFD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CFD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CFD0: bl      0x8045F32C
    {
            ctx->lr = 0x80C2CFD4u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C2CFD4:
    ctx->pc = 0x80C2CFD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CFD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CFD4: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C2CFD8:
    ctx->pc = 0x80C2CFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CFD8u)) return;
    // 80C2CFD8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2CFDCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2CFDC:
    ctx->pc = 0x80C2CFDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CFDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CFDC: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2CFE0:
    ctx->pc = 0x80C2CFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CFE0u)) return;
    // 80C2CFE0: bl      0x8045F220
    {
            ctx->lr = 0x80C2CFE4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CFE4:
    ctx->pc = 0x80C2CFE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CFE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2CFE4: bl      0x8045EB8C
    {
            ctx->lr = 0x80C2CFE8u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C2CFE8:
    ctx->pc = 0x80C2CFE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CFE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2CFE8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2CFEC:
    ctx->pc = 0x80C2CFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CFECu)) return;
    // 80C2CFEC: bl      0x8045F220
    {
            ctx->lr = 0x80C2CFF0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2CFF0:
    ctx->pc = 0x80C2CFF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2CFF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2CFF0: lis     r4, -28547
    ctx->gpr[4] = ((u32)(s32)(-28547) << 16);

label_80C2CFF4:
    ctx->pc = 0x80C2CFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CFF4u)) return;
    // 80C2CFF4: addi    r4, r4, 356
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(356);

label_80C2CFF8:
    ctx->pc = 0x80C2CFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CFF8u)) return;
    // 80C2CFF8: lis     r5, -28548
    ctx->gpr[5] = ((u32)(s32)(-28548) << 16);

label_80C2CFFC:
    ctx->pc = 0x80C2CFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2CFFCu)) return;
    // 80C2CFFC: addi    r5, r5, -23912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23912);

label_80C2D000:
    ctx->pc = 0x80C2D000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D000u)) return;
    // 80C2D000: lis     r6, -27453
    ctx->gpr[6] = ((u32)(s32)(-27453) << 16);

label_80C2D004:
    ctx->pc = 0x80C2D004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D004u)) return;
    // 80C2D004: addi    r6, r6, 25352
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25352);

label_80C2D008:
    ctx->pc = 0x80C2D008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2D008: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2D008u)) return;
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
label_80C2D00C:
    ctx->pc = 0x80C2D00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D00Cu)) return;
    // 80C2D00C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C2D010:
    ctx->pc = 0x80C2D010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D010u)) return;
    // 80C2D010: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_80C2D014:
    ctx->pc = 0x80C2D014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D014u)) return;
    // 80C2D014: bl      0x8045EBE4
    {
            ctx->lr = 0x80C2D018u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C2D018:
    ctx->pc = 0x80C2D018u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D018u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D018: li      r3, 1058
    ctx->gpr[3] = (u32)(s32)(1058);

label_80C2D01C:
    ctx->pc = 0x80C2D01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D01Cu)) return;
    // 80C2D01C: bl      0x8045BFA0
    {
            ctx->lr = 0x80C2D020u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C2D020:
    ctx->pc = 0x80C2D020u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D020u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2D020: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80C2D024:
    ctx->pc = 0x80C2D024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D024u)) return;
    // 80C2D024: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C2D028:
    ctx->pc = 0x80C2D028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D028u)) return;
    // 80C2D028: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C2D02C:
    ctx->pc = 0x80C2D02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D02Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2D02C: lwz     r0, 0(r4)
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
label_80C2D030:
    ctx->pc = 0x80C2D030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D030u)) return;
    // 80C2D030: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C2D034:
    ctx->pc = 0x80C2D034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D034u)) return;
    // 80C2D034: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2D038:
    ctx->pc = 0x80C2D038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D038u)) return;
    // 80C2D038: addi    r4, r4, 28252
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28252);

label_80C2D03C:
    ctx->pc = 0x80C2D03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D03Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D03C: lwzx    r4, r4, r0
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
label_80C2D040:
    ctx->pc = 0x80C2D040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D040u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D040: lwz     r4, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D044:
    ctx->pc = 0x80C2D044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D044u)) return;
    // 80C2D044: bl      0x8045F608
    {
            ctx->lr = 0x80C2D048u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C2D048:
    ctx->pc = 0x80C2D048u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D048u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2D048: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80C2D04C:
    ctx->pc = 0x80C2D04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D04Cu)) return;
    // 80C2D04C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C2D050:
    ctx->pc = 0x80C2D050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D050u)) return;
    // 80C2D050: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C2D054:
    ctx->pc = 0x80C2D054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D054u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2D054: lwz     r0, 0(r4)
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
label_80C2D058:
    ctx->pc = 0x80C2D058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D058u)) return;
    // 80C2D058: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C2D05C:
    ctx->pc = 0x80C2D05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D05Cu)) return;
    // 80C2D05C: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2D060:
    ctx->pc = 0x80C2D060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D060u)) return;
    // 80C2D060: addi    r4, r4, 28252
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28252);

label_80C2D064:
    ctx->pc = 0x80C2D064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D064: lwzx    r4, r4, r0
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
label_80C2D068:
    ctx->pc = 0x80C2D068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D068: lwz     r4, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D06C:
    ctx->pc = 0x80C2D06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D06Cu)) return;
    // 80C2D06C: bl      0x8045F608
    {
            ctx->lr = 0x80C2D070u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C2D070:
    ctx->pc = 0x80C2D070u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D070u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C2D070: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2D074:
    ctx->pc = 0x80C2D074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D074u)) return;
    // 80C2D074: li      r4, 1336
    ctx->gpr[4] = (u32)(s32)(1336);

label_80C2D078:
    ctx->pc = 0x80C2D078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D078u)) return;
    // 80C2D078: li      r5, 60
    ctx->gpr[5] = (u32)(s32)(60);

label_80C2D07C:
    ctx->pc = 0x80C2D07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D07Cu)) return;
    // 80C2D07C: bl      0x80C2DBA8
    {
            ctx->lr = 0x80C2D080u;
            goto label_80C2DBA8;
    }

label_80C2D080:
    ctx->pc = 0x80C2D080u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D080u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D080: li      r3, 1059
    ctx->gpr[3] = (u32)(s32)(1059);

label_80C2D084:
    ctx->pc = 0x80C2D084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D084u)) return;
    // 80C2D084: bl      0x8045BFA0
    {
            ctx->lr = 0x80C2D088u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C2D088:
    ctx->pc = 0x80C2D088u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D088u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C2D088: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C2D08C:
    ctx->pc = 0x80C2D08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D08Cu)) return;
    // 80C2D08C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C2D090:
    ctx->pc = 0x80C2D090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D090u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2D090: lwz     r0, 0(r3)
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
label_80C2D094:
    ctx->pc = 0x80C2D094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D094u)) return;
    // 80C2D094: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C2D098:
    ctx->pc = 0x80C2D098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D098u)) return;
    // 80C2D098: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2D09C:
    ctx->pc = 0x80C2D09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D09Cu)) return;
    // 80C2D09C: addi    r3, r3, 28252
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28252);

label_80C2D0A0:
    ctx->pc = 0x80C2D0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D0A0: lwzx    r3, r3, r0
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
label_80C2D0A4:
    ctx->pc = 0x80C2D0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D0A4: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D0A8:
    ctx->pc = 0x80C2D0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0A8u)) return;
    // 80C2D0A8: bl      0x8045F6FC
    {
            ctx->lr = 0x80C2D0ACu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C2D0AC:
    ctx->pc = 0x80C2D0ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D0ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C2D0AC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2D0B0:
    ctx->pc = 0x80C2D0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0B0u)) return;
    // 80C2D0B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2D0B4:
    ctx->pc = 0x80C2D0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0B4u)) return;
    // 80C2D0B4: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2D0B8:
    ctx->pc = 0x80C2D0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0B8u)) return;
    // 80C2D0B8: addi    r5, r5, 25524
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25524);

label_80C2D0BC:
    ctx->pc = 0x80C2D0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2D0BC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2D0BCu)) return;
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
label_80C2D0C0:
    ctx->pc = 0x80C2D0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0C0u)) return;
    // 80C2D0C0: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2D0C4:
    ctx->pc = 0x80C2D0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0C4u)) return;
    // 80C2D0C4: addi    r5, r5, 25528
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25528);

label_80C2D0C8:
    ctx->pc = 0x80C2D0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D0C8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2D0C8u)) return;
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
label_80C2D0CC:
    ctx->pc = 0x80C2D0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0CCu)) return;
    // 80C2D0CC: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2D0D0:
    ctx->pc = 0x80C2D0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0D0u)) return;
    // 80C2D0D0: addi    r5, r5, 25532
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25532);

label_80C2D0D4:
    ctx->pc = 0x80C2D0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D0D4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2D0D4u)) return;
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
label_80C2D0D8:
    ctx->pc = 0x80C2D0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0D8u)) return;
    // 80C2D0D8: bl      0x8045C750
    {
            ctx->lr = 0x80C2D0DCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C2D0DC:
    ctx->pc = 0x80C2D0DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D0DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C2D0DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2D0E0:
    ctx->pc = 0x80C2D0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0E0u)) return;
    // 80C2D0E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2D0E4:
    ctx->pc = 0x80C2D0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0E4u)) return;
    // 80C2D0E4: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_80C2D0E8:
    ctx->pc = 0x80C2D0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0E8u)) return;
    // 80C2D0E8: li      r6, 19456
    ctx->gpr[6] = (u32)(s32)(19456);

label_80C2D0EC:
    ctx->pc = 0x80C2D0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0ECu)) return;
    // 80C2D0EC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2D0F0:
    ctx->pc = 0x80C2D0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0F0u)) return;
    // 80C2D0F0: bl      0x8045C7B4
    {
            ctx->lr = 0x80C2D0F4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C2D0F4:
    ctx->pc = 0x80C2D0F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D0F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D0F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2D0F8:
    ctx->pc = 0x80C2D0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D0F8u)) return;
    // 80C2D0F8: bl      0x8045F220
    {
            ctx->lr = 0x80C2D0FCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2D0FC:
    ctx->pc = 0x80C2D0FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D0FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D0FC: bl      0x8045C360
    {
            ctx->lr = 0x80C2D100u;
            ctx->pc = 0x8045C360u;
            return;
    }

label_80C2D100:
    ctx->pc = 0x80C2D100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D100: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2D104:
    ctx->pc = 0x80C2D104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D104u)) return;
    // 80C2D104: bl      0x8045F220
    {
            ctx->lr = 0x80C2D108u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2D108:
    ctx->pc = 0x80C2D108u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D108u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D108: bl      0x8045EB8C
    {
            ctx->lr = 0x80C2D10Cu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C2D10C:
    ctx->pc = 0x80C2D10Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D10Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D10C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2D110:
    ctx->pc = 0x80C2D110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D110u)) return;
    // 80C2D110: bl      0x8045F220
    {
            ctx->lr = 0x80C2D114u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2D114:
    ctx->pc = 0x80C2D114u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D114u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2D114: lis     r4, -28570
    ctx->gpr[4] = ((u32)(s32)(-28570) << 16);

label_80C2D118:
    ctx->pc = 0x80C2D118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D118u)) return;
    // 80C2D118: addi    r4, r4, -18088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18088);

label_80C2D11C:
    ctx->pc = 0x80C2D11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D11Cu)) return;
    // 80C2D11C: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C2D120:
    ctx->pc = 0x80C2D120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D120u)) return;
    // 80C2D120: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C2D124:
    ctx->pc = 0x80C2D124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D124u)) return;
    // 80C2D124: lis     r6, -27453
    ctx->gpr[6] = ((u32)(s32)(-27453) << 16);

label_80C2D128:
    ctx->pc = 0x80C2D128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D128u)) return;
    // 80C2D128: addi    r6, r6, 25536
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25536);

label_80C2D12C:
    ctx->pc = 0x80C2D12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D12Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2D12C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2D12Cu)) return;
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
label_80C2D130:
    ctx->pc = 0x80C2D130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D130u)) return;
    // 80C2D130: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C2D134:
    ctx->pc = 0x80C2D134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D134u)) return;
    // 80C2D134: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2D138:
    ctx->pc = 0x80C2D138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D138u)) return;
    // 80C2D138: bl      0x8045EBE4
    {
            ctx->lr = 0x80C2D13Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C2D13C:
    ctx->pc = 0x80C2D13Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D13Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D13C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2D140:
    ctx->pc = 0x80C2D140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D140u)) return;
    // 80C2D140: bl      0x8045F220
    {
            ctx->lr = 0x80C2D144u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2D144:
    ctx->pc = 0x80C2D144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C2D144: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2D148:
    ctx->pc = 0x80C2D148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D148u)) return;
    // 80C2D148: addi    r4, r4, 25540
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25540);

label_80C2D14C:
    ctx->pc = 0x80C2D14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D14Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2D14C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2D14Cu)) return;
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
label_80C2D150:
    ctx->pc = 0x80C2D150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D150u)) return;
    // 80C2D150: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2D154:
    ctx->pc = 0x80C2D154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D154u)) return;
    // 80C2D154: addi    r4, r4, 25348
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25348);

label_80C2D158:
    ctx->pc = 0x80C2D158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2D158: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2D158u)) return;
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
label_80C2D15C:
    ctx->pc = 0x80C2D15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D15Cu)) return;
    // 80C2D15C: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2D160:
    ctx->pc = 0x80C2D160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D160u)) return;
    // 80C2D160: addi    r4, r4, 25544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25544);

label_80C2D164:
    ctx->pc = 0x80C2D164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2D164: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2D164u)) return;
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
label_80C2D168:
    ctx->pc = 0x80C2D168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D168u)) return;
    // 80C2D168: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2D16C:
    ctx->pc = 0x80C2D16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D16Cu)) return;
    // 80C2D16C: addi    r4, r4, 25396
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25396);

label_80C2D170:
    ctx->pc = 0x80C2D170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D170: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2D170u)) return;
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
label_80C2D174:
    ctx->pc = 0x80C2D174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D174u)) return;
    // 80C2D174: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2D178:
    ctx->pc = 0x80C2D178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D178u)) return;
    // 80C2D178: addi    r4, r4, 25352
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25352);

label_80C2D17C:
    ctx->pc = 0x80C2D17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D17Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D17C: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2D17Cu)) return;
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
label_80C2D180:
    ctx->pc = 0x80C2D180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D180u)) return;
    // 80C2D180: bl      0x8045E570
    {
            ctx->lr = 0x80C2D184u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80C2D184:
    ctx->pc = 0x80C2D184u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D184u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D184: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2D188:
    ctx->pc = 0x80C2D188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D188u)) return;
    // 80C2D188: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2D18Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2D18C:
    ctx->pc = 0x80C2D18Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D18Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D18C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2D190:
    ctx->pc = 0x80C2D190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D190u)) return;
    // 80C2D190: bl      0x8045F220
    {
            ctx->lr = 0x80C2D194u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2D194:
    ctx->pc = 0x80C2D194u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D194u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2D194: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2D198:
    ctx->pc = 0x80C2D198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D198u)) return;
    // 80C2D198: addi    r4, r4, -23480
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23480);

label_80C2D19C:
    ctx->pc = 0x80C2D19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D19Cu)) return;
    // 80C2D19C: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C2D1A0:
    ctx->pc = 0x80C2D1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1A0u)) return;
    // 80C2D1A0: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C2D1A4:
    ctx->pc = 0x80C2D1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1A4u)) return;
    // 80C2D1A4: lis     r6, -27453
    ctx->gpr[6] = ((u32)(s32)(-27453) << 16);

label_80C2D1A8:
    ctx->pc = 0x80C2D1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1A8u)) return;
    // 80C2D1A8: addi    r6, r6, 25344
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25344);

label_80C2D1AC:
    ctx->pc = 0x80C2D1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2D1AC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2D1ACu)) return;
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
label_80C2D1B0:
    ctx->pc = 0x80C2D1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1B0u)) return;
    // 80C2D1B0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C2D1B4:
    ctx->pc = 0x80C2D1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1B4u)) return;
    // 80C2D1B4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2D1B8:
    ctx->pc = 0x80C2D1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1B8u)) return;
    // 80C2D1B8: bl      0x8045EBE4
    {
            ctx->lr = 0x80C2D1BCu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C2D1BC:
    ctx->pc = 0x80C2D1BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D1BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D1BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2D1C0:
    ctx->pc = 0x80C2D1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1C0u)) return;
    // 80C2D1C0: bl      0x8045F220
    {
            ctx->lr = 0x80C2D1C4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2D1C4:
    ctx->pc = 0x80C2D1C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D1C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C2D1C4: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2D1C8:
    ctx->pc = 0x80C2D1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1C8u)) return;
    // 80C2D1C8: addi    r4, r4, 25540
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25540);

label_80C2D1CC:
    ctx->pc = 0x80C2D1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2D1CC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2D1CCu)) return;
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
label_80C2D1D0:
    ctx->pc = 0x80C2D1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1D0u)) return;
    // 80C2D1D0: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2D1D4:
    ctx->pc = 0x80C2D1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1D4u)) return;
    // 80C2D1D4: addi    r4, r4, 25348
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25348);

label_80C2D1D8:
    ctx->pc = 0x80C2D1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2D1D8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2D1D8u)) return;
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
label_80C2D1DC:
    ctx->pc = 0x80C2D1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1DCu)) return;
    // 80C2D1DC: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2D1E0:
    ctx->pc = 0x80C2D1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1E0u)) return;
    // 80C2D1E0: addi    r4, r4, 25544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25544);

label_80C2D1E4:
    ctx->pc = 0x80C2D1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2D1E4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2D1E4u)) return;
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
label_80C2D1E8:
    ctx->pc = 0x80C2D1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1E8u)) return;
    // 80C2D1E8: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2D1EC:
    ctx->pc = 0x80C2D1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1ECu)) return;
    // 80C2D1EC: addi    r4, r4, 25548
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25548);

label_80C2D1F0:
    ctx->pc = 0x80C2D1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D1F0: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2D1F0u)) return;
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
label_80C2D1F4:
    ctx->pc = 0x80C2D1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1F4u)) return;
    // 80C2D1F4: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2D1F8:
    ctx->pc = 0x80C2D1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1F8u)) return;
    // 80C2D1F8: addi    r4, r4, 25552
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25552);

label_80C2D1FC:
    ctx->pc = 0x80C2D1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D1FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D1FC: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2D1FCu)) return;
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
label_80C2D200:
    ctx->pc = 0x80C2D200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D200u)) return;
    // 80C2D200: bl      0x8045E570
    {
            ctx->lr = 0x80C2D204u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80C2D204:
    ctx->pc = 0x80C2D204u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D204u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D204: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80C2D208:
    ctx->pc = 0x80C2D208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D208u)) return;
    // 80C2D208: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2D20Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2D20C:
    ctx->pc = 0x80C2D20Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D20Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D20C: bl      0x8045F32C
    {
            ctx->lr = 0x80C2D210u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C2D210:
    ctx->pc = 0x80C2D210u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D210u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D210: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2D214:
    ctx->pc = 0x80C2D214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D214u)) return;
    // 80C2D214: bl      0x8045F220
    {
            ctx->lr = 0x80C2D218u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2D218:
    ctx->pc = 0x80C2D218u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D218u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D218: bl      0x8045E4DC
    {
            ctx->lr = 0x80C2D21Cu;
            ctx->pc = 0x8045E4DCu;
            return;
    }

label_80C2D21C:
    ctx->pc = 0x80C2D21Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D21Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D21C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2D220:
    ctx->pc = 0x80C2D220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D220u)) return;
    // 80C2D220: bl      0x8045F220
    {
            ctx->lr = 0x80C2D224u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2D224:
    ctx->pc = 0x80C2D224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2D224: lis     r4, -28567
    ctx->gpr[4] = ((u32)(s32)(-28567) << 16);

label_80C2D228:
    ctx->pc = 0x80C2D228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D228u)) return;
    // 80C2D228: addi    r4, r4, 17360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17360);

label_80C2D22C:
    ctx->pc = 0x80C2D22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D22Cu)) return;
    // 80C2D22C: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C2D230:
    ctx->pc = 0x80C2D230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D230u)) return;
    // 80C2D230: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C2D234:
    ctx->pc = 0x80C2D234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D234u)) return;
    // 80C2D234: lis     r6, -27453
    ctx->gpr[6] = ((u32)(s32)(-27453) << 16);

label_80C2D238:
    ctx->pc = 0x80C2D238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D238u)) return;
    // 80C2D238: addi    r6, r6, 25352
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25352);

label_80C2D23C:
    ctx->pc = 0x80C2D23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D23Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2D23C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2D23Cu)) return;
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
label_80C2D240:
    ctx->pc = 0x80C2D240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D240u)) return;
    // 80C2D240: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C2D244:
    ctx->pc = 0x80C2D244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D244u)) return;
    // 80C2D244: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80C2D248:
    ctx->pc = 0x80C2D248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D248u)) return;
    // 80C2D248: bl      0x8045EBE4
    {
            ctx->lr = 0x80C2D24Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C2D24C:
    ctx->pc = 0x80C2D24Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D24Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D24C: bl      0x8045C3AC
    {
            ctx->lr = 0x80C2D250u;
            ctx->pc = 0x8045C3ACu;
            return;
    }

label_80C2D250:
    ctx->pc = 0x80C2D250u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D250u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D250: li      r3, 45
    ctx->gpr[3] = (u32)(s32)(45);

label_80C2D254:
    ctx->pc = 0x80C2D254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D254u)) return;
    // 80C2D254: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2D258u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2D258:
    ctx->pc = 0x80C2D258u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D258u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D258: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2D25C:
    ctx->pc = 0x80C2D25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D25Cu)) return;
    // 80C2D25C: bl      0x80C2DC18
    {
            ctx->lr = 0x80C2D260u;
            goto label_80C2DC18;
    }

label_80C2D260:
    ctx->pc = 0x80C2D260u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D260u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D260: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2D264:
    ctx->pc = 0x80C2D264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D264u)) return;
    // 80C2D264: bl      0x8045ED54
    {
            ctx->lr = 0x80C2D268u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80C2D268:
    ctx->pc = 0x80C2D268u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D268u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D268: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2D26C:
    ctx->pc = 0x80C2D26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D26Cu)) return;
    // 80C2D26C: bl      0x8045F220
    {
            ctx->lr = 0x80C2D270u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2D270:
    ctx->pc = 0x80C2D270u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D270u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D270: lwz     r30, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D274:
    ctx->pc = 0x80C2D274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D274u)) return;
    // 80C2D274: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2D278:
    ctx->pc = 0x80C2D278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D278u)) return;
    // 80C2D278: bl      0x8045F220
    {
            ctx->lr = 0x80C2D27Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2D27C:
    ctx->pc = 0x80C2D27Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D27Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2D27C: lwz     r3, 32(r3)
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
label_80C2D280:
    ctx->pc = 0x80C2D280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2D280: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2D280u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
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
label_80C2D284:
    ctx->pc = 0x80C2D284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D284u)) return;
    // 80C2D284: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2D288:
    ctx->pc = 0x80C2D288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D288u)) return;
    // 80C2D288: addi    r3, r3, 25556
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25556);

label_80C2D28C:
    ctx->pc = 0x80C2D28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D28Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2D28C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2D28Cu)) return;
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
label_80C2D290:
    ctx->pc = 0x80C2D290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D290u)) return;
    // 80C2D290: fadds   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2D290u)) return;
    ppc_fadds(ctx, 31, 0, 1);

label_80C2D294:
    ctx->pc = 0x80C2D294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D294u)) return;
    // 80C2D294: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2D298:
    ctx->pc = 0x80C2D298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D298u)) return;
    // 80C2D298: bl      0x8045F220
    {
            ctx->lr = 0x80C2D29Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2D29C:
    ctx->pc = 0x80C2D29Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D29Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D29C: lwz     r31, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D2A0:
    ctx->pc = 0x80C2D2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2A0u)) return;
    // 80C2D2A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2D2A4:
    ctx->pc = 0x80C2D2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2A4u)) return;
    // 80C2D2A4: bl      0x8045F220
    {
            ctx->lr = 0x80C2D2A8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2D2A8:
    ctx->pc = 0x80C2D2A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D2A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2D2A8: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C2D2A8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_80C2D2AC:
    ctx->pc = 0x80C2D2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2ACu)) return;
    // 80C2D2AC: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80C2D2ACu)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_80C2D2B0:
    ctx->pc = 0x80C2D2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D2B0: lfs     f3, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C2D2B0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
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
label_80C2D2B4:
    ctx->pc = 0x80C2D2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2B4u)) return;
    // 80C2D2B4: bl      0x8045E70C
    {
            ctx->lr = 0x80C2D2B8u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80C2D2B8:
    ctx->pc = 0x80C2D2B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D2B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C2D2B8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2D2BC:
    ctx->pc = 0x80C2D2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2BCu)) return;
    // 80C2D2BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2D2C0:
    ctx->pc = 0x80C2D2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2C0u)) return;
    // 80C2D2C0: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2D2C4:
    ctx->pc = 0x80C2D2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2C4u)) return;
    // 80C2D2C4: addi    r5, r5, 25560
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25560);

label_80C2D2C8:
    ctx->pc = 0x80C2D2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2D2C8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2D2C8u)) return;
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
label_80C2D2CC:
    ctx->pc = 0x80C2D2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2CCu)) return;
    // 80C2D2CC: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2D2D0:
    ctx->pc = 0x80C2D2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2D0u)) return;
    // 80C2D2D0: addi    r5, r5, 25564
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25564);

label_80C2D2D4:
    ctx->pc = 0x80C2D2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D2D4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2D2D4u)) return;
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
label_80C2D2D8:
    ctx->pc = 0x80C2D2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2D8u)) return;
    // 80C2D2D8: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2D2DC:
    ctx->pc = 0x80C2D2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2DCu)) return;
    // 80C2D2DC: addi    r5, r5, 25568
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25568);

label_80C2D2E0:
    ctx->pc = 0x80C2D2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D2E0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2D2E0u)) return;
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
label_80C2D2E4:
    ctx->pc = 0x80C2D2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2E4u)) return;
    // 80C2D2E4: bl      0x8045C750
    {
            ctx->lr = 0x80C2D2E8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C2D2E8:
    ctx->pc = 0x80C2D2E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D2E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C2D2E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2D2EC:
    ctx->pc = 0x80C2D2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2ECu)) return;
    // 80C2D2EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C2D2F0:
    ctx->pc = 0x80C2D2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2F0u)) return;
    // 80C2D2F0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C2D2F4:
    ctx->pc = 0x80C2D2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2F4u)) return;
    // 80C2D2F4: li      r6, 18432
    ctx->gpr[6] = (u32)(s32)(18432);

label_80C2D2F8:
    ctx->pc = 0x80C2D2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2F8u)) return;
    // 80C2D2F8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2D2FC:
    ctx->pc = 0x80C2D2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D2FCu)) return;
    // 80C2D2FC: bl      0x8045C7B4
    {
            ctx->lr = 0x80C2D300u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C2D300:
    ctx->pc = 0x80C2D300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C2D300: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2D304:
    ctx->pc = 0x80C2D304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D304u)) return;
    // 80C2D304: li      r4, 400
    ctx->gpr[4] = (u32)(s32)(400);

label_80C2D308:
    ctx->pc = 0x80C2D308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D308u)) return;
    // 80C2D308: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2D30C:
    ctx->pc = 0x80C2D30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D30Cu)) return;
    // 80C2D30C: addi    r5, r5, 25572
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25572);

label_80C2D310:
    ctx->pc = 0x80C2D310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2D310: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2D310u)) return;
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
label_80C2D314:
    ctx->pc = 0x80C2D314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D314u)) return;
    // 80C2D314: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2D318:
    ctx->pc = 0x80C2D318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D318u)) return;
    // 80C2D318: addi    r5, r5, 25576
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25576);

label_80C2D31C:
    ctx->pc = 0x80C2D31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D31Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D31C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2D31Cu)) return;
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
label_80C2D320:
    ctx->pc = 0x80C2D320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D320u)) return;
    // 80C2D320: lis     r5, -27453
    ctx->gpr[5] = ((u32)(s32)(-27453) << 16);

label_80C2D324:
    ctx->pc = 0x80C2D324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D324u)) return;
    // 80C2D324: addi    r5, r5, 25580
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25580);

label_80C2D328:
    ctx->pc = 0x80C2D328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D328: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2D328u)) return;
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
label_80C2D32C:
    ctx->pc = 0x80C2D32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D32Cu)) return;
    // 80C2D32C: bl      0x8045C750
    {
            ctx->lr = 0x80C2D330u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C2D330:
    ctx->pc = 0x80C2D330u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D330u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C2D330: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2D334:
    ctx->pc = 0x80C2D334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D334u)) return;
    // 80C2D334: li      r4, 400
    ctx->gpr[4] = (u32)(s32)(400);

label_80C2D338:
    ctx->pc = 0x80C2D338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D338u)) return;
    // 80C2D338: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C2D33C:
    ctx->pc = 0x80C2D33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D33Cu)) return;
    // 80C2D33C: addi    r5, r6, -2048
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2048);

label_80C2D340:
    ctx->pc = 0x80C2D340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D340u)) return;
    // 80C2D340: addi    r6, r6, -29184
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-29184);

label_80C2D344:
    ctx->pc = 0x80C2D344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D344u)) return;
    // 80C2D344: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C2D348:
    ctx->pc = 0x80C2D348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D348u)) return;
    // 80C2D348: bl      0x8045C7B4
    {
            ctx->lr = 0x80C2D34Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C2D34C:
    ctx->pc = 0x80C2D34Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D34Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D34C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2D350:
    ctx->pc = 0x80C2D350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D350u)) return;
    // 80C2D350: bl      0x8045F220
    {
            ctx->lr = 0x80C2D354u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2D354:
    ctx->pc = 0x80C2D354u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D354u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D354: bl      0x8045EB8C
    {
            ctx->lr = 0x80C2D358u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C2D358:
    ctx->pc = 0x80C2D358u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D358u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D358: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2D35C:
    ctx->pc = 0x80C2D35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D35Cu)) return;
    // 80C2D35C: bl      0x8045F220
    {
            ctx->lr = 0x80C2D360u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2D360:
    ctx->pc = 0x80C2D360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D360: bl      0x8045C034
    {
            ctx->lr = 0x80C2D364u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C2D364:
    ctx->pc = 0x80C2D364u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D364u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D364: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2D368:
    ctx->pc = 0x80C2D368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D368u)) return;
    // 80C2D368: bl      0x8045F220
    {
            ctx->lr = 0x80C2D36Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2D36C:
    ctx->pc = 0x80C2D36Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D36Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2D36C: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2D370:
    ctx->pc = 0x80C2D370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D370u)) return;
    // 80C2D370: addi    r4, r4, 28408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28408);

label_80C2D374:
    ctx->pc = 0x80C2D374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D374u)) return;
    // 80C2D374: bl      0x8045C060
    {
            ctx->lr = 0x80C2D378u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C2D378:
    ctx->pc = 0x80C2D378u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D378u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D378: li      r3, 1060
    ctx->gpr[3] = (u32)(s32)(1060);

label_80C2D37C:
    ctx->pc = 0x80C2D37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D37Cu)) return;
    // 80C2D37C: bl      0x8045BFA0
    {
            ctx->lr = 0x80C2D380u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C2D380:
    ctx->pc = 0x80C2D380u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D380u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C2D380: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C2D384:
    ctx->pc = 0x80C2D384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D384u)) return;
    // 80C2D384: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C2D388:
    ctx->pc = 0x80C2D388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2D388: lwz     r0, 0(r3)
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
label_80C2D38C:
    ctx->pc = 0x80C2D38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D38Cu)) return;
    // 80C2D38C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C2D390:
    ctx->pc = 0x80C2D390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D390u)) return;
    // 80C2D390: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2D394:
    ctx->pc = 0x80C2D394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D394u)) return;
    // 80C2D394: addi    r3, r3, 28252
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28252);

label_80C2D398:
    ctx->pc = 0x80C2D398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D398: lwzx    r3, r3, r0
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
label_80C2D39C:
    ctx->pc = 0x80C2D39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D39Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D39C: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D3A0:
    ctx->pc = 0x80C2D3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D3A0u)) return;
    // 80C2D3A0: bl      0x8045F6FC
    {
            ctx->lr = 0x80C2D3A4u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C2D3A4:
    ctx->pc = 0x80C2D3A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D3A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D3A4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2D3A8:
    ctx->pc = 0x80C2D3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D3A8u)) return;
    // 80C2D3A8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2D3ACu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2D3AC:
    ctx->pc = 0x80C2D3ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D3ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D3AC: bl      0x8045BFF4
    {
            ctx->lr = 0x80C2D3B0u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80C2D3B0:
    ctx->pc = 0x80C2D3B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D3B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D3B0: bl      0x8045F32C
    {
            ctx->lr = 0x80C2D3B4u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C2D3B4:
    ctx->pc = 0x80C2D3B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D3B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D3B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2D3B8:
    ctx->pc = 0x80C2D3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D3B8u)) return;
    // 80C2D3B8: bl      0x8045F220
    {
            ctx->lr = 0x80C2D3BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2D3BC:
    ctx->pc = 0x80C2D3BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D3BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D3BC: bl      0x8045C034
    {
            ctx->lr = 0x80C2D3C0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C2D3C0:
    ctx->pc = 0x80C2D3C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D3C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2D3C0: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2D3C4:
    ctx->pc = 0x80C2D3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D3C4u)) return;
    // 80C2D3C4: addi    r3, r3, 25584
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25584);

label_80C2D3C8:
    ctx->pc = 0x80C2D3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D3C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2D3C8: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2D3C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C2D3CC:
    ctx->pc = 0x80C2D3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D3CCu)) return;
    // 80C2D3CC: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2D3D0:
    ctx->pc = 0x80C2D3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D3D0u)) return;
    // 80C2D3D0: addi    r3, r3, 25348
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25348);

label_80C2D3D4:
    ctx->pc = 0x80C2D3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D3D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D3D4: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2D3D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C2D3D8:
    ctx->pc = 0x80C2D3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D3D8u)) return;
    // 80C2D3D8: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80C2D3D8u)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_80C2D3DC:
    ctx->pc = 0x80C2D3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D3DCu)) return;
    // 80C2D3DC: fmr    f4, f2
    if (!ppc_fp_available_inline(ctx, 0x80C2D3DCu)) return;
    ctx->fpr[4] = ctx->fpr[2];

label_80C2D3E0:
    ctx->pc = 0x80C2D3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D3E0u)) return;
    // 80C2D3E0: fmr    f5, f2
    if (!ppc_fp_available_inline(ctx, 0x80C2D3E0u)) return;
    ctx->fpr[5] = ctx->fpr[2];

label_80C2D3E4:
    ctx->pc = 0x80C2D3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D3E4u)) return;
    // 80C2D3E4: bl      0x80C2D6B8
    {
            ctx->lr = 0x80C2D3E8u;
            goto label_80C2D6B8;
    }

label_80C2D3E8:
    ctx->pc = 0x80C2D3E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D3E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C2D3E8: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2D3EC:
    ctx->pc = 0x80C2D3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D3ECu)) return;
    // 80C2D3EC: addi    r4, r4, -4736
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4736);

label_80C2D3F0:
    ctx->pc = 0x80C2D3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D3F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D3F0: stw     r3, 0(r4)
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
label_80C2D3F4:
    ctx->pc = 0x80C2D3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D3F4u)) return;
    // 80C2D3F4: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80C2D3F8:
    ctx->pc = 0x80C2D3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D3F8u)) return;
    // 80C2D3F8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2D3FCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2D3FC:
    ctx->pc = 0x80C2D3FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D3FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D3FC: bl      0x8045F32C
    {
            ctx->lr = 0x80C2D400u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C2D400:
    ctx->pc = 0x80C2D400u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D400u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D400: b       0x80C2D44C
    {
            goto label_80C2D44C;
    }

label_80C2D404:
    ctx->pc = 0x80C2D404u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D404u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D404: bl      0x8045DE34
    {
            ctx->lr = 0x80C2D408u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80C2D408:
    ctx->pc = 0x80C2D408u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D408u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D408: bl      0x80460A80
    {
            ctx->lr = 0x80C2D40Cu;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80C2D40C:
    ctx->pc = 0x80C2D40Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D40Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D40C: bl      0x80C2DAFC
    {
            ctx->lr = 0x80C2D410u;
            goto label_80C2DAFC;
    }

label_80C2D410:
    ctx->pc = 0x80C2D410u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D410u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C2D410: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2D414:
    ctx->pc = 0x80C2D414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D414u)) return;
    // 80C2D414: addi    r3, r3, -4736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4736);

label_80C2D418:
    ctx->pc = 0x80C2D418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D418: lwz     r3, 0(r3)
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
label_80C2D41C:
    ctx->pc = 0x80C2D41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D41Cu)) return;
    // 80C2D41C: cmplwi  r3, 0x0000
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

label_80C2D420:
    ctx->pc = 0x80C2D420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D420u)) return;
    // 80C2D420: bc    12, 2, 0x80C2D438
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2D438;
        }
    }

label_80C2D424:
    ctx->pc = 0x80C2D424u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D424u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D424: bl      0x8050F9E0
    {
            ctx->lr = 0x80C2D428u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C2D428:
    ctx->pc = 0x80C2D428u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D428u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C2D428: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C2D42C:
    ctx->pc = 0x80C2D42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D42Cu)) return;
    // 80C2D42C: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2D430:
    ctx->pc = 0x80C2D430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D430u)) return;
    // 80C2D430: addi    r3, r3, -4736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4736);

label_80C2D434:
    ctx->pc = 0x80C2D434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2D434: stw     r0, 0(r3)
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
label_80C2D438:
    ctx->pc = 0x80C2D438u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D438u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D438: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2D43C:
    ctx->pc = 0x80C2D43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D43Cu)) return;
    // 80C2D43C: bl      0x8045EC10
    {
            ctx->lr = 0x80C2D440u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C2D440:
    ctx->pc = 0x80C2D440u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D440u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D440: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80C2D444:
    ctx->pc = 0x80C2D444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D444u)) return;
    // 80C2D444: bl      0x8045ED54
    {
            ctx->lr = 0x80C2D448u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80C2D448:
    ctx->pc = 0x80C2D448u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D448u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D448: bl      0x80C2BE40
    {
            ctx->lr = 0x80C2D44Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C2BE40u;
                return;
            }
            goto label_80C2BE40;
    }

label_80C2D44C:
    ctx->pc = 0x80C2D44Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D44Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2D44C: psq_l   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2D44Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C2D44Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D450:
    ctx->pc = 0x80C2D450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2D450: lfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2D450u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D454:
    ctx->pc = 0x80C2D454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2D454: lwz     r31, 12(r1)
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
label_80C2D458:
    ctx->pc = 0x80C2D458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2D458: lwz     r30, 8(r1)
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
label_80C2D45C:
    ctx->pc = 0x80C2D45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D45Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D45C: lwz     r0, 36(r1)
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
label_80C2D460:
    ctx->pc = 0x80C2D460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2D460u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D460: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D464:
    ctx->pc = 0x80C2D464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D464u)) return;
    // 80C2D464: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C2D468:
    ctx->pc = 0x80C2D468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D468u)) return;
    // 80C2D468: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2D46C:
    ctx->pc = 0x80C2D46Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D46Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2D46C: stwu     r1, -16(r1)
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
label_80C2D470:
    ctx->pc = 0x80C2D470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D470: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D474:
    ctx->pc = 0x80C2D474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D474: stw     r0, 20(r1)
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
label_80C2D478:
    ctx->pc = 0x80C2D478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D478u)) return;
    // 80C2D478: bl      0x80014034
    {
            ctx->lr = 0x80C2D47Cu;
            ctx->pc = 0x80014034u;
            return;
    }

label_80C2D47C:
    ctx->pc = 0x80C2D47Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D47Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C2D47C: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2D47Cu)) return;
    ppc_frsp(ctx, 1, 1);

label_80C2D480:
    ctx->pc = 0x80C2D480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D480u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D480: lwz     r0, 20(r1)
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
label_80C2D484:
    ctx->pc = 0x80C2D484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2D484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D484: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D488:
    ctx->pc = 0x80C2D488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D488u)) return;
    // 80C2D488: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2D48C:
    ctx->pc = 0x80C2D48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D48Cu)) return;
    // 80C2D48C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2D490:
    ctx->pc = 0x80C2D490u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D490u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2D490: stwu     r1, -16(r1)
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
label_80C2D494:
    ctx->pc = 0x80C2D494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D494: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D498:
    ctx->pc = 0x80C2D498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D498: stw     r0, 20(r1)
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
label_80C2D49C:
    ctx->pc = 0x80C2D49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D49Cu)) return;
    // 80C2D49C: bl      0x80013948
    {
            ctx->lr = 0x80C2D4A0u;
            ctx->pc = 0x80013948u;
            return;
    }

label_80C2D4A0:
    ctx->pc = 0x80C2D4A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D4A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C2D4A0: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2D4A0u)) return;
    ppc_frsp(ctx, 1, 1);

label_80C2D4A4:
    ctx->pc = 0x80C2D4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D4A4: lwz     r0, 20(r1)
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
label_80C2D4A8:
    ctx->pc = 0x80C2D4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2D4A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D4A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D4AC:
    ctx->pc = 0x80C2D4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4ACu)) return;
    // 80C2D4AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2D4B0:
    ctx->pc = 0x80C2D4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4B0u)) return;
    // 80C2D4B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2D4B4:
    ctx->pc = 0x80C2D4B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D4B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D4B4: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D4B8:
    ctx->pc = 0x80C2D4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2D4B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D4BC:
    ctx->pc = 0x80C2D4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D4BC: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D4C0:
    ctx->pc = 0x80C2D4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4C0u)) return;
    // 80C2D4C0: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80C2D4C4:
    ctx->pc = 0x80C2D4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4C4u)) return;
    // 80C2D4C4: bl      0x80006DD4
    {
            ctx->lr = 0x80C2D4C8u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80C2D4C8:
    ctx->pc = 0x80C2D4C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D4C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C2D4C8: lwz     r27, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D4CC:
    ctx->pc = 0x80C2D4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4CCu)) return;
    // 80C2D4CC: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2D4D0:
    ctx->pc = 0x80C2D4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4D0u)) return;
    // 80C2D4D0: addi    r3, r3, 25592
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25592);

label_80C2D4D4:
    ctx->pc = 0x80C2D4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C2D4D4: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2D4D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C2D4D8:
    ctx->pc = 0x80C2D4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C2D4D8: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C2D4D8u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
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
label_80C2D4DC:
    ctx->pc = 0x80C2D4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4DCu)) return;
    // 80C2D4DC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2D4DCu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C2D4E0:
    ctx->pc = 0x80C2D4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4E0u)) return;
    // 80C2D4E0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2D4E0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C2D4E4:
    ctx->pc = 0x80C2D4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C2D4E4: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2D4E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D4E8:
    ctx->pc = 0x80C2D4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C2D4E8: lwz     r31, 12(r1)
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
label_80C2D4EC:
    ctx->pc = 0x80C2D4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C2D4EC: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C2D4ECu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
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
label_80C2D4F0:
    ctx->pc = 0x80C2D4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4F0u)) return;
    // 80C2D4F0: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2D4F0u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C2D4F4:
    ctx->pc = 0x80C2D4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4F4u)) return;
    // 80C2D4F4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2D4F4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C2D4F8:
    ctx->pc = 0x80C2D4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C2D4F8: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2D4F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D4FC:
    ctx->pc = 0x80C2D4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D4FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C2D4FC: lwz     r30, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D500:
    ctx->pc = 0x80C2D500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C2D500: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C2D500u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
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
label_80C2D504:
    ctx->pc = 0x80C2D504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D504u)) return;
    // 80C2D504: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2D504u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C2D508:
    ctx->pc = 0x80C2D508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D508u)) return;
    // 80C2D508: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2D508u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C2D50C:
    ctx->pc = 0x80C2D50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D50Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2D50C: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2D50Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D510:
    ctx->pc = 0x80C2D510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2D510: lwz     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D514:
    ctx->pc = 0x80C2D514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2D514: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C2D514u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(40);
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
label_80C2D518:
    ctx->pc = 0x80C2D518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D518u)) return;
    // 80C2D518: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2D518u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C2D51C:
    ctx->pc = 0x80C2D51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D51Cu)) return;
    // 80C2D51C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2D51Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C2D520:
    ctx->pc = 0x80C2D520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2D520: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2D520u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D524:
    ctx->pc = 0x80C2D524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2D524: lwz     r28, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D528:
    ctx->pc = 0x80C2D528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D528u)) return;
    // 80C2D528: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C2D52C:
    ctx->pc = 0x80C2D52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D52Cu)) return;
    // 80C2D52C: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80C2D530:
    ctx->pc = 0x80C2D530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D530: lwz     r0, 0(r3)
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
label_80C2D534:
    ctx->pc = 0x80C2D534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D534u)) return;
    // 80C2D534: cmpwi   r0, 0
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

label_80C2D538:
    ctx->pc = 0x80C2D538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D538u)) return;
    // 80C2D538: bc    4, 2, 0x80C2D5F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2D5F0;
        }
    }

label_80C2D53C:
    ctx->pc = 0x80C2D53Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D53Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2D53C: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C2D540:
    ctx->pc = 0x80C2D540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D540u)) return;
    // 80C2D540: cmplwi  r0, 0x0000
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

label_80C2D544:
    ctx->pc = 0x80C2D544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D544u)) return;
    // 80C2D544: bc    12, 2, 0x80C2D5F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2D5F0;
        }
    }

label_80C2D548:
    ctx->pc = 0x80C2D548u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D548u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2D548: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2D54C:
    ctx->pc = 0x80C2D54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D54Cu)) return;
    // 80C2D54C: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80C2D550:
    ctx->pc = 0x80C2D550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D550u)) return;
    // 80C2D550: bl      0x8060F4F8
    {
            ctx->lr = 0x80C2D554u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80C2D554:
    ctx->pc = 0x80C2D554u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D554u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2D554: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2D558:
    ctx->pc = 0x80C2D558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D558u)) return;
    // 80C2D558: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80C2D55C:
    ctx->pc = 0x80C2D55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D55Cu)) return;
    // 80C2D55C: bl      0x8060F4F8
    {
            ctx->lr = 0x80C2D560u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80C2D560:
    ctx->pc = 0x80C2D560u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D560u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2D560: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C2D560u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
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
label_80C2D564:
    ctx->pc = 0x80C2D564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D564u)) return;
    // 80C2D564: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2D568:
    ctx->pc = 0x80C2D568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D568u)) return;
    // 80C2D568: addi    r3, r3, 25600
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25600);

label_80C2D56C:
    ctx->pc = 0x80C2D56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D56Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2D56C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2D56Cu)) return;
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
label_80C2D570:
    ctx->pc = 0x80C2D570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D570u)) return;
    // 80C2D570: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2D570u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80C2D574:
    ctx->pc = 0x80C2D574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D574u)) return;
    // 80C2D574: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80C2D578:
    ctx->pc = 0x80C2D578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D578u)) return;
    // 80C2D578: bc    4, 2, 0x80C2D58C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2D58C;
        }
    }

label_80C2D57C:
    ctx->pc = 0x80C2D57Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D57Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C2D57C: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2D580:
    ctx->pc = 0x80C2D580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D580u)) return;
    // 80C2D580: addi    r3, r3, 25596
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25596);

label_80C2D584:
    ctx->pc = 0x80C2D584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D584: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2D584u)) return;
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
label_80C2D588:
    ctx->pc = 0x80C2D588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D588u)) return;
    // 80C2D588: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2D588u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80C2D58C:
    ctx->pc = 0x80C2D58Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D58Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2D58C: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C2D590:
    ctx->pc = 0x80C2D590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D590u)) return;
    // 80C2D590: cmplwi  r0, 0x00FF
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

label_80C2D594:
    ctx->pc = 0x80C2D594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D594u)) return;
    // 80C2D594: bc    4, 1, 0x80C2D59C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2D59C;
        }
    }

label_80C2D598:
    ctx->pc = 0x80C2D598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D598: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80C2D59C:
    ctx->pc = 0x80C2D59Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D59Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80C2D59C: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2D5A0:
    ctx->pc = 0x80C2D5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5A0u)) return;
    // 80C2D5A0: addi    r3, r3, 25604
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25604);

label_80C2D5A4:
    ctx->pc = 0x80C2D5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C2D5A4: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2D5A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C2D5A8:
    ctx->pc = 0x80C2D5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5A8u)) return;
    // 80C2D5A8: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2D5A8u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80C2D5AC:
    ctx->pc = 0x80C2D5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5ACu)) return;
    // 80C2D5AC: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2D5B0:
    ctx->pc = 0x80C2D5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5B0u)) return;
    // 80C2D5B0: addi    r3, r3, 25608
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25608);

label_80C2D5B4:
    ctx->pc = 0x80C2D5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C2D5B4: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2D5B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C2D5B8:
    ctx->pc = 0x80C2D5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5B8u)) return;
    // 80C2D5B8: lis     r3, -27453
    ctx->gpr[3] = ((u32)(s32)(-27453) << 16);

label_80C2D5BC:
    ctx->pc = 0x80C2D5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5BCu)) return;
    // 80C2D5BC: addi    r3, r3, 25612
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25612);

label_80C2D5C0:
    ctx->pc = 0x80C2D5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2D5C0: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2D5C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C2D5C4:
    ctx->pc = 0x80C2D5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5C4u)) return;
    // 80C2D5C4: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80C2D5C8:
    ctx->pc = 0x80C2D5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5C8u)) return;
    // 80C2D5C8: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80C2D5CC:
    ctx->pc = 0x80C2D5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5CCu)) return;
    // 80C2D5CC: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80C2D5D0:
    ctx->pc = 0x80C2D5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5D0u)) return;
    // 80C2D5D0: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C2D5D4:
    ctx->pc = 0x80C2D5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5D4u)) return;
    // 80C2D5D4: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80C2D5D8:
    ctx->pc = 0x80C2D5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5D8u)) return;
    // 80C2D5D8: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80C2D5DC:
    ctx->pc = 0x80C2D5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5DCu)) return;
    // 80C2D5DC: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80C2D5E0:
    ctx->pc = 0x80C2D5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5E0u)) return;
    // 80C2D5E0: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80C2D5E4:
    ctx->pc = 0x80C2D5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5E4u)) return;
    // 80C2D5E4: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80C2D5E8:
    ctx->pc = 0x80C2D5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5E8u)) return;
    // 80C2D5E8: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80C2D5EC:
    ctx->pc = 0x80C2D5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5ECu)) return;
    // 80C2D5EC: bl      0x80C2D7AC
    {
            ctx->lr = 0x80C2D5F0u;
            goto label_80C2D7AC;
    }

label_80C2D5F0:
    ctx->pc = 0x80C2D5F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D5F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D5F0: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80C2D5F4:
    ctx->pc = 0x80C2D5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D5F4u)) return;
    // 80C2D5F4: bl      0x80006E20
    {
            ctx->lr = 0x80C2D5F8u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80C2D5F8:
    ctx->pc = 0x80C2D5F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D5F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D5F8: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D5FC:
    ctx->pc = 0x80C2D5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2D5FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D5FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D600:
    ctx->pc = 0x80C2D600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D600u)) return;
    // 80C2D600: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80C2D604:
    ctx->pc = 0x80C2D604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D604u)) return;
    // 80C2D604: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2D608:
    ctx->pc = 0x80C2D608u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D608u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2D608: stwu     r1, -16(r1)
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
label_80C2D60C:
    ctx->pc = 0x80C2D60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D60Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2D60C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D610:
    ctx->pc = 0x80C2D610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2D610: stw     r0, 20(r1)
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
label_80C2D614:
    ctx->pc = 0x80C2D614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2D614: lwz     r5, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D618:
    ctx->pc = 0x80C2D618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2D618: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2D618u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
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
label_80C2D61C:
    ctx->pc = 0x80C2D61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D61Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2D61C: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2D61Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
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
label_80C2D620:
    ctx->pc = 0x80C2D620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D620u)) return;
    // 80C2D620: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2D620u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80C2D624:
    ctx->pc = 0x80C2D624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D624u)) return;
    // 80C2D624: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2D628:
    ctx->pc = 0x80C2D628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D628u)) return;
    // 80C2D628: addi    r4, r4, 25616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25616);

label_80C2D62C:
    ctx->pc = 0x80C2D62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D62Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D62C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2D62Cu)) return;
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
label_80C2D630:
    ctx->pc = 0x80C2D630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D630u)) return;
    // 80C2D630: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2D630u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80C2D634:
    ctx->pc = 0x80C2D634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D634u)) return;
    // 80C2D634: bc    4, 1, 0x80C2D640
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2D640;
        }
    }

label_80C2D638:
    ctx->pc = 0x80C2D638u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D638u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2D638: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2D638u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80C2D63C:
    ctx->pc = 0x80C2D63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D63Cu)) return;
    // 80C2D63C: b       0x80C2D658
    {
            goto label_80C2D658;
    }

label_80C2D640:
    ctx->pc = 0x80C2D640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C2D640: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2D644:
    ctx->pc = 0x80C2D644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D644u)) return;
    // 80C2D644: addi    r4, r4, 25604
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25604);

label_80C2D648:
    ctx->pc = 0x80C2D648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D648: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2D648u)) return;
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
label_80C2D64C:
    ctx->pc = 0x80C2D64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D64Cu)) return;
    // 80C2D64C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2D64Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80C2D650:
    ctx->pc = 0x80C2D650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D650u)) return;
    // 80C2D650: bc    4, 0, 0x80C2D658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2D658;
        }
    }

label_80C2D654:
    ctx->pc = 0x80C2D654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D654: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2D654u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80C2D658:
    ctx->pc = 0x80C2D658u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D658u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D658: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2D658u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D65C:
    ctx->pc = 0x80C2D65Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D65Cu)) return;
    // 80C2D65C: bl      0x80C2D4B4
    {
            ctx->lr = 0x80C2D660u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C2D4B4u;
                return;
            }
            goto label_80C2D4B4;
    }

label_80C2D660:
    ctx->pc = 0x80C2D660u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D660: lwz     r0, 20(r1)
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
label_80C2D664:
    ctx->pc = 0x80C2D664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2D664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D664: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D668:
    ctx->pc = 0x80C2D668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D668u)) return;
    // 80C2D668: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2D66C:
    ctx->pc = 0x80C2D66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D66Cu)) return;
    // 80C2D66C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2D670:
    ctx->pc = 0x80C2D670u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D670u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2D670: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2D674:
    ctx->pc = 0x80C2D674u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D674u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2D674: stwu     r1, -16(r1)
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
label_80C2D678:
    ctx->pc = 0x80C2D678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2D678: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D67C:
    ctx->pc = 0x80C2D67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D67Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2D67C: stw     r0, 20(r1)
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
label_80C2D680:
    ctx->pc = 0x80C2D680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D680u)) return;
    // 80C2D680: lis     r4, -32573
    ctx->gpr[4] = ((u32)(s32)(-32573) << 16);

label_80C2D684:
    ctx->pc = 0x80C2D684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D684u)) return;
    // 80C2D684: addi    r0, r4, -10744
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-10744);

label_80C2D688:
    ctx->pc = 0x80C2D688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2D688: stw     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D68C:
    ctx->pc = 0x80C2D68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D68Cu)) return;
    // 80C2D68C: lis     r4, -32573
    ctx->gpr[4] = ((u32)(s32)(-32573) << 16);

label_80C2D690:
    ctx->pc = 0x80C2D690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D690u)) return;
    // 80C2D690: addi    r0, r4, -11084
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-11084);

label_80C2D694:
    ctx->pc = 0x80C2D694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D694: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D698:
    ctx->pc = 0x80C2D698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D698u)) return;
    // 80C2D698: lis     r4, -32573
    ctx->gpr[4] = ((u32)(s32)(-32573) << 16);

label_80C2D69C:
    ctx->pc = 0x80C2D69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D69Cu)) return;
    // 80C2D69C: addi    r0, r4, -10640
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-10640);

label_80C2D6A0:
    ctx->pc = 0x80C2D6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D6A0: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D6A4:
    ctx->pc = 0x80C2D6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6A4u)) return;
    // 80C2D6A4: bl      0x80C2D608
    {
            ctx->lr = 0x80C2D6A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C2D608u;
                return;
            }
            goto label_80C2D608;
    }

label_80C2D6A8:
    ctx->pc = 0x80C2D6A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D6A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D6A8: lwz     r0, 20(r1)
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
label_80C2D6AC:
    ctx->pc = 0x80C2D6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2D6ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D6AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D6B0:
    ctx->pc = 0x80C2D6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6B0u)) return;
    // 80C2D6B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2D6B4:
    ctx->pc = 0x80C2D6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6B4u)) return;
    // 80C2D6B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2D6B8:
    ctx->pc = 0x80C2D6B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D6B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C2D6B8: stwu     r1, -96(r1)
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
label_80C2D6BC:
    ctx->pc = 0x80C2D6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C2D6BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D6C0:
    ctx->pc = 0x80C2D6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C2D6C0: stw     r0, 100(r1)
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
label_80C2D6C4:
    ctx->pc = 0x80C2D6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C2D6C4: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2D6C4u)) return;
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
label_80C2D6C8:
    ctx->pc = 0x80C2D6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C2D6C8: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2D6C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80C2D6C8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D6CC:
    ctx->pc = 0x80C2D6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C2D6CC: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2D6CCu)) return;
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
label_80C2D6D0:
    ctx->pc = 0x80C2D6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C2D6D0: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2D6D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80C2D6D0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D6D4:
    ctx->pc = 0x80C2D6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C2D6D4: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2D6D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D6D8:
    ctx->pc = 0x80C2D6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C2D6D8: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2D6D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80C2D6D8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D6DC:
    ctx->pc = 0x80C2D6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2D6DC: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2D6DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D6E0:
    ctx->pc = 0x80C2D6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2D6E0: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2D6E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80C2D6E0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D6E4:
    ctx->pc = 0x80C2D6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2D6E4: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2D6E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D6E8:
    ctx->pc = 0x80C2D6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2D6E8: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2D6E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80C2D6E8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D6EC:
    ctx->pc = 0x80C2D6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6ECu)) return;
    // 80C2D6EC: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2D6ECu)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80C2D6F0:
    ctx->pc = 0x80C2D6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6F0u)) return;
    // 80C2D6F0: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80C2D6F0u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80C2D6F4:
    ctx->pc = 0x80C2D6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6F4u)) return;
    // 80C2D6F4: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80C2D6F4u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80C2D6F8:
    ctx->pc = 0x80C2D6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6F8u)) return;
    // 80C2D6F8: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80C2D6F8u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80C2D6FC:
    ctx->pc = 0x80C2D6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D6FCu)) return;
    // 80C2D6FC: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80C2D6FCu)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80C2D700:
    ctx->pc = 0x80C2D700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D700u)) return;
    // 80C2D700: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C2D704:
    ctx->pc = 0x80C2D704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D704u)) return;
    // 80C2D704: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80C2D708:
    ctx->pc = 0x80C2D708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D708u)) return;
    // 80C2D708: lis     r5, -32573
    ctx->gpr[5] = ((u32)(s32)(-32573) << 16);

label_80C2D70C:
    ctx->pc = 0x80C2D70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D70Cu)) return;
    // 80C2D70C: addi    r5, r5, -10636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-10636);

label_80C2D710:
    ctx->pc = 0x80C2D710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D710u)) return;
    // 80C2D710: bl      0x8050FD60
    {
            ctx->lr = 0x80C2D714u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C2D714:
    ctx->pc = 0x80C2D714u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D714u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C2D714: lwz     r5, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D718:
    ctx->pc = 0x80C2D718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C2D718: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2D718u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D71C:
    ctx->pc = 0x80C2D71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D71Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C2D71C: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2D71Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D720:
    ctx->pc = 0x80C2D720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C2D720: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2D720u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D724:
    ctx->pc = 0x80C2D724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C2D724: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2D724u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D728:
    ctx->pc = 0x80C2D728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C2D728: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2D728u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D72C:
    ctx->pc = 0x80C2D72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D72Cu)) return;
    // 80C2D72C: lis     r4, -27453
    ctx->gpr[4] = ((u32)(s32)(-27453) << 16);

label_80C2D730:
    ctx->pc = 0x80C2D730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D730u)) return;
    // 80C2D730: addi    r4, r4, 25600
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25600);

label_80C2D734:
    ctx->pc = 0x80C2D734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C2D734: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C2D734u)) return;
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
label_80C2D738:
    ctx->pc = 0x80C2D738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C2D738: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2D738u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D73C:
    ctx->pc = 0x80C2D73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D73Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C2D73C: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2D73Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C2D73Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D740:
    ctx->pc = 0x80C2D740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2D740: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2D740u)) return;
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
label_80C2D744:
    ctx->pc = 0x80C2D744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2D744: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2D744u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80C2D744u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D748:
    ctx->pc = 0x80C2D748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2D748: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2D748u)) return;
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
label_80C2D74C:
    ctx->pc = 0x80C2D74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D74Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2D74C: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2D74Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80C2D74Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D750:
    ctx->pc = 0x80C2D750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2D750: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2D750u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D754:
    ctx->pc = 0x80C2D754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2D754: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2D754u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80C2D754u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D758:
    ctx->pc = 0x80C2D758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2D758: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2D758u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D75C:
    ctx->pc = 0x80C2D75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D75Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2D75C: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2D75Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80C2D75Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D760:
    ctx->pc = 0x80C2D760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2D760: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2D760u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D764:
    ctx->pc = 0x80C2D764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D764: lwz     r0, 100(r1)
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
label_80C2D768:
    ctx->pc = 0x80C2D768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2D768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D768: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D76C:
    ctx->pc = 0x80C2D76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D76Cu)) return;
    // 80C2D76C: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80C2D770:
    ctx->pc = 0x80C2D770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D770u)) return;
    // 80C2D770: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2D774:
    ctx->pc = 0x80C2D774u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D774u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D774: lwz     r3, 32(r3)
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
label_80C2D778:
    ctx->pc = 0x80C2D778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D778: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2D778u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D77C:
    ctx->pc = 0x80C2D77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D77Cu)) return;
    // 80C2D77C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2D780:
    ctx->pc = 0x80C2D780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D780: lwz     r3, 32(r3)
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
label_80C2D784:
    ctx->pc = 0x80C2D784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D784: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2D784u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D788:
    ctx->pc = 0x80C2D788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D788u)) return;
    // 80C2D788: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2D78C:
    ctx->pc = 0x80C2D78Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D78Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D78C: lwz     r3, 32(r3)
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
label_80C2D790:
    ctx->pc = 0x80C2D790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D790u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2D790: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2D790u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D794:
    ctx->pc = 0x80C2D794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D794u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D794: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2D794u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D798:
    ctx->pc = 0x80C2D798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D798u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D798: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2D798u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D79C:
    ctx->pc = 0x80C2D79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D79Cu)) return;
    // 80C2D79C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2D7A0:
    ctx->pc = 0x80C2D7A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D7A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D7A0: lwz     r3, 32(r3)
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
label_80C2D7A4:
    ctx->pc = 0x80C2D7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D7A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D7A4: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2D7A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D7A8:
    ctx->pc = 0x80C2D7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D7A8u)) return;
    // 80C2D7A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2D7AC:
    ctx->pc = 0x80C2D7ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D7ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D7AC: stwu     r1, -16(r1)
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
label_80C2D7B0:
    ctx->pc = 0x80C2D7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D7B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2D7B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D7B4:
    ctx->pc = 0x80C2D7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D7B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D7B4: stw     r0, 20(r1)
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
label_80C2D7B8:
    ctx->pc = 0x80C2D7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D7B8u)) return;
    // 80C2D7B8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80C2D7BC:
    ctx->pc = 0x80C2D7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D7BCu)) return;
    // 80C2D7BC: bl      0x80607948
    {
            ctx->lr = 0x80C2D7C0u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80C2D7C0:
    ctx->pc = 0x80C2D7C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D7C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D7C0: lwz     r0, 20(r1)
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
label_80C2D7C4:
    ctx->pc = 0x80C2D7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2D7C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D7C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D7C8:
    ctx->pc = 0x80C2D7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D7C8u)) return;
    // 80C2D7C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2D7CC:
    ctx->pc = 0x80C2D7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D7CCu)) return;
    // 80C2D7CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2D7D0:
    ctx->pc = 0x80C2D7D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D7D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2D7D0: stwu     r1, -16(r1)
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
label_80C2D7D4:
    ctx->pc = 0x80C2D7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D7D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D7D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D7D8:
    ctx->pc = 0x80C2D7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D7D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2D7D8: stw     r0, 20(r1)
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
label_80C2D7DC:
    ctx->pc = 0x80C2D7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D7DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D7DC: lwz     r3, 32(r3)
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
label_80C2D7E0:
    ctx->pc = 0x80C2D7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D7E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D7E0: lwz     r3, 16(r3)
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
label_80C2D7E4:
    ctx->pc = 0x80C2D7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D7E4u)) return;
    // 80C2D7E4: bl      0x80509CF0
    {
            ctx->lr = 0x80C2D7E8u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80C2D7E8:
    ctx->pc = 0x80C2D7E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D7E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D7E8: lwz     r0, 20(r1)
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
label_80C2D7EC:
    ctx->pc = 0x80C2D7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2D7ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D7EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D7F0:
    ctx->pc = 0x80C2D7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D7F0u)) return;
    // 80C2D7F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2D7F4:
    ctx->pc = 0x80C2D7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D7F4u)) return;
    // 80C2D7F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2D7F8:
    ctx->pc = 0x80C2D7F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D7F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2D7F8: stwu     r1, -32(r1)
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
label_80C2D7FC:
    ctx->pc = 0x80C2D7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D7FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2D7FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D800:
    ctx->pc = 0x80C2D800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2D800: stw     r0, 36(r1)
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
label_80C2D804:
    ctx->pc = 0x80C2D804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2D804: stw     r31, 28(r1)
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
label_80C2D808:
    ctx->pc = 0x80C2D808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2D808: stw     r30, 24(r1)
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
label_80C2D80C:
    ctx->pc = 0x80C2D80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D80Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2D80C: stw     r29, 20(r1)
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
label_80C2D810:
    ctx->pc = 0x80C2D810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D810: lwz     r31, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D814:
    ctx->pc = 0x80C2D814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2D814: lwz     r30, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D818:
    ctx->pc = 0x80C2D818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D818: lwz     r5, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D81C:
    ctx->pc = 0x80C2D81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D81Cu)) return;
    // 80C2D81C: cmpwi   r5, 0
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

label_80C2D820:
    ctx->pc = 0x80C2D820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D820u)) return;
    // 80C2D820: bc    4, 1, 0x80C2D858
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2D858;
        }
    }

label_80C2D824:
    ctx->pc = 0x80C2D824u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D824u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C2D824: lwz     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D828:
    ctx->pc = 0x80C2D828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D828u)) return;
    // 80C2D828: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C2D82C:
    ctx->pc = 0x80C2D82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D82Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C2D82C: lwz     r0, 20(r31)
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
label_80C2D830:
    ctx->pc = 0x80C2D830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C2D830u)) return;
    // 80C2D830: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C2D834:
    ctx->pc = 0x80C2D834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D834u)) return;
    // 80C2D834: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C2D838:
    ctx->pc = 0x80C2D838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C2D838u)) return;
    // 80C2D838: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C2D83C:
    ctx->pc = 0x80C2D83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D83Cu)) return;
    // 80C2D83C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C2D840:
    ctx->pc = 0x80C2D840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D840u)) return;
    // 80C2D840: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C2D844:
    ctx->pc = 0x80C2D844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D844u)) return;
    // 80C2D844: bl      0x80509C74
    {
            ctx->lr = 0x80C2D848u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C2D848:
    ctx->pc = 0x80C2D848u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D848u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2D848: stw     r29, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D84C:
    ctx->pc = 0x80C2D84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D84Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D84C: lwz     r3, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D850:
    ctx->pc = 0x80C2D850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D850u)) return;
    // 80C2D850: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C2D854:
    ctx->pc = 0x80C2D854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2D854: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D858:
    ctx->pc = 0x80C2D858u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D858u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D858: lwz     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D85C:
    ctx->pc = 0x80C2D85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D85Cu)) return;
    // 80C2D85C: cmpwi   r5, 0
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

label_80C2D860:
    ctx->pc = 0x80C2D860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D860u)) return;
    // 80C2D860: bc    4, 1, 0x80C2D898
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2D898;
        }
    }

label_80C2D864:
    ctx->pc = 0x80C2D864u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D864u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C2D864: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D868:
    ctx->pc = 0x80C2D868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D868u)) return;
    // 80C2D868: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C2D86C:
    ctx->pc = 0x80C2D86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D86Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C2D86C: lwz     r0, 32(r31)
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
label_80C2D870:
    ctx->pc = 0x80C2D870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C2D870u)) return;
    // 80C2D870: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C2D874:
    ctx->pc = 0x80C2D874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D874u)) return;
    // 80C2D874: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C2D878:
    ctx->pc = 0x80C2D878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C2D878u)) return;
    // 80C2D878: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C2D87C:
    ctx->pc = 0x80C2D87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D87Cu)) return;
    // 80C2D87C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C2D880:
    ctx->pc = 0x80C2D880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D880u)) return;
    // 80C2D880: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C2D884:
    ctx->pc = 0x80C2D884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D884u)) return;
    // 80C2D884: bl      0x80509BF8
    {
            ctx->lr = 0x80C2D888u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C2D888:
    ctx->pc = 0x80C2D888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2D888: stw     r29, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D88C:
    ctx->pc = 0x80C2D88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D88Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D88C: lwz     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D890:
    ctx->pc = 0x80C2D890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D890u)) return;
    // 80C2D890: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C2D894:
    ctx->pc = 0x80C2D894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2D894: stw     r0, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D898:
    ctx->pc = 0x80C2D898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D898: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D89C:
    ctx->pc = 0x80C2D89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D89Cu)) return;
    // 80C2D89C: cmpwi   r5, 0
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

label_80C2D8A0:
    ctx->pc = 0x80C2D8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D8A0u)) return;
    // 80C2D8A0: bc    4, 1, 0x80C2D8D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2D8D8;
        }
    }

label_80C2D8A4:
    ctx->pc = 0x80C2D8A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D8A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C2D8A4: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D8A8:
    ctx->pc = 0x80C2D8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D8A8u)) return;
    // 80C2D8A8: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C2D8AC:
    ctx->pc = 0x80C2D8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D8ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C2D8AC: lwz     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D8B0:
    ctx->pc = 0x80C2D8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C2D8B0u)) return;
    // 80C2D8B0: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C2D8B4:
    ctx->pc = 0x80C2D8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D8B4u)) return;
    // 80C2D8B4: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C2D8B8:
    ctx->pc = 0x80C2D8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C2D8B8u)) return;
    // 80C2D8B8: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C2D8BC:
    ctx->pc = 0x80C2D8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D8BCu)) return;
    // 80C2D8BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C2D8C0:
    ctx->pc = 0x80C2D8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D8C0u)) return;
    // 80C2D8C0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C2D8C4:
    ctx->pc = 0x80C2D8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D8C4u)) return;
    // 80C2D8C4: bl      0x80509B94
    {
            ctx->lr = 0x80C2D8C8u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C2D8C8:
    ctx->pc = 0x80C2D8C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D8C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2D8C8: stw     r29, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D8CC:
    ctx->pc = 0x80C2D8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D8CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D8CC: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D8D0:
    ctx->pc = 0x80C2D8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D8D0u)) return;
    // 80C2D8D0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C2D8D4:
    ctx->pc = 0x80C2D8D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D8D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2D8D4: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D8D8:
    ctx->pc = 0x80C2D8D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D8D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2D8D8: lwz     r31, 28(r1)
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
label_80C2D8DC:
    ctx->pc = 0x80C2D8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D8DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2D8DC: lwz     r30, 24(r1)
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
label_80C2D8E0:
    ctx->pc = 0x80C2D8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D8E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2D8E0: lwz     r29, 20(r1)
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
label_80C2D8E4:
    ctx->pc = 0x80C2D8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D8E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D8E4: lwz     r0, 36(r1)
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
label_80C2D8E8:
    ctx->pc = 0x80C2D8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2D8E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D8E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D8EC:
    ctx->pc = 0x80C2D8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D8ECu)) return;
    // 80C2D8EC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C2D8F0:
    ctx->pc = 0x80C2D8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D8F0u)) return;
    // 80C2D8F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2D8F4:
    ctx->pc = 0x80C2D8F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D8F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2D8F4: stwu     r1, -32(r1)
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
label_80C2D8F8:
    ctx->pc = 0x80C2D8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D8F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2D8F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D8FC:
    ctx->pc = 0x80C2D8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D8FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2D8FC: stw     r0, 36(r1)
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
label_80C2D900:
    ctx->pc = 0x80C2D900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D900u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2D900: stw     r31, 28(r1)
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
label_80C2D904:
    ctx->pc = 0x80C2D904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2D904: stw     r30, 24(r1)
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
label_80C2D908:
    ctx->pc = 0x80C2D908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D908u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2D908: stw     r29, 20(r1)
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
label_80C2D90C:
    ctx->pc = 0x80C2D90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D90Cu)) return;
    // 80C2D90C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C2D910:
    ctx->pc = 0x80C2D910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D910u)) return;
    // 80C2D910: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C2D914:
    ctx->pc = 0x80C2D914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D914u)) return;
    // 80C2D914: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C2D918:
    ctx->pc = 0x80C2D918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D918u)) return;
    // 80C2D918: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C2D91C:
    ctx->pc = 0x80C2D91Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D91Cu)) return;
    // 80C2D91C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C2D920:
    ctx->pc = 0x80C2D920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D920u)) return;
    // 80C2D920: bl      0x8050FD60
    {
            ctx->lr = 0x80C2D924u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C2D924:
    ctx->pc = 0x80C2D924u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D924u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2D924: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C2D928:
    ctx->pc = 0x80C2D928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D928u)) return;
    // 80C2D928: cmplwi  r31, 0x0000
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

label_80C2D92C:
    ctx->pc = 0x80C2D92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D92Cu)) return;
    // 80C2D92C: bc    12, 2, 0x80C2D990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2D990;
        }
    }

label_80C2D930:
    ctx->pc = 0x80C2D930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C2D930: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C2D934:
    ctx->pc = 0x80C2D934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D934u)) return;
    // 80C2D934: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C2D938:
    ctx->pc = 0x80C2D938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D938u)) return;
    // 80C2D938: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C2D93C:
    ctx->pc = 0x80C2D93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D93Cu)) return;
    // 80C2D93C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C2D940:
    ctx->pc = 0x80C2D940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D940u)) return;
    // 80C2D940: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C2D944:
    ctx->pc = 0x80C2D944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D944u)) return;
    // 80C2D944: bl      0x8050A0D4
    {
            ctx->lr = 0x80C2D948u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80C2D948:
    ctx->pc = 0x80C2D948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80C2D948: lis     r3, -32573
    ctx->gpr[3] = ((u32)(s32)(-32573) << 16);

label_80C2D94C:
    ctx->pc = 0x80C2D94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D94Cu)) return;
    // 80C2D94C: addi    r0, r3, -10248
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-10248);

label_80C2D950:
    ctx->pc = 0x80C2D950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C2D950: stw     r0, 16(r31)
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
label_80C2D954:
    ctx->pc = 0x80C2D954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D954u)) return;
    // 80C2D954: lis     r3, -32573
    ctx->gpr[3] = ((u32)(s32)(-32573) << 16);

label_80C2D958:
    ctx->pc = 0x80C2D958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D958u)) return;
    // 80C2D958: addi    r0, r3, -10288
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-10288);

label_80C2D95C:
    ctx->pc = 0x80C2D95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D95Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2D95C: stw     r0, 24(r31)
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
label_80C2D960:
    ctx->pc = 0x80C2D960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2D960: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D964:
    ctx->pc = 0x80C2D964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2D964: stw     r31, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D968:
    ctx->pc = 0x80C2D968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D968u)) return;
    // 80C2D968: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C2D96C:
    ctx->pc = 0x80C2D96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D96Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2D96C: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D970:
    ctx->pc = 0x80C2D970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D970u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2D970: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D974:
    ctx->pc = 0x80C2D974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D974u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2D974: stw     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D978:
    ctx->pc = 0x80C2D978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D978u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2D978: stw     r0, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D97C:
    ctx->pc = 0x80C2D97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D97Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D97C: stw     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D980:
    ctx->pc = 0x80C2D980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2D980: stw     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D984:
    ctx->pc = 0x80C2D984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D984: stw     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D988:
    ctx->pc = 0x80C2D988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D988: stw     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D98C:
    ctx->pc = 0x80C2D98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D98Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2D98C: stw     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D990:
    ctx->pc = 0x80C2D990u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D990u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C2D990: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C2D994:
    ctx->pc = 0x80C2D994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2D994: lwz     r31, 28(r1)
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
label_80C2D998:
    ctx->pc = 0x80C2D998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2D998: lwz     r30, 24(r1)
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
label_80C2D99C:
    ctx->pc = 0x80C2D99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D99Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2D99C: lwz     r29, 20(r1)
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
label_80C2D9A0:
    ctx->pc = 0x80C2D9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D9A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D9A0: lwz     r0, 36(r1)
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
label_80C2D9A4:
    ctx->pc = 0x80C2D9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2D9A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D9A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D9A8:
    ctx->pc = 0x80C2D9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D9A8u)) return;
    // 80C2D9A8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C2D9AC:
    ctx->pc = 0x80C2D9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D9ACu)) return;
    // 80C2D9AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2D9B0:
    ctx->pc = 0x80C2D9B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D9B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2D9B0: stwu     r1, -16(r1)
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
label_80C2D9B4:
    ctx->pc = 0x80C2D9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D9B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2D9B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D9B8:
    ctx->pc = 0x80C2D9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D9B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2D9B8: stw     r0, 20(r1)
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
label_80C2D9BC:
    ctx->pc = 0x80C2D9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D9BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2D9BC: stw     r31, 12(r1)
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
label_80C2D9C0:
    ctx->pc = 0x80C2D9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D9C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2D9C0: stw     r30, 8(r1)
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
label_80C2D9C4:
    ctx->pc = 0x80C2D9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D9C4u)) return;
    // 80C2D9C4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C2D9C8:
    ctx->pc = 0x80C2D9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D9C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D9C8: lwz     r31, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D9CC:
    ctx->pc = 0x80C2D9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D9CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2D9CC: stw     r30, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D9D0:
    ctx->pc = 0x80C2D9D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D9D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D9D0: stw     r5, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D9D4:
    ctx->pc = 0x80C2D9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D9D4u)) return;
    // 80C2D9D4: cmpwi   r5, 0
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

label_80C2D9D8:
    ctx->pc = 0x80C2D9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D9D8u)) return;
    // 80C2D9D8: bc    12, 1, 0x80C2D9E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2D9E8;
        }
    }

label_80C2D9DC:
    ctx->pc = 0x80C2D9DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D9DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2D9DC: lwz     r3, 16(r31)
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
label_80C2D9E0:
    ctx->pc = 0x80C2D9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D9E0u)) return;
    // 80C2D9E0: bl      0x80509C74
    {
            ctx->lr = 0x80C2D9E4u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C2D9E4:
    ctx->pc = 0x80C2D9E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D9E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2D9E4: stw     r30, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D9E8:
    ctx->pc = 0x80C2D9E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2D9E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2D9E8: lwz     r31, 12(r1)
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
label_80C2D9EC:
    ctx->pc = 0x80C2D9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D9ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2D9EC: lwz     r30, 8(r1)
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
label_80C2D9F0:
    ctx->pc = 0x80C2D9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D9F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2D9F0: lwz     r0, 20(r1)
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
label_80C2D9F4:
    ctx->pc = 0x80C2D9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2D9F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2D9F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2D9F8:
    ctx->pc = 0x80C2D9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D9F8u)) return;
    // 80C2D9F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2D9FC:
    ctx->pc = 0x80C2D9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2D9FCu)) return;
    // 80C2D9FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2DA00:
    ctx->pc = 0x80C2DA00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DA00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2DA00: stwu     r1, -16(r1)
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
label_80C2DA04:
    ctx->pc = 0x80C2DA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2DA04: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DA08:
    ctx->pc = 0x80C2DA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2DA08: stw     r0, 20(r1)
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
label_80C2DA0C:
    ctx->pc = 0x80C2DA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2DA0C: stw     r31, 12(r1)
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
label_80C2DA10:
    ctx->pc = 0x80C2DA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2DA10: stw     r30, 8(r1)
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
label_80C2DA14:
    ctx->pc = 0x80C2DA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA14u)) return;
    // 80C2DA14: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C2DA18:
    ctx->pc = 0x80C2DA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DA18: lwz     r31, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DA1C:
    ctx->pc = 0x80C2DA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2DA1C: stw     r30, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DA20:
    ctx->pc = 0x80C2DA20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DA20: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DA24:
    ctx->pc = 0x80C2DA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA24u)) return;
    // 80C2DA24: cmpwi   r5, 0
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

label_80C2DA28:
    ctx->pc = 0x80C2DA28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA28u)) return;
    // 80C2DA28: bc    12, 1, 0x80C2DA38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2DA38;
        }
    }

label_80C2DA2C:
    ctx->pc = 0x80C2DA2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DA2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2DA2C: lwz     r3, 16(r31)
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
label_80C2DA30:
    ctx->pc = 0x80C2DA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA30u)) return;
    // 80C2DA30: bl      0x80509BF8
    {
            ctx->lr = 0x80C2DA34u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C2DA34:
    ctx->pc = 0x80C2DA34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DA34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2DA34: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DA38:
    ctx->pc = 0x80C2DA38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DA38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2DA38: lwz     r31, 12(r1)
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
label_80C2DA3C:
    ctx->pc = 0x80C2DA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2DA3C: lwz     r30, 8(r1)
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
label_80C2DA40:
    ctx->pc = 0x80C2DA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DA40: lwz     r0, 20(r1)
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
label_80C2DA44:
    ctx->pc = 0x80C2DA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2DA44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DA44: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DA48:
    ctx->pc = 0x80C2DA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA48u)) return;
    // 80C2DA48: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2DA4C:
    ctx->pc = 0x80C2DA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA4Cu)) return;
    // 80C2DA4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2DA50:
    ctx->pc = 0x80C2DA50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DA50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2DA50: stwu     r1, -16(r1)
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
label_80C2DA54:
    ctx->pc = 0x80C2DA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2DA54: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DA58:
    ctx->pc = 0x80C2DA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2DA58: stw     r0, 20(r1)
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
label_80C2DA5C:
    ctx->pc = 0x80C2DA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2DA5C: stw     r31, 12(r1)
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
label_80C2DA60:
    ctx->pc = 0x80C2DA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2DA60: stw     r30, 8(r1)
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
label_80C2DA64:
    ctx->pc = 0x80C2DA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA64u)) return;
    // 80C2DA64: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C2DA68:
    ctx->pc = 0x80C2DA68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DA68: lwz     r31, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DA6C:
    ctx->pc = 0x80C2DA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2DA6C: stw     r30, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DA70:
    ctx->pc = 0x80C2DA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DA70: stw     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DA74:
    ctx->pc = 0x80C2DA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA74u)) return;
    // 80C2DA74: cmpwi   r5, 0
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

label_80C2DA78:
    ctx->pc = 0x80C2DA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA78u)) return;
    // 80C2DA78: bc    12, 1, 0x80C2DA88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2DA88;
        }
    }

label_80C2DA7C:
    ctx->pc = 0x80C2DA7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DA7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2DA7C: lwz     r3, 16(r31)
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
label_80C2DA80:
    ctx->pc = 0x80C2DA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA80u)) return;
    // 80C2DA80: bl      0x80509B94
    {
            ctx->lr = 0x80C2DA84u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C2DA84:
    ctx->pc = 0x80C2DA84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DA84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2DA84: stw     r30, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DA88:
    ctx->pc = 0x80C2DA88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DA88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2DA88: lwz     r31, 12(r1)
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
label_80C2DA8C:
    ctx->pc = 0x80C2DA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2DA8C: lwz     r30, 8(r1)
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
label_80C2DA90:
    ctx->pc = 0x80C2DA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DA90: lwz     r0, 20(r1)
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
label_80C2DA94:
    ctx->pc = 0x80C2DA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2DA94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DA94: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DA98:
    ctx->pc = 0x80C2DA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA98u)) return;
    // 80C2DA98: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2DA9C:
    ctx->pc = 0x80C2DA9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DA9Cu)) return;
    // 80C2DA9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2DAA0:
    ctx->pc = 0x80C2DAA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DAA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2DAA0: stwu     r1, -16(r1)
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
label_80C2DAA4:
    ctx->pc = 0x80C2DAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DAA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2DAA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DAA8:
    ctx->pc = 0x80C2DAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DAA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2DAA8: stw     r0, 20(r1)
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
label_80C2DAAC:
    ctx->pc = 0x80C2DAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DAACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2DAAC: stw     r31, 12(r1)
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
label_80C2DAB0:
    ctx->pc = 0x80C2DAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DAB0u)) return;
    // 80C2DAB0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C2DAB4:
    ctx->pc = 0x80C2DAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DAB4u)) return;
    // 80C2DAB4: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2DAB8:
    ctx->pc = 0x80C2DAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DAB8u)) return;
    // 80C2DAB8: addi    r4, r4, -4724
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4724);

label_80C2DABC:
    ctx->pc = 0x80C2DABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DABC: lwz     r0, 0(r4)
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
label_80C2DAC0:
    ctx->pc = 0x80C2DAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DAC0u)) return;
    // 80C2DAC0: cmplwi  r0, 0x0000
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

label_80C2DAC4:
    ctx->pc = 0x80C2DAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DAC4u)) return;
    // 80C2DAC4: bc    4, 2, 0x80C2DAE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2DAE8;
        }
    }

label_80C2DAC8:
    ctx->pc = 0x80C2DAC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DAC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2DAC8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80C2DACC:
    ctx->pc = 0x80C2DACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DACCu)) return;
    // 80C2DACC: bl      0x8050EEC0
    {
            ctx->lr = 0x80C2DAD0u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80C2DAD0:
    ctx->pc = 0x80C2DAD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DAD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C2DAD0: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2DAD4:
    ctx->pc = 0x80C2DAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DAD4u)) return;
    // 80C2DAD4: addi    r4, r4, -4724
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4724);

label_80C2DAD8:
    ctx->pc = 0x80C2DAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DAD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2DAD8: stw     r3, 0(r4)
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
label_80C2DADC:
    ctx->pc = 0x80C2DADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DADCu)) return;
    // 80C2DADC: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2DAE0:
    ctx->pc = 0x80C2DAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DAE0u)) return;
    // 80C2DAE0: addi    r3, r3, -4728
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4728);

label_80C2DAE4:
    ctx->pc = 0x80C2DAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DAE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2DAE4: stw     r31, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DAE8:
    ctx->pc = 0x80C2DAE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DAE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2DAE8: lwz     r31, 12(r1)
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
label_80C2DAEC:
    ctx->pc = 0x80C2DAECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DAECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DAEC: lwz     r0, 20(r1)
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
label_80C2DAF0:
    ctx->pc = 0x80C2DAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2DAF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DAF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DAF4:
    ctx->pc = 0x80C2DAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DAF4u)) return;
    // 80C2DAF4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2DAF8:
    ctx->pc = 0x80C2DAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DAF8u)) return;
    // 80C2DAF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2DAFC:
    ctx->pc = 0x80C2DAFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DAFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2DAFC: stwu     r1, -32(r1)
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
label_80C2DB00:
    ctx->pc = 0x80C2DB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2DB00: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DB04:
    ctx->pc = 0x80C2DB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2DB04: stw     r0, 36(r1)
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
label_80C2DB08:
    ctx->pc = 0x80C2DB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2DB08: stw     r31, 28(r1)
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
label_80C2DB0C:
    ctx->pc = 0x80C2DB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2DB0C: stw     r30, 24(r1)
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
label_80C2DB10:
    ctx->pc = 0x80C2DB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2DB10: stw     r29, 20(r1)
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
label_80C2DB14:
    ctx->pc = 0x80C2DB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2DB14: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DB18:
    ctx->pc = 0x80C2DB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB18u)) return;
    // 80C2DB18: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2DB1C:
    ctx->pc = 0x80C2DB1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB1Cu)) return;
    // 80C2DB1C: addi    r30, r3, -4724
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-4724);

label_80C2DB20:
    ctx->pc = 0x80C2DB20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DB20: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DB24:
    ctx->pc = 0x80C2DB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB24u)) return;
    // 80C2DB24: cmplwi  r0, 0x0000
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

label_80C2DB28:
    ctx->pc = 0x80C2DB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB28u)) return;
    // 80C2DB28: bc    12, 2, 0x80C2DB88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2DB88;
        }
    }

label_80C2DB2C:
    ctx->pc = 0x80C2DB2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DB2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C2DB2C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80C2DB30:
    ctx->pc = 0x80C2DB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB30u)) return;
    // 80C2DB30: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80C2DB34:
    ctx->pc = 0x80C2DB34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB34u)) return;
    // 80C2DB34: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2DB38:
    ctx->pc = 0x80C2DB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB38u)) return;
    // 80C2DB38: addi    r31, r3, -4728
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-4728);

label_80C2DB3C:
    ctx->pc = 0x80C2DB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB3Cu)) return;
    // 80C2DB3C: b       0x80C2DB5C
    {
            goto label_80C2DB5C;
    }

label_80C2DB40:
    ctx->pc = 0x80C2DB40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DB40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2DB40: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DB44:
    ctx->pc = 0x80C2DB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DB44: lwzx    r3, r3, r29
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[29];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DB48:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB48u)) return;
    // 80C2DB48: cmplwi  r3, 0x0000
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

label_80C2DB4C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB4Cu)) return;
    // 80C2DB4C: bc    12, 2, 0x80C2DB54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2DB54;
        }
    }

label_80C2DB50:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DB50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2DB50: bl      0x8050F9E0
    {
            ctx->lr = 0x80C2DB54u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C2DB54:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DB54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2DB54: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80C2DB58:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB58u)) return;
    // 80C2DB58: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80C2DB5C:
    ctx->pc = 0x80C2DB5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DB5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DB5C: lwz     r0, 0(r31)
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
label_80C2DB60:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB60u)) return;
    // 80C2DB60: cmpw    r28, r0
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C2DB64:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB64u)) return;
    // 80C2DB64: bc    12, 0, 0x80C2DB40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C2DB40u;
                return;
            }
            goto label_80C2DB40;
        }
    }

label_80C2DB68:
    ctx->pc = 0x80C2DB68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DB68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C2DB68: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2DB6C:
    ctx->pc = 0x80C2DB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB6Cu)) return;
    // 80C2DB6C: addi    r3, r3, -4724
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4724);

label_80C2DB70:
    ctx->pc = 0x80C2DB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2DB70: lwz     r3, 0(r3)
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
label_80C2DB74:
    ctx->pc = 0x80C2DB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB74u)) return;
    // 80C2DB74: bl      0x8050ED40
    {
            ctx->lr = 0x80C2DB78u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80C2DB78:
    ctx->pc = 0x80C2DB78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DB78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C2DB78: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C2DB7C:
    ctx->pc = 0x80C2DB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB7Cu)) return;
    // 80C2DB7C: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2DB80:
    ctx->pc = 0x80C2DB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB80u)) return;
    // 80C2DB80: addi    r3, r3, -4724
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4724);

label_80C2DB84:
    ctx->pc = 0x80C2DB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2DB84: stw     r0, 0(r3)
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
label_80C2DB88:
    ctx->pc = 0x80C2DB88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DB88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2DB88: lwz     r31, 28(r1)
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
label_80C2DB8C:
    ctx->pc = 0x80C2DB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2DB8C: lwz     r30, 24(r1)
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
label_80C2DB90:
    ctx->pc = 0x80C2DB90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2DB90: lwz     r29, 20(r1)
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
label_80C2DB94:
    ctx->pc = 0x80C2DB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2DB94: lwz     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DB98:
    ctx->pc = 0x80C2DB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DB98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DB98: lwz     r0, 36(r1)
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
label_80C2DB9C:
    ctx->pc = 0x80C2DB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2DB9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DB9C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DBA0:
    ctx->pc = 0x80C2DBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBA0u)) return;
    // 80C2DBA0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C2DBA4:
    ctx->pc = 0x80C2DBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBA4u)) return;
    // 80C2DBA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2DBA8:
    ctx->pc = 0x80C2DBA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DBA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2DBA8: stwu     r1, -16(r1)
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
label_80C2DBAC:
    ctx->pc = 0x80C2DBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2DBAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DBB0:
    ctx->pc = 0x80C2DBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2DBB0: stw     r0, 20(r1)
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
label_80C2DBB4:
    ctx->pc = 0x80C2DBB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2DBB4: stw     r31, 12(r1)
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
label_80C2DBB8:
    ctx->pc = 0x80C2DBB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBB8u)) return;
    // 80C2DBB8: lis     r6, -27451
    ctx->gpr[6] = ((u32)(s32)(-27451) << 16);

label_80C2DBBC:
    ctx->pc = 0x80C2DBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBBCu)) return;
    // 80C2DBBC: addi    r6, r6, -4728
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4728);

label_80C2DBC0:
    ctx->pc = 0x80C2DBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DBC0: lwz     r0, 0(r6)
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
label_80C2DBC4:
    ctx->pc = 0x80C2DBC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBC4u)) return;
    // 80C2DBC4: cmpw    r3, r0
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

label_80C2DBC8:
    ctx->pc = 0x80C2DBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBC8u)) return;
    // 80C2DBC8: bc    4, 0, 0x80C2DC04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2DC04;
        }
    }

label_80C2DBCC:
    ctx->pc = 0x80C2DBCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DBCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C2DBCC: lis     r6, -27451
    ctx->gpr[6] = ((u32)(s32)(-27451) << 16);

label_80C2DBD0:
    ctx->pc = 0x80C2DBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBD0u)) return;
    // 80C2DBD0: addi    r6, r6, -4724
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4724);

label_80C2DBD4:
    ctx->pc = 0x80C2DBD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DBD4: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DBD8:
    ctx->pc = 0x80C2DBD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBD8u)) return;
    // 80C2DBD8: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C2DBDC:
    ctx->pc = 0x80C2DBDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DBDC: lwzx    r0, r6, r31
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[31];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DBE0:
    ctx->pc = 0x80C2DBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBE0u)) return;
    // 80C2DBE0: cmplwi  r0, 0x0000
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

label_80C2DBE4:
    ctx->pc = 0x80C2DBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBE4u)) return;
    // 80C2DBE4: bc    4, 2, 0x80C2DC04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2DC04;
        }
    }

label_80C2DBE8:
    ctx->pc = 0x80C2DBE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DBE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2DBE8: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C2DBEC:
    ctx->pc = 0x80C2DBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBECu)) return;
    // 80C2DBEC: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C2DBF0:
    ctx->pc = 0x80C2DBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBF0u)) return;
    // 80C2DBF0: bl      0x80C2D8F4
    {
            ctx->lr = 0x80C2DBF4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C2D8F4u;
                return;
            }
            goto label_80C2D8F4;
    }

label_80C2DBF4:
    ctx->pc = 0x80C2DBF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DBF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C2DBF4: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2DBF8:
    ctx->pc = 0x80C2DBF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBF8u)) return;
    // 80C2DBF8: addi    r4, r4, -4724
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4724);

label_80C2DBFC:
    ctx->pc = 0x80C2DBFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DBFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2DBFC: lwz     r4, 0(r4)
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
label_80C2DC00:
    ctx->pc = 0x80C2DC00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2DC00: stwx    r3, r4, r31
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[31];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DC04:
    ctx->pc = 0x80C2DC04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DC04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2DC04: lwz     r31, 12(r1)
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
label_80C2DC08:
    ctx->pc = 0x80C2DC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DC08: lwz     r0, 20(r1)
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
label_80C2DC0C:
    ctx->pc = 0x80C2DC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2DC0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DC0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DC10:
    ctx->pc = 0x80C2DC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC10u)) return;
    // 80C2DC10: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2DC14:
    ctx->pc = 0x80C2DC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC14u)) return;
    // 80C2DC14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2DC18:
    ctx->pc = 0x80C2DC18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DC18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2DC18: stwu     r1, -16(r1)
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
label_80C2DC1C:
    ctx->pc = 0x80C2DC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2DC1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DC20:
    ctx->pc = 0x80C2DC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2DC20: stw     r0, 20(r1)
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
label_80C2DC24:
    ctx->pc = 0x80C2DC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2DC24: stw     r31, 12(r1)
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
label_80C2DC28:
    ctx->pc = 0x80C2DC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC28u)) return;
    // 80C2DC28: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2DC2C:
    ctx->pc = 0x80C2DC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC2Cu)) return;
    // 80C2DC2C: addi    r4, r4, -4728
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4728);

label_80C2DC30:
    ctx->pc = 0x80C2DC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DC30: lwz     r0, 0(r4)
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
label_80C2DC34:
    ctx->pc = 0x80C2DC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC34u)) return;
    // 80C2DC34: cmpw    r3, r0
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

label_80C2DC38:
    ctx->pc = 0x80C2DC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC38u)) return;
    // 80C2DC38: bc    4, 0, 0x80C2DC70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2DC70;
        }
    }

label_80C2DC3C:
    ctx->pc = 0x80C2DC3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DC3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C2DC3C: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2DC40:
    ctx->pc = 0x80C2DC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC40u)) return;
    // 80C2DC40: addi    r4, r4, -4724
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4724);

label_80C2DC44:
    ctx->pc = 0x80C2DC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DC44: lwz     r4, 0(r4)
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
label_80C2DC48:
    ctx->pc = 0x80C2DC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC48u)) return;
    // 80C2DC48: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C2DC4C:
    ctx->pc = 0x80C2DC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DC4C: lwzx    r3, r4, r31
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DC50:
    ctx->pc = 0x80C2DC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC50u)) return;
    // 80C2DC50: cmplwi  r3, 0x0000
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

label_80C2DC54:
    ctx->pc = 0x80C2DC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC54u)) return;
    // 80C2DC54: bc    12, 2, 0x80C2DC70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2DC70;
        }
    }

label_80C2DC58:
    ctx->pc = 0x80C2DC58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DC58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2DC58: bl      0x8050F9E0
    {
            ctx->lr = 0x80C2DC5Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C2DC5C:
    ctx->pc = 0x80C2DC5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DC5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C2DC5C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C2DC60:
    ctx->pc = 0x80C2DC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC60u)) return;
    // 80C2DC60: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2DC64:
    ctx->pc = 0x80C2DC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC64u)) return;
    // 80C2DC64: addi    r3, r3, -4724
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4724);

label_80C2DC68:
    ctx->pc = 0x80C2DC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2DC68: lwz     r3, 0(r3)
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
label_80C2DC6C:
    ctx->pc = 0x80C2DC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C2DC6C: stwx    r0, r3, r31
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[31];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DC70:
    ctx->pc = 0x80C2DC70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DC70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2DC70: lwz     r31, 12(r1)
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
label_80C2DC74:
    ctx->pc = 0x80C2DC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DC74: lwz     r0, 20(r1)
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
label_80C2DC78:
    ctx->pc = 0x80C2DC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2DC78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DC78: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DC7C:
    ctx->pc = 0x80C2DC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC7Cu)) return;
    // 80C2DC7C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2DC80:
    ctx->pc = 0x80C2DC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC80u)) return;
    // 80C2DC80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2DC84:
    ctx->pc = 0x80C2DC84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DC84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2DC84: stwu     r1, -16(r1)
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
label_80C2DC88:
    ctx->pc = 0x80C2DC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2DC88: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DC8C:
    ctx->pc = 0x80C2DC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2DC8C: stw     r0, 20(r1)
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
label_80C2DC90:
    ctx->pc = 0x80C2DC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC90u)) return;
    // 80C2DC90: lis     r6, -27451
    ctx->gpr[6] = ((u32)(s32)(-27451) << 16);

label_80C2DC94:
    ctx->pc = 0x80C2DC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC94u)) return;
    // 80C2DC94: addi    r6, r6, -4728
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4728);

label_80C2DC98:
    ctx->pc = 0x80C2DC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DC98: lwz     r0, 0(r6)
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
label_80C2DC9C:
    ctx->pc = 0x80C2DC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DC9Cu)) return;
    // 80C2DC9C: cmpw    r3, r0
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

label_80C2DCA0:
    ctx->pc = 0x80C2DCA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DCA0u)) return;
    // 80C2DCA0: bc    4, 0, 0x80C2DCC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2DCC4;
        }
    }

label_80C2DCA4:
    ctx->pc = 0x80C2DCA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DCA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C2DCA4: lis     r6, -27451
    ctx->gpr[6] = ((u32)(s32)(-27451) << 16);

label_80C2DCA8:
    ctx->pc = 0x80C2DCA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DCA8u)) return;
    // 80C2DCA8: addi    r6, r6, -4724
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4724);

label_80C2DCAC:
    ctx->pc = 0x80C2DCACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DCACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DCAC: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DCB0:
    ctx->pc = 0x80C2DCB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DCB0u)) return;
    // 80C2DCB0: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C2DCB4:
    ctx->pc = 0x80C2DCB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DCB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DCB4: lwzx    r3, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DCB8:
    ctx->pc = 0x80C2DCB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DCB8u)) return;
    // 80C2DCB8: cmplwi  r3, 0x0000
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

label_80C2DCBC:
    ctx->pc = 0x80C2DCBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DCBCu)) return;
    // 80C2DCBC: bc    12, 2, 0x80C2DCC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2DCC4;
        }
    }

label_80C2DCC0:
    ctx->pc = 0x80C2DCC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DCC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2DCC0: bl      0x80C2D9B0
    {
            ctx->lr = 0x80C2DCC4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C2D9B0u;
                return;
            }
            goto label_80C2D9B0;
    }

label_80C2DCC4:
    ctx->pc = 0x80C2DCC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DCC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DCC4: lwz     r0, 20(r1)
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
label_80C2DCC8:
    ctx->pc = 0x80C2DCC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2DCC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DCC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DCCC:
    ctx->pc = 0x80C2DCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DCCCu)) return;
    // 80C2DCCC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2DCD0:
    ctx->pc = 0x80C2DCD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DCD0u)) return;
    // 80C2DCD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2DCD4:
    ctx->pc = 0x80C2DCD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DCD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2DCD4: stwu     r1, -16(r1)
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
label_80C2DCD8:
    ctx->pc = 0x80C2DCD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DCD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2DCD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DCDC:
    ctx->pc = 0x80C2DCDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DCDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2DCDC: stw     r0, 20(r1)
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
label_80C2DCE0:
    ctx->pc = 0x80C2DCE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DCE0u)) return;
    // 80C2DCE0: lis     r6, -27451
    ctx->gpr[6] = ((u32)(s32)(-27451) << 16);

label_80C2DCE4:
    ctx->pc = 0x80C2DCE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DCE4u)) return;
    // 80C2DCE4: addi    r6, r6, -4728
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4728);

label_80C2DCE8:
    ctx->pc = 0x80C2DCE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DCE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DCE8: lwz     r0, 0(r6)
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
label_80C2DCEC:
    ctx->pc = 0x80C2DCECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DCECu)) return;
    // 80C2DCEC: cmpw    r3, r0
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

label_80C2DCF0:
    ctx->pc = 0x80C2DCF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DCF0u)) return;
    // 80C2DCF0: bc    4, 0, 0x80C2DD14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2DD14;
        }
    }

label_80C2DCF4:
    ctx->pc = 0x80C2DCF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DCF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C2DCF4: lis     r6, -27451
    ctx->gpr[6] = ((u32)(s32)(-27451) << 16);

label_80C2DCF8:
    ctx->pc = 0x80C2DCF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DCF8u)) return;
    // 80C2DCF8: addi    r6, r6, -4724
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4724);

label_80C2DCFC:
    ctx->pc = 0x80C2DCFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DCFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DCFC: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DD00:
    ctx->pc = 0x80C2DD00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD00u)) return;
    // 80C2DD00: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C2DD04:
    ctx->pc = 0x80C2DD04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DD04: lwzx    r3, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DD08:
    ctx->pc = 0x80C2DD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD08u)) return;
    // 80C2DD08: cmplwi  r3, 0x0000
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

label_80C2DD0C:
    ctx->pc = 0x80C2DD0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD0Cu)) return;
    // 80C2DD0C: bc    12, 2, 0x80C2DD14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2DD14;
        }
    }

label_80C2DD10:
    ctx->pc = 0x80C2DD10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DD10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2DD10: bl      0x80C2DA00
    {
            ctx->lr = 0x80C2DD14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C2DA00u;
                return;
            }
            goto label_80C2DA00;
    }

label_80C2DD14:
    ctx->pc = 0x80C2DD14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DD14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DD14: lwz     r0, 20(r1)
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
label_80C2DD18:
    ctx->pc = 0x80C2DD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2DD18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DD18: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DD1C:
    ctx->pc = 0x80C2DD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD1Cu)) return;
    // 80C2DD1C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2DD20:
    ctx->pc = 0x80C2DD20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD20u)) return;
    // 80C2DD20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2DD24:
    ctx->pc = 0x80C2DD24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DD24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2DD24: stwu     r1, -16(r1)
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
label_80C2DD28:
    ctx->pc = 0x80C2DD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2DD28: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DD2C:
    ctx->pc = 0x80C2DD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2DD2C: stw     r0, 20(r1)
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
label_80C2DD30:
    ctx->pc = 0x80C2DD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD30u)) return;
    // 80C2DD30: lis     r6, -27451
    ctx->gpr[6] = ((u32)(s32)(-27451) << 16);

label_80C2DD34:
    ctx->pc = 0x80C2DD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD34u)) return;
    // 80C2DD34: addi    r6, r6, -4728
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4728);

label_80C2DD38:
    ctx->pc = 0x80C2DD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DD38: lwz     r0, 0(r6)
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
label_80C2DD3C:
    ctx->pc = 0x80C2DD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD3Cu)) return;
    // 80C2DD3C: cmpw    r3, r0
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

label_80C2DD40:
    ctx->pc = 0x80C2DD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD40u)) return;
    // 80C2DD40: bc    4, 0, 0x80C2DD64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2DD64;
        }
    }

label_80C2DD44:
    ctx->pc = 0x80C2DD44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DD44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C2DD44: lis     r6, -27451
    ctx->gpr[6] = ((u32)(s32)(-27451) << 16);

label_80C2DD48:
    ctx->pc = 0x80C2DD48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD48u)) return;
    // 80C2DD48: addi    r6, r6, -4724
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4724);

label_80C2DD4C:
    ctx->pc = 0x80C2DD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DD4C: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DD50:
    ctx->pc = 0x80C2DD50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD50u)) return;
    // 80C2DD50: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C2DD54:
    ctx->pc = 0x80C2DD54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DD54: lwzx    r3, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DD58:
    ctx->pc = 0x80C2DD58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD58u)) return;
    // 80C2DD58: cmplwi  r3, 0x0000
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

label_80C2DD5C:
    ctx->pc = 0x80C2DD5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD5Cu)) return;
    // 80C2DD5C: bc    12, 2, 0x80C2DD64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2DD64;
        }
    }

label_80C2DD60:
    ctx->pc = 0x80C2DD60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DD60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2DD60: bl      0x80C2DA50
    {
            ctx->lr = 0x80C2DD64u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C2DA50u;
                return;
            }
            goto label_80C2DA50;
    }

label_80C2DD64:
    ctx->pc = 0x80C2DD64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DD64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DD64: lwz     r0, 20(r1)
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
label_80C2DD68:
    ctx->pc = 0x80C2DD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2DD68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DD68: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DD6C:
    ctx->pc = 0x80C2DD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD6Cu)) return;
    // 80C2DD6C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C2DD70:
    ctx->pc = 0x80C2DD70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD70u)) return;
    // 80C2DD70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

label_80C2DD74:
    ctx->pc = 0x80C2DD74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DD74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2DD74: stwu     r1, -32(r1)
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
label_80C2DD78:
    ctx->pc = 0x80C2DD78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2DD78: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DD7C:
    ctx->pc = 0x80C2DD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2DD7C: stw     r0, 36(r1)
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
label_80C2DD80:
    ctx->pc = 0x80C2DD80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2DD80: stw     r31, 28(r1)
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
label_80C2DD84:
    ctx->pc = 0x80C2DD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2DD84: stw     r30, 24(r1)
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
label_80C2DD88:
    ctx->pc = 0x80C2DD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2DD88: stw     r29, 20(r1)
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
label_80C2DD8C:
    ctx->pc = 0x80C2DD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2DD8C: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DD90:
    ctx->pc = 0x80C2DD90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD90u)) return;
    // 80C2DD90: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C2DD94:
    ctx->pc = 0x80C2DD94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD94u)) return;
    // 80C2DD94: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C2DD98:
    ctx->pc = 0x80C2DD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD98u)) return;
    // 80C2DD98: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C2DD9C:
    ctx->pc = 0x80C2DD9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DD9Cu)) return;
    // 80C2DD9C: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80C2DDA0:
    ctx->pc = 0x80C2DDA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DDA0u)) return;
    // 80C2DDA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2DDA4:
    ctx->pc = 0x80C2DDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DDA4u)) return;
    // 80C2DDA4: bl      0x80401DB0
    {
            ctx->lr = 0x80C2DDA8u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80C2DDA8:
    ctx->pc = 0x80C2DDA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DDA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C2DDA8: lis     r4, -27451
    ctx->gpr[4] = ((u32)(s32)(-27451) << 16);

label_80C2DDAC:
    ctx->pc = 0x80C2DDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DDACu)) return;
    // 80C2DDAC: addi    r4, r4, -4720
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4720);

label_80C2DDB0:
    ctx->pc = 0x80C2DDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DDB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2DDB0: lwz     r0, 0(r4)
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
label_80C2DDB4:
    ctx->pc = 0x80C2DDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DDB4u)) return;
    // 80C2DDB4: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80C2DDB8:
    ctx->pc = 0x80C2DDB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DDB8u)) return;
    // 80C2DDB8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C2DDBC:
    ctx->pc = 0x80C2DDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DDBCu)) return;
    // 80C2DDBC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C2DDC0:
    ctx->pc = 0x80C2DDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DDC0u)) return;
    // 80C2DDC0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C2DDC4:
    ctx->pc = 0x80C2DDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DDC4u)) return;
    // 80C2DDC4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C2DDC8:
    ctx->pc = 0x80C2DDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DDC8u)) return;
    // 80C2DDC8: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80C2DDCC:
    ctx->pc = 0x80C2DDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DDCCu)) return;
    // 80C2DDCC: bl      0x8050A0D4
    {
            ctx->lr = 0x80C2DDD0u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80C2DDD0:
    ctx->pc = 0x80C2DDD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DDD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2DDD0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C2DDD4:
    ctx->pc = 0x80C2DDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DDD4u)) return;
    // 80C2DDD4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80C2DDD8:
    ctx->pc = 0x80C2DDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DDD8u)) return;
    // 80C2DDD8: bl      0x80509C74
    {
            ctx->lr = 0x80C2DDDCu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C2DDDC:
    ctx->pc = 0x80C2DDDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DDDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2DDDC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C2DDE0:
    ctx->pc = 0x80C2DDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DDE0u)) return;
    // 80C2DDE0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C2DDE4:
    ctx->pc = 0x80C2DDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DDE4u)) return;
    // 80C2DDE4: bl      0x80509BF8
    {
            ctx->lr = 0x80C2DDE8u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C2DDE8:
    ctx->pc = 0x80C2DDE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DDE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C2DDE8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C2DDEC:
    ctx->pc = 0x80C2DDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DDECu)) return;
    // 80C2DDEC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C2DDF0:
    ctx->pc = 0x80C2DDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DDF0u)) return;
    // 80C2DDF0: bl      0x80509B94
    {
            ctx->lr = 0x80C2DDF4u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C2DDF4:
    ctx->pc = 0x80C2DDF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2DDF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C2DDF4: lis     r3, -27451
    ctx->gpr[3] = ((u32)(s32)(-27451) << 16);

label_80C2DDF8:
    ctx->pc = 0x80C2DDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DDF8u)) return;
    // 80C2DDF8: addi    r4, r3, -4720
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4720);

label_80C2DDFC:
    ctx->pc = 0x80C2DDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DDFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2DDFC: lwz     r3, 0(r4)
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
label_80C2DE00:
    ctx->pc = 0x80C2DE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE00u)) return;
    // 80C2DE00: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80C2DE04:
    ctx->pc = 0x80C2DE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2DE04: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DE08:
    ctx->pc = 0x80C2DE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE08u)) return;
    // 80C2DE08: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80C2DE0C:
    ctx->pc = 0x80C2DE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2DE0C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DE10:
    ctx->pc = 0x80C2DE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2DE10: lwz     r31, 28(r1)
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
label_80C2DE14:
    ctx->pc = 0x80C2DE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C2DE14: lwz     r30, 24(r1)
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
label_80C2DE18:
    ctx->pc = 0x80C2DE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2DE18: lwz     r29, 20(r1)
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
label_80C2DE1C:
    ctx->pc = 0x80C2DE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2DE1C: lwz     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DE20:
    ctx->pc = 0x80C2DE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2DE20: lwz     r0, 36(r1)
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
label_80C2DE24:
    ctx->pc = 0x80C2DE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2DE24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2DE24: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2DE28:
    ctx->pc = 0x80C2DE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE28u)) return;
    // 80C2DE28: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C2DE2C:
    ctx->pc = 0x80C2DE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2DE2Cu)) return;
    // 80C2DE2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C2BD40;
        }
    }

    ctx->pc = 0x80C2DE30u;
    return;
return_dispatch_80C2BD40:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80C2BD90u: goto label_80C2BD90;
    case 0x80C2BDA4u: goto label_80C2BDA4;
    case 0x80C2BE04u: goto label_80C2BE04;
    case 0x80C2BE7Cu: goto label_80C2BE7C;
    case 0x80C2BE9Cu: goto label_80C2BE9C;
    case 0x80C2C0F0u: goto label_80C2C0F0;
    case 0x80C2C170u: goto label_80C2C170;
    case 0x80C2C1F0u: goto label_80C2C1F0;
    case 0x80C2C2DCu: goto label_80C2C2DC;
    case 0x80C2C3A8u: goto label_80C2C3A8;
    case 0x80C2C428u: goto label_80C2C428;
    case 0x80C2C4A8u: goto label_80C2C4A8;
    case 0x80C2C51Cu: goto label_80C2C51C;
    case 0x80C2C57Cu: goto label_80C2C57C;
    case 0x80C2C5ACu: goto label_80C2C5AC;
    case 0x80C2C604u: goto label_80C2C604;
    case 0x80C2C610u: goto label_80C2C610;
    case 0x80C2C618u: goto label_80C2C618;
    case 0x80C2C61Cu: goto label_80C2C61C;
    case 0x80C2C620u: goto label_80C2C620;
    case 0x80C2C624u: goto label_80C2C624;
    case 0x80C2C62Cu: goto label_80C2C62C;
    case 0x80C2C634u: goto label_80C2C634;
    case 0x80C2C65Cu: goto label_80C2C65C;
    case 0x80C2C664u: goto label_80C2C664;
    case 0x80C2C678u: goto label_80C2C678;
    case 0x80C2C680u: goto label_80C2C680;
    case 0x80C2C6A8u: goto label_80C2C6A8;
    case 0x80C2C6B0u: goto label_80C2C6B0;
    case 0x80C2C6B8u: goto label_80C2C6B8;
    case 0x80C2C6E0u: goto label_80C2C6E0;
    case 0x80C2C720u: goto label_80C2C720;
    case 0x80C2C728u: goto label_80C2C728;
    case 0x80C2C758u: goto label_80C2C758;
    case 0x80C2C774u: goto label_80C2C774;
    case 0x80C2C7A4u: goto label_80C2C7A4;
    case 0x80C2C7C0u: goto label_80C2C7C0;
    case 0x80C2C7C8u: goto label_80C2C7C8;
    case 0x80C2C7D0u: goto label_80C2C7D0;
    case 0x80C2C7D4u: goto label_80C2C7D4;
    case 0x80C2C7DCu: goto label_80C2C7DC;
    case 0x80C2C7E8u: goto label_80C2C7E8;
    case 0x80C2C7F0u: goto label_80C2C7F0;
    case 0x80C2C818u: goto label_80C2C818;
    case 0x80C2C828u: goto label_80C2C828;
    case 0x80C2C854u: goto label_80C2C854;
    case 0x80C2C85Cu: goto label_80C2C85C;
    case 0x80C2C860u: goto label_80C2C860;
    case 0x80C2C864u: goto label_80C2C864;
    case 0x80C2C894u: goto label_80C2C894;
    case 0x80C2C8B0u: goto label_80C2C8B0;
    case 0x80C2C8CCu: goto label_80C2C8CC;
    case 0x80C2C8D4u: goto label_80C2C8D4;
    case 0x80C2C8DCu: goto label_80C2C8DC;
    case 0x80C2C8E4u: goto label_80C2C8E4;
    case 0x80C2C8ECu: goto label_80C2C8EC;
    case 0x80C2C8F4u: goto label_80C2C8F4;
    case 0x80C2C91Cu: goto label_80C2C91C;
    case 0x80C2C924u: goto label_80C2C924;
    case 0x80C2C94Cu: goto label_80C2C94C;
    case 0x80C2C974u: goto label_80C2C974;
    case 0x80C2C97Cu: goto label_80C2C97C;
    case 0x80C2C980u: goto label_80C2C980;
    case 0x80C2C988u: goto label_80C2C988;
    case 0x80C2C990u: goto label_80C2C990;
    case 0x80C2C994u: goto label_80C2C994;
    case 0x80C2C99Cu: goto label_80C2C99C;
    case 0x80C2C9C4u: goto label_80C2C9C4;
    case 0x80C2C9CCu: goto label_80C2C9CC;
    case 0x80C2C9FCu: goto label_80C2C9FC;
    case 0x80C2CA00u: goto label_80C2CA00;
    case 0x80C2CA08u: goto label_80C2CA08;
    case 0x80C2CA38u: goto label_80C2CA38;
    case 0x80C2CA50u: goto label_80C2CA50;
    case 0x80C2CA58u: goto label_80C2CA58;
    case 0x80C2CA5Cu: goto label_80C2CA5C;
    case 0x80C2CA64u: goto label_80C2CA64;
    case 0x80C2CA68u: goto label_80C2CA68;
    case 0x80C2CA70u: goto label_80C2CA70;
    case 0x80C2CA74u: goto label_80C2CA74;
    case 0x80C2CA7Cu: goto label_80C2CA7C;
    case 0x80C2CA80u: goto label_80C2CA80;
    case 0x80C2CA84u: goto label_80C2CA84;
    case 0x80C2CAB4u: goto label_80C2CAB4;
    case 0x80C2CABCu: goto label_80C2CABC;
    case 0x80C2CAE4u: goto label_80C2CAE4;
    case 0x80C2CAECu: goto label_80C2CAEC;
    case 0x80C2CB14u: goto label_80C2CB14;
    case 0x80C2CB1Cu: goto label_80C2CB1C;
    case 0x80C2CB24u: goto label_80C2CB24;
    case 0x80C2CB30u: goto label_80C2CB30;
    case 0x80C2CB38u: goto label_80C2CB38;
    case 0x80C2CB5Cu: goto label_80C2CB5C;
    case 0x80C2CB64u: goto label_80C2CB64;
    case 0x80C2CB68u: goto label_80C2CB68;
    case 0x80C2CB6Cu: goto label_80C2CB6C;
    case 0x80C2CB74u: goto label_80C2CB74;
    case 0x80C2CB78u: goto label_80C2CB78;
    case 0x80C2CB80u: goto label_80C2CB80;
    case 0x80C2CB88u: goto label_80C2CB88;
    case 0x80C2CB90u: goto label_80C2CB90;
    case 0x80C2CB94u: goto label_80C2CB94;
    case 0x80C2CB9Cu: goto label_80C2CB9C;
    case 0x80C2CBA8u: goto label_80C2CBA8;
    case 0x80C2CBB0u: goto label_80C2CBB0;
    case 0x80C2CBD8u: goto label_80C2CBD8;
    case 0x80C2CBE0u: goto label_80C2CBE0;
    case 0x80C2CBE4u: goto label_80C2CBE4;
    case 0x80C2CBE8u: goto label_80C2CBE8;
    case 0x80C2CBF0u: goto label_80C2CBF0;
    case 0x80C2CC14u: goto label_80C2CC14;
    case 0x80C2CC1Cu: goto label_80C2CC1C;
    case 0x80C2CC24u: goto label_80C2CC24;
    case 0x80C2CC4Cu: goto label_80C2CC4C;
    case 0x80C2CC54u: goto label_80C2CC54;
    case 0x80C2CC68u: goto label_80C2CC68;
    case 0x80C2CC98u: goto label_80C2CC98;
    case 0x80C2CCB0u: goto label_80C2CCB0;
    case 0x80C2CCB8u: goto label_80C2CCB8;
    case 0x80C2CCBCu: goto label_80C2CCBC;
    case 0x80C2CCC4u: goto label_80C2CCC4;
    case 0x80C2CCC8u: goto label_80C2CCC8;
    case 0x80C2CCD0u: goto label_80C2CCD0;
    case 0x80C2CCF8u: goto label_80C2CCF8;
    case 0x80C2CD00u: goto label_80C2CD00;
    case 0x80C2CD04u: goto label_80C2CD04;
    case 0x80C2CD0Cu: goto label_80C2CD0C;
    case 0x80C2CD18u: goto label_80C2CD18;
    case 0x80C2CD20u: goto label_80C2CD20;
    case 0x80C2CD44u: goto label_80C2CD44;
    case 0x80C2CD4Cu: goto label_80C2CD4C;
    case 0x80C2CD50u: goto label_80C2CD50;
    case 0x80C2CD58u: goto label_80C2CD58;
    case 0x80C2CD5Cu: goto label_80C2CD5C;
    case 0x80C2CD8Cu: goto label_80C2CD8C;
    case 0x80C2CDA8u: goto label_80C2CDA8;
    case 0x80C2CDB0u: goto label_80C2CDB0;
    case 0x80C2CDB8u: goto label_80C2CDB8;
    case 0x80C2CDE0u: goto label_80C2CDE0;
    case 0x80C2CDE8u: goto label_80C2CDE8;
    case 0x80C2CE10u: goto label_80C2CE10;
    case 0x80C2CE18u: goto label_80C2CE18;
    case 0x80C2CE20u: goto label_80C2CE20;
    case 0x80C2CE24u: goto label_80C2CE24;
    case 0x80C2CE2Cu: goto label_80C2CE2C;
    case 0x80C2CE38u: goto label_80C2CE38;
    case 0x80C2CE40u: goto label_80C2CE40;
    case 0x80C2CE64u: goto label_80C2CE64;
    case 0x80C2CE6Cu: goto label_80C2CE6C;
    case 0x80C2CE74u: goto label_80C2CE74;
    case 0x80C2CE78u: goto label_80C2CE78;
    case 0x80C2CE7Cu: goto label_80C2CE7C;
    case 0x80C2CEACu: goto label_80C2CEAC;
    case 0x80C2CEC4u: goto label_80C2CEC4;
    case 0x80C2CECCu: goto label_80C2CECC;
    case 0x80C2CED0u: goto label_80C2CED0;
    case 0x80C2CED8u: goto label_80C2CED8;
    case 0x80C2CEE4u: goto label_80C2CEE4;
    case 0x80C2CEECu: goto label_80C2CEEC;
    case 0x80C2CF14u: goto label_80C2CF14;
    case 0x80C2CF1Cu: goto label_80C2CF1C;
    case 0x80C2CF20u: goto label_80C2CF20;
    case 0x80C2CF28u: goto label_80C2CF28;
    case 0x80C2CF50u: goto label_80C2CF50;
    case 0x80C2CF58u: goto label_80C2CF58;
    case 0x80C2CF60u: goto label_80C2CF60;
    case 0x80C2CF64u: goto label_80C2CF64;
    case 0x80C2CF6Cu: goto label_80C2CF6C;
    case 0x80C2CF78u: goto label_80C2CF78;
    case 0x80C2CF80u: goto label_80C2CF80;
    case 0x80C2CFA4u: goto label_80C2CFA4;
    case 0x80C2CFACu: goto label_80C2CFAC;
    case 0x80C2CFB0u: goto label_80C2CFB0;
    case 0x80C2CFC0u: goto label_80C2CFC0;
    case 0x80C2CFC8u: goto label_80C2CFC8;
    case 0x80C2CFD0u: goto label_80C2CFD0;
    case 0x80C2CFD4u: goto label_80C2CFD4;
    case 0x80C2CFDCu: goto label_80C2CFDC;
    case 0x80C2CFE4u: goto label_80C2CFE4;
    case 0x80C2CFE8u: goto label_80C2CFE8;
    case 0x80C2CFF0u: goto label_80C2CFF0;
    case 0x80C2D018u: goto label_80C2D018;
    case 0x80C2D020u: goto label_80C2D020;
    case 0x80C2D048u: goto label_80C2D048;
    case 0x80C2D070u: goto label_80C2D070;
    case 0x80C2D080u: goto label_80C2D080;
    case 0x80C2D088u: goto label_80C2D088;
    case 0x80C2D0ACu: goto label_80C2D0AC;
    case 0x80C2D0DCu: goto label_80C2D0DC;
    case 0x80C2D0F4u: goto label_80C2D0F4;
    case 0x80C2D0FCu: goto label_80C2D0FC;
    case 0x80C2D100u: goto label_80C2D100;
    case 0x80C2D108u: goto label_80C2D108;
    case 0x80C2D10Cu: goto label_80C2D10C;
    case 0x80C2D114u: goto label_80C2D114;
    case 0x80C2D13Cu: goto label_80C2D13C;
    case 0x80C2D144u: goto label_80C2D144;
    case 0x80C2D184u: goto label_80C2D184;
    case 0x80C2D18Cu: goto label_80C2D18C;
    case 0x80C2D194u: goto label_80C2D194;
    case 0x80C2D1BCu: goto label_80C2D1BC;
    case 0x80C2D1C4u: goto label_80C2D1C4;
    case 0x80C2D204u: goto label_80C2D204;
    case 0x80C2D20Cu: goto label_80C2D20C;
    case 0x80C2D210u: goto label_80C2D210;
    case 0x80C2D218u: goto label_80C2D218;
    case 0x80C2D21Cu: goto label_80C2D21C;
    case 0x80C2D224u: goto label_80C2D224;
    case 0x80C2D24Cu: goto label_80C2D24C;
    case 0x80C2D250u: goto label_80C2D250;
    case 0x80C2D258u: goto label_80C2D258;
    case 0x80C2D260u: goto label_80C2D260;
    case 0x80C2D268u: goto label_80C2D268;
    case 0x80C2D270u: goto label_80C2D270;
    case 0x80C2D27Cu: goto label_80C2D27C;
    case 0x80C2D29Cu: goto label_80C2D29C;
    case 0x80C2D2A8u: goto label_80C2D2A8;
    case 0x80C2D2B8u: goto label_80C2D2B8;
    case 0x80C2D2E8u: goto label_80C2D2E8;
    case 0x80C2D300u: goto label_80C2D300;
    case 0x80C2D330u: goto label_80C2D330;
    case 0x80C2D34Cu: goto label_80C2D34C;
    case 0x80C2D354u: goto label_80C2D354;
    case 0x80C2D358u: goto label_80C2D358;
    case 0x80C2D360u: goto label_80C2D360;
    case 0x80C2D364u: goto label_80C2D364;
    case 0x80C2D36Cu: goto label_80C2D36C;
    case 0x80C2D378u: goto label_80C2D378;
    case 0x80C2D380u: goto label_80C2D380;
    case 0x80C2D3A4u: goto label_80C2D3A4;
    case 0x80C2D3ACu: goto label_80C2D3AC;
    case 0x80C2D3B0u: goto label_80C2D3B0;
    case 0x80C2D3B4u: goto label_80C2D3B4;
    case 0x80C2D3BCu: goto label_80C2D3BC;
    case 0x80C2D3C0u: goto label_80C2D3C0;
    case 0x80C2D3E8u: goto label_80C2D3E8;
    case 0x80C2D3FCu: goto label_80C2D3FC;
    case 0x80C2D400u: goto label_80C2D400;
    case 0x80C2D408u: goto label_80C2D408;
    case 0x80C2D40Cu: goto label_80C2D40C;
    case 0x80C2D410u: goto label_80C2D410;
    case 0x80C2D428u: goto label_80C2D428;
    case 0x80C2D440u: goto label_80C2D440;
    case 0x80C2D448u: goto label_80C2D448;
    case 0x80C2D44Cu: goto label_80C2D44C;
    case 0x80C2D47Cu: goto label_80C2D47C;
    case 0x80C2D4A0u: goto label_80C2D4A0;
    case 0x80C2D4C8u: goto label_80C2D4C8;
    case 0x80C2D554u: goto label_80C2D554;
    case 0x80C2D560u: goto label_80C2D560;
    case 0x80C2D5F0u: goto label_80C2D5F0;
    case 0x80C2D5F8u: goto label_80C2D5F8;
    case 0x80C2D660u: goto label_80C2D660;
    case 0x80C2D6A8u: goto label_80C2D6A8;
    case 0x80C2D714u: goto label_80C2D714;
    case 0x80C2D7C0u: goto label_80C2D7C0;
    case 0x80C2D7E8u: goto label_80C2D7E8;
    case 0x80C2D848u: goto label_80C2D848;
    case 0x80C2D888u: goto label_80C2D888;
    case 0x80C2D8C8u: goto label_80C2D8C8;
    case 0x80C2D924u: goto label_80C2D924;
    case 0x80C2D948u: goto label_80C2D948;
    case 0x80C2D9E4u: goto label_80C2D9E4;
    case 0x80C2DA34u: goto label_80C2DA34;
    case 0x80C2DA84u: goto label_80C2DA84;
    case 0x80C2DAD0u: goto label_80C2DAD0;
    case 0x80C2DB54u: goto label_80C2DB54;
    case 0x80C2DB78u: goto label_80C2DB78;
    case 0x80C2DBF4u: goto label_80C2DBF4;
    case 0x80C2DC5Cu: goto label_80C2DC5C;
    case 0x80C2DCC4u: goto label_80C2DCC4;
    case 0x80C2DD14u: goto label_80C2DD14;
    case 0x80C2DD64u: goto label_80C2DD64;
    case 0x80C2DDA8u: goto label_80C2DDA8;
    case 0x80C2DDD0u: goto label_80C2DDD0;
    case 0x80C2DDDCu: goto label_80C2DDDC;
    case 0x80C2DDE8u: goto label_80C2DDE8;
    case 0x80C2DDF4u: goto label_80C2DDF4;
    default: return;
    }
}

