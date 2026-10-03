// DolRecomp output
#include "../generated.h"

void func_80C5B920(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80C5B920[951] = {
        &&label_80C5B920,
        &&label_80C5B924,
        &&label_80C5B928,
        &&label_80C5B92C,
        &&label_80C5B930,
        &&label_80C5B934,
        &&label_80C5B938,
        &&label_80C5B93C,
        &&label_80C5B940,
        &&label_80C5B944,
        &&label_80C5B948,
        &&label_80C5B94C,
        &&label_80C5B950,
        &&label_80C5B954,
        &&label_80C5B958,
        &&label_80C5B95C,
        &&label_80C5B960,
        &&label_80C5B964,
        &&label_80C5B968,
        &&label_80C5B96C,
        &&label_80C5B970,
        &&label_80C5B974,
        &&label_80C5B978,
        &&label_80C5B97C,
        &&label_80C5B980,
        &&label_80C5B984,
        &&label_80C5B988,
        &&label_80C5B98C,
        &&label_80C5B990,
        &&label_80C5B994,
        &&label_80C5B998,
        &&label_80C5B99C,
        &&label_80C5B9A0,
        &&label_80C5B9A4,
        &&label_80C5B9A8,
        &&label_80C5B9AC,
        &&label_80C5B9B0,
        &&label_80C5B9B4,
        &&label_80C5B9B8,
        &&label_80C5B9BC,
        &&label_80C5B9C0,
        &&label_80C5B9C4,
        &&label_80C5B9C8,
        &&label_80C5B9CC,
        &&label_80C5B9D0,
        &&label_80C5B9D4,
        &&label_80C5B9D8,
        &&label_80C5B9DC,
        &&label_80C5B9E0,
        &&label_80C5B9E4,
        &&label_80C5B9E8,
        &&label_80C5B9EC,
        &&label_80C5B9F0,
        &&label_80C5B9F4,
        &&label_80C5B9F8,
        &&label_80C5B9FC,
        &&label_80C5BA00,
        &&label_80C5BA04,
        &&label_80C5BA08,
        &&label_80C5BA0C,
        &&label_80C5BA10,
        &&label_80C5BA14,
        &&label_80C5BA18,
        &&label_80C5BA1C,
        &&label_80C5BA20,
        &&label_80C5BA24,
        &&label_80C5BA28,
        &&label_80C5BA2C,
        &&label_80C5BA30,
        &&label_80C5BA34,
        &&label_80C5BA38,
        &&label_80C5BA3C,
        &&label_80C5BA40,
        &&label_80C5BA44,
        &&label_80C5BA48,
        &&label_80C5BA4C,
        &&label_80C5BA50,
        &&label_80C5BA54,
        &&label_80C5BA58,
        &&label_80C5BA5C,
        &&label_80C5BA60,
        &&label_80C5BA64,
        &&label_80C5BA68,
        &&label_80C5BA6C,
        &&label_80C5BA70,
        &&label_80C5BA74,
        &&label_80C5BA78,
        &&label_80C5BA7C,
        &&label_80C5BA80,
        &&label_80C5BA84,
        &&label_80C5BA88,
        &&label_80C5BA8C,
        &&label_80C5BA90,
        &&label_80C5BA94,
        &&label_80C5BA98,
        &&label_80C5BA9C,
        &&label_80C5BAA0,
        &&label_80C5BAA4,
        &&label_80C5BAA8,
        &&label_80C5BAAC,
        &&label_80C5BAB0,
        &&label_80C5BAB4,
        &&label_80C5BAB8,
        &&label_80C5BABC,
        &&label_80C5BAC0,
        &&label_80C5BAC4,
        &&label_80C5BAC8,
        &&label_80C5BACC,
        &&label_80C5BAD0,
        &&label_80C5BAD4,
        &&label_80C5BAD8,
        &&label_80C5BADC,
        &&label_80C5BAE0,
        &&label_80C5BAE4,
        &&label_80C5BAE8,
        &&label_80C5BAEC,
        &&label_80C5BAF0,
        &&label_80C5BAF4,
        &&label_80C5BAF8,
        &&label_80C5BAFC,
        &&label_80C5BB00,
        &&label_80C5BB04,
        &&label_80C5BB08,
        &&label_80C5BB0C,
        &&label_80C5BB10,
        &&label_80C5BB14,
        &&label_80C5BB18,
        &&label_80C5BB1C,
        &&label_80C5BB20,
        &&label_80C5BB24,
        &&label_80C5BB28,
        &&label_80C5BB2C,
        &&label_80C5BB30,
        &&label_80C5BB34,
        &&label_80C5BB38,
        &&label_80C5BB3C,
        &&label_80C5BB40,
        &&label_80C5BB44,
        &&label_80C5BB48,
        &&label_80C5BB4C,
        &&label_80C5BB50,
        &&label_80C5BB54,
        &&label_80C5BB58,
        &&label_80C5BB5C,
        &&label_80C5BB60,
        &&label_80C5BB64,
        &&label_80C5BB68,
        &&label_80C5BB6C,
        &&label_80C5BB70,
        &&label_80C5BB74,
        &&label_80C5BB78,
        &&label_80C5BB7C,
        &&label_80C5BB80,
        &&label_80C5BB84,
        &&label_80C5BB88,
        &&label_80C5BB8C,
        &&label_80C5BB90,
        &&label_80C5BB94,
        &&label_80C5BB98,
        &&label_80C5BB9C,
        &&label_80C5BBA0,
        &&label_80C5BBA4,
        &&label_80C5BBA8,
        &&label_80C5BBAC,
        &&label_80C5BBB0,
        &&label_80C5BBB4,
        &&label_80C5BBB8,
        &&label_80C5BBBC,
        &&label_80C5BBC0,
        &&label_80C5BBC4,
        &&label_80C5BBC8,
        &&label_80C5BBCC,
        &&label_80C5BBD0,
        &&label_80C5BBD4,
        &&label_80C5BBD8,
        &&label_80C5BBDC,
        &&label_80C5BBE0,
        &&label_80C5BBE4,
        &&label_80C5BBE8,
        &&label_80C5BBEC,
        &&label_80C5BBF0,
        &&label_80C5BBF4,
        &&label_80C5BBF8,
        &&label_80C5BBFC,
        &&label_80C5BC00,
        &&label_80C5BC04,
        &&label_80C5BC08,
        &&label_80C5BC0C,
        &&label_80C5BC10,
        &&label_80C5BC14,
        &&label_80C5BC18,
        &&label_80C5BC1C,
        &&label_80C5BC20,
        &&label_80C5BC24,
        &&label_80C5BC28,
        &&label_80C5BC2C,
        &&label_80C5BC30,
        &&label_80C5BC34,
        &&label_80C5BC38,
        &&label_80C5BC3C,
        &&label_80C5BC40,
        &&label_80C5BC44,
        &&label_80C5BC48,
        &&label_80C5BC4C,
        &&label_80C5BC50,
        &&label_80C5BC54,
        &&label_80C5BC58,
        &&label_80C5BC5C,
        &&label_80C5BC60,
        &&label_80C5BC64,
        &&label_80C5BC68,
        &&label_80C5BC6C,
        &&label_80C5BC70,
        &&label_80C5BC74,
        &&label_80C5BC78,
        &&label_80C5BC7C,
        &&label_80C5BC80,
        &&label_80C5BC84,
        &&label_80C5BC88,
        &&label_80C5BC8C,
        &&label_80C5BC90,
        &&label_80C5BC94,
        &&label_80C5BC98,
        &&label_80C5BC9C,
        &&label_80C5BCA0,
        &&label_80C5BCA4,
        &&label_80C5BCA8,
        &&label_80C5BCAC,
        &&label_80C5BCB0,
        &&label_80C5BCB4,
        &&label_80C5BCB8,
        &&label_80C5BCBC,
        &&label_80C5BCC0,
        &&label_80C5BCC4,
        &&label_80C5BCC8,
        &&label_80C5BCCC,
        &&label_80C5BCD0,
        &&label_80C5BCD4,
        &&label_80C5BCD8,
        &&label_80C5BCDC,
        &&label_80C5BCE0,
        &&label_80C5BCE4,
        &&label_80C5BCE8,
        &&label_80C5BCEC,
        &&label_80C5BCF0,
        &&label_80C5BCF4,
        &&label_80C5BCF8,
        &&label_80C5BCFC,
        &&label_80C5BD00,
        &&label_80C5BD04,
        &&label_80C5BD08,
        &&label_80C5BD0C,
        &&label_80C5BD10,
        &&label_80C5BD14,
        &&label_80C5BD18,
        &&label_80C5BD1C,
        &&label_80C5BD20,
        &&label_80C5BD24,
        &&label_80C5BD28,
        &&label_80C5BD2C,
        &&label_80C5BD30,
        &&label_80C5BD34,
        &&label_80C5BD38,
        &&label_80C5BD3C,
        &&label_80C5BD40,
        &&label_80C5BD44,
        &&label_80C5BD48,
        &&label_80C5BD4C,
        &&label_80C5BD50,
        &&label_80C5BD54,
        &&label_80C5BD58,
        &&label_80C5BD5C,
        &&label_80C5BD60,
        &&label_80C5BD64,
        &&label_80C5BD68,
        &&label_80C5BD6C,
        &&label_80C5BD70,
        &&label_80C5BD74,
        &&label_80C5BD78,
        &&label_80C5BD7C,
        &&label_80C5BD80,
        &&label_80C5BD84,
        &&label_80C5BD88,
        &&label_80C5BD8C,
        &&label_80C5BD90,
        &&label_80C5BD94,
        &&label_80C5BD98,
        &&label_80C5BD9C,
        &&label_80C5BDA0,
        &&label_80C5BDA4,
        &&label_80C5BDA8,
        &&label_80C5BDAC,
        &&label_80C5BDB0,
        &&label_80C5BDB4,
        &&label_80C5BDB8,
        &&label_80C5BDBC,
        &&label_80C5BDC0,
        &&label_80C5BDC4,
        &&label_80C5BDC8,
        &&label_80C5BDCC,
        &&label_80C5BDD0,
        &&label_80C5BDD4,
        &&label_80C5BDD8,
        &&label_80C5BDDC,
        &&label_80C5BDE0,
        &&label_80C5BDE4,
        &&label_80C5BDE8,
        &&label_80C5BDEC,
        &&label_80C5BDF0,
        &&label_80C5BDF4,
        &&label_80C5BDF8,
        &&label_80C5BDFC,
        &&label_80C5BE00,
        &&label_80C5BE04,
        &&label_80C5BE08,
        &&label_80C5BE0C,
        &&label_80C5BE10,
        &&label_80C5BE14,
        &&label_80C5BE18,
        &&label_80C5BE1C,
        &&label_80C5BE20,
        &&label_80C5BE24,
        &&label_80C5BE28,
        &&label_80C5BE2C,
        &&label_80C5BE30,
        &&label_80C5BE34,
        &&label_80C5BE38,
        &&label_80C5BE3C,
        &&label_80C5BE40,
        &&label_80C5BE44,
        &&label_80C5BE48,
        &&label_80C5BE4C,
        &&label_80C5BE50,
        &&label_80C5BE54,
        &&label_80C5BE58,
        &&label_80C5BE5C,
        &&label_80C5BE60,
        &&label_80C5BE64,
        &&label_80C5BE68,
        &&label_80C5BE6C,
        &&label_80C5BE70,
        &&label_80C5BE74,
        &&label_80C5BE78,
        &&label_80C5BE7C,
        &&label_80C5BE80,
        &&label_80C5BE84,
        &&label_80C5BE88,
        &&label_80C5BE8C,
        &&label_80C5BE90,
        &&label_80C5BE94,
        &&label_80C5BE98,
        &&label_80C5BE9C,
        &&label_80C5BEA0,
        &&label_80C5BEA4,
        &&label_80C5BEA8,
        &&label_80C5BEAC,
        &&label_80C5BEB0,
        &&label_80C5BEB4,
        &&label_80C5BEB8,
        &&label_80C5BEBC,
        &&label_80C5BEC0,
        &&label_80C5BEC4,
        &&label_80C5BEC8,
        &&label_80C5BECC,
        &&label_80C5BED0,
        &&label_80C5BED4,
        &&label_80C5BED8,
        &&label_80C5BEDC,
        &&label_80C5BEE0,
        &&label_80C5BEE4,
        &&label_80C5BEE8,
        &&label_80C5BEEC,
        &&label_80C5BEF0,
        &&label_80C5BEF4,
        &&label_80C5BEF8,
        &&label_80C5BEFC,
        &&label_80C5BF00,
        &&label_80C5BF04,
        &&label_80C5BF08,
        &&label_80C5BF0C,
        &&label_80C5BF10,
        &&label_80C5BF14,
        &&label_80C5BF18,
        &&label_80C5BF1C,
        &&label_80C5BF20,
        &&label_80C5BF24,
        &&label_80C5BF28,
        &&label_80C5BF2C,
        &&label_80C5BF30,
        &&label_80C5BF34,
        &&label_80C5BF38,
        &&label_80C5BF3C,
        &&label_80C5BF40,
        &&label_80C5BF44,
        &&label_80C5BF48,
        &&label_80C5BF4C,
        &&label_80C5BF50,
        &&label_80C5BF54,
        &&label_80C5BF58,
        &&label_80C5BF5C,
        &&label_80C5BF60,
        &&label_80C5BF64,
        &&label_80C5BF68,
        &&label_80C5BF6C,
        &&label_80C5BF70,
        &&label_80C5BF74,
        &&label_80C5BF78,
        &&label_80C5BF7C,
        &&label_80C5BF80,
        &&label_80C5BF84,
        &&label_80C5BF88,
        &&label_80C5BF8C,
        &&label_80C5BF90,
        &&label_80C5BF94,
        &&label_80C5BF98,
        &&label_80C5BF9C,
        &&label_80C5BFA0,
        &&label_80C5BFA4,
        &&label_80C5BFA8,
        &&label_80C5BFAC,
        &&label_80C5BFB0,
        &&label_80C5BFB4,
        &&label_80C5BFB8,
        &&label_80C5BFBC,
        &&label_80C5BFC0,
        &&label_80C5BFC4,
        &&label_80C5BFC8,
        &&label_80C5BFCC,
        &&label_80C5BFD0,
        &&label_80C5BFD4,
        &&label_80C5BFD8,
        &&label_80C5BFDC,
        &&label_80C5BFE0,
        &&label_80C5BFE4,
        &&label_80C5BFE8,
        &&label_80C5BFEC,
        &&label_80C5BFF0,
        &&label_80C5BFF4,
        &&label_80C5BFF8,
        &&label_80C5BFFC,
        &&label_80C5C000,
        &&label_80C5C004,
        &&label_80C5C008,
        &&label_80C5C00C,
        &&label_80C5C010,
        &&label_80C5C014,
        &&label_80C5C018,
        &&label_80C5C01C,
        &&label_80C5C020,
        &&label_80C5C024,
        &&label_80C5C028,
        &&label_80C5C02C,
        &&label_80C5C030,
        &&label_80C5C034,
        &&label_80C5C038,
        &&label_80C5C03C,
        &&label_80C5C040,
        &&label_80C5C044,
        &&label_80C5C048,
        &&label_80C5C04C,
        &&label_80C5C050,
        &&label_80C5C054,
        &&label_80C5C058,
        &&label_80C5C05C,
        &&label_80C5C060,
        &&label_80C5C064,
        &&label_80C5C068,
        &&label_80C5C06C,
        &&label_80C5C070,
        &&label_80C5C074,
        &&label_80C5C078,
        &&label_80C5C07C,
        &&label_80C5C080,
        &&label_80C5C084,
        &&label_80C5C088,
        &&label_80C5C08C,
        &&label_80C5C090,
        &&label_80C5C094,
        &&label_80C5C098,
        &&label_80C5C09C,
        &&label_80C5C0A0,
        &&label_80C5C0A4,
        &&label_80C5C0A8,
        &&label_80C5C0AC,
        &&label_80C5C0B0,
        &&label_80C5C0B4,
        &&label_80C5C0B8,
        &&label_80C5C0BC,
        &&label_80C5C0C0,
        &&label_80C5C0C4,
        &&label_80C5C0C8,
        &&label_80C5C0CC,
        &&label_80C5C0D0,
        &&label_80C5C0D4,
        &&label_80C5C0D8,
        &&label_80C5C0DC,
        &&label_80C5C0E0,
        &&label_80C5C0E4,
        &&label_80C5C0E8,
        &&label_80C5C0EC,
        &&label_80C5C0F0,
        &&label_80C5C0F4,
        &&label_80C5C0F8,
        &&label_80C5C0FC,
        &&label_80C5C100,
        &&label_80C5C104,
        &&label_80C5C108,
        &&label_80C5C10C,
        &&label_80C5C110,
        &&label_80C5C114,
        &&label_80C5C118,
        &&label_80C5C11C,
        &&label_80C5C120,
        &&label_80C5C124,
        &&label_80C5C128,
        &&label_80C5C12C,
        &&label_80C5C130,
        &&label_80C5C134,
        &&label_80C5C138,
        &&label_80C5C13C,
        &&label_80C5C140,
        &&label_80C5C144,
        &&label_80C5C148,
        &&label_80C5C14C,
        &&label_80C5C150,
        &&label_80C5C154,
        &&label_80C5C158,
        &&label_80C5C15C,
        &&label_80C5C160,
        &&label_80C5C164,
        &&label_80C5C168,
        &&label_80C5C16C,
        &&label_80C5C170,
        &&label_80C5C174,
        &&label_80C5C178,
        &&label_80C5C17C,
        &&label_80C5C180,
        &&label_80C5C184,
        &&label_80C5C188,
        &&label_80C5C18C,
        &&label_80C5C190,
        &&label_80C5C194,
        &&label_80C5C198,
        &&label_80C5C19C,
        &&label_80C5C1A0,
        &&label_80C5C1A4,
        &&label_80C5C1A8,
        &&label_80C5C1AC,
        &&label_80C5C1B0,
        &&label_80C5C1B4,
        &&label_80C5C1B8,
        &&label_80C5C1BC,
        &&label_80C5C1C0,
        &&label_80C5C1C4,
        &&label_80C5C1C8,
        &&label_80C5C1CC,
        &&label_80C5C1D0,
        &&label_80C5C1D4,
        &&label_80C5C1D8,
        &&label_80C5C1DC,
        &&label_80C5C1E0,
        &&label_80C5C1E4,
        &&label_80C5C1E8,
        &&label_80C5C1EC,
        &&label_80C5C1F0,
        &&label_80C5C1F4,
        &&label_80C5C1F8,
        &&label_80C5C1FC,
        &&label_80C5C200,
        &&label_80C5C204,
        &&label_80C5C208,
        &&label_80C5C20C,
        &&label_80C5C210,
        &&label_80C5C214,
        &&label_80C5C218,
        &&label_80C5C21C,
        &&label_80C5C220,
        &&label_80C5C224,
        &&label_80C5C228,
        &&label_80C5C22C,
        &&label_80C5C230,
        &&label_80C5C234,
        &&label_80C5C238,
        &&label_80C5C23C,
        &&label_80C5C240,
        &&label_80C5C244,
        &&label_80C5C248,
        &&label_80C5C24C,
        &&label_80C5C250,
        &&label_80C5C254,
        &&label_80C5C258,
        &&label_80C5C25C,
        &&label_80C5C260,
        &&label_80C5C264,
        &&label_80C5C268,
        &&label_80C5C26C,
        &&label_80C5C270,
        &&label_80C5C274,
        &&label_80C5C278,
        &&label_80C5C27C,
        &&label_80C5C280,
        &&label_80C5C284,
        &&label_80C5C288,
        &&label_80C5C28C,
        &&label_80C5C290,
        &&label_80C5C294,
        &&label_80C5C298,
        &&label_80C5C29C,
        &&label_80C5C2A0,
        &&label_80C5C2A4,
        &&label_80C5C2A8,
        &&label_80C5C2AC,
        &&label_80C5C2B0,
        &&label_80C5C2B4,
        &&label_80C5C2B8,
        &&label_80C5C2BC,
        &&label_80C5C2C0,
        &&label_80C5C2C4,
        &&label_80C5C2C8,
        &&label_80C5C2CC,
        &&label_80C5C2D0,
        &&label_80C5C2D4,
        &&label_80C5C2D8,
        &&label_80C5C2DC,
        &&label_80C5C2E0,
        &&label_80C5C2E4,
        &&label_80C5C2E8,
        &&label_80C5C2EC,
        &&label_80C5C2F0,
        &&label_80C5C2F4,
        &&label_80C5C2F8,
        &&label_80C5C2FC,
        &&label_80C5C300,
        &&label_80C5C304,
        &&label_80C5C308,
        &&label_80C5C30C,
        &&label_80C5C310,
        &&label_80C5C314,
        &&label_80C5C318,
        &&label_80C5C31C,
        &&label_80C5C320,
        &&label_80C5C324,
        &&label_80C5C328,
        &&label_80C5C32C,
        &&label_80C5C330,
        &&label_80C5C334,
        &&label_80C5C338,
        &&label_80C5C33C,
        &&label_80C5C340,
        &&label_80C5C344,
        &&label_80C5C348,
        &&label_80C5C34C,
        &&label_80C5C350,
        &&label_80C5C354,
        &&label_80C5C358,
        &&label_80C5C35C,
        &&label_80C5C360,
        &&label_80C5C364,
        &&label_80C5C368,
        &&label_80C5C36C,
        &&label_80C5C370,
        &&label_80C5C374,
        &&label_80C5C378,
        &&label_80C5C37C,
        &&label_80C5C380,
        &&label_80C5C384,
        &&label_80C5C388,
        &&label_80C5C38C,
        &&label_80C5C390,
        &&label_80C5C394,
        &&label_80C5C398,
        &&label_80C5C39C,
        &&label_80C5C3A0,
        &&label_80C5C3A4,
        &&label_80C5C3A8,
        &&label_80C5C3AC,
        &&label_80C5C3B0,
        &&label_80C5C3B4,
        &&label_80C5C3B8,
        &&label_80C5C3BC,
        &&label_80C5C3C0,
        &&label_80C5C3C4,
        &&label_80C5C3C8,
        &&label_80C5C3CC,
        &&label_80C5C3D0,
        &&label_80C5C3D4,
        &&label_80C5C3D8,
        &&label_80C5C3DC,
        &&label_80C5C3E0,
        &&label_80C5C3E4,
        &&label_80C5C3E8,
        &&label_80C5C3EC,
        &&label_80C5C3F0,
        &&label_80C5C3F4,
        &&label_80C5C3F8,
        &&label_80C5C3FC,
        &&label_80C5C400,
        &&label_80C5C404,
        &&label_80C5C408,
        &&label_80C5C40C,
        &&label_80C5C410,
        &&label_80C5C414,
        &&label_80C5C418,
        &&label_80C5C41C,
        &&label_80C5C420,
        &&label_80C5C424,
        &&label_80C5C428,
        &&label_80C5C42C,
        &&label_80C5C430,
        &&label_80C5C434,
        &&label_80C5C438,
        &&label_80C5C43C,
        &&label_80C5C440,
        &&label_80C5C444,
        &&label_80C5C448,
        &&label_80C5C44C,
        &&label_80C5C450,
        &&label_80C5C454,
        &&label_80C5C458,
        &&label_80C5C45C,
        &&label_80C5C460,
        &&label_80C5C464,
        &&label_80C5C468,
        &&label_80C5C46C,
        &&label_80C5C470,
        &&label_80C5C474,
        &&label_80C5C478,
        &&label_80C5C47C,
        &&label_80C5C480,
        &&label_80C5C484,
        &&label_80C5C488,
        &&label_80C5C48C,
        &&label_80C5C490,
        &&label_80C5C494,
        &&label_80C5C498,
        &&label_80C5C49C,
        &&label_80C5C4A0,
        &&label_80C5C4A4,
        &&label_80C5C4A8,
        &&label_80C5C4AC,
        &&label_80C5C4B0,
        &&label_80C5C4B4,
        &&label_80C5C4B8,
        &&label_80C5C4BC,
        &&label_80C5C4C0,
        &&label_80C5C4C4,
        &&label_80C5C4C8,
        &&label_80C5C4CC,
        &&label_80C5C4D0,
        &&label_80C5C4D4,
        &&label_80C5C4D8,
        &&label_80C5C4DC,
        &&label_80C5C4E0,
        &&label_80C5C4E4,
        &&label_80C5C4E8,
        &&label_80C5C4EC,
        &&label_80C5C4F0,
        &&label_80C5C4F4,
        &&label_80C5C4F8,
        &&label_80C5C4FC,
        &&label_80C5C500,
        &&label_80C5C504,
        &&label_80C5C508,
        &&label_80C5C50C,
        &&label_80C5C510,
        &&label_80C5C514,
        &&label_80C5C518,
        &&label_80C5C51C,
        &&label_80C5C520,
        &&label_80C5C524,
        &&label_80C5C528,
        &&label_80C5C52C,
        &&label_80C5C530,
        &&label_80C5C534,
        &&label_80C5C538,
        &&label_80C5C53C,
        &&label_80C5C540,
        &&label_80C5C544,
        &&label_80C5C548,
        &&label_80C5C54C,
        &&label_80C5C550,
        &&label_80C5C554,
        &&label_80C5C558,
        &&label_80C5C55C,
        &&label_80C5C560,
        &&label_80C5C564,
        &&label_80C5C568,
        &&label_80C5C56C,
        &&label_80C5C570,
        &&label_80C5C574,
        &&label_80C5C578,
        &&label_80C5C57C,
        &&label_80C5C580,
        &&label_80C5C584,
        &&label_80C5C588,
        &&label_80C5C58C,
        &&label_80C5C590,
        &&label_80C5C594,
        &&label_80C5C598,
        &&label_80C5C59C,
        &&label_80C5C5A0,
        &&label_80C5C5A4,
        &&label_80C5C5A8,
        &&label_80C5C5AC,
        &&label_80C5C5B0,
        &&label_80C5C5B4,
        &&label_80C5C5B8,
        &&label_80C5C5BC,
        &&label_80C5C5C0,
        &&label_80C5C5C4,
        &&label_80C5C5C8,
        &&label_80C5C5CC,
        &&label_80C5C5D0,
        &&label_80C5C5D4,
        &&label_80C5C5D8,
        &&label_80C5C5DC,
        &&label_80C5C5E0,
        &&label_80C5C5E4,
        &&label_80C5C5E8,
        &&label_80C5C5EC,
        &&label_80C5C5F0,
        &&label_80C5C5F4,
        &&label_80C5C5F8,
        &&label_80C5C5FC,
        &&label_80C5C600,
        &&label_80C5C604,
        &&label_80C5C608,
        &&label_80C5C60C,
        &&label_80C5C610,
        &&label_80C5C614,
        &&label_80C5C618,
        &&label_80C5C61C,
        &&label_80C5C620,
        &&label_80C5C624,
        &&label_80C5C628,
        &&label_80C5C62C,
        &&label_80C5C630,
        &&label_80C5C634,
        &&label_80C5C638,
        &&label_80C5C63C,
        &&label_80C5C640,
        &&label_80C5C644,
        &&label_80C5C648,
        &&label_80C5C64C,
        &&label_80C5C650,
        &&label_80C5C654,
        &&label_80C5C658,
        &&label_80C5C65C,
        &&label_80C5C660,
        &&label_80C5C664,
        &&label_80C5C668,
        &&label_80C5C66C,
        &&label_80C5C670,
        &&label_80C5C674,
        &&label_80C5C678,
        &&label_80C5C67C,
        &&label_80C5C680,
        &&label_80C5C684,
        &&label_80C5C688,
        &&label_80C5C68C,
        &&label_80C5C690,
        &&label_80C5C694,
        &&label_80C5C698,
        &&label_80C5C69C,
        &&label_80C5C6A0,
        &&label_80C5C6A4,
        &&label_80C5C6A8,
        &&label_80C5C6AC,
        &&label_80C5C6B0,
        &&label_80C5C6B4,
        &&label_80C5C6B8,
        &&label_80C5C6BC,
        &&label_80C5C6C0,
        &&label_80C5C6C4,
        &&label_80C5C6C8,
        &&label_80C5C6CC,
        &&label_80C5C6D0,
        &&label_80C5C6D4,
        &&label_80C5C6D8,
        &&label_80C5C6DC,
        &&label_80C5C6E0,
        &&label_80C5C6E4,
        &&label_80C5C6E8,
        &&label_80C5C6EC,
        &&label_80C5C6F0,
        &&label_80C5C6F4,
        &&label_80C5C6F8,
        &&label_80C5C6FC,
        &&label_80C5C700,
        &&label_80C5C704,
        &&label_80C5C708,
        &&label_80C5C70C,
        &&label_80C5C710,
        &&label_80C5C714,
        &&label_80C5C718,
        &&label_80C5C71C,
        &&label_80C5C720,
        &&label_80C5C724,
        &&label_80C5C728,
        &&label_80C5C72C,
        &&label_80C5C730,
        &&label_80C5C734,
        &&label_80C5C738,
        &&label_80C5C73C,
        &&label_80C5C740,
        &&label_80C5C744,
        &&label_80C5C748,
        &&label_80C5C74C,
        &&label_80C5C750,
        &&label_80C5C754,
        &&label_80C5C758,
        &&label_80C5C75C,
        &&label_80C5C760,
        &&label_80C5C764,
        &&label_80C5C768,
        &&label_80C5C76C,
        &&label_80C5C770,
        &&label_80C5C774,
        &&label_80C5C778,
        &&label_80C5C77C,
        &&label_80C5C780,
        &&label_80C5C784,
        &&label_80C5C788,
        &&label_80C5C78C,
        &&label_80C5C790,
        &&label_80C5C794,
        &&label_80C5C798,
        &&label_80C5C79C,
        &&label_80C5C7A0,
        &&label_80C5C7A4,
        &&label_80C5C7A8,
        &&label_80C5C7AC,
        &&label_80C5C7B0,
        &&label_80C5C7B4,
        &&label_80C5C7B8,
        &&label_80C5C7BC,
        &&label_80C5C7C0,
        &&label_80C5C7C4,
        &&label_80C5C7C8,
        &&label_80C5C7CC,
        &&label_80C5C7D0,
        &&label_80C5C7D4,
        &&label_80C5C7D8,
        &&label_80C5C7DC,
        &&label_80C5C7E0,
        &&label_80C5C7E4,
        &&label_80C5C7E8,
        &&label_80C5C7EC,
        &&label_80C5C7F0,
        &&label_80C5C7F4,
        &&label_80C5C7F8
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80C5B920u && pc <= 0x80C5C7F8u && ((pc - 0x80C5B920u) & 3u) == 0u)
            goto *pc_table_80C5B920[(pc - 0x80C5B920u) >> 2];
    }
    return;
