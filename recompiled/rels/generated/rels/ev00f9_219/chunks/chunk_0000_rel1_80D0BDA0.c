// DolRecomp output
#include "../generated.h"

void func_80D0BDA0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D0BDA0[1280] = {
        &&label_80D0BDA0,
        &&label_80D0BDA4,
        &&label_80D0BDA8,
        &&label_80D0BDAC,
        &&label_80D0BDB0,
        &&label_80D0BDB4,
        &&label_80D0BDB8,
        &&label_80D0BDBC,
        &&label_80D0BDC0,
        &&label_80D0BDC4,
        &&label_80D0BDC8,
        &&label_80D0BDCC,
        &&label_80D0BDD0,
        &&label_80D0BDD4,
        &&label_80D0BDD8,
        &&label_80D0BDDC,
        &&label_80D0BDE0,
        &&label_80D0BDE4,
        &&label_80D0BDE8,
        &&label_80D0BDEC,
        &&label_80D0BDF0,
        &&label_80D0BDF4,
        &&label_80D0BDF8,
        &&label_80D0BDFC,
        &&label_80D0BE00,
        &&label_80D0BE04,
        &&label_80D0BE08,
        &&label_80D0BE0C,
        &&label_80D0BE10,
        &&label_80D0BE14,
        &&label_80D0BE18,
        &&label_80D0BE1C,
        &&label_80D0BE20,
        &&label_80D0BE24,
        &&label_80D0BE28,
        &&label_80D0BE2C,
        &&label_80D0BE30,
        &&label_80D0BE34,
        &&label_80D0BE38,
        &&label_80D0BE3C,
        &&label_80D0BE40,
        &&label_80D0BE44,
        &&label_80D0BE48,
        &&label_80D0BE4C,
        &&label_80D0BE50,
        &&label_80D0BE54,
        &&label_80D0BE58,
        &&label_80D0BE5C,
        &&label_80D0BE60,
        &&label_80D0BE64,
        &&label_80D0BE68,
        &&label_80D0BE6C,
        &&label_80D0BE70,
        &&label_80D0BE74,
        &&label_80D0BE78,
        &&label_80D0BE7C,
        &&label_80D0BE80,
        &&label_80D0BE84,
        &&label_80D0BE88,
        &&label_80D0BE8C,
        &&label_80D0BE90,
        &&label_80D0BE94,
        &&label_80D0BE98,
        &&label_80D0BE9C,
        &&label_80D0BEA0,
        &&label_80D0BEA4,
        &&label_80D0BEA8,
        &&label_80D0BEAC,
        &&label_80D0BEB0,
        &&label_80D0BEB4,
        &&label_80D0BEB8,
        &&label_80D0BEBC,
        &&label_80D0BEC0,
        &&label_80D0BEC4,
        &&label_80D0BEC8,
        &&label_80D0BECC,
        &&label_80D0BED0,
        &&label_80D0BED4,
        &&label_80D0BED8,
        &&label_80D0BEDC,
        &&label_80D0BEE0,
        &&label_80D0BEE4,
        &&label_80D0BEE8,
        &&label_80D0BEEC,
        &&label_80D0BEF0,
        &&label_80D0BEF4,
        &&label_80D0BEF8,
        &&label_80D0BEFC,
        &&label_80D0BF00,
        &&label_80D0BF04,
        &&label_80D0BF08,
        &&label_80D0BF0C,
        &&label_80D0BF10,
        &&label_80D0BF14,
        &&label_80D0BF18,
        &&label_80D0BF1C,
        &&label_80D0BF20,
        &&label_80D0BF24,
        &&label_80D0BF28,
        &&label_80D0BF2C,
        &&label_80D0BF30,
        &&label_80D0BF34,
        &&label_80D0BF38,
        &&label_80D0BF3C,
        &&label_80D0BF40,
        &&label_80D0BF44,
        &&label_80D0BF48,
        &&label_80D0BF4C,
        &&label_80D0BF50,
        &&label_80D0BF54,
        &&label_80D0BF58,
        &&label_80D0BF5C,
        &&label_80D0BF60,
        &&label_80D0BF64,
        &&label_80D0BF68,
        &&label_80D0BF6C,
        &&label_80D0BF70,
        &&label_80D0BF74,
        &&label_80D0BF78,
        &&label_80D0BF7C,
        &&label_80D0BF80,
        &&label_80D0BF84,
        &&label_80D0BF88,
        &&label_80D0BF8C,
        &&label_80D0BF90,
        &&label_80D0BF94,
        &&label_80D0BF98,
        &&label_80D0BF9C,
        &&label_80D0BFA0,
        &&label_80D0BFA4,
        &&label_80D0BFA8,
        &&label_80D0BFAC,
        &&label_80D0BFB0,
        &&label_80D0BFB4,
        &&label_80D0BFB8,
        &&label_80D0BFBC,
        &&label_80D0BFC0,
        &&label_80D0BFC4,
        &&label_80D0BFC8,
        &&label_80D0BFCC,
        &&label_80D0BFD0,
        &&label_80D0BFD4,
        &&label_80D0BFD8,
        &&label_80D0BFDC,
        &&label_80D0BFE0,
        &&label_80D0BFE4,
        &&label_80D0BFE8,
        &&label_80D0BFEC,
        &&label_80D0BFF0,
        &&label_80D0BFF4,
        &&label_80D0BFF8,
        &&label_80D0BFFC,
        &&label_80D0C000,
        &&label_80D0C004,
        &&label_80D0C008,
        &&label_80D0C00C,
        &&label_80D0C010,
        &&label_80D0C014,
        &&label_80D0C018,
        &&label_80D0C01C,
        &&label_80D0C020,
        &&label_80D0C024,
        &&label_80D0C028,
        &&label_80D0C02C,
        &&label_80D0C030,
        &&label_80D0C034,
        &&label_80D0C038,
        &&label_80D0C03C,
        &&label_80D0C040,
        &&label_80D0C044,
        &&label_80D0C048,
        &&label_80D0C04C,
        &&label_80D0C050,
        &&label_80D0C054,
        &&label_80D0C058,
        &&label_80D0C05C,
        &&label_80D0C060,
        &&label_80D0C064,
        &&label_80D0C068,
        &&label_80D0C06C,
        &&label_80D0C070,
        &&label_80D0C074,
        &&label_80D0C078,
        &&label_80D0C07C,
        &&label_80D0C080,
        &&label_80D0C084,
        &&label_80D0C088,
        &&label_80D0C08C,
        &&label_80D0C090,
        &&label_80D0C094,
        &&label_80D0C098,
        &&label_80D0C09C,
        &&label_80D0C0A0,
        &&label_80D0C0A4,
        &&label_80D0C0A8,
        &&label_80D0C0AC,
        &&label_80D0C0B0,
        &&label_80D0C0B4,
        &&label_80D0C0B8,
        &&label_80D0C0BC,
        &&label_80D0C0C0,
        &&label_80D0C0C4,
        &&label_80D0C0C8,
        &&label_80D0C0CC,
        &&label_80D0C0D0,
        &&label_80D0C0D4,
        &&label_80D0C0D8,
        &&label_80D0C0DC,
        &&label_80D0C0E0,
        &&label_80D0C0E4,
        &&label_80D0C0E8,
        &&label_80D0C0EC,
        &&label_80D0C0F0,
        &&label_80D0C0F4,
        &&label_80D0C0F8,
        &&label_80D0C0FC,
        &&label_80D0C100,
        &&label_80D0C104,
        &&label_80D0C108,
        &&label_80D0C10C,
        &&label_80D0C110,
        &&label_80D0C114,
        &&label_80D0C118,
        &&label_80D0C11C,
        &&label_80D0C120,
        &&label_80D0C124,
        &&label_80D0C128,
        &&label_80D0C12C,
        &&label_80D0C130,
        &&label_80D0C134,
        &&label_80D0C138,
        &&label_80D0C13C,
        &&label_80D0C140,
        &&label_80D0C144,
        &&label_80D0C148,
        &&label_80D0C14C,
        &&label_80D0C150,
        &&label_80D0C154,
        &&label_80D0C158,
        &&label_80D0C15C,
        &&label_80D0C160,
        &&label_80D0C164,
        &&label_80D0C168,
        &&label_80D0C16C,
        &&label_80D0C170,
        &&label_80D0C174,
        &&label_80D0C178,
        &&label_80D0C17C,
        &&label_80D0C180,
        &&label_80D0C184,
        &&label_80D0C188,
        &&label_80D0C18C,
        &&label_80D0C190,
        &&label_80D0C194,
        &&label_80D0C198,
        &&label_80D0C19C,
        &&label_80D0C1A0,
        &&label_80D0C1A4,
        &&label_80D0C1A8,
        &&label_80D0C1AC,
        &&label_80D0C1B0,
        &&label_80D0C1B4,
        &&label_80D0C1B8,
        &&label_80D0C1BC,
        &&label_80D0C1C0,
        &&label_80D0C1C4,
        &&label_80D0C1C8,
        &&label_80D0C1CC,
        &&label_80D0C1D0,
        &&label_80D0C1D4,
        &&label_80D0C1D8,
        &&label_80D0C1DC,
        &&label_80D0C1E0,
        &&label_80D0C1E4,
        &&label_80D0C1E8,
        &&label_80D0C1EC,
        &&label_80D0C1F0,
        &&label_80D0C1F4,
        &&label_80D0C1F8,
        &&label_80D0C1FC,
        &&label_80D0C200,
        &&label_80D0C204,
        &&label_80D0C208,
        &&label_80D0C20C,
        &&label_80D0C210,
        &&label_80D0C214,
        &&label_80D0C218,
        &&label_80D0C21C,
        &&label_80D0C220,
        &&label_80D0C224,
        &&label_80D0C228,
        &&label_80D0C22C,
        &&label_80D0C230,
        &&label_80D0C234,
        &&label_80D0C238,
        &&label_80D0C23C,
        &&label_80D0C240,
        &&label_80D0C244,
        &&label_80D0C248,
        &&label_80D0C24C,
        &&label_80D0C250,
        &&label_80D0C254,
        &&label_80D0C258,
        &&label_80D0C25C,
        &&label_80D0C260,
        &&label_80D0C264,
        &&label_80D0C268,
        &&label_80D0C26C,
        &&label_80D0C270,
        &&label_80D0C274,
        &&label_80D0C278,
        &&label_80D0C27C,
        &&label_80D0C280,
        &&label_80D0C284,
        &&label_80D0C288,
        &&label_80D0C28C,
        &&label_80D0C290,
        &&label_80D0C294,
        &&label_80D0C298,
        &&label_80D0C29C,
        &&label_80D0C2A0,
        &&label_80D0C2A4,
        &&label_80D0C2A8,
        &&label_80D0C2AC,
        &&label_80D0C2B0,
        &&label_80D0C2B4,
        &&label_80D0C2B8,
        &&label_80D0C2BC,
        &&label_80D0C2C0,
        &&label_80D0C2C4,
        &&label_80D0C2C8,
        &&label_80D0C2CC,
        &&label_80D0C2D0,
        &&label_80D0C2D4,
        &&label_80D0C2D8,
        &&label_80D0C2DC,
        &&label_80D0C2E0,
        &&label_80D0C2E4,
        &&label_80D0C2E8,
        &&label_80D0C2EC,
        &&label_80D0C2F0,
        &&label_80D0C2F4,
        &&label_80D0C2F8,
        &&label_80D0C2FC,
        &&label_80D0C300,
        &&label_80D0C304,
        &&label_80D0C308,
        &&label_80D0C30C,
        &&label_80D0C310,
        &&label_80D0C314,
        &&label_80D0C318,
        &&label_80D0C31C,
        &&label_80D0C320,
        &&label_80D0C324,
        &&label_80D0C328,
        &&label_80D0C32C,
        &&label_80D0C330,
        &&label_80D0C334,
        &&label_80D0C338,
        &&label_80D0C33C,
        &&label_80D0C340,
        &&label_80D0C344,
        &&label_80D0C348,
        &&label_80D0C34C,
        &&label_80D0C350,
        &&label_80D0C354,
        &&label_80D0C358,
        &&label_80D0C35C,
        &&label_80D0C360,
        &&label_80D0C364,
        &&label_80D0C368,
        &&label_80D0C36C,
        &&label_80D0C370,
        &&label_80D0C374,
        &&label_80D0C378,
        &&label_80D0C37C,
        &&label_80D0C380,
        &&label_80D0C384,
        &&label_80D0C388,
        &&label_80D0C38C,
        &&label_80D0C390,
        &&label_80D0C394,
        &&label_80D0C398,
        &&label_80D0C39C,
        &&label_80D0C3A0,
        &&label_80D0C3A4,
        &&label_80D0C3A8,
        &&label_80D0C3AC,
        &&label_80D0C3B0,
        &&label_80D0C3B4,
        &&label_80D0C3B8,
        &&label_80D0C3BC,
        &&label_80D0C3C0,
        &&label_80D0C3C4,
        &&label_80D0C3C8,
        &&label_80D0C3CC,
        &&label_80D0C3D0,
        &&label_80D0C3D4,
        &&label_80D0C3D8,
        &&label_80D0C3DC,
        &&label_80D0C3E0,
        &&label_80D0C3E4,
        &&label_80D0C3E8,
        &&label_80D0C3EC,
        &&label_80D0C3F0,
        &&label_80D0C3F4,
        &&label_80D0C3F8,
        &&label_80D0C3FC,
        &&label_80D0C400,
        &&label_80D0C404,
        &&label_80D0C408,
        &&label_80D0C40C,
        &&label_80D0C410,
        &&label_80D0C414,
        &&label_80D0C418,
        &&label_80D0C41C,
        &&label_80D0C420,
        &&label_80D0C424,
        &&label_80D0C428,
        &&label_80D0C42C,
        &&label_80D0C430,
        &&label_80D0C434,
        &&label_80D0C438,
        &&label_80D0C43C,
        &&label_80D0C440,
        &&label_80D0C444,
        &&label_80D0C448,
        &&label_80D0C44C,
        &&label_80D0C450,
        &&label_80D0C454,
        &&label_80D0C458,
        &&label_80D0C45C,
        &&label_80D0C460,
        &&label_80D0C464,
        &&label_80D0C468,
        &&label_80D0C46C,
        &&label_80D0C470,
        &&label_80D0C474,
        &&label_80D0C478,
        &&label_80D0C47C,
        &&label_80D0C480,
        &&label_80D0C484,
        &&label_80D0C488,
        &&label_80D0C48C,
        &&label_80D0C490,
        &&label_80D0C494,
        &&label_80D0C498,
        &&label_80D0C49C,
        &&label_80D0C4A0,
        &&label_80D0C4A4,
        &&label_80D0C4A8,
        &&label_80D0C4AC,
        &&label_80D0C4B0,
        &&label_80D0C4B4,
        &&label_80D0C4B8,
        &&label_80D0C4BC,
        &&label_80D0C4C0,
        &&label_80D0C4C4,
        &&label_80D0C4C8,
        &&label_80D0C4CC,
        &&label_80D0C4D0,
        &&label_80D0C4D4,
        &&label_80D0C4D8,
        &&label_80D0C4DC,
        &&label_80D0C4E0,
        &&label_80D0C4E4,
        &&label_80D0C4E8,
        &&label_80D0C4EC,
        &&label_80D0C4F0,
        &&label_80D0C4F4,
        &&label_80D0C4F8,
        &&label_80D0C4FC,
        &&label_80D0C500,
        &&label_80D0C504,
        &&label_80D0C508,
        &&label_80D0C50C,
        &&label_80D0C510,
        &&label_80D0C514,
        &&label_80D0C518,
        &&label_80D0C51C,
        &&label_80D0C520,
        &&label_80D0C524,
        &&label_80D0C528,
        &&label_80D0C52C,
        &&label_80D0C530,
        &&label_80D0C534,
        &&label_80D0C538,
        &&label_80D0C53C,
        &&label_80D0C540,
        &&label_80D0C544,
        &&label_80D0C548,
        &&label_80D0C54C,
        &&label_80D0C550,
        &&label_80D0C554,
        &&label_80D0C558,
        &&label_80D0C55C,
        &&label_80D0C560,
        &&label_80D0C564,
        &&label_80D0C568,
        &&label_80D0C56C,
        &&label_80D0C570,
        &&label_80D0C574,
        &&label_80D0C578,
        &&label_80D0C57C,
        &&label_80D0C580,
        &&label_80D0C584,
        &&label_80D0C588,
        &&label_80D0C58C,
        &&label_80D0C590,
        &&label_80D0C594,
        &&label_80D0C598,
        &&label_80D0C59C,
        &&label_80D0C5A0,
        &&label_80D0C5A4,
        &&label_80D0C5A8,
        &&label_80D0C5AC,
        &&label_80D0C5B0,
        &&label_80D0C5B4,
        &&label_80D0C5B8,
        &&label_80D0C5BC,
        &&label_80D0C5C0,
        &&label_80D0C5C4,
        &&label_80D0C5C8,
        &&label_80D0C5CC,
        &&label_80D0C5D0,
        &&label_80D0C5D4,
        &&label_80D0C5D8,
        &&label_80D0C5DC,
        &&label_80D0C5E0,
        &&label_80D0C5E4,
        &&label_80D0C5E8,
        &&label_80D0C5EC,
        &&label_80D0C5F0,
        &&label_80D0C5F4,
        &&label_80D0C5F8,
        &&label_80D0C5FC,
        &&label_80D0C600,
        &&label_80D0C604,
        &&label_80D0C608,
        &&label_80D0C60C,
        &&label_80D0C610,
        &&label_80D0C614,
        &&label_80D0C618,
        &&label_80D0C61C,
        &&label_80D0C620,
        &&label_80D0C624,
        &&label_80D0C628,
        &&label_80D0C62C,
        &&label_80D0C630,
        &&label_80D0C634,
        &&label_80D0C638,
        &&label_80D0C63C,
        &&label_80D0C640,
        &&label_80D0C644,
        &&label_80D0C648,
        &&label_80D0C64C,
        &&label_80D0C650,
        &&label_80D0C654,
        &&label_80D0C658,
        &&label_80D0C65C,
        &&label_80D0C660,
        &&label_80D0C664,
        &&label_80D0C668,
        &&label_80D0C66C,
        &&label_80D0C670,
        &&label_80D0C674,
        &&label_80D0C678,
        &&label_80D0C67C,
        &&label_80D0C680,
        &&label_80D0C684,
        &&label_80D0C688,
        &&label_80D0C68C,
        &&label_80D0C690,
        &&label_80D0C694,
        &&label_80D0C698,
        &&label_80D0C69C,
        &&label_80D0C6A0,
        &&label_80D0C6A4,
        &&label_80D0C6A8,
        &&label_80D0C6AC,
        &&label_80D0C6B0,
        &&label_80D0C6B4,
        &&label_80D0C6B8,
        &&label_80D0C6BC,
        &&label_80D0C6C0,
        &&label_80D0C6C4,
        &&label_80D0C6C8,
        &&label_80D0C6CC,
        &&label_80D0C6D0,
        &&label_80D0C6D4,
        &&label_80D0C6D8,
        &&label_80D0C6DC,
        &&label_80D0C6E0,
        &&label_80D0C6E4,
        &&label_80D0C6E8,
        &&label_80D0C6EC,
        &&label_80D0C6F0,
        &&label_80D0C6F4,
        &&label_80D0C6F8,
        &&label_80D0C6FC,
        &&label_80D0C700,
        &&label_80D0C704,
        &&label_80D0C708,
        &&label_80D0C70C,
        &&label_80D0C710,
        &&label_80D0C714,
        &&label_80D0C718,
        &&label_80D0C71C,
        &&label_80D0C720,
        &&label_80D0C724,
        &&label_80D0C728,
        &&label_80D0C72C,
        &&label_80D0C730,
        &&label_80D0C734,
        &&label_80D0C738,
        &&label_80D0C73C,
        &&label_80D0C740,
        &&label_80D0C744,
        &&label_80D0C748,
        &&label_80D0C74C,
        &&label_80D0C750,
        &&label_80D0C754,
        &&label_80D0C758,
        &&label_80D0C75C,
        &&label_80D0C760,
        &&label_80D0C764,
        &&label_80D0C768,
        &&label_80D0C76C,
        &&label_80D0C770,
        &&label_80D0C774,
        &&label_80D0C778,
        &&label_80D0C77C,
        &&label_80D0C780,
        &&label_80D0C784,
        &&label_80D0C788,
        &&label_80D0C78C,
        &&label_80D0C790,
        &&label_80D0C794,
        &&label_80D0C798,
        &&label_80D0C79C,
        &&label_80D0C7A0,
        &&label_80D0C7A4,
        &&label_80D0C7A8,
        &&label_80D0C7AC,
        &&label_80D0C7B0,
        &&label_80D0C7B4,
        &&label_80D0C7B8,
        &&label_80D0C7BC,
        &&label_80D0C7C0,
        &&label_80D0C7C4,
        &&label_80D0C7C8,
        &&label_80D0C7CC,
        &&label_80D0C7D0,
        &&label_80D0C7D4,
        &&label_80D0C7D8,
        &&label_80D0C7DC,
        &&label_80D0C7E0,
        &&label_80D0C7E4,
        &&label_80D0C7E8,
        &&label_80D0C7EC,
        &&label_80D0C7F0,
        &&label_80D0C7F4,
        &&label_80D0C7F8,
        &&label_80D0C7FC,
        &&label_80D0C800,
        &&label_80D0C804,
        &&label_80D0C808,
        &&label_80D0C80C,
        &&label_80D0C810,
        &&label_80D0C814,
        &&label_80D0C818,
        &&label_80D0C81C,
        &&label_80D0C820,
        &&label_80D0C824,
        &&label_80D0C828,
        &&label_80D0C82C,
        &&label_80D0C830,
        &&label_80D0C834,
        &&label_80D0C838,
        &&label_80D0C83C,
        &&label_80D0C840,
        &&label_80D0C844,
        &&label_80D0C848,
        &&label_80D0C84C,
        &&label_80D0C850,
        &&label_80D0C854,
        &&label_80D0C858,
        &&label_80D0C85C,
        &&label_80D0C860,
        &&label_80D0C864,
        &&label_80D0C868,
        &&label_80D0C86C,
        &&label_80D0C870,
        &&label_80D0C874,
        &&label_80D0C878,
        &&label_80D0C87C,
        &&label_80D0C880,
        &&label_80D0C884,
        &&label_80D0C888,
        &&label_80D0C88C,
        &&label_80D0C890,
        &&label_80D0C894,
        &&label_80D0C898,
        &&label_80D0C89C,
        &&label_80D0C8A0,
        &&label_80D0C8A4,
        &&label_80D0C8A8,
        &&label_80D0C8AC,
        &&label_80D0C8B0,
        &&label_80D0C8B4,
        &&label_80D0C8B8,
        &&label_80D0C8BC,
        &&label_80D0C8C0,
        &&label_80D0C8C4,
        &&label_80D0C8C8,
        &&label_80D0C8CC,
        &&label_80D0C8D0,
        &&label_80D0C8D4,
        &&label_80D0C8D8,
        &&label_80D0C8DC,
        &&label_80D0C8E0,
        &&label_80D0C8E4,
        &&label_80D0C8E8,
        &&label_80D0C8EC,
        &&label_80D0C8F0,
        &&label_80D0C8F4,
        &&label_80D0C8F8,
        &&label_80D0C8FC,
        &&label_80D0C900,
        &&label_80D0C904,
        &&label_80D0C908,
        &&label_80D0C90C,
        &&label_80D0C910,
        &&label_80D0C914,
        &&label_80D0C918,
        &&label_80D0C91C,
        &&label_80D0C920,
        &&label_80D0C924,
        &&label_80D0C928,
        &&label_80D0C92C,
        &&label_80D0C930,
        &&label_80D0C934,
        &&label_80D0C938,
        &&label_80D0C93C,
        &&label_80D0C940,
        &&label_80D0C944,
        &&label_80D0C948,
        &&label_80D0C94C,
        &&label_80D0C950,
        &&label_80D0C954,
        &&label_80D0C958,
        &&label_80D0C95C,
        &&label_80D0C960,
        &&label_80D0C964,
        &&label_80D0C968,
        &&label_80D0C96C,
        &&label_80D0C970,
        &&label_80D0C974,
        &&label_80D0C978,
        &&label_80D0C97C,
        &&label_80D0C980,
        &&label_80D0C984,
        &&label_80D0C988,
        &&label_80D0C98C,
        &&label_80D0C990,
        &&label_80D0C994,
        &&label_80D0C998,
        &&label_80D0C99C,
        &&label_80D0C9A0,
        &&label_80D0C9A4,
        &&label_80D0C9A8,
        &&label_80D0C9AC,
        &&label_80D0C9B0,
        &&label_80D0C9B4,
        &&label_80D0C9B8,
        &&label_80D0C9BC,
        &&label_80D0C9C0,
        &&label_80D0C9C4,
        &&label_80D0C9C8,
        &&label_80D0C9CC,
        &&label_80D0C9D0,
        &&label_80D0C9D4,
        &&label_80D0C9D8,
        &&label_80D0C9DC,
        &&label_80D0C9E0,
        &&label_80D0C9E4,
        &&label_80D0C9E8,
        &&label_80D0C9EC,
        &&label_80D0C9F0,
        &&label_80D0C9F4,
        &&label_80D0C9F8,
        &&label_80D0C9FC,
        &&label_80D0CA00,
        &&label_80D0CA04,
        &&label_80D0CA08,
        &&label_80D0CA0C,
        &&label_80D0CA10,
        &&label_80D0CA14,
        &&label_80D0CA18,
        &&label_80D0CA1C,
        &&label_80D0CA20,
        &&label_80D0CA24,
        &&label_80D0CA28,
        &&label_80D0CA2C,
        &&label_80D0CA30,
        &&label_80D0CA34,
        &&label_80D0CA38,
        &&label_80D0CA3C,
        &&label_80D0CA40,
        &&label_80D0CA44,
        &&label_80D0CA48,
        &&label_80D0CA4C,
        &&label_80D0CA50,
        &&label_80D0CA54,
        &&label_80D0CA58,
        &&label_80D0CA5C,
        &&label_80D0CA60,
        &&label_80D0CA64,
        &&label_80D0CA68,
        &&label_80D0CA6C,
        &&label_80D0CA70,
        &&label_80D0CA74,
        &&label_80D0CA78,
        &&label_80D0CA7C,
        &&label_80D0CA80,
        &&label_80D0CA84,
        &&label_80D0CA88,
        &&label_80D0CA8C,
        &&label_80D0CA90,
        &&label_80D0CA94,
        &&label_80D0CA98,
        &&label_80D0CA9C,
        &&label_80D0CAA0,
        &&label_80D0CAA4,
        &&label_80D0CAA8,
        &&label_80D0CAAC,
        &&label_80D0CAB0,
        &&label_80D0CAB4,
        &&label_80D0CAB8,
        &&label_80D0CABC,
        &&label_80D0CAC0,
        &&label_80D0CAC4,
        &&label_80D0CAC8,
        &&label_80D0CACC,
        &&label_80D0CAD0,
        &&label_80D0CAD4,
        &&label_80D0CAD8,
        &&label_80D0CADC,
        &&label_80D0CAE0,
        &&label_80D0CAE4,
        &&label_80D0CAE8,
        &&label_80D0CAEC,
        &&label_80D0CAF0,
        &&label_80D0CAF4,
        &&label_80D0CAF8,
        &&label_80D0CAFC,
        &&label_80D0CB00,
        &&label_80D0CB04,
        &&label_80D0CB08,
        &&label_80D0CB0C,
        &&label_80D0CB10,
        &&label_80D0CB14,
        &&label_80D0CB18,
        &&label_80D0CB1C,
        &&label_80D0CB20,
        &&label_80D0CB24,
        &&label_80D0CB28,
        &&label_80D0CB2C,
        &&label_80D0CB30,
        &&label_80D0CB34,
        &&label_80D0CB38,
        &&label_80D0CB3C,
        &&label_80D0CB40,
        &&label_80D0CB44,
        &&label_80D0CB48,
        &&label_80D0CB4C,
        &&label_80D0CB50,
        &&label_80D0CB54,
        &&label_80D0CB58,
        &&label_80D0CB5C,
        &&label_80D0CB60,
        &&label_80D0CB64,
        &&label_80D0CB68,
        &&label_80D0CB6C,
        &&label_80D0CB70,
        &&label_80D0CB74,
        &&label_80D0CB78,
        &&label_80D0CB7C,
        &&label_80D0CB80,
        &&label_80D0CB84,
        &&label_80D0CB88,
        &&label_80D0CB8C,
        &&label_80D0CB90,
        &&label_80D0CB94,
        &&label_80D0CB98,
        &&label_80D0CB9C,
        &&label_80D0CBA0,
        &&label_80D0CBA4,
        &&label_80D0CBA8,
        &&label_80D0CBAC,
        &&label_80D0CBB0,
        &&label_80D0CBB4,
        &&label_80D0CBB8,
        &&label_80D0CBBC,
        &&label_80D0CBC0,
        &&label_80D0CBC4,
        &&label_80D0CBC8,
        &&label_80D0CBCC,
        &&label_80D0CBD0,
        &&label_80D0CBD4,
        &&label_80D0CBD8,
        &&label_80D0CBDC,
        &&label_80D0CBE0,
        &&label_80D0CBE4,
        &&label_80D0CBE8,
        &&label_80D0CBEC,
        &&label_80D0CBF0,
        &&label_80D0CBF4,
        &&label_80D0CBF8,
        &&label_80D0CBFC,
        &&label_80D0CC00,
        &&label_80D0CC04,
        &&label_80D0CC08,
        &&label_80D0CC0C,
        &&label_80D0CC10,
        &&label_80D0CC14,
        &&label_80D0CC18,
        &&label_80D0CC1C,
        &&label_80D0CC20,
        &&label_80D0CC24,
        &&label_80D0CC28,
        &&label_80D0CC2C,
        &&label_80D0CC30,
        &&label_80D0CC34,
        &&label_80D0CC38,
        &&label_80D0CC3C,
        &&label_80D0CC40,
        &&label_80D0CC44,
        &&label_80D0CC48,
        &&label_80D0CC4C,
        &&label_80D0CC50,
        &&label_80D0CC54,
        &&label_80D0CC58,
        &&label_80D0CC5C,
        &&label_80D0CC60,
        &&label_80D0CC64,
        &&label_80D0CC68,
        &&label_80D0CC6C,
        &&label_80D0CC70,
        &&label_80D0CC74,
        &&label_80D0CC78,
        &&label_80D0CC7C,
        &&label_80D0CC80,
        &&label_80D0CC84,
        &&label_80D0CC88,
        &&label_80D0CC8C,
        &&label_80D0CC90,
        &&label_80D0CC94,
        &&label_80D0CC98,
        &&label_80D0CC9C,
        &&label_80D0CCA0,
        &&label_80D0CCA4,
        &&label_80D0CCA8,
        &&label_80D0CCAC,
        &&label_80D0CCB0,
        &&label_80D0CCB4,
        &&label_80D0CCB8,
        &&label_80D0CCBC,
        &&label_80D0CCC0,
        &&label_80D0CCC4,
        &&label_80D0CCC8,
        &&label_80D0CCCC,
        &&label_80D0CCD0,
        &&label_80D0CCD4,
        &&label_80D0CCD8,
        &&label_80D0CCDC,
        &&label_80D0CCE0,
        &&label_80D0CCE4,
        &&label_80D0CCE8,
        &&label_80D0CCEC,
        &&label_80D0CCF0,
        &&label_80D0CCF4,
        &&label_80D0CCF8,
        &&label_80D0CCFC,
        &&label_80D0CD00,
        &&label_80D0CD04,
        &&label_80D0CD08,
        &&label_80D0CD0C,
        &&label_80D0CD10,
        &&label_80D0CD14,
        &&label_80D0CD18,
        &&label_80D0CD1C,
        &&label_80D0CD20,
        &&label_80D0CD24,
        &&label_80D0CD28,
        &&label_80D0CD2C,
        &&label_80D0CD30,
        &&label_80D0CD34,
        &&label_80D0CD38,
        &&label_80D0CD3C,
        &&label_80D0CD40,
        &&label_80D0CD44,
        &&label_80D0CD48,
        &&label_80D0CD4C,
        &&label_80D0CD50,
        &&label_80D0CD54,
        &&label_80D0CD58,
        &&label_80D0CD5C,
        &&label_80D0CD60,
        &&label_80D0CD64,
        &&label_80D0CD68,
        &&label_80D0CD6C,
        &&label_80D0CD70,
        &&label_80D0CD74,
        &&label_80D0CD78,
        &&label_80D0CD7C,
        &&label_80D0CD80,
        &&label_80D0CD84,
        &&label_80D0CD88,
        &&label_80D0CD8C,
        &&label_80D0CD90,
        &&label_80D0CD94,
        &&label_80D0CD98,
        &&label_80D0CD9C,
        &&label_80D0CDA0,
        &&label_80D0CDA4,
        &&label_80D0CDA8,
        &&label_80D0CDAC,
        &&label_80D0CDB0,
        &&label_80D0CDB4,
        &&label_80D0CDB8,
        &&label_80D0CDBC,
        &&label_80D0CDC0,
        &&label_80D0CDC4,
        &&label_80D0CDC8,
        &&label_80D0CDCC,
        &&label_80D0CDD0,
        &&label_80D0CDD4,
        &&label_80D0CDD8,
        &&label_80D0CDDC,
        &&label_80D0CDE0,
        &&label_80D0CDE4,
        &&label_80D0CDE8,
        &&label_80D0CDEC,
        &&label_80D0CDF0,
        &&label_80D0CDF4,
        &&label_80D0CDF8,
        &&label_80D0CDFC,
        &&label_80D0CE00,
        &&label_80D0CE04,
        &&label_80D0CE08,
        &&label_80D0CE0C,
        &&label_80D0CE10,
        &&label_80D0CE14,
        &&label_80D0CE18,
        &&label_80D0CE1C,
        &&label_80D0CE20,
        &&label_80D0CE24,
        &&label_80D0CE28,
        &&label_80D0CE2C,
        &&label_80D0CE30,
        &&label_80D0CE34,
        &&label_80D0CE38,
        &&label_80D0CE3C,
        &&label_80D0CE40,
        &&label_80D0CE44,
        &&label_80D0CE48,
        &&label_80D0CE4C,
        &&label_80D0CE50,
        &&label_80D0CE54,
        &&label_80D0CE58,
        &&label_80D0CE5C,
        &&label_80D0CE60,
        &&label_80D0CE64,
        &&label_80D0CE68,
        &&label_80D0CE6C,
        &&label_80D0CE70,
        &&label_80D0CE74,
        &&label_80D0CE78,
        &&label_80D0CE7C,
        &&label_80D0CE80,
        &&label_80D0CE84,
        &&label_80D0CE88,
        &&label_80D0CE8C,
        &&label_80D0CE90,
        &&label_80D0CE94,
        &&label_80D0CE98,
        &&label_80D0CE9C,
        &&label_80D0CEA0,
        &&label_80D0CEA4,
        &&label_80D0CEA8,
        &&label_80D0CEAC,
        &&label_80D0CEB0,
        &&label_80D0CEB4,
        &&label_80D0CEB8,
        &&label_80D0CEBC,
        &&label_80D0CEC0,
        &&label_80D0CEC4,
        &&label_80D0CEC8,
        &&label_80D0CECC,
        &&label_80D0CED0,
        &&label_80D0CED4,
        &&label_80D0CED8,
        &&label_80D0CEDC,
        &&label_80D0CEE0,
        &&label_80D0CEE4,
        &&label_80D0CEE8,
        &&label_80D0CEEC,
        &&label_80D0CEF0,
        &&label_80D0CEF4,
        &&label_80D0CEF8,
        &&label_80D0CEFC,
        &&label_80D0CF00,
        &&label_80D0CF04,
        &&label_80D0CF08,
        &&label_80D0CF0C,
        &&label_80D0CF10,
        &&label_80D0CF14,
        &&label_80D0CF18,
        &&label_80D0CF1C,
        &&label_80D0CF20,
        &&label_80D0CF24,
        &&label_80D0CF28,
        &&label_80D0CF2C,
        &&label_80D0CF30,
        &&label_80D0CF34,
        &&label_80D0CF38,
        &&label_80D0CF3C,
        &&label_80D0CF40,
        &&label_80D0CF44,
        &&label_80D0CF48,
        &&label_80D0CF4C,
        &&label_80D0CF50,
        &&label_80D0CF54,
        &&label_80D0CF58,
        &&label_80D0CF5C,
        &&label_80D0CF60,
        &&label_80D0CF64,
        &&label_80D0CF68,
        &&label_80D0CF6C,
        &&label_80D0CF70,
        &&label_80D0CF74,
        &&label_80D0CF78,
        &&label_80D0CF7C,
        &&label_80D0CF80,
        &&label_80D0CF84,
        &&label_80D0CF88,
        &&label_80D0CF8C,
        &&label_80D0CF90,
        &&label_80D0CF94,
        &&label_80D0CF98,
        &&label_80D0CF9C,
        &&label_80D0CFA0,
        &&label_80D0CFA4,
        &&label_80D0CFA8,
        &&label_80D0CFAC,
        &&label_80D0CFB0,
        &&label_80D0CFB4,
        &&label_80D0CFB8,
        &&label_80D0CFBC,
        &&label_80D0CFC0,
        &&label_80D0CFC4,
        &&label_80D0CFC8,
        &&label_80D0CFCC,
        &&label_80D0CFD0,
        &&label_80D0CFD4,
        &&label_80D0CFD8,
        &&label_80D0CFDC,
        &&label_80D0CFE0,
        &&label_80D0CFE4,
        &&label_80D0CFE8,
        &&label_80D0CFEC,
        &&label_80D0CFF0,
        &&label_80D0CFF4,
        &&label_80D0CFF8,
        &&label_80D0CFFC,
        &&label_80D0D000,
        &&label_80D0D004,
        &&label_80D0D008,
        &&label_80D0D00C,
        &&label_80D0D010,
        &&label_80D0D014,
        &&label_80D0D018,
        &&label_80D0D01C,
        &&label_80D0D020,
        &&label_80D0D024,
        &&label_80D0D028,
        &&label_80D0D02C,
        &&label_80D0D030,
        &&label_80D0D034,
        &&label_80D0D038,
        &&label_80D0D03C,
        &&label_80D0D040,
        &&label_80D0D044,
        &&label_80D0D048,
        &&label_80D0D04C,
        &&label_80D0D050,
        &&label_80D0D054,
        &&label_80D0D058,
        &&label_80D0D05C,
        &&label_80D0D060,
        &&label_80D0D064,
        &&label_80D0D068,
        &&label_80D0D06C,
        &&label_80D0D070,
        &&label_80D0D074,
        &&label_80D0D078,
        &&label_80D0D07C,
        &&label_80D0D080,
        &&label_80D0D084,
        &&label_80D0D088,
        &&label_80D0D08C,
        &&label_80D0D090,
        &&label_80D0D094,
        &&label_80D0D098,
        &&label_80D0D09C,
        &&label_80D0D0A0,
        &&label_80D0D0A4,
        &&label_80D0D0A8,
        &&label_80D0D0AC,
        &&label_80D0D0B0,
        &&label_80D0D0B4,
        &&label_80D0D0B8,
        &&label_80D0D0BC,
        &&label_80D0D0C0,
        &&label_80D0D0C4,
        &&label_80D0D0C8,
        &&label_80D0D0CC,
        &&label_80D0D0D0,
        &&label_80D0D0D4,
        &&label_80D0D0D8,
        &&label_80D0D0DC,
        &&label_80D0D0E0,
        &&label_80D0D0E4,
        &&label_80D0D0E8,
        &&label_80D0D0EC,
        &&label_80D0D0F0,
        &&label_80D0D0F4,
        &&label_80D0D0F8,
        &&label_80D0D0FC,
        &&label_80D0D100,
        &&label_80D0D104,
        &&label_80D0D108,
        &&label_80D0D10C,
        &&label_80D0D110,
        &&label_80D0D114,
        &&label_80D0D118,
        &&label_80D0D11C,
        &&label_80D0D120,
        &&label_80D0D124,
        &&label_80D0D128,
        &&label_80D0D12C,
        &&label_80D0D130,
        &&label_80D0D134,
        &&label_80D0D138,
        &&label_80D0D13C,
        &&label_80D0D140,
        &&label_80D0D144,
        &&label_80D0D148,
        &&label_80D0D14C,
        &&label_80D0D150,
        &&label_80D0D154,
        &&label_80D0D158,
        &&label_80D0D15C,
        &&label_80D0D160,
        &&label_80D0D164,
        &&label_80D0D168,
        &&label_80D0D16C,
        &&label_80D0D170,
        &&label_80D0D174,
        &&label_80D0D178,
        &&label_80D0D17C,
        &&label_80D0D180,
        &&label_80D0D184,
        &&label_80D0D188,
        &&label_80D0D18C,
        &&label_80D0D190,
        &&label_80D0D194,
        &&label_80D0D198,
        &&label_80D0D19C
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D0BDA0u && pc <= 0x80D0D19Cu && ((pc - 0x80D0BDA0u) & 3u) == 0u)
            goto *pc_table_80D0BDA0[(pc - 0x80D0BDA0u) >> 2];
    }
    return;