label_80C5B920:
    ctx->pc = 0x80C5B920u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5B920u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5B920: bl      0x80006DAC
    {
            ctx->lr = 0x80C5B924u;
            ctx->pc = 0x80006DACu;
            return;
    }

label_80C5B924:
    ctx->pc = 0x80C5B924u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5B924u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5B924: lwz     r17, 16(r3)
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
label_80C5B928:
    ctx->pc = 0x80C5B928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B928u)) return;
    // 80C5B928: cmplwi  r17, 0x0000
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

label_80C5B92C:
    ctx->pc = 0x80C5B92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B92Cu)) return;
    // 80C5B92C: bc    12, 2, 0x80C5BDFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5BDFC;
        }
    }

label_80C5B930:
    ctx->pc = 0x80C5B930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5B930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5B930: lwz     r31, 28(r17)
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
label_80C5B934:
    ctx->pc = 0x80C5B934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5B934: stw     r4, 8(r1)
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
label_80C5B938:
    ctx->pc = 0x80C5B938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5B938: stw     r5, 12(r1)
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
label_80C5B93C:
    ctx->pc = 0x80C5B93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B93Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5B93C: lha     r0, 2(r17)
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
label_80C5B940:
    ctx->pc = 0x80C5B940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B940u)) return;
    // 80C5B940: cmpwi   r0, 1
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

label_80C5B944:
    ctx->pc = 0x80C5B944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B944u)) return;
    // 80C5B944: bc    12, 2, 0x80C5B95C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5B95C;
        }
    }

label_80C5B948:
    ctx->pc = 0x80C5B948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5B948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5B948: bc    4, 0, 0x80C5B954
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5B954;
        }
    }

label_80C5B94C:
    ctx->pc = 0x80C5B94Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5B94Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5B94C: cmpwi   r0, 0
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

label_80C5B950:
    ctx->pc = 0x80C5B950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B950u)) return;
    // 80C5B950: b       0x80C5BDF8
    {
            goto label_80C5BDF8;
    }

label_80C5B954:
    ctx->pc = 0x80C5B954u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5B954u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5B954: cmpwi   r0, 3
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

label_80C5B958:
    ctx->pc = 0x80C5B958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B958u)) return;
    // 80C5B958: b       0x80C5BDF8
    {
            goto label_80C5BDF8;
    }

label_80C5B95C:
    ctx->pc = 0x80C5B95Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5B95Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C5B95C: lis     r3, -32758
    ctx->gpr[3] = ((u32)(s32)(-32758) << 16);

label_80C5B960:
    ctx->pc = 0x80C5B960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B960u)) return;
    // 80C5B960: addi    r3, r3, 29972
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29972);

label_80C5B964:
    ctx->pc = 0x80C5B964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B964u)) return;
    // 80C5B964: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80C5B968:
    ctx->pc = 0x80C5B968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B968u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5B968: lwz     r5, 24(r17)
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
label_80C5B96C:
    ctx->pc = 0x80C5B96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B96Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5B96C: lbz     r5, 4(r5)
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
label_80C5B970:
    ctx->pc = 0x80C5B970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B970u)) return;
    // 80C5B970: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C5B974:
    ctx->pc = 0x80C5B974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B974u)) return;
    // 80C5B974: bl      0x8048F87C
    {
            ctx->lr = 0x80C5B978u;
            ctx->pc = 0x8048F87Cu;
            return;
    }

label_80C5B978:
    ctx->pc = 0x80C5B978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5B978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5B978: b       0x80C5BDE8
    {
            goto label_80C5BDE8;
    }

label_80C5B97C:
    ctx->pc = 0x80C5B97Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5B97Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5B97C: lwz     r4, 24(r17)
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
label_80C5B980:
    ctx->pc = 0x80C5B980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5B980: lhz     r0, 4(r17)
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
label_80C5B984:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B984u)) return;
    // 80C5B984: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_80C5B988:
    ctx->pc = 0x80C5B988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5B988: lwzx    r4, r4, r0
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
label_80C5B98C:
    ctx->pc = 0x80C5B98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B98Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5B98C: lwz     r0, 0(r4)
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
label_80C5B990:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B990u)) return;
    // 80C5B990: cmplw   r3, r0
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

label_80C5B994:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B994u)) return;
    // 80C5B994: bc    12, 2, 0x80C5B9A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5B9A0;
        }
    }

label_80C5B998:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5B998u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5B998: addi    r31, r31, 24
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(24);

label_80C5B99C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B99Cu)) return;
    // 80C5B99C: b       0x80C5BDE8
    {
            goto label_80C5BDE8;
    }

label_80C5B9A0:
    ctx->pc = 0x80C5B9A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5B9A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5B9A0: lbz     r0, 14(r31)
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
label_80C5B9A4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B9A4u)) return;
    // 80C5B9A4: cmplwi  r0, 0x00FF
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

label_80C5B9A8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B9A8u)) return;
    // 80C5B9A8: bc    4, 2, 0x80C5B9C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5B9C4;
        }
    }

label_80C5B9AC:
    ctx->pc = 0x80C5B9ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5B9ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5B9AC: lwz     r4, 4(r31)
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
label_80C5B9B0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B9B0u)) return;
    // 80C5B9B0: bl      0x8048D760
    {
            ctx->lr = 0x80C5B9B4u;
            ctx->pc = 0x8048D760u;
            return;
    }

label_80C5B9B4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5B9B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5B9B4: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_80C5B9B8:
    ctx->pc = 0x80C5B9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B9B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5B9B8: stb     r0, 14(r31)
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
label_80C5B9BC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B9BCu)) return;
    // 80C5B9BC: addi    r31, r31, 24
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(24);

label_80C5B9C0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B9C0u)) return;
    // 80C5B9C0: b       0x80C5BDE8
    {
            goto label_80C5BDE8;
    }

label_80C5B9C4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5B9C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5B9C4: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80C5B9C8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B9C8u)) return;
    // 80C5B9C8: lis     r4, -27432
    ctx->gpr[4] = ((u32)(s32)(-27432) << 16);

label_80C5B9CC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B9CCu)) return;
    // 80C5B9CC: addi    r4, r4, 23912
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23912);

label_80C5B9D0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B9D0u)) return;
    // 80C5B9D0: bl      0x8048F81C
    {
            ctx->lr = 0x80C5B9D4u;
            ctx->pc = 0x8048F81Cu;
            return;
    }

label_80C5B9D4:
    ctx->pc = 0x80C5B9D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5B9D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5B9D4: lbz     r3, 15(r31)
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
label_80C5B9D8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B9D8u)) return;
    // 80C5B9D8: cmplwi  r3, 0x00FF
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

label_80C5B9DC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B9DCu)) return;
    // 80C5B9DC: bc    4, 2, 0x80C5B9FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5B9FC;
        }
    }

label_80C5B9E0:
    ctx->pc = 0x80C5B9E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5B9E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5B9E0: lwz     r3, 0(r31)
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
label_80C5B9E4:
    ctx->pc = 0x80C5B9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B9E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5B9E4: lwz     r4, 8(r31)
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
label_80C5B9E8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B9E8u)) return;
    // 80C5B9E8: bl      0x8048D760
    {
            ctx->lr = 0x80C5B9ECu;
            ctx->pc = 0x8048D760u;
            return;
    }

label_80C5B9EC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5B9ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5B9EC: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_80C5B9F0:
    ctx->pc = 0x80C5B9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B9F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5B9F0: stb     r0, 15(r31)
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
label_80C5B9F4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B9F4u)) return;
    // 80C5B9F4: addi    r31, r31, 24
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(24);

label_80C5B9F8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5B9F8u)) return;
    // 80C5B9F8: b       0x80C5BDE8
    {
            goto label_80C5BDE8;
    }

label_80C5B9FC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5B9FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5B9FC: lis     r4, -27432
    ctx->gpr[4] = ((u32)(s32)(-27432) << 16);

label_80C5BA00:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA00u)) return;
    // 80C5BA00: addi    r4, r4, 23864
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23864);

label_80C5BA04:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA04u)) return;
    // 80C5BA04: bl      0x8048F81C
    {
            ctx->lr = 0x80C5BA08u;
            ctx->pc = 0x8048F81Cu;
            return;
    }