label_80D0BDA0:
    ctx->pc = 0x80D0BDA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BDA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0BDA0: stwu     r1, -16(r1)
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
label_80D0BDA4:
    ctx->pc = 0x80D0BDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BDA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0BDA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0BDA8:
    ctx->pc = 0x80D0BDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BDA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0BDA8: stw     r0, 20(r1)
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
label_80D0BDAC:
    ctx->pc = 0x80D0BDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BDACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0BDAC: stw     r31, 12(r1)
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
label_80D0BDB0:
    ctx->pc = 0x80D0BDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BDB0u)) return;
    // 80D0BDB0: cmpwi   r3, 2
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

label_80D0BDB4:
    ctx->pc = 0x80D0BDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BDB4u)) return;
    // 80D0BDB4: bc    12, 2, 0x80D0C75C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D0C75C;
        }
    }

label_80D0BDB8:
    ctx->pc = 0x80D0BDB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BDB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0BDB8: bc    4, 0, 0x80D0BDCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D0BDCC;
        }
    }

label_80D0BDBC:
    ctx->pc = 0x80D0BDBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BDBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0BDBC: cmpwi   r3, 0
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

label_80D0BDC0:
    ctx->pc = 0x80D0BDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BDC0u)) return;
    // 80D0BDC0: bc    12, 2, 0x80D0C810
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D0C810;
        }
    }

label_80D0BDC4:
    ctx->pc = 0x80D0BDC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BDC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0BDC4: bc    4, 0, 0x80D0BDD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D0BDD4;
        }
    }

label_80D0BDC8:
    ctx->pc = 0x80D0BDC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BDC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0BDC8: b       0x80D0C810
    {
            goto label_80D0C810;
    }

label_80D0BDCC:
    ctx->pc = 0x80D0BDCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BDCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0BDCC: cmpwi   r3, 4
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

label_80D0BDD0:
    ctx->pc = 0x80D0BDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BDD0u)) return;
    // 80D0BDD0: b       0x80D0C810
    {
            goto label_80D0C810;
    }

label_80D0BDD4:
    ctx->pc = 0x80D0BDD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BDD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0BDD4: bl      0x8045DE7C
    {
            ctx->lr = 0x80D0BDD8u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D0BDD8:
    ctx->pc = 0x80D0BDD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BDD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0BDD8: bl      0x80460A60
    {
            ctx->lr = 0x80D0BDDCu;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D0BDDC:
    ctx->pc = 0x80D0BDDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BDDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0BDDC: bl      0x80460A24
    {
            ctx->lr = 0x80D0BDE0u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D0BDE0:
    ctx->pc = 0x80D0BDE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BDE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0BDE0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0BDE4:
    ctx->pc = 0x80D0BDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BDE4u)) return;
    // 80D0BDE4: bl      0x80D0CE10
    {
            ctx->lr = 0x80D0BDE8u;
            goto label_80D0CE10;
    }

label_80D0BDE8:
    ctx->pc = 0x80D0BDE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BDE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D0BDE8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0BDEC:
    ctx->pc = 0x80D0BDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BDECu)) return;
    // 80D0BDEC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80D0BDF0:
    ctx->pc = 0x80D0BDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BDF0u)) return;
    // 80D0BDF0: li      r5, 12561
    ctx->gpr[5] = (u32)(s32)(12561);

label_80D0BDF4:
    ctx->pc = 0x80D0BDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BDF4u)) return;
    // 80D0BDF4: bl      0x8045C0F8
    {
            ctx->lr = 0x80D0BDF8u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80D0BDF8:
    ctx->pc = 0x80D0BDF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BDF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D0BDF8: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0BDFC:
    ctx->pc = 0x80D0BDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BDFCu)) return;
    // 80D0BDFC: addi    r3, r3, -25456
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25456);

label_80D0BE00:
    ctx->pc = 0x80D0BE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0BE00: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D0BE00u)) return;
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
label_80D0BE04:
    ctx->pc = 0x80D0BE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE04u)) return;
    // 80D0BE04: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0BE08:
    ctx->pc = 0x80D0BE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE08u)) return;
    // 80D0BE08: addi    r3, r3, -25452
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25452);

label_80D0BE0C:
    ctx->pc = 0x80D0BE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0BE0C: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D0BE0Cu)) return;
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
label_80D0BE10:
    ctx->pc = 0x80D0BE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE10u)) return;
    // 80D0BE10: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D0BE10u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D0BE14:
    ctx->pc = 0x80D0BE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE14u)) return;
    // 80D0BE14: fmr    f4, f1
    if (!ppc_fp_available_inline(ctx, 0x80D0BE14u)) return;
    ctx->fpr[4] = ctx->fpr[1];

label_80D0BE18:
    ctx->pc = 0x80D0BE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE18u)) return;
    // 80D0BE18: fmr    f5, f1
    if (!ppc_fp_available_inline(ctx, 0x80D0BE18u)) return;
    ctx->fpr[5] = ctx->fpr[1];

label_80D0BE1C:
    ctx->pc = 0x80D0BE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE1Cu)) return;
    // 80D0BE1C: bl      0x80D0CA28
    {
            ctx->lr = 0x80D0BE20u;
            goto label_80D0CA28;
    }

label_80D0BE20:
    ctx->pc = 0x80D0BE20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BE20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D0BE20: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0BE24:
    ctx->pc = 0x80D0BE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE24u)) return;
    // 80D0BE24: addi    r4, r4, 1888
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1888);

label_80D0BE28:
    ctx->pc = 0x80D0BE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0BE28: stw     r3, 0(r4)
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
label_80D0BE2C:
    ctx->pc = 0x80D0BE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE2Cu)) return;
    // 80D0BE2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0BE30:
    ctx->pc = 0x80D0BE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE30u)) return;
    // 80D0BE30: li      r4, 760
    ctx->gpr[4] = (u32)(s32)(760);

label_80D0BE34:
    ctx->pc = 0x80D0BE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE34u)) return;
    // 80D0BE34: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_80D0BE38:
    ctx->pc = 0x80D0BE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE38u)) return;
    // 80D0BE38: bl      0x80D0CF18
    {
            ctx->lr = 0x80D0BE3Cu;
            goto label_80D0CF18;
    }

label_80D0BE3C:
    ctx->pc = 0x80D0BE3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BE3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D0BE3C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0BE40:
    ctx->pc = 0x80D0BE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE40u)) return;
    // 80D0BE40: li      r4, -120
    ctx->gpr[4] = (u32)(s32)(-120);

label_80D0BE44:
    ctx->pc = 0x80D0BE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE44u)) return;
    // 80D0BE44: li      r5, 120
    ctx->gpr[5] = (u32)(s32)(120);

label_80D0BE48:
    ctx->pc = 0x80D0BE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE48u)) return;
    // 80D0BE48: bl      0x80D0CFF4
    {
            ctx->lr = 0x80D0BE4Cu;
            goto label_80D0CFF4;
    }

label_80D0BE4C:
    ctx->pc = 0x80D0BE4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BE4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0BE4C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0BE50:
    ctx->pc = 0x80D0BE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE50u)) return;
    // 80D0BE50: bl      0x8045F220
    {
            ctx->lr = 0x80D0BE54u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0BE54:
    ctx->pc = 0x80D0BE54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BE54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D0BE54: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0BE58:
    ctx->pc = 0x80D0BE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE58u)) return;
    // 80D0BE58: addi    r4, r4, -25448
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25448);

label_80D0BE5C:
    ctx->pc = 0x80D0BE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0BE5C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0BE5Cu)) return;
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
label_80D0BE60:
    ctx->pc = 0x80D0BE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE60u)) return;
    // 80D0BE60: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0BE64:
    ctx->pc = 0x80D0BE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE64u)) return;
    // 80D0BE64: addi    r4, r4, -25444
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25444);

label_80D0BE68:
    ctx->pc = 0x80D0BE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0BE68: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0BE68u)) return;
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
label_80D0BE6C:
    ctx->pc = 0x80D0BE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE6Cu)) return;
    // 80D0BE6C: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0BE70:
    ctx->pc = 0x80D0BE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE70u)) return;
    // 80D0BE70: addi    r4, r4, -25440
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25440);

label_80D0BE74:
    ctx->pc = 0x80D0BE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0BE74: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0BE74u)) return;
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
label_80D0BE78:
    ctx->pc = 0x80D0BE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE78u)) return;
    // 80D0BE78: bl      0x8045EF2C
    {
            ctx->lr = 0x80D0BE7Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D0BE7C:
    ctx->pc = 0x80D0BE7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BE7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0BE7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0BE80:
    ctx->pc = 0x80D0BE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE80u)) return;
    // 80D0BE80: bl      0x8045F220
    {
            ctx->lr = 0x80D0BE84u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0BE84:
    ctx->pc = 0x80D0BE84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BE84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D0BE84: li      r4, 2048
    ctx->gpr[4] = (u32)(s32)(2048);

label_80D0BE88:
    ctx->pc = 0x80D0BE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE88u)) return;
    // 80D0BE88: li      r5, 3328
    ctx->gpr[5] = (u32)(s32)(3328);

label_80D0BE8C:
    ctx->pc = 0x80D0BE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE8Cu)) return;
    // 80D0BE8C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D0BE90:
    ctx->pc = 0x80D0BE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE90u)) return;
    // 80D0BE90: bl      0x8045EEA8
    {
            ctx->lr = 0x80D0BE94u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D0BE94:
    ctx->pc = 0x80D0BE94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BE94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0BE94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0BE98:
    ctx->pc = 0x80D0BE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BE98u)) return;
    // 80D0BE98: bl      0x8045EC10
    {
            ctx->lr = 0x80D0BE9Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D0BE9C:
    ctx->pc = 0x80D0BE9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BE9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0BE9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0BEA0:
    ctx->pc = 0x80D0BEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BEA0u)) return;
    // 80D0BEA0: bl      0x8045F220
    {
            ctx->lr = 0x80D0BEA4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0BEA4:
    ctx->pc = 0x80D0BEA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BEA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D0BEA4: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80D0BEA8:
    ctx->pc = 0x80D0BEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BEA8u)) return;
    // 80D0BEA8: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80D0BEAC:
    ctx->pc = 0x80D0BEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BEACu)) return;
    // 80D0BEAC: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D0BEB0:
    ctx->pc = 0x80D0BEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BEB0u)) return;
    // 80D0BEB0: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D0BEB4:
    ctx->pc = 0x80D0BEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BEB4u)) return;
    // 80D0BEB4: lis     r6, -27348
    ctx->gpr[6] = ((u32)(s32)(-27348) << 16);

label_80D0BEB8:
    ctx->pc = 0x80D0BEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BEB8u)) return;
    // 80D0BEB8: addi    r6, r6, -25456
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25456);

label_80D0BEBC:
    ctx->pc = 0x80D0BEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BEBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0BEBC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D0BEBCu)) return;
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
label_80D0BEC0:
    ctx->pc = 0x80D0BEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BEC0u)) return;
    // 80D0BEC0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D0BEC4:
    ctx->pc = 0x80D0BEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BEC4u)) return;
    // 80D0BEC4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D0BEC8:
    ctx->pc = 0x80D0BEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BEC8u)) return;
    // 80D0BEC8: bl      0x8045EBE4
    {
            ctx->lr = 0x80D0BECCu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D0BECC:
    ctx->pc = 0x80D0BECCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BECCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0BECC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0BED0:
    ctx->pc = 0x80D0BED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BED0u)) return;
    // 80D0BED0: bl      0x8045F220
    {
            ctx->lr = 0x80D0BED4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0BED4:
    ctx->pc = 0x80D0BED4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BED4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D0BED4: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0BED8:
    ctx->pc = 0x80D0BED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BED8u)) return;
    // 80D0BED8: addi    r4, r4, -25436
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25436);

label_80D0BEDC:
    ctx->pc = 0x80D0BEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BEDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0BEDC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0BEDCu)) return;
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
label_80D0BEE0:
    ctx->pc = 0x80D0BEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BEE0u)) return;
    // 80D0BEE0: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0BEE4:
    ctx->pc = 0x80D0BEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BEE4u)) return;
    // 80D0BEE4: addi    r4, r4, -25432
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25432);

label_80D0BEE8:
    ctx->pc = 0x80D0BEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BEE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0BEE8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0BEE8u)) return;
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
label_80D0BEEC:
    ctx->pc = 0x80D0BEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BEECu)) return;
    // 80D0BEEC: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0BEF0:
    ctx->pc = 0x80D0BEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BEF0u)) return;
    // 80D0BEF0: addi    r4, r4, -25428
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25428);

label_80D0BEF4:
    ctx->pc = 0x80D0BEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BEF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0BEF4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0BEF4u)) return;
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
label_80D0BEF8:
    ctx->pc = 0x80D0BEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BEF8u)) return;
    // 80D0BEF8: bl      0x8045E70C
    {
            ctx->lr = 0x80D0BEFCu;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D0BEFC:
    ctx->pc = 0x80D0BEFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BEFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0BEFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0BF00:
    ctx->pc = 0x80D0BF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF00u)) return;
    // 80D0BF00: bl      0x8045F220
    {
            ctx->lr = 0x80D0BF04u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0BF04:
    ctx->pc = 0x80D0BF04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BF04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D0BF04: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D0BF08:
    ctx->pc = 0x80D0BF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF08u)) return;
    // 80D0BF08: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D0BF0C:
    ctx->pc = 0x80D0BF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF0Cu)) return;
    // 80D0BF0C: bl      0x8045F220
    {
            ctx->lr = 0x80D0BF10u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0BF10:
    ctx->pc = 0x80D0BF10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BF10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D0BF10: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D0BF14:
    ctx->pc = 0x80D0BF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF14u)) return;
    // 80D0BF14: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0BF18:
    ctx->pc = 0x80D0BF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF18u)) return;
    // 80D0BF18: addi    r5, r5, -25424
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25424);

label_80D0BF1C:
    ctx->pc = 0x80D0BF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0BF1C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0BF1Cu)) return;
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
label_80D0BF20:
    ctx->pc = 0x80D0BF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF20u)) return;
    // 80D0BF20: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0BF24:
    ctx->pc = 0x80D0BF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF24u)) return;
    // 80D0BF24: addi    r5, r5, -25420
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25420);

label_80D0BF28:
    ctx->pc = 0x80D0BF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0BF28: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0BF28u)) return;
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
label_80D0BF2C:
    ctx->pc = 0x80D0BF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF2Cu)) return;
    // 80D0BF2C: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D0BF2Cu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D0BF30:
    ctx->pc = 0x80D0BF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF30u)) return;
    // 80D0BF30: bl      0x8045E734
    {
            ctx->lr = 0x80D0BF34u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80D0BF34:
    ctx->pc = 0x80D0BF34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BF34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80D0BF34: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D0BF38:
    ctx->pc = 0x80D0BF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF38u)) return;
    // 80D0BF38: lis     r4, -32676
    ctx->gpr[4] = ((u32)(s32)(-32676) << 16);

label_80D0BF3C:
    ctx->pc = 0x80D0BF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF3Cu)) return;
    // 80D0BF3C: addi    r4, r4, -5088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5088);

label_80D0BF40:
    ctx->pc = 0x80D0BF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF40u)) return;
    // 80D0BF40: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0BF44:
    ctx->pc = 0x80D0BF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF44u)) return;
    // 80D0BF44: addi    r5, r5, -25416
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25416);

label_80D0BF48:
    ctx->pc = 0x80D0BF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D0BF48: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0BF48u)) return;
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
label_80D0BF4C:
    ctx->pc = 0x80D0BF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF4Cu)) return;
    // 80D0BF4C: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0BF50:
    ctx->pc = 0x80D0BF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF50u)) return;
    // 80D0BF50: addi    r5, r5, -25412
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25412);

label_80D0BF54:
    ctx->pc = 0x80D0BF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D0BF54: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0BF54u)) return;
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
label_80D0BF58:
    ctx->pc = 0x80D0BF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF58u)) return;
    // 80D0BF58: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0BF5C:
    ctx->pc = 0x80D0BF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF5Cu)) return;
    // 80D0BF5C: addi    r5, r5, -25408
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25408);

label_80D0BF60:
    ctx->pc = 0x80D0BF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0BF60: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0BF60u)) return;
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
label_80D0BF64:
    ctx->pc = 0x80D0BF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF64u)) return;
    // 80D0BF64: li      r5, 2180
    ctx->gpr[5] = (u32)(s32)(2180);

label_80D0BF68:
    ctx->pc = 0x80D0BF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF68u)) return;
    // 80D0BF68: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D0BF6C:
    ctx->pc = 0x80D0BF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF6Cu)) return;
    // 80D0BF6C: addi    r6, r6, -31232
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-31232);

label_80D0BF70:
    ctx->pc = 0x80D0BF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF70u)) return;
    // 80D0BF70: li      r7, 68
    ctx->gpr[7] = (u32)(s32)(68);

label_80D0BF74:
    ctx->pc = 0x80D0BF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF74u)) return;
    // 80D0BF74: bl      0x8045ED84
    {
            ctx->lr = 0x80D0BF78u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80D0BF78:
    ctx->pc = 0x80D0BF78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BF78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0BF78: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D0BF7C:
    ctx->pc = 0x80D0BF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF7Cu)) return;
    // 80D0BF7C: bl      0x8045EC10
    {
            ctx->lr = 0x80D0BF80u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D0BF80:
    ctx->pc = 0x80D0BF80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BF80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0BF80: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0BF84:
    ctx->pc = 0x80D0BF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF84u)) return;
    // 80D0BF84: bl      0x8045F7C8
    {
            ctx->lr = 0x80D0BF88u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D0BF88:
    ctx->pc = 0x80D0BF88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BF88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0BF88: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D0BF8C:
    ctx->pc = 0x80D0BF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF8Cu)) return;
    // 80D0BF8C: bl      0x8045F220
    {
            ctx->lr = 0x80D0BF90u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0BF90:
    ctx->pc = 0x80D0BF90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BF90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D0BF90: lis     r4, -28601
    ctx->gpr[4] = ((u32)(s32)(-28601) << 16);

label_80D0BF94:
    ctx->pc = 0x80D0BF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF94u)) return;
    // 80D0BF94: addi    r4, r4, -1396
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1396);

label_80D0BF98:
    ctx->pc = 0x80D0BF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF98u)) return;
    // 80D0BF98: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80D0BF9C:
    ctx->pc = 0x80D0BF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BF9Cu)) return;
    // 80D0BF9C: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80D0BFA0:
    ctx->pc = 0x80D0BFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFA0u)) return;
    // 80D0BFA0: lis     r6, -27348
    ctx->gpr[6] = ((u32)(s32)(-27348) << 16);

label_80D0BFA4:
    ctx->pc = 0x80D0BFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFA4u)) return;
    // 80D0BFA4: addi    r6, r6, -25404
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25404);

label_80D0BFA8:
    ctx->pc = 0x80D0BFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0BFA8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D0BFA8u)) return;
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
label_80D0BFAC:
    ctx->pc = 0x80D0BFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFACu)) return;
    // 80D0BFAC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D0BFB0:
    ctx->pc = 0x80D0BFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFB0u)) return;
    // 80D0BFB0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D0BFB4:
    ctx->pc = 0x80D0BFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFB4u)) return;
    // 80D0BFB4: bl      0x8045EBE4
    {
            ctx->lr = 0x80D0BFB8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D0BFB8:
    ctx->pc = 0x80D0BFB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BFB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0BFB8: li      r3, 1451
    ctx->gpr[3] = (u32)(s32)(1451);

label_80D0BFBC:
    ctx->pc = 0x80D0BFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFBCu)) return;
    // 80D0BFBC: bl      0x8045BFA0
    {
            ctx->lr = 0x80D0BFC0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D0BFC0:
    ctx->pc = 0x80D0BFC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BFC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D0BFC0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D0BFC4:
    ctx->pc = 0x80D0BFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFC4u)) return;
    // 80D0BFC4: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D0BFC8:
    ctx->pc = 0x80D0BFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0BFC8: lwz     r0, 0(r3)
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
label_80D0BFCC:
    ctx->pc = 0x80D0BFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFCCu)) return;
    // 80D0BFCC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D0BFD0:
    ctx->pc = 0x80D0BFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFD0u)) return;
    // 80D0BFD0: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0BFD4:
    ctx->pc = 0x80D0BFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFD4u)) return;
    // 80D0BFD4: addi    r3, r3, -23708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23708);

label_80D0BFD8:
    ctx->pc = 0x80D0BFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0BFD8: lwzx    r3, r3, r0
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
label_80D0BFDC:
    ctx->pc = 0x80D0BFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0BFDC: lwz     r3, 0(r3)
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
label_80D0BFE0:
    ctx->pc = 0x80D0BFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFE0u)) return;
    // 80D0BFE0: bl      0x8045F6FC
    {
            ctx->lr = 0x80D0BFE4u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D0BFE4:
    ctx->pc = 0x80D0BFE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BFE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0BFE4: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80D0BFE8:
    ctx->pc = 0x80D0BFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFE8u)) return;
    // 80D0BFE8: bl      0x8045F7C8
    {
            ctx->lr = 0x80D0BFECu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D0BFEC:
    ctx->pc = 0x80D0BFECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0BFECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D0BFEC: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0BFF0:
    ctx->pc = 0x80D0BFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFF0u)) return;
    // 80D0BFF0: addi    r3, r3, 1888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1888);

label_80D0BFF4:
    ctx->pc = 0x80D0BFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0BFF4: lwz     r3, 0(r3)
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
label_80D0BFF8:
    ctx->pc = 0x80D0BFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFF8u)) return;
    // 80D0BFF8: cmplwi  r3, 0x0000
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

label_80D0BFFC:
    ctx->pc = 0x80D0BFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0BFFCu)) return;
    // 80D0BFFC: bc    12, 2, 0x80D0C010
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D0C010;
        }
    }

label_80D0C000:
    ctx->pc = 0x80D0C000u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C000u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D0C000: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C004:
    ctx->pc = 0x80D0C004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C004u)) return;
    // 80D0C004: addi    r4, r4, -25400
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25400);

label_80D0C008:
    ctx->pc = 0x80D0C008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C008: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0C008u)) return;
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
label_80D0C00C:
    ctx->pc = 0x80D0C00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C00Cu)) return;
    // 80D0C00C: bl      0x80D0CAE4
    {
            ctx->lr = 0x80D0C010u;
            goto label_80D0CAE4;
    }

label_80D0C010:
    ctx->pc = 0x80D0C010u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C010u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D0C010: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0C014:
    ctx->pc = 0x80D0C014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C014u)) return;
    // 80D0C014: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D0C018:
    ctx->pc = 0x80D0C018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C018u)) return;
    // 80D0C018: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C01C:
    ctx->pc = 0x80D0C01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C01Cu)) return;
    // 80D0C01C: addi    r5, r5, -25396
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25396);

label_80D0C020:
    ctx->pc = 0x80D0C020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0C020: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C020u)) return;
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
label_80D0C024:
    ctx->pc = 0x80D0C024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C024u)) return;
    // 80D0C024: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C028:
    ctx->pc = 0x80D0C028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C028u)) return;
    // 80D0C028: addi    r5, r5, -25392
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25392);

label_80D0C02C:
    ctx->pc = 0x80D0C02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C02Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0C02C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C02Cu)) return;
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
label_80D0C030:
    ctx->pc = 0x80D0C030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C030u)) return;
    // 80D0C030: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C034:
    ctx->pc = 0x80D0C034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C034u)) return;
    // 80D0C034: addi    r5, r5, -25388
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25388);

label_80D0C038:
    ctx->pc = 0x80D0C038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C038u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C038: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C038u)) return;
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
label_80D0C03C:
    ctx->pc = 0x80D0C03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C03Cu)) return;
    // 80D0C03C: bl      0x8045C750
    {
            ctx->lr = 0x80D0C040u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D0C040:
    ctx->pc = 0x80D0C040u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C040u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D0C040: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0C044:
    ctx->pc = 0x80D0C044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C044u)) return;
    // 80D0C044: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D0C048:
    ctx->pc = 0x80D0C048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C048u)) return;
    // 80D0C048: li      r5, 6912
    ctx->gpr[5] = (u32)(s32)(6912);

label_80D0C04C:
    ctx->pc = 0x80D0C04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C04Cu)) return;
    // 80D0C04C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D0C050:
    ctx->pc = 0x80D0C050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C050u)) return;
    // 80D0C050: addi    r6, r6, -768
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-768);

label_80D0C054:
    ctx->pc = 0x80D0C054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C054u)) return;
    // 80D0C054: li      r7, 5632
    ctx->gpr[7] = (u32)(s32)(5632);

label_80D0C058:
    ctx->pc = 0x80D0C058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C058u)) return;
    // 80D0C058: bl      0x8045C7B4
    {
            ctx->lr = 0x80D0C05Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D0C05C:
    ctx->pc = 0x80D0C05Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C05Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D0C05C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0C060:
    ctx->pc = 0x80D0C060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C060u)) return;
    // 80D0C060: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80D0C064:
    ctx->pc = 0x80D0C064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C064u)) return;
    // 80D0C064: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C068:
    ctx->pc = 0x80D0C068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C068u)) return;
    // 80D0C068: addi    r5, r5, -25384
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25384);

label_80D0C06C:
    ctx->pc = 0x80D0C06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C06Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0C06C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C06Cu)) return;
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
label_80D0C070:
    ctx->pc = 0x80D0C070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C070u)) return;
    // 80D0C070: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C074:
    ctx->pc = 0x80D0C074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C074u)) return;
    // 80D0C074: addi    r5, r5, -25380
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25380);

label_80D0C078:
    ctx->pc = 0x80D0C078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C078u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0C078: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C078u)) return;
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
label_80D0C07C:
    ctx->pc = 0x80D0C07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C07Cu)) return;
    // 80D0C07C: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C080:
    ctx->pc = 0x80D0C080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C080u)) return;
    // 80D0C080: addi    r5, r5, -25376
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25376);

label_80D0C084:
    ctx->pc = 0x80D0C084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C084: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C084u)) return;
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
label_80D0C088:
    ctx->pc = 0x80D0C088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C088u)) return;
    // 80D0C088: bl      0x8045C750
    {
            ctx->lr = 0x80D0C08Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D0C08C:
    ctx->pc = 0x80D0C08Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C08Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D0C08C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C090:
    ctx->pc = 0x80D0C090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C090u)) return;
    // 80D0C090: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_80D0C094:
    ctx->pc = 0x80D0C094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C094u)) return;
    // 80D0C094: li      r5, 6912
    ctx->gpr[5] = (u32)(s32)(6912);

label_80D0C098:
    ctx->pc = 0x80D0C098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C098u)) return;
    // 80D0C098: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80D0C09C:
    ctx->pc = 0x80D0C09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C09Cu)) return;
    // 80D0C09C: addi    r6, r7, -768
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-768);

label_80D0C0A0:
    ctx->pc = 0x80D0C0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C0A0u)) return;
    // 80D0C0A0: addi    r7, r7, -3584
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-3584);

label_80D0C0A4:
    ctx->pc = 0x80D0C0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C0A4u)) return;
    // 80D0C0A4: bl      0x8045C7B4
    {
            ctx->lr = 0x80D0C0A8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D0C0A8:
    ctx->pc = 0x80D0C0A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C0A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C0A8: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80D0C0AC:
    ctx->pc = 0x80D0C0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C0ACu)) return;
    // 80D0C0AC: bl      0x8045F7C8
    {
            ctx->lr = 0x80D0C0B0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D0C0B0:
    ctx->pc = 0x80D0C0B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C0B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D0C0B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C0B4:
    ctx->pc = 0x80D0C0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C0B4u)) return;
    // 80D0C0B4: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80D0C0B8:
    ctx->pc = 0x80D0C0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C0B8u)) return;
    // 80D0C0B8: li      r5, 6912
    ctx->gpr[5] = (u32)(s32)(6912);

label_80D0C0BC:
    ctx->pc = 0x80D0C0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C0BCu)) return;
    // 80D0C0BC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D0C0C0:
    ctx->pc = 0x80D0C0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C0C0u)) return;
    // 80D0C0C0: addi    r6, r6, -768
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-768);

label_80D0C0C4:
    ctx->pc = 0x80D0C0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C0C4u)) return;
    // 80D0C0C4: li      r7, 3840
    ctx->gpr[7] = (u32)(s32)(3840);

label_80D0C0C8:
    ctx->pc = 0x80D0C0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C0C8u)) return;
    // 80D0C0C8: bl      0x8045C7B4
    {
            ctx->lr = 0x80D0C0CCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D0C0CC:
    ctx->pc = 0x80D0C0CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C0CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C0CC: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80D0C0D0:
    ctx->pc = 0x80D0C0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C0D0u)) return;
    // 80D0C0D0: bl      0x8045F7C8
    {
            ctx->lr = 0x80D0C0D4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D0C0D4:
    ctx->pc = 0x80D0C0D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C0D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D0C0D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C0D8:
    ctx->pc = 0x80D0C0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C0D8u)) return;
    // 80D0C0D8: li      r4, 20
    ctx->gpr[4] = (u32)(s32)(20);

label_80D0C0DC:
    ctx->pc = 0x80D0C0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C0DCu)) return;
    // 80D0C0DC: li      r5, 6912
    ctx->gpr[5] = (u32)(s32)(6912);

label_80D0C0E0:
    ctx->pc = 0x80D0C0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C0E0u)) return;
    // 80D0C0E0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D0C0E4:
    ctx->pc = 0x80D0C0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C0E4u)) return;
    // 80D0C0E4: addi    r6, r6, -768
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-768);

label_80D0C0E8:
    ctx->pc = 0x80D0C0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C0E8u)) return;
    // 80D0C0E8: li      r7, 2048
    ctx->gpr[7] = (u32)(s32)(2048);

label_80D0C0EC:
    ctx->pc = 0x80D0C0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C0ECu)) return;
    // 80D0C0EC: bl      0x8045C7B4
    {
            ctx->lr = 0x80D0C0F0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D0C0F0:
    ctx->pc = 0x80D0C0F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C0F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C0F0: bl      0x8045F32C
    {
            ctx->lr = 0x80D0C0F4u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80D0C0F4:
    ctx->pc = 0x80D0C0F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C0F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C0F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C0F8:
    ctx->pc = 0x80D0C0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C0F8u)) return;
    // 80D0C0F8: bl      0x8045F220
    {
            ctx->lr = 0x80D0C0FCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C0FC:
    ctx->pc = 0x80D0C0FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C0FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C0FC: bl      0x8045E760
    {
            ctx->lr = 0x80D0C100u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D0C100:
    ctx->pc = 0x80D0C100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C100: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C104:
    ctx->pc = 0x80D0C104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C104u)) return;
    // 80D0C104: bl      0x8045F220
    {
            ctx->lr = 0x80D0C108u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C108:
    ctx->pc = 0x80D0C108u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C108u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D0C108: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C10C:
    ctx->pc = 0x80D0C10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C10Cu)) return;
    // 80D0C10C: addi    r4, r4, -23664
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23664);

label_80D0C110:
    ctx->pc = 0x80D0C110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C110u)) return;
    // 80D0C110: bl      0x8045C060
    {
            ctx->lr = 0x80D0C114u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D0C114:
    ctx->pc = 0x80D0C114u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C114u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C114: li      r3, 1452
    ctx->gpr[3] = (u32)(s32)(1452);

label_80D0C118:
    ctx->pc = 0x80D0C118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C118u)) return;
    // 80D0C118: bl      0x8045BFA0
    {
            ctx->lr = 0x80D0C11Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D0C11C:
    ctx->pc = 0x80D0C11Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C11Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D0C11C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D0C120:
    ctx->pc = 0x80D0C120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C120u)) return;
    // 80D0C120: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D0C124:
    ctx->pc = 0x80D0C124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C124u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0C124: lwz     r0, 0(r3)
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
label_80D0C128:
    ctx->pc = 0x80D0C128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C128u)) return;
    // 80D0C128: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D0C12C:
    ctx->pc = 0x80D0C12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C12Cu)) return;
    // 80D0C12C: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C130:
    ctx->pc = 0x80D0C130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C130u)) return;
    // 80D0C130: addi    r3, r3, -23708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23708);

label_80D0C134:
    ctx->pc = 0x80D0C134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0C134: lwzx    r3, r3, r0
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
label_80D0C138:
    ctx->pc = 0x80D0C138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C138: lwz     r3, 4(r3)
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
label_80D0C13C:
    ctx->pc = 0x80D0C13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C13Cu)) return;
    // 80D0C13C: bl      0x8045F6FC
    {
            ctx->lr = 0x80D0C140u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D0C140:
    ctx->pc = 0x80D0C140u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C140u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C140: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80D0C144:
    ctx->pc = 0x80D0C144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C144u)) return;
    // 80D0C144: bl      0x8045F7C8
    {
            ctx->lr = 0x80D0C148u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D0C148:
    ctx->pc = 0x80D0C148u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C148u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C148: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C14C:
    ctx->pc = 0x80D0C14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C14Cu)) return;
    // 80D0C14C: bl      0x8045F220
    {
            ctx->lr = 0x80D0C150u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C150:
    ctx->pc = 0x80D0C150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D0C150: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C154:
    ctx->pc = 0x80D0C154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C154u)) return;
    // 80D0C154: addi    r4, r4, -23660
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23660);

label_80D0C158:
    ctx->pc = 0x80D0C158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C158u)) return;
    // 80D0C158: bl      0x8045C060
    {
            ctx->lr = 0x80D0C15Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D0C15C:
    ctx->pc = 0x80D0C15Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C15Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C15C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0C160:
    ctx->pc = 0x80D0C160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C160u)) return;
    // 80D0C160: bl      0x8045F7C8
    {
            ctx->lr = 0x80D0C164u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D0C164:
    ctx->pc = 0x80D0C164u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C164u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C164: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D0C168:
    ctx->pc = 0x80D0C168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C168u)) return;
    // 80D0C168: bl      0x8045F220
    {
            ctx->lr = 0x80D0C16Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C16C:
    ctx->pc = 0x80D0C16Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C16Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D0C16C: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C170:
    ctx->pc = 0x80D0C170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C170u)) return;
    // 80D0C170: addi    r4, r4, -23652
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23652);

label_80D0C174:
    ctx->pc = 0x80D0C174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C174u)) return;
    // 80D0C174: bl      0x8045C060
    {
            ctx->lr = 0x80D0C178u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D0C178:
    ctx->pc = 0x80D0C178u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C178u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C178: bl      0x8045BFF4
    {
            ctx->lr = 0x80D0C17Cu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D0C17C:
    ctx->pc = 0x80D0C17Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C17Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D0C17C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0C180:
    ctx->pc = 0x80D0C180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C180u)) return;
    // 80D0C180: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80D0C184:
    ctx->pc = 0x80D0C184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C184u)) return;
    // 80D0C184: li      r5, 27307
    ctx->gpr[5] = (u32)(s32)(27307);

label_80D0C188:
    ctx->pc = 0x80D0C188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C188u)) return;
    // 80D0C188: bl      0x8045C0F8
    {
            ctx->lr = 0x80D0C18Cu;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80D0C18C:
    ctx->pc = 0x80D0C18Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C18Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D0C18C: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C190:
    ctx->pc = 0x80D0C190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C190u)) return;
    // 80D0C190: addi    r3, r3, -25372
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25372);

label_80D0C194:
    ctx->pc = 0x80D0C194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D0C194: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D0C194u)) return;
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
label_80D0C198:
    ctx->pc = 0x80D0C198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C198u)) return;
    // 80D0C198: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C19C:
    ctx->pc = 0x80D0C19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C19Cu)) return;
    // 80D0C19C: addi    r3, r3, -25368
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25368);

label_80D0C1A0:
    ctx->pc = 0x80D0C1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0C1A0: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D0C1A0u)) return;
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
label_80D0C1A4:
    ctx->pc = 0x80D0C1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1A4u)) return;
    // 80D0C1A4: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C1A8:
    ctx->pc = 0x80D0C1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1A8u)) return;
    // 80D0C1A8: addi    r3, r3, -25456
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25456);

label_80D0C1AC:
    ctx->pc = 0x80D0C1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0C1AC: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D0C1ACu)) return;
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
label_80D0C1B0:
    ctx->pc = 0x80D0C1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1B0u)) return;
    // 80D0C1B0: fmr    f4, f3
    if (!ppc_fp_available_inline(ctx, 0x80D0C1B0u)) return;
    ctx->fpr[4] = ctx->fpr[3];

label_80D0C1B4:
    ctx->pc = 0x80D0C1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1B4u)) return;
    // 80D0C1B4: fmr    f5, f3
    if (!ppc_fp_available_inline(ctx, 0x80D0C1B4u)) return;
    ctx->fpr[5] = ctx->fpr[3];

label_80D0C1B8:
    ctx->pc = 0x80D0C1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1B8u)) return;
    // 80D0C1B8: bl      0x80D0CA28
    {
            ctx->lr = 0x80D0C1BCu;
            goto label_80D0CA28;
    }

label_80D0C1BC:
    ctx->pc = 0x80D0C1BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C1BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D0C1BC: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C1C0:
    ctx->pc = 0x80D0C1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1C0u)) return;
    // 80D0C1C0: addi    r4, r4, 1892
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1892);

label_80D0C1C4:
    ctx->pc = 0x80D0C1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0C1C4: stw     r3, 0(r4)
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
label_80D0C1C8:
    ctx->pc = 0x80D0C1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1C8u)) return;
    // 80D0C1C8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0C1CC:
    ctx->pc = 0x80D0C1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1CCu)) return;
    // 80D0C1CC: bl      0x8045F7C8
    {
            ctx->lr = 0x80D0C1D0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D0C1D0:
    ctx->pc = 0x80D0C1D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C1D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D0C1D0: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C1D4:
    ctx->pc = 0x80D0C1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1D4u)) return;
    // 80D0C1D4: addi    r3, r3, 1892
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1892);

label_80D0C1D8:
    ctx->pc = 0x80D0C1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0C1D8: lwz     r3, 0(r3)
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
label_80D0C1DC:
    ctx->pc = 0x80D0C1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1DCu)) return;
    // 80D0C1DC: cmplwi  r3, 0x0000
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

label_80D0C1E0:
    ctx->pc = 0x80D0C1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1E0u)) return;
    // 80D0C1E0: bc    12, 2, 0x80D0C1F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D0C1F4;
        }
    }

label_80D0C1E4:
    ctx->pc = 0x80D0C1E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C1E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D0C1E4: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C1E8:
    ctx->pc = 0x80D0C1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1E8u)) return;
    // 80D0C1E8: addi    r4, r4, -25424
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25424);

label_80D0C1EC:
    ctx->pc = 0x80D0C1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C1EC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0C1ECu)) return;
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
label_80D0C1F0:
    ctx->pc = 0x80D0C1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1F0u)) return;
    // 80D0C1F0: bl      0x80D0CAE4
    {
            ctx->lr = 0x80D0C1F4u;
            goto label_80D0CAE4;
    }

label_80D0C1F4:
    ctx->pc = 0x80D0C1F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C1F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D0C1F4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0C1F8:
    ctx->pc = 0x80D0C1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1F8u)) return;
    // 80D0C1F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D0C1FC:
    ctx->pc = 0x80D0C1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C1FCu)) return;
    // 80D0C1FC: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C200:
    ctx->pc = 0x80D0C200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C200u)) return;
    // 80D0C200: addi    r5, r5, -25364
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25364);

label_80D0C204:
    ctx->pc = 0x80D0C204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0C204: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C204u)) return;
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
label_80D0C208:
    ctx->pc = 0x80D0C208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C208u)) return;
    // 80D0C208: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C20C:
    ctx->pc = 0x80D0C20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C20Cu)) return;
    // 80D0C20C: addi    r5, r5, -25360
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25360);

label_80D0C210:
    ctx->pc = 0x80D0C210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0C210: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C210u)) return;
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
label_80D0C214:
    ctx->pc = 0x80D0C214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C214u)) return;
    // 80D0C214: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C218:
    ctx->pc = 0x80D0C218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C218u)) return;
    // 80D0C218: addi    r5, r5, -25356
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25356);

label_80D0C21C:
    ctx->pc = 0x80D0C21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C21Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C21C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C21Cu)) return;
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
label_80D0C220:
    ctx->pc = 0x80D0C220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C220u)) return;
    // 80D0C220: bl      0x8045C750
    {
            ctx->lr = 0x80D0C224u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D0C224:
    ctx->pc = 0x80D0C224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D0C224: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0C228:
    ctx->pc = 0x80D0C228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C228u)) return;
    // 80D0C228: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D0C22C:
    ctx->pc = 0x80D0C22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C22Cu)) return;
    // 80D0C22C: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_80D0C230:
    ctx->pc = 0x80D0C230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C230u)) return;
    // 80D0C230: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D0C234:
    ctx->pc = 0x80D0C234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C234u)) return;
    // 80D0C234: addi    r6, r6, -31232
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-31232);

label_80D0C238:
    ctx->pc = 0x80D0C238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C238u)) return;
    // 80D0C238: li      r7, 256
    ctx->gpr[7] = (u32)(s32)(256);

label_80D0C23C:
    ctx->pc = 0x80D0C23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C23Cu)) return;
    // 80D0C23C: bl      0x8045C7B4
    {
            ctx->lr = 0x80D0C240u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D0C240:
    ctx->pc = 0x80D0C240u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C240u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D0C240: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C244:
    ctx->pc = 0x80D0C244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C244u)) return;
    // 80D0C244: li      r4, 80
    ctx->gpr[4] = (u32)(s32)(80);