label_80C5BA08:
    ctx->pc = 0x80C5BA08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BA08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5BA08: lwz     r3, 4(r31)
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
label_80C5BA0C:
    ctx->pc = 0x80C5BA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5BA0C: lwz     r3, 4(r3)
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
label_80C5BA10:
    ctx->pc = 0x80C5BA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5BA10: lwz     r27, 0(r3)
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
label_80C5BA14:
    ctx->pc = 0x80C5BA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5BA14: lwz     r29, 4(r3)
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
label_80C5BA18:
    ctx->pc = 0x80C5BA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5BA18: lwz     r3, 8(r31)
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
label_80C5BA1C:
    ctx->pc = 0x80C5BA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5BA1C: lwz     r3, 4(r3)
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
label_80C5BA20:
    ctx->pc = 0x80C5BA20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5BA20: lwz     r28, 0(r3)
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
label_80C5BA24:
    ctx->pc = 0x80C5BA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5BA24: lwz     r30, 4(r3)
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
label_80C5BA28:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA28u)) return;
    // 80C5BA28: lis     r3, -27432
    ctx->gpr[3] = ((u32)(s32)(-27432) << 16);

label_80C5BA2C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA2Cu)) return;
    // 80C5BA2C: addi    r3, r3, 23816
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23816);

label_80C5BA30:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA30u)) return;
    // 80C5BA30: lis     r4, -27432
    ctx->gpr[4] = ((u32)(s32)(-27432) << 16);

label_80C5BA34:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA34u)) return;
    // 80C5BA34: addi    r4, r4, 23912
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23912);

label_80C5BA38:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA38u)) return;
    // 80C5BA38: bl      0x8004B05C
    {
            ctx->lr = 0x80C5BA3Cu;
            ctx->pc = 0x8004B05Cu;
            return;
    }

label_80C5BA3C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BA3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5BA3C: lis     r3, -27432
    ctx->gpr[3] = ((u32)(s32)(-27432) << 16);

label_80C5BA40:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA40u)) return;
    // 80C5BA40: addi    r3, r3, 23768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23768);

label_80C5BA44:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA44u)) return;
    // 80C5BA44: lis     r4, -27432
    ctx->gpr[4] = ((u32)(s32)(-27432) << 16);

label_80C5BA48:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA48u)) return;
    // 80C5BA48: addi    r4, r4, 23864
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23864);

label_80C5BA4C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA4Cu)) return;
    // 80C5BA4C: bl      0x8004B05C
    {
            ctx->lr = 0x80C5BA50u;
            ctx->pc = 0x8004B05Cu;
            return;
    }

label_80C5BA50:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BA50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5BA50: lis     r3, -27432
    ctx->gpr[3] = ((u32)(s32)(-27432) << 16);

label_80C5BA54:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA54u)) return;
    // 80C5BA54: addi    r3, r3, 23816
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23816);

label_80C5BA58:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA58u)) return;
    // 80C5BA58: bl      0x8004A734
    {
            ctx->lr = 0x80C5BA5Cu;
            ctx->pc = 0x8004A734u;
            return;
    }

label_80C5BA5C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BA5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5BA5C: lis     r3, -27432
    ctx->gpr[3] = ((u32)(s32)(-27432) << 16);

label_80C5BA60:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA60u)) return;
    // 80C5BA60: addi    r3, r3, 23768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23768);

label_80C5BA64:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA64u)) return;
    // 80C5BA64: bl      0x8004A734
    {
            ctx->lr = 0x80C5BA68u;
            ctx->pc = 0x8004A734u;
            return;
    }

label_80C5BA68:
    ctx->pc = 0x80C5BA68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BA68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5BA68: lbz     r0, 13(r31)
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
label_80C5BA6C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA6Cu)) return;
    // 80C5BA6C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80C5BA70:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA70u)) return;
    // 80C5BA70: cmpwi   r0, 2
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

label_80C5BA74:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA74u)) return;
    // 80C5BA74: bc    12, 2, 0x80C5BC1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5BC1C;
        }
    }

label_80C5BA78:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BA78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5BA78: bc    4, 0, 0x80C5BA88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5BA88;
        }
    }

label_80C5BA7C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BA7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5BA7C: cmpwi   r0, 1
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

label_80C5BA80:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA80u)) return;
    // 80C5BA80: bc    4, 0, 0x80C5BA94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5BA94;
        }
    }

label_80C5BA84:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BA84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5BA84: b       0x80C5BDCC
    {
            goto label_80C5BDCC;
    }

label_80C5BA88:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BA88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5BA88: cmpwi   r0, 4
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

label_80C5BA8C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA8Cu)) return;
    // 80C5BA8C: bc    4, 0, 0x80C5BDCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5BDCC;
        }
    }

label_80C5BA90:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BA90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5BA90: b       0x80C5BCE4
    {
            goto label_80C5BCE4;
    }

label_80C5BA94:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BA94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80C5BA94: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_80C5BA98:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA98u)) return;
    // 80C5BA98: lis     r3, -27432
    ctx->gpr[3] = ((u32)(s32)(-27432) << 16);

label_80C5BA9C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BA9Cu)) return;
    // 80C5BA9C: addi    r18, r3, 23912
    ctx->gpr[18] = ctx->gpr[3] + (u32)(s32)(23912);

label_80C5BAA0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BAA0u)) return;
    // 80C5BAA0: lis     r3, -27432
    ctx->gpr[3] = ((u32)(s32)(-27432) << 16);

label_80C5BAA4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BAA4u)) return;
    // 80C5BAA4: addi    r19, r3, 23864
    ctx->gpr[19] = ctx->gpr[3] + (u32)(s32)(23864);

label_80C5BAA8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BAA8u)) return;
    // 80C5BAA8: lis     r3, -27433
    ctx->gpr[3] = ((u32)(s32)(-27433) << 16);

label_80C5BAAC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BAACu)) return;
    // 80C5BAAC: addi    r3, r3, 13308
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13308);

label_80C5BAB0:
    ctx->pc = 0x80C5BAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BAB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5BAB0: lfs     f31, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5BAB0u)) return;
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
label_80C5BAB4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BAB4u)) return;
    // 80C5BAB4: lis     r3, -27432
    ctx->gpr[3] = ((u32)(s32)(-27432) << 16);

label_80C5BAB8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BAB8u)) return;
    // 80C5BAB8: addi    r20, r3, 23816
    ctx->gpr[20] = ctx->gpr[3] + (u32)(s32)(23816);

label_80C5BABC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BABCu)) return;
    // 80C5BABC: lis     r3, -27432
    ctx->gpr[3] = ((u32)(s32)(-27432) << 16);

label_80C5BAC0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BAC0u)) return;
    // 80C5BAC0: addi    r21, r3, 23768
    ctx->gpr[21] = ctx->gpr[3] + (u32)(s32)(23768);

label_80C5BAC4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BAC4u)) return;
    // 80C5BAC4: b       0x80C5BC08
    {
            goto label_80C5BC08;
    }

label_80C5BAC8:
    ctx->pc = 0x80C5BAC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BAC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C5BAC8: lwz     r0, 20(r31)
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
label_80C5BACC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BACCu)) return;
    // 80C5BACC: rlwinm r26, r4, 2, 0, 29
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_80C5BAD0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BAD0u)) return;
    // 80C5BAD0: add   r3, r0, r26
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80C5BAD4:
    ctx->pc = 0x80C5BAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BAD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C5BAD4: lhz     r24, 0(r3)
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
label_80C5BAD8:
    ctx->pc = 0x80C5BAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BAD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C5BAD8: lhz     r23, 2(r3)
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
label_80C5BADC:
    ctx->pc = 0x80C5BADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BADCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5BADC: lwz     r5, 16(r31)
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
label_80C5BAE0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BAE0u)) return;
    // 80C5BAE0: addi    r0, r26, 2
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(2);

label_80C5BAE4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80C5BAE4u)) return;
    // 80C5BAE4: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80C5BAE8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BAE8u)) return;
    // 80C5BAE8: add   r22, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[22] = res;
    }

label_80C5BAEC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BAECu)) return;
    // 80C5BAEC: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_80C5BAF0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80C5BAF0u)) return;
    // 80C5BAF0: mulli   r0, r4, 48
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)48);

label_80C5BAF4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BAF4u)) return;
    // 80C5BAF4: add   r4, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80C5BAF8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BAF8u)) return;
    // 80C5BAF8: addi    r5, r1, 28
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(28);

label_80C5BAFC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BAFCu)) return;
    // 80C5BAFC: bl      0x8004A5F4
    {
            ctx->lr = 0x80C5BB00u;
            ctx->pc = 0x8004A5F4u;
            return;
    }

label_80C5BB00:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BB00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5BB00: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_80C5BB04:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB04u)) return;
    // 80C5BB04: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_80C5BB08:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB08u)) return;
    // 80C5BB08: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_80C5BB0C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB0Cu)) return;
    // 80C5BB0C: bl      0x8004A5F4
    {
            ctx->lr = 0x80C5BB10u;
            ctx->pc = 0x8004A5F4u;
            return;
    }

label_80C5BB10:
    ctx->pc = 0x80C5BB10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 22u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BB10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 22u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C5BB10: lfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BB10u)) return;
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
label_80C5BB14:
    ctx->pc = 0x80C5BB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C5BB14: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BB14u)) return;
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
label_80C5BB18:
    ctx->pc = 0x80C5BB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB18u)) return;
    // 80C5BB18: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5BB18u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C5BB1C:
    ctx->pc = 0x80C5BB1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB1Cu)) return;
    // 80C5BB1C: fmuls   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5BB1Cu)) return;
    ppc_fmuls(ctx, 0, 31, 0);

label_80C5BB20:
    ctx->pc = 0x80C5BB20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C5BB20: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BB20u)) return;
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
label_80C5BB24:
    ctx->pc = 0x80C5BB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C5BB24: lfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BB24u)) return;
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
label_80C5BB28:
    ctx->pc = 0x80C5BB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C5BB28: lfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BB28u)) return;
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
label_80C5BB2C:
    ctx->pc = 0x80C5BB2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB2Cu)) return;
    // 80C5BB2C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5BB2Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C5BB30:
    ctx->pc = 0x80C5BB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB30u)) return;
    // 80C5BB30: fmuls   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5BB30u)) return;
    ppc_fmuls(ctx, 0, 31, 0);

label_80C5BB34:
    ctx->pc = 0x80C5BB34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5BB34: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BB34u)) return;
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
label_80C5BB38:
    ctx->pc = 0x80C5BB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5BB38: lfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BB38u)) return;
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
label_80C5BB3C:
    ctx->pc = 0x80C5BB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5BB3C: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BB3Cu)) return;
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
label_80C5BB40:
    ctx->pc = 0x80C5BB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB40u)) return;
    // 80C5BB40: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5BB40u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C5BB44:
    ctx->pc = 0x80C5BB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB44u)) return;
    // 80C5BB44: fmuls   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5BB44u)) return;
    ppc_fmuls(ctx, 0, 31, 0);

label_80C5BB48:
    ctx->pc = 0x80C5BB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5BB48: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BB48u)) return;
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
label_80C5BB4C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB4Cu)) return;
    // 80C5BB4C: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_80C5BB50:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB50u)) return;
    // 80C5BB50: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_80C5BB54:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80C5BB54u)) return;
    // 80C5BB54: mulli   r22, r24, 12
    ctx->gpr[22] = (u32)((s64)(s32)ctx->gpr[24] * (s64)(s32)12);

label_80C5BB58:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB58u)) return;
    // 80C5BB58: add   r5, r27, r22
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80C5BB5C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB5Cu)) return;
    // 80C5BB5C: bl      0x8004A5F4
    {
            ctx->lr = 0x80C5BB60u;
            ctx->pc = 0x8004A5F4u;
            return;
    }

label_80C5BB60:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BB60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C5BB60: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_80C5BB64:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB64u)) return;
    // 80C5BB64: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_80C5BB68:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80C5BB68u)) return;
    // 80C5BB68: mulli   r23, r23, 12
    ctx->gpr[23] = (u32)((s64)(s32)ctx->gpr[23] * (s64)(s32)12);

label_80C5BB6C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB6Cu)) return;
    // 80C5BB6C: add   r5, r28, r23
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80C5BB70:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB70u)) return;
    // 80C5BB70: bl      0x8004A5F4
    {
            ctx->lr = 0x80C5BB74u;
            ctx->pc = 0x8004A5F4u;
            return;
    }

label_80C5BB74:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BB74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C5BB74: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_80C5BB78:
    ctx->pc = 0x80C5BB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5BB78: lwz     r4, 16(r31)
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
label_80C5BB7C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB7Cu)) return;
    // 80C5BB7C: addi    r0, r26, 1
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(1);

label_80C5BB80:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80C5BB80u)) return;
    // 80C5BB80: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80C5BB84:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB84u)) return;
    // 80C5BB84: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80C5BB88:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB88u)) return;
    // 80C5BB88: addi    r5, r1, 28
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(28);

label_80C5BB8C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB8Cu)) return;
    // 80C5BB8C: bl      0x8004ABF4
    {
            ctx->lr = 0x80C5BB90u;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80C5BB90:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BB90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C5BB90: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_80C5BB94:
    ctx->pc = 0x80C5BB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5BB94: lwz     r4, 16(r31)
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
label_80C5BB98:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BB98u)) return;
    // 80C5BB98: addi    r0, r26, 3
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(3);

label_80C5BB9C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80C5BB9Cu)) return;
    // 80C5BB9C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80C5BBA0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBA0u)) return;
    // 80C5BBA0: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80C5BBA4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBA4u)) return;
    // 80C5BBA4: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_80C5BBA8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBA8u)) return;
    // 80C5BBA8: bl      0x8004ABF4
    {
            ctx->lr = 0x80C5BBACu;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80C5BBAC:
    ctx->pc = 0x80C5BBACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BBACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C5BBAC: lfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BBACu)) return;
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
label_80C5BBB0:
    ctx->pc = 0x80C5BBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5BBB0: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BBB0u)) return;
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
label_80C5BBB4:
    ctx->pc = 0x80C5BBB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBB4u)) return;
    // 80C5BBB4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5BBB4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C5BBB8:
    ctx->pc = 0x80C5BBB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5BBB8: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BBB8u)) return;
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
label_80C5BBBC:
    ctx->pc = 0x80C5BBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5BBBC: lfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BBBCu)) return;
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
label_80C5BBC0:
    ctx->pc = 0x80C5BBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5BBC0: lfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BBC0u)) return;
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
label_80C5BBC4:
    ctx->pc = 0x80C5BBC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBC4u)) return;
    // 80C5BBC4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5BBC4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C5BBC8:
    ctx->pc = 0x80C5BBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5BBC8: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BBC8u)) return;
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
label_80C5BBCC:
    ctx->pc = 0x80C5BBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5BBCC: lfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BBCCu)) return;
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
label_80C5BBD0:
    ctx->pc = 0x80C5BBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5BBD0: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BBD0u)) return;
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
label_80C5BBD4:
    ctx->pc = 0x80C5BBD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBD4u)) return;
    // 80C5BBD4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5BBD4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C5BBD8:
    ctx->pc = 0x80C5BBD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5BBD8: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BBD8u)) return;
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
label_80C5BBDC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBDCu)) return;
    // 80C5BBDC: addi    r3, r1, 28
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(28);

label_80C5BBE0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBE0u)) return;
    // 80C5BBE0: bl      0x80C5A060
    {
            ctx->lr = 0x80C5BBE4u;
            ctx->pc = 0x80C5A060u;
            return;
    }

label_80C5BBE4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BBE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5BBE4: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_80C5BBE8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBE8u)) return;
    // 80C5BBE8: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_80C5BBEC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBECu)) return;
    // 80C5BBEC: add   r5, r29, r22
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80C5BBF0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBF0u)) return;
    // 80C5BBF0: bl      0x8004ABF4
    {
            ctx->lr = 0x80C5BBF4u;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80C5BBF4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BBF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5BBF4: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_80C5BBF8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBF8u)) return;
    // 80C5BBF8: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_80C5BBFC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BBFCu)) return;
    // 80C5BBFC: add   r5, r30, r23
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80C5BC00:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC00u)) return;
    // 80C5BC00: bl      0x8004ABF4
    {
            ctx->lr = 0x80C5BC04u;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80C5BC04:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BC04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5BC04: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_80C5BC08:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BC08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5BC08: rlwinm r4, r25, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[25], 0u) & 0x0000FFFFu;
    }

label_80C5BC0C:
    ctx->pc = 0x80C5BC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5BC0C: lbz     r0, 12(r31)
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
label_80C5BC10:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC10u)) return;
    // 80C5BC10: cmpw    r4, r0
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

label_80C5BC14:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC14u)) return;
    // 80C5BC14: bc    12, 0, 0x80C5BAC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C5BAC8u;
                return;
            }
            goto label_80C5BAC8;
        }
    }

label_80C5BC18:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BC18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5BC18: b       0x80C5BDCC
    {
            goto label_80C5BDCC;
    }

label_80C5BC1C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BC1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5BC1C: lis     r3, -27432
    ctx->gpr[3] = ((u32)(s32)(-27432) << 16);

label_80C5BC20:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC20u)) return;
    // 80C5BC20: addi    r3, r3, 23816
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23816);

label_80C5BC24:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC24u)) return;
    // 80C5BC24: bl      0x8004B49C
    {
            ctx->lr = 0x80C5BC28u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80C5BC28:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BC28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5BC28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5BC2C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC2Cu)) return;
    // 80C5BC2C: lis     r4, -27432
    ctx->gpr[4] = ((u32)(s32)(-27432) << 16);

label_80C5BC30:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC30u)) return;
    // 80C5BC30: addi    r4, r4, 23864
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23864);

label_80C5BC34:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC34u)) return;
    // 80C5BC34: bl      0x8004B460
    {
            ctx->lr = 0x80C5BC38u;
            ctx->pc = 0x8004B460u;
            return;
    }

label_80C5BC38:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BC38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5BC38: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_80C5BC3C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC3Cu)) return;
    // 80C5BC3C: b       0x80C5BCC8
    {
            goto label_80C5BCC8;
    }

label_80C5BC40:
    ctx->pc = 0x80C5BC40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 26u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BC40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 26u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C5BC40: lwz     r3, 20(r31)
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
label_80C5BC44:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC44u)) return;
    // 80C5BC44: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_80C5BC48:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC48u)) return;
    // 80C5BC48: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80C5BC4C:
    ctx->pc = 0x80C5BC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C5BC4C: lhz     r5, 0(r3)
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
label_80C5BC50:
    ctx->pc = 0x80C5BC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C5BC50: lhz     r6, 2(r3)
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
label_80C5BC54:
    ctx->pc = 0x80C5BC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C5BC54: lwz     r0, 16(r31)
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
label_80C5BC58:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80C5BC58u)) return;
    // 80C5BC58: mulli   r19, r4, 48
    ctx->gpr[19] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)48);

label_80C5BC5C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80C5BC5Cu)) return;
    // 80C5BC5C: mulli   r20, r5, 12
    ctx->gpr[20] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)12);

label_80C5BC60:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC60u)) return;
    // 80C5BC60: add   r4, r27, r20
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80C5BC64:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC64u)) return;
    // 80C5BC64: add   r5, r0, r19
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80C5BC68:
    ctx->pc = 0x80C5BC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5BC68: lwz     r3, 0(r5)
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
label_80C5BC6C:
    ctx->pc = 0x80C5BC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5BC6C: lwz     r0, 4(r5)
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
label_80C5BC70:
    ctx->pc = 0x80C5BC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5BC70: stw     r3, 0(r4)
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
label_80C5BC74:
    ctx->pc = 0x80C5BC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5BC74: stw     r0, 4(r4)
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
label_80C5BC78:
    ctx->pc = 0x80C5BC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5BC78: lwz     r0, 8(r5)
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
label_80C5BC7C:
    ctx->pc = 0x80C5BC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5BC7C: stw     r0, 8(r4)
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
label_80C5BC80:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC80u)) return;
    // 80C5BC80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5BC84:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80C5BC84u)) return;
    // 80C5BC84: mulli   r21, r6, 12
    ctx->gpr[21] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)12);