label_80D0C248:
    ctx->pc = 0x80D0C248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C248u)) return;
    // 80D0C248: li      r5, 12561
    ctx->gpr[5] = (u32)(s32)(12561);

label_80D0C24C:
    ctx->pc = 0x80D0C24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C24Cu)) return;
    // 80D0C24C: bl      0x8045C0F8
    {
            ctx->lr = 0x80D0C250u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80D0C250:
    ctx->pc = 0x80D0C250u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C250u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D0C250: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C254:
    ctx->pc = 0x80D0C254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C254u)) return;
    // 80D0C254: addi    r3, r3, 1892
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1892);

label_80D0C258:
    ctx->pc = 0x80D0C258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C258u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0C258: lwz     r3, 0(r3)
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
label_80D0C25C:
    ctx->pc = 0x80D0C25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C25Cu)) return;
    // 80D0C25C: cmplwi  r3, 0x0000
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

label_80D0C260:
    ctx->pc = 0x80D0C260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C260u)) return;
    // 80D0C260: bc    12, 2, 0x80D0C274
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D0C274;
        }
    }

label_80D0C264:
    ctx->pc = 0x80D0C264u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C264u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D0C264: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C268:
    ctx->pc = 0x80D0C268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C268u)) return;
    // 80D0C268: addi    r4, r4, -25352
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25352);

label_80D0C26C:
    ctx->pc = 0x80D0C26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C26Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C26C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0C26Cu)) return;
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
label_80D0C270:
    ctx->pc = 0x80D0C270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C270u)) return;
    // 80D0C270: bl      0x80D0CAE4
    {
            ctx->lr = 0x80D0C274u;
            goto label_80D0CAE4;
    }

label_80D0C274:
    ctx->pc = 0x80D0C274u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C274u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C274: li      r3, 83
    ctx->gpr[3] = (u32)(s32)(83);

label_80D0C278:
    ctx->pc = 0x80D0C278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C278u)) return;
    // 80D0C278: bl      0x8045F7C8
    {
            ctx->lr = 0x80D0C27Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D0C27C:
    ctx->pc = 0x80D0C27Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C27Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C27C: li      r3, 1453
    ctx->gpr[3] = (u32)(s32)(1453);

label_80D0C280:
    ctx->pc = 0x80D0C280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C280u)) return;
    // 80D0C280: bl      0x8045BFA0
    {
            ctx->lr = 0x80D0C284u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D0C284:
    ctx->pc = 0x80D0C284u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C284u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C284: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D0C288:
    ctx->pc = 0x80D0C288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C288u)) return;
    // 80D0C288: bl      0x8045F220
    {
            ctx->lr = 0x80D0C28Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C28C:
    ctx->pc = 0x80D0C28Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C28Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C28C: bl      0x8045C034
    {
            ctx->lr = 0x80D0C290u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D0C290:
    ctx->pc = 0x80D0C290u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C290u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C290: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D0C294:
    ctx->pc = 0x80D0C294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C294u)) return;
    // 80D0C294: bl      0x8045F220
    {
            ctx->lr = 0x80D0C298u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C298:
    ctx->pc = 0x80D0C298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D0C298: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C29C:
    ctx->pc = 0x80D0C29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C29Cu)) return;
    // 80D0C29C: addi    r4, r4, -23640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23640);

label_80D0C2A0:
    ctx->pc = 0x80D0C2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C2A0u)) return;
    // 80D0C2A0: bl      0x8045C060
    {
            ctx->lr = 0x80D0C2A4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D0C2A4:
    ctx->pc = 0x80D0C2A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C2A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D0C2A4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D0C2A8:
    ctx->pc = 0x80D0C2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C2A8u)) return;
    // 80D0C2A8: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D0C2AC:
    ctx->pc = 0x80D0C2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C2ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0C2AC: lwz     r0, 0(r3)
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
label_80D0C2B0:
    ctx->pc = 0x80D0C2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C2B0u)) return;
    // 80D0C2B0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D0C2B4:
    ctx->pc = 0x80D0C2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C2B4u)) return;
    // 80D0C2B4: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C2B8:
    ctx->pc = 0x80D0C2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C2B8u)) return;
    // 80D0C2B8: addi    r3, r3, -23708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23708);

label_80D0C2BC:
    ctx->pc = 0x80D0C2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C2BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0C2BC: lwzx    r3, r3, r0
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
label_80D0C2C0:
    ctx->pc = 0x80D0C2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C2C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C2C0: lwz     r3, 8(r3)
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
label_80D0C2C4:
    ctx->pc = 0x80D0C2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C2C4u)) return;
    // 80D0C2C4: bl      0x8045F6FC
    {
            ctx->lr = 0x80D0C2C8u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D0C2C8:
    ctx->pc = 0x80D0C2C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C2C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C2C8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0C2CC:
    ctx->pc = 0x80D0C2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C2CCu)) return;
    // 80D0C2CC: bl      0x8045F7C8
    {
            ctx->lr = 0x80D0C2D0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D0C2D0:
    ctx->pc = 0x80D0C2D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C2D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C2D0: bl      0x8045BFF4
    {
            ctx->lr = 0x80D0C2D4u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D0C2D4:
    ctx->pc = 0x80D0C2D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C2D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C2D4: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80D0C2D8:
    ctx->pc = 0x80D0C2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C2D8u)) return;
    // 80D0C2D8: bl      0x8045F7C8
    {
            ctx->lr = 0x80D0C2DCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D0C2DC:
    ctx->pc = 0x80D0C2DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C2DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C2DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C2E0:
    ctx->pc = 0x80D0C2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C2E0u)) return;
    // 80D0C2E0: bl      0x8045F220
    {
            ctx->lr = 0x80D0C2E4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C2E4:
    ctx->pc = 0x80D0C2E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C2E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C2E4: bl      0x8045EB8C
    {
            ctx->lr = 0x80D0C2E8u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80D0C2E8:
    ctx->pc = 0x80D0C2E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C2E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C2E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C2EC:
    ctx->pc = 0x80D0C2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C2ECu)) return;
    // 80D0C2EC: bl      0x8045F220
    {
            ctx->lr = 0x80D0C2F0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C2F0:
    ctx->pc = 0x80D0C2F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C2F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D0C2F0: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80D0C2F4:
    ctx->pc = 0x80D0C2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C2F4u)) return;
    // 80D0C2F4: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80D0C2F8:
    ctx->pc = 0x80D0C2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C2F8u)) return;
    // 80D0C2F8: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D0C2FC:
    ctx->pc = 0x80D0C2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C2FCu)) return;
    // 80D0C2FC: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D0C300:
    ctx->pc = 0x80D0C300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C300u)) return;
    // 80D0C300: lis     r6, -27348
    ctx->gpr[6] = ((u32)(s32)(-27348) << 16);

label_80D0C304:
    ctx->pc = 0x80D0C304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C304u)) return;
    // 80D0C304: addi    r6, r6, -25456
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25456);

label_80D0C308:
    ctx->pc = 0x80D0C308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0C308: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D0C308u)) return;
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
label_80D0C30C:
    ctx->pc = 0x80D0C30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C30Cu)) return;
    // 80D0C30C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D0C310:
    ctx->pc = 0x80D0C310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C310u)) return;
    // 80D0C310: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D0C314:
    ctx->pc = 0x80D0C314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C314u)) return;
    // 80D0C314: bl      0x8045EBE4
    {
            ctx->lr = 0x80D0C318u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D0C318:
    ctx->pc = 0x80D0C318u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D0C318: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0C31C:
    ctx->pc = 0x80D0C31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C31Cu)) return;
    // 80D0C31C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D0C320:
    ctx->pc = 0x80D0C320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C320u)) return;
    // 80D0C320: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C324:
    ctx->pc = 0x80D0C324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C324u)) return;
    // 80D0C324: addi    r5, r5, -25348
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25348);

label_80D0C328:
    ctx->pc = 0x80D0C328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0C328: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C328u)) return;
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
label_80D0C32C:
    ctx->pc = 0x80D0C32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C32Cu)) return;
    // 80D0C32C: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C330:
    ctx->pc = 0x80D0C330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C330u)) return;
    // 80D0C330: addi    r5, r5, -25344
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25344);

label_80D0C334:
    ctx->pc = 0x80D0C334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0C334: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C334u)) return;
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
label_80D0C338:
    ctx->pc = 0x80D0C338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C338u)) return;
    // 80D0C338: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C33C:
    ctx->pc = 0x80D0C33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C33Cu)) return;
    // 80D0C33C: addi    r5, r5, -25340
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25340);

label_80D0C340:
    ctx->pc = 0x80D0C340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C340: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C340u)) return;
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
label_80D0C344:
    ctx->pc = 0x80D0C344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C344u)) return;
    // 80D0C344: bl      0x8045C750
    {
            ctx->lr = 0x80D0C348u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D0C348:
    ctx->pc = 0x80D0C348u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D0C348: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0C34C:
    ctx->pc = 0x80D0C34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C34Cu)) return;
    // 80D0C34C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D0C350:
    ctx->pc = 0x80D0C350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C350u)) return;
    // 80D0C350: li      r5, 4352
    ctx->gpr[5] = (u32)(s32)(4352);

label_80D0C354:
    ctx->pc = 0x80D0C354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C354u)) return;
    // 80D0C354: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D0C358:
    ctx->pc = 0x80D0C358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C358u)) return;
    // 80D0C358: addi    r6, r6, -1536
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1536);

label_80D0C35C:
    ctx->pc = 0x80D0C35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C35Cu)) return;
    // 80D0C35C: li      r7, 768
    ctx->gpr[7] = (u32)(s32)(768);

label_80D0C360:
    ctx->pc = 0x80D0C360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C360u)) return;
    // 80D0C360: bl      0x8045C7B4
    {
            ctx->lr = 0x80D0C364u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D0C364:
    ctx->pc = 0x80D0C364u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C364u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D0C364: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C368:
    ctx->pc = 0x80D0C368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C368u)) return;
    // 80D0C368: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80D0C36C:
    ctx->pc = 0x80D0C36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C36Cu)) return;
    // 80D0C36C: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C370:
    ctx->pc = 0x80D0C370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C370u)) return;
    // 80D0C370: addi    r5, r5, -25336
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25336);

label_80D0C374:
    ctx->pc = 0x80D0C374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0C374: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C374u)) return;
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
label_80D0C378:
    ctx->pc = 0x80D0C378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C378u)) return;
    // 80D0C378: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C37C:
    ctx->pc = 0x80D0C37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C37Cu)) return;
    // 80D0C37C: addi    r5, r5, -25332
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25332);

label_80D0C380:
    ctx->pc = 0x80D0C380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0C380: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C380u)) return;
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
label_80D0C384:
    ctx->pc = 0x80D0C384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C384u)) return;
    // 80D0C384: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C388:
    ctx->pc = 0x80D0C388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C388u)) return;
    // 80D0C388: addi    r5, r5, -25328
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25328);

label_80D0C38C:
    ctx->pc = 0x80D0C38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C38Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C38C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C38Cu)) return;
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
label_80D0C390:
    ctx->pc = 0x80D0C390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C390u)) return;
    // 80D0C390: bl      0x8045C750
    {
            ctx->lr = 0x80D0C394u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D0C394:
    ctx->pc = 0x80D0C394u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C394u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D0C394: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C398:
    ctx->pc = 0x80D0C398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C398u)) return;
    // 80D0C398: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80D0C39C:
    ctx->pc = 0x80D0C39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C39Cu)) return;
    // 80D0C39C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D0C3A0:
    ctx->pc = 0x80D0C3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C3A0u)) return;
    // 80D0C3A0: addi    r5, r6, -1280
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-1280);

label_80D0C3A4:
    ctx->pc = 0x80D0C3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C3A4u)) return;
    // 80D0C3A4: addi    r6, r6, -5888
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-5888);

label_80D0C3A8:
    ctx->pc = 0x80D0C3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C3A8u)) return;
    // 80D0C3A8: li      r7, 768
    ctx->gpr[7] = (u32)(s32)(768);

label_80D0C3AC:
    ctx->pc = 0x80D0C3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C3ACu)) return;
    // 80D0C3AC: bl      0x8045C7B4
    {
            ctx->lr = 0x80D0C3B0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D0C3B0:
    ctx->pc = 0x80D0C3B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C3B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C3B0: li      r3, 1455
    ctx->gpr[3] = (u32)(s32)(1455);

label_80D0C3B4:
    ctx->pc = 0x80D0C3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C3B4u)) return;
    // 80D0C3B4: bl      0x8045BFA0
    {
            ctx->lr = 0x80D0C3B8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D0C3B8:
    ctx->pc = 0x80D0C3B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C3B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C3B8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D0C3BC:
    ctx->pc = 0x80D0C3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C3BCu)) return;
    // 80D0C3BC: bl      0x8045F220
    {
            ctx->lr = 0x80D0C3C0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C3C0:
    ctx->pc = 0x80D0C3C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C3C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D0C3C0: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C3C4:
    ctx->pc = 0x80D0C3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C3C4u)) return;
    // 80D0C3C4: addi    r4, r4, -23636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23636);

label_80D0C3C8:
    ctx->pc = 0x80D0C3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C3C8u)) return;
    // 80D0C3C8: bl      0x8045C060
    {
            ctx->lr = 0x80D0C3CCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D0C3CC:
    ctx->pc = 0x80D0C3CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C3CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D0C3CC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D0C3D0:
    ctx->pc = 0x80D0C3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C3D0u)) return;
    // 80D0C3D0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D0C3D4:
    ctx->pc = 0x80D0C3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C3D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0C3D4: lwz     r0, 0(r3)
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
label_80D0C3D8:
    ctx->pc = 0x80D0C3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C3D8u)) return;
    // 80D0C3D8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D0C3DC:
    ctx->pc = 0x80D0C3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C3DCu)) return;
    // 80D0C3DC: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C3E0:
    ctx->pc = 0x80D0C3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C3E0u)) return;
    // 80D0C3E0: addi    r3, r3, -23708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23708);

label_80D0C3E4:
    ctx->pc = 0x80D0C3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C3E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0C3E4: lwzx    r3, r3, r0
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
label_80D0C3E8:
    ctx->pc = 0x80D0C3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C3E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C3E8: lwz     r3, 12(r3)
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
label_80D0C3EC:
    ctx->pc = 0x80D0C3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C3ECu)) return;
    // 80D0C3EC: bl      0x8045F6FC
    {
            ctx->lr = 0x80D0C3F0u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D0C3F0:
    ctx->pc = 0x80D0C3F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C3F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C3F0: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80D0C3F4:
    ctx->pc = 0x80D0C3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C3F4u)) return;
    // 80D0C3F4: bl      0x8045F7C8
    {
            ctx->lr = 0x80D0C3F8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D0C3F8:
    ctx->pc = 0x80D0C3F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C3F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C3F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C3FC:
    ctx->pc = 0x80D0C3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C3FCu)) return;
    // 80D0C3FC: bl      0x8045F220
    {
            ctx->lr = 0x80D0C400u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C400:
    ctx->pc = 0x80D0C400u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C400u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D0C400: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C404:
    ctx->pc = 0x80D0C404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C404u)) return;
    // 80D0C404: addi    r4, r4, -25324
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25324);

label_80D0C408:
    ctx->pc = 0x80D0C408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0C408: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0C408u)) return;
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
label_80D0C40C:
    ctx->pc = 0x80D0C40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C40Cu)) return;
    // 80D0C40C: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C410:
    ctx->pc = 0x80D0C410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C410u)) return;
    // 80D0C410: addi    r4, r4, -25432
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25432);

label_80D0C414:
    ctx->pc = 0x80D0C414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0C414: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0C414u)) return;
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
label_80D0C418:
    ctx->pc = 0x80D0C418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C418u)) return;
    // 80D0C418: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C41C:
    ctx->pc = 0x80D0C41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C41Cu)) return;
    // 80D0C41C: addi    r4, r4, -25320
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25320);

label_80D0C420:
    ctx->pc = 0x80D0C420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C420: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0C420u)) return;
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
label_80D0C424:
    ctx->pc = 0x80D0C424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C424u)) return;
    // 80D0C424: bl      0x8045E70C
    {
            ctx->lr = 0x80D0C428u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D0C428:
    ctx->pc = 0x80D0C428u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C428u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C428: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80D0C42C:
    ctx->pc = 0x80D0C42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C42Cu)) return;
    // 80D0C42C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D0C430u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D0C430:
    ctx->pc = 0x80D0C430u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C430u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C430: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C434:
    ctx->pc = 0x80D0C434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C434u)) return;
    // 80D0C434: bl      0x8045F220
    {
            ctx->lr = 0x80D0C438u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C438:
    ctx->pc = 0x80D0C438u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C438u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D0C438: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C43C:
    ctx->pc = 0x80D0C43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C43Cu)) return;
    // 80D0C43C: addi    r4, r4, -25316
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25316);

label_80D0C440:
    ctx->pc = 0x80D0C440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0C440: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0C440u)) return;
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
label_80D0C444:
    ctx->pc = 0x80D0C444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C444u)) return;
    // 80D0C444: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C448:
    ctx->pc = 0x80D0C448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C448u)) return;
    // 80D0C448: addi    r4, r4, -25432
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25432);

label_80D0C44C:
    ctx->pc = 0x80D0C44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C44Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0C44C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0C44Cu)) return;
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
label_80D0C450:
    ctx->pc = 0x80D0C450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C450u)) return;
    // 80D0C450: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C454:
    ctx->pc = 0x80D0C454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C454u)) return;
    // 80D0C454: addi    r4, r4, -25312
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25312);

label_80D0C458:
    ctx->pc = 0x80D0C458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C458: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0C458u)) return;
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
label_80D0C45C:
    ctx->pc = 0x80D0C45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C45Cu)) return;
    // 80D0C45C: bl      0x8045E70C
    {
            ctx->lr = 0x80D0C460u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D0C460:
    ctx->pc = 0x80D0C460u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C460u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C460: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_80D0C464:
    ctx->pc = 0x80D0C464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C464u)) return;
    // 80D0C464: bl      0x8045F7C8
    {
            ctx->lr = 0x80D0C468u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D0C468:
    ctx->pc = 0x80D0C468u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C468u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C468: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C46C:
    ctx->pc = 0x80D0C46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C46Cu)) return;
    // 80D0C46C: bl      0x8045F220
    {
            ctx->lr = 0x80D0C470u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C470:
    ctx->pc = 0x80D0C470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D0C470: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C474:
    ctx->pc = 0x80D0C474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C474u)) return;
    // 80D0C474: addi    r4, r4, -25324
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25324);

label_80D0C478:
    ctx->pc = 0x80D0C478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0C478: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0C478u)) return;
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
label_80D0C47C:
    ctx->pc = 0x80D0C47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C47Cu)) return;
    // 80D0C47C: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C480:
    ctx->pc = 0x80D0C480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C480u)) return;
    // 80D0C480: addi    r4, r4, -25432
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25432);

label_80D0C484:
    ctx->pc = 0x80D0C484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0C484: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0C484u)) return;
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
label_80D0C488:
    ctx->pc = 0x80D0C488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C488u)) return;
    // 80D0C488: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C48C:
    ctx->pc = 0x80D0C48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C48Cu)) return;
    // 80D0C48C: addi    r4, r4, -25320
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25320);

label_80D0C490:
    ctx->pc = 0x80D0C490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C490: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0C490u)) return;
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
label_80D0C494:
    ctx->pc = 0x80D0C494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C494u)) return;
    // 80D0C494: bl      0x8045E70C
    {
            ctx->lr = 0x80D0C498u;
            ctx->pc = 0x8045E70Cu;
            return;
    }

label_80D0C498:
    ctx->pc = 0x80D0C498u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C498u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C498: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80D0C49C:
    ctx->pc = 0x80D0C49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C49Cu)) return;
    // 80D0C49C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D0C4A0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D0C4A0:
    ctx->pc = 0x80D0C4A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C4A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C4A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C4A4:
    ctx->pc = 0x80D0C4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C4A4u)) return;
    // 80D0C4A4: bl      0x8045F220
    {
            ctx->lr = 0x80D0C4A8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C4A8:
    ctx->pc = 0x80D0C4A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C4A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D0C4A8: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80D0C4AC:
    ctx->pc = 0x80D0C4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C4ACu)) return;
    // 80D0C4AC: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80D0C4B0:
    ctx->pc = 0x80D0C4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C4B0u)) return;
    // 80D0C4B0: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D0C4B4:
    ctx->pc = 0x80D0C4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C4B4u)) return;
    // 80D0C4B4: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D0C4B8:
    ctx->pc = 0x80D0C4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C4B8u)) return;
    // 80D0C4B8: lis     r6, -27348
    ctx->gpr[6] = ((u32)(s32)(-27348) << 16);

label_80D0C4BC:
    ctx->pc = 0x80D0C4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C4BCu)) return;
    // 80D0C4BC: addi    r6, r6, -25456
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25456);

label_80D0C4C0:
    ctx->pc = 0x80D0C4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C4C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0C4C0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D0C4C0u)) return;
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
label_80D0C4C4:
    ctx->pc = 0x80D0C4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C4C4u)) return;
    // 80D0C4C4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D0C4C8:
    ctx->pc = 0x80D0C4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C4C8u)) return;
    // 80D0C4C8: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80D0C4CC:
    ctx->pc = 0x80D0C4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C4CCu)) return;
    // 80D0C4CC: bl      0x8045EBE4
    {
            ctx->lr = 0x80D0C4D0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D0C4D0:
    ctx->pc = 0x80D0C4D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C4D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C4D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C4D4:
    ctx->pc = 0x80D0C4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C4D4u)) return;
    // 80D0C4D4: bl      0x8045F220
    {
            ctx->lr = 0x80D0C4D8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C4D8:
    ctx->pc = 0x80D0C4D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C4D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C4D8: bl      0x8045E760
    {
            ctx->lr = 0x80D0C4DCu;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80D0C4DC:
    ctx->pc = 0x80D0C4DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C4DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C4DC: bl      0x8045BFF4
    {
            ctx->lr = 0x80D0C4E0u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D0C4E0:
    ctx->pc = 0x80D0C4E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C4E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C4E0: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80D0C4E4:
    ctx->pc = 0x80D0C4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C4E4u)) return;
    // 80D0C4E4: bl      0x8045F7C8
    {
            ctx->lr = 0x80D0C4E8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D0C4E8:
    ctx->pc = 0x80D0C4E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C4E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C4E8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D0C4EC:
    ctx->pc = 0x80D0C4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C4ECu)) return;
    // 80D0C4EC: bl      0x8045F220
    {
            ctx->lr = 0x80D0C4F0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C4F0:
    ctx->pc = 0x80D0C4F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C4F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C4F0: bl      0x8045C034
    {
            ctx->lr = 0x80D0C4F4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D0C4F4:
    ctx->pc = 0x80D0C4F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C4F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C4F4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D0C4F8:
    ctx->pc = 0x80D0C4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C4F8u)) return;
    // 80D0C4F8: bl      0x8045F220
    {
            ctx->lr = 0x80D0C4FCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C4FC:
    ctx->pc = 0x80D0C4FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C4FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D0C4FC: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C500:
    ctx->pc = 0x80D0C500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C500u)) return;
    // 80D0C500: addi    r4, r4, -23636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23636);

label_80D0C504:
    ctx->pc = 0x80D0C504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C504u)) return;
    // 80D0C504: bl      0x8045C060
    {
            ctx->lr = 0x80D0C508u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D0C508:
    ctx->pc = 0x80D0C508u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C508u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C508: li      r3, 1454
    ctx->gpr[3] = (u32)(s32)(1454);

label_80D0C50C:
    ctx->pc = 0x80D0C50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C50Cu)) return;
    // 80D0C50C: bl      0x8045BFA0
    {
            ctx->lr = 0x80D0C510u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D0C510:
    ctx->pc = 0x80D0C510u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C510u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D0C510: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D0C514:
    ctx->pc = 0x80D0C514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C514u)) return;
    // 80D0C514: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D0C518:
    ctx->pc = 0x80D0C518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0C518: lwz     r0, 0(r3)
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
label_80D0C51C:
    ctx->pc = 0x80D0C51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C51Cu)) return;
    // 80D0C51C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D0C520:
    ctx->pc = 0x80D0C520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C520u)) return;
    // 80D0C520: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C524:
    ctx->pc = 0x80D0C524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C524u)) return;
    // 80D0C524: addi    r3, r3, -23708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23708);

label_80D0C528:
    ctx->pc = 0x80D0C528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0C528: lwzx    r3, r3, r0
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
label_80D0C52C:
    ctx->pc = 0x80D0C52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C52Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C52C: lwz     r3, 16(r3)
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
label_80D0C530:
    ctx->pc = 0x80D0C530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C530u)) return;
    // 80D0C530: bl      0x8045F6FC
    {
            ctx->lr = 0x80D0C534u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D0C534:
    ctx->pc = 0x80D0C534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C534: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80D0C538:
    ctx->pc = 0x80D0C538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C538u)) return;
    // 80D0C538: bl      0x8045F7C8
    {
            ctx->lr = 0x80D0C53Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D0C53C:
    ctx->pc = 0x80D0C53Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C53Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C53C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D0C540:
    ctx->pc = 0x80D0C540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C540u)) return;
    // 80D0C540: bl      0x8045F220
    {
            ctx->lr = 0x80D0C544u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C544:
    ctx->pc = 0x80D0C544u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C544u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C544: bl      0x8045C034
    {
            ctx->lr = 0x80D0C548u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D0C548:
    ctx->pc = 0x80D0C548u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C548u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D0C548: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0C54C:
    ctx->pc = 0x80D0C54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C54Cu)) return;
    // 80D0C54C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D0C550:
    ctx->pc = 0x80D0C550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C550u)) return;
    // 80D0C550: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C554:
    ctx->pc = 0x80D0C554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C554u)) return;
    // 80D0C554: addi    r5, r5, -25308
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25308);

label_80D0C558:
    ctx->pc = 0x80D0C558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0C558: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C558u)) return;
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
label_80D0C55C:
    ctx->pc = 0x80D0C55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C55Cu)) return;
    // 80D0C55C: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C560:
    ctx->pc = 0x80D0C560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C560u)) return;
    // 80D0C560: addi    r5, r5, -25304
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25304);

label_80D0C564:
    ctx->pc = 0x80D0C564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0C564: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C564u)) return;
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
label_80D0C568:
    ctx->pc = 0x80D0C568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C568u)) return;
    // 80D0C568: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C56C:
    ctx->pc = 0x80D0C56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C56Cu)) return;
    // 80D0C56C: addi    r5, r5, -25300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25300);

label_80D0C570:
    ctx->pc = 0x80D0C570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C570: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C570u)) return;
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
label_80D0C574:
    ctx->pc = 0x80D0C574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C574u)) return;
    // 80D0C574: bl      0x8045C750
    {
            ctx->lr = 0x80D0C578u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D0C578:
    ctx->pc = 0x80D0C578u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C578u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D0C578: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0C57C:
    ctx->pc = 0x80D0C57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C57Cu)) return;
    // 80D0C57C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D0C580:
    ctx->pc = 0x80D0C580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C580u)) return;
    // 80D0C580: li      r5, 1280
    ctx->gpr[5] = (u32)(s32)(1280);

label_80D0C584:
    ctx->pc = 0x80D0C584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C584u)) return;
    // 80D0C584: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D0C588:
    ctx->pc = 0x80D0C588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C588u)) return;
    // 80D0C588: addi    r6, r6, -22784
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22784);

label_80D0C58C:
    ctx->pc = 0x80D0C58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C58Cu)) return;
    // 80D0C58C: li      r7, 768
    ctx->gpr[7] = (u32)(s32)(768);