label_80C5BC88:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC88u)) return;
    // 80C5BC88: add   r5, r28, r21
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80C5BC8C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC8Cu)) return;
    // 80C5BC8C: bl      0x8004A5F4
    {
            ctx->lr = 0x80C5BC90u;
            ctx->pc = 0x8004A5F4u;
            return;
    }

label_80C5BC90:
    ctx->pc = 0x80C5BC90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BC90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5BC90: lwz     r3, 16(r31)
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
label_80C5BC94:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC94u)) return;
    // 80C5BC94: addi    r0, r19, 12
    ctx->gpr[0] = ctx->gpr[19] + (u32)(s32)(12);

label_80C5BC98:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC98u)) return;
    // 80C5BC98: add   r4, r29, r20
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80C5BC9C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BC9Cu)) return;
    // 80C5BC9C: add   r5, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80C5BCA0:
    ctx->pc = 0x80C5BCA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BCA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5BCA0: lwz     r3, 0(r5)
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
label_80C5BCA4:
    ctx->pc = 0x80C5BCA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BCA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5BCA4: lwz     r0, 4(r5)
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
label_80C5BCA8:
    ctx->pc = 0x80C5BCA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BCA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5BCA8: stw     r3, 0(r4)
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
label_80C5BCAC:
    ctx->pc = 0x80C5BCACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BCACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5BCAC: stw     r0, 4(r4)
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
label_80C5BCB0:
    ctx->pc = 0x80C5BCB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BCB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5BCB0: lwz     r0, 8(r5)
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
label_80C5BCB4:
    ctx->pc = 0x80C5BCB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BCB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5BCB4: stw     r0, 8(r4)
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
label_80C5BCB8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BCB8u)) return;
    // 80C5BCB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5BCBC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BCBCu)) return;
    // 80C5BCBC: add   r5, r30, r21
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80C5BCC0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BCC0u)) return;
    // 80C5BCC0: bl      0x8004ABF4
    {
            ctx->lr = 0x80C5BCC4u;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80C5BCC4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BCC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5BCC4: addi    r18, r18, 1
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(1);

label_80C5BCC8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BCC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5BCC8: rlwinm r4, r18, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[18], 0u) & 0x0000FFFFu;
    }

label_80C5BCCC:
    ctx->pc = 0x80C5BCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BCCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5BCCC: lbz     r0, 12(r31)
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
label_80C5BCD0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BCD0u)) return;
    // 80C5BCD0: cmpw    r4, r0
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

label_80C5BCD4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BCD4u)) return;
    // 80C5BCD4: bc    12, 0, 0x80C5BC40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C5BC40u;
                return;
            }
            goto label_80C5BC40;
        }
    }

label_80C5BCD8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BCD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5BCD8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C5BCDC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BCDCu)) return;
    // 80C5BCDC: bl      0x8004B504
    {
            ctx->lr = 0x80C5BCE0u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80C5BCE0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BCE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5BCE0: b       0x80C5BDCC
    {
            goto label_80C5BDCC;
    }

label_80C5BCE4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BCE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5BCE4: lis     r3, -27432
    ctx->gpr[3] = ((u32)(s32)(-27432) << 16);

label_80C5BCE8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BCE8u)) return;
    // 80C5BCE8: addi    r3, r3, 23816
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23816);

label_80C5BCEC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BCECu)) return;
    // 80C5BCEC: bl      0x8004B49C
    {
            ctx->lr = 0x80C5BCF0u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80C5BCF0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BCF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5BCF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5BCF4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BCF4u)) return;
    // 80C5BCF4: lis     r4, -27432
    ctx->gpr[4] = ((u32)(s32)(-27432) << 16);

label_80C5BCF8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BCF8u)) return;
    // 80C5BCF8: addi    r4, r4, 23864
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23864);

label_80C5BCFC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BCFCu)) return;
    // 80C5BCFC: bl      0x8004B460
    {
            ctx->lr = 0x80C5BD00u;
            ctx->pc = 0x8004B460u;
            return;
    }

label_80C5BD00:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BD00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5BD00: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_80C5BD04:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD04u)) return;
    // 80C5BD04: b       0x80C5BDB4
    {
            goto label_80C5BDB4;
    }

label_80C5BD08:
    ctx->pc = 0x80C5BD08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 33u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BD08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 33u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80C5BD08: lwz     r0, 20(r31)
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
label_80C5BD0C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD0Cu)) return;
    // 80C5BD0C: rlwinm r21, r3, 2, 0, 29
    {
        ctx->gpr[21] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C5BD10:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD10u)) return;
    // 80C5BD10: add   r5, r0, r21
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80C5BD14:
    ctx->pc = 0x80C5BD14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80C5BD14: lhz     r6, 0(r5)
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
label_80C5BD18:
    ctx->pc = 0x80C5BD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C5BD18: lwz     r4, 16(r31)
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
label_80C5BD1C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80C5BD1Cu)) return;
    // 80C5BD1C: mulli   r18, r3, 48
    ctx->gpr[18] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)48);

label_80C5BD20:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD20u)) return;
    // 80C5BD20: addi    r3, r18, 24
    ctx->gpr[3] = ctx->gpr[18] + (u32)(s32)(24);

label_80C5BD24:
    ctx->pc = 0x80C5BD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C5BD24: lhz     r0, 2(r5)
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
label_80C5BD28:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80C5BD28u)) return;
    // 80C5BD28: mulli   r19, r0, 12
    ctx->gpr[19] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80C5BD2C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD2Cu)) return;
    // 80C5BD2C: add   r5, r28, r19
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80C5BD30:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD30u)) return;
    // 80C5BD30: add   r4, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80C5BD34:
    ctx->pc = 0x80C5BD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C5BD34: lwz     r3, 0(r4)
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
label_80C5BD38:
    ctx->pc = 0x80C5BD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C5BD38: lwz     r0, 4(r4)
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
label_80C5BD3C:
    ctx->pc = 0x80C5BD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C5BD3C: stw     r3, 0(r5)
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
label_80C5BD40:
    ctx->pc = 0x80C5BD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C5BD40: stw     r0, 4(r5)
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
label_80C5BD44:
    ctx->pc = 0x80C5BD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C5BD44: lwz     r0, 8(r4)
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
label_80C5BD48:
    ctx->pc = 0x80C5BD48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5BD48: stw     r0, 8(r5)
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
label_80C5BD4C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD4Cu)) return;
    // 80C5BD4C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5BD50:
    ctx->pc = 0x80C5BD50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5BD50: lwz     r4, 16(r31)
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
label_80C5BD54:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD54u)) return;
    // 80C5BD54: addi    r0, r21, 2
    ctx->gpr[0] = ctx->gpr[21] + (u32)(s32)(2);

label_80C5BD58:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80C5BD58u)) return;
    // 80C5BD58: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80C5BD5C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD5Cu)) return;
    // 80C5BD5C: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80C5BD60:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80C5BD60u)) return;
    // 80C5BD60: mulli   r20, r6, 12
    ctx->gpr[20] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)12);

label_80C5BD64:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD64u)) return;
    // 80C5BD64: add   r5, r27, r20
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80C5BD68:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD68u)) return;
    // 80C5BD68: bl      0x8004A5F4
    {
            ctx->lr = 0x80C5BD6Cu;
            ctx->pc = 0x8004A5F4u;
            return;
    }

label_80C5BD6C:
    ctx->pc = 0x80C5BD6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BD6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C5BD6C: lwz     r3, 16(r31)
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
label_80C5BD70:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD70u)) return;
    // 80C5BD70: addi    r0, r18, 36
    ctx->gpr[0] = ctx->gpr[18] + (u32)(s32)(36);

label_80C5BD74:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD74u)) return;
    // 80C5BD74: add   r5, r30, r19
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80C5BD78:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD78u)) return;
    // 80C5BD78: add   r4, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80C5BD7C:
    ctx->pc = 0x80C5BD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C5BD7C: lwz     r3, 0(r4)
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
label_80C5BD80:
    ctx->pc = 0x80C5BD80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C5BD80: lwz     r0, 4(r4)
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
label_80C5BD84:
    ctx->pc = 0x80C5BD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5BD84: stw     r3, 0(r5)
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
label_80C5BD88:
    ctx->pc = 0x80C5BD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5BD88: stw     r0, 4(r5)
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
label_80C5BD8C:
    ctx->pc = 0x80C5BD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5BD8C: lwz     r0, 8(r4)
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
label_80C5BD90:
    ctx->pc = 0x80C5BD90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5BD90: stw     r0, 8(r5)
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
label_80C5BD94:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD94u)) return;
    // 80C5BD94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5BD98:
    ctx->pc = 0x80C5BD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5BD98: lwz     r4, 16(r31)
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
label_80C5BD9C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BD9Cu)) return;
    // 80C5BD9C: addi    r0, r21, 3
    ctx->gpr[0] = ctx->gpr[21] + (u32)(s32)(3);

label_80C5BDA0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80C5BDA0u)) return;
    // 80C5BDA0: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80C5BDA4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BDA4u)) return;
    // 80C5BDA4: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80C5BDA8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BDA8u)) return;
    // 80C5BDA8: add   r5, r29, r20
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80C5BDAC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BDACu)) return;
    // 80C5BDAC: bl      0x8004ABF4
    {
            ctx->lr = 0x80C5BDB0u;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80C5BDB0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BDB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5BDB0: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_80C5BDB4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BDB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5BDB4: rlwinm r3, r22, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[22], 0u) & 0x0000FFFFu;
    }

label_80C5BDB8:
    ctx->pc = 0x80C5BDB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BDB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5BDB8: lbz     r0, 12(r31)
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
label_80C5BDBC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BDBCu)) return;
    // 80C5BDBC: cmpw    r3, r0
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

label_80C5BDC0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BDC0u)) return;
    // 80C5BDC0: bc    12, 0, 0x80C5BD08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C5BD08u;
                return;
            }
            goto label_80C5BD08;
        }
    }

label_80C5BDC4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BDC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5BDC4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C5BDC8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BDC8u)) return;
    // 80C5BDC8: bl      0x8004B504
    {
            ctx->lr = 0x80C5BDCCu;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80C5BDCC:
    ctx->pc = 0x80C5BDCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BDCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5BDCC: lwz     r3, 4(r31)
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
label_80C5BDD0:
    ctx->pc = 0x80C5BDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BDD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5BDD0: lwz     r3, 4(r3)
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
label_80C5BDD4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BDD4u)) return;
    // 80C5BDD4: bl      0x80C5C130
    {
            ctx->lr = 0x80C5BDD8u;
            goto label_80C5C130;
    }

label_80C5BDD8:
    ctx->pc = 0x80C5BDD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BDD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5BDD8: lwz     r3, 8(r31)
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
label_80C5BDDC:
    ctx->pc = 0x80C5BDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BDDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5BDDC: lwz     r3, 4(r3)
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
label_80C5BDE0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BDE0u)) return;
    // 80C5BDE0: bl      0x80C5C130
    {
            ctx->lr = 0x80C5BDE4u;
            goto label_80C5C130;
    }

label_80C5BDE4:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BDE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5BDE4: addi    r31, r31, 24
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(24);

label_80C5BDE8:
    ctx->pc = 0x80C5BDE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BDE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5BDE8: lwz     r3, 0(r31)
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
label_80C5BDEC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BDECu)) return;
    // 80C5BDEC: cmplwi  r3, 0x0000
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

label_80C5BDF0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BDF0u)) return;
    // 80C5BDF0: bc    4, 2, 0x80C5B97C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C5B97Cu;
                return;
            }
            goto label_80C5B97C;
        }
    }

label_80C5BDF4:
    ctx->pc = 0x80C5BDF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BDF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5BDF4: b       0x80C5BDFC
    {
            goto label_80C5BDFC;
    }

label_80C5BDF8:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BDF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5BDF8: b       0x80C5BDF8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C5BDF8u;
                return;
            }
            goto label_80C5BDF8;
    }

label_80C5BDFC:
    ctx->pc = 0x80C5BDFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BDFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5BDFC: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5BDFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C5BDFCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5BE00:
    ctx->pc = 0x80C5BE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5BE00: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BE00u)) return;
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
label_80C5BE04:
    ctx->pc = 0x80C5BE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE04u)) return;
    // 80C5BE04: addi    r11, r1, 112
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(112);

label_80C5BE08:
    ctx->pc = 0x80C5BE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE08u)) return;
    // 80C5BE08: bl      0x80006DF8
    {
            ctx->lr = 0x80C5BE0Cu;
            ctx->pc = 0x80006DF8u;
            return;
    }

label_80C5BE0C:
    ctx->pc = 0x80C5BE0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BE0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5BE0C: lwz     r0, 132(r1)
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
label_80C5BE10:
    ctx->pc = 0x80C5BE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C5BE10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5BE10: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5BE14:
    ctx->pc = 0x80C5BE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE14u)) return;
    // 80C5BE14: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_80C5BE18:
    ctx->pc = 0x80C5BE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE18u)) return;
    // 80C5BE18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5BE1C:
    ctx->pc = 0x80C5BE1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BE1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C5BE1C: stwu     r1, -96(r1)
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
label_80C5BE20:
    ctx->pc = 0x80C5BE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C5BE20: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5BE24:
    ctx->pc = 0x80C5BE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5BE24: stw     r0, 100(r1)
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
label_80C5BE28:
    ctx->pc = 0x80C5BE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5BE28: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BE28u)) return;
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
label_80C5BE2C:
    ctx->pc = 0x80C5BE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5BE2C: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5BE2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80C5BE2Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5BE30:
    ctx->pc = 0x80C5BE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5BE30: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BE30u)) return;
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
label_80C5BE34:
    ctx->pc = 0x80C5BE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5BE34: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5BE34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80C5BE34u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5BE38:
    ctx->pc = 0x80C5BE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5BE38: stw     r31, 60(r1)
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
label_80C5BE3C:
    ctx->pc = 0x80C5BE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5BE3C: stw     r30, 56(r1)
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
label_80C5BE40:
    ctx->pc = 0x80C5BE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5BE40: stw     r29, 52(r1)
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
label_80C5BE44:
    ctx->pc = 0x80C5BE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5BE44: stw     r28, 48(r1)
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
label_80C5BE48:
    ctx->pc = 0x80C5BE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE48u)) return;
    // 80C5BE48: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C5BE4C:
    ctx->pc = 0x80C5BE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5BE4C: lwz     r31, 60(r28)
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
label_80C5BE50:
    ctx->pc = 0x80C5BE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE50u)) return;
    // 80C5BE50: cmplwi  r31, 0x0000
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

label_80C5BE54:
    ctx->pc = 0x80C5BE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE54u)) return;
    // 80C5BE54: bc    12, 2, 0x80C5C100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5C100;
        }
    }

label_80C5BE58:
    ctx->pc = 0x80C5BE58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BE58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5BE58: lwz     r30, 64(r31)
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
label_80C5BE5C:
    ctx->pc = 0x80C5BE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5BE5C: lwz     r29, 68(r31)
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
label_80C5BE60:
    ctx->pc = 0x80C5BE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE60u)) return;
    // 80C5BE60: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C5BE64:
    ctx->pc = 0x80C5BE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE64u)) return;
    // 80C5BE64: bl      0x80612BEC
    {
            ctx->lr = 0x80C5BE68u;
            ctx->pc = 0x80612BECu;
            return;
    }

label_80C5BE68:
    ctx->pc = 0x80C5BE68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BE68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5BE68: cmplwi  r30, 0x0000
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

label_80C5BE6C:
    ctx->pc = 0x80C5BE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE6Cu)) return;
    // 80C5BE6C: bc    12, 2, 0x80C5C0F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5C0F8;
        }
    }

label_80C5BE70:
    ctx->pc = 0x80C5BE70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BE70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C5BE70: lwz     r3, 8(r30)
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
label_80C5BE74:
    ctx->pc = 0x80C5BE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5BE74: lwz     r0, 4(r3)
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
label_80C5BE78:
    ctx->pc = 0x80C5BE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE78u)) return;
    // 80C5BE78: lis     r3, -27433
    ctx->gpr[3] = ((u32)(s32)(-27433) << 16);

label_80C5BE7C:
    ctx->pc = 0x80C5BE7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE7Cu)) return;
    // 80C5BE7C: addi    r3, r3, 13288
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13288);

label_80C5BE80:
    ctx->pc = 0x80C5BE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5BE80: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5BE80u)) return;
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
label_80C5BE84:
    ctx->pc = 0x80C5BE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5BE84: stw     r0, 36(r1)
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
label_80C5BE88:
    ctx->pc = 0x80C5BE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE88u)) return;
    // 80C5BE88: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80C5BE8C:
    ctx->pc = 0x80C5BE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5BE8C: stw     r0, 32(r1)
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
label_80C5BE90:
    ctx->pc = 0x80C5BE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5BE90: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BE90u)) return;
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
label_80C5BE94:
    ctx->pc = 0x80C5BE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE94u)) return;
    // 80C5BE94: fsubs   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C5BE94u)) return;
    ppc_fsubs(ctx, 30, 0, 1);

label_80C5BE98:
    ctx->pc = 0x80C5BE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5BE98: lfs     f31, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C5BE98u)) return;
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
label_80C5BE9C:
    ctx->pc = 0x80C5BE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BE9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5BE9C: lwz     r3, 12(r30)
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
label_80C5BEA0:
    ctx->pc = 0x80C5BEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BEA0u)) return;
    // 80C5BEA0: cmplwi  r3, 0x0000
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

label_80C5BEA4:
    ctx->pc = 0x80C5BEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BEA4u)) return;
    // 80C5BEA4: bc    12, 2, 0x80C5BEAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5BEAC;
        }
    }

label_80C5BEA8:
    ctx->pc = 0x80C5BEA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BEA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5BEA8: bl      0x8060F594
    {
            ctx->lr = 0x80C5BEACu;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80C5BEAC:
    ctx->pc = 0x80C5BEACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BEACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5BEAC: cmplwi  r29, 0x0000
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

label_80C5BEB0:
    ctx->pc = 0x80C5BEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BEB0u)) return;
    // 80C5BEB0: bc    12, 2, 0x80C5C064
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5C064;
        }
    }

label_80C5BEB4:
    ctx->pc = 0x80C5BEB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BEB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5BEB4: lbz     r0, 1(r30)
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
label_80C5BEB8:
    ctx->pc = 0x80C5BEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BEB8u)) return;
    // 80C5BEB8: cmplwi  r0, 0x0000
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

label_80C5BEBC:
    ctx->pc = 0x80C5BEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BEBCu)) return;
    // 80C5BEBC: bc    12, 2, 0x80C5C064
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5C064;
        }
    }

label_80C5BEC0:
    ctx->pc = 0x80C5BEC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BEC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C5BEC0: addi    r0, r1, 16
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(16);

label_80C5BEC4:
    ctx->pc = 0x80C5BEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BEC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5BEC4: stw     r0, 12(r1)
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
label_80C5BEC8:
    ctx->pc = 0x80C5BEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BEC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5BEC8: lwz     r0, 4(r30)
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
label_80C5BECC:
    ctx->pc = 0x80C5BECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5BECC: stw     r0, 8(r1)
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
label_80C5BED0:
    ctx->pc = 0x80C5BED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BED0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5BED0: lwz     r3, 8(r29)
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
label_80C5BED4:
    ctx->pc = 0x80C5BED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5BED4: stw     r3, 16(r1)
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
label_80C5BED8:
    ctx->pc = 0x80C5BED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BED8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5BED8: lwz     r0, 8(r30)
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
label_80C5BEDC:
    ctx->pc = 0x80C5BEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BEDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5BEDC: stw     r0, 20(r1)
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
label_80C5BEE0:
    ctx->pc = 0x80C5BEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BEE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5BEE0: lbz     r0, 0(r29)
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
label_80C5BEE4:
    ctx->pc = 0x80C5BEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BEE4u)) return;
    // 80C5BEE4: rlwinm r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_80C5BEE8:
    ctx->pc = 0x80C5BEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BEE8u)) return;
    // 80C5BEE8: cmpwi   r0, 0
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