label_80D0C590:
    ctx->pc = 0x80D0C590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C590u)) return;
    // 80D0C590: bl      0x8045C7B4
    {
            ctx->lr = 0x80D0C594u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D0C594:
    ctx->pc = 0x80D0C594u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C594u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D0C594: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0C598:
    ctx->pc = 0x80D0C598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C598u)) return;
    // 80D0C598: li      r4, 250
    ctx->gpr[4] = (u32)(s32)(250);

label_80D0C59C:
    ctx->pc = 0x80D0C59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C59Cu)) return;
    // 80D0C59C: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C5A0:
    ctx->pc = 0x80D0C5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C5A0u)) return;
    // 80D0C5A0: addi    r5, r5, -25296
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25296);

label_80D0C5A4:
    ctx->pc = 0x80D0C5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C5A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0C5A4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C5A4u)) return;
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
label_80D0C5A8:
    ctx->pc = 0x80D0C5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C5A8u)) return;
    // 80D0C5A8: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C5AC:
    ctx->pc = 0x80D0C5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C5ACu)) return;
    // 80D0C5AC: addi    r5, r5, -25292
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25292);

label_80D0C5B0:
    ctx->pc = 0x80D0C5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C5B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0C5B0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C5B0u)) return;
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
label_80D0C5B4:
    ctx->pc = 0x80D0C5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C5B4u)) return;
    // 80D0C5B4: lis     r5, -27348
    ctx->gpr[5] = ((u32)(s32)(-27348) << 16);

label_80D0C5B8:
    ctx->pc = 0x80D0C5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C5B8u)) return;
    // 80D0C5B8: addi    r5, r5, -25288
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25288);

label_80D0C5BC:
    ctx->pc = 0x80D0C5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C5BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C5BC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C5BCu)) return;
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
label_80D0C5C0:
    ctx->pc = 0x80D0C5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C5C0u)) return;
    // 80D0C5C0: bl      0x8045C750
    {
            ctx->lr = 0x80D0C5C4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D0C5C4:
    ctx->pc = 0x80D0C5C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C5C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D0C5C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0C5C8:
    ctx->pc = 0x80D0C5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C5C8u)) return;
    // 80D0C5C8: li      r4, 250
    ctx->gpr[4] = (u32)(s32)(250);

label_80D0C5CC:
    ctx->pc = 0x80D0C5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C5CCu)) return;
    // 80D0C5CC: li      r5, 1280
    ctx->gpr[5] = (u32)(s32)(1280);

label_80D0C5D0:
    ctx->pc = 0x80D0C5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C5D0u)) return;
    // 80D0C5D0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D0C5D4:
    ctx->pc = 0x80D0C5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C5D4u)) return;
    // 80D0C5D4: addi    r6, r6, -21504
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-21504);

label_80D0C5D8:
    ctx->pc = 0x80D0C5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C5D8u)) return;
    // 80D0C5D8: li      r7, 1792
    ctx->gpr[7] = (u32)(s32)(1792);

label_80D0C5DC:
    ctx->pc = 0x80D0C5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C5DCu)) return;
    // 80D0C5DC: bl      0x8045C7B4
    {
            ctx->lr = 0x80D0C5E0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D0C5E0:
    ctx->pc = 0x80D0C5E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C5E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C5E0: li      r3, 1456
    ctx->gpr[3] = (u32)(s32)(1456);

label_80D0C5E4:
    ctx->pc = 0x80D0C5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C5E4u)) return;
    // 80D0C5E4: bl      0x8045BFA0
    {
            ctx->lr = 0x80D0C5E8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D0C5E8:
    ctx->pc = 0x80D0C5E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C5E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C5E8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D0C5EC:
    ctx->pc = 0x80D0C5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C5ECu)) return;
    // 80D0C5EC: bl      0x8045F220
    {
            ctx->lr = 0x80D0C5F0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C5F0:
    ctx->pc = 0x80D0C5F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C5F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D0C5F0: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C5F4:
    ctx->pc = 0x80D0C5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C5F4u)) return;
    // 80D0C5F4: addi    r4, r4, -23632
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23632);

label_80D0C5F8:
    ctx->pc = 0x80D0C5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C5F8u)) return;
    // 80D0C5F8: bl      0x8045C060
    {
            ctx->lr = 0x80D0C5FCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D0C5FC:
    ctx->pc = 0x80D0C5FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C5FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D0C5FC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D0C600:
    ctx->pc = 0x80D0C600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C600u)) return;
    // 80D0C600: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D0C604:
    ctx->pc = 0x80D0C604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0C604: lwz     r0, 0(r3)
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
label_80D0C608:
    ctx->pc = 0x80D0C608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C608u)) return;
    // 80D0C608: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D0C60C:
    ctx->pc = 0x80D0C60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C60Cu)) return;
    // 80D0C60C: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C610:
    ctx->pc = 0x80D0C610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C610u)) return;
    // 80D0C610: addi    r3, r3, -23708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23708);

label_80D0C614:
    ctx->pc = 0x80D0C614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0C614: lwzx    r3, r3, r0
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
label_80D0C618:
    ctx->pc = 0x80D0C618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C618: lwz     r3, 20(r3)
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
label_80D0C61C:
    ctx->pc = 0x80D0C61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C61Cu)) return;
    // 80D0C61C: bl      0x8045F6FC
    {
            ctx->lr = 0x80D0C620u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D0C620:
    ctx->pc = 0x80D0C620u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C620u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C620: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0C624:
    ctx->pc = 0x80D0C624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C624u)) return;
    // 80D0C624: bl      0x8045F7C8
    {
            ctx->lr = 0x80D0C628u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D0C628:
    ctx->pc = 0x80D0C628u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C628u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C628: bl      0x8045BFF4
    {
            ctx->lr = 0x80D0C62Cu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D0C62C:
    ctx->pc = 0x80D0C62Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C62Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C62C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D0C630:
    ctx->pc = 0x80D0C630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C630u)) return;
    // 80D0C630: bl      0x8045F220
    {
            ctx->lr = 0x80D0C634u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C634:
    ctx->pc = 0x80D0C634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C634: bl      0x8045C034
    {
            ctx->lr = 0x80D0C638u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80D0C638:
    ctx->pc = 0x80D0C638u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C638u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C638: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C63C:
    ctx->pc = 0x80D0C63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C63Cu)) return;
    // 80D0C63C: bl      0x8045F220
    {
            ctx->lr = 0x80D0C640u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C640:
    ctx->pc = 0x80D0C640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D0C640: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C644:
    ctx->pc = 0x80D0C644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C644u)) return;
    // 80D0C644: addi    r4, r4, -16180
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16180);

label_80D0C648:
    ctx->pc = 0x80D0C648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C648u)) return;
    // 80D0C648: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80D0C64C:
    ctx->pc = 0x80D0C64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C64Cu)) return;
    // 80D0C64C: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80D0C650:
    ctx->pc = 0x80D0C650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C650u)) return;
    // 80D0C650: lis     r6, -27348
    ctx->gpr[6] = ((u32)(s32)(-27348) << 16);

label_80D0C654:
    ctx->pc = 0x80D0C654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C654u)) return;
    // 80D0C654: addi    r6, r6, -25372
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25372);

label_80D0C658:
    ctx->pc = 0x80D0C658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0C658: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D0C658u)) return;
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
label_80D0C65C:
    ctx->pc = 0x80D0C65Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C65Cu)) return;
    // 80D0C65C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D0C660:
    ctx->pc = 0x80D0C660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C660u)) return;
    // 80D0C660: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_80D0C664:
    ctx->pc = 0x80D0C664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C664u)) return;
    // 80D0C664: bl      0x8045EBE4
    {
            ctx->lr = 0x80D0C668u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D0C668:
    ctx->pc = 0x80D0C668u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C668u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C668: li      r3, 1457
    ctx->gpr[3] = (u32)(s32)(1457);

label_80D0C66C:
    ctx->pc = 0x80D0C66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C66Cu)) return;
    // 80D0C66C: bl      0x8045BFA0
    {
            ctx->lr = 0x80D0C670u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D0C670:
    ctx->pc = 0x80D0C670u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C670u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D0C670: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D0C674:
    ctx->pc = 0x80D0C674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C674u)) return;
    // 80D0C674: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D0C678:
    ctx->pc = 0x80D0C678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0C678: lwz     r0, 0(r3)
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
label_80D0C67C:
    ctx->pc = 0x80D0C67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C67Cu)) return;
    // 80D0C67C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D0C680:
    ctx->pc = 0x80D0C680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C680u)) return;
    // 80D0C680: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C684:
    ctx->pc = 0x80D0C684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C684u)) return;
    // 80D0C684: addi    r3, r3, -23708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23708);

label_80D0C688:
    ctx->pc = 0x80D0C688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0C688: lwzx    r3, r3, r0
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
label_80D0C68C:
    ctx->pc = 0x80D0C68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C68Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C68C: lwz     r3, 24(r3)
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
label_80D0C690:
    ctx->pc = 0x80D0C690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C690u)) return;
    // 80D0C690: bl      0x8045F6FC
    {
            ctx->lr = 0x80D0C694u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D0C694:
    ctx->pc = 0x80D0C694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C694: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0C698:
    ctx->pc = 0x80D0C698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C698u)) return;
    // 80D0C698: bl      0x8045F7C8
    {
            ctx->lr = 0x80D0C69Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D0C69C:
    ctx->pc = 0x80D0C69Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C69Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C69C: bl      0x8045BFF4
    {
            ctx->lr = 0x80D0C6A0u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D0C6A0:
    ctx->pc = 0x80D0C6A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C6A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C6A0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D0C6A4:
    ctx->pc = 0x80D0C6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C6A4u)) return;
    // 80D0C6A4: bl      0x8045F220
    {
            ctx->lr = 0x80D0C6A8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C6A8:
    ctx->pc = 0x80D0C6A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C6A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D0C6A8: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C6AC:
    ctx->pc = 0x80D0C6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C6ACu)) return;
    // 80D0C6AC: addi    r4, r4, -23628
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23628);

label_80D0C6B0:
    ctx->pc = 0x80D0C6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C6B0u)) return;
    // 80D0C6B0: bl      0x8045C060
    {
            ctx->lr = 0x80D0C6B4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80D0C6B4:
    ctx->pc = 0x80D0C6B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C6B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C6B4: li      r3, 1458
    ctx->gpr[3] = (u32)(s32)(1458);

label_80D0C6B8:
    ctx->pc = 0x80D0C6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C6B8u)) return;
    // 80D0C6B8: bl      0x8045BFA0
    {
            ctx->lr = 0x80D0C6BCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D0C6BC:
    ctx->pc = 0x80D0C6BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C6BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D0C6BC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D0C6C0:
    ctx->pc = 0x80D0C6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C6C0u)) return;
    // 80D0C6C0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D0C6C4:
    ctx->pc = 0x80D0C6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C6C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0C6C4: lwz     r0, 0(r3)
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
label_80D0C6C8:
    ctx->pc = 0x80D0C6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C6C8u)) return;
    // 80D0C6C8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D0C6CC:
    ctx->pc = 0x80D0C6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C6CCu)) return;
    // 80D0C6CC: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C6D0:
    ctx->pc = 0x80D0C6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C6D0u)) return;
    // 80D0C6D0: addi    r3, r3, -23708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23708);

label_80D0C6D4:
    ctx->pc = 0x80D0C6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C6D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0C6D4: lwzx    r3, r3, r0
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
label_80D0C6D8:
    ctx->pc = 0x80D0C6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C6D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C6D8: lwz     r3, 28(r3)
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
label_80D0C6DC:
    ctx->pc = 0x80D0C6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C6DCu)) return;
    // 80D0C6DC: bl      0x8045F6FC
    {
            ctx->lr = 0x80D0C6E0u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D0C6E0:
    ctx->pc = 0x80D0C6E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C6E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C6E0: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80D0C6E4:
    ctx->pc = 0x80D0C6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C6E4u)) return;
    // 80D0C6E4: bl      0x8045F7C8
    {
            ctx->lr = 0x80D0C6E8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D0C6E8:
    ctx->pc = 0x80D0C6E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C6E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C6E8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D0C6EC:
    ctx->pc = 0x80D0C6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C6ECu)) return;
    // 80D0C6EC: bl      0x8045F220
    {
            ctx->lr = 0x80D0C6F0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C6F0:
    ctx->pc = 0x80D0C6F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C6F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D0C6F0: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C6F4:
    ctx->pc = 0x80D0C6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C6F4u)) return;
    // 80D0C6F4: addi    r4, r4, -236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-236);

label_80D0C6F8:
    ctx->pc = 0x80D0C6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C6F8u)) return;
    // 80D0C6F8: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80D0C6FC:
    ctx->pc = 0x80D0C6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C6FCu)) return;
    // 80D0C6FC: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80D0C700:
    ctx->pc = 0x80D0C700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C700u)) return;
    // 80D0C700: lis     r6, -27348
    ctx->gpr[6] = ((u32)(s32)(-27348) << 16);

label_80D0C704:
    ctx->pc = 0x80D0C704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C704u)) return;
    // 80D0C704: addi    r6, r6, -25456
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25456);

label_80D0C708:
    ctx->pc = 0x80D0C708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0C708: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D0C708u)) return;
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
label_80D0C70C:
    ctx->pc = 0x80D0C70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C70Cu)) return;
    // 80D0C70C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D0C710:
    ctx->pc = 0x80D0C710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C710u)) return;
    // 80D0C710: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D0C714:
    ctx->pc = 0x80D0C714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C714u)) return;
    // 80D0C714: bl      0x8045EBE4
    {
            ctx->lr = 0x80D0C718u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D0C718:
    ctx->pc = 0x80D0C718u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C718u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C718: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D0C71C:
    ctx->pc = 0x80D0C71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C71Cu)) return;
    // 80D0C71C: bl      0x8045F220
    {
            ctx->lr = 0x80D0C720u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C720:
    ctx->pc = 0x80D0C720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D0C720: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C724:
    ctx->pc = 0x80D0C724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C724u)) return;
    // 80D0C724: addi    r4, r4, 1864
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1864);

label_80D0C728:
    ctx->pc = 0x80D0C728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C728u)) return;
    // 80D0C728: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80D0C72C:
    ctx->pc = 0x80D0C72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C72Cu)) return;
    // 80D0C72C: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80D0C730:
    ctx->pc = 0x80D0C730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C730u)) return;
    // 80D0C730: lis     r6, -27348
    ctx->gpr[6] = ((u32)(s32)(-27348) << 16);

label_80D0C734:
    ctx->pc = 0x80D0C734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C734u)) return;
    // 80D0C734: addi    r6, r6, -25456
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25456);

label_80D0C738:
    ctx->pc = 0x80D0C738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0C738: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D0C738u)) return;
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
label_80D0C73C:
    ctx->pc = 0x80D0C73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C73Cu)) return;
    // 80D0C73C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D0C740:
    ctx->pc = 0x80D0C740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C740u)) return;
    // 80D0C740: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D0C744:
    ctx->pc = 0x80D0C744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C744u)) return;
    // 80D0C744: bl      0x8045EBE4
    {
            ctx->lr = 0x80D0C748u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D0C748:
    ctx->pc = 0x80D0C748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C748: bl      0x8045BFF4
    {
            ctx->lr = 0x80D0C74Cu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D0C74C:
    ctx->pc = 0x80D0C74Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C74Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C74C: bl      0x8045F32C
    {
            ctx->lr = 0x80D0C750u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80D0C750:
    ctx->pc = 0x80D0C750u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C750u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C750: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C754:
    ctx->pc = 0x80D0C754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C754u)) return;
    // 80D0C754: bl      0x80D0CF88
    {
            ctx->lr = 0x80D0C758u;
            goto label_80D0CF88;
    }

label_80D0C758:
    ctx->pc = 0x80D0C758u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C758u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C758: b       0x80D0C810
    {
            goto label_80D0C810;
    }

label_80D0C75C:
    ctx->pc = 0x80D0C75Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C75Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C75C: bl      0x8045DE34
    {
            ctx->lr = 0x80D0C760u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D0C760:
    ctx->pc = 0x80D0C760u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C760u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C760: bl      0x80460A80
    {
            ctx->lr = 0x80D0C764u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D0C764:
    ctx->pc = 0x80D0C764u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C764u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C764: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C768:
    ctx->pc = 0x80D0C768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C768u)) return;
    // 80D0C768: bl      0x8045F220
    {
            ctx->lr = 0x80D0C76Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C76C:
    ctx->pc = 0x80D0C76Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C76Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D0C76C: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C770:
    ctx->pc = 0x80D0C770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C770u)) return;
    // 80D0C770: addi    r4, r4, -25448
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25448);

label_80D0C774:
    ctx->pc = 0x80D0C774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0C774: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0C774u)) return;
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
label_80D0C778:
    ctx->pc = 0x80D0C778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C778u)) return;
    // 80D0C778: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C77C:
    ctx->pc = 0x80D0C77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C77Cu)) return;
    // 80D0C77C: addi    r4, r4, -25444
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25444);

label_80D0C780:
    ctx->pc = 0x80D0C780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C780u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0C780: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0C780u)) return;
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
label_80D0C784:
    ctx->pc = 0x80D0C784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C784u)) return;
    // 80D0C784: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C788:
    ctx->pc = 0x80D0C788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C788u)) return;
    // 80D0C788: addi    r4, r4, -25440
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25440);

label_80D0C78C:
    ctx->pc = 0x80D0C78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C78Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C78C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0C78Cu)) return;
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
label_80D0C790:
    ctx->pc = 0x80D0C790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C790u)) return;
    // 80D0C790: bl      0x8045EF2C
    {
            ctx->lr = 0x80D0C794u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D0C794:
    ctx->pc = 0x80D0C794u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C794u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C794: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C798:
    ctx->pc = 0x80D0C798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C798u)) return;
    // 80D0C798: bl      0x8045F220
    {
            ctx->lr = 0x80D0C79Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D0C79C:
    ctx->pc = 0x80D0C79Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C79Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D0C79C: li      r4, 2048
    ctx->gpr[4] = (u32)(s32)(2048);

label_80D0C7A0:
    ctx->pc = 0x80D0C7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C7A0u)) return;
    // 80D0C7A0: li      r5, 3328
    ctx->gpr[5] = (u32)(s32)(3328);

label_80D0C7A4:
    ctx->pc = 0x80D0C7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C7A4u)) return;
    // 80D0C7A4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D0C7A8:
    ctx->pc = 0x80D0C7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C7A8u)) return;
    // 80D0C7A8: bl      0x8045EEA8
    {
            ctx->lr = 0x80D0C7ACu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D0C7AC:
    ctx->pc = 0x80D0C7ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C7ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C7AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C7B0:
    ctx->pc = 0x80D0C7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C7B0u)) return;
    // 80D0C7B0: bl      0x8045EC10
    {
            ctx->lr = 0x80D0C7B4u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D0C7B4:
    ctx->pc = 0x80D0C7B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C7B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C7B4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D0C7B8:
    ctx->pc = 0x80D0C7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C7B8u)) return;
    // 80D0C7B8: bl      0x8045ED54
    {
            ctx->lr = 0x80D0C7BCu;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80D0C7BC:
    ctx->pc = 0x80D0C7BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C7BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D0C7BC: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C7C0:
    ctx->pc = 0x80D0C7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C7C0u)) return;
    // 80D0C7C0: addi    r3, r3, 1888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1888);

label_80D0C7C4:
    ctx->pc = 0x80D0C7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C7C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0C7C4: lwz     r3, 0(r3)
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
label_80D0C7C8:
    ctx->pc = 0x80D0C7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C7C8u)) return;
    // 80D0C7C8: cmplwi  r3, 0x0000
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

label_80D0C7CC:
    ctx->pc = 0x80D0C7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C7CCu)) return;
    // 80D0C7CC: bc    12, 2, 0x80D0C7E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D0C7E4;
        }
    }

label_80D0C7D0:
    ctx->pc = 0x80D0C7D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C7D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C7D0: bl      0x8050F9E0
    {
            ctx->lr = 0x80D0C7D4u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D0C7D4:
    ctx->pc = 0x80D0C7D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C7D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D0C7D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D0C7D8:
    ctx->pc = 0x80D0C7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C7D8u)) return;
    // 80D0C7D8: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C7DC:
    ctx->pc = 0x80D0C7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C7DCu)) return;
    // 80D0C7DC: addi    r3, r3, 1888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1888);

label_80D0C7E0:
    ctx->pc = 0x80D0C7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C7E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D0C7E0: stw     r0, 0(r3)
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
label_80D0C7E4:
    ctx->pc = 0x80D0C7E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C7E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D0C7E4: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C7E8:
    ctx->pc = 0x80D0C7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C7E8u)) return;
    // 80D0C7E8: addi    r3, r3, 1892
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1892);

label_80D0C7EC:
    ctx->pc = 0x80D0C7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C7ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0C7EC: lwz     r3, 0(r3)
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
label_80D0C7F0:
    ctx->pc = 0x80D0C7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C7F0u)) return;
    // 80D0C7F0: cmplwi  r3, 0x0000
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

label_80D0C7F4:
    ctx->pc = 0x80D0C7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C7F4u)) return;
    // 80D0C7F4: bc    12, 2, 0x80D0C80C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D0C80C;
        }
    }

label_80D0C7F8:
    ctx->pc = 0x80D0C7F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C7F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C7F8: bl      0x8050F9E0
    {
            ctx->lr = 0x80D0C7FCu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D0C7FC:
    ctx->pc = 0x80D0C7FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C7FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D0C7FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D0C800:
    ctx->pc = 0x80D0C800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C800u)) return;
    // 80D0C800: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C804:
    ctx->pc = 0x80D0C804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C804u)) return;
    // 80D0C804: addi    r3, r3, 1892
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1892);

label_80D0C808:
    ctx->pc = 0x80D0C808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D0C808: stw     r0, 0(r3)
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
label_80D0C80C:
    ctx->pc = 0x80D0C80Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C80Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C80C: bl      0x80D0CE6C
    {
            ctx->lr = 0x80D0C810u;
            goto label_80D0CE6C;
    }

label_80D0C810:
    ctx->pc = 0x80D0C810u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C810u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0C810: lwz     r31, 12(r1)
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
label_80D0C814:
    ctx->pc = 0x80D0C814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0C814: lwz     r0, 20(r1)
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
label_80D0C818:
    ctx->pc = 0x80D0C818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0C818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0C818: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0C81C:
    ctx->pc = 0x80D0C81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C81Cu)) return;
    // 80D0C81C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D0C820:
    ctx->pc = 0x80D0C820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C820u)) return;
    // 80D0C820: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0C824:
    ctx->pc = 0x80D0C824u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C824u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0C824: stwu     r1, -64(r1)
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
label_80D0C828:
    ctx->pc = 0x80D0C828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0C828: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0C82C:
    ctx->pc = 0x80D0C82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C82Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0C82C: stw     r0, 68(r1)
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
label_80D0C830:
    ctx->pc = 0x80D0C830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C830u)) return;
    // 80D0C830: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80D0C834:
    ctx->pc = 0x80D0C834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C834u)) return;
    // 80D0C834: bl      0x80006DD4
    {
            ctx->lr = 0x80D0C838u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80D0C838:
    ctx->pc = 0x80D0C838u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C838u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80D0C838: lwz     r27, 32(r3)
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
label_80D0C83C:
    ctx->pc = 0x80D0C83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C83Cu)) return;
    // 80D0C83C: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C840:
    ctx->pc = 0x80D0C840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C840u)) return;
    // 80D0C840: addi    r3, r3, -25280
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25280);

label_80D0C844:
    ctx->pc = 0x80D0C844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80D0C844: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D0C844u)) return;
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
label_80D0C848:
    ctx->pc = 0x80D0C848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80D0C848: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80D0C848u)) return;
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
label_80D0C84C:
    ctx->pc = 0x80D0C84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C84Cu)) return;
    // 80D0C84C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D0C84Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80D0C850:
    ctx->pc = 0x80D0C850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C850u)) return;
    // 80D0C850: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80D0C850u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80D0C854:
    ctx->pc = 0x80D0C854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D0C854: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D0C854u)) return;
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
label_80D0C858:
    ctx->pc = 0x80D0C858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D0C858: lwz     r31, 12(r1)
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
label_80D0C85C:
    ctx->pc = 0x80D0C85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C85Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D0C85C: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80D0C85Cu)) return;
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
label_80D0C860:
    ctx->pc = 0x80D0C860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C860u)) return;
    // 80D0C860: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D0C860u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80D0C864:
    ctx->pc = 0x80D0C864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C864u)) return;
    // 80D0C864: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80D0C864u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80D0C868:
    ctx->pc = 0x80D0C868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D0C868: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D0C868u)) return;
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
label_80D0C86C:
    ctx->pc = 0x80D0C86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C86Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D0C86C: lwz     r30, 20(r1)
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
label_80D0C870:
    ctx->pc = 0x80D0C870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D0C870: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80D0C870u)) return;
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
label_80D0C874:
    ctx->pc = 0x80D0C874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C874u)) return;
    // 80D0C874: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D0C874u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80D0C878:
    ctx->pc = 0x80D0C878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C878u)) return;
    // 80D0C878: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80D0C878u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80D0C87C:
    ctx->pc = 0x80D0C87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C87Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D0C87C: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D0C87Cu)) return;
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
label_80D0C880:
    ctx->pc = 0x80D0C880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D0C880: lwz     r29, 28(r1)
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
label_80D0C884:
    ctx->pc = 0x80D0C884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D0C884: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80D0C884u)) return;
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
label_80D0C888:
    ctx->pc = 0x80D0C888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C888u)) return;
    // 80D0C888: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D0C888u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80D0C88C:
    ctx->pc = 0x80D0C88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C88Cu)) return;
    // 80D0C88C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80D0C88Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80D0C890:
    ctx->pc = 0x80D0C890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0C890: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D0C890u)) return;
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
label_80D0C894:
    ctx->pc = 0x80D0C894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0C894: lwz     r28, 36(r1)
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
label_80D0C898:
    ctx->pc = 0x80D0C898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C898u)) return;
    // 80D0C898: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D0C89C:
    ctx->pc = 0x80D0C89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C89Cu)) return;
    // 80D0C89C: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80D0C8A0:
    ctx->pc = 0x80D0C8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C8A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0C8A0: lwz     r0, 0(r3)
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
label_80D0C8A4:
    ctx->pc = 0x80D0C8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C8A4u)) return;
    // 80D0C8A4: cmpwi   r0, 0
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

label_80D0C8A8:
    ctx->pc = 0x80D0C8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C8A8u)) return;
    // 80D0C8A8: bc    4, 2, 0x80D0C960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D0C960;
        }
    }

label_80D0C8AC:
    ctx->pc = 0x80D0C8ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C8ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D0C8AC: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80D0C8B0:
    ctx->pc = 0x80D0C8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C8B0u)) return;
    // 80D0C8B0: cmplwi  r0, 0x0000
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

label_80D0C8B4:
    ctx->pc = 0x80D0C8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C8B4u)) return;
    // 80D0C8B4: bc    12, 2, 0x80D0C960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D0C960;
        }
    }

label_80D0C8B8:
    ctx->pc = 0x80D0C8B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C8B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D0C8B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0C8BC:
    ctx->pc = 0x80D0C8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C8BCu)) return;
    // 80D0C8BC: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80D0C8C0:
    ctx->pc = 0x80D0C8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C8C0u)) return;
    // 80D0C8C0: bl      0x8060F4F8
    {
            ctx->lr = 0x80D0C8C4u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D0C8C4:
    ctx->pc = 0x80D0C8C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C8C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D0C8C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D0C8C8:
    ctx->pc = 0x80D0C8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C8C8u)) return;
    // 80D0C8C8: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80D0C8CC:
    ctx->pc = 0x80D0C8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C8CCu)) return;
    // 80D0C8CC: bl      0x8060F4F8
    {
            ctx->lr = 0x80D0C8D0u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D0C8D0:
    ctx->pc = 0x80D0C8D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C8D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0C8D0: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80D0C8D0u)) return;
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
label_80D0C8D4:
    ctx->pc = 0x80D0C8D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C8D4u)) return;
    // 80D0C8D4: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C8D8:
    ctx->pc = 0x80D0C8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C8D8u)) return;
    // 80D0C8D8: addi    r3, r3, -25272
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25272);