label_80C5BEEC:
    ctx->pc = 0x80C5BEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BEECu)) return;
    // 80C5BEEC: bc    12, 2, 0x80C5BF04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5BF04;
        }
    }

label_80C5BEF0:
    ctx->pc = 0x80C5BEF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BEF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5BEF0: lis     r3, -27433
    ctx->gpr[3] = ((u32)(s32)(-27433) << 16);

label_80C5BEF4:
    ctx->pc = 0x80C5BEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BEF4u)) return;
    // 80C5BEF4: addi    r3, r3, 13280
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13280);

label_80C5BEF8:
    ctx->pc = 0x80C5BEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BEF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5BEF8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5BEF8u)) return;
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
label_80C5BEFC:
    ctx->pc = 0x80C5BEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BEFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5BEFC: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BEFCu)) return;
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
label_80C5BF00:
    ctx->pc = 0x80C5BF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF00u)) return;
    // 80C5BF00: b       0x80C5BF30
    {
            goto label_80C5BF30;
    }

label_80C5BF04:
    ctx->pc = 0x80C5BF04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BF04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5BF04: lwz     r3, 4(r3)
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
label_80C5BF08:
    ctx->pc = 0x80C5BF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF08u)) return;
    // 80C5BF08: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C5BF0C:
    ctx->pc = 0x80C5BF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF0Cu)) return;
    // 80C5BF0C: lis     r3, -27433
    ctx->gpr[3] = ((u32)(s32)(-27433) << 16);

label_80C5BF10:
    ctx->pc = 0x80C5BF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF10u)) return;
    // 80C5BF10: addi    r3, r3, 13288
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13288);

label_80C5BF14:
    ctx->pc = 0x80C5BF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5BF14: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5BF14u)) return;
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
label_80C5BF18:
    ctx->pc = 0x80C5BF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5BF18: stw     r0, 36(r1)
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
label_80C5BF1C:
    ctx->pc = 0x80C5BF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF1Cu)) return;
    // 80C5BF1C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80C5BF20:
    ctx->pc = 0x80C5BF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5BF20: stw     r0, 32(r1)
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
label_80C5BF24:
    ctx->pc = 0x80C5BF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5BF24: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BF24u)) return;
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
label_80C5BF28:
    ctx->pc = 0x80C5BF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF28u)) return;
    // 80C5BF28: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C5BF28u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80C5BF2C:
    ctx->pc = 0x80C5BF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C5BF2C: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BF2Cu)) return;
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
label_80C5BF30:
    ctx->pc = 0x80C5BF30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BF30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C5BF30: lis     r3, -27433
    ctx->gpr[3] = ((u32)(s32)(-27433) << 16);

label_80C5BF34:
    ctx->pc = 0x80C5BF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF34u)) return;
    // 80C5BF34: addi    r3, r3, 13280
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13280);

label_80C5BF38:
    ctx->pc = 0x80C5BF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5BF38: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5BF38u)) return;
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
label_80C5BF3C:
    ctx->pc = 0x80C5BF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5BF3C: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BF3Cu)) return;
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
label_80C5BF40:
    ctx->pc = 0x80C5BF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF40u)) return;
    // 80C5BF40: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x80C5BF40u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_80C5BF44:
    ctx->pc = 0x80C5BF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF44u)) return;
    // 80C5BF44: bl      0x80C5C188
    {
            ctx->lr = 0x80C5BF48u;
            goto label_80C5C188;
    }

label_80C5BF48:
    ctx->pc = 0x80C5BF48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BF48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80C5BF48: lis     r3, -27433
    ctx->gpr[3] = ((u32)(s32)(-27433) << 16);

label_80C5BF4C:
    ctx->pc = 0x80C5BF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF4Cu)) return;
    // 80C5BF4C: addi    r3, r3, 13328
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13328);

label_80C5BF50:
    ctx->pc = 0x80C5BF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5BF50: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5BF50u)) return;
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
label_80C5BF54:
    ctx->pc = 0x80C5BF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF54u)) return;
    // 80C5BF54: fmuls   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C5BF54u)) return;
    ppc_fmuls(ctx, 2, 0, 1);

label_80C5BF58:
    ctx->pc = 0x80C5BF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5BF58: lbz     r0, 1(r30)
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
label_80C5BF5C:
    ctx->pc = 0x80C5BF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF5Cu)) return;
    // 80C5BF5C: lis     r3, -27433
    ctx->gpr[3] = ((u32)(s32)(-27433) << 16);

label_80C5BF60:
    ctx->pc = 0x80C5BF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF60u)) return;
    // 80C5BF60: addi    r3, r3, 13288
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13288);

label_80C5BF64:
    ctx->pc = 0x80C5BF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5BF64: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5BF64u)) return;
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
label_80C5BF68:
    ctx->pc = 0x80C5BF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5BF68: stw     r0, 36(r1)
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
label_80C5BF6C:
    ctx->pc = 0x80C5BF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF6Cu)) return;
    // 80C5BF6C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80C5BF70:
    ctx->pc = 0x80C5BF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5BF70: stw     r0, 32(r1)
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
label_80C5BF74:
    ctx->pc = 0x80C5BF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5BF74: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BF74u)) return;
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
label_80C5BF78:
    ctx->pc = 0x80C5BF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF78u)) return;
    // 80C5BF78: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C5BF78u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80C5BF7C:
    ctx->pc = 0x80C5BF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF7Cu)) return;
    // 80C5BF7C: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5BF7Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_80C5BF80:
    ctx->pc = 0x80C5BF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF80u)) return;
    // 80C5BF80: bc    4, 0, 0x80C5BF9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5BF9C;
        }
    }

label_80C5BF84:
    ctx->pc = 0x80C5BF84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BF84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5BF84: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80C5BF88:
    ctx->pc = 0x80C5BF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5BF88: lwz     r4, 4(r30)
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
label_80C5BF8C:
    ctx->pc = 0x80C5BF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5BF8C: lwz     r5, 16(r1)
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
label_80C5BF90:
    ctx->pc = 0x80C5BF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5BF90: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BF90u)) return;
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
label_80C5BF94:
    ctx->pc = 0x80C5BF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BF94u)) return;
    // 80C5BF94: bl      0x80C5B908
    {
            ctx->lr = 0x80C5BF98u;
            ctx->pc = 0x80C5B908u;
            return;
    }

label_80C5BF98:
    ctx->pc = 0x80C5BF98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BF98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5BF98: b       0x80C5BFB0
    {
            goto label_80C5BFB0;
    }

label_80C5BF9C:
    ctx->pc = 0x80C5BF9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BF9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5BF9C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80C5BFA0:
    ctx->pc = 0x80C5BFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5BFA0: lwz     r4, 4(r30)
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
label_80C5BFA4:
    ctx->pc = 0x80C5BFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5BFA4: lwz     r5, 20(r1)
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
label_80C5BFA8:
    ctx->pc = 0x80C5BFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5BFA8: lfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BFA8u)) return;
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
label_80C5BFAC:
    ctx->pc = 0x80C5BFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFACu)) return;
    // 80C5BFAC: bl      0x80C5B908
    {
            ctx->lr = 0x80C5BFB0u;
            ctx->pc = 0x80C5B908u;
            return;
    }

label_80C5BFB0:
    ctx->pc = 0x80C5BFB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 35u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BFB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 35u : 1u;
    // 80C5BFB0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80C5BFB4:
    ctx->pc = 0x80C5BFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFB4u)) return;
    // 80C5BFB4: lis     r4, -27433
    ctx->gpr[4] = ((u32)(s32)(-27433) << 16);

label_80C5BFB8:
    ctx->pc = 0x80C5BFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFB8u)) return;
    // 80C5BFB8: addi    r4, r4, 13304
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13304);

label_80C5BFBC:
    ctx->pc = 0x80C5BFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80C5BFBC: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5BFBCu)) return;
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
label_80C5BFC0:
    ctx->pc = 0x80C5BFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFC0u)) return;
    // 80C5BFC0: fadds   f2, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x80C5BFC0u)) return;
    ppc_fadds(ctx, 2, 0, 31);

label_80C5BFC4:
    ctx->pc = 0x80C5BFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80C5BFC4: lbz     r4, 1(r30)
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
label_80C5BFC8:
    ctx->pc = 0x80C5BFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFC8u)) return;
    // 80C5BFC8: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_80C5BFCC:
    ctx->pc = 0x80C5BFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFCCu)) return;
    // 80C5BFCC: lis     r4, -27433
    ctx->gpr[4] = ((u32)(s32)(-27433) << 16);

label_80C5BFD0:
    ctx->pc = 0x80C5BFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFD0u)) return;
    // 80C5BFD0: addi    r4, r4, 13296
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13296);

label_80C5BFD4:
    ctx->pc = 0x80C5BFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C5BFD4: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5BFD4u)) return;
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
label_80C5BFD8:
    ctx->pc = 0x80C5BFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFD8u)) return;
    // 80C5BFD8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_80C5BFDC:
    ctx->pc = 0x80C5BFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C5BFDC: stw     r0, 36(r1)
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
label_80C5BFE0:
    ctx->pc = 0x80C5BFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFE0u)) return;
    // 80C5BFE0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80C5BFE4:
    ctx->pc = 0x80C5BFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C5BFE4: stw     r0, 32(r1)
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
label_80C5BFE8:
    ctx->pc = 0x80C5BFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C5BFE8: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5BFE8u)) return;
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
label_80C5BFEC:
    ctx->pc = 0x80C5BFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFECu)) return;
    // 80C5BFEC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C5BFECu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80C5BFF0:
    ctx->pc = 0x80C5BFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80C5BFF0u)) return;
    // 80C5BFF0: fdivs   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5BFF0u)) return;
    ppc_fdivs(ctx, 1, 2, 0);

label_80C5BFF4:
    ctx->pc = 0x80C5BFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFF4u)) return;
    // 80C5BFF4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80C5BFF8:
    ctx->pc = 0x80C5BFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5BFF8u)) return;
    // 80C5BFF8: bl      0x805F8560
    {
            ctx->lr = 0x80C5BFFCu;
            ctx->pc = 0x805F8560u;
            return;
    }

label_80C5BFFC:
    ctx->pc = 0x80C5BFFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5BFFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C5BFFC: lis     r3, -27433
    ctx->gpr[3] = ((u32)(s32)(-27433) << 16);

label_80C5C000:
    ctx->pc = 0x80C5C000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C000u)) return;
    // 80C5C000: addi    r3, r3, 13304
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13304);

label_80C5C004:
    ctx->pc = 0x80C5C004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C004: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C004u)) return;
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
label_80C5C008:
    ctx->pc = 0x80C5C008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C008u)) return;
    // 80C5C008: fadds   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5C008u)) return;
    ppc_fadds(ctx, 31, 31, 0);

label_80C5C00C:
    ctx->pc = 0x80C5C00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C00Cu)) return;
    // 80C5C00C: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x80C5C00Cu)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_80C5C010:
    ctx->pc = 0x80C5C010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C010u)) return;
    // 80C5C010: bl      0x80C5C188
    {
            ctx->lr = 0x80C5C014u;
            goto label_80C5C188;
    }

label_80C5C014:
    ctx->pc = 0x80C5C014u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C014u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5C014: lbz     r0, 1(r30)
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
label_80C5C018:
    ctx->pc = 0x80C5C018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C018u)) return;
    // 80C5C018: lis     r3, -27433
    ctx->gpr[3] = ((u32)(s32)(-27433) << 16);

label_80C5C01C:
    ctx->pc = 0x80C5C01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C01Cu)) return;
    // 80C5C01C: addi    r3, r3, 13288
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13288);

label_80C5C020:
    ctx->pc = 0x80C5C020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5C020: lfd     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C020u)) return;
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
label_80C5C024:
    ctx->pc = 0x80C5C024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C024u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5C024: stw     r0, 44(r1)
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
label_80C5C028:
    ctx->pc = 0x80C5C028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C028u)) return;
    // 80C5C028: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80C5C02C:
    ctx->pc = 0x80C5C02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C02Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C02C: stw     r0, 40(r1)
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
label_80C5C030:
    ctx->pc = 0x80C5C030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C030: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5C030u)) return;
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
label_80C5C034:
    ctx->pc = 0x80C5C034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C034u)) return;
    // 80C5C034: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80C5C034u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_80C5C038:
    ctx->pc = 0x80C5C038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C038u)) return;
    // 80C5C038: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5C038u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80C5C03C:
    ctx->pc = 0x80C5C03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C03Cu)) return;
    // 80C5C03C: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80C5C040:
    ctx->pc = 0x80C5C040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C040u)) return;
    // 80C5C040: bc    4, 2, 0x80C5C0F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5C0F4;
        }
    }

label_80C5C044:
    ctx->pc = 0x80C5C044u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C044u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5C044: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C5C048:
    ctx->pc = 0x80C5C048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C048u)) return;
    // 80C5C048: bl      0x8050ED40
    {
            ctx->lr = 0x80C5C04Cu;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80C5C04C:
    ctx->pc = 0x80C5C04Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C04Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C5C04C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C5C050:
    ctx->pc = 0x80C5C050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C050u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C050: stw     r0, 68(r31)
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
label_80C5C054:
    ctx->pc = 0x80C5C054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C054u)) return;
    // 80C5C054: lis     r3, -27433
    ctx->gpr[3] = ((u32)(s32)(-27433) << 16);

label_80C5C058:
    ctx->pc = 0x80C5C058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C058u)) return;
    // 80C5C058: addi    r3, r3, 13280
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13280);

label_80C5C05C:
    ctx->pc = 0x80C5C05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C05Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5C05C: lfs     f31, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C05Cu)) return;
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
label_80C5C060:
    ctx->pc = 0x80C5C060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C060u)) return;
    // 80C5C060: b       0x80C5C0F4
    {
            goto label_80C5C0F4;
    }

label_80C5C064:
    ctx->pc = 0x80C5C064u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C064u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5C064: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80C5C068:
    ctx->pc = 0x80C5C068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C068: lwz     r4, 4(r30)
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
label_80C5C06C:
    ctx->pc = 0x80C5C06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C06Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C06C: lwz     r5, 8(r30)
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
label_80C5C070:
    ctx->pc = 0x80C5C070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5C070: lfs     f1, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C5C070u)) return;
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
label_80C5C074:
    ctx->pc = 0x80C5C074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C074u)) return;
    // 80C5C074: bl      0x80C5B908
    {
            ctx->lr = 0x80C5C078u;
            ctx->pc = 0x80C5B908u;
            return;
    }

label_80C5C078:
    ctx->pc = 0x80C5C078u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C078u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5C078: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_80C5C07C:
    ctx->pc = 0x80C5C07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C07Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C07C: lfs     f1, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C5C07Cu)) return;
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
label_80C5C080:
    ctx->pc = 0x80C5C080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C080u)) return;
    // 80C5C080: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80C5C084:
    ctx->pc = 0x80C5C084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C084u)) return;
    // 80C5C084: bl      0x805FC100
    {
            ctx->lr = 0x80C5C088u;
            ctx->pc = 0x805FC100u;
            return;
    }

label_80C5C088:
    ctx->pc = 0x80C5C088u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C088u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C088: lfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C5C088u)) return;
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
label_80C5C08C:
    ctx->pc = 0x80C5C08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C08Cu)) return;
    // 80C5C08C: fadds   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5C08Cu)) return;
    ppc_fadds(ctx, 31, 31, 0);

label_80C5C090:
    ctx->pc = 0x80C5C090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C090u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C090: lbz     r0, 0(r30)
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
label_80C5C094:
    ctx->pc = 0x80C5C094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C094u)) return;
    // 80C5C094: rlwinm r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_80C5C098:
    ctx->pc = 0x80C5C098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C098u)) return;
    // 80C5C098: cmpwi   r0, 0
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

label_80C5C09C:
    ctx->pc = 0x80C5C09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C09Cu)) return;
    // 80C5C09C: bc    12, 2, 0x80C5C0C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5C0C0;
        }
    }

label_80C5C0A0:
    ctx->pc = 0x80C5C0A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C0A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5C0A0: fcmpo   cr0, f31, f30
    if (!ppc_fp_available_inline(ctx, 0x80C5C0A0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[30], true);

label_80C5C0A4:
    ctx->pc = 0x80C5C0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C0A4u)) return;
    // 80C5C0A4: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80C5C0A8:
    ctx->pc = 0x80C5C0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C0A8u)) return;
    // 80C5C0A8: bc    4, 2, 0x80C5C0F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5C0F4;
        }
    }

label_80C5C0AC:
    ctx->pc = 0x80C5C0ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C0ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C0AC: lwz     r0, 16(r30)
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
label_80C5C0B0:
    ctx->pc = 0x80C5C0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C0B0u)) return;
    // 80C5C0B0: cmplwi  r0, 0x0000
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

label_80C5C0B4:
    ctx->pc = 0x80C5C0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C0B4u)) return;
    // 80C5C0B4: bc    4, 2, 0x80C5C0DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5C0DC;
        }
    }

label_80C5C0B8:
    ctx->pc = 0x80C5C0B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C0B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5C0B8: fsubs   f31, f31, f30
    if (!ppc_fp_available_inline(ctx, 0x80C5C0B8u)) return;
    ppc_fsubs(ctx, 31, 31, 30);

label_80C5C0BC:
    ctx->pc = 0x80C5C0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C0BCu)) return;
    // 80C5C0BC: b       0x80C5C0F4
    {
            goto label_80C5C0F4;
    }

label_80C5C0C0:
    ctx->pc = 0x80C5C0C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C0C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C5C0C0: lis     r3, -27433
    ctx->gpr[3] = ((u32)(s32)(-27433) << 16);

label_80C5C0C4:
    ctx->pc = 0x80C5C0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C0C4u)) return;
    // 80C5C0C4: addi    r3, r3, 13304
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13304);

label_80C5C0C8:
    ctx->pc = 0x80C5C0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C0C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C0C8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C0C8u)) return;
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
label_80C5C0CC:
    ctx->pc = 0x80C5C0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C0CCu)) return;
    // 80C5C0CC: fsubs   f0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5C0CCu)) return;
    ppc_fsubs(ctx, 0, 30, 0);

label_80C5C0D0:
    ctx->pc = 0x80C5C0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C0D0u)) return;
    // 80C5C0D0: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5C0D0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_80C5C0D4:
    ctx->pc = 0x80C5C0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C0D4u)) return;
    // 80C5C0D4: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80C5C0D8:
    ctx->pc = 0x80C5C0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C0D8u)) return;
    // 80C5C0D8: bc    4, 2, 0x80C5C0F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5C0F4;
        }
    }

label_80C5C0DC:
    ctx->pc = 0x80C5C0DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C0DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C0DC: stw     r30, 68(r31)
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
label_80C5C0E0:
    ctx->pc = 0x80C5C0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C0E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C0E0: lwz     r0, 16(r30)
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
label_80C5C0E4:
    ctx->pc = 0x80C5C0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C0E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C0E4: stw     r0, 64(r31)
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
label_80C5C0E8:
    ctx->pc = 0x80C5C0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C0E8u)) return;
    // 80C5C0E8: lis     r3, -27433
    ctx->gpr[3] = ((u32)(s32)(-27433) << 16);

label_80C5C0EC:
    ctx->pc = 0x80C5C0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C0ECu)) return;
    // 80C5C0EC: addi    r3, r3, 13280
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13280);