label_80D0C8DC:
    ctx->pc = 0x80D0C8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C8DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0C8DC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D0C8DCu)) return;
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
label_80D0C8E0:
    ctx->pc = 0x80D0C8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C8E0u)) return;
    // 80D0C8E0: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80D0C8E0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80D0C8E4:
    ctx->pc = 0x80D0C8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C8E4u)) return;
    // 80D0C8E4: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80D0C8E8:
    ctx->pc = 0x80D0C8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C8E8u)) return;
    // 80D0C8E8: bc    4, 2, 0x80D0C8FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D0C8FC;
        }
    }

label_80D0C8EC:
    ctx->pc = 0x80D0C8ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C8ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D0C8EC: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C8F0:
    ctx->pc = 0x80D0C8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C8F0u)) return;
    // 80D0C8F0: addi    r3, r3, -25276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25276);

label_80D0C8F4:
    ctx->pc = 0x80D0C8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C8F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C8F4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D0C8F4u)) return;
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
label_80D0C8F8:
    ctx->pc = 0x80D0C8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C8F8u)) return;
    // 80D0C8F8: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80D0C8F8u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80D0C8FC:
    ctx->pc = 0x80D0C8FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C8FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D0C8FC: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80D0C900:
    ctx->pc = 0x80D0C900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C900u)) return;
    // 80D0C900: cmplwi  r0, 0x00FF
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

label_80D0C904:
    ctx->pc = 0x80D0C904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C904u)) return;
    // 80D0C904: bc    4, 1, 0x80D0C90C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D0C90C;
        }
    }

label_80D0C908:
    ctx->pc = 0x80D0C908u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C908u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C908: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80D0C90C:
    ctx->pc = 0x80D0C90Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C90Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80D0C90C: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C910:
    ctx->pc = 0x80D0C910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C910u)) return;
    // 80D0C910: addi    r3, r3, -25268
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25268);

label_80D0C914:
    ctx->pc = 0x80D0C914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C914u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D0C914: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D0C914u)) return;
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
label_80D0C918:
    ctx->pc = 0x80D0C918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C918u)) return;
    // 80D0C918: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D0C918u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D0C91C:
    ctx->pc = 0x80D0C91Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C91Cu)) return;
    // 80D0C91C: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C920:
    ctx->pc = 0x80D0C920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C920u)) return;
    // 80D0C920: addi    r3, r3, -25264
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25264);

label_80D0C924:
    ctx->pc = 0x80D0C924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D0C924: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D0C924u)) return;
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
label_80D0C928:
    ctx->pc = 0x80D0C928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C928u)) return;
    // 80D0C928: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0C92C:
    ctx->pc = 0x80D0C92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C92Cu)) return;
    // 80D0C92C: addi    r3, r3, -25260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25260);

label_80D0C930:
    ctx->pc = 0x80D0C930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C930u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D0C930: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D0C930u)) return;
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
label_80D0C934:
    ctx->pc = 0x80D0C934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C934u)) return;
    // 80D0C934: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80D0C938:
    ctx->pc = 0x80D0C938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C938u)) return;
    // 80D0C938: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80D0C93C:
    ctx->pc = 0x80D0C93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C93Cu)) return;
    // 80D0C93C: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80D0C940:
    ctx->pc = 0x80D0C940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C940u)) return;
    // 80D0C940: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80D0C944:
    ctx->pc = 0x80D0C944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C944u)) return;
    // 80D0C944: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80D0C948:
    ctx->pc = 0x80D0C948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C948u)) return;
    // 80D0C948: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80D0C94C:
    ctx->pc = 0x80D0C94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C94Cu)) return;
    // 80D0C94C: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80D0C950:
    ctx->pc = 0x80D0C950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C950u)) return;
    // 80D0C950: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80D0C954:
    ctx->pc = 0x80D0C954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C954u)) return;
    // 80D0C954: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80D0C958:
    ctx->pc = 0x80D0C958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C958u)) return;
    // 80D0C958: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80D0C95C:
    ctx->pc = 0x80D0C95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C95Cu)) return;
    // 80D0C95C: bl      0x80D0CB1C
    {
            ctx->lr = 0x80D0C960u;
            goto label_80D0CB1C;
    }

label_80D0C960:
    ctx->pc = 0x80D0C960u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C960u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C960: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80D0C964:
    ctx->pc = 0x80D0C964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C964u)) return;
    // 80D0C964: bl      0x80006E20
    {
            ctx->lr = 0x80D0C968u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80D0C968:
    ctx->pc = 0x80D0C968u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C968u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0C968: lwz     r0, 68(r1)
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
label_80D0C96C:
    ctx->pc = 0x80D0C96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0C96Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0C96C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0C970:
    ctx->pc = 0x80D0C970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C970u)) return;
    // 80D0C970: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80D0C974:
    ctx->pc = 0x80D0C974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C974u)) return;
    // 80D0C974: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0C978:
    ctx->pc = 0x80D0C978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D0C978: stwu     r1, -16(r1)
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
label_80D0C97C:
    ctx->pc = 0x80D0C97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C97Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D0C97C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0C980:
    ctx->pc = 0x80D0C980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D0C980: stw     r0, 20(r1)
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
label_80D0C984:
    ctx->pc = 0x80D0C984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D0C984: lwz     r5, 32(r3)
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
label_80D0C988:
    ctx->pc = 0x80D0C988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0C988: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C988u)) return;
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
label_80D0C98C:
    ctx->pc = 0x80D0C98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C98Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0C98C: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C98Cu)) return;
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
label_80D0C990:
    ctx->pc = 0x80D0C990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C990u)) return;
    // 80D0C990: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D0C990u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80D0C994:
    ctx->pc = 0x80D0C994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C994u)) return;
    // 80D0C994: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C998:
    ctx->pc = 0x80D0C998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C998u)) return;
    // 80D0C998: addi    r4, r4, -25256
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25256);

label_80D0C99C:
    ctx->pc = 0x80D0C99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C99Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0C99C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0C99Cu)) return;
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
label_80D0C9A0:
    ctx->pc = 0x80D0C9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C9A0u)) return;
    // 80D0C9A0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D0C9A0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80D0C9A4:
    ctx->pc = 0x80D0C9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C9A4u)) return;
    // 80D0C9A4: bc    4, 1, 0x80D0C9B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D0C9B0;
        }
    }

label_80D0C9A8:
    ctx->pc = 0x80D0C9A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C9A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0C9A8: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D0C9A8u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80D0C9AC:
    ctx->pc = 0x80D0C9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C9ACu)) return;
    // 80D0C9AC: b       0x80D0C9C8
    {
            goto label_80D0C9C8;
    }

label_80D0C9B0:
    ctx->pc = 0x80D0C9B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C9B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D0C9B0: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0C9B4:
    ctx->pc = 0x80D0C9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C9B4u)) return;
    // 80D0C9B4: addi    r4, r4, -25268
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25268);

label_80D0C9B8:
    ctx->pc = 0x80D0C9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C9B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0C9B8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0C9B8u)) return;
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
label_80D0C9BC:
    ctx->pc = 0x80D0C9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C9BCu)) return;
    // 80D0C9BC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D0C9BCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80D0C9C0:
    ctx->pc = 0x80D0C9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C9C0u)) return;
    // 80D0C9C0: bc    4, 0, 0x80D0C9C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D0C9C8;
        }
    }

label_80D0C9C4:
    ctx->pc = 0x80D0C9C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C9C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C9C4: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D0C9C4u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80D0C9C8:
    ctx->pc = 0x80D0C9C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C9C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0C9C8: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0C9C8u)) return;
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
label_80D0C9CC:
    ctx->pc = 0x80D0C9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C9CCu)) return;
    // 80D0C9CC: bl      0x80D0C824
    {
            ctx->lr = 0x80D0C9D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D0C824u;
                return;
            }
            goto label_80D0C824;
    }

label_80D0C9D0:
    ctx->pc = 0x80D0C9D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C9D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0C9D0: lwz     r0, 20(r1)
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
label_80D0C9D4:
    ctx->pc = 0x80D0C9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0C9D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0C9D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0C9D8:
    ctx->pc = 0x80D0C9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C9D8u)) return;
    // 80D0C9D8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D0C9DC:
    ctx->pc = 0x80D0C9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C9DCu)) return;
    // 80D0C9DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0C9E0:
    ctx->pc = 0x80D0C9E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C9E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0C9E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0C9E4:
    ctx->pc = 0x80D0C9E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0C9E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D0C9E4: stwu     r1, -16(r1)
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
label_80D0C9E8:
    ctx->pc = 0x80D0C9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C9E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D0C9E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0C9EC:
    ctx->pc = 0x80D0C9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C9ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D0C9EC: stw     r0, 20(r1)
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
label_80D0C9F0:
    ctx->pc = 0x80D0C9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C9F0u)) return;
    // 80D0C9F0: lis     r4, -32559
    ctx->gpr[4] = ((u32)(s32)(-32559) << 16);

label_80D0C9F4:
    ctx->pc = 0x80D0C9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C9F4u)) return;
    // 80D0C9F4: addi    r0, r4, -13960
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-13960);

label_80D0C9F8:
    ctx->pc = 0x80D0C9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C9F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0C9F8: stw     r0, 16(r3)
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
label_80D0C9FC:
    ctx->pc = 0x80D0C9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0C9FCu)) return;
    // 80D0C9FC: lis     r4, -32559
    ctx->gpr[4] = ((u32)(s32)(-32559) << 16);

label_80D0CA00:
    ctx->pc = 0x80D0CA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA00u)) return;
    // 80D0CA00: addi    r0, r4, -14300
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-14300);

label_80D0CA04:
    ctx->pc = 0x80D0CA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CA04: stw     r0, 20(r3)
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
label_80D0CA08:
    ctx->pc = 0x80D0CA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA08u)) return;
    // 80D0CA08: lis     r4, -32559
    ctx->gpr[4] = ((u32)(s32)(-32559) << 16);

label_80D0CA0C:
    ctx->pc = 0x80D0CA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA0Cu)) return;
    // 80D0CA0C: addi    r0, r4, -13856
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-13856);

label_80D0CA10:
    ctx->pc = 0x80D0CA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0CA10: stw     r0, 24(r3)
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
label_80D0CA14:
    ctx->pc = 0x80D0CA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA14u)) return;
    // 80D0CA14: bl      0x80D0C978
    {
            ctx->lr = 0x80D0CA18u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D0C978u;
                return;
            }
            goto label_80D0C978;
    }

label_80D0CA18:
    ctx->pc = 0x80D0CA18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CA18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CA18: lwz     r0, 20(r1)
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
label_80D0CA1C:
    ctx->pc = 0x80D0CA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0CA1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CA1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CA20:
    ctx->pc = 0x80D0CA20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA20u)) return;
    // 80D0CA20: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D0CA24:
    ctx->pc = 0x80D0CA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA24u)) return;
    // 80D0CA24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0CA28:
    ctx->pc = 0x80D0CA28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CA28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D0CA28: stwu     r1, -96(r1)
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
label_80D0CA2C:
    ctx->pc = 0x80D0CA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D0CA2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CA30:
    ctx->pc = 0x80D0CA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D0CA30: stw     r0, 100(r1)
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
label_80D0CA34:
    ctx->pc = 0x80D0CA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D0CA34: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D0CA34u)) return;
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
label_80D0CA38:
    ctx->pc = 0x80D0CA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D0CA38: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D0CA38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80D0CA38u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CA3C:
    ctx->pc = 0x80D0CA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D0CA3C: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D0CA3Cu)) return;
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
label_80D0CA40:
    ctx->pc = 0x80D0CA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D0CA40: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D0CA40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80D0CA40u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CA44:
    ctx->pc = 0x80D0CA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D0CA44: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D0CA44u)) return;
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
label_80D0CA48:
    ctx->pc = 0x80D0CA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D0CA48: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D0CA48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80D0CA48u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CA4C:
    ctx->pc = 0x80D0CA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D0CA4C: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D0CA4Cu)) return;
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
label_80D0CA50:
    ctx->pc = 0x80D0CA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D0CA50: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D0CA50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80D0CA50u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CA54:
    ctx->pc = 0x80D0CA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D0CA54: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D0CA54u)) return;
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
label_80D0CA58:
    ctx->pc = 0x80D0CA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D0CA58: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D0CA58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80D0CA58u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CA5C:
    ctx->pc = 0x80D0CA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA5Cu)) return;
    // 80D0CA5C: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80D0CA5Cu)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80D0CA60:
    ctx->pc = 0x80D0CA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA60u)) return;
    // 80D0CA60: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80D0CA60u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80D0CA64:
    ctx->pc = 0x80D0CA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA64u)) return;
    // 80D0CA64: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80D0CA64u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80D0CA68:
    ctx->pc = 0x80D0CA68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA68u)) return;
    // 80D0CA68: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80D0CA68u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80D0CA6C:
    ctx->pc = 0x80D0CA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA6Cu)) return;
    // 80D0CA6C: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80D0CA6Cu)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80D0CA70:
    ctx->pc = 0x80D0CA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA70u)) return;
    // 80D0CA70: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D0CA74:
    ctx->pc = 0x80D0CA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA74u)) return;
    // 80D0CA74: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80D0CA78:
    ctx->pc = 0x80D0CA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA78u)) return;
    // 80D0CA78: lis     r5, -32559
    ctx->gpr[5] = ((u32)(s32)(-32559) << 16);

label_80D0CA7C:
    ctx->pc = 0x80D0CA7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA7Cu)) return;
    // 80D0CA7C: addi    r5, r5, -13852
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13852);

label_80D0CA80:
    ctx->pc = 0x80D0CA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA80u)) return;
    // 80D0CA80: bl      0x8050FD60
    {
            ctx->lr = 0x80D0CA84u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D0CA84:
    ctx->pc = 0x80D0CA84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CA84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80D0CA84: lwz     r5, 32(r3)
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
label_80D0CA88:
    ctx->pc = 0x80D0CA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80D0CA88: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0CA88u)) return;
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
label_80D0CA8C:
    ctx->pc = 0x80D0CA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D0CA8C: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0CA8Cu)) return;
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
label_80D0CA90:
    ctx->pc = 0x80D0CA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D0CA90: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0CA90u)) return;
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
label_80D0CA94:
    ctx->pc = 0x80D0CA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D0CA94: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0CA94u)) return;
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
label_80D0CA98:
    ctx->pc = 0x80D0CA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D0CA98: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0CA98u)) return;
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
label_80D0CA9C:
    ctx->pc = 0x80D0CA9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CA9Cu)) return;
    // 80D0CA9C: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0CAA0:
    ctx->pc = 0x80D0CAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CAA0u)) return;
    // 80D0CAA0: addi    r4, r4, -25272
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25272);

label_80D0CAA4:
    ctx->pc = 0x80D0CAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CAA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D0CAA4: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D0CAA4u)) return;
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
label_80D0CAA8:
    ctx->pc = 0x80D0CAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CAA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D0CAA8: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D0CAA8u)) return;
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
label_80D0CAAC:
    ctx->pc = 0x80D0CAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CAACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D0CAAC: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D0CAACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80D0CAACu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CAB0:
    ctx->pc = 0x80D0CAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CAB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D0CAB0: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D0CAB0u)) return;
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
label_80D0CAB4:
    ctx->pc = 0x80D0CAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CAB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D0CAB4: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D0CAB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80D0CAB4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CAB8:
    ctx->pc = 0x80D0CAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CAB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D0CAB8: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D0CAB8u)) return;
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
label_80D0CABC:
    ctx->pc = 0x80D0CABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D0CABC: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D0CABCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80D0CABCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CAC0:
    ctx->pc = 0x80D0CAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CAC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D0CAC0: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D0CAC0u)) return;
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
label_80D0CAC4:
    ctx->pc = 0x80D0CAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CAC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D0CAC4: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D0CAC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80D0CAC4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CAC8:
    ctx->pc = 0x80D0CAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CAC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0CAC8: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D0CAC8u)) return;
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
label_80D0CACC:
    ctx->pc = 0x80D0CACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0CACC: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D0CACCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80D0CACCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CAD0:
    ctx->pc = 0x80D0CAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CAD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0CAD0: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D0CAD0u)) return;
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
label_80D0CAD4:
    ctx->pc = 0x80D0CAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CAD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CAD4: lwz     r0, 100(r1)
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
label_80D0CAD8:
    ctx->pc = 0x80D0CAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0CAD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CAD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CADC:
    ctx->pc = 0x80D0CADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CADCu)) return;
    // 80D0CADC: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80D0CAE0:
    ctx->pc = 0x80D0CAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CAE0u)) return;
    // 80D0CAE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0CAE4:
    ctx->pc = 0x80D0CAE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CAE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CAE4: lwz     r3, 32(r3)
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
label_80D0CAE8:
    ctx->pc = 0x80D0CAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CAE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0CAE8: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D0CAE8u)) return;
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
label_80D0CAEC:
    ctx->pc = 0x80D0CAECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CAECu)) return;
    // 80D0CAEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0CAF0:
    ctx->pc = 0x80D0CAF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CAF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CAF0: lwz     r3, 32(r3)
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
label_80D0CAF4:
    ctx->pc = 0x80D0CAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CAF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0CAF4: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D0CAF4u)) return;
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
label_80D0CAF8:
    ctx->pc = 0x80D0CAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CAF8u)) return;
    // 80D0CAF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0CAFC:
    ctx->pc = 0x80D0CAFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CAFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CAFC: lwz     r3, 32(r3)
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
label_80D0CB00:
    ctx->pc = 0x80D0CB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0CB00: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D0CB00u)) return;
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
label_80D0CB04:
    ctx->pc = 0x80D0CB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CB04: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D0CB04u)) return;
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
label_80D0CB08:
    ctx->pc = 0x80D0CB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0CB08: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D0CB08u)) return;
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
label_80D0CB0C:
    ctx->pc = 0x80D0CB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB0Cu)) return;
    // 80D0CB0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0CB10:
    ctx->pc = 0x80D0CB10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CB10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CB10: lwz     r3, 32(r3)
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
label_80D0CB14:
    ctx->pc = 0x80D0CB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0CB14: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D0CB14u)) return;
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
label_80D0CB18:
    ctx->pc = 0x80D0CB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB18u)) return;
    // 80D0CB18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0CB1C:
    ctx->pc = 0x80D0CB1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CB1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CB1C: stwu     r1, -16(r1)
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
label_80D0CB20:
    ctx->pc = 0x80D0CB20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0CB20: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CB24:
    ctx->pc = 0x80D0CB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CB24: stw     r0, 20(r1)
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
label_80D0CB28:
    ctx->pc = 0x80D0CB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB28u)) return;
    // 80D0CB28: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80D0CB2C:
    ctx->pc = 0x80D0CB2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB2Cu)) return;
    // 80D0CB2C: bl      0x80607948
    {
            ctx->lr = 0x80D0CB30u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80D0CB30:
    ctx->pc = 0x80D0CB30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CB30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CB30: lwz     r0, 20(r1)
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
label_80D0CB34:
    ctx->pc = 0x80D0CB34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0CB34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CB34: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CB38:
    ctx->pc = 0x80D0CB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB38u)) return;
    // 80D0CB38: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D0CB3C:
    ctx->pc = 0x80D0CB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB3Cu)) return;
    // 80D0CB3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0CB40:
    ctx->pc = 0x80D0CB40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CB40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0CB40: stwu     r1, -16(r1)
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
label_80D0CB44:
    ctx->pc = 0x80D0CB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CB44: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CB48:
    ctx->pc = 0x80D0CB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0CB48: stw     r0, 20(r1)
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
label_80D0CB4C:
    ctx->pc = 0x80D0CB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CB4C: lwz     r3, 32(r3)
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
label_80D0CB50:
    ctx->pc = 0x80D0CB50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0CB50: lwz     r3, 16(r3)
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
label_80D0CB54:
    ctx->pc = 0x80D0CB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB54u)) return;
    // 80D0CB54: bl      0x80509CF0
    {
            ctx->lr = 0x80D0CB58u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80D0CB58:
    ctx->pc = 0x80D0CB58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CB58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CB58: lwz     r0, 20(r1)
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
label_80D0CB5C:
    ctx->pc = 0x80D0CB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0CB5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CB5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CB60:
    ctx->pc = 0x80D0CB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB60u)) return;
    // 80D0CB60: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D0CB64:
    ctx->pc = 0x80D0CB64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB64u)) return;
    // 80D0CB64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0CB68:
    ctx->pc = 0x80D0CB68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CB68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D0CB68: stwu     r1, -32(r1)
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
label_80D0CB6C:
    ctx->pc = 0x80D0CB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D0CB6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CB70:
    ctx->pc = 0x80D0CB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D0CB70: stw     r0, 36(r1)
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
label_80D0CB74:
    ctx->pc = 0x80D0CB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0CB74: stw     r31, 28(r1)
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
label_80D0CB78:
    ctx->pc = 0x80D0CB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0CB78: stw     r30, 24(r1)
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
label_80D0CB7C:
    ctx->pc = 0x80D0CB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0CB7C: stw     r29, 20(r1)
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
label_80D0CB80:
    ctx->pc = 0x80D0CB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CB80: lwz     r31, 32(r3)
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
label_80D0CB84:
    ctx->pc = 0x80D0CB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0CB84: lwz     r30, 16(r31)
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
label_80D0CB88:
    ctx->pc = 0x80D0CB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CB88: lwz     r5, 28(r31)
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
label_80D0CB8C:
    ctx->pc = 0x80D0CB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB8Cu)) return;
    // 80D0CB8C: cmpwi   r5, 0
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

label_80D0CB90:
    ctx->pc = 0x80D0CB90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB90u)) return;
    // 80D0CB90: bc    4, 1, 0x80D0CBC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D0CBC8;
        }
    }

label_80D0CB94:
    ctx->pc = 0x80D0CB94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CB94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80D0CB94: lwz     r4, 24(r31)
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
label_80D0CB98:
    ctx->pc = 0x80D0CB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB98u)) return;
    // 80D0CB98: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80D0CB9C:
    ctx->pc = 0x80D0CB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CB9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80D0CB9C: lwz     r0, 20(r31)
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
label_80D0CBA0:
    ctx->pc = 0x80D0CBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80D0CBA0u)) return;
    // 80D0CBA0: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80D0CBA4:
    ctx->pc = 0x80D0CBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CBA4u)) return;
    // 80D0CBA4: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80D0CBA8:
    ctx->pc = 0x80D0CBA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80D0CBA8u)) return;
    // 80D0CBA8: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80D0CBAC:
    ctx->pc = 0x80D0CBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CBACu)) return;
    // 80D0CBAC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D0CBB0:
    ctx->pc = 0x80D0CBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CBB0u)) return;
    // 80D0CBB0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D0CBB4:
    ctx->pc = 0x80D0CBB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CBB4u)) return;
    // 80D0CBB4: bl      0x80509C74
    {
            ctx->lr = 0x80D0CBB8u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80D0CBB8:
    ctx->pc = 0x80D0CBB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CBB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0CBB8: stw     r29, 20(r31)
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
label_80D0CBBC:
    ctx->pc = 0x80D0CBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CBBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CBBC: lwz     r3, 28(r31)
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
label_80D0CBC0:
    ctx->pc = 0x80D0CBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CBC0u)) return;
    // 80D0CBC0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80D0CBC4:
    ctx->pc = 0x80D0CBC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CBC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D0CBC4: stw     r0, 28(r31)
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
label_80D0CBC8:
    ctx->pc = 0x80D0CBC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CBC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CBC8: lwz     r5, 40(r31)
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
label_80D0CBCC:
    ctx->pc = 0x80D0CBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CBCCu)) return;
    // 80D0CBCC: cmpwi   r5, 0
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

label_80D0CBD0:
    ctx->pc = 0x80D0CBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CBD0u)) return;
    // 80D0CBD0: bc    4, 1, 0x80D0CC08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D0CC08;
        }
    }

label_80D0CBD4:
    ctx->pc = 0x80D0CBD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CBD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80D0CBD4: lwz     r4, 36(r31)
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
label_80D0CBD8:
    ctx->pc = 0x80D0CBD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CBD8u)) return;
    // 80D0CBD8: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80D0CBDC:
    ctx->pc = 0x80D0CBDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CBDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80D0CBDC: lwz     r0, 32(r31)
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
label_80D0CBE0:
    ctx->pc = 0x80D0CBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80D0CBE0u)) return;
    // 80D0CBE0: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80D0CBE4:
    ctx->pc = 0x80D0CBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CBE4u)) return;
    // 80D0CBE4: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80D0CBE8:
    ctx->pc = 0x80D0CBE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80D0CBE8u)) return;
    // 80D0CBE8: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80D0CBEC:
    ctx->pc = 0x80D0CBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CBECu)) return;
    // 80D0CBEC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D0CBF0:
    ctx->pc = 0x80D0CBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CBF0u)) return;
    // 80D0CBF0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D0CBF4:
    ctx->pc = 0x80D0CBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CBF4u)) return;
    // 80D0CBF4: bl      0x80509BF8
    {
            ctx->lr = 0x80D0CBF8u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80D0CBF8:
    ctx->pc = 0x80D0CBF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CBF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0CBF8: stw     r29, 32(r31)
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
label_80D0CBFC:
    ctx->pc = 0x80D0CBFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CBFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CBFC: lwz     r3, 40(r31)
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
label_80D0CC00:
    ctx->pc = 0x80D0CC00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC00u)) return;
    // 80D0CC00: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80D0CC04:
    ctx->pc = 0x80D0CC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D0CC04: stw     r0, 40(r31)
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
label_80D0CC08:
    ctx->pc = 0x80D0CC08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CC08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CC08: lwz     r5, 52(r31)
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
label_80D0CC0C:
    ctx->pc = 0x80D0CC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC0Cu)) return;
    // 80D0CC0C: cmpwi   r5, 0
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

label_80D0CC10:
    ctx->pc = 0x80D0CC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC10u)) return;
    // 80D0CC10: bc    4, 1, 0x80D0CC48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D0CC48;
        }
    }