label_80C5C0F0:
    ctx->pc = 0x80C5C0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C0F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C5C0F0: lfs     f31, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C0F0u)) return;
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
label_80C5C0F4:
    ctx->pc = 0x80C5C0F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C0F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C5C0F4: stfs     f31, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C5C0F4u)) return;
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
label_80C5C0F8:
    ctx->pc = 0x80C5C0F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C0F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5C0F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5C0FC:
    ctx->pc = 0x80C5C0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C0FCu)) return;
    // 80C5C0FC: bl      0x80612BEC
    {
            ctx->lr = 0x80C5C100u;
            ctx->pc = 0x80612BECu;
            return;
    }

label_80C5C100:
    ctx->pc = 0x80C5C100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5C100: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5C100u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C5C100u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C104:
    ctx->pc = 0x80C5C104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5C104: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5C104u)) return;
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
label_80C5C108:
    ctx->pc = 0x80C5C108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5C108: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5C108u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80C5C108u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C10C:
    ctx->pc = 0x80C5C10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C10Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5C10C: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5C10Cu)) return;
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
label_80C5C110:
    ctx->pc = 0x80C5C110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5C110: lwz     r31, 60(r1)
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
label_80C5C114:
    ctx->pc = 0x80C5C114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5C114: lwz     r30, 56(r1)
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
label_80C5C118:
    ctx->pc = 0x80C5C118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5C118: lwz     r29, 52(r1)
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
label_80C5C11C:
    ctx->pc = 0x80C5C11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C11Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C11C: lwz     r28, 48(r1)
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
label_80C5C120:
    ctx->pc = 0x80C5C120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C120: lwz     r0, 100(r1)
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
label_80C5C124:
    ctx->pc = 0x80C5C124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C5C124u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C124: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C128:
    ctx->pc = 0x80C5C128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C128u)) return;
    // 80C5C128: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80C5C12C:
    ctx->pc = 0x80C5C12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C12Cu)) return;
    // 80C5C12C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5C130:
    ctx->pc = 0x80C5C130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5C130: stwu     r1, -16(r1)
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
label_80C5C134:
    ctx->pc = 0x80C5C134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5C134: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C138:
    ctx->pc = 0x80C5C138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C138: stw     r0, 20(r1)
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
label_80C5C13C:
    ctx->pc = 0x80C5C13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C13Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C13C: stw     r31, 12(r1)
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
label_80C5C140:
    ctx->pc = 0x80C5C140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C140u)) return;
    // 80C5C140: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C5C144:
    ctx->pc = 0x80C5C144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C144: lwz     r3, 0(r31)
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
label_80C5C148:
    ctx->pc = 0x80C5C148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C148u)) return;
    // 80C5C148: cmplwi  r3, 0x0000
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

label_80C5C14C:
    ctx->pc = 0x80C5C14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C14Cu)) return;
    // 80C5C14C: bc    12, 2, 0x80C5C15C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5C15C;
        }
    }

label_80C5C150:
    ctx->pc = 0x80C5C150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C150: lwz     r0, 8(r31)
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
label_80C5C154:
    ctx->pc = 0x80C5C154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80C5C154u)) return;
    // 80C5C154: mulli   r4, r0, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80C5C158:
    ctx->pc = 0x80C5C158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C158u)) return;
    // 80C5C158: bl      0x8003CB50
    {
            ctx->lr = 0x80C5C15Cu;
            ctx->pc = 0x8003CB50u;
            return;
    }

label_80C5C15C:
    ctx->pc = 0x80C5C15Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C15Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C15C: lwz     r3, 4(r31)
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
label_80C5C160:
    ctx->pc = 0x80C5C160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C160u)) return;
    // 80C5C160: cmplwi  r3, 0x0000
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

label_80C5C164:
    ctx->pc = 0x80C5C164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C164u)) return;
    // 80C5C164: bc    12, 2, 0x80C5C174
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5C174;
        }
    }

label_80C5C168:
    ctx->pc = 0x80C5C168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C168: lwz     r0, 8(r31)
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
label_80C5C16C:
    ctx->pc = 0x80C5C16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80C5C16Cu)) return;
    // 80C5C16C: mulli   r4, r0, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80C5C170:
    ctx->pc = 0x80C5C170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C170u)) return;
    // 80C5C170: bl      0x8003CB50
    {
            ctx->lr = 0x80C5C174u;
            ctx->pc = 0x8003CB50u;
            return;
    }

label_80C5C174:
    ctx->pc = 0x80C5C174u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C174u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C174: lwz     r31, 12(r1)
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
label_80C5C178:
    ctx->pc = 0x80C5C178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C178: lwz     r0, 20(r1)
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
label_80C5C17C:
    ctx->pc = 0x80C5C17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C5C17Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C17C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C180:
    ctx->pc = 0x80C5C180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C180u)) return;
    // 80C5C180: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C5C184:
    ctx->pc = 0x80C5C184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C184u)) return;
    // 80C5C184: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5C188:
    ctx->pc = 0x80C5C188u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C188u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C188: stwu     r1, -16(r1)
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
label_80C5C18C:
    ctx->pc = 0x80C5C18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C18Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C18C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C190:
    ctx->pc = 0x80C5C190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5C190: stw     r0, 20(r1)
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
label_80C5C194:
    ctx->pc = 0x80C5C194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C194u)) return;
    // 80C5C194: bl      0x80013A1C
    {
            ctx->lr = 0x80C5C198u;
            ctx->pc = 0x80013A1Cu;
            return;
    }

label_80C5C198:
    ctx->pc = 0x80C5C198u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C198u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C5C198: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80C5C198u)) return;
    ppc_frsp(ctx, 1, 1);

label_80C5C19C:
    ctx->pc = 0x80C5C19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C19Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C19C: lwz     r0, 20(r1)
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
label_80C5C1A0:
    ctx->pc = 0x80C5C1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C5C1A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C1A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C1A4:
    ctx->pc = 0x80C5C1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1A4u)) return;
    // 80C5C1A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C5C1A8:
    ctx->pc = 0x80C5C1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1A8u)) return;
    // 80C5C1A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5C1AC:
    ctx->pc = 0x80C5C1ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C1ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C5C1AC: stwu     r1, -80(r1)
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
label_80C5C1B0:
    ctx->pc = 0x80C5C1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C5C1B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C1B4:
    ctx->pc = 0x80C5C1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C5C1B4: stw     r0, 84(r1)
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
label_80C5C1B8:
    ctx->pc = 0x80C5C1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C5C1B8: stfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5C1B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C1BC:
    ctx->pc = 0x80C5C1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C5C1BC: psq_st   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5C1BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80C5C1BCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C1C0:
    ctx->pc = 0x80C5C1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C5C1C0: stfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5C1C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C1C4:
    ctx->pc = 0x80C5C1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C5C1C4: psq_st   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5C1C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80C5C1C4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C1C8:
    ctx->pc = 0x80C5C1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C5C1C8: stfd     f29, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5C1C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C1CC:
    ctx->pc = 0x80C5C1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C5C1CC: psq_st   f29, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5C1CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80C5C1CCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C1D0:
    ctx->pc = 0x80C5C1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C5C1D0: stw     r31, 28(r1)
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
label_80C5C1D4:
    ctx->pc = 0x80C5C1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C5C1D4: stw     r30, 24(r1)
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
label_80C5C1D8:
    ctx->pc = 0x80C5C1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C5C1D8: stw     r29, 20(r1)
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
label_80C5C1DC:
    ctx->pc = 0x80C5C1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5C1DC: stw     r28, 16(r1)
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
label_80C5C1E0:
    ctx->pc = 0x80C5C1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1E0u)) return;
    // 80C5C1E0: fmr    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x80C5C1E0u)) return;
    ctx->fpr[29] = ctx->fpr[1];

label_80C5C1E4:
    ctx->pc = 0x80C5C1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1E4u)) return;
    // 80C5C1E4: fmr    f30, f2
    if (!ppc_fp_available_inline(ctx, 0x80C5C1E4u)) return;
    ctx->fpr[30] = ctx->fpr[2];

label_80C5C1E8:
    ctx->pc = 0x80C5C1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1E8u)) return;
    // 80C5C1E8: fmr    f31, f3
    if (!ppc_fp_available_inline(ctx, 0x80C5C1E8u)) return;
    ctx->fpr[31] = ctx->fpr[3];

label_80C5C1EC:
    ctx->pc = 0x80C5C1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1ECu)) return;
    // 80C5C1EC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C5C1F0:
    ctx->pc = 0x80C5C1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1F0u)) return;
    // 80C5C1F0: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C5C1F4:
    ctx->pc = 0x80C5C1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1F4u)) return;
    // 80C5C1F4: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C5C1F8:
    ctx->pc = 0x80C5C1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1F8u)) return;
    // 80C5C1F8: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80C5C1FC:
    ctx->pc = 0x80C5C1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C1FCu)) return;
    // 80C5C1FC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C5C200:
    ctx->pc = 0x80C5C200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C200u)) return;
    // 80C5C200: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C5C204:
    ctx->pc = 0x80C5C204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C204u)) return;
    // 80C5C204: lis     r5, -32570
    ctx->gpr[5] = ((u32)(s32)(-32570) << 16);

label_80C5C208:
    ctx->pc = 0x80C5C208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C208u)) return;
    // 80C5C208: addi    r5, r5, -14972
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-14972);

label_80C5C20C:
    ctx->pc = 0x80C5C20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C20Cu)) return;
    // 80C5C20C: bl      0x8050FD60
    {
            ctx->lr = 0x80C5C210u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C5C210:
    ctx->pc = 0x80C5C210u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C210u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5C210: lis     r4, -27432
    ctx->gpr[4] = ((u32)(s32)(-27432) << 16);

label_80C5C214:
    ctx->pc = 0x80C5C214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C214u)) return;
    // 80C5C214: addi    r4, r4, 23960
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23960);

label_80C5C218:
    ctx->pc = 0x80C5C218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C218: stw     r3, 0(r4)
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
label_80C5C21C:
    ctx->pc = 0x80C5C21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C21Cu)) return;
    // 80C5C21C: li      r3, 48
    ctx->gpr[3] = (u32)(s32)(48);

label_80C5C220:
    ctx->pc = 0x80C5C220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C220u)) return;
    // 80C5C220: bl      0x8050EF60
    {
            ctx->lr = 0x80C5C224u;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80C5C224:
    ctx->pc = 0x80C5C224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 61u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 61u : 1u;
    // 80C5C224: lis     r4, -27432
    ctx->gpr[4] = ((u32)(s32)(-27432) << 16);

label_80C5C228:
    ctx->pc = 0x80C5C228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C228u)) return;
    // 80C5C228: addi    r4, r4, 23960
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23960);

label_80C5C22C:
    ctx->pc = 0x80C5C22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C22Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 58u : 0u;
    // 80C5C22C: lwz     r4, 0(r4)
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
label_80C5C230:
    ctx->pc = 0x80C5C230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C230u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 57u : 0u;
    // 80C5C230: lwz     r4, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C234:
    ctx->pc = 0x80C5C234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 56u : 0u;
    // 80C5C234: stw     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C238:
    ctx->pc = 0x80C5C238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C238u)) return;
    // 80C5C238: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C5C23C:
    ctx->pc = 0x80C5C23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C23Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 80C5C23C: stb     r0, 0(r4)
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
label_80C5C240:
    ctx->pc = 0x80C5C240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 80C5C240: stfs     f29, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5C240u)) return;
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
label_80C5C244:
    ctx->pc = 0x80C5C244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 80C5C244: stfs     f30, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5C244u)) return;
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
label_80C5C248:
    ctx->pc = 0x80C5C248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C5C248: stfs     f31, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5C248u)) return;
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
label_80C5C24C:
    ctx->pc = 0x80C5C24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C24Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 80C5C24C: stw     r28, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C250:
    ctx->pc = 0x80C5C250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C5C250: stw     r29, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C254:
    ctx->pc = 0x80C5C254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C254u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 80C5C254: stw     r30, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C258:
    ctx->pc = 0x80C5C258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C258u)) return;
    // 80C5C258: lis     r4, -28644
    ctx->gpr[4] = ((u32)(s32)(-28644) << 16);

label_80C5C25C:
    ctx->pc = 0x80C5C25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C25Cu)) return;
    // 80C5C25C: addi    r5, r4, 13788
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13788);

label_80C5C260:
    ctx->pc = 0x80C5C260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 80C5C260: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C264:
    ctx->pc = 0x80C5C264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 80C5C264: lfs     f0, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5C264u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
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
label_80C5C268:
    ctx->pc = 0x80C5C268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 80C5C268: stfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C268u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C26C:
    ctx->pc = 0x80C5C26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C26Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 80C5C26C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C270:
    ctx->pc = 0x80C5C270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 80C5C270: lfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5C270u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
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
label_80C5C274:
    ctx->pc = 0x80C5C274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 80C5C274: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C274u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C278:
    ctx->pc = 0x80C5C278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 80C5C278: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C27C:
    ctx->pc = 0x80C5C27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C27Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80C5C27C: lfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5C27Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
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
label_80C5C280:
    ctx->pc = 0x80C5C280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80C5C280: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C280u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C284:
    ctx->pc = 0x80C5C284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80C5C284: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C288:
    ctx->pc = 0x80C5C288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80C5C288: lwz     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C28C:
    ctx->pc = 0x80C5C28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C28Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80C5C28C: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C290:
    ctx->pc = 0x80C5C290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C290u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80C5C290: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C294:
    ctx->pc = 0x80C5C294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80C5C294: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C298:
    ctx->pc = 0x80C5C298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C298u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80C5C298: stw     r0, 16(r3)
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
label_80C5C29C:
    ctx->pc = 0x80C5C29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C29Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80C5C29C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C2A0:
    ctx->pc = 0x80C5C2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80C5C2A0: lwz     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C2A4:
    ctx->pc = 0x80C5C2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C5C2A4: stw     r0, 20(r3)
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
label_80C5C2A8:
    ctx->pc = 0x80C5C2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80C5C2A8: stw     r31, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C2AC:
    ctx->pc = 0x80C5C2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80C5C2AC: lwz     r3, 0(r5)
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
label_80C5C2B0:
    ctx->pc = 0x80C5C2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C5C2B0: stfs     f29, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C2B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C2B4:
    ctx->pc = 0x80C5C2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C5C2B4: lwz     r3, 0(r5)
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
label_80C5C2B8:
    ctx->pc = 0x80C5C2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C5C2B8: stfs     f30, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C2B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C2BC:
    ctx->pc = 0x80C5C2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C5C2BC: lwz     r3, 0(r5)
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
label_80C5C2C0:
    ctx->pc = 0x80C5C2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C5C2C0: stfs     f31, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C2C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C2C4:
    ctx->pc = 0x80C5C2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C5C2C4: lwz     r3, 0(r5)
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
label_80C5C2C8:
    ctx->pc = 0x80C5C2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C5C2C8: stw     r28, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C2CC:
    ctx->pc = 0x80C5C2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C5C2CC: lwz     r3, 0(r5)
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
label_80C5C2D0:
    ctx->pc = 0x80C5C2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C5C2D0: stw     r29, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C2D4:
    ctx->pc = 0x80C5C2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C5C2D4: lwz     r3, 0(r5)
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
label_80C5C2D8:
    ctx->pc = 0x80C5C2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C5C2D8: stw     r30, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C2DC:
    ctx->pc = 0x80C5C2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C5C2DC: psq_l   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5C2DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C5C2DCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C2E0:
    ctx->pc = 0x80C5C2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C5C2E0: lfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5C2E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C2E4:
    ctx->pc = 0x80C5C2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5C2E4: psq_l   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5C2E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80C5C2E4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C2E8:
    ctx->pc = 0x80C5C2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5C2E8: lfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5C2E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C2EC:
    ctx->pc = 0x80C5C2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5C2EC: psq_l   f29, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5C2ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80C5C2ECu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C2F0:
    ctx->pc = 0x80C5C2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5C2F0: lfd     f29, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5C2F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C2F4:
    ctx->pc = 0x80C5C2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5C2F4: lwz     r31, 28(r1)
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
label_80C5C2F8:
    ctx->pc = 0x80C5C2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5C2F8: lwz     r30, 24(r1)
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
label_80C5C2FC:
    ctx->pc = 0x80C5C2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C2FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5C2FC: lwz     r29, 20(r1)
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
label_80C5C300:
    ctx->pc = 0x80C5C300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C300u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C300: lwz     r28, 16(r1)
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
label_80C5C304:
    ctx->pc = 0x80C5C304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C304: lwz     r0, 84(r1)
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
label_80C5C308:
    ctx->pc = 0x80C5C308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C5C308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C308: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C30C:
    ctx->pc = 0x80C5C30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C30Cu)) return;
    // 80C5C30C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_80C5C310:
    ctx->pc = 0x80C5C310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C310u)) return;
    // 80C5C310: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5C314:
    ctx->pc = 0x80C5C314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5C314: stwu     r1, -16(r1)
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
label_80C5C318:
    ctx->pc = 0x80C5C318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5C318: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C31C:
    ctx->pc = 0x80C5C31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C31Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C31C: stw     r0, 20(r1)
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
label_80C5C320:
    ctx->pc = 0x80C5C320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C320u)) return;
    // 80C5C320: lis     r3, -27432
    ctx->gpr[3] = ((u32)(s32)(-27432) << 16);

label_80C5C324:
    ctx->pc = 0x80C5C324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C324u)) return;
    // 80C5C324: addi    r5, r3, 23960
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(23960);

label_80C5C328:
    ctx->pc = 0x80C5C328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C328: lwz     r3, 0(r5)
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
label_80C5C32C:
    ctx->pc = 0x80C5C32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C32Cu)) return;
    // 80C5C32C: cmplwi  r3, 0x0000
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

label_80C5C330:
    ctx->pc = 0x80C5C330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C330u)) return;
    // 80C5C330: bc    12, 2, 0x80C5C3B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5C3B0;
        }
    }

label_80C5C334:
    ctx->pc = 0x80C5C334u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C334u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C5C334: lwz     r3, 32(r3)
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
label_80C5C338:
    ctx->pc = 0x80C5C338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C5C338: lwz     r6, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C33C:
    ctx->pc = 0x80C5C33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C33Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C5C33C: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C5C33Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80C5C340:
    ctx->pc = 0x80C5C340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C340u)) return;
    // 80C5C340: lis     r3, -28644
    ctx->gpr[3] = ((u32)(s32)(-28644) << 16);

label_80C5C344:
    ctx->pc = 0x80C5C344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C344u)) return;
    // 80C5C344: addi    r4, r3, 13788
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13788);

label_80C5C348:
    ctx->pc = 0x80C5C348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C5C348: lwz     r3, 0(r4)
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
label_80C5C34C:
    ctx->pc = 0x80C5C34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C34Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C5C34C: stfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C34Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C350:
    ctx->pc = 0x80C5C350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C5C350: lfs     f0, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C5C350u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
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
label_80C5C354:
    ctx->pc = 0x80C5C354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C5C354: lwz     r3, 0(r4)
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
label_80C5C358:
    ctx->pc = 0x80C5C358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C5C358: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C358u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C35C:
    ctx->pc = 0x80C5C35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C35Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C5C35C: lfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C5C35Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
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
label_80C5C360:
    ctx->pc = 0x80C5C360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C5C360: lwz     r3, 0(r4)
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
label_80C5C364:
    ctx->pc = 0x80C5C364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5C364: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C364u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C368:
    ctx->pc = 0x80C5C368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5C368: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C36C:
    ctx->pc = 0x80C5C36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C36Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5C36C: lwz     r3, 0(r4)
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
label_80C5C370:
    ctx->pc = 0x80C5C370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5C370: stw     r0, 20(r3)
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
label_80C5C374:
    ctx->pc = 0x80C5C374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5C374: lwz     r0, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C378:
    ctx->pc = 0x80C5C378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5C378: lwz     r3, 0(r4)
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
label_80C5C37C:
    ctx->pc = 0x80C5C37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C37Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5C37C: stw     r0, 24(r3)
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
label_80C5C380:
    ctx->pc = 0x80C5C380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C380: lwz     r0, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C384:
    ctx->pc = 0x80C5C384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C384: lwz     r3, 0(r4)
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
label_80C5C388:
    ctx->pc = 0x80C5C388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C388: stw     r0, 28(r3)
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
label_80C5C38C:
    ctx->pc = 0x80C5C38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C38Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C38C: lwz     r3, 0(r5)
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
label_80C5C390:
    ctx->pc = 0x80C5C390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C390u)) return;
    // 80C5C390: cmplwi  r3, 0x0000
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

label_80C5C394:
    ctx->pc = 0x80C5C394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C394u)) return;
    // 80C5C394: bc    12, 2, 0x80C5C3AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5C3AC;
        }
    }

label_80C5C398:
    ctx->pc = 0x80C5C398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5C398: bl      0x8050F9F0
    {
            ctx->lr = 0x80C5C39Cu;
            ctx->pc = 0x8050F9F0u;
            return;
    }

label_80C5C39C:
    ctx->pc = 0x80C5C39Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C39Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5C39C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C5C3A0:
    ctx->pc = 0x80C5C3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C3A0u)) return;
    // 80C5C3A0: lis     r3, -27432
    ctx->gpr[3] = ((u32)(s32)(-27432) << 16);

label_80C5C3A4:
    ctx->pc = 0x80C5C3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C3A4u)) return;
    // 80C5C3A4: addi    r3, r3, 23960
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23960);

label_80C5C3A8:
    ctx->pc = 0x80C5C3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C3A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C5C3A8: stw     r0, 0(r3)
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
label_80C5C3AC:
    ctx->pc = 0x80C5C3ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C3ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5C3AC: bl      0x805C899C
    {
            ctx->lr = 0x80C5C3B0u;
            ctx->pc = 0x805C899Cu;
            return;
    }

label_80C5C3B0:
    ctx->pc = 0x80C5C3B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C3B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C3B0: lwz     r0, 20(r1)
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
label_80C5C3B4:
    ctx->pc = 0x80C5C3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C5C3B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C3B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C3B8:
    ctx->pc = 0x80C5C3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C3B8u)) return;
    // 80C5C3B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C5C3BC:
    ctx->pc = 0x80C5C3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C3BCu)) return;
    // 80C5C3BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5C3C0:
    ctx->pc = 0x80C5C3C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C3C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C3C0: stwu     r1, -16(r1)
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
label_80C5C3C4:
    ctx->pc = 0x80C5C3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C3C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C3C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C3C8:
    ctx->pc = 0x80C5C3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C3C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5C3C8: stw     r0, 20(r1)
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
label_80C5C3CC:
    ctx->pc = 0x80C5C3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C3CCu)) return;
    // 80C5C3CC: bl      0x80A2497C
    {
            ctx->lr = 0x80C5C3D0u;
            ctx->pc = 0x80A2497Cu;
            return;
    }

label_80C5C3D0:
    ctx->pc = 0x80C5C3D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C3D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C3D0: lwz     r0, 20(r1)
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
label_80C5C3D4:
    ctx->pc = 0x80C5C3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C5C3D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C3D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C3D8:
    ctx->pc = 0x80C5C3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C3D8u)) return;
    // 80C5C3D8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C5C3DC:
    ctx->pc = 0x80C5C3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C3DCu)) return;
    // 80C5C3DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5C3E0:
    ctx->pc = 0x80C5C3E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C3E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C3E0: stwu     r1, -16(r1)
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
label_80C5C3E4:
    ctx->pc = 0x80C5C3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C3E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C3E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C3E8:
    ctx->pc = 0x80C5C3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C3E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5C3E8: stw     r0, 20(r1)
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
label_80C5C3EC:
    ctx->pc = 0x80C5C3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C3ECu)) return;
    // 80C5C3EC: bl      0x80A24940
    {
            ctx->lr = 0x80C5C3F0u;
            ctx->pc = 0x80A24940u;
            return;
    }

label_80C5C3F0:
    ctx->pc = 0x80C5C3F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C3F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C3F0: lwz     r0, 20(r1)
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
label_80C5C3F4:
    ctx->pc = 0x80C5C3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C5C3F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C3F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C3F8:
    ctx->pc = 0x80C5C3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C3F8u)) return;
    // 80C5C3F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C5C3FC:
    ctx->pc = 0x80C5C3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C3FCu)) return;
    // 80C5C3FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5C400:
    ctx->pc = 0x80C5C400u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C400u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C400: stwu     r1, -16(r1)
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
label_80C5C404:
    ctx->pc = 0x80C5C404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C404: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C408:
    ctx->pc = 0x80C5C408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5C408: stw     r0, 20(r1)
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
label_80C5C40C:
    ctx->pc = 0x80C5C40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C40Cu)) return;
    // 80C5C40C: bl      0x805C4ACC
    {
            ctx->lr = 0x80C5C410u;
            ctx->pc = 0x805C4ACCu;
            return;
    }

label_80C5C410:
    ctx->pc = 0x80C5C410u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C410u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C410: lwz     r0, 20(r1)
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
label_80C5C414:
    ctx->pc = 0x80C5C414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C5C414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C414: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C418:
    ctx->pc = 0x80C5C418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C418u)) return;
    // 80C5C418: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C5C41C:
    ctx->pc = 0x80C5C41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C41Cu)) return;
    // 80C5C41C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5C420:
    ctx->pc = 0x80C5C420u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 96u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C420u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 96u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 95u : 0u;
    // 80C5C420: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C424:
    ctx->pc = 0x80C5C424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 94u : 0u;
    // 80C5C424: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C428:
    ctx->pc = 0x80C5C428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 93u : 0u;
    // 80C5C428: stw     r0, 52(r1)
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
label_80C5C42C:
    ctx->pc = 0x80C5C42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C42Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 92u : 0u;
    // 80C5C42C: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C430:
    ctx->pc = 0x80C5C430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 91u : 0u;
    // 80C5C430: stw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C434:
    ctx->pc = 0x80C5C434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C434u)) return;
    // 80C5C434: lis     r4, -27432
    ctx->gpr[4] = ((u32)(s32)(-27432) << 16);

label_80C5C438:
    ctx->pc = 0x80C5C438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C438u)) return;
    // 80C5C438: addi    r4, r4, 23960
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23960);

label_80C5C43C:
    ctx->pc = 0x80C5C43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C43Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 88u : 0u;
    // 80C5C43C: lwz     r4, 0(r4)
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
label_80C5C440:
    ctx->pc = 0x80C5C440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 87u : 0u;
    // 80C5C440: lwz     r31, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C444:
    ctx->pc = 0x80C5C444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 86u : 0u;
    // 80C5C444: lwz     r30, 16(r31)
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
label_80C5C448:
    ctx->pc = 0x80C5C448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C448u)) return;
    // 80C5C448: lis     r4, -28644
    ctx->gpr[4] = ((u32)(s32)(-28644) << 16);

label_80C5C44C:
    ctx->pc = 0x80C5C44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C44Cu)) return;
    // 80C5C44C: addi    r6, r4, 13788
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(13788);

label_80C5C450:
    ctx->pc = 0x80C5C450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 83u : 0u;
    // 80C5C450: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C454:
    ctx->pc = 0x80C5C454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 82u : 0u;
    // 80C5C454: lfs     f0, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5C454u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
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
label_80C5C458:
    ctx->pc = 0x80C5C458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C458u)) return;
    // 80C5C458: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5C458u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_80C5C45C:
    ctx->pc = 0x80C5C45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C45Cu)) return;
    // 80C5C45C: lis     r4, -27433
    ctx->gpr[4] = ((u32)(s32)(-27433) << 16);

label_80C5C460:
    ctx->pc = 0x80C5C460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C460u)) return;
    // 80C5C460: addi    r4, r4, 13336
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13336);

label_80C5C464:
    ctx->pc = 0x80C5C464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 78u : 0u;
    // 80C5C464: lfd     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5C464u)) return;
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
label_80C5C468:
    ctx->pc = 0x80C5C468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C468u)) return;
    // 80C5C468: xoris   r5, r3, 0x8000
    ctx->gpr[5] = ctx->gpr[3] ^ (0x8000u << 16);

label_80C5C46C:
    ctx->pc = 0x80C5C46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C46Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 76u : 0u;
    // 80C5C46C: stw     r5, 12(r1)
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
label_80C5C470:
    ctx->pc = 0x80C5C470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C470u)) return;
    // 80C5C470: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80C5C474:
    ctx->pc = 0x80C5C474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 74u : 0u;
    // 80C5C474: stw     r0, 8(r1)
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
label_80C5C478:
    ctx->pc = 0x80C5C478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 73u : 0u;
    // 80C5C478: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5C478u)) return;
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
label_80C5C47C:
    ctx->pc = 0x80C5C47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C47Cu)) return;
    // 80C5C47C: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x80C5C47Cu)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_80C5C480:
    ctx->pc = 0x80C5C480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80C5C480u)) return;
    // 80C5C480: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5C480u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_80C5C484:
    ctx->pc = 0x80C5C484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 80C5C484: stfs     f0, 24(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C5C484u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C488:
    ctx->pc = 0x80C5C488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C488u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 80C5C488: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C48C:
    ctx->pc = 0x80C5C48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C48Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 80C5C48C: lfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5C48Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
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
label_80C5C490:
    ctx->pc = 0x80C5C490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C490u)) return;
    // 80C5C490: fsubs   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5C490u)) return;
    ppc_fsubs(ctx, 1, 2, 0);

label_80C5C494:
    ctx->pc = 0x80C5C494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 80C5C494: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C498:
    ctx->pc = 0x80C5C498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C5C498: stw     r0, 16(r1)
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
label_80C5C49C:
    ctx->pc = 0x80C5C49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C49Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 80C5C49C: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5C49Cu)) return;
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
label_80C5C4A0:
    ctx->pc = 0x80C5C4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4A0u)) return;
    // 80C5C4A0: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x80C5C4A0u)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_80C5C4A4:
    ctx->pc = 0x80C5C4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80C5C4A4u)) return;
    // 80C5C4A4: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5C4A4u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_80C5C4A8:
    ctx->pc = 0x80C5C4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80C5C4A8: stfs     f0, 28(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C5C4A8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C4AC:
    ctx->pc = 0x80C5C4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C5C4AC: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C4B0:
    ctx->pc = 0x80C5C4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80C5C4B0: lfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5C4B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
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
label_80C5C4B4:
    ctx->pc = 0x80C5C4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4B4u)) return;
    // 80C5C4B4: fsubs   f1, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5C4B4u)) return;
    ppc_fsubs(ctx, 1, 3, 0);

label_80C5C4B8:
    ctx->pc = 0x80C5C4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C5C4B8: stw     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C4BC:
    ctx->pc = 0x80C5C4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C5C4BC: stw     r0, 24(r1)
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
label_80C5C4C0:
    ctx->pc = 0x80C5C4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C5C4C0: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5C4C0u)) return;
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
label_80C5C4C4:
    ctx->pc = 0x80C5C4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4C4u)) return;
    // 80C5C4C4: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x80C5C4C4u)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_80C5C4C8:
    ctx->pc = 0x80C5C4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80C5C4C8u)) return;
    // 80C5C4C8: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5C4C8u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_80C5C4CC:
    ctx->pc = 0x80C5C4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C4CC: stfs     f0, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C5C4CCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C4D0:
    ctx->pc = 0x80C5C4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C4D0: stw     r3, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C4D4:
    ctx->pc = 0x80C5C4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C4D4: lfs     f1, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C5C4D4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
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
label_80C5C4D8:
    ctx->pc = 0x80C5C4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5C4D8: lfs     f2, 24(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C5C4D8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
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
label_80C5C4DC:
    ctx->pc = 0x80C5C4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4DCu)) return;
    // 80C5C4DC: bl      0x80401910
    {
            ctx->lr = 0x80C5C4E0u;
            ctx->pc = 0x80401910u;
            return;
    }

label_80C5C4E0:
    ctx->pc = 0x80C5C4E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C4E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5C4E0: stw     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C4E4:
    ctx->pc = 0x80C5C4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4E4u)) return;
    // 80C5C4E4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80C5C4E8:
    ctx->pc = 0x80C5C4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5C4E8: stb     r0, 0(r31)
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
label_80C5C4EC:
    ctx->pc = 0x80C5C4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5C4EC: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C4F0:
    ctx->pc = 0x80C5C4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C4F0: lwz     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C4F4:
    ctx->pc = 0x80C5C4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C4F4: lwz     r0, 52(r1)
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
label_80C5C4F8:
    ctx->pc = 0x80C5C4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C5C4F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C4F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C4FC:
    ctx->pc = 0x80C5C4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C4FCu)) return;
    // 80C5C4FC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80C5C500:
    ctx->pc = 0x80C5C500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C500u)) return;
    // 80C5C500: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5C504:
    ctx->pc = 0x80C5C504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C5C504: lis     r3, -27432
    ctx->gpr[3] = ((u32)(s32)(-27432) << 16);

label_80C5C508:
    ctx->pc = 0x80C5C508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C508u)) return;
    // 80C5C508: addi    r3, r3, 23960
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23960);

label_80C5C50C:
    ctx->pc = 0x80C5C50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C50Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C5C50C: lwz     r3, 0(r3)
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
label_80C5C510:
    ctx->pc = 0x80C5C510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5C510: lwz     r3, 32(r3)
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
label_80C5C514:
    ctx->pc = 0x80C5C514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5C514: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C514u)) return;
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
label_80C5C518:
    ctx->pc = 0x80C5C518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5C518: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C518u)) return;
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
label_80C5C51C:
    ctx->pc = 0x80C5C51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C51Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5C51C: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C51Cu)) return;
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
label_80C5C520:
    ctx->pc = 0x80C5C520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C520u)) return;
    // 80C5C520: lis     r3, -28644
    ctx->gpr[3] = ((u32)(s32)(-28644) << 16);

label_80C5C524:
    ctx->pc = 0x80C5C524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C524u)) return;
    // 80C5C524: addi    r4, r3, 13788
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13788);

label_80C5C528:
    ctx->pc = 0x80C5C528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5C528: lwz     r3, 0(r4)
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
label_80C5C52C:
    ctx->pc = 0x80C5C52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C52Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C52C: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C52Cu)) return;
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
label_80C5C530:
    ctx->pc = 0x80C5C530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C530: lwz     r3, 0(r4)
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
label_80C5C534:
    ctx->pc = 0x80C5C534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C534: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C534u)) return;
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
label_80C5C538:
    ctx->pc = 0x80C5C538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C538: lwz     r3, 0(r4)
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
label_80C5C53C:
    ctx->pc = 0x80C5C53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C53Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5C53C: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C53Cu)) return;
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
label_80C5C540:
    ctx->pc = 0x80C5C540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C540u)) return;
    // 80C5C540: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5C544:
    ctx->pc = 0x80C5C544u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C544u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C5C544: lis     r6, -27432
    ctx->gpr[6] = ((u32)(s32)(-27432) << 16);

label_80C5C548:
    ctx->pc = 0x80C5C548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C548u)) return;
    // 80C5C548: addi    r6, r6, 23960
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(23960);

label_80C5C54C:
    ctx->pc = 0x80C5C54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C54Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C5C54C: lwz     r6, 0(r6)
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
label_80C5C550:
    ctx->pc = 0x80C5C550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5C550: lwz     r6, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C554:
    ctx->pc = 0x80C5C554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5C554: stw     r3, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C558:
    ctx->pc = 0x80C5C558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5C558: stw     r4, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C55C:
    ctx->pc = 0x80C5C55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C55Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5C55C: stw     r5, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C560:
    ctx->pc = 0x80C5C560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C560u)) return;
    // 80C5C560: lis     r6, -28644
    ctx->gpr[6] = ((u32)(s32)(-28644) << 16);

label_80C5C564:
    ctx->pc = 0x80C5C564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C564u)) return;
    // 80C5C564: addi    r7, r6, 13788
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(13788);

label_80C5C568:
    ctx->pc = 0x80C5C568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5C568: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C56C:
    ctx->pc = 0x80C5C56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C56Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C56C: stw     r3, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C570:
    ctx->pc = 0x80C5C570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C570: lwz     r3, 0(r7)
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
label_80C5C574:
    ctx->pc = 0x80C5C574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C574: stw     r4, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C578:
    ctx->pc = 0x80C5C578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C578: lwz     r3, 0(r7)
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
label_80C5C57C:
    ctx->pc = 0x80C5C57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C57Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5C57C: stw     r5, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C580:
    ctx->pc = 0x80C5C580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C580u)) return;
    // 80C5C580: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5C584:
    ctx->pc = 0x80C5C584u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C584u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C5C584: lis     r4, -32570
    ctx->gpr[4] = ((u32)(s32)(-32570) << 16);

label_80C5C588:
    ctx->pc = 0x80C5C588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C588u)) return;
    // 80C5C588: addi    r0, r4, -14936
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-14936);

label_80C5C58C:
    ctx->pc = 0x80C5C58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C58Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5C58C: stw     r0, 16(r3)
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
label_80C5C590:
    ctx->pc = 0x80C5C590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C590u)) return;
    // 80C5C590: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C5C594:
    ctx->pc = 0x80C5C594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C594: stw     r0, 20(r3)
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
label_80C5C598:
    ctx->pc = 0x80C5C598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C598u)) return;
    // 80C5C598: lis     r4, -32570
    ctx->gpr[4] = ((u32)(s32)(-32570) << 16);

label_80C5C59C:
    ctx->pc = 0x80C5C59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C59Cu)) return;
    // 80C5C59C: addi    r0, r4, -14388
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-14388);

label_80C5C5A0:
    ctx->pc = 0x80C5C5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C5A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5C5A0: stw     r0, 24(r3)
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
label_80C5C5A4:
    ctx->pc = 0x80C5C5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C5A4u)) return;
    // 80C5C5A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5C5A8:
    ctx->pc = 0x80C5C5A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C5A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C5A8: lwz     r3, 32(r3)
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
label_80C5C5AC:
    ctx->pc = 0x80C5C5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C5ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C5AC: lwz     r4, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C5B0:
    ctx->pc = 0x80C5C5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C5B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C5B0: lbz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C5B4:
    ctx->pc = 0x80C5C5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C5B4u)) return;
    // 80C5C5B4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80C5C5B8:
    ctx->pc = 0x80C5C5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C5B8u)) return;
    // 80C5C5B8: cmpwi   r0, 1
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

label_80C5C5BC:
    ctx->pc = 0x80C5C5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C5BCu)) return;
    // 80C5C5BC: bc    12, 2, 0x80C5C74C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5C74C;
        }
    }

label_80C5C5C0:
    ctx->pc = 0x80C5C5C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C5C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5C5C0: bc    4, 0, 0x80C5C5CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5C5CC;
        }
    }

label_80C5C5C4:
    ctx->pc = 0x80C5C5C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C5C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5C5C4: cmpwi   r0, 0
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

label_80C5C5C8:
    ctx->pc = 0x80C5C5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C5C8u)) return;
    // 80C5C5C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5C5CC:
    ctx->pc = 0x80C5C5CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C5CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5C5CC: cmpwi   r0, 3
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

label_80C5C5D0:
    ctx->pc = 0x80C5C5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C5D0u)) return;
    // 80C5C5D0: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5C5D4:
    ctx->pc = 0x80C5C5D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C5D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C5D4: lwz     r6, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C5D8:
    ctx->pc = 0x80C5C5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C5D8u)) return;
    // 80C5C5D8: cmpwi   r6, 0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5C5DC:
    ctx->pc = 0x80C5C5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C5DCu)) return;
    // 80C5C5DC: bc    12, 0, 0x80C5C67C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5C67C;
        }
    }