label_80D0CC14:
    ctx->pc = 0x80D0CC14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CC14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80D0CC14: lwz     r4, 48(r31)
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
label_80D0CC18:
    ctx->pc = 0x80D0CC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC18u)) return;
    // 80D0CC18: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80D0CC1C:
    ctx->pc = 0x80D0CC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80D0CC1C: lwz     r0, 44(r31)
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
label_80D0CC20:
    ctx->pc = 0x80D0CC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80D0CC20u)) return;
    // 80D0CC20: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80D0CC24:
    ctx->pc = 0x80D0CC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC24u)) return;
    // 80D0CC24: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80D0CC28:
    ctx->pc = 0x80D0CC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80D0CC28u)) return;
    // 80D0CC28: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80D0CC2C:
    ctx->pc = 0x80D0CC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC2Cu)) return;
    // 80D0CC2C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D0CC30:
    ctx->pc = 0x80D0CC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC30u)) return;
    // 80D0CC30: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D0CC34:
    ctx->pc = 0x80D0CC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC34u)) return;
    // 80D0CC34: bl      0x80509B94
    {
            ctx->lr = 0x80D0CC38u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80D0CC38:
    ctx->pc = 0x80D0CC38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CC38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0CC38: stw     r29, 44(r31)
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
label_80D0CC3C:
    ctx->pc = 0x80D0CC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CC3C: lwz     r3, 52(r31)
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
label_80D0CC40:
    ctx->pc = 0x80D0CC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC40u)) return;
    // 80D0CC40: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80D0CC44:
    ctx->pc = 0x80D0CC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D0CC44: stw     r0, 52(r31)
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
label_80D0CC48:
    ctx->pc = 0x80D0CC48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CC48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0CC48: lwz     r31, 28(r1)
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
label_80D0CC4C:
    ctx->pc = 0x80D0CC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0CC4C: lwz     r30, 24(r1)
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
label_80D0CC50:
    ctx->pc = 0x80D0CC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0CC50: lwz     r29, 20(r1)
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
label_80D0CC54:
    ctx->pc = 0x80D0CC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CC54: lwz     r0, 36(r1)
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
label_80D0CC58:
    ctx->pc = 0x80D0CC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0CC58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CC58: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CC5C:
    ctx->pc = 0x80D0CC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC5Cu)) return;
    // 80D0CC5C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D0CC60:
    ctx->pc = 0x80D0CC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC60u)) return;
    // 80D0CC60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0CC64:
    ctx->pc = 0x80D0CC64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CC64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D0CC64: stwu     r1, -32(r1)
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
label_80D0CC68:
    ctx->pc = 0x80D0CC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D0CC68: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CC6C:
    ctx->pc = 0x80D0CC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D0CC6C: stw     r0, 36(r1)
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
label_80D0CC70:
    ctx->pc = 0x80D0CC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D0CC70: stw     r31, 28(r1)
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
label_80D0CC74:
    ctx->pc = 0x80D0CC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0CC74: stw     r30, 24(r1)
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
label_80D0CC78:
    ctx->pc = 0x80D0CC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0CC78: stw     r29, 20(r1)
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
label_80D0CC7C:
    ctx->pc = 0x80D0CC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC7Cu)) return;
    // 80D0CC7C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D0CC80:
    ctx->pc = 0x80D0CC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC80u)) return;
    // 80D0CC80: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D0CC84:
    ctx->pc = 0x80D0CC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC84u)) return;
    // 80D0CC84: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D0CC88:
    ctx->pc = 0x80D0CC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC88u)) return;
    // 80D0CC88: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80D0CC8C:
    ctx->pc = 0x80D0CC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC8Cu)) return;
    // 80D0CC8C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D0CC90:
    ctx->pc = 0x80D0CC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC90u)) return;
    // 80D0CC90: bl      0x8050FD60
    {
            ctx->lr = 0x80D0CC94u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D0CC94:
    ctx->pc = 0x80D0CC94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CC94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D0CC94: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D0CC98:
    ctx->pc = 0x80D0CC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC98u)) return;
    // 80D0CC98: cmplwi  r31, 0x0000
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

label_80D0CC9C:
    ctx->pc = 0x80D0CC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CC9Cu)) return;
    // 80D0CC9C: bc    12, 2, 0x80D0CD00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D0CD00;
        }
    }

label_80D0CCA0:
    ctx->pc = 0x80D0CCA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CCA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D0CCA0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D0CCA4:
    ctx->pc = 0x80D0CCA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCA4u)) return;
    // 80D0CCA4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D0CCA8:
    ctx->pc = 0x80D0CCA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCA8u)) return;
    // 80D0CCA8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D0CCAC:
    ctx->pc = 0x80D0CCACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCACu)) return;
    // 80D0CCAC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D0CCB0:
    ctx->pc = 0x80D0CCB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCB0u)) return;
    // 80D0CCB0: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D0CCB4:
    ctx->pc = 0x80D0CCB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCB4u)) return;
    // 80D0CCB4: bl      0x8050A0D4
    {
            ctx->lr = 0x80D0CCB8u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80D0CCB8:
    ctx->pc = 0x80D0CCB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CCB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80D0CCB8: lis     r3, -32559
    ctx->gpr[3] = ((u32)(s32)(-32559) << 16);

label_80D0CCBC:
    ctx->pc = 0x80D0CCBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCBCu)) return;
    // 80D0CCBC: addi    r0, r3, -13464
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-13464);

label_80D0CCC0:
    ctx->pc = 0x80D0CCC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D0CCC0: stw     r0, 16(r31)
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
label_80D0CCC4:
    ctx->pc = 0x80D0CCC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCC4u)) return;
    // 80D0CCC4: lis     r3, -32559
    ctx->gpr[3] = ((u32)(s32)(-32559) << 16);

label_80D0CCC8:
    ctx->pc = 0x80D0CCC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCC8u)) return;
    // 80D0CCC8: addi    r0, r3, -13504
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-13504);

label_80D0CCCC:
    ctx->pc = 0x80D0CCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D0CCCC: stw     r0, 24(r31)
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
label_80D0CCD0:
    ctx->pc = 0x80D0CCD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D0CCD0: lwz     r3, 32(r31)
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
label_80D0CCD4:
    ctx->pc = 0x80D0CCD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D0CCD4: stw     r31, 16(r3)
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
label_80D0CCD8:
    ctx->pc = 0x80D0CCD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCD8u)) return;
    // 80D0CCD8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D0CCDC:
    ctx->pc = 0x80D0CCDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D0CCDC: stw     r0, 20(r3)
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
label_80D0CCE0:
    ctx->pc = 0x80D0CCE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0CCE0: stw     r0, 24(r3)
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
label_80D0CCE4:
    ctx->pc = 0x80D0CCE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0CCE4: stw     r0, 28(r3)
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
label_80D0CCE8:
    ctx->pc = 0x80D0CCE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0CCE8: stw     r0, 32(r3)
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
label_80D0CCEC:
    ctx->pc = 0x80D0CCECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CCEC: stw     r0, 36(r3)
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
label_80D0CCF0:
    ctx->pc = 0x80D0CCF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0CCF0: stw     r0, 40(r3)
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
label_80D0CCF4:
    ctx->pc = 0x80D0CCF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CCF4: stw     r0, 44(r3)
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
label_80D0CCF8:
    ctx->pc = 0x80D0CCF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0CCF8: stw     r0, 48(r3)
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
label_80D0CCFC:
    ctx->pc = 0x80D0CCFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CCFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D0CCFC: stw     r0, 52(r3)
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
label_80D0CD00:
    ctx->pc = 0x80D0CD00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CD00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D0CD00: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D0CD04:
    ctx->pc = 0x80D0CD04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0CD04: lwz     r31, 28(r1)
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
label_80D0CD08:
    ctx->pc = 0x80D0CD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0CD08: lwz     r30, 24(r1)
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
label_80D0CD0C:
    ctx->pc = 0x80D0CD0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0CD0C: lwz     r29, 20(r1)
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
label_80D0CD10:
    ctx->pc = 0x80D0CD10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CD10: lwz     r0, 36(r1)
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
label_80D0CD14:
    ctx->pc = 0x80D0CD14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0CD14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CD14: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CD18:
    ctx->pc = 0x80D0CD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD18u)) return;
    // 80D0CD18: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D0CD1C:
    ctx->pc = 0x80D0CD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD1Cu)) return;
    // 80D0CD1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0CD20:
    ctx->pc = 0x80D0CD20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CD20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D0CD20: stwu     r1, -16(r1)
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
label_80D0CD24:
    ctx->pc = 0x80D0CD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D0CD24: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CD28:
    ctx->pc = 0x80D0CD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D0CD28: stw     r0, 20(r1)
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
label_80D0CD2C:
    ctx->pc = 0x80D0CD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0CD2C: stw     r31, 12(r1)
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
label_80D0CD30:
    ctx->pc = 0x80D0CD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0CD30: stw     r30, 8(r1)
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
label_80D0CD34:
    ctx->pc = 0x80D0CD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD34u)) return;
    // 80D0CD34: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D0CD38:
    ctx->pc = 0x80D0CD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CD38: lwz     r31, 32(r3)
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
label_80D0CD3C:
    ctx->pc = 0x80D0CD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0CD3C: stw     r30, 24(r31)
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
label_80D0CD40:
    ctx->pc = 0x80D0CD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CD40: stw     r5, 28(r31)
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
label_80D0CD44:
    ctx->pc = 0x80D0CD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD44u)) return;
    // 80D0CD44: cmpwi   r5, 0
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

label_80D0CD48:
    ctx->pc = 0x80D0CD48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD48u)) return;
    // 80D0CD48: bc    12, 1, 0x80D0CD58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D0CD58;
        }
    }

label_80D0CD4C:
    ctx->pc = 0x80D0CD4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CD4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0CD4C: lwz     r3, 16(r31)
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
label_80D0CD50:
    ctx->pc = 0x80D0CD50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD50u)) return;
    // 80D0CD50: bl      0x80509C74
    {
            ctx->lr = 0x80D0CD54u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80D0CD54:
    ctx->pc = 0x80D0CD54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CD54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D0CD54: stw     r30, 20(r31)
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
label_80D0CD58:
    ctx->pc = 0x80D0CD58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CD58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0CD58: lwz     r31, 12(r1)
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
label_80D0CD5C:
    ctx->pc = 0x80D0CD5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0CD5C: lwz     r30, 8(r1)
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
label_80D0CD60:
    ctx->pc = 0x80D0CD60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CD60: lwz     r0, 20(r1)
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
label_80D0CD64:
    ctx->pc = 0x80D0CD64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0CD64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CD64: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CD68:
    ctx->pc = 0x80D0CD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD68u)) return;
    // 80D0CD68: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D0CD6C:
    ctx->pc = 0x80D0CD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD6Cu)) return;
    // 80D0CD6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0CD70:
    ctx->pc = 0x80D0CD70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CD70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D0CD70: stwu     r1, -16(r1)
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
label_80D0CD74:
    ctx->pc = 0x80D0CD74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D0CD74: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CD78:
    ctx->pc = 0x80D0CD78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D0CD78: stw     r0, 20(r1)
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
label_80D0CD7C:
    ctx->pc = 0x80D0CD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0CD7C: stw     r31, 12(r1)
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
label_80D0CD80:
    ctx->pc = 0x80D0CD80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0CD80: stw     r30, 8(r1)
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
label_80D0CD84:
    ctx->pc = 0x80D0CD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD84u)) return;
    // 80D0CD84: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D0CD88:
    ctx->pc = 0x80D0CD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CD88: lwz     r31, 32(r3)
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
label_80D0CD8C:
    ctx->pc = 0x80D0CD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0CD8C: stw     r30, 36(r31)
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
label_80D0CD90:
    ctx->pc = 0x80D0CD90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CD90: stw     r5, 40(r31)
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
label_80D0CD94:
    ctx->pc = 0x80D0CD94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD94u)) return;
    // 80D0CD94: cmpwi   r5, 0
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

label_80D0CD98:
    ctx->pc = 0x80D0CD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CD98u)) return;
    // 80D0CD98: bc    12, 1, 0x80D0CDA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D0CDA8;
        }
    }

label_80D0CD9C:
    ctx->pc = 0x80D0CD9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CD9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0CD9C: lwz     r3, 16(r31)
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
label_80D0CDA0:
    ctx->pc = 0x80D0CDA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CDA0u)) return;
    // 80D0CDA0: bl      0x80509BF8
    {
            ctx->lr = 0x80D0CDA4u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80D0CDA4:
    ctx->pc = 0x80D0CDA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CDA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D0CDA4: stw     r30, 32(r31)
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
label_80D0CDA8:
    ctx->pc = 0x80D0CDA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CDA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0CDA8: lwz     r31, 12(r1)
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
label_80D0CDAC:
    ctx->pc = 0x80D0CDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CDACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0CDAC: lwz     r30, 8(r1)
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
label_80D0CDB0:
    ctx->pc = 0x80D0CDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CDB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CDB0: lwz     r0, 20(r1)
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
label_80D0CDB4:
    ctx->pc = 0x80D0CDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0CDB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CDB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CDB8:
    ctx->pc = 0x80D0CDB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CDB8u)) return;
    // 80D0CDB8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D0CDBC:
    ctx->pc = 0x80D0CDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CDBCu)) return;
    // 80D0CDBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0CDC0:
    ctx->pc = 0x80D0CDC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CDC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D0CDC0: stwu     r1, -16(r1)
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
label_80D0CDC4:
    ctx->pc = 0x80D0CDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CDC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D0CDC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CDC8:
    ctx->pc = 0x80D0CDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CDC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D0CDC8: stw     r0, 20(r1)
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
label_80D0CDCC:
    ctx->pc = 0x80D0CDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CDCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0CDCC: stw     r31, 12(r1)
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
label_80D0CDD0:
    ctx->pc = 0x80D0CDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CDD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0CDD0: stw     r30, 8(r1)
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
label_80D0CDD4:
    ctx->pc = 0x80D0CDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CDD4u)) return;
    // 80D0CDD4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D0CDD8:
    ctx->pc = 0x80D0CDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CDD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CDD8: lwz     r31, 32(r3)
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
label_80D0CDDC:
    ctx->pc = 0x80D0CDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CDDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0CDDC: stw     r30, 48(r31)
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
label_80D0CDE0:
    ctx->pc = 0x80D0CDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CDE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CDE0: stw     r5, 52(r31)
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
label_80D0CDE4:
    ctx->pc = 0x80D0CDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CDE4u)) return;
    // 80D0CDE4: cmpwi   r5, 0
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

label_80D0CDE8:
    ctx->pc = 0x80D0CDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CDE8u)) return;
    // 80D0CDE8: bc    12, 1, 0x80D0CDF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D0CDF8;
        }
    }

label_80D0CDEC:
    ctx->pc = 0x80D0CDECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CDECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0CDEC: lwz     r3, 16(r31)
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
label_80D0CDF0:
    ctx->pc = 0x80D0CDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CDF0u)) return;
    // 80D0CDF0: bl      0x80509B94
    {
            ctx->lr = 0x80D0CDF4u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80D0CDF4:
    ctx->pc = 0x80D0CDF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CDF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D0CDF4: stw     r30, 44(r31)
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
label_80D0CDF8:
    ctx->pc = 0x80D0CDF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CDF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0CDF8: lwz     r31, 12(r1)
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
label_80D0CDFC:
    ctx->pc = 0x80D0CDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CDFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0CDFC: lwz     r30, 8(r1)
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
label_80D0CE00:
    ctx->pc = 0x80D0CE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CE00: lwz     r0, 20(r1)
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
label_80D0CE04:
    ctx->pc = 0x80D0CE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0CE04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CE04: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CE08:
    ctx->pc = 0x80D0CE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE08u)) return;
    // 80D0CE08: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D0CE0C:
    ctx->pc = 0x80D0CE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE0Cu)) return;
    // 80D0CE0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0CE10:
    ctx->pc = 0x80D0CE10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CE10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D0CE10: stwu     r1, -16(r1)
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
label_80D0CE14:
    ctx->pc = 0x80D0CE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D0CE14: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CE18:
    ctx->pc = 0x80D0CE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0CE18: stw     r0, 20(r1)
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
label_80D0CE1C:
    ctx->pc = 0x80D0CE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0CE1C: stw     r31, 12(r1)
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
label_80D0CE20:
    ctx->pc = 0x80D0CE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE20u)) return;
    // 80D0CE20: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D0CE24:
    ctx->pc = 0x80D0CE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE24u)) return;
    // 80D0CE24: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0CE28:
    ctx->pc = 0x80D0CE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE28u)) return;
    // 80D0CE28: addi    r4, r4, 1900
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1900);

label_80D0CE2C:
    ctx->pc = 0x80D0CE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CE2C: lwz     r0, 0(r4)
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
label_80D0CE30:
    ctx->pc = 0x80D0CE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE30u)) return;
    // 80D0CE30: cmplwi  r0, 0x0000
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

label_80D0CE34:
    ctx->pc = 0x80D0CE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE34u)) return;
    // 80D0CE34: bc    4, 2, 0x80D0CE58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D0CE58;
        }
    }

label_80D0CE38:
    ctx->pc = 0x80D0CE38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CE38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0CE38: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80D0CE3C:
    ctx->pc = 0x80D0CE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE3Cu)) return;
    // 80D0CE3C: bl      0x8050EEC0
    {
            ctx->lr = 0x80D0CE40u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80D0CE40:
    ctx->pc = 0x80D0CE40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CE40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D0CE40: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0CE44:
    ctx->pc = 0x80D0CE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE44u)) return;
    // 80D0CE44: addi    r4, r4, 1900
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1900);

label_80D0CE48:
    ctx->pc = 0x80D0CE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0CE48: stw     r3, 0(r4)
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
label_80D0CE4C:
    ctx->pc = 0x80D0CE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE4Cu)) return;
    // 80D0CE4C: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0CE50:
    ctx->pc = 0x80D0CE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE50u)) return;
    // 80D0CE50: addi    r3, r3, 1896
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1896);

label_80D0CE54:
    ctx->pc = 0x80D0CE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D0CE54: stw     r31, 0(r3)
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
label_80D0CE58:
    ctx->pc = 0x80D0CE58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CE58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0CE58: lwz     r31, 12(r1)
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
label_80D0CE5C:
    ctx->pc = 0x80D0CE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CE5C: lwz     r0, 20(r1)
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
label_80D0CE60:
    ctx->pc = 0x80D0CE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0CE60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CE60: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CE64:
    ctx->pc = 0x80D0CE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE64u)) return;
    // 80D0CE64: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D0CE68:
    ctx->pc = 0x80D0CE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE68u)) return;
    // 80D0CE68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0CE6C:
    ctx->pc = 0x80D0CE6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CE6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D0CE6C: stwu     r1, -32(r1)
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
label_80D0CE70:
    ctx->pc = 0x80D0CE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D0CE70: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CE74:
    ctx->pc = 0x80D0CE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D0CE74: stw     r0, 36(r1)
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
label_80D0CE78:
    ctx->pc = 0x80D0CE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D0CE78: stw     r31, 28(r1)
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
label_80D0CE7C:
    ctx->pc = 0x80D0CE7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0CE7C: stw     r30, 24(r1)
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
label_80D0CE80:
    ctx->pc = 0x80D0CE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0CE80: stw     r29, 20(r1)
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
label_80D0CE84:
    ctx->pc = 0x80D0CE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0CE84: stw     r28, 16(r1)
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
label_80D0CE88:
    ctx->pc = 0x80D0CE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE88u)) return;
    // 80D0CE88: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0CE8C:
    ctx->pc = 0x80D0CE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE8Cu)) return;
    // 80D0CE8C: addi    r30, r3, 1900
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(1900);

label_80D0CE90:
    ctx->pc = 0x80D0CE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CE90: lwz     r0, 0(r30)
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
label_80D0CE94:
    ctx->pc = 0x80D0CE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE94u)) return;
    // 80D0CE94: cmplwi  r0, 0x0000
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

label_80D0CE98:
    ctx->pc = 0x80D0CE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CE98u)) return;
    // 80D0CE98: bc    12, 2, 0x80D0CEF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D0CEF8;
        }
    }

label_80D0CE9C:
    ctx->pc = 0x80D0CE9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CE9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D0CE9C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80D0CEA0:
    ctx->pc = 0x80D0CEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CEA0u)) return;
    // 80D0CEA0: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80D0CEA4:
    ctx->pc = 0x80D0CEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CEA4u)) return;
    // 80D0CEA4: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0CEA8:
    ctx->pc = 0x80D0CEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CEA8u)) return;
    // 80D0CEA8: addi    r31, r3, 1896
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(1896);

label_80D0CEAC:
    ctx->pc = 0x80D0CEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CEACu)) return;
    // 80D0CEAC: b       0x80D0CECC
    {
            goto label_80D0CECC;
    }

label_80D0CEB0:
    ctx->pc = 0x80D0CEB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CEB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D0CEB0: lwz     r3, 0(r30)
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
label_80D0CEB4:
    ctx->pc = 0x80D0CEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CEB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CEB4: lwzx    r3, r3, r29
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
label_80D0CEB8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CEB8u)) return;
    // 80D0CEB8: cmplwi  r3, 0x0000
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

label_80D0CEBC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CEBCu)) return;
    // 80D0CEBC: bc    12, 2, 0x80D0CEC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D0CEC4;
        }
    }

label_80D0CEC0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CEC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0CEC0: bl      0x8050F9E0
    {
            ctx->lr = 0x80D0CEC4u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D0CEC4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CEC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D0CEC4: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80D0CEC8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CEC8u)) return;
    // 80D0CEC8: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80D0CECC:
    ctx->pc = 0x80D0CECCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CECCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CECC: lwz     r0, 0(r31)
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
label_80D0CED0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CED0u)) return;
    // 80D0CED0: cmpw    r28, r0
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

label_80D0CED4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CED4u)) return;
    // 80D0CED4: bc    12, 0, 0x80D0CEB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D0CEB0u;
                return;
            }
            goto label_80D0CEB0;
        }
    }

label_80D0CED8:
    ctx->pc = 0x80D0CED8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CED8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D0CED8: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0CEDC:
    ctx->pc = 0x80D0CEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CEDCu)) return;
    // 80D0CEDC: addi    r3, r3, 1900
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1900);

label_80D0CEE0:
    ctx->pc = 0x80D0CEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CEE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0CEE0: lwz     r3, 0(r3)
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
label_80D0CEE4:
    ctx->pc = 0x80D0CEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CEE4u)) return;
    // 80D0CEE4: bl      0x8050ED40
    {
            ctx->lr = 0x80D0CEE8u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80D0CEE8:
    ctx->pc = 0x80D0CEE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CEE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D0CEE8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D0CEEC:
    ctx->pc = 0x80D0CEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CEECu)) return;
    // 80D0CEEC: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0CEF0:
    ctx->pc = 0x80D0CEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CEF0u)) return;
    // 80D0CEF0: addi    r3, r3, 1900
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1900);

label_80D0CEF4:
    ctx->pc = 0x80D0CEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CEF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D0CEF4: stw     r0, 0(r3)
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
label_80D0CEF8:
    ctx->pc = 0x80D0CEF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CEF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D0CEF8: lwz     r31, 28(r1)
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
label_80D0CEFC:
    ctx->pc = 0x80D0CEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CEFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0CEFC: lwz     r30, 24(r1)
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
label_80D0CF00:
    ctx->pc = 0x80D0CF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0CF00: lwz     r29, 20(r1)
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
label_80D0CF04:
    ctx->pc = 0x80D0CF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0CF04: lwz     r28, 16(r1)
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
label_80D0CF08:
    ctx->pc = 0x80D0CF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CF08: lwz     r0, 36(r1)
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
label_80D0CF0C:
    ctx->pc = 0x80D0CF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0CF0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CF0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CF10:
    ctx->pc = 0x80D0CF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF10u)) return;
    // 80D0CF10: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D0CF14:
    ctx->pc = 0x80D0CF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF14u)) return;
    // 80D0CF14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0CF18:
    ctx->pc = 0x80D0CF18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CF18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D0CF18: stwu     r1, -16(r1)
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
label_80D0CF1C:
    ctx->pc = 0x80D0CF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0CF1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CF20:
    ctx->pc = 0x80D0CF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0CF20: stw     r0, 20(r1)
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
label_80D0CF24:
    ctx->pc = 0x80D0CF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0CF24: stw     r31, 12(r1)
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
label_80D0CF28:
    ctx->pc = 0x80D0CF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF28u)) return;
    // 80D0CF28: lis     r6, -27348
    ctx->gpr[6] = ((u32)(s32)(-27348) << 16);

label_80D0CF2C:
    ctx->pc = 0x80D0CF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF2Cu)) return;
    // 80D0CF2C: addi    r6, r6, 1896
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1896);

label_80D0CF30:
    ctx->pc = 0x80D0CF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CF30: lwz     r0, 0(r6)
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
label_80D0CF34:
    ctx->pc = 0x80D0CF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF34u)) return;
    // 80D0CF34: cmpw    r3, r0
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

label_80D0CF38:
    ctx->pc = 0x80D0CF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF38u)) return;
    // 80D0CF38: bc    4, 0, 0x80D0CF74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D0CF74;
        }
    }

label_80D0CF3C:
    ctx->pc = 0x80D0CF3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CF3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D0CF3C: lis     r6, -27348
    ctx->gpr[6] = ((u32)(s32)(-27348) << 16);

label_80D0CF40:
    ctx->pc = 0x80D0CF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF40u)) return;
    // 80D0CF40: addi    r6, r6, 1900
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1900);

label_80D0CF44:
    ctx->pc = 0x80D0CF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CF44: lwz     r6, 0(r6)
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
label_80D0CF48:
    ctx->pc = 0x80D0CF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF48u)) return;
    // 80D0CF48: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D0CF4C:
    ctx->pc = 0x80D0CF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CF4C: lwzx    r0, r6, r31
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
label_80D0CF50:
    ctx->pc = 0x80D0CF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF50u)) return;
    // 80D0CF50: cmplwi  r0, 0x0000
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

label_80D0CF54:
    ctx->pc = 0x80D0CF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF54u)) return;
    // 80D0CF54: bc    4, 2, 0x80D0CF74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D0CF74;
        }
    }

label_80D0CF58:
    ctx->pc = 0x80D0CF58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CF58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D0CF58: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D0CF5C:
    ctx->pc = 0x80D0CF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF5Cu)) return;
    // 80D0CF5C: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80D0CF60:
    ctx->pc = 0x80D0CF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF60u)) return;
    // 80D0CF60: bl      0x80D0CC64
    {
            ctx->lr = 0x80D0CF64u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D0CC64u;
                return;
            }
            goto label_80D0CC64;
    }

label_80D0CF64:
    ctx->pc = 0x80D0CF64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CF64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D0CF64: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0CF68:
    ctx->pc = 0x80D0CF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF68u)) return;
    // 80D0CF68: addi    r4, r4, 1900
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1900);

label_80D0CF6C:
    ctx->pc = 0x80D0CF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0CF6C: lwz     r4, 0(r4)
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
label_80D0CF70:
    ctx->pc = 0x80D0CF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D0CF70: stwx    r3, r4, r31
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
label_80D0CF74:
    ctx->pc = 0x80D0CF74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CF74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0CF74: lwz     r31, 12(r1)
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
label_80D0CF78:
    ctx->pc = 0x80D0CF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CF78: lwz     r0, 20(r1)
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
label_80D0CF7C:
    ctx->pc = 0x80D0CF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0CF7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CF7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CF80:
    ctx->pc = 0x80D0CF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF80u)) return;
    // 80D0CF80: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D0CF84:
    ctx->pc = 0x80D0CF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF84u)) return;
    // 80D0CF84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0CF88:
    ctx->pc = 0x80D0CF88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CF88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D0CF88: stwu     r1, -16(r1)
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
label_80D0CF8C:
    ctx->pc = 0x80D0CF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0CF8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CF90:
    ctx->pc = 0x80D0CF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0CF90: stw     r0, 20(r1)
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
label_80D0CF94:
    ctx->pc = 0x80D0CF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0CF94: stw     r31, 12(r1)
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
label_80D0CF98:
    ctx->pc = 0x80D0CF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF98u)) return;
    // 80D0CF98: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0CF9C:
    ctx->pc = 0x80D0CF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CF9Cu)) return;
    // 80D0CF9C: addi    r4, r4, 1896
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1896);

label_80D0CFA0:
    ctx->pc = 0x80D0CFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CFA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CFA0: lwz     r0, 0(r4)
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
label_80D0CFA4:
    ctx->pc = 0x80D0CFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CFA4u)) return;
    // 80D0CFA4: cmpw    r3, r0
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

label_80D0CFA8:
    ctx->pc = 0x80D0CFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CFA8u)) return;
    // 80D0CFA8: bc    4, 0, 0x80D0CFE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D0CFE0;
        }
    }