label_80C5C5E0:
    ctx->pc = 0x80C5C5E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C5E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5C5E0: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C5C5E4:
    ctx->pc = 0x80C5C5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C5E4u)) return;
    // 80C5C5E4: addi    r0, r5, -32768
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-32768);

label_80C5C5E8:
    ctx->pc = 0x80C5C5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C5E8u)) return;
    // 80C5C5E8: cmpw    r6, r0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5C5EC:
    ctx->pc = 0x80C5C5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C5ECu)) return;
    // 80C5C5EC: bc    4, 0, 0x80C5C67C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5C67C;
        }
    }

label_80C5C5F0:
    ctx->pc = 0x80C5C5F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C5F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C5F0: lwz     r7, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C5F4:
    ctx->pc = 0x80C5C5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C5F4u)) return;
    // 80C5C5F4: addis   r5, r6, 1
    ctx->gpr[5] = ctx->gpr[6] + ((u32)(s32)(1) << 16);

label_80C5C5F8:
    ctx->pc = 0x80C5C5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C5F8u)) return;
    // 80C5C5F8: addi    r0, r5, -32768
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-32768);

label_80C5C5FC:
    ctx->pc = 0x80C5C5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C5FCu)) return;
    // 80C5C5FC: cmpw    r7, r0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5C600:
    ctx->pc = 0x80C5C600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C600u)) return;
    // 80C5C600: bc    12, 1, 0x80C5C630
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5C630;
        }
    }

label_80C5C604:
    ctx->pc = 0x80C5C604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5C604: cmpw    r7, r6
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5C608:
    ctx->pc = 0x80C5C608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C608u)) return;
    // 80C5C608: bc    12, 0, 0x80C5C630
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5C630;
        }
    }

label_80C5C60C:
    ctx->pc = 0x80C5C60Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C60Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5C60C: lwz     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C610:
    ctx->pc = 0x80C5C610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C610u)) return;
    // 80C5C610: subf   r0, r0, r7
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80C5C614:
    ctx->pc = 0x80C5C614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5C614: stw     r0, 24(r3)
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
label_80C5C618:
    ctx->pc = 0x80C5C618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C618: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C61C:
    ctx->pc = 0x80C5C61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C61Cu)) return;
    // 80C5C61C: lis     r5, -28644
    ctx->gpr[5] = ((u32)(s32)(-28644) << 16);

label_80C5C620:
    ctx->pc = 0x80C5C620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C620u)) return;
    // 80C5C620: addi    r5, r5, 13788
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13788);

label_80C5C624:
    ctx->pc = 0x80C5C624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C624: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C628:
    ctx->pc = 0x80C5C628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5C628: stw     r0, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C62C:
    ctx->pc = 0x80C5C62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C62Cu)) return;
    // 80C5C62C: b       0x80C5C6FC
    {
            goto label_80C5C6FC;
    }

label_80C5C630:
    ctx->pc = 0x80C5C630u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C630u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5C630: lwz     r5, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C634:
    ctx->pc = 0x80C5C634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5C634: lwz     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C638:
    ctx->pc = 0x80C5C638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C638u)) return;
    // 80C5C638: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C5C63C:
    ctx->pc = 0x80C5C63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C63Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5C63C: stw     r0, 24(r3)
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
label_80C5C640:
    ctx->pc = 0x80C5C640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5C640: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C644:
    ctx->pc = 0x80C5C644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C644u)) return;
    // 80C5C644: lis     r5, -28644
    ctx->gpr[5] = ((u32)(s32)(-28644) << 16);

label_80C5C648:
    ctx->pc = 0x80C5C648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C648u)) return;
    // 80C5C648: addi    r6, r5, 13788
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(13788);

label_80C5C64C:
    ctx->pc = 0x80C5C64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C64Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C64C: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C650:
    ctx->pc = 0x80C5C650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C650: stw     r0, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C654:
    ctx->pc = 0x80C5C654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C654: lwz     r5, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C658:
    ctx->pc = 0x80C5C658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C658u)) return;
    // 80C5C658: lis     r0, 1
    ctx->gpr[0] = ((u32)(s32)(1) << 16);

label_80C5C65C:
    ctx->pc = 0x80C5C65Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C65Cu)) return;
    // 80C5C65C: cmpw    r5, r0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5C660:
    ctx->pc = 0x80C5C660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C660u)) return;
    // 80C5C660: bc    12, 0, 0x80C5C6FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5C6FC;
        }
    }

label_80C5C664:
    ctx->pc = 0x80C5C664u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C664u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C5C664: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C5C668:
    ctx->pc = 0x80C5C668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C668: stw     r0, 24(r3)
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
label_80C5C66C:
    ctx->pc = 0x80C5C66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C66Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C66C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C670:
    ctx->pc = 0x80C5C670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C670u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C670: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C674:
    ctx->pc = 0x80C5C674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5C674: stw     r0, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C678:
    ctx->pc = 0x80C5C678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C678u)) return;
    // 80C5C678: b       0x80C5C6FC
    {
            goto label_80C5C6FC;
    }

label_80C5C67C:
    ctx->pc = 0x80C5C67Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C67Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C67C: lwz     r5, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C680:
    ctx->pc = 0x80C5C680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C680u)) return;
    // 80C5C680: addi    r0, r6, -32768
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-32768);

label_80C5C684:
    ctx->pc = 0x80C5C684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C684u)) return;
    // 80C5C684: cmpw    r5, r0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5C688:
    ctx->pc = 0x80C5C688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C688u)) return;
    // 80C5C688: bc    12, 0, 0x80C5C6B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5C6B8;
        }
    }

label_80C5C68C:
    ctx->pc = 0x80C5C68Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C68Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5C68C: cmpw    r5, r6
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5C690:
    ctx->pc = 0x80C5C690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C690u)) return;
    // 80C5C690: bc    12, 1, 0x80C5C6B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5C6B8;
        }
    }

label_80C5C694:
    ctx->pc = 0x80C5C694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5C694: lwz     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C698:
    ctx->pc = 0x80C5C698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C698u)) return;
    // 80C5C698: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C5C69C:
    ctx->pc = 0x80C5C69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C69Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5C69C: stw     r0, 24(r3)
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
label_80C5C6A0:
    ctx->pc = 0x80C5C6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C6A0: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C6A4:
    ctx->pc = 0x80C5C6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6A4u)) return;
    // 80C5C6A4: lis     r5, -28644
    ctx->gpr[5] = ((u32)(s32)(-28644) << 16);

label_80C5C6A8:
    ctx->pc = 0x80C5C6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6A8u)) return;
    // 80C5C6A8: addi    r5, r5, 13788
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13788);

label_80C5C6AC:
    ctx->pc = 0x80C5C6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C6AC: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C6B0:
    ctx->pc = 0x80C5C6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5C6B0: stw     r0, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C6B4:
    ctx->pc = 0x80C5C6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6B4u)) return;
    // 80C5C6B4: b       0x80C5C6FC
    {
            goto label_80C5C6FC;
    }

label_80C5C6B8:
    ctx->pc = 0x80C5C6B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C6B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5C6B8: lwz     r5, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C6BC:
    ctx->pc = 0x80C5C6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5C6BC: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C6C0:
    ctx->pc = 0x80C5C6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6C0u)) return;
    // 80C5C6C0: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80C5C6C4:
    ctx->pc = 0x80C5C6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5C6C4: stw     r0, 24(r3)
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
label_80C5C6C8:
    ctx->pc = 0x80C5C6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5C6C8: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C6CC:
    ctx->pc = 0x80C5C6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6CCu)) return;
    // 80C5C6CC: lis     r5, -28644
    ctx->gpr[5] = ((u32)(s32)(-28644) << 16);

label_80C5C6D0:
    ctx->pc = 0x80C5C6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6D0u)) return;
    // 80C5C6D0: addi    r6, r5, 13788
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(13788);

label_80C5C6D4:
    ctx->pc = 0x80C5C6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C6D4: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C6D8:
    ctx->pc = 0x80C5C6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C6D8: stw     r0, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C6DC:
    ctx->pc = 0x80C5C6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C6DC: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C6E0:
    ctx->pc = 0x80C5C6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6E0u)) return;
    // 80C5C6E0: cmpwi   r0, 0
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

label_80C5C6E4:
    ctx->pc = 0x80C5C6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6E4u)) return;
    // 80C5C6E4: bc    12, 1, 0x80C5C6FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5C6FC;
        }
    }

label_80C5C6E8:
    ctx->pc = 0x80C5C6E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C6E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5C6E8: lis     r0, 1
    ctx->gpr[0] = ((u32)(s32)(1) << 16);

label_80C5C6EC:
    ctx->pc = 0x80C5C6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C6EC: stw     r0, 24(r3)
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
label_80C5C6F0:
    ctx->pc = 0x80C5C6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C6F0: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C6F4:
    ctx->pc = 0x80C5C6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5C6F4: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C6F8:
    ctx->pc = 0x80C5C6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C6F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C5C6F8: stw     r0, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C6FC:
    ctx->pc = 0x80C5C6FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C6FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C6FC: lwz     r6, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C700:
    ctx->pc = 0x80C5C700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C700: lwz     r5, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C704:
    ctx->pc = 0x80C5C704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C704: lwz     r4, 36(r4)
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
label_80C5C708:
    ctx->pc = 0x80C5C708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C708u)) return;
    // 80C5C708: add   r0, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C5C70C:
    ctx->pc = 0x80C5C70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C70Cu)) return;
    // 80C5C70C: cmpw    r6, r0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5C710:
    ctx->pc = 0x80C5C710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C710u)) return;
    // 80C5C710: bclr  12, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5C714:
    ctx->pc = 0x80C5C714u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C714u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5C714: subf   r0, r4, r5
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80C5C718:
    ctx->pc = 0x80C5C718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C718u)) return;
    // 80C5C718: cmpw    r6, r0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5C71C:
    ctx->pc = 0x80C5C71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C71Cu)) return;
    // 80C5C71C: bclr  12, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5C720:
    ctx->pc = 0x80C5C720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5C720: stw     r5, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C724:
    ctx->pc = 0x80C5C724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5C724: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C728:
    ctx->pc = 0x80C5C728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C728u)) return;
    // 80C5C728: lis     r4, -28644
    ctx->gpr[4] = ((u32)(s32)(-28644) << 16);

label_80C5C72C:
    ctx->pc = 0x80C5C72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C72Cu)) return;
    // 80C5C72C: addi    r4, r4, 13788
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13788);

label_80C5C730:
    ctx->pc = 0x80C5C730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5C730: lwz     r4, 0(r4)
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
label_80C5C734:
    ctx->pc = 0x80C5C734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C734: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C738:
    ctx->pc = 0x80C5C738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C738u)) return;
    // 80C5C738: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80C5C73C:
    ctx->pc = 0x80C5C73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C73Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C73C: stb     r0, 0(r3)
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
label_80C5C740:
    ctx->pc = 0x80C5C740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C740u)) return;
    // 80C5C740: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C5C744:
    ctx->pc = 0x80C5C744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5C744: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C748:
    ctx->pc = 0x80C5C748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C748u)) return;
    // 80C5C748: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5C74C:
    ctx->pc = 0x80C5C74Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C74Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C5C74C: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C74Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
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
label_80C5C750:
    ctx->pc = 0x80C5C750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80C5C750: lfs     f0, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5C750u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
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
label_80C5C754:
    ctx->pc = 0x80C5C754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C754u)) return;
    // 80C5C754: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5C754u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C5C758:
    ctx->pc = 0x80C5C758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C5C758: stfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C758u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C75C:
    ctx->pc = 0x80C5C75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C75Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C5C75C: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C75Cu)) return;
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
label_80C5C760:
    ctx->pc = 0x80C5C760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C5C760: lfs     f0, 28(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5C760u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
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
label_80C5C764:
    ctx->pc = 0x80C5C764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C764u)) return;
    // 80C5C764: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5C764u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C5C768:
    ctx->pc = 0x80C5C768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C5C768: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C768u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C76C:
    ctx->pc = 0x80C5C76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C76Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C5C76C: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C76Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
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
label_80C5C770:
    ctx->pc = 0x80C5C770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C5C770: lfs     f0, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5C770u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
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
label_80C5C774:
    ctx->pc = 0x80C5C774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C774u)) return;
    // 80C5C774: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5C774u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C5C778:
    ctx->pc = 0x80C5C778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C5C778: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C778u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C77C:
    ctx->pc = 0x80C5C77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C77Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C5C77C: lfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C77Cu)) return;
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
label_80C5C780:
    ctx->pc = 0x80C5C780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C780u)) return;
    // 80C5C780: lis     r5, -28644
    ctx->gpr[5] = ((u32)(s32)(-28644) << 16);

label_80C5C784:
    ctx->pc = 0x80C5C784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C784u)) return;
    // 80C5C784: addi    r6, r5, 13788
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(13788);

label_80C5C788:
    ctx->pc = 0x80C5C788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C5C788: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C78C:
    ctx->pc = 0x80C5C78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C78Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5C78C: stfs     f0, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5C78Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C790:
    ctx->pc = 0x80C5C790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C790u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5C790: lfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C790u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
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
label_80C5C794:
    ctx->pc = 0x80C5C794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C794u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5C794: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C798:
    ctx->pc = 0x80C5C798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C798u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5C798: stfs     f0, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5C798u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C79C:
    ctx->pc = 0x80C5C79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C79Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5C79C: lfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5C79Cu)) return;
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
label_80C5C7A0:
    ctx->pc = 0x80C5C7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C7A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5C7A0: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C7A4:
    ctx->pc = 0x80C5C7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C7A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5C7A4: stfs     f0, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5C7A4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C7A8:
    ctx->pc = 0x80C5C7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C7A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C7A8: lwz     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C7AC:
    ctx->pc = 0x80C5C7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C7ACu)) return;
    // 80C5C7AC: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_80C5C7B0:
    ctx->pc = 0x80C5C7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C7B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C7B0: stw     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C7B4:
    ctx->pc = 0x80C5C7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C7B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C7B4: lwz     r0, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C7B8:
    ctx->pc = 0x80C5C7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C7B8u)) return;
    // 80C5C7B8: cmplw   r5, r0
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5C7BC:
    ctx->pc = 0x80C5C7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C7BCu)) return;
    // 80C5C7BC: bclr  4, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5C7C0:
    ctx->pc = 0x80C5C7C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C7C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5C7C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C5C7C4:
    ctx->pc = 0x80C5C7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C7C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5C7C4: stb     r0, 0(r3)
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
label_80C5C7C8:
    ctx->pc = 0x80C5C7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C7C8u)) return;
    // 80C5C7C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

label_80C5C7CC:
    ctx->pc = 0x80C5C7CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C7CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5C7CC: stwu     r1, -16(r1)
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
label_80C5C7D0:
    ctx->pc = 0x80C5C7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C7D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5C7D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C7D4:
    ctx->pc = 0x80C5C7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C7D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C7D4: stw     r0, 20(r1)
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
label_80C5C7D8:
    ctx->pc = 0x80C5C7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C7D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5C7D8: lwz     r3, 32(r3)
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
label_80C5C7DC:
    ctx->pc = 0x80C5C7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C7DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C7DC: lwz     r3, 16(r3)
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
label_80C5C7E0:
    ctx->pc = 0x80C5C7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C7E0u)) return;
    // 80C5C7E0: cmplwi  r3, 0x0000
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

label_80C5C7E4:
    ctx->pc = 0x80C5C7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C7E4u)) return;
    // 80C5C7E4: bc    12, 2, 0x80C5C7EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5C7EC;
        }
    }

label_80C5C7E8:
    ctx->pc = 0x80C5C7E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C7E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5C7E8: bl      0x8050ED40
    {
            ctx->lr = 0x80C5C7ECu;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80C5C7EC:
    ctx->pc = 0x80C5C7ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5C7ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5C7EC: lwz     r0, 20(r1)
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
label_80C5C7F0:
    ctx->pc = 0x80C5C7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C5C7F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5C7F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5C7F4:
    ctx->pc = 0x80C5C7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C7F4u)) return;
    // 80C5C7F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C5C7F8:
    ctx->pc = 0x80C5C7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5C7F8u)) return;
    // 80C5C7F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5B920;
        }
    }

    ctx->pc = 0x80C5C7FCu;
    return;
return_dispatch_80C5B920:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80C5B924u: goto label_80C5B924;
    case 0x80C5B978u: goto label_80C5B978;
    case 0x80C5B9B4u: goto label_80C5B9B4;
    case 0x80C5B9D4u: goto label_80C5B9D4;
    case 0x80C5B9ECu: goto label_80C5B9EC;
    case 0x80C5BA08u: goto label_80C5BA08;
    case 0x80C5BA3Cu: goto label_80C5BA3C;
    case 0x80C5BA50u: goto label_80C5BA50;
    case 0x80C5BA5Cu: goto label_80C5BA5C;
    case 0x80C5BA68u: goto label_80C5BA68;
    case 0x80C5BB00u: goto label_80C5BB00;
    case 0x80C5BB10u: goto label_80C5BB10;
    case 0x80C5BB60u: goto label_80C5BB60;
    case 0x80C5BB74u: goto label_80C5BB74;
    case 0x80C5BB90u: goto label_80C5BB90;
    case 0x80C5BBACu: goto label_80C5BBAC;
    case 0x80C5BBE4u: goto label_80C5BBE4;
    case 0x80C5BBF4u: goto label_80C5BBF4;
    case 0x80C5BC04u: goto label_80C5BC04;
    case 0x80C5BC28u: goto label_80C5BC28;
    case 0x80C5BC38u: goto label_80C5BC38;
    case 0x80C5BC90u: goto label_80C5BC90;
    case 0x80C5BCC4u: goto label_80C5BCC4;
    case 0x80C5BCE0u: goto label_80C5BCE0;
    case 0x80C5BCF0u: goto label_80C5BCF0;
    case 0x80C5BD00u: goto label_80C5BD00;
    case 0x80C5BD6Cu: goto label_80C5BD6C;
    case 0x80C5BDB0u: goto label_80C5BDB0;
    case 0x80C5BDCCu: goto label_80C5BDCC;
    case 0x80C5BDD8u: goto label_80C5BDD8;
    case 0x80C5BDE4u: goto label_80C5BDE4;
    case 0x80C5BE0Cu: goto label_80C5BE0C;
    case 0x80C5BE68u: goto label_80C5BE68;
    case 0x80C5BEACu: goto label_80C5BEAC;
    case 0x80C5BF48u: goto label_80C5BF48;
    case 0x80C5BF98u: goto label_80C5BF98;
    case 0x80C5BFB0u: goto label_80C5BFB0;
    case 0x80C5BFFCu: goto label_80C5BFFC;
    case 0x80C5C014u: goto label_80C5C014;
    case 0x80C5C04Cu: goto label_80C5C04C;
    case 0x80C5C078u: goto label_80C5C078;
    case 0x80C5C088u: goto label_80C5C088;
    case 0x80C5C100u: goto label_80C5C100;
    case 0x80C5C15Cu: goto label_80C5C15C;
    case 0x80C5C174u: goto label_80C5C174;
    case 0x80C5C198u: goto label_80C5C198;
    case 0x80C5C210u: goto label_80C5C210;
    case 0x80C5C224u: goto label_80C5C224;
    case 0x80C5C39Cu: goto label_80C5C39C;
    case 0x80C5C3B0u: goto label_80C5C3B0;
    case 0x80C5C3D0u: goto label_80C5C3D0;
    case 0x80C5C3F0u: goto label_80C5C3F0;
    case 0x80C5C410u: goto label_80C5C410;
    case 0x80C5C4E0u: goto label_80C5C4E0;
    case 0x80C5C7ECu: goto label_80C5C7EC;
    default: return;
    }
}