label_80D0CFAC:
    ctx->pc = 0x80D0CFACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CFACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D0CFAC: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0CFB0:
    ctx->pc = 0x80D0CFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CFB0u)) return;
    // 80D0CFB0: addi    r4, r4, 1900
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1900);

label_80D0CFB4:
    ctx->pc = 0x80D0CFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CFB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CFB4: lwz     r4, 0(r4)
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
label_80D0CFB8:
    ctx->pc = 0x80D0CFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CFB8u)) return;
    // 80D0CFB8: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D0CFBC:
    ctx->pc = 0x80D0CFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CFBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CFBC: lwzx    r3, r4, r31
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
label_80D0CFC0:
    ctx->pc = 0x80D0CFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CFC0u)) return;
    // 80D0CFC0: cmplwi  r3, 0x0000
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

label_80D0CFC4:
    ctx->pc = 0x80D0CFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CFC4u)) return;
    // 80D0CFC4: bc    12, 2, 0x80D0CFE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D0CFE0;
        }
    }

label_80D0CFC8:
    ctx->pc = 0x80D0CFC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CFC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0CFC8: bl      0x8050F9E0
    {
            ctx->lr = 0x80D0CFCCu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D0CFCC:
    ctx->pc = 0x80D0CFCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CFCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D0CFCC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D0CFD0:
    ctx->pc = 0x80D0CFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CFD0u)) return;
    // 80D0CFD0: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0CFD4:
    ctx->pc = 0x80D0CFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CFD4u)) return;
    // 80D0CFD4: addi    r3, r3, 1900
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1900);

label_80D0CFD8:
    ctx->pc = 0x80D0CFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CFD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D0CFD8: lwz     r3, 0(r3)
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
label_80D0CFDC:
    ctx->pc = 0x80D0CFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CFDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D0CFDC: stwx    r0, r3, r31
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
label_80D0CFE0:
    ctx->pc = 0x80D0CFE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CFE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0CFE0: lwz     r31, 12(r1)
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
label_80D0CFE4:
    ctx->pc = 0x80D0CFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CFE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0CFE4: lwz     r0, 20(r1)
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
label_80D0CFE8:
    ctx->pc = 0x80D0CFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0CFE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0CFE8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CFEC:
    ctx->pc = 0x80D0CFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CFECu)) return;
    // 80D0CFEC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D0CFF0:
    ctx->pc = 0x80D0CFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CFF0u)) return;
    // 80D0CFF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0CFF4:
    ctx->pc = 0x80D0CFF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0CFF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0CFF4: stwu     r1, -16(r1)
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
label_80D0CFF8:
    ctx->pc = 0x80D0CFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CFF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0CFF8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0CFFC:
    ctx->pc = 0x80D0CFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0CFFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0CFFC: stw     r0, 20(r1)
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
label_80D0D000:
    ctx->pc = 0x80D0D000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D000u)) return;
    // 80D0D000: lis     r6, -27348
    ctx->gpr[6] = ((u32)(s32)(-27348) << 16);

label_80D0D004:
    ctx->pc = 0x80D0D004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D004u)) return;
    // 80D0D004: addi    r6, r6, 1896
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1896);

label_80D0D008:
    ctx->pc = 0x80D0D008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0D008: lwz     r0, 0(r6)
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
label_80D0D00C:
    ctx->pc = 0x80D0D00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D00Cu)) return;
    // 80D0D00C: cmpw    r3, r0
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

label_80D0D010:
    ctx->pc = 0x80D0D010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D010u)) return;
    // 80D0D010: bc    4, 0, 0x80D0D034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D0D034;
        }
    }

label_80D0D014:
    ctx->pc = 0x80D0D014u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0D014u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D0D014: lis     r6, -27348
    ctx->gpr[6] = ((u32)(s32)(-27348) << 16);

label_80D0D018:
    ctx->pc = 0x80D0D018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D018u)) return;
    // 80D0D018: addi    r6, r6, 1900
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1900);

label_80D0D01C:
    ctx->pc = 0x80D0D01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D01Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0D01C: lwz     r6, 0(r6)
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
label_80D0D020:
    ctx->pc = 0x80D0D020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D020u)) return;
    // 80D0D020: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D0D024:
    ctx->pc = 0x80D0D024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D024u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0D024: lwzx    r3, r6, r0
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
label_80D0D028:
    ctx->pc = 0x80D0D028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D028u)) return;
    // 80D0D028: cmplwi  r3, 0x0000
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

label_80D0D02C:
    ctx->pc = 0x80D0D02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D02Cu)) return;
    // 80D0D02C: bc    12, 2, 0x80D0D034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D0D034;
        }
    }

label_80D0D030:
    ctx->pc = 0x80D0D030u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0D030u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0D030: bl      0x80D0CD20
    {
            ctx->lr = 0x80D0D034u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D0CD20u;
                return;
            }
            goto label_80D0CD20;
    }

label_80D0D034:
    ctx->pc = 0x80D0D034u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0D034u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0D034: lwz     r0, 20(r1)
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
label_80D0D038:
    ctx->pc = 0x80D0D038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0D038u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0D038: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0D03C:
    ctx->pc = 0x80D0D03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D03Cu)) return;
    // 80D0D03C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D0D040:
    ctx->pc = 0x80D0D040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D040u)) return;
    // 80D0D040: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0D044:
    ctx->pc = 0x80D0D044u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0D044u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0D044: stwu     r1, -16(r1)
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
label_80D0D048:
    ctx->pc = 0x80D0D048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0D048: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0D04C:
    ctx->pc = 0x80D0D04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D04Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0D04C: stw     r0, 20(r1)
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
label_80D0D050:
    ctx->pc = 0x80D0D050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D050u)) return;
    // 80D0D050: lis     r6, -27348
    ctx->gpr[6] = ((u32)(s32)(-27348) << 16);

label_80D0D054:
    ctx->pc = 0x80D0D054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D054u)) return;
    // 80D0D054: addi    r6, r6, 1896
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1896);

label_80D0D058:
    ctx->pc = 0x80D0D058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D058u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0D058: lwz     r0, 0(r6)
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
label_80D0D05C:
    ctx->pc = 0x80D0D05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D05Cu)) return;
    // 80D0D05C: cmpw    r3, r0
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

label_80D0D060:
    ctx->pc = 0x80D0D060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D060u)) return;
    // 80D0D060: bc    4, 0, 0x80D0D084
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D0D084;
        }
    }

label_80D0D064:
    ctx->pc = 0x80D0D064u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0D064u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D0D064: lis     r6, -27348
    ctx->gpr[6] = ((u32)(s32)(-27348) << 16);

label_80D0D068:
    ctx->pc = 0x80D0D068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D068u)) return;
    // 80D0D068: addi    r6, r6, 1900
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1900);

label_80D0D06C:
    ctx->pc = 0x80D0D06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D06Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0D06C: lwz     r6, 0(r6)
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
label_80D0D070:
    ctx->pc = 0x80D0D070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D070u)) return;
    // 80D0D070: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D0D074:
    ctx->pc = 0x80D0D074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0D074: lwzx    r3, r6, r0
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
label_80D0D078:
    ctx->pc = 0x80D0D078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D078u)) return;
    // 80D0D078: cmplwi  r3, 0x0000
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

label_80D0D07C:
    ctx->pc = 0x80D0D07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D07Cu)) return;
    // 80D0D07C: bc    12, 2, 0x80D0D084
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D0D084;
        }
    }

label_80D0D080:
    ctx->pc = 0x80D0D080u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0D080u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0D080: bl      0x80D0CD70
    {
            ctx->lr = 0x80D0D084u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D0CD70u;
                return;
            }
            goto label_80D0CD70;
    }

label_80D0D084:
    ctx->pc = 0x80D0D084u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0D084u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0D084: lwz     r0, 20(r1)
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
label_80D0D088:
    ctx->pc = 0x80D0D088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0D088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0D088: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0D08C:
    ctx->pc = 0x80D0D08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D08Cu)) return;
    // 80D0D08C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D0D090:
    ctx->pc = 0x80D0D090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D090u)) return;
    // 80D0D090: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0D094:
    ctx->pc = 0x80D0D094u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0D094u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0D094: stwu     r1, -16(r1)
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
label_80D0D098:
    ctx->pc = 0x80D0D098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0D098: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0D09C:
    ctx->pc = 0x80D0D09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D09Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0D09C: stw     r0, 20(r1)
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
label_80D0D0A0:
    ctx->pc = 0x80D0D0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D0A0u)) return;
    // 80D0D0A0: lis     r6, -27348
    ctx->gpr[6] = ((u32)(s32)(-27348) << 16);

label_80D0D0A4:
    ctx->pc = 0x80D0D0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D0A4u)) return;
    // 80D0D0A4: addi    r6, r6, 1896
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1896);

label_80D0D0A8:
    ctx->pc = 0x80D0D0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D0A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0D0A8: lwz     r0, 0(r6)
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
label_80D0D0AC:
    ctx->pc = 0x80D0D0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D0ACu)) return;
    // 80D0D0AC: cmpw    r3, r0
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

label_80D0D0B0:
    ctx->pc = 0x80D0D0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D0B0u)) return;
    // 80D0D0B0: bc    4, 0, 0x80D0D0D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D0D0D4;
        }
    }

label_80D0D0B4:
    ctx->pc = 0x80D0D0B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0D0B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D0D0B4: lis     r6, -27348
    ctx->gpr[6] = ((u32)(s32)(-27348) << 16);

label_80D0D0B8:
    ctx->pc = 0x80D0D0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D0B8u)) return;
    // 80D0D0B8: addi    r6, r6, 1900
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1900);

label_80D0D0BC:
    ctx->pc = 0x80D0D0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D0BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0D0BC: lwz     r6, 0(r6)
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
label_80D0D0C0:
    ctx->pc = 0x80D0D0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D0C0u)) return;
    // 80D0D0C0: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D0D0C4:
    ctx->pc = 0x80D0D0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D0C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0D0C4: lwzx    r3, r6, r0
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
label_80D0D0C8:
    ctx->pc = 0x80D0D0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D0C8u)) return;
    // 80D0D0C8: cmplwi  r3, 0x0000
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

label_80D0D0CC:
    ctx->pc = 0x80D0D0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D0CCu)) return;
    // 80D0D0CC: bc    12, 2, 0x80D0D0D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D0D0D4;
        }
    }

label_80D0D0D0:
    ctx->pc = 0x80D0D0D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0D0D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D0D0D0: bl      0x80D0CDC0
    {
            ctx->lr = 0x80D0D0D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D0CDC0u;
                return;
            }
            goto label_80D0CDC0;
    }

label_80D0D0D4:
    ctx->pc = 0x80D0D0D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0D0D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0D0D4: lwz     r0, 20(r1)
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
label_80D0D0D8:
    ctx->pc = 0x80D0D0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0D0D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0D0D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0D0DC:
    ctx->pc = 0x80D0D0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D0DCu)) return;
    // 80D0D0DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D0D0E0:
    ctx->pc = 0x80D0D0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D0E0u)) return;
    // 80D0D0E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

label_80D0D0E4:
    ctx->pc = 0x80D0D0E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0D0E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D0D0E4: stwu     r1, -32(r1)
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
label_80D0D0E8:
    ctx->pc = 0x80D0D0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D0E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D0D0E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0D0EC:
    ctx->pc = 0x80D0D0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D0ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D0D0EC: stw     r0, 36(r1)
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
label_80D0D0F0:
    ctx->pc = 0x80D0D0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D0F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D0D0F0: stw     r31, 28(r1)
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
label_80D0D0F4:
    ctx->pc = 0x80D0D0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D0F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D0D0F4: stw     r30, 24(r1)
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
label_80D0D0F8:
    ctx->pc = 0x80D0D0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D0F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0D0F8: stw     r29, 20(r1)
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
label_80D0D0FC:
    ctx->pc = 0x80D0D0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D0FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0D0FC: stw     r28, 16(r1)
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
label_80D0D100:
    ctx->pc = 0x80D0D100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D100u)) return;
    // 80D0D100: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D0D104:
    ctx->pc = 0x80D0D104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D104u)) return;
    // 80D0D104: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D0D108:
    ctx->pc = 0x80D0D108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D108u)) return;
    // 80D0D108: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80D0D10C:
    ctx->pc = 0x80D0D10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D10Cu)) return;
    // 80D0D10C: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80D0D110:
    ctx->pc = 0x80D0D110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D110u)) return;
    // 80D0D110: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D0D114:
    ctx->pc = 0x80D0D114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D114u)) return;
    // 80D0D114: bl      0x80401DB0
    {
            ctx->lr = 0x80D0D118u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80D0D118:
    ctx->pc = 0x80D0D118u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0D118u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D0D118: lis     r4, -27348
    ctx->gpr[4] = ((u32)(s32)(-27348) << 16);

label_80D0D11C:
    ctx->pc = 0x80D0D11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D11Cu)) return;
    // 80D0D11C: addi    r4, r4, 1904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1904);

label_80D0D120:
    ctx->pc = 0x80D0D120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0D120: lwz     r0, 0(r4)
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
label_80D0D124:
    ctx->pc = 0x80D0D124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D124u)) return;
    // 80D0D124: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80D0D128:
    ctx->pc = 0x80D0D128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D128u)) return;
    // 80D0D128: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D0D12C:
    ctx->pc = 0x80D0D12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D12Cu)) return;
    // 80D0D12C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D0D130:
    ctx->pc = 0x80D0D130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D130u)) return;
    // 80D0D130: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D0D134:
    ctx->pc = 0x80D0D134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D134u)) return;
    // 80D0D134: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D0D138:
    ctx->pc = 0x80D0D138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D138u)) return;
    // 80D0D138: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80D0D13C:
    ctx->pc = 0x80D0D13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D13Cu)) return;
    // 80D0D13C: bl      0x8050A0D4
    {
            ctx->lr = 0x80D0D140u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80D0D140:
    ctx->pc = 0x80D0D140u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0D140u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D0D140: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D0D144:
    ctx->pc = 0x80D0D144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D144u)) return;
    // 80D0D144: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80D0D148:
    ctx->pc = 0x80D0D148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D148u)) return;
    // 80D0D148: bl      0x80509C74
    {
            ctx->lr = 0x80D0D14Cu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80D0D14C:
    ctx->pc = 0x80D0D14Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0D14Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D0D14C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D0D150:
    ctx->pc = 0x80D0D150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D150u)) return;
    // 80D0D150: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D0D154:
    ctx->pc = 0x80D0D154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D154u)) return;
    // 80D0D154: bl      0x80509BF8
    {
            ctx->lr = 0x80D0D158u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80D0D158:
    ctx->pc = 0x80D0D158u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0D158u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D0D158: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D0D15C:
    ctx->pc = 0x80D0D15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D15Cu)) return;
    // 80D0D15C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D0D160:
    ctx->pc = 0x80D0D160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D160u)) return;
    // 80D0D160: bl      0x80509B94
    {
            ctx->lr = 0x80D0D164u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80D0D164:
    ctx->pc = 0x80D0D164u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D0D164u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80D0D164: lis     r3, -27348
    ctx->gpr[3] = ((u32)(s32)(-27348) << 16);

label_80D0D168:
    ctx->pc = 0x80D0D168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D168u)) return;
    // 80D0D168: addi    r4, r3, 1904
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(1904);

label_80D0D16C:
    ctx->pc = 0x80D0D16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D16Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D0D16C: lwz     r3, 0(r4)
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
label_80D0D170:
    ctx->pc = 0x80D0D170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D170u)) return;
    // 80D0D170: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80D0D174:
    ctx->pc = 0x80D0D174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D0D174: stw     r0, 0(r4)
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
label_80D0D178:
    ctx->pc = 0x80D0D178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D178u)) return;
    // 80D0D178: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80D0D17C:
    ctx->pc = 0x80D0D17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D17Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D0D17C: stw     r0, 0(r4)
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
label_80D0D180:
    ctx->pc = 0x80D0D180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D0D180: lwz     r31, 28(r1)
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
label_80D0D184:
    ctx->pc = 0x80D0D184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D184u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D0D184: lwz     r30, 24(r1)
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
label_80D0D188:
    ctx->pc = 0x80D0D188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D0D188: lwz     r29, 20(r1)
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
label_80D0D18C:
    ctx->pc = 0x80D0D18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D18Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D0D18C: lwz     r28, 16(r1)
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
label_80D0D190:
    ctx->pc = 0x80D0D190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D0D190: lwz     r0, 36(r1)
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
label_80D0D194:
    ctx->pc = 0x80D0D194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D0D194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D0D194: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D0D198:
    ctx->pc = 0x80D0D198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D198u)) return;
    // 80D0D198: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D0D19C:
    ctx->pc = 0x80D0D19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D0D19Cu)) return;
    // 80D0D19C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D0BDA0;
        }
    }

    ctx->pc = 0x80D0D1A0u;
    return;
return_dispatch_80D0BDA0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D0BDD8u: goto label_80D0BDD8;
    case 0x80D0BDDCu: goto label_80D0BDDC;
    case 0x80D0BDE0u: goto label_80D0BDE0;
    case 0x80D0BDE8u: goto label_80D0BDE8;
    case 0x80D0BDF8u: goto label_80D0BDF8;
    case 0x80D0BE20u: goto label_80D0BE20;
    case 0x80D0BE3Cu: goto label_80D0BE3C;
    case 0x80D0BE4Cu: goto label_80D0BE4C;
    case 0x80D0BE54u: goto label_80D0BE54;
    case 0x80D0BE7Cu: goto label_80D0BE7C;
    case 0x80D0BE84u: goto label_80D0BE84;
    case 0x80D0BE94u: goto label_80D0BE94;
    case 0x80D0BE9Cu: goto label_80D0BE9C;
    case 0x80D0BEA4u: goto label_80D0BEA4;
    case 0x80D0BECCu: goto label_80D0BECC;
    case 0x80D0BED4u: goto label_80D0BED4;
    case 0x80D0BEFCu: goto label_80D0BEFC;
    case 0x80D0BF04u: goto label_80D0BF04;
    case 0x80D0BF10u: goto label_80D0BF10;
    case 0x80D0BF34u: goto label_80D0BF34;
    case 0x80D0BF78u: goto label_80D0BF78;
    case 0x80D0BF80u: goto label_80D0BF80;
    case 0x80D0BF88u: goto label_80D0BF88;
    case 0x80D0BF90u: goto label_80D0BF90;
    case 0x80D0BFB8u: goto label_80D0BFB8;
    case 0x80D0BFC0u: goto label_80D0BFC0;
    case 0x80D0BFE4u: goto label_80D0BFE4;
    case 0x80D0BFECu: goto label_80D0BFEC;
    case 0x80D0C010u: goto label_80D0C010;
    case 0x80D0C040u: goto label_80D0C040;
    case 0x80D0C05Cu: goto label_80D0C05C;
    case 0x80D0C08Cu: goto label_80D0C08C;
    case 0x80D0C0A8u: goto label_80D0C0A8;
    case 0x80D0C0B0u: goto label_80D0C0B0;
    case 0x80D0C0CCu: goto label_80D0C0CC;
    case 0x80D0C0D4u: goto label_80D0C0D4;
    case 0x80D0C0F0u: goto label_80D0C0F0;
    case 0x80D0C0F4u: goto label_80D0C0F4;
    case 0x80D0C0FCu: goto label_80D0C0FC;
    case 0x80D0C100u: goto label_80D0C100;
    case 0x80D0C108u: goto label_80D0C108;
    case 0x80D0C114u: goto label_80D0C114;
    case 0x80D0C11Cu: goto label_80D0C11C;
    case 0x80D0C140u: goto label_80D0C140;
    case 0x80D0C148u: goto label_80D0C148;
    case 0x80D0C150u: goto label_80D0C150;
    case 0x80D0C15Cu: goto label_80D0C15C;
    case 0x80D0C164u: goto label_80D0C164;
    case 0x80D0C16Cu: goto label_80D0C16C;
    case 0x80D0C178u: goto label_80D0C178;
    case 0x80D0C17Cu: goto label_80D0C17C;
    case 0x80D0C18Cu: goto label_80D0C18C;
    case 0x80D0C1BCu: goto label_80D0C1BC;
    case 0x80D0C1D0u: goto label_80D0C1D0;
    case 0x80D0C1F4u: goto label_80D0C1F4;
    case 0x80D0C224u: goto label_80D0C224;
    case 0x80D0C240u: goto label_80D0C240;
    case 0x80D0C250u: goto label_80D0C250;
    case 0x80D0C274u: goto label_80D0C274;
    case 0x80D0C27Cu: goto label_80D0C27C;
    case 0x80D0C284u: goto label_80D0C284;
    case 0x80D0C28Cu: goto label_80D0C28C;
    case 0x80D0C290u: goto label_80D0C290;
    case 0x80D0C298u: goto label_80D0C298;
    case 0x80D0C2A4u: goto label_80D0C2A4;
    case 0x80D0C2C8u: goto label_80D0C2C8;
    case 0x80D0C2D0u: goto label_80D0C2D0;
    case 0x80D0C2D4u: goto label_80D0C2D4;
    case 0x80D0C2DCu: goto label_80D0C2DC;
    case 0x80D0C2E4u: goto label_80D0C2E4;
    case 0x80D0C2E8u: goto label_80D0C2E8;
    case 0x80D0C2F0u: goto label_80D0C2F0;
    case 0x80D0C318u: goto label_80D0C318;
    case 0x80D0C348u: goto label_80D0C348;
    case 0x80D0C364u: goto label_80D0C364;
    case 0x80D0C394u: goto label_80D0C394;
    case 0x80D0C3B0u: goto label_80D0C3B0;
    case 0x80D0C3B8u: goto label_80D0C3B8;
    case 0x80D0C3C0u: goto label_80D0C3C0;
    case 0x80D0C3CCu: goto label_80D0C3CC;
    case 0x80D0C3F0u: goto label_80D0C3F0;
    case 0x80D0C3F8u: goto label_80D0C3F8;
    case 0x80D0C400u: goto label_80D0C400;
    case 0x80D0C428u: goto label_80D0C428;
    case 0x80D0C430u: goto label_80D0C430;
    case 0x80D0C438u: goto label_80D0C438;
    case 0x80D0C460u: goto label_80D0C460;
    case 0x80D0C468u: goto label_80D0C468;
    case 0x80D0C470u: goto label_80D0C470;
    case 0x80D0C498u: goto label_80D0C498;
    case 0x80D0C4A0u: goto label_80D0C4A0;
    case 0x80D0C4A8u: goto label_80D0C4A8;
    case 0x80D0C4D0u: goto label_80D0C4D0;
    case 0x80D0C4D8u: goto label_80D0C4D8;
    case 0x80D0C4DCu: goto label_80D0C4DC;
    case 0x80D0C4E0u: goto label_80D0C4E0;
    case 0x80D0C4E8u: goto label_80D0C4E8;
    case 0x80D0C4F0u: goto label_80D0C4F0;
    case 0x80D0C4F4u: goto label_80D0C4F4;
    case 0x80D0C4FCu: goto label_80D0C4FC;
    case 0x80D0C508u: goto label_80D0C508;
    case 0x80D0C510u: goto label_80D0C510;
    case 0x80D0C534u: goto label_80D0C534;
    case 0x80D0C53Cu: goto label_80D0C53C;
    case 0x80D0C544u: goto label_80D0C544;
    case 0x80D0C548u: goto label_80D0C548;
    case 0x80D0C578u: goto label_80D0C578;
    case 0x80D0C594u: goto label_80D0C594;
    case 0x80D0C5C4u: goto label_80D0C5C4;
    case 0x80D0C5E0u: goto label_80D0C5E0;
    case 0x80D0C5E8u: goto label_80D0C5E8;
    case 0x80D0C5F0u: goto label_80D0C5F0;
    case 0x80D0C5FCu: goto label_80D0C5FC;
    case 0x80D0C620u: goto label_80D0C620;
    case 0x80D0C628u: goto label_80D0C628;
    case 0x80D0C62Cu: goto label_80D0C62C;
    case 0x80D0C634u: goto label_80D0C634;
    case 0x80D0C638u: goto label_80D0C638;
    case 0x80D0C640u: goto label_80D0C640;
    case 0x80D0C668u: goto label_80D0C668;
    case 0x80D0C670u: goto label_80D0C670;
    case 0x80D0C694u: goto label_80D0C694;
    case 0x80D0C69Cu: goto label_80D0C69C;
    case 0x80D0C6A0u: goto label_80D0C6A0;
    case 0x80D0C6A8u: goto label_80D0C6A8;
    case 0x80D0C6B4u: goto label_80D0C6B4;
    case 0x80D0C6BCu: goto label_80D0C6BC;
    case 0x80D0C6E0u: goto label_80D0C6E0;
    case 0x80D0C6E8u: goto label_80D0C6E8;
    case 0x80D0C6F0u: goto label_80D0C6F0;
    case 0x80D0C718u: goto label_80D0C718;
    case 0x80D0C720u: goto label_80D0C720;
    case 0x80D0C748u: goto label_80D0C748;
    case 0x80D0C74Cu: goto label_80D0C74C;
    case 0x80D0C750u: goto label_80D0C750;
    case 0x80D0C758u: goto label_80D0C758;
    case 0x80D0C760u: goto label_80D0C760;
    case 0x80D0C764u: goto label_80D0C764;
    case 0x80D0C76Cu: goto label_80D0C76C;
    case 0x80D0C794u: goto label_80D0C794;
    case 0x80D0C79Cu: goto label_80D0C79C;
    case 0x80D0C7ACu: goto label_80D0C7AC;
    case 0x80D0C7B4u: goto label_80D0C7B4;
    case 0x80D0C7BCu: goto label_80D0C7BC;
    case 0x80D0C7D4u: goto label_80D0C7D4;
    case 0x80D0C7FCu: goto label_80D0C7FC;
    case 0x80D0C810u: goto label_80D0C810;
    case 0x80D0C838u: goto label_80D0C838;
    case 0x80D0C8C4u: goto label_80D0C8C4;
    case 0x80D0C8D0u: goto label_80D0C8D0;
    case 0x80D0C960u: goto label_80D0C960;
    case 0x80D0C968u: goto label_80D0C968;
    case 0x80D0C9D0u: goto label_80D0C9D0;
    case 0x80D0CA18u: goto label_80D0CA18;
    case 0x80D0CA84u: goto label_80D0CA84;
    case 0x80D0CB30u: goto label_80D0CB30;
    case 0x80D0CB58u: goto label_80D0CB58;
    case 0x80D0CBB8u: goto label_80D0CBB8;
    case 0x80D0CBF8u: goto label_80D0CBF8;
    case 0x80D0CC38u: goto label_80D0CC38;
    case 0x80D0CC94u: goto label_80D0CC94;
    case 0x80D0CCB8u: goto label_80D0CCB8;
    case 0x80D0CD54u: goto label_80D0CD54;
    case 0x80D0CDA4u: goto label_80D0CDA4;
    case 0x80D0CDF4u: goto label_80D0CDF4;
    case 0x80D0CE40u: goto label_80D0CE40;
    case 0x80D0CEC4u: goto label_80D0CEC4;
    case 0x80D0CEE8u: goto label_80D0CEE8;
    case 0x80D0CF64u: goto label_80D0CF64;
    case 0x80D0CFCCu: goto label_80D0CFCC;
    case 0x80D0D034u: goto label_80D0D034;
    case 0x80D0D084u: goto label_80D0D084;
    case 0x80D0D0D4u: goto label_80D0D0D4;
    case 0x80D0D118u: goto label_80D0D118;
    case 0x80D0D140u: goto label_80D0D140;
    case 0x80D0D14Cu: goto label_80D0D14C;
    case 0x80D0D158u: goto label_80D0D158;
    case 0x80D0D164u: goto label_80D0D164;
    default: return;
    }
}

