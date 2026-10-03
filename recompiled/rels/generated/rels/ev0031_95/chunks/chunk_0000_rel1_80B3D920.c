// DolRecomp output
#include "../generated.h"

void func_80B3D920(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80B3D920[1298] = {
        &&label_80B3D920,
        &&label_80B3D924,
        &&label_80B3D928,
        &&label_80B3D92C,
        &&label_80B3D930,
        &&label_80B3D934,
        &&label_80B3D938,
        &&label_80B3D93C,
        &&label_80B3D940,
        &&label_80B3D944,
        &&label_80B3D948,
        &&label_80B3D94C,
        &&label_80B3D950,
        &&label_80B3D954,
        &&label_80B3D958,
        &&label_80B3D95C,
        &&label_80B3D960,
        &&label_80B3D964,
        &&label_80B3D968,
        &&label_80B3D96C,
        &&label_80B3D970,
        &&label_80B3D974,
        &&label_80B3D978,
        &&label_80B3D97C,
        &&label_80B3D980,
        &&label_80B3D984,
        &&label_80B3D988,
        &&label_80B3D98C,
        &&label_80B3D990,
        &&label_80B3D994,
        &&label_80B3D998,
        &&label_80B3D99C,
        &&label_80B3D9A0,
        &&label_80B3D9A4,
        &&label_80B3D9A8,
        &&label_80B3D9AC,
        &&label_80B3D9B0,
        &&label_80B3D9B4,
        &&label_80B3D9B8,
        &&label_80B3D9BC,
        &&label_80B3D9C0,
        &&label_80B3D9C4,
        &&label_80B3D9C8,
        &&label_80B3D9CC,
        &&label_80B3D9D0,
        &&label_80B3D9D4,
        &&label_80B3D9D8,
        &&label_80B3D9DC,
        &&label_80B3D9E0,
        &&label_80B3D9E4,
        &&label_80B3D9E8,
        &&label_80B3D9EC,
        &&label_80B3D9F0,
        &&label_80B3D9F4,
        &&label_80B3D9F8,
        &&label_80B3D9FC,
        &&label_80B3DA00,
        &&label_80B3DA04,
        &&label_80B3DA08,
        &&label_80B3DA0C,
        &&label_80B3DA10,
        &&label_80B3DA14,
        &&label_80B3DA18,
        &&label_80B3DA1C,
        &&label_80B3DA20,
        &&label_80B3DA24,
        &&label_80B3DA28,
        &&label_80B3DA2C,
        &&label_80B3DA30,
        &&label_80B3DA34,
        &&label_80B3DA38,
        &&label_80B3DA3C,
        &&label_80B3DA40,
        &&label_80B3DA44,
        &&label_80B3DA48,
        &&label_80B3DA4C,
        &&label_80B3DA50,
        &&label_80B3DA54,
        &&label_80B3DA58,
        &&label_80B3DA5C,
        &&label_80B3DA60,
        &&label_80B3DA64,
        &&label_80B3DA68,
        &&label_80B3DA6C,
        &&label_80B3DA70,
        &&label_80B3DA74,
        &&label_80B3DA78,
        &&label_80B3DA7C,
        &&label_80B3DA80,
        &&label_80B3DA84,
        &&label_80B3DA88,
        &&label_80B3DA8C,
        &&label_80B3DA90,
        &&label_80B3DA94,
        &&label_80B3DA98,
        &&label_80B3DA9C,
        &&label_80B3DAA0,
        &&label_80B3DAA4,
        &&label_80B3DAA8,
        &&label_80B3DAAC,
        &&label_80B3DAB0,
        &&label_80B3DAB4,
        &&label_80B3DAB8,
        &&label_80B3DABC,
        &&label_80B3DAC0,
        &&label_80B3DAC4,
        &&label_80B3DAC8,
        &&label_80B3DACC,
        &&label_80B3DAD0,
        &&label_80B3DAD4,
        &&label_80B3DAD8,
        &&label_80B3DADC,
        &&label_80B3DAE0,
        &&label_80B3DAE4,
        &&label_80B3DAE8,
        &&label_80B3DAEC,
        &&label_80B3DAF0,
        &&label_80B3DAF4,
        &&label_80B3DAF8,
        &&label_80B3DAFC,
        &&label_80B3DB00,
        &&label_80B3DB04,
        &&label_80B3DB08,
        &&label_80B3DB0C,
        &&label_80B3DB10,
        &&label_80B3DB14,
        &&label_80B3DB18,
        &&label_80B3DB1C,
        &&label_80B3DB20,
        &&label_80B3DB24,
        &&label_80B3DB28,
        &&label_80B3DB2C,
        &&label_80B3DB30,
        &&label_80B3DB34,
        &&label_80B3DB38,
        &&label_80B3DB3C,
        &&label_80B3DB40,
        &&label_80B3DB44,
        &&label_80B3DB48,
        &&label_80B3DB4C,
        &&label_80B3DB50,
        &&label_80B3DB54,
        &&label_80B3DB58,
        &&label_80B3DB5C,
        &&label_80B3DB60,
        &&label_80B3DB64,
        &&label_80B3DB68,
        &&label_80B3DB6C,
        &&label_80B3DB70,
        &&label_80B3DB74,
        &&label_80B3DB78,
        &&label_80B3DB7C,
        &&label_80B3DB80,
        &&label_80B3DB84,
        &&label_80B3DB88,
        &&label_80B3DB8C,
        &&label_80B3DB90,
        &&label_80B3DB94,
        &&label_80B3DB98,
        &&label_80B3DB9C,
        &&label_80B3DBA0,
        &&label_80B3DBA4,
        &&label_80B3DBA8,
        &&label_80B3DBAC,
        &&label_80B3DBB0,
        &&label_80B3DBB4,
        &&label_80B3DBB8,
        &&label_80B3DBBC,
        &&label_80B3DBC0,
        &&label_80B3DBC4,
        &&label_80B3DBC8,
        &&label_80B3DBCC,
        &&label_80B3DBD0,
        &&label_80B3DBD4,
        &&label_80B3DBD8,
        &&label_80B3DBDC,
        &&label_80B3DBE0,
        &&label_80B3DBE4,
        &&label_80B3DBE8,
        &&label_80B3DBEC,
        &&label_80B3DBF0,
        &&label_80B3DBF4,
        &&label_80B3DBF8,
        &&label_80B3DBFC,
        &&label_80B3DC00,
        &&label_80B3DC04,
        &&label_80B3DC08,
        &&label_80B3DC0C,
        &&label_80B3DC10,
        &&label_80B3DC14,
        &&label_80B3DC18,
        &&label_80B3DC1C,
        &&label_80B3DC20,
        &&label_80B3DC24,
        &&label_80B3DC28,
        &&label_80B3DC2C,
        &&label_80B3DC30,
        &&label_80B3DC34,
        &&label_80B3DC38,
        &&label_80B3DC3C,
        &&label_80B3DC40,
        &&label_80B3DC44,
        &&label_80B3DC48,
        &&label_80B3DC4C,
        &&label_80B3DC50,
        &&label_80B3DC54,
        &&label_80B3DC58,
        &&label_80B3DC5C,
        &&label_80B3DC60,
        &&label_80B3DC64,
        &&label_80B3DC68,
        &&label_80B3DC6C,
        &&label_80B3DC70,
        &&label_80B3DC74,
        &&label_80B3DC78,
        &&label_80B3DC7C,
        &&label_80B3DC80,
        &&label_80B3DC84,
        &&label_80B3DC88,
        &&label_80B3DC8C,
        &&label_80B3DC90,
        &&label_80B3DC94,
        &&label_80B3DC98,
        &&label_80B3DC9C,
        &&label_80B3DCA0,
        &&label_80B3DCA4,
        &&label_80B3DCA8,
        &&label_80B3DCAC,
        &&label_80B3DCB0,
        &&label_80B3DCB4,
        &&label_80B3DCB8,
        &&label_80B3DCBC,
        &&label_80B3DCC0,
        &&label_80B3DCC4,
        &&label_80B3DCC8,
        &&label_80B3DCCC,
        &&label_80B3DCD0,
        &&label_80B3DCD4,
        &&label_80B3DCD8,
        &&label_80B3DCDC,
        &&label_80B3DCE0,
        &&label_80B3DCE4,
        &&label_80B3DCE8,
        &&label_80B3DCEC,
        &&label_80B3DCF0,
        &&label_80B3DCF4,
        &&label_80B3DCF8,
        &&label_80B3DCFC,
        &&label_80B3DD00,
        &&label_80B3DD04,
        &&label_80B3DD08,
        &&label_80B3DD0C,
        &&label_80B3DD10,
        &&label_80B3DD14,
        &&label_80B3DD18,
        &&label_80B3DD1C,
        &&label_80B3DD20,
        &&label_80B3DD24,
        &&label_80B3DD28,
        &&label_80B3DD2C,
        &&label_80B3DD30,
        &&label_80B3DD34,
        &&label_80B3DD38,
        &&label_80B3DD3C,
        &&label_80B3DD40,
        &&label_80B3DD44,
        &&label_80B3DD48,
        &&label_80B3DD4C,
        &&label_80B3DD50,
        &&label_80B3DD54,
        &&label_80B3DD58,
        &&label_80B3DD5C,
        &&label_80B3DD60,
        &&label_80B3DD64,
        &&label_80B3DD68,
        &&label_80B3DD6C,
        &&label_80B3DD70,
        &&label_80B3DD74,
        &&label_80B3DD78,
        &&label_80B3DD7C,
        &&label_80B3DD80,
        &&label_80B3DD84,
        &&label_80B3DD88,
        &&label_80B3DD8C,
        &&label_80B3DD90,
        &&label_80B3DD94,
        &&label_80B3DD98,
        &&label_80B3DD9C,
        &&label_80B3DDA0,
        &&label_80B3DDA4,
        &&label_80B3DDA8,
        &&label_80B3DDAC,
        &&label_80B3DDB0,
        &&label_80B3DDB4,
        &&label_80B3DDB8,
        &&label_80B3DDBC,
        &&label_80B3DDC0,
        &&label_80B3DDC4,
        &&label_80B3DDC8,
        &&label_80B3DDCC,
        &&label_80B3DDD0,
        &&label_80B3DDD4,
        &&label_80B3DDD8,
        &&label_80B3DDDC,
        &&label_80B3DDE0,
        &&label_80B3DDE4,
        &&label_80B3DDE8,
        &&label_80B3DDEC,
        &&label_80B3DDF0,
        &&label_80B3DDF4,
        &&label_80B3DDF8,
        &&label_80B3DDFC,
        &&label_80B3DE00,
        &&label_80B3DE04,
        &&label_80B3DE08,
        &&label_80B3DE0C,
        &&label_80B3DE10,
        &&label_80B3DE14,
        &&label_80B3DE18,
        &&label_80B3DE1C,
        &&label_80B3DE20,
        &&label_80B3DE24,
        &&label_80B3DE28,
        &&label_80B3DE2C,
        &&label_80B3DE30,
        &&label_80B3DE34,
        &&label_80B3DE38,
        &&label_80B3DE3C,
        &&label_80B3DE40,
        &&label_80B3DE44,
        &&label_80B3DE48,
        &&label_80B3DE4C,
        &&label_80B3DE50,
        &&label_80B3DE54,
        &&label_80B3DE58,
        &&label_80B3DE5C,
        &&label_80B3DE60,
        &&label_80B3DE64,
        &&label_80B3DE68,
        &&label_80B3DE6C,
        &&label_80B3DE70,
        &&label_80B3DE74,
        &&label_80B3DE78,
        &&label_80B3DE7C,
        &&label_80B3DE80,
        &&label_80B3DE84,
        &&label_80B3DE88,
        &&label_80B3DE8C,
        &&label_80B3DE90,
        &&label_80B3DE94,
        &&label_80B3DE98,
        &&label_80B3DE9C,
        &&label_80B3DEA0,
        &&label_80B3DEA4,
        &&label_80B3DEA8,
        &&label_80B3DEAC,
        &&label_80B3DEB0,
        &&label_80B3DEB4,
        &&label_80B3DEB8,
        &&label_80B3DEBC,
        &&label_80B3DEC0,
        &&label_80B3DEC4,
        &&label_80B3DEC8,
        &&label_80B3DECC,
        &&label_80B3DED0,
        &&label_80B3DED4,
        &&label_80B3DED8,
        &&label_80B3DEDC,
        &&label_80B3DEE0,
        &&label_80B3DEE4,
        &&label_80B3DEE8,
        &&label_80B3DEEC,
        &&label_80B3DEF0,
        &&label_80B3DEF4,
        &&label_80B3DEF8,
        &&label_80B3DEFC,
        &&label_80B3DF00,
        &&label_80B3DF04,
        &&label_80B3DF08,
        &&label_80B3DF0C,
        &&label_80B3DF10,
        &&label_80B3DF14,
        &&label_80B3DF18,
        &&label_80B3DF1C,
        &&label_80B3DF20,
        &&label_80B3DF24,
        &&label_80B3DF28,
        &&label_80B3DF2C,
        &&label_80B3DF30,
        &&label_80B3DF34,
        &&label_80B3DF38,
        &&label_80B3DF3C,
        &&label_80B3DF40,
        &&label_80B3DF44,
        &&label_80B3DF48,
        &&label_80B3DF4C,
        &&label_80B3DF50,
        &&label_80B3DF54,
        &&label_80B3DF58,
        &&label_80B3DF5C,
        &&label_80B3DF60,
        &&label_80B3DF64,
        &&label_80B3DF68,
        &&label_80B3DF6C,
        &&label_80B3DF70,
        &&label_80B3DF74,
        &&label_80B3DF78,
        &&label_80B3DF7C,
        &&label_80B3DF80,
        &&label_80B3DF84,
        &&label_80B3DF88,
        &&label_80B3DF8C,
        &&label_80B3DF90,
        &&label_80B3DF94,
        &&label_80B3DF98,
        &&label_80B3DF9C,
        &&label_80B3DFA0,
        &&label_80B3DFA4,
        &&label_80B3DFA8,
        &&label_80B3DFAC,
        &&label_80B3DFB0,
        &&label_80B3DFB4,
        &&label_80B3DFB8,
        &&label_80B3DFBC,
        &&label_80B3DFC0,
        &&label_80B3DFC4,
        &&label_80B3DFC8,
        &&label_80B3DFCC,
        &&label_80B3DFD0,
        &&label_80B3DFD4,
        &&label_80B3DFD8,
        &&label_80B3DFDC,
        &&label_80B3DFE0,
        &&label_80B3DFE4,
        &&label_80B3DFE8,
        &&label_80B3DFEC,
        &&label_80B3DFF0,
        &&label_80B3DFF4,
        &&label_80B3DFF8,
        &&label_80B3DFFC,
        &&label_80B3E000,
        &&label_80B3E004,
        &&label_80B3E008,
        &&label_80B3E00C,
        &&label_80B3E010,
        &&label_80B3E014,
        &&label_80B3E018,
        &&label_80B3E01C,
        &&label_80B3E020,
        &&label_80B3E024,
        &&label_80B3E028,
        &&label_80B3E02C,
        &&label_80B3E030,
        &&label_80B3E034,
        &&label_80B3E038,
        &&label_80B3E03C,
        &&label_80B3E040,
        &&label_80B3E044,
        &&label_80B3E048,
        &&label_80B3E04C,
        &&label_80B3E050,
        &&label_80B3E054,
        &&label_80B3E058,
        &&label_80B3E05C,
        &&label_80B3E060,
        &&label_80B3E064,
        &&label_80B3E068,
        &&label_80B3E06C,
        &&label_80B3E070,
        &&label_80B3E074,
        &&label_80B3E078,
        &&label_80B3E07C,
        &&label_80B3E080,
        &&label_80B3E084,
        &&label_80B3E088,
        &&label_80B3E08C,
        &&label_80B3E090,
        &&label_80B3E094,
        &&label_80B3E098,
        &&label_80B3E09C,
        &&label_80B3E0A0,
        &&label_80B3E0A4,
        &&label_80B3E0A8,
        &&label_80B3E0AC,
        &&label_80B3E0B0,
        &&label_80B3E0B4,
        &&label_80B3E0B8,
        &&label_80B3E0BC,
        &&label_80B3E0C0,
        &&label_80B3E0C4,
        &&label_80B3E0C8,
        &&label_80B3E0CC,
        &&label_80B3E0D0,
        &&label_80B3E0D4,
        &&label_80B3E0D8,
        &&label_80B3E0DC,
        &&label_80B3E0E0,
        &&label_80B3E0E4,
        &&label_80B3E0E8,
        &&label_80B3E0EC,
        &&label_80B3E0F0,
        &&label_80B3E0F4,
        &&label_80B3E0F8,
        &&label_80B3E0FC,
        &&label_80B3E100,
        &&label_80B3E104,
        &&label_80B3E108,
        &&label_80B3E10C,
        &&label_80B3E110,
        &&label_80B3E114,
        &&label_80B3E118,
        &&label_80B3E11C,
        &&label_80B3E120,
        &&label_80B3E124,
        &&label_80B3E128,
        &&label_80B3E12C,
        &&label_80B3E130,
        &&label_80B3E134,
        &&label_80B3E138,
        &&label_80B3E13C,
        &&label_80B3E140,
        &&label_80B3E144,
        &&label_80B3E148,
        &&label_80B3E14C,
        &&label_80B3E150,
        &&label_80B3E154,
        &&label_80B3E158,
        &&label_80B3E15C,
        &&label_80B3E160,
        &&label_80B3E164,
        &&label_80B3E168,
        &&label_80B3E16C,
        &&label_80B3E170,
        &&label_80B3E174,
        &&label_80B3E178,
        &&label_80B3E17C,
        &&label_80B3E180,
        &&label_80B3E184,
        &&label_80B3E188,
        &&label_80B3E18C,
        &&label_80B3E190,
        &&label_80B3E194,
        &&label_80B3E198,
        &&label_80B3E19C,
        &&label_80B3E1A0,
        &&label_80B3E1A4,
        &&label_80B3E1A8,
        &&label_80B3E1AC,
        &&label_80B3E1B0,
        &&label_80B3E1B4,
        &&label_80B3E1B8,
        &&label_80B3E1BC,
        &&label_80B3E1C0,
        &&label_80B3E1C4,
        &&label_80B3E1C8,
        &&label_80B3E1CC,
        &&label_80B3E1D0,
        &&label_80B3E1D4,
        &&label_80B3E1D8,
        &&label_80B3E1DC,
        &&label_80B3E1E0,
        &&label_80B3E1E4,
        &&label_80B3E1E8,
        &&label_80B3E1EC,
        &&label_80B3E1F0,
        &&label_80B3E1F4,
        &&label_80B3E1F8,
        &&label_80B3E1FC,
        &&label_80B3E200,
        &&label_80B3E204,
        &&label_80B3E208,
        &&label_80B3E20C,
        &&label_80B3E210,
        &&label_80B3E214,
        &&label_80B3E218,
        &&label_80B3E21C,
        &&label_80B3E220,
        &&label_80B3E224,
        &&label_80B3E228,
        &&label_80B3E22C,
        &&label_80B3E230,
        &&label_80B3E234,
        &&label_80B3E238,
        &&label_80B3E23C,
        &&label_80B3E240,
        &&label_80B3E244,
        &&label_80B3E248,
        &&label_80B3E24C,
        &&label_80B3E250,
        &&label_80B3E254,
        &&label_80B3E258,
        &&label_80B3E25C,
        &&label_80B3E260,
        &&label_80B3E264,
        &&label_80B3E268,
        &&label_80B3E26C,
        &&label_80B3E270,
        &&label_80B3E274,
        &&label_80B3E278,
        &&label_80B3E27C,
        &&label_80B3E280,
        &&label_80B3E284,
        &&label_80B3E288,
        &&label_80B3E28C,
        &&label_80B3E290,
        &&label_80B3E294,
        &&label_80B3E298,
        &&label_80B3E29C,
        &&label_80B3E2A0,
        &&label_80B3E2A4,
        &&label_80B3E2A8,
        &&label_80B3E2AC,
        &&label_80B3E2B0,
        &&label_80B3E2B4,
        &&label_80B3E2B8,
        &&label_80B3E2BC,
        &&label_80B3E2C0,
        &&label_80B3E2C4,
        &&label_80B3E2C8,
        &&label_80B3E2CC,
        &&label_80B3E2D0,
        &&label_80B3E2D4,
        &&label_80B3E2D8,
        &&label_80B3E2DC,
        &&label_80B3E2E0,
        &&label_80B3E2E4,
        &&label_80B3E2E8,
        &&label_80B3E2EC,
        &&label_80B3E2F0,
        &&label_80B3E2F4,
        &&label_80B3E2F8,
        &&label_80B3E2FC,
        &&label_80B3E300,
        &&label_80B3E304,
        &&label_80B3E308,
        &&label_80B3E30C,
        &&label_80B3E310,
        &&label_80B3E314,
        &&label_80B3E318,
        &&label_80B3E31C,
        &&label_80B3E320,
        &&label_80B3E324,
        &&label_80B3E328,
        &&label_80B3E32C,
        &&label_80B3E330,
        &&label_80B3E334,
        &&label_80B3E338,
        &&label_80B3E33C,
        &&label_80B3E340,
        &&label_80B3E344,
        &&label_80B3E348,
        &&label_80B3E34C,
        &&label_80B3E350,
        &&label_80B3E354,
        &&label_80B3E358,
        &&label_80B3E35C,
        &&label_80B3E360,
        &&label_80B3E364,
        &&label_80B3E368,
        &&label_80B3E36C,
        &&label_80B3E370,
        &&label_80B3E374,
        &&label_80B3E378,
        &&label_80B3E37C,
        &&label_80B3E380,
        &&label_80B3E384,
        &&label_80B3E388,
        &&label_80B3E38C,
        &&label_80B3E390,
        &&label_80B3E394,
        &&label_80B3E398,
        &&label_80B3E39C,
        &&label_80B3E3A0,
        &&label_80B3E3A4,
        &&label_80B3E3A8,
        &&label_80B3E3AC,
        &&label_80B3E3B0,
        &&label_80B3E3B4,
        &&label_80B3E3B8,
        &&label_80B3E3BC,
        &&label_80B3E3C0,
        &&label_80B3E3C4,
        &&label_80B3E3C8,
        &&label_80B3E3CC,
        &&label_80B3E3D0,
        &&label_80B3E3D4,
        &&label_80B3E3D8,
        &&label_80B3E3DC,
        &&label_80B3E3E0,
        &&label_80B3E3E4,
        &&label_80B3E3E8,
        &&label_80B3E3EC,
        &&label_80B3E3F0,
        &&label_80B3E3F4,
        &&label_80B3E3F8,
        &&label_80B3E3FC,
        &&label_80B3E400,
        &&label_80B3E404,
        &&label_80B3E408,
        &&label_80B3E40C,
        &&label_80B3E410,
        &&label_80B3E414,
        &&label_80B3E418,
        &&label_80B3E41C,
        &&label_80B3E420,
        &&label_80B3E424,
        &&label_80B3E428,
        &&label_80B3E42C,
        &&label_80B3E430,
        &&label_80B3E434,
        &&label_80B3E438,
        &&label_80B3E43C,
        &&label_80B3E440,
        &&label_80B3E444,
        &&label_80B3E448,
        &&label_80B3E44C,
        &&label_80B3E450,
        &&label_80B3E454,
        &&label_80B3E458,
        &&label_80B3E45C,
        &&label_80B3E460,
        &&label_80B3E464,
        &&label_80B3E468,
        &&label_80B3E46C,
        &&label_80B3E470,
        &&label_80B3E474,
        &&label_80B3E478,
        &&label_80B3E47C,
        &&label_80B3E480,
        &&label_80B3E484,
        &&label_80B3E488,
        &&label_80B3E48C,
        &&label_80B3E490,
        &&label_80B3E494,
        &&label_80B3E498,
        &&label_80B3E49C,
        &&label_80B3E4A0,
        &&label_80B3E4A4,
        &&label_80B3E4A8,
        &&label_80B3E4AC,
        &&label_80B3E4B0,
        &&label_80B3E4B4,
        &&label_80B3E4B8,
        &&label_80B3E4BC,
        &&label_80B3E4C0,
        &&label_80B3E4C4,
        &&label_80B3E4C8,
        &&label_80B3E4CC,
        &&label_80B3E4D0,
        &&label_80B3E4D4,
        &&label_80B3E4D8,
        &&label_80B3E4DC,
        &&label_80B3E4E0,
        &&label_80B3E4E4,
        &&label_80B3E4E8,
        &&label_80B3E4EC,
        &&label_80B3E4F0,
        &&label_80B3E4F4,
        &&label_80B3E4F8,
        &&label_80B3E4FC,
        &&label_80B3E500,
        &&label_80B3E504,
        &&label_80B3E508,
        &&label_80B3E50C,
        &&label_80B3E510,
        &&label_80B3E514,
        &&label_80B3E518,
        &&label_80B3E51C,
        &&label_80B3E520,
        &&label_80B3E524,
        &&label_80B3E528,
        &&label_80B3E52C,
        &&label_80B3E530,
        &&label_80B3E534,
        &&label_80B3E538,
        &&label_80B3E53C,
        &&label_80B3E540,
        &&label_80B3E544,
        &&label_80B3E548,
        &&label_80B3E54C,
        &&label_80B3E550,
        &&label_80B3E554,
        &&label_80B3E558,
        &&label_80B3E55C,
        &&label_80B3E560,
        &&label_80B3E564,
        &&label_80B3E568,
        &&label_80B3E56C,
        &&label_80B3E570,
        &&label_80B3E574,
        &&label_80B3E578,
        &&label_80B3E57C,
        &&label_80B3E580,
        &&label_80B3E584,
        &&label_80B3E588,
        &&label_80B3E58C,
        &&label_80B3E590,
        &&label_80B3E594,
        &&label_80B3E598,
        &&label_80B3E59C,
        &&label_80B3E5A0,
        &&label_80B3E5A4,
        &&label_80B3E5A8,
        &&label_80B3E5AC,
        &&label_80B3E5B0,
        &&label_80B3E5B4,
        &&label_80B3E5B8,
        &&label_80B3E5BC,
        &&label_80B3E5C0,
        &&label_80B3E5C4,
        &&label_80B3E5C8,
        &&label_80B3E5CC,
        &&label_80B3E5D0,
        &&label_80B3E5D4,
        &&label_80B3E5D8,
        &&label_80B3E5DC,
        &&label_80B3E5E0,
        &&label_80B3E5E4,
        &&label_80B3E5E8,
        &&label_80B3E5EC,
        &&label_80B3E5F0,
        &&label_80B3E5F4,
        &&label_80B3E5F8,
        &&label_80B3E5FC,
        &&label_80B3E600,
        &&label_80B3E604,
        &&label_80B3E608,
        &&label_80B3E60C,
        &&label_80B3E610,
        &&label_80B3E614,
        &&label_80B3E618,
        &&label_80B3E61C,
        &&label_80B3E620,
        &&label_80B3E624,
        &&label_80B3E628,
        &&label_80B3E62C,
        &&label_80B3E630,
        &&label_80B3E634,
        &&label_80B3E638,
        &&label_80B3E63C,
        &&label_80B3E640,
        &&label_80B3E644,
        &&label_80B3E648,
        &&label_80B3E64C,
        &&label_80B3E650,
        &&label_80B3E654,
        &&label_80B3E658,
        &&label_80B3E65C,
        &&label_80B3E660,
        &&label_80B3E664,
        &&label_80B3E668,
        &&label_80B3E66C,
        &&label_80B3E670,
        &&label_80B3E674,
        &&label_80B3E678,
        &&label_80B3E67C,
        &&label_80B3E680,
        &&label_80B3E684,
        &&label_80B3E688,
        &&label_80B3E68C,
        &&label_80B3E690,
        &&label_80B3E694,
        &&label_80B3E698,
        &&label_80B3E69C,
        &&label_80B3E6A0,
        &&label_80B3E6A4,
        &&label_80B3E6A8,
        &&label_80B3E6AC,
        &&label_80B3E6B0,
        &&label_80B3E6B4,
        &&label_80B3E6B8,
        &&label_80B3E6BC,
        &&label_80B3E6C0,
        &&label_80B3E6C4,
        &&label_80B3E6C8,
        &&label_80B3E6CC,
        &&label_80B3E6D0,
        &&label_80B3E6D4,
        &&label_80B3E6D8,
        &&label_80B3E6DC,
        &&label_80B3E6E0,
        &&label_80B3E6E4,
        &&label_80B3E6E8,
        &&label_80B3E6EC,
        &&label_80B3E6F0,
        &&label_80B3E6F4,
        &&label_80B3E6F8,
        &&label_80B3E6FC,
        &&label_80B3E700,
        &&label_80B3E704,
        &&label_80B3E708,
        &&label_80B3E70C,
        &&label_80B3E710,
        &&label_80B3E714,
        &&label_80B3E718,
        &&label_80B3E71C,
        &&label_80B3E720,
        &&label_80B3E724,
        &&label_80B3E728,
        &&label_80B3E72C,
        &&label_80B3E730,
        &&label_80B3E734,
        &&label_80B3E738,
        &&label_80B3E73C,
        &&label_80B3E740,
        &&label_80B3E744,
        &&label_80B3E748,
        &&label_80B3E74C,
        &&label_80B3E750,
        &&label_80B3E754,
        &&label_80B3E758,
        &&label_80B3E75C,
        &&label_80B3E760,
        &&label_80B3E764,
        &&label_80B3E768,
        &&label_80B3E76C,
        &&label_80B3E770,
        &&label_80B3E774,
        &&label_80B3E778,
        &&label_80B3E77C,
        &&label_80B3E780,
        &&label_80B3E784,
        &&label_80B3E788,
        &&label_80B3E78C,
        &&label_80B3E790,
        &&label_80B3E794,
        &&label_80B3E798,
        &&label_80B3E79C,
        &&label_80B3E7A0,
        &&label_80B3E7A4,
        &&label_80B3E7A8,
        &&label_80B3E7AC,
        &&label_80B3E7B0,
        &&label_80B3E7B4,
        &&label_80B3E7B8,
        &&label_80B3E7BC,
        &&label_80B3E7C0,
        &&label_80B3E7C4,
        &&label_80B3E7C8,
        &&label_80B3E7CC,
        &&label_80B3E7D0,
        &&label_80B3E7D4,
        &&label_80B3E7D8,
        &&label_80B3E7DC,
        &&label_80B3E7E0,
        &&label_80B3E7E4,
        &&label_80B3E7E8,
        &&label_80B3E7EC,
        &&label_80B3E7F0,
        &&label_80B3E7F4,
        &&label_80B3E7F8,
        &&label_80B3E7FC,
        &&label_80B3E800,
        &&label_80B3E804,
        &&label_80B3E808,
        &&label_80B3E80C,
        &&label_80B3E810,
        &&label_80B3E814,
        &&label_80B3E818,
        &&label_80B3E81C,
        &&label_80B3E820,
        &&label_80B3E824,
        &&label_80B3E828,
        &&label_80B3E82C,
        &&label_80B3E830,
        &&label_80B3E834,
        &&label_80B3E838,
        &&label_80B3E83C,
        &&label_80B3E840,
        &&label_80B3E844,
        &&label_80B3E848,
        &&label_80B3E84C,
        &&label_80B3E850,
        &&label_80B3E854,
        &&label_80B3E858,
        &&label_80B3E85C,
        &&label_80B3E860,
        &&label_80B3E864,
        &&label_80B3E868,
        &&label_80B3E86C,
        &&label_80B3E870,
        &&label_80B3E874,
        &&label_80B3E878,
        &&label_80B3E87C,
        &&label_80B3E880,
        &&label_80B3E884,
        &&label_80B3E888,
        &&label_80B3E88C,
        &&label_80B3E890,
        &&label_80B3E894,
        &&label_80B3E898,
        &&label_80B3E89C,
        &&label_80B3E8A0,
        &&label_80B3E8A4,
        &&label_80B3E8A8,
        &&label_80B3E8AC,
        &&label_80B3E8B0,
        &&label_80B3E8B4,
        &&label_80B3E8B8,
        &&label_80B3E8BC,
        &&label_80B3E8C0,
        &&label_80B3E8C4,
        &&label_80B3E8C8,
        &&label_80B3E8CC,
        &&label_80B3E8D0,
        &&label_80B3E8D4,
        &&label_80B3E8D8,
        &&label_80B3E8DC,
        &&label_80B3E8E0,
        &&label_80B3E8E4,
        &&label_80B3E8E8,
        &&label_80B3E8EC,
        &&label_80B3E8F0,
        &&label_80B3E8F4,
        &&label_80B3E8F8,
        &&label_80B3E8FC,
        &&label_80B3E900,
        &&label_80B3E904,
        &&label_80B3E908,
        &&label_80B3E90C,
        &&label_80B3E910,
        &&label_80B3E914,
        &&label_80B3E918,
        &&label_80B3E91C,
        &&label_80B3E920,
        &&label_80B3E924,
        &&label_80B3E928,
        &&label_80B3E92C,
        &&label_80B3E930,
        &&label_80B3E934,
        &&label_80B3E938,
        &&label_80B3E93C,
        &&label_80B3E940,
        &&label_80B3E944,
        &&label_80B3E948,
        &&label_80B3E94C,
        &&label_80B3E950,
        &&label_80B3E954,
        &&label_80B3E958,
        &&label_80B3E95C,
        &&label_80B3E960,
        &&label_80B3E964,
        &&label_80B3E968,
        &&label_80B3E96C,
        &&label_80B3E970,
        &&label_80B3E974,
        &&label_80B3E978,
        &&label_80B3E97C,
        &&label_80B3E980,
        &&label_80B3E984,
        &&label_80B3E988,
        &&label_80B3E98C,
        &&label_80B3E990,
        &&label_80B3E994,
        &&label_80B3E998,
        &&label_80B3E99C,
        &&label_80B3E9A0,
        &&label_80B3E9A4,
        &&label_80B3E9A8,
        &&label_80B3E9AC,
        &&label_80B3E9B0,
        &&label_80B3E9B4,
        &&label_80B3E9B8,
        &&label_80B3E9BC,
        &&label_80B3E9C0,
        &&label_80B3E9C4,
        &&label_80B3E9C8,
        &&label_80B3E9CC,
        &&label_80B3E9D0,
        &&label_80B3E9D4,
        &&label_80B3E9D8,
        &&label_80B3E9DC,
        &&label_80B3E9E0,
        &&label_80B3E9E4,
        &&label_80B3E9E8,
        &&label_80B3E9EC,
        &&label_80B3E9F0,
        &&label_80B3E9F4,
        &&label_80B3E9F8,
        &&label_80B3E9FC,
        &&label_80B3EA00,
        &&label_80B3EA04,
        &&label_80B3EA08,
        &&label_80B3EA0C,
        &&label_80B3EA10,
        &&label_80B3EA14,
        &&label_80B3EA18,
        &&label_80B3EA1C,
        &&label_80B3EA20,
        &&label_80B3EA24,
        &&label_80B3EA28,
        &&label_80B3EA2C,
        &&label_80B3EA30,
        &&label_80B3EA34,
        &&label_80B3EA38,
        &&label_80B3EA3C,
        &&label_80B3EA40,
        &&label_80B3EA44,
        &&label_80B3EA48,
        &&label_80B3EA4C,
        &&label_80B3EA50,
        &&label_80B3EA54,
        &&label_80B3EA58,
        &&label_80B3EA5C,
        &&label_80B3EA60,
        &&label_80B3EA64,
        &&label_80B3EA68,
        &&label_80B3EA6C,
        &&label_80B3EA70,
        &&label_80B3EA74,
        &&label_80B3EA78,
        &&label_80B3EA7C,
        &&label_80B3EA80,
        &&label_80B3EA84,
        &&label_80B3EA88,
        &&label_80B3EA8C,
        &&label_80B3EA90,
        &&label_80B3EA94,
        &&label_80B3EA98,
        &&label_80B3EA9C,
        &&label_80B3EAA0,
        &&label_80B3EAA4,
        &&label_80B3EAA8,
        &&label_80B3EAAC,
        &&label_80B3EAB0,
        &&label_80B3EAB4,
        &&label_80B3EAB8,
        &&label_80B3EABC,
        &&label_80B3EAC0,
        &&label_80B3EAC4,
        &&label_80B3EAC8,
        &&label_80B3EACC,
        &&label_80B3EAD0,
        &&label_80B3EAD4,
        &&label_80B3EAD8,
        &&label_80B3EADC,
        &&label_80B3EAE0,
        &&label_80B3EAE4,
        &&label_80B3EAE8,
        &&label_80B3EAEC,
        &&label_80B3EAF0,
        &&label_80B3EAF4,
        &&label_80B3EAF8,
        &&label_80B3EAFC,
        &&label_80B3EB00,
        &&label_80B3EB04,
        &&label_80B3EB08,
        &&label_80B3EB0C,
        &&label_80B3EB10,
        &&label_80B3EB14,
        &&label_80B3EB18,
        &&label_80B3EB1C,
        &&label_80B3EB20,
        &&label_80B3EB24,
        &&label_80B3EB28,
        &&label_80B3EB2C,
        &&label_80B3EB30,
        &&label_80B3EB34,
        &&label_80B3EB38,
        &&label_80B3EB3C,
        &&label_80B3EB40,
        &&label_80B3EB44,
        &&label_80B3EB48,
        &&label_80B3EB4C,
        &&label_80B3EB50,
        &&label_80B3EB54,
        &&label_80B3EB58,
        &&label_80B3EB5C,
        &&label_80B3EB60,
        &&label_80B3EB64,
        &&label_80B3EB68,
        &&label_80B3EB6C,
        &&label_80B3EB70,
        &&label_80B3EB74,
        &&label_80B3EB78,
        &&label_80B3EB7C,
        &&label_80B3EB80,
        &&label_80B3EB84,
        &&label_80B3EB88,
        &&label_80B3EB8C,
        &&label_80B3EB90,
        &&label_80B3EB94,
        &&label_80B3EB98,
        &&label_80B3EB9C,
        &&label_80B3EBA0,
        &&label_80B3EBA4,
        &&label_80B3EBA8,
        &&label_80B3EBAC,
        &&label_80B3EBB0,
        &&label_80B3EBB4,
        &&label_80B3EBB8,
        &&label_80B3EBBC,
        &&label_80B3EBC0,
        &&label_80B3EBC4,
        &&label_80B3EBC8,
        &&label_80B3EBCC,
        &&label_80B3EBD0,
        &&label_80B3EBD4,
        &&label_80B3EBD8,
        &&label_80B3EBDC,
        &&label_80B3EBE0,
        &&label_80B3EBE4,
        &&label_80B3EBE8,
        &&label_80B3EBEC,
        &&label_80B3EBF0,
        &&label_80B3EBF4,
        &&label_80B3EBF8,
        &&label_80B3EBFC,
        &&label_80B3EC00,
        &&label_80B3EC04,
        &&label_80B3EC08,
        &&label_80B3EC0C,
        &&label_80B3EC10,
        &&label_80B3EC14,
        &&label_80B3EC18,
        &&label_80B3EC1C,
        &&label_80B3EC20,
        &&label_80B3EC24,
        &&label_80B3EC28,
        &&label_80B3EC2C,
        &&label_80B3EC30,
        &&label_80B3EC34,
        &&label_80B3EC38,
        &&label_80B3EC3C,
        &&label_80B3EC40,
        &&label_80B3EC44,
        &&label_80B3EC48,
        &&label_80B3EC4C,
        &&label_80B3EC50,
        &&label_80B3EC54,
        &&label_80B3EC58,
        &&label_80B3EC5C,
        &&label_80B3EC60,
        &&label_80B3EC64,
        &&label_80B3EC68,
        &&label_80B3EC6C,
        &&label_80B3EC70,
        &&label_80B3EC74,
        &&label_80B3EC78,
        &&label_80B3EC7C,
        &&label_80B3EC80,
        &&label_80B3EC84,
        &&label_80B3EC88,
        &&label_80B3EC8C,
        &&label_80B3EC90,
        &&label_80B3EC94,
        &&label_80B3EC98,
        &&label_80B3EC9C,
        &&label_80B3ECA0,
        &&label_80B3ECA4,
        &&label_80B3ECA8,
        &&label_80B3ECAC,
        &&label_80B3ECB0,
        &&label_80B3ECB4,
        &&label_80B3ECB8,
        &&label_80B3ECBC,
        &&label_80B3ECC0,
        &&label_80B3ECC4,
        &&label_80B3ECC8,
        &&label_80B3ECCC,
        &&label_80B3ECD0,
        &&label_80B3ECD4,
        &&label_80B3ECD8,
        &&label_80B3ECDC,
        &&label_80B3ECE0,
        &&label_80B3ECE4,
        &&label_80B3ECE8,
        &&label_80B3ECEC,
        &&label_80B3ECF0,
        &&label_80B3ECF4,
        &&label_80B3ECF8,
        &&label_80B3ECFC,
        &&label_80B3ED00,
        &&label_80B3ED04,
        &&label_80B3ED08,
        &&label_80B3ED0C,
        &&label_80B3ED10,
        &&label_80B3ED14,
        &&label_80B3ED18,
        &&label_80B3ED1C,
        &&label_80B3ED20,
        &&label_80B3ED24,
        &&label_80B3ED28,
        &&label_80B3ED2C,
        &&label_80B3ED30,
        &&label_80B3ED34,
        &&label_80B3ED38,
        &&label_80B3ED3C,
        &&label_80B3ED40,
        &&label_80B3ED44,
        &&label_80B3ED48,
        &&label_80B3ED4C,
        &&label_80B3ED50,
        &&label_80B3ED54,
        &&label_80B3ED58,
        &&label_80B3ED5C,
        &&label_80B3ED60,
        &&label_80B3ED64
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80B3D920u && pc <= 0x80B3ED64u && ((pc - 0x80B3D920u) & 3u) == 0u)
            goto *pc_table_80B3D920[(pc - 0x80B3D920u) >> 2];
    }
    return;
label_80B3D920:
    ctx->pc = 0x80B3D920u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3D920u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3D920: stwu     r1, -16(r1)
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
label_80B3D924:
    ctx->pc = 0x80B3D924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3D924: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3D928:
    ctx->pc = 0x80B3D928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D928u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3D928: stw     r0, 20(r1)
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
label_80B3D92C:
    ctx->pc = 0x80B3D92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D92Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3D92C: stw     r31, 12(r1)
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
label_80B3D930:
    ctx->pc = 0x80B3D930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D930u)) return;
    // 80B3D930: cmpwi   r3, 2
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

label_80B3D934:
    ctx->pc = 0x80B3D934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D934u)) return;
    // 80B3D934: bc    12, 2, 0x80B3E080
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3E080;
        }
    }

label_80B3D938:
    ctx->pc = 0x80B3D938u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3D938u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3D938: bc    4, 0, 0x80B3D94C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3D94C;
        }
    }

label_80B3D93C:
    ctx->pc = 0x80B3D93Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3D93Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3D93C: cmpwi   r3, 0
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

label_80B3D940:
    ctx->pc = 0x80B3D940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D940u)) return;
    // 80B3D940: bc    12, 2, 0x80B3E0F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3E0F4;
        }
    }

label_80B3D944:
    ctx->pc = 0x80B3D944u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3D944u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3D944: bc    4, 0, 0x80B3D954
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3D954;
        }
    }

label_80B3D948:
    ctx->pc = 0x80B3D948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3D948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3D948: b       0x80B3E0F4
    {
            goto label_80B3E0F4;
    }

label_80B3D94C:
    ctx->pc = 0x80B3D94Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3D94Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3D94C: cmpwi   r3, 4
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

label_80B3D950:
    ctx->pc = 0x80B3D950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D950u)) return;
    // 80B3D950: b       0x80B3E0F4
    {
            goto label_80B3E0F4;
    }

label_80B3D954:
    ctx->pc = 0x80B3D954u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3D954u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3D954: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3D958:
    ctx->pc = 0x80B3D958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D958u)) return;
    // 80B3D958: bl      0x8045EC10
    {
            ctx->lr = 0x80B3D95Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80B3D95C:
    ctx->pc = 0x80B3D95Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3D95Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3D95C: bl      0x8045DE7C
    {
            ctx->lr = 0x80B3D960u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80B3D960:
    ctx->pc = 0x80B3D960u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3D960u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3D960: bl      0x80460A60
    {
            ctx->lr = 0x80B3D964u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80B3D964:
    ctx->pc = 0x80B3D964u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3D964u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3D964: bl      0x80460A24
    {
            ctx->lr = 0x80B3D968u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80B3D968:
    ctx->pc = 0x80B3D968u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3D968u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80B3D968: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3D96C:
    ctx->pc = 0x80B3D96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D96Cu)) return;
    // 80B3D96C: addi    r3, r3, 3016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3016);

label_80B3D970:
    ctx->pc = 0x80B3D970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D970u)) return;
    // 80B3D970: lis     r4, -32588
    ctx->gpr[4] = ((u32)(s32)(-32588) << 16);

label_80B3D974:
    ctx->pc = 0x80B3D974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D974u)) return;
    // 80B3D974: addi    r4, r4, -7736
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7736);

label_80B3D978:
    ctx->pc = 0x80B3D978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D978u)) return;
    // 80B3D978: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3D97C:
    ctx->pc = 0x80B3D97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D97Cu)) return;
    // 80B3D97C: addi    r5, r5, 8016
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8016);

label_80B3D980:
    ctx->pc = 0x80B3D980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B3D980: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3D980u)) return;
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
label_80B3D984:
    ctx->pc = 0x80B3D984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D984u)) return;
    // 80B3D984: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3D988:
    ctx->pc = 0x80B3D988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D988u)) return;
    // 80B3D988: addi    r5, r5, 8020
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8020);

label_80B3D98C:
    ctx->pc = 0x80B3D98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D98Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3D98C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3D98Cu)) return;
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
label_80B3D990:
    ctx->pc = 0x80B3D990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D990u)) return;
    // 80B3D990: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3D994:
    ctx->pc = 0x80B3D994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D994u)) return;
    // 80B3D994: addi    r5, r5, 8024
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8024);

label_80B3D998:
    ctx->pc = 0x80B3D998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3D998: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3D998u)) return;
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
label_80B3D99C:
    ctx->pc = 0x80B3D99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D99Cu)) return;
    // 80B3D99C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B3D9A0:
    ctx->pc = 0x80B3D9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9A0u)) return;
    // 80B3D9A0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B3D9A4:
    ctx->pc = 0x80B3D9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9A4u)) return;
    // 80B3D9A4: addi    r6, r6, -16384
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-16384);

label_80B3D9A8:
    ctx->pc = 0x80B3D9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9A8u)) return;
    // 80B3D9A8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3D9AC:
    ctx->pc = 0x80B3D9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9ACu)) return;
    // 80B3D9AC: bl      0x8045F0B0
    {
            ctx->lr = 0x80B3D9B0u;
            ctx->pc = 0x8045F0B0u;
            return;
    }

label_80B3D9B0:
    ctx->pc = 0x80B3D9B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3D9B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B3D9B0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3D9B4:
    ctx->pc = 0x80B3D9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9B4u)) return;
    // 80B3D9B4: lis     r4, -32677
    ctx->gpr[4] = ((u32)(s32)(-32677) << 16);

label_80B3D9B8:
    ctx->pc = 0x80B3D9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9B8u)) return;
    // 80B3D9B8: addi    r4, r4, -3644
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3644);

label_80B3D9BC:
    ctx->pc = 0x80B3D9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9BCu)) return;
    // 80B3D9BC: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3D9C0:
    ctx->pc = 0x80B3D9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9C0u)) return;
    // 80B3D9C0: addi    r5, r5, 8028
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8028);

label_80B3D9C4:
    ctx->pc = 0x80B3D9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3D9C4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3D9C4u)) return;
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
label_80B3D9C8:
    ctx->pc = 0x80B3D9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9C8u)) return;
    // 80B3D9C8: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3D9CC:
    ctx->pc = 0x80B3D9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9CCu)) return;
    // 80B3D9CC: addi    r5, r5, 8032
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8032);

label_80B3D9D0:
    ctx->pc = 0x80B3D9D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3D9D0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3D9D0u)) return;
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
label_80B3D9D4:
    ctx->pc = 0x80B3D9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9D4u)) return;
    // 80B3D9D4: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3D9D8:
    ctx->pc = 0x80B3D9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9D8u)) return;
    // 80B3D9D8: addi    r5, r5, 8036
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8036);

label_80B3D9DC:
    ctx->pc = 0x80B3D9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3D9DC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3D9DCu)) return;
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
label_80B3D9E0:
    ctx->pc = 0x80B3D9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9E0u)) return;
    // 80B3D9E0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B3D9E4:
    ctx->pc = 0x80B3D9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9E4u)) return;
    // 80B3D9E4: li      r6, 16384
    ctx->gpr[6] = (u32)(s32)(16384);

label_80B3D9E8:
    ctx->pc = 0x80B3D9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9E8u)) return;
    // 80B3D9E8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3D9EC:
    ctx->pc = 0x80B3D9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9ECu)) return;
    // 80B3D9EC: bl      0x8045ED84
    {
            ctx->lr = 0x80B3D9F0u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80B3D9F0:
    ctx->pc = 0x80B3D9F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3D9F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3D9F0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3D9F4:
    ctx->pc = 0x80B3D9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9F4u)) return;
    // 80B3D9F4: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3D9F8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3D9F8:
    ctx->pc = 0x80B3D9F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3D9F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3D9F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3D9FC:
    ctx->pc = 0x80B3D9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3D9FCu)) return;
    // 80B3D9FC: bl      0x8045F220
    {
            ctx->lr = 0x80B3DA00u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3DA00:
    ctx->pc = 0x80B3DA00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DA00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B3DA00: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3DA04:
    ctx->pc = 0x80B3DA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA04u)) return;
    // 80B3DA04: addi    r4, r4, 8040
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8040);

label_80B3DA08:
    ctx->pc = 0x80B3DA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3DA08: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3DA08u)) return;
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
label_80B3DA0C:
    ctx->pc = 0x80B3DA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA0Cu)) return;
    // 80B3DA0C: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3DA10:
    ctx->pc = 0x80B3DA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA10u)) return;
    // 80B3DA10: addi    r4, r4, 8020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8020);

label_80B3DA14:
    ctx->pc = 0x80B3DA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3DA14: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3DA14u)) return;
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
label_80B3DA18:
    ctx->pc = 0x80B3DA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA18u)) return;
    // 80B3DA18: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3DA1C:
    ctx->pc = 0x80B3DA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA1Cu)) return;
    // 80B3DA1C: addi    r4, r4, 8024
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8024);

label_80B3DA20:
    ctx->pc = 0x80B3DA20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3DA20: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3DA20u)) return;
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
label_80B3DA24:
    ctx->pc = 0x80B3DA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA24u)) return;
    // 80B3DA24: bl      0x8045EF2C
    {
            ctx->lr = 0x80B3DA28u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B3DA28:
    ctx->pc = 0x80B3DA28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DA28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DA28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3DA2C:
    ctx->pc = 0x80B3DA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA2Cu)) return;
    // 80B3DA2C: bl      0x8045F220
    {
            ctx->lr = 0x80B3DA30u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3DA30:
    ctx->pc = 0x80B3DA30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DA30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3DA30: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3DA34:
    ctx->pc = 0x80B3DA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA34u)) return;
    // 80B3DA34: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B3DA38:
    ctx->pc = 0x80B3DA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA38u)) return;
    // 80B3DA38: addi    r5, r5, -16384
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16384);

label_80B3DA3C:
    ctx->pc = 0x80B3DA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA3Cu)) return;
    // 80B3DA3C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B3DA40:
    ctx->pc = 0x80B3DA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA40u)) return;
    // 80B3DA40: bl      0x8045EEA8
    {
            ctx->lr = 0x80B3DA44u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B3DA44:
    ctx->pc = 0x80B3DA44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DA44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DA44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3DA48:
    ctx->pc = 0x80B3DA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA48u)) return;
    // 80B3DA48: bl      0x8045F220
    {
            ctx->lr = 0x80B3DA4Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3DA4C:
    ctx->pc = 0x80B3DA4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DA4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B3DA4C: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3DA50:
    ctx->pc = 0x80B3DA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA50u)) return;
    // 80B3DA50: addi    r4, r4, 25532
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25532);

label_80B3DA54:
    ctx->pc = 0x80B3DA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA54u)) return;
    // 80B3DA54: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B3DA58:
    ctx->pc = 0x80B3DA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA58u)) return;
    // 80B3DA58: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B3DA5C:
    ctx->pc = 0x80B3DA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA5Cu)) return;
    // 80B3DA5C: lis     r6, -27572
    ctx->gpr[6] = ((u32)(s32)(-27572) << 16);

label_80B3DA60:
    ctx->pc = 0x80B3DA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA60u)) return;
    // 80B3DA60: addi    r6, r6, 8044
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8044);

label_80B3DA64:
    ctx->pc = 0x80B3DA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3DA64: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3DA64u)) return;
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
label_80B3DA68:
    ctx->pc = 0x80B3DA68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA68u)) return;
    // 80B3DA68: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B3DA6C:
    ctx->pc = 0x80B3DA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA6Cu)) return;
    // 80B3DA6C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3DA70:
    ctx->pc = 0x80B3DA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA70u)) return;
    // 80B3DA70: bl      0x8045EBE4
    {
            ctx->lr = 0x80B3DA74u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B3DA74:
    ctx->pc = 0x80B3DA74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DA74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DA74: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3DA78:
    ctx->pc = 0x80B3DA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA78u)) return;
    // 80B3DA78: bl      0x8045F220
    {
            ctx->lr = 0x80B3DA7Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3DA7C:
    ctx->pc = 0x80B3DA7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DA7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3DA7C: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3DA80:
    ctx->pc = 0x80B3DA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA80u)) return;
    // 80B3DA80: addi    r4, r4, 8248
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8248);

label_80B3DA84:
    ctx->pc = 0x80B3DA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA84u)) return;
    // 80B3DA84: bl      0x8045C060
    {
            ctx->lr = 0x80B3DA88u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B3DA88:
    ctx->pc = 0x80B3DA88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DA88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DA88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3DA8C:
    ctx->pc = 0x80B3DA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA8Cu)) return;
    // 80B3DA8C: bl      0x8045F220
    {
            ctx->lr = 0x80B3DA90u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3DA90:
    ctx->pc = 0x80B3DA90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DA90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3DA90: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B3DA94:
    ctx->pc = 0x80B3DA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA94u)) return;
    // 80B3DA94: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3DA98:
    ctx->pc = 0x80B3DA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DA98u)) return;
    // 80B3DA98: bl      0x8045F220
    {
            ctx->lr = 0x80B3DA9Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3DA9C:
    ctx->pc = 0x80B3DA9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DA9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3DA9C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B3DAA0:
    ctx->pc = 0x80B3DAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DAA0u)) return;
    // 80B3DAA0: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DAA4:
    ctx->pc = 0x80B3DAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DAA4u)) return;
    // 80B3DAA4: addi    r5, r5, 8048
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8048);

label_80B3DAA8:
    ctx->pc = 0x80B3DAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DAA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3DAA8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DAA8u)) return;
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
label_80B3DAAC:
    ctx->pc = 0x80B3DAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DAACu)) return;
    // 80B3DAAC: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DAB0:
    ctx->pc = 0x80B3DAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DAB0u)) return;
    // 80B3DAB0: addi    r5, r5, 8052
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8052);

label_80B3DAB4:
    ctx->pc = 0x80B3DAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DAB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3DAB4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DAB4u)) return;
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
label_80B3DAB8:
    ctx->pc = 0x80B3DAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DAB8u)) return;
    // 80B3DAB8: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80B3DAB8u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80B3DABC:
    ctx->pc = 0x80B3DABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DABCu)) return;
    // 80B3DABC: bl      0x8045E734
    {
            ctx->lr = 0x80B3DAC0u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80B3DAC0:
    ctx->pc = 0x80B3DAC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DAC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3DAC0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3DAC4:
    ctx->pc = 0x80B3DAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DAC4u)) return;
    // 80B3DAC4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3DAC8:
    ctx->pc = 0x80B3DAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DAC8u)) return;
    // 80B3DAC8: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DACC:
    ctx->pc = 0x80B3DACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DACCu)) return;
    // 80B3DACC: addi    r5, r5, 8056
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8056);

label_80B3DAD0:
    ctx->pc = 0x80B3DAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DAD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3DAD0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DAD0u)) return;
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
label_80B3DAD4:
    ctx->pc = 0x80B3DAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DAD4u)) return;
    // 80B3DAD4: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DAD8:
    ctx->pc = 0x80B3DAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DAD8u)) return;
    // 80B3DAD8: addi    r5, r5, 8060
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8060);

label_80B3DADC:
    ctx->pc = 0x80B3DADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DADCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3DADC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DADCu)) return;
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
label_80B3DAE0:
    ctx->pc = 0x80B3DAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DAE0u)) return;
    // 80B3DAE0: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DAE4:
    ctx->pc = 0x80B3DAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DAE4u)) return;
    // 80B3DAE4: addi    r5, r5, 8064
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8064);

label_80B3DAE8:
    ctx->pc = 0x80B3DAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DAE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3DAE8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DAE8u)) return;
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
label_80B3DAEC:
    ctx->pc = 0x80B3DAECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DAECu)) return;
    // 80B3DAEC: bl      0x8045C750
    {
            ctx->lr = 0x80B3DAF0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3DAF0:
    ctx->pc = 0x80B3DAF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DAF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3DAF0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3DAF4:
    ctx->pc = 0x80B3DAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DAF4u)) return;
    // 80B3DAF4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3DAF8:
    ctx->pc = 0x80B3DAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DAF8u)) return;
    // 80B3DAF8: li      r5, 6943
    ctx->gpr[5] = (u32)(s32)(6943);

label_80B3DAFC:
    ctx->pc = 0x80B3DAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DAFCu)) return;
    // 80B3DAFC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B3DB00:
    ctx->pc = 0x80B3DB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB00u)) return;
    // 80B3DB00: addi    r6, r6, -16580
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-16580);

label_80B3DB04:
    ctx->pc = 0x80B3DB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB04u)) return;
    // 80B3DB04: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3DB08:
    ctx->pc = 0x80B3DB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB08u)) return;
    // 80B3DB08: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3DB0Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3DB0C:
    ctx->pc = 0x80B3DB0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DB0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3DB0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3DB10:
    ctx->pc = 0x80B3DB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB10u)) return;
    // 80B3DB10: li      r4, 160
    ctx->gpr[4] = (u32)(s32)(160);

label_80B3DB14:
    ctx->pc = 0x80B3DB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB14u)) return;
    // 80B3DB14: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B3DB18:
    ctx->pc = 0x80B3DB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB18u)) return;
    // 80B3DB18: addi    r5, r6, -737
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-737);

label_80B3DB1C:
    ctx->pc = 0x80B3DB1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB1Cu)) return;
    // 80B3DB1C: addi    r6, r6, -16580
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-16580);

label_80B3DB20:
    ctx->pc = 0x80B3DB20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB20u)) return;
    // 80B3DB20: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3DB24:
    ctx->pc = 0x80B3DB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB24u)) return;
    // 80B3DB24: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3DB28u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3DB28:
    ctx->pc = 0x80B3DB28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DB28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3DB28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3DB2C:
    ctx->pc = 0x80B3DB2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB2Cu)) return;
    // 80B3DB2C: li      r4, 160
    ctx->gpr[4] = (u32)(s32)(160);

label_80B3DB30:
    ctx->pc = 0x80B3DB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB30u)) return;
    // 80B3DB30: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DB34:
    ctx->pc = 0x80B3DB34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB34u)) return;
    // 80B3DB34: addi    r5, r5, 8068
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8068);

label_80B3DB38:
    ctx->pc = 0x80B3DB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3DB38: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DB38u)) return;
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
label_80B3DB3C:
    ctx->pc = 0x80B3DB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB3Cu)) return;
    // 80B3DB3C: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DB40:
    ctx->pc = 0x80B3DB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB40u)) return;
    // 80B3DB40: addi    r5, r5, 8072
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8072);

label_80B3DB44:
    ctx->pc = 0x80B3DB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3DB44: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DB44u)) return;
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
label_80B3DB48:
    ctx->pc = 0x80B3DB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB48u)) return;
    // 80B3DB48: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DB4C:
    ctx->pc = 0x80B3DB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB4Cu)) return;
    // 80B3DB4C: addi    r5, r5, 8076
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8076);

label_80B3DB50:
    ctx->pc = 0x80B3DB50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3DB50: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DB50u)) return;
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
label_80B3DB54:
    ctx->pc = 0x80B3DB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB54u)) return;
    // 80B3DB54: bl      0x8045C750
    {
            ctx->lr = 0x80B3DB58u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3DB58:
    ctx->pc = 0x80B3DB58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DB58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3DB58: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3DB5C:
    ctx->pc = 0x80B3DB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB5Cu)) return;
    // 80B3DB5C: addi    r3, r3, 3012
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3012);

label_80B3DB60:
    ctx->pc = 0x80B3DB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3DB60: lwz     r0, 0(r3)
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
label_80B3DB64:
    ctx->pc = 0x80B3DB64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB64u)) return;
    // 80B3DB64: cmplwi  r0, 0x0000
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

label_80B3DB68:
    ctx->pc = 0x80B3DB68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB68u)) return;
    // 80B3DB68: bc    4, 2, 0x80B3DB7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3DB7C;
        }
    }

label_80B3DB6C:
    ctx->pc = 0x80B3DB6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DB6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3DB6C: bl      0x80B3E2E8
    {
            ctx->lr = 0x80B3DB70u;
            goto label_80B3E2E8;
    }

label_80B3DB70:
    ctx->pc = 0x80B3DB70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DB70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3DB70: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3DB74:
    ctx->pc = 0x80B3DB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB74u)) return;
    // 80B3DB74: addi    r4, r4, 3012
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3012);

label_80B3DB78:
    ctx->pc = 0x80B3DB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3DB78: stw     r3, 0(r4)
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
label_80B3DB7C:
    ctx->pc = 0x80B3DB7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DB7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3DB7C: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3DB80:
    ctx->pc = 0x80B3DB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB80u)) return;
    // 80B3DB80: addi    r4, r3, 3012
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3012);

label_80B3DB84:
    ctx->pc = 0x80B3DB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3DB84: lwz     r3, 0(r4)
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
label_80B3DB88:
    ctx->pc = 0x80B3DB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB88u)) return;
    // 80B3DB88: cmplwi  r3, 0x0000
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

label_80B3DB8C:
    ctx->pc = 0x80B3DB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB8Cu)) return;
    // 80B3DB8C: bc    12, 2, 0x80B3DBA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3DBA8;
        }
    }

label_80B3DB90:
    ctx->pc = 0x80B3DB90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DB90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B3DB90: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_80B3DB94:
    ctx->pc = 0x80B3DB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3DB94: lwz     r3, 32(r3)
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
label_80B3DB98:
    ctx->pc = 0x80B3DB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3DB98: stw     r0, 24(r3)
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
label_80B3DB9C:
    ctx->pc = 0x80B3DB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DB9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3DB9C: lwz     r3, 0(r4)
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
label_80B3DBA0:
    ctx->pc = 0x80B3DBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3DBA0: lwz     r3, 32(r3)
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
label_80B3DBA4:
    ctx->pc = 0x80B3DBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3DBA4: stw     r0, 20(r3)
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
label_80B3DBA8:
    ctx->pc = 0x80B3DBA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DBA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3DBA8: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3DBAC:
    ctx->pc = 0x80B3DBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBACu)) return;
    // 80B3DBAC: addi    r3, r3, 3012
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3012);

label_80B3DBB0:
    ctx->pc = 0x80B3DBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3DBB0: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3DBB4:
    ctx->pc = 0x80B3DBB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBB4u)) return;
    // 80B3DBB4: cmplwi  r4, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80B3DBB8:
    ctx->pc = 0x80B3DBB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBB8u)) return;
    // 80B3DBB8: bc    12, 2, 0x80B3DBD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3DBD4;
        }
    }

label_80B3DBBC:
    ctx->pc = 0x80B3DBBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DBBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B3DBBC: lis     r3, -27572
    ctx->gpr[3] = ((u32)(s32)(-27572) << 16);

label_80B3DBC0:
    ctx->pc = 0x80B3DBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBC0u)) return;
    // 80B3DBC0: addi    r3, r3, 8080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8080);

label_80B3DBC4:
    ctx->pc = 0x80B3DBC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3DBC4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3DBC4u)) return;
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
label_80B3DBC8:
    ctx->pc = 0x80B3DBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3DBC8: lwz     r3, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3DBCC:
    ctx->pc = 0x80B3DBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3DBCC: lwz     r3, 16(r3)
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
label_80B3DBD0:
    ctx->pc = 0x80B3DBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3DBD0: stfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3DBD0u)) return;
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
label_80B3DBD4:
    ctx->pc = 0x80B3DBD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DBD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3DBD4: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3DBD8:
    ctx->pc = 0x80B3DBD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBD8u)) return;
    // 80B3DBD8: addi    r4, r3, 3012
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3012);

label_80B3DBDC:
    ctx->pc = 0x80B3DBDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3DBDC: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3DBE0:
    ctx->pc = 0x80B3DBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBE0u)) return;
    // 80B3DBE0: cmplwi  r5, 0x0000
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

label_80B3DBE4:
    ctx->pc = 0x80B3DBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBE4u)) return;
    // 80B3DBE4: bc    12, 2, 0x80B3DC3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3DC3C;
        }
    }

label_80B3DBE8:
    ctx->pc = 0x80B3DBE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DBE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80B3DBE8: lis     r3, -27572
    ctx->gpr[3] = ((u32)(s32)(-27572) << 16);

label_80B3DBEC:
    ctx->pc = 0x80B3DBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBECu)) return;
    // 80B3DBEC: addi    r3, r3, 8044
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8044);

label_80B3DBF0:
    ctx->pc = 0x80B3DBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80B3DBF0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3DBF0u)) return;
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
label_80B3DBF4:
    ctx->pc = 0x80B3DBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80B3DBF4: lwz     r3, 32(r5)
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
label_80B3DBF8:
    ctx->pc = 0x80B3DBF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B3DBF8: lwz     r3, 16(r3)
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
label_80B3DBFC:
    ctx->pc = 0x80B3DBFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DBFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B3DBFC: stfs     f0, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3DBFCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3DC00:
    ctx->pc = 0x80B3DC00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC00u)) return;
    // 80B3DC00: lis     r3, -27572
    ctx->gpr[3] = ((u32)(s32)(-27572) << 16);

label_80B3DC04:
    ctx->pc = 0x80B3DC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC04u)) return;
    // 80B3DC04: addi    r3, r3, 8084
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8084);

label_80B3DC08:
    ctx->pc = 0x80B3DC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B3DC08: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3DC08u)) return;
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
label_80B3DC0C:
    ctx->pc = 0x80B3DC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B3DC0C: lwz     r3, 0(r4)
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
label_80B3DC10:
    ctx->pc = 0x80B3DC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3DC10: lwz     r3, 32(r3)
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
label_80B3DC14:
    ctx->pc = 0x80B3DC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B3DC14: lwz     r3, 16(r3)
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
label_80B3DC18:
    ctx->pc = 0x80B3DC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3DC18: stfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3DC18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3DC1C:
    ctx->pc = 0x80B3DC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3DC1C: lwz     r3, 0(r4)
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
label_80B3DC20:
    ctx->pc = 0x80B3DC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3DC20: lwz     r3, 32(r3)
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
label_80B3DC24:
    ctx->pc = 0x80B3DC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3DC24: lwz     r3, 16(r3)
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
label_80B3DC28:
    ctx->pc = 0x80B3DC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3DC28: stfs     f0, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3DC28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3DC2C:
    ctx->pc = 0x80B3DC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3DC2C: lwz     r3, 0(r4)
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
label_80B3DC30:
    ctx->pc = 0x80B3DC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3DC30: lwz     r3, 32(r3)
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
label_80B3DC34:
    ctx->pc = 0x80B3DC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3DC34: lwz     r3, 16(r3)
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
label_80B3DC38:
    ctx->pc = 0x80B3DC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3DC38: stfs     f0, 56(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3DC38u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3DC3C:
    ctx->pc = 0x80B3DC3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DC3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DC3C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3DC40:
    ctx->pc = 0x80B3DC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC40u)) return;
    // 80B3DC40: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3DC44u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3DC44:
    ctx->pc = 0x80B3DC44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DC44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80B3DC44: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3DC48:
    ctx->pc = 0x80B3DC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC48u)) return;
    // 80B3DC48: addi    r3, r3, 3012
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3012);

label_80B3DC4C:
    ctx->pc = 0x80B3DC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3DC4C: lwz     r3, 0(r3)
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
label_80B3DC50:
    ctx->pc = 0x80B3DC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC50u)) return;
    // 80B3DC50: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3DC54:
    ctx->pc = 0x80B3DC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC54u)) return;
    // 80B3DC54: addi    r4, r4, 8040
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8040);

label_80B3DC58:
    ctx->pc = 0x80B3DC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3DC58: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3DC58u)) return;
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
label_80B3DC5C:
    ctx->pc = 0x80B3DC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC5Cu)) return;
    // 80B3DC5C: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3DC60:
    ctx->pc = 0x80B3DC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC60u)) return;
    // 80B3DC60: addi    r4, r4, 8020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8020);

label_80B3DC64:
    ctx->pc = 0x80B3DC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3DC64: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3DC64u)) return;
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
label_80B3DC68:
    ctx->pc = 0x80B3DC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC68u)) return;
    // 80B3DC68: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3DC6C:
    ctx->pc = 0x80B3DC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC6Cu)) return;
    // 80B3DC6C: addi    r4, r4, 8024
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8024);

label_80B3DC70:
    ctx->pc = 0x80B3DC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3DC70: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3DC70u)) return;
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
label_80B3DC74:
    ctx->pc = 0x80B3DC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC74u)) return;
    // 80B3DC74: bl      0x8045EF2C
    {
            ctx->lr = 0x80B3DC78u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B3DC78:
    ctx->pc = 0x80B3DC78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DC78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DC78: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80B3DC7C:
    ctx->pc = 0x80B3DC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC7Cu)) return;
    // 80B3DC7C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3DC80u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3DC80:
    ctx->pc = 0x80B3DC80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DC80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3DC80: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3DC84:
    ctx->pc = 0x80B3DC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC84u)) return;
    // 80B3DC84: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3DC88:
    ctx->pc = 0x80B3DC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC88u)) return;
    // 80B3DC88: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DC8C:
    ctx->pc = 0x80B3DC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC8Cu)) return;
    // 80B3DC8C: addi    r5, r5, 8088
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8088);

label_80B3DC90:
    ctx->pc = 0x80B3DC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3DC90: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DC90u)) return;
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
label_80B3DC94:
    ctx->pc = 0x80B3DC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC94u)) return;
    // 80B3DC94: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DC98:
    ctx->pc = 0x80B3DC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC98u)) return;
    // 80B3DC98: addi    r5, r5, 8092
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8092);

label_80B3DC9C:
    ctx->pc = 0x80B3DC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DC9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3DC9C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DC9Cu)) return;
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
label_80B3DCA0:
    ctx->pc = 0x80B3DCA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCA0u)) return;
    // 80B3DCA0: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DCA4:
    ctx->pc = 0x80B3DCA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCA4u)) return;
    // 80B3DCA4: addi    r5, r5, 8096
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8096);

label_80B3DCA8:
    ctx->pc = 0x80B3DCA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3DCA8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DCA8u)) return;
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
label_80B3DCAC:
    ctx->pc = 0x80B3DCACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCACu)) return;
    // 80B3DCAC: bl      0x8045C750
    {
            ctx->lr = 0x80B3DCB0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3DCB0:
    ctx->pc = 0x80B3DCB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DCB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3DCB0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3DCB4:
    ctx->pc = 0x80B3DCB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCB4u)) return;
    // 80B3DCB4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3DCB8:
    ctx->pc = 0x80B3DCB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCB8u)) return;
    // 80B3DCB8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B3DCBC:
    ctx->pc = 0x80B3DCBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCBCu)) return;
    // 80B3DCBC: addi    r5, r6, -2273
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2273);

label_80B3DCC0:
    ctx->pc = 0x80B3DCC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCC0u)) return;
    // 80B3DCC0: addi    r6, r6, -8132
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8132);

label_80B3DCC4:
    ctx->pc = 0x80B3DCC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCC4u)) return;
    // 80B3DCC4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3DCC8:
    ctx->pc = 0x80B3DCC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCC8u)) return;
    // 80B3DCC8: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3DCCCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3DCCC:
    ctx->pc = 0x80B3DCCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DCCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3DCCC: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3DCD0:
    ctx->pc = 0x80B3DCD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCD0u)) return;
    // 80B3DCD0: addi    r4, r3, 3012
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3012);

label_80B3DCD4:
    ctx->pc = 0x80B3DCD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3DCD4: lwz     r3, 0(r4)
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
label_80B3DCD8:
    ctx->pc = 0x80B3DCD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCD8u)) return;
    // 80B3DCD8: cmplwi  r3, 0x0000
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

label_80B3DCDC:
    ctx->pc = 0x80B3DCDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCDCu)) return;
    // 80B3DCDC: bc    12, 2, 0x80B3DCF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3DCF8;
        }
    }

label_80B3DCE0:
    ctx->pc = 0x80B3DCE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DCE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B3DCE0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B3DCE4:
    ctx->pc = 0x80B3DCE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3DCE4: lwz     r3, 32(r3)
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
label_80B3DCE8:
    ctx->pc = 0x80B3DCE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3DCE8: stw     r0, 24(r3)
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
label_80B3DCEC:
    ctx->pc = 0x80B3DCECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3DCEC: lwz     r3, 0(r4)
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
label_80B3DCF0:
    ctx->pc = 0x80B3DCF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3DCF0: lwz     r3, 32(r3)
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
label_80B3DCF4:
    ctx->pc = 0x80B3DCF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3DCF4: stw     r0, 20(r3)
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
label_80B3DCF8:
    ctx->pc = 0x80B3DCF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DCF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DCF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3DCFC:
    ctx->pc = 0x80B3DCFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DCFCu)) return;
    // 80B3DCFC: bl      0x8045F220
    {
            ctx->lr = 0x80B3DD00u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3DD00:
    ctx->pc = 0x80B3DD00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DD00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3DD00: bl      0x8045C034
    {
            ctx->lr = 0x80B3DD04u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B3DD04:
    ctx->pc = 0x80B3DD04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DD04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DD04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3DD08:
    ctx->pc = 0x80B3DD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD08u)) return;
    // 80B3DD08: bl      0x8045F220
    {
            ctx->lr = 0x80B3DD0Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3DD0C:
    ctx->pc = 0x80B3DD0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DD0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3DD0C: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3DD10:
    ctx->pc = 0x80B3DD10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD10u)) return;
    // 80B3DD10: addi    r4, r4, 8268
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8268);

label_80B3DD14:
    ctx->pc = 0x80B3DD14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD14u)) return;
    // 80B3DD14: bl      0x8045C060
    {
            ctx->lr = 0x80B3DD18u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B3DD18:
    ctx->pc = 0x80B3DD18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DD18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DD18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3DD1C:
    ctx->pc = 0x80B3DD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD1Cu)) return;
    // 80B3DD1C: bl      0x8045F220
    {
            ctx->lr = 0x80B3DD20u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3DD20:
    ctx->pc = 0x80B3DD20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DD20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B3DD20: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3DD24:
    ctx->pc = 0x80B3DD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD24u)) return;
    // 80B3DD24: addi    r4, r4, -32128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32128);

label_80B3DD28:
    ctx->pc = 0x80B3DD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD28u)) return;
    // 80B3DD28: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B3DD2C:
    ctx->pc = 0x80B3DD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD2Cu)) return;
    // 80B3DD2C: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B3DD30:
    ctx->pc = 0x80B3DD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD30u)) return;
    // 80B3DD30: lis     r6, -27572
    ctx->gpr[6] = ((u32)(s32)(-27572) << 16);

label_80B3DD34:
    ctx->pc = 0x80B3DD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD34u)) return;
    // 80B3DD34: addi    r6, r6, 8084
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8084);

label_80B3DD38:
    ctx->pc = 0x80B3DD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3DD38: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3DD38u)) return;
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
label_80B3DD3C:
    ctx->pc = 0x80B3DD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD3Cu)) return;
    // 80B3DD3C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B3DD40:
    ctx->pc = 0x80B3DD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD40u)) return;
    // 80B3DD40: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80B3DD44:
    ctx->pc = 0x80B3DD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD44u)) return;
    // 80B3DD44: bl      0x8045EBE4
    {
            ctx->lr = 0x80B3DD48u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B3DD48:
    ctx->pc = 0x80B3DD48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DD48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DD48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3DD4C:
    ctx->pc = 0x80B3DD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD4Cu)) return;
    // 80B3DD4C: bl      0x8045F220
    {
            ctx->lr = 0x80B3DD50u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3DD50:
    ctx->pc = 0x80B3DD50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DD50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B3DD50: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3DD54:
    ctx->pc = 0x80B3DD54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD54u)) return;
    // 80B3DD54: addi    r4, r4, -30028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30028);

label_80B3DD58:
    ctx->pc = 0x80B3DD58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD58u)) return;
    // 80B3DD58: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B3DD5C:
    ctx->pc = 0x80B3DD5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD5Cu)) return;
    // 80B3DD5C: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B3DD60:
    ctx->pc = 0x80B3DD60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD60u)) return;
    // 80B3DD60: lis     r6, -27572
    ctx->gpr[6] = ((u32)(s32)(-27572) << 16);

label_80B3DD64:
    ctx->pc = 0x80B3DD64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD64u)) return;
    // 80B3DD64: addi    r6, r6, 8044
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8044);

label_80B3DD68:
    ctx->pc = 0x80B3DD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3DD68: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3DD68u)) return;
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
label_80B3DD6C:
    ctx->pc = 0x80B3DD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD6Cu)) return;
    // 80B3DD6C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B3DD70:
    ctx->pc = 0x80B3DD70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD70u)) return;
    // 80B3DD70: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3DD74:
    ctx->pc = 0x80B3DD74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD74u)) return;
    // 80B3DD74: bl      0x8045EBE4
    {
            ctx->lr = 0x80B3DD78u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B3DD78:
    ctx->pc = 0x80B3DD78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DD78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DD78: li      r3, 94
    ctx->gpr[3] = (u32)(s32)(94);

label_80B3DD7C:
    ctx->pc = 0x80B3DD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD7Cu)) return;
    // 80B3DD7C: bl      0x80406090
    {
            ctx->lr = 0x80B3DD80u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80B3DD80:
    ctx->pc = 0x80B3DD80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DD80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DD80: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3DD84:
    ctx->pc = 0x80B3DD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD84u)) return;
    // 80B3DD84: bl      0x8045F220
    {
            ctx->lr = 0x80B3DD88u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3DD88:
    ctx->pc = 0x80B3DD88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DD88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B3DD88: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3DD8C:
    ctx->pc = 0x80B3DD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD8Cu)) return;
    // 80B3DD8C: addi    r4, r4, 8100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8100);

label_80B3DD90:
    ctx->pc = 0x80B3DD90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3DD90: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3DD90u)) return;
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
label_80B3DD94:
    ctx->pc = 0x80B3DD94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD94u)) return;
    // 80B3DD94: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3DD98:
    ctx->pc = 0x80B3DD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD98u)) return;
    // 80B3DD98: addi    r4, r4, 8020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8020);

label_80B3DD9C:
    ctx->pc = 0x80B3DD9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DD9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3DD9C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3DD9Cu)) return;
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
label_80B3DDA0:
    ctx->pc = 0x80B3DDA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DDA0u)) return;
    // 80B3DDA0: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3DDA4:
    ctx->pc = 0x80B3DDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DDA4u)) return;
    // 80B3DDA4: addi    r4, r4, 8104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8104);

label_80B3DDA8:
    ctx->pc = 0x80B3DDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DDA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3DDA8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3DDA8u)) return;
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
label_80B3DDAC:
    ctx->pc = 0x80B3DDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DDACu)) return;
    // 80B3DDAC: bl      0x8045EF2C
    {
            ctx->lr = 0x80B3DDB0u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B3DDB0:
    ctx->pc = 0x80B3DDB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DDB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DDB0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3DDB4:
    ctx->pc = 0x80B3DDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DDB4u)) return;
    // 80B3DDB4: bl      0x8045F220
    {
            ctx->lr = 0x80B3DDB8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3DDB8:
    ctx->pc = 0x80B3DDB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DDB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B3DDB8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3DDBC:
    ctx->pc = 0x80B3DDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DDBCu)) return;
    // 80B3DDBC: li      r5, 16384
    ctx->gpr[5] = (u32)(s32)(16384);

label_80B3DDC0:
    ctx->pc = 0x80B3DDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DDC0u)) return;
    // 80B3DDC0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B3DDC4:
    ctx->pc = 0x80B3DDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DDC4u)) return;
    // 80B3DDC4: bl      0x8045EEA8
    {
            ctx->lr = 0x80B3DDC8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B3DDC8:
    ctx->pc = 0x80B3DDC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DDC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DDC8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3DDCC:
    ctx->pc = 0x80B3DDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DDCCu)) return;
    // 80B3DDCC: bl      0x8045F220
    {
            ctx->lr = 0x80B3DDD0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3DDD0:
    ctx->pc = 0x80B3DDD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DDD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B3DDD0: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3DDD4:
    ctx->pc = 0x80B3DDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DDD4u)) return;
    // 80B3DDD4: addi    r4, r4, -22392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22392);

label_80B3DDD8:
    ctx->pc = 0x80B3DDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DDD8u)) return;
    // 80B3DDD8: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80B3DDDC:
    ctx->pc = 0x80B3DDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DDDCu)) return;
    // 80B3DDDC: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80B3DDE0:
    ctx->pc = 0x80B3DDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DDE0u)) return;
    // 80B3DDE0: lis     r6, -27572
    ctx->gpr[6] = ((u32)(s32)(-27572) << 16);

label_80B3DDE4:
    ctx->pc = 0x80B3DDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DDE4u)) return;
    // 80B3DDE4: addi    r6, r6, 8108
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8108);

label_80B3DDE8:
    ctx->pc = 0x80B3DDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DDE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3DDE8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3DDE8u)) return;
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
label_80B3DDEC:
    ctx->pc = 0x80B3DDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DDECu)) return;
    // 80B3DDEC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B3DDF0:
    ctx->pc = 0x80B3DDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DDF0u)) return;
    // 80B3DDF0: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80B3DDF4:
    ctx->pc = 0x80B3DDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DDF4u)) return;
    // 80B3DDF4: bl      0x8045EBE4
    {
            ctx->lr = 0x80B3DDF8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B3DDF8:
    ctx->pc = 0x80B3DDF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DDF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DDF8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3DDFC:
    ctx->pc = 0x80B3DDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DDFCu)) return;
    // 80B3DDFC: bl      0x8045F220
    {
            ctx->lr = 0x80B3DE00u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3DE00:
    ctx->pc = 0x80B3DE00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DE00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B3DE00: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3DE04:
    ctx->pc = 0x80B3DE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE04u)) return;
    // 80B3DE04: addi    r4, r4, -15092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15092);

label_80B3DE08:
    ctx->pc = 0x80B3DE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE08u)) return;
    // 80B3DE08: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80B3DE0C:
    ctx->pc = 0x80B3DE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE0Cu)) return;
    // 80B3DE0C: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80B3DE10:
    ctx->pc = 0x80B3DE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE10u)) return;
    // 80B3DE10: lis     r6, -27572
    ctx->gpr[6] = ((u32)(s32)(-27572) << 16);

label_80B3DE14:
    ctx->pc = 0x80B3DE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE14u)) return;
    // 80B3DE14: addi    r6, r6, 8108
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8108);

label_80B3DE18:
    ctx->pc = 0x80B3DE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3DE18: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3DE18u)) return;
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
label_80B3DE1C:
    ctx->pc = 0x80B3DE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE1Cu)) return;
    // 80B3DE1C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B3DE20:
    ctx->pc = 0x80B3DE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE20u)) return;
    // 80B3DE20: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80B3DE24:
    ctx->pc = 0x80B3DE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE24u)) return;
    // 80B3DE24: bl      0x8045EBE4
    {
            ctx->lr = 0x80B3DE28u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B3DE28:
    ctx->pc = 0x80B3DE28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DE28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DE28: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80B3DE2C:
    ctx->pc = 0x80B3DE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE2Cu)) return;
    // 80B3DE2C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3DE30u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3DE30:
    ctx->pc = 0x80B3DE30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DE30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3DE30: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3DE34:
    ctx->pc = 0x80B3DE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE34u)) return;
    // 80B3DE34: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3DE38:
    ctx->pc = 0x80B3DE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE38u)) return;
    // 80B3DE38: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DE3C:
    ctx->pc = 0x80B3DE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE3Cu)) return;
    // 80B3DE3C: addi    r5, r5, 8112
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8112);

label_80B3DE40:
    ctx->pc = 0x80B3DE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3DE40: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DE40u)) return;
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
label_80B3DE44:
    ctx->pc = 0x80B3DE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE44u)) return;
    // 80B3DE44: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DE48:
    ctx->pc = 0x80B3DE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE48u)) return;
    // 80B3DE48: addi    r5, r5, 8116
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8116);

label_80B3DE4C:
    ctx->pc = 0x80B3DE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3DE4C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DE4Cu)) return;
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
label_80B3DE50:
    ctx->pc = 0x80B3DE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE50u)) return;
    // 80B3DE50: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DE54:
    ctx->pc = 0x80B3DE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE54u)) return;
    // 80B3DE54: addi    r5, r5, 8120
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8120);

label_80B3DE58:
    ctx->pc = 0x80B3DE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3DE58: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DE58u)) return;
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
label_80B3DE5C:
    ctx->pc = 0x80B3DE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE5Cu)) return;
    // 80B3DE5C: bl      0x8045C750
    {
            ctx->lr = 0x80B3DE60u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3DE60:
    ctx->pc = 0x80B3DE60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DE60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3DE60: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3DE64:
    ctx->pc = 0x80B3DE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE64u)) return;
    // 80B3DE64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3DE68:
    ctx->pc = 0x80B3DE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE68u)) return;
    // 80B3DE68: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B3DE6C:
    ctx->pc = 0x80B3DE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE6Cu)) return;
    // 80B3DE6C: addi    r5, r5, -3553
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3553);

label_80B3DE70:
    ctx->pc = 0x80B3DE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE70u)) return;
    // 80B3DE70: li      r6, 16956
    ctx->gpr[6] = (u32)(s32)(16956);

label_80B3DE74:
    ctx->pc = 0x80B3DE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE74u)) return;
    // 80B3DE74: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3DE78:
    ctx->pc = 0x80B3DE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE78u)) return;
    // 80B3DE78: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3DE7Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3DE7C:
    ctx->pc = 0x80B3DE7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DE7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B3DE7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3DE80:
    ctx->pc = 0x80B3DE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE80u)) return;
    // 80B3DE80: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_80B3DE84:
    ctx->pc = 0x80B3DE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE84u)) return;
    // 80B3DE84: li      r5, 2335
    ctx->gpr[5] = (u32)(s32)(2335);

label_80B3DE88:
    ctx->pc = 0x80B3DE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE88u)) return;
    // 80B3DE88: li      r6, 16956
    ctx->gpr[6] = (u32)(s32)(16956);

label_80B3DE8C:
    ctx->pc = 0x80B3DE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE8Cu)) return;
    // 80B3DE8C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3DE90:
    ctx->pc = 0x80B3DE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE90u)) return;
    // 80B3DE90: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3DE94u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3DE94:
    ctx->pc = 0x80B3DE94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DE94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DE94: li      r3, 52
    ctx->gpr[3] = (u32)(s32)(52);

label_80B3DE98:
    ctx->pc = 0x80B3DE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DE98u)) return;
    // 80B3DE98: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3DE9Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3DE9C:
    ctx->pc = 0x80B3DE9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DE9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3DE9C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3DEA0:
    ctx->pc = 0x80B3DEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DEA0u)) return;
    // 80B3DEA0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3DEA4:
    ctx->pc = 0x80B3DEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DEA4u)) return;
    // 80B3DEA4: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DEA8:
    ctx->pc = 0x80B3DEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DEA8u)) return;
    // 80B3DEA8: addi    r5, r5, 8124
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8124);

label_80B3DEAC:
    ctx->pc = 0x80B3DEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DEACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3DEAC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DEACu)) return;
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
label_80B3DEB0:
    ctx->pc = 0x80B3DEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DEB0u)) return;
    // 80B3DEB0: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DEB4:
    ctx->pc = 0x80B3DEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DEB4u)) return;
    // 80B3DEB4: addi    r5, r5, 8128
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8128);

label_80B3DEB8:
    ctx->pc = 0x80B3DEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DEB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3DEB8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DEB8u)) return;
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
label_80B3DEBC:
    ctx->pc = 0x80B3DEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DEBCu)) return;
    // 80B3DEBC: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DEC0:
    ctx->pc = 0x80B3DEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DEC0u)) return;
    // 80B3DEC0: addi    r5, r5, 8132
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8132);

label_80B3DEC4:
    ctx->pc = 0x80B3DEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DEC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3DEC4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DEC4u)) return;
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
label_80B3DEC8:
    ctx->pc = 0x80B3DEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DEC8u)) return;
    // 80B3DEC8: bl      0x8045C750
    {
            ctx->lr = 0x80B3DECCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3DECC:
    ctx->pc = 0x80B3DECCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DECCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3DECC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3DED0:
    ctx->pc = 0x80B3DED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DED0u)) return;
    // 80B3DED0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3DED4:
    ctx->pc = 0x80B3DED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DED4u)) return;
    // 80B3DED4: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B3DED8:
    ctx->pc = 0x80B3DED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DED8u)) return;
    // 80B3DED8: addi    r5, r5, -225
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-225);

label_80B3DEDC:
    ctx->pc = 0x80B3DEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DEDCu)) return;
    // 80B3DEDC: li      r6, 828
    ctx->gpr[6] = (u32)(s32)(828);

label_80B3DEE0:
    ctx->pc = 0x80B3DEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DEE0u)) return;
    // 80B3DEE0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3DEE4:
    ctx->pc = 0x80B3DEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DEE4u)) return;
    // 80B3DEE4: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3DEE8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3DEE8:
    ctx->pc = 0x80B3DEE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DEE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3DEE8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3DEEC:
    ctx->pc = 0x80B3DEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DEECu)) return;
    // 80B3DEEC: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_80B3DEF0:
    ctx->pc = 0x80B3DEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DEF0u)) return;
    // 80B3DEF0: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DEF4:
    ctx->pc = 0x80B3DEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DEF4u)) return;
    // 80B3DEF4: addi    r5, r5, 8136
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8136);

label_80B3DEF8:
    ctx->pc = 0x80B3DEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DEF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3DEF8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DEF8u)) return;
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
label_80B3DEFC:
    ctx->pc = 0x80B3DEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DEFCu)) return;
    // 80B3DEFC: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DF00:
    ctx->pc = 0x80B3DF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF00u)) return;
    // 80B3DF00: addi    r5, r5, 8128
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8128);

label_80B3DF04:
    ctx->pc = 0x80B3DF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3DF04: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DF04u)) return;
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
label_80B3DF08:
    ctx->pc = 0x80B3DF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF08u)) return;
    // 80B3DF08: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DF0C:
    ctx->pc = 0x80B3DF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF0Cu)) return;
    // 80B3DF0C: addi    r5, r5, 8140
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8140);

label_80B3DF10:
    ctx->pc = 0x80B3DF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3DF10: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DF10u)) return;
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
label_80B3DF14:
    ctx->pc = 0x80B3DF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF14u)) return;
    // 80B3DF14: bl      0x8045C750
    {
            ctx->lr = 0x80B3DF18u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3DF18:
    ctx->pc = 0x80B3DF18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DF18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DF18: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80B3DF1C:
    ctx->pc = 0x80B3DF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF1Cu)) return;
    // 80B3DF1C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3DF20u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3DF20:
    ctx->pc = 0x80B3DF20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DF20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3DF20: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3DF24:
    ctx->pc = 0x80B3DF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF24u)) return;
    // 80B3DF24: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3DF28:
    ctx->pc = 0x80B3DF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF28u)) return;
    // 80B3DF28: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DF2C:
    ctx->pc = 0x80B3DF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF2Cu)) return;
    // 80B3DF2C: addi    r5, r5, 8112
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8112);

label_80B3DF30:
    ctx->pc = 0x80B3DF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3DF30: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DF30u)) return;
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
label_80B3DF34:
    ctx->pc = 0x80B3DF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF34u)) return;
    // 80B3DF34: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DF38:
    ctx->pc = 0x80B3DF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF38u)) return;
    // 80B3DF38: addi    r5, r5, 8116
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8116);

label_80B3DF3C:
    ctx->pc = 0x80B3DF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3DF3C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DF3Cu)) return;
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
label_80B3DF40:
    ctx->pc = 0x80B3DF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF40u)) return;
    // 80B3DF40: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DF44:
    ctx->pc = 0x80B3DF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF44u)) return;
    // 80B3DF44: addi    r5, r5, 8120
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8120);

label_80B3DF48:
    ctx->pc = 0x80B3DF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3DF48: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DF48u)) return;
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
label_80B3DF4C:
    ctx->pc = 0x80B3DF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF4Cu)) return;
    // 80B3DF4C: bl      0x8045C750
    {
            ctx->lr = 0x80B3DF50u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3DF50:
    ctx->pc = 0x80B3DF50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DF50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B3DF50: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3DF54:
    ctx->pc = 0x80B3DF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF54u)) return;
    // 80B3DF54: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3DF58:
    ctx->pc = 0x80B3DF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF58u)) return;
    // 80B3DF58: li      r5, 2335
    ctx->gpr[5] = (u32)(s32)(2335);

label_80B3DF5C:
    ctx->pc = 0x80B3DF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF5Cu)) return;
    // 80B3DF5C: li      r6, 16956
    ctx->gpr[6] = (u32)(s32)(16956);

label_80B3DF60:
    ctx->pc = 0x80B3DF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF60u)) return;
    // 80B3DF60: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3DF64:
    ctx->pc = 0x80B3DF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF64u)) return;
    // 80B3DF64: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3DF68u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3DF68:
    ctx->pc = 0x80B3DF68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DF68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B3DF68: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3DF6C:
    ctx->pc = 0x80B3DF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF6Cu)) return;
    // 80B3DF6C: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_80B3DF70:
    ctx->pc = 0x80B3DF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF70u)) return;
    // 80B3DF70: li      r5, 7711
    ctx->gpr[5] = (u32)(s32)(7711);

label_80B3DF74:
    ctx->pc = 0x80B3DF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF74u)) return;
    // 80B3DF74: li      r6, 16956
    ctx->gpr[6] = (u32)(s32)(16956);

label_80B3DF78:
    ctx->pc = 0x80B3DF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF78u)) return;
    // 80B3DF78: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3DF7C:
    ctx->pc = 0x80B3DF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF7Cu)) return;
    // 80B3DF7C: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3DF80u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3DF80:
    ctx->pc = 0x80B3DF80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DF80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DF80: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80B3DF84:
    ctx->pc = 0x80B3DF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF84u)) return;
    // 80B3DF84: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3DF88u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3DF88:
    ctx->pc = 0x80B3DF88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DF88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DF88: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3DF8C:
    ctx->pc = 0x80B3DF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF8Cu)) return;
    // 80B3DF8C: bl      0x8045F220
    {
            ctx->lr = 0x80B3DF90u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3DF90:
    ctx->pc = 0x80B3DF90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DF90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3DF90: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3DF94:
    ctx->pc = 0x80B3DF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF94u)) return;
    // 80B3DF94: addi    r4, r4, 8272
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8272);

label_80B3DF98:
    ctx->pc = 0x80B3DF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DF98u)) return;
    // 80B3DF98: bl      0x8045C060
    {
            ctx->lr = 0x80B3DF9Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B3DF9C:
    ctx->pc = 0x80B3DF9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DF9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DF9C: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80B3DFA0:
    ctx->pc = 0x80B3DFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DFA0u)) return;
    // 80B3DFA0: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3DFA4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3DFA4:
    ctx->pc = 0x80B3DFA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DFA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3DFA4: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3DFA8:
    ctx->pc = 0x80B3DFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DFA8u)) return;
    // 80B3DFA8: addi    r3, r3, 3012
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3012);

label_80B3DFAC:
    ctx->pc = 0x80B3DFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DFACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3DFAC: lwz     r3, 0(r3)
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
label_80B3DFB0:
    ctx->pc = 0x80B3DFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DFB0u)) return;
    // 80B3DFB0: cmplwi  r3, 0x0000
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

label_80B3DFB4:
    ctx->pc = 0x80B3DFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DFB4u)) return;
    // 80B3DFB4: bc    12, 2, 0x80B3DFCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3DFCC;
        }
    }

label_80B3DFB8:
    ctx->pc = 0x80B3DFB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DFB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3DFB8: bl      0x8050F9E0
    {
            ctx->lr = 0x80B3DFBCu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B3DFBC:
    ctx->pc = 0x80B3DFBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DFBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B3DFBC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B3DFC0:
    ctx->pc = 0x80B3DFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DFC0u)) return;
    // 80B3DFC0: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3DFC4:
    ctx->pc = 0x80B3DFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DFC4u)) return;
    // 80B3DFC4: addi    r3, r3, 3012
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3012);

label_80B3DFC8:
    ctx->pc = 0x80B3DFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DFC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3DFC8: stw     r0, 0(r3)
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
label_80B3DFCC:
    ctx->pc = 0x80B3DFCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DFCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3DFCC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3DFD0:
    ctx->pc = 0x80B3DFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DFD0u)) return;
    // 80B3DFD0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3DFD4:
    ctx->pc = 0x80B3DFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DFD4u)) return;
    // 80B3DFD4: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DFD8:
    ctx->pc = 0x80B3DFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DFD8u)) return;
    // 80B3DFD8: addi    r5, r5, 8144
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8144);

label_80B3DFDC:
    ctx->pc = 0x80B3DFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DFDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3DFDC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DFDCu)) return;
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
label_80B3DFE0:
    ctx->pc = 0x80B3DFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DFE0u)) return;
    // 80B3DFE0: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DFE4:
    ctx->pc = 0x80B3DFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DFE4u)) return;
    // 80B3DFE4: addi    r5, r5, 8148
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8148);

label_80B3DFE8:
    ctx->pc = 0x80B3DFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DFE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3DFE8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DFE8u)) return;
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
label_80B3DFEC:
    ctx->pc = 0x80B3DFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DFECu)) return;
    // 80B3DFEC: lis     r5, -27572
    ctx->gpr[5] = ((u32)(s32)(-27572) << 16);

label_80B3DFF0:
    ctx->pc = 0x80B3DFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DFF0u)) return;
    // 80B3DFF0: addi    r5, r5, 8152
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(8152);

label_80B3DFF4:
    ctx->pc = 0x80B3DFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DFF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3DFF4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3DFF4u)) return;
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
label_80B3DFF8:
    ctx->pc = 0x80B3DFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3DFF8u)) return;
    // 80B3DFF8: bl      0x8045C750
    {
            ctx->lr = 0x80B3DFFCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3DFFC:
    ctx->pc = 0x80B3DFFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3DFFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3DFFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3E000:
    ctx->pc = 0x80B3E000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E000u)) return;
    // 80B3E000: bl      0x8045F220
    {
            ctx->lr = 0x80B3E004u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3E004:
    ctx->pc = 0x80B3E004u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E004u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3E004: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B3E008:
    ctx->pc = 0x80B3E008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E008u)) return;
    // 80B3E008: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3E00C:
    ctx->pc = 0x80B3E00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E00Cu)) return;
    // 80B3E00C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3E010:
    ctx->pc = 0x80B3E010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E010u)) return;
    // 80B3E010: lis     r6, -27572
    ctx->gpr[6] = ((u32)(s32)(-27572) << 16);

label_80B3E014:
    ctx->pc = 0x80B3E014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E014u)) return;
    // 80B3E014: addi    r6, r6, 8048
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8048);

label_80B3E018:
    ctx->pc = 0x80B3E018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E018: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3E018u)) return;
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
label_80B3E01C:
    ctx->pc = 0x80B3E01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E01Cu)) return;
    // 80B3E01C: lis     r6, -27572
    ctx->gpr[6] = ((u32)(s32)(-27572) << 16);

label_80B3E020:
    ctx->pc = 0x80B3E020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E020u)) return;
    // 80B3E020: addi    r6, r6, 8156
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8156);

label_80B3E024:
    ctx->pc = 0x80B3E024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E024u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E024: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3E024u)) return;
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
label_80B3E028:
    ctx->pc = 0x80B3E028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E028u)) return;
    // 80B3E028: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80B3E028u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80B3E02C:
    ctx->pc = 0x80B3E02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E02Cu)) return;
    // 80B3E02C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B3E030:
    ctx->pc = 0x80B3E030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E030u)) return;
    // 80B3E030: bl      0x8045C3C0
    {
            ctx->lr = 0x80B3E034u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80B3E034:
    ctx->pc = 0x80B3E034u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E034u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B3E034: lis     r3, -27572
    ctx->gpr[3] = ((u32)(s32)(-27572) << 16);

label_80B3E038:
    ctx->pc = 0x80B3E038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E038u)) return;
    // 80B3E038: addi    r3, r3, 8160
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8160);

label_80B3E03C:
    ctx->pc = 0x80B3E03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E03Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3E03C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E03Cu)) return;
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
label_80B3E040:
    ctx->pc = 0x80B3E040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E040u)) return;
    // 80B3E040: lis     r3, -27572
    ctx->gpr[3] = ((u32)(s32)(-27572) << 16);

label_80B3E044:
    ctx->pc = 0x80B3E044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E044u)) return;
    // 80B3E044: addi    r3, r3, 8048
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8048);

label_80B3E048:
    ctx->pc = 0x80B3E048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E048: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E048u)) return;
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
label_80B3E04C:
    ctx->pc = 0x80B3E04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E04Cu)) return;
    // 80B3E04C: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80B3E04Cu)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_80B3E050:
    ctx->pc = 0x80B3E050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E050u)) return;
    // 80B3E050: fmr    f4, f2
    if (!ppc_fp_available_inline(ctx, 0x80B3E050u)) return;
    ctx->fpr[4] = ctx->fpr[2];

label_80B3E054:
    ctx->pc = 0x80B3E054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E054u)) return;
    // 80B3E054: fmr    f5, f2
    if (!ppc_fp_available_inline(ctx, 0x80B3E054u)) return;
    ctx->fpr[5] = ctx->fpr[2];

label_80B3E058:
    ctx->pc = 0x80B3E058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E058u)) return;
    // 80B3E058: bl      0x80B3E614
    {
            ctx->lr = 0x80B3E05Cu;
            goto label_80B3E614;
    }

label_80B3E05C:
    ctx->pc = 0x80B3E05Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E05Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3E05C: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3E060:
    ctx->pc = 0x80B3E060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E060u)) return;
    // 80B3E060: addi    r4, r4, 3008
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3008);

label_80B3E064:
    ctx->pc = 0x80B3E064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E064: stw     r3, 0(r4)
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
label_80B3E068:
    ctx->pc = 0x80B3E068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E068u)) return;
    // 80B3E068: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80B3E06C:
    ctx->pc = 0x80B3E06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E06Cu)) return;
    // 80B3E06C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3E070u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3E070:
    ctx->pc = 0x80B3E070u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E070u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3E070: bl      0x8045C4A4
    {
            ctx->lr = 0x80B3E074u;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80B3E074:
    ctx->pc = 0x80B3E074u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E074u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3E074: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80B3E078:
    ctx->pc = 0x80B3E078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E078u)) return;
    // 80B3E078: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3E07Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3E07C:
    ctx->pc = 0x80B3E07Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E07Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3E07C: b       0x80B3E0F4
    {
            goto label_80B3E0F4;
    }

label_80B3E080:
    ctx->pc = 0x80B3E080u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E080u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3E080: bl      0x8045DE34
    {
            ctx->lr = 0x80B3E084u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80B3E084:
    ctx->pc = 0x80B3E084u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E084u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3E084: bl      0x80460A80
    {
            ctx->lr = 0x80B3E088u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80B3E088:
    ctx->pc = 0x80B3E088u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E088u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3E088: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3E08C:
    ctx->pc = 0x80B3E08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E08Cu)) return;
    // 80B3E08C: bl      0x8045EC10
    {
            ctx->lr = 0x80B3E090u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80B3E090:
    ctx->pc = 0x80B3E090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3E090: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3E094:
    ctx->pc = 0x80B3E094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E094u)) return;
    // 80B3E094: bl      0x8045ED54
    {
            ctx->lr = 0x80B3E098u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80B3E098:
    ctx->pc = 0x80B3E098u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E098u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3E098: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3E09C:
    ctx->pc = 0x80B3E09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E09Cu)) return;
    // 80B3E09C: addi    r3, r3, 3016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3016);

label_80B3E0A0:
    ctx->pc = 0x80B3E0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E0A0u)) return;
    // 80B3E0A0: bl      0x8045F070
    {
            ctx->lr = 0x80B3E0A4u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80B3E0A4:
    ctx->pc = 0x80B3E0A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E0A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3E0A4: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3E0A8:
    ctx->pc = 0x80B3E0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E0A8u)) return;
    // 80B3E0A8: addi    r3, r3, 3012
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3012);

label_80B3E0AC:
    ctx->pc = 0x80B3E0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E0ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E0AC: lwz     r3, 0(r3)
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
label_80B3E0B0:
    ctx->pc = 0x80B3E0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E0B0u)) return;
    // 80B3E0B0: cmplwi  r3, 0x0000
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

label_80B3E0B4:
    ctx->pc = 0x80B3E0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E0B4u)) return;
    // 80B3E0B4: bc    12, 2, 0x80B3E0CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3E0CC;
        }
    }

label_80B3E0B8:
    ctx->pc = 0x80B3E0B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E0B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3E0B8: bl      0x8050F9E0
    {
            ctx->lr = 0x80B3E0BCu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B3E0BC:
    ctx->pc = 0x80B3E0BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E0BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B3E0BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B3E0C0:
    ctx->pc = 0x80B3E0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E0C0u)) return;
    // 80B3E0C0: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3E0C4:
    ctx->pc = 0x80B3E0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E0C4u)) return;
    // 80B3E0C4: addi    r3, r3, 3012
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3012);

label_80B3E0C8:
    ctx->pc = 0x80B3E0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E0C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3E0C8: stw     r0, 0(r3)
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
label_80B3E0CC:
    ctx->pc = 0x80B3E0CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E0CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3E0CC: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3E0D0:
    ctx->pc = 0x80B3E0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E0D0u)) return;
    // 80B3E0D0: addi    r3, r3, 3008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3008);

label_80B3E0D4:
    ctx->pc = 0x80B3E0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E0D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E0D4: lwz     r3, 0(r3)
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
label_80B3E0D8:
    ctx->pc = 0x80B3E0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E0D8u)) return;
    // 80B3E0D8: cmplwi  r3, 0x0000
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

label_80B3E0DC:
    ctx->pc = 0x80B3E0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E0DCu)) return;
    // 80B3E0DC: bc    12, 2, 0x80B3E0F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3E0F4;
        }
    }

label_80B3E0E0:
    ctx->pc = 0x80B3E0E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E0E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3E0E0: bl      0x8050F9E0
    {
            ctx->lr = 0x80B3E0E4u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B3E0E4:
    ctx->pc = 0x80B3E0E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E0E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B3E0E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B3E0E8:
    ctx->pc = 0x80B3E0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E0E8u)) return;
    // 80B3E0E8: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3E0EC:
    ctx->pc = 0x80B3E0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E0ECu)) return;
    // 80B3E0EC: addi    r3, r3, 3008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3008);

label_80B3E0F0:
    ctx->pc = 0x80B3E0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E0F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3E0F0: stw     r0, 0(r3)
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
label_80B3E0F4:
    ctx->pc = 0x80B3E0F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E0F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E0F4: lwz     r31, 12(r1)
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
label_80B3E0F8:
    ctx->pc = 0x80B3E0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E0F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E0F8: lwz     r0, 20(r1)
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
label_80B3E0FC:
    ctx->pc = 0x80B3E0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3E0FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E0FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E100:
    ctx->pc = 0x80B3E100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E100u)) return;
    // 80B3E100: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3E104:
    ctx->pc = 0x80B3E104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E104u)) return;
    // 80B3E104: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E108:
    ctx->pc = 0x80B3E108u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E108u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3E108: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E10C:
    ctx->pc = 0x80B3E10Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E10Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E10C: stwu     r1, -16(r1)
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
label_80B3E110:
    ctx->pc = 0x80B3E110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E110: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E114:
    ctx->pc = 0x80B3E114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E114: stw     r0, 20(r1)
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
label_80B3E118:
    ctx->pc = 0x80B3E118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E118: stw     r31, 12(r1)
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
label_80B3E11C:
    ctx->pc = 0x80B3E11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E11Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3E11C: lwz     r31, 32(r3)
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
label_80B3E120:
    ctx->pc = 0x80B3E120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E120u)) return;
    // 80B3E120: bl      0x80510928
    {
            ctx->lr = 0x80B3E124u;
            ctx->pc = 0x80510928u;
            return;
    }

label_80B3E124:
    ctx->pc = 0x80B3E124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3E124: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3E128:
    ctx->pc = 0x80B3E128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E128u)) return;
    // 80B3E128: bl      0x8004B49C
    {
            ctx->lr = 0x80B3E12Cu;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80B3E12C:
    ctx->pc = 0x80B3E12Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E12Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3E12C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3E130:
    ctx->pc = 0x80B3E130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E130u)) return;
    // 80B3E130: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_80B3E134:
    ctx->pc = 0x80B3E134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E134u)) return;
    // 80B3E134: bl      0x8004AA9C
    {
            ctx->lr = 0x80B3E138u;
            ctx->pc = 0x8004AA9Cu;
            return;
    }

label_80B3E138:
    ctx->pc = 0x80B3E138u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E138u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E138: lwz     r0, 28(r31)
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
label_80B3E13C:
    ctx->pc = 0x80B3E13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E13Cu)) return;
    // 80B3E13C: cmpwi   r0, 0
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

label_80B3E140:
    ctx->pc = 0x80B3E140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E140u)) return;
    // 80B3E140: bc    12, 2, 0x80B3E150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3E150;
        }
    }

label_80B3E144:
    ctx->pc = 0x80B3E144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3E144: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3E148:
    ctx->pc = 0x80B3E148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E148u)) return;
    // 80B3E148: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80B3E14C:
    ctx->pc = 0x80B3E14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E14Cu)) return;
    // 80B3E14C: bl      0x8004AFDC
    {
            ctx->lr = 0x80B3E150u;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_80B3E150:
    ctx->pc = 0x80B3E150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E150: lwz     r0, 20(r31)
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
label_80B3E154:
    ctx->pc = 0x80B3E154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E154u)) return;
    // 80B3E154: cmpwi   r0, 0
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

label_80B3E158:
    ctx->pc = 0x80B3E158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E158u)) return;
    // 80B3E158: bc    12, 2, 0x80B3E168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3E168;
        }
    }

label_80B3E15C:
    ctx->pc = 0x80B3E15Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E15Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3E15C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3E160:
    ctx->pc = 0x80B3E160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E160u)) return;
    // 80B3E160: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80B3E164:
    ctx->pc = 0x80B3E164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E164u)) return;
    // 80B3E164: bl      0x8004B3E0
    {
            ctx->lr = 0x80B3E168u;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_80B3E168:
    ctx->pc = 0x80B3E168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E168: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E16C:
    ctx->pc = 0x80B3E16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E16Cu)) return;
    // 80B3E16C: cmpwi   r0, 0
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

label_80B3E170:
    ctx->pc = 0x80B3E170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E170u)) return;
    // 80B3E170: bc    12, 2, 0x80B3E180
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3E180;
        }
    }

label_80B3E174:
    ctx->pc = 0x80B3E174u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E174u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3E174: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3E178:
    ctx->pc = 0x80B3E178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E178u)) return;
    // 80B3E178: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80B3E17C:
    ctx->pc = 0x80B3E17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E17Cu)) return;
    // 80B3E17C: bl      0x8004AF5C
    {
            ctx->lr = 0x80B3E180u;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80B3E180:
    ctx->pc = 0x80B3E180u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E180u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3E180: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3E184:
    ctx->pc = 0x80B3E184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E184u)) return;
    // 80B3E184: addi    r3, r3, 2928
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2928);

label_80B3E188:
    ctx->pc = 0x80B3E188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E188u)) return;
    // 80B3E188: bl      0x8060E45C
    {
            ctx->lr = 0x80B3E18Cu;
            ctx->pc = 0x8060E45Cu;
            return;
    }

label_80B3E18C:
    ctx->pc = 0x80B3E18Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E18Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3E18C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3E190:
    ctx->pc = 0x80B3E190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E190u)) return;
    // 80B3E190: bl      0x8004B504
    {
            ctx->lr = 0x80B3E194u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80B3E194:
    ctx->pc = 0x80B3E194u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E194u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E194: lwz     r31, 12(r1)
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
label_80B3E198:
    ctx->pc = 0x80B3E198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E198: lwz     r0, 20(r1)
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
label_80B3E19C:
    ctx->pc = 0x80B3E19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3E19Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E19C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E1A0:
    ctx->pc = 0x80B3E1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E1A0u)) return;
    // 80B3E1A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3E1A4:
    ctx->pc = 0x80B3E1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E1A4u)) return;
    // 80B3E1A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E1A8:
    ctx->pc = 0x80B3E1A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E1A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E1A8: stwu     r1, -16(r1)
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
label_80B3E1AC:
    ctx->pc = 0x80B3E1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E1ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E1AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E1B0:
    ctx->pc = 0x80B3E1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E1B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3E1B0: stw     r0, 20(r1)
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
label_80B3E1B4:
    ctx->pc = 0x80B3E1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E1B4u)) return;
    // 80B3E1B4: bl      0x80B3E10C
    {
            ctx->lr = 0x80B3E1B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B3E10Cu;
                return;
            }
            goto label_80B3E10C;
    }

label_80B3E1B8:
    ctx->pc = 0x80B3E1B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E1B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E1B8: lwz     r0, 20(r1)
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
label_80B3E1BC:
    ctx->pc = 0x80B3E1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3E1BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E1BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E1C0:
    ctx->pc = 0x80B3E1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E1C0u)) return;
    // 80B3E1C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3E1C4:
    ctx->pc = 0x80B3E1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E1C4u)) return;
    // 80B3E1C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E1C8:
    ctx->pc = 0x80B3E1C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E1C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3E1C8: stwu     r1, -16(r1)
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
label_80B3E1CC:
    ctx->pc = 0x80B3E1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E1CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E1CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E1D0:
    ctx->pc = 0x80B3E1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E1D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E1D0: stw     r0, 20(r1)
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
label_80B3E1D4:
    ctx->pc = 0x80B3E1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E1D4u)) return;
    // 80B3E1D4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3E1D8:
    ctx->pc = 0x80B3E1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E1D8u)) return;
    // 80B3E1D8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80B3E1DC:
    ctx->pc = 0x80B3E1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E1DCu)) return;
    // 80B3E1DC: lis     r5, -32588
    ctx->gpr[5] = ((u32)(s32)(-32588) << 16);

label_80B3E1E0:
    ctx->pc = 0x80B3E1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E1E0u)) return;
    // 80B3E1E0: addi    r5, r5, -7768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7768);

label_80B3E1E4:
    ctx->pc = 0x80B3E1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E1E4u)) return;
    // 80B3E1E4: bl      0x8050FD60
    {
            ctx->lr = 0x80B3E1E8u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80B3E1E8:
    ctx->pc = 0x80B3E1E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E1E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E1E8: lwz     r0, 20(r1)
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
label_80B3E1EC:
    ctx->pc = 0x80B3E1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3E1ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E1EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E1F0:
    ctx->pc = 0x80B3E1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E1F0u)) return;
    // 80B3E1F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3E1F4:
    ctx->pc = 0x80B3E1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E1F4u)) return;
    // 80B3E1F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E1F8:
    ctx->pc = 0x80B3E1F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E1F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E1F8: stwu     r1, -16(r1)
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
label_80B3E1FC:
    ctx->pc = 0x80B3E1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E1FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E1FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E200:
    ctx->pc = 0x80B3E200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E200: stw     r0, 20(r1)
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
label_80B3E204:
    ctx->pc = 0x80B3E204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E204: lwz     r3, 32(r3)
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
label_80B3E208:
    ctx->pc = 0x80B3E208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3E208: lwz     r3, 16(r3)
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
label_80B3E20C:
    ctx->pc = 0x80B3E20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E20Cu)) return;
    // 80B3E20C: bl      0x8050ED40
    {
            ctx->lr = 0x80B3E210u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80B3E210:
    ctx->pc = 0x80B3E210u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E210u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E210: lwz     r0, 20(r1)
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
label_80B3E214:
    ctx->pc = 0x80B3E214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3E214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E214: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E218:
    ctx->pc = 0x80B3E218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E218u)) return;
    // 80B3E218: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3E21C:
    ctx->pc = 0x80B3E21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E21Cu)) return;
    // 80B3E21C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E220:
    ctx->pc = 0x80B3E220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3E220: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E224:
    ctx->pc = 0x80B3E224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3E224: stwu     r1, -16(r1)
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
label_80B3E228:
    ctx->pc = 0x80B3E228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3E228: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E22C:
    ctx->pc = 0x80B3E22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E22Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E22C: stw     r0, 20(r1)
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
label_80B3E230:
    ctx->pc = 0x80B3E230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E230u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E230: lwz     r5, 32(r3)
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
label_80B3E234:
    ctx->pc = 0x80B3E234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E234: lwz     r3, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E238:
    ctx->pc = 0x80B3E238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E238u)) return;
    // 80B3E238: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80B3E23C:
    ctx->pc = 0x80B3E23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E23Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E23C: stw     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E240:
    ctx->pc = 0x80B3E240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E240u)) return;
    // 80B3E240: cmpwi   r0, 0
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

label_80B3E244:
    ctx->pc = 0x80B3E244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E244u)) return;
    // 80B3E244: bc    4, 2, 0x80B3E2D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3E2D8;
        }
    }

label_80B3E248:
    ctx->pc = 0x80B3E248u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 36u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E248u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 36u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80B3E248: lwz     r6, 16(r5)
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
label_80B3E24C:
    ctx->pc = 0x80B3E24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E24Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80B3E24C: lwz     r0, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E250:
    ctx->pc = 0x80B3E250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80B3E250: stw     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E254:
    ctx->pc = 0x80B3E254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E254u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80B3E254: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3E254u)) return;
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
label_80B3E258:
    ctx->pc = 0x80B3E258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E258u)) return;
    // 80B3E258: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3E25C:
    ctx->pc = 0x80B3E25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E25Cu)) return;
    // 80B3E25C: addi    r3, r3, 3024
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3024);

label_80B3E260:
    ctx->pc = 0x80B3E260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80B3E260: stfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E260u)) return;
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
label_80B3E264:
    ctx->pc = 0x80B3E264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80B3E264: lfs     f0, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3E264u)) return;
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
label_80B3E268:
    ctx->pc = 0x80B3E268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80B3E268: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E268u)) return;
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
label_80B3E26C:
    ctx->pc = 0x80B3E26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E26Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80B3E26C: lfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3E26Cu)) return;
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
label_80B3E270:
    ctx->pc = 0x80B3E270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80B3E270: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E270u)) return;
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
label_80B3E274:
    ctx->pc = 0x80B3E274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80B3E274: lfs     f0, 12(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3E274u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
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
label_80B3E278:
    ctx->pc = 0x80B3E278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80B3E278: stfs     f0, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E278u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E27C:
    ctx->pc = 0x80B3E27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E27Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80B3E27C: lfs     f0, 16(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3E27Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
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
label_80B3E280:
    ctx->pc = 0x80B3E280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80B3E280: stfs     f0, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E280u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E284:
    ctx->pc = 0x80B3E284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80B3E284: lwz     r4, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E288:
    ctx->pc = 0x80B3E288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80B3E288: lwz     r0, 36(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E28C:
    ctx->pc = 0x80B3E28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E28Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80B3E28C: stw     r4, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E290:
    ctx->pc = 0x80B3E290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E290u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80B3E290: stw     r0, 36(r3)
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
label_80B3E294:
    ctx->pc = 0x80B3E294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B3E294: lwz     r0, 40(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E298:
    ctx->pc = 0x80B3E298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E298u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B3E298: stw     r0, 40(r3)
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
label_80B3E29C:
    ctx->pc = 0x80B3E29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E29Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B3E29C: lwz     r4, 44(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E2A0:
    ctx->pc = 0x80B3E2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B3E2A0: lwz     r0, 48(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E2A4:
    ctx->pc = 0x80B3E2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B3E2A4: stw     r4, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E2A8:
    ctx->pc = 0x80B3E2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B3E2A8: stw     r0, 48(r3)
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
label_80B3E2AC:
    ctx->pc = 0x80B3E2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3E2AC: lwz     r4, 52(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E2B0:
    ctx->pc = 0x80B3E2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B3E2B0: lwz     r0, 56(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E2B4:
    ctx->pc = 0x80B3E2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3E2B4: stw     r4, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E2B8:
    ctx->pc = 0x80B3E2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3E2B8: stw     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E2BC:
    ctx->pc = 0x80B3E2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E2BC: lwz     r4, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E2C0:
    ctx->pc = 0x80B3E2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E2C0: lwz     r0, 36(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E2C4:
    ctx->pc = 0x80B3E2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E2C4: stw     r4, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E2C8:
    ctx->pc = 0x80B3E2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E2C8: stw     r0, 24(r3)
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
label_80B3E2CC:
    ctx->pc = 0x80B3E2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E2CC: lwz     r0, 40(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E2D0:
    ctx->pc = 0x80B3E2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3E2D0: stw     r0, 28(r3)
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
label_80B3E2D4:
    ctx->pc = 0x80B3E2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2D4u)) return;
    // 80B3E2D4: bl      0x8044DE60
    {
            ctx->lr = 0x80B3E2D8u;
            ctx->pc = 0x8044DE60u;
            return;
    }

label_80B3E2D8:
    ctx->pc = 0x80B3E2D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E2D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E2D8: lwz     r0, 20(r1)
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
label_80B3E2DC:
    ctx->pc = 0x80B3E2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3E2DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E2DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E2E0:
    ctx->pc = 0x80B3E2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2E0u)) return;
    // 80B3E2E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3E2E4:
    ctx->pc = 0x80B3E2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2E4u)) return;
    // 80B3E2E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E2E8:
    ctx->pc = 0x80B3E2E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E2E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3E2E8: stwu     r1, -16(r1)
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
label_80B3E2EC:
    ctx->pc = 0x80B3E2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3E2EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E2F0:
    ctx->pc = 0x80B3E2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E2F0: stw     r0, 20(r1)
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
label_80B3E2F4:
    ctx->pc = 0x80B3E2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E2F4: stw     r31, 12(r1)
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
label_80B3E2F8:
    ctx->pc = 0x80B3E2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E2F8: stw     r30, 8(r1)
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
label_80B3E2FC:
    ctx->pc = 0x80B3E2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E2FCu)) return;
    // 80B3E2FC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3E300:
    ctx->pc = 0x80B3E300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E300u)) return;
    // 80B3E300: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80B3E304:
    ctx->pc = 0x80B3E304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E304u)) return;
    // 80B3E304: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B3E308:
    ctx->pc = 0x80B3E308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E308u)) return;
    // 80B3E308: bl      0x8050FD60
    {
            ctx->lr = 0x80B3E30Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80B3E30C:
    ctx->pc = 0x80B3E30Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E30Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3E30C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B3E310:
    ctx->pc = 0x80B3E310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E310u)) return;
    // 80B3E310: cmplwi  r31, 0x0000
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

label_80B3E314:
    ctx->pc = 0x80B3E314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E314u)) return;
    // 80B3E314: bc    12, 2, 0x80B3E3D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3E3D0;
        }
    }

label_80B3E318:
    ctx->pc = 0x80B3E318u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80B3E318: lis     r3, -32588
    ctx->gpr[3] = ((u32)(s32)(-32588) << 16);

label_80B3E31C:
    ctx->pc = 0x80B3E31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E31Cu)) return;
    // 80B3E31C: addi    r0, r3, -7644
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-7644);

label_80B3E320:
    ctx->pc = 0x80B3E320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B3E320: stw     r0, 16(r31)
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
label_80B3E324:
    ctx->pc = 0x80B3E324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E324u)) return;
    // 80B3E324: lis     r3, -32588
    ctx->gpr[3] = ((u32)(s32)(-32588) << 16);

label_80B3E328:
    ctx->pc = 0x80B3E328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E328u)) return;
    // 80B3E328: addi    r0, r3, -7648
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-7648);

label_80B3E32C:
    ctx->pc = 0x80B3E32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E32Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B3E32C: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E330:
    ctx->pc = 0x80B3E330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E330u)) return;
    // 80B3E330: lis     r3, -32588
    ctx->gpr[3] = ((u32)(s32)(-32588) << 16);

label_80B3E334:
    ctx->pc = 0x80B3E334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E334u)) return;
    // 80B3E334: addi    r0, r3, -7688
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-7688);

label_80B3E338:
    ctx->pc = 0x80B3E338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E338: stw     r0, 24(r31)
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
label_80B3E33C:
    ctx->pc = 0x80B3E33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E33Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E33C: lwz     r30, 32(r31)
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
label_80B3E340:
    ctx->pc = 0x80B3E340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E340u)) return;
    // 80B3E340: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B3E344:
    ctx->pc = 0x80B3E344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E344: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E348:
    ctx->pc = 0x80B3E348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E348: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E34C:
    ctx->pc = 0x80B3E34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E34Cu)) return;
    // 80B3E34C: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80B3E350:
    ctx->pc = 0x80B3E350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E350u)) return;
    // 80B3E350: bl      0x8050EF60
    {
            ctx->lr = 0x80B3E354u;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80B3E354:
    ctx->pc = 0x80B3E354u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 31u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E354u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 31u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80B3E354: stw     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E358:
    ctx->pc = 0x80B3E358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E358u)) return;
    // 80B3E358: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3E35C:
    ctx->pc = 0x80B3E35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E35Cu)) return;
    // 80B3E35C: addi    r4, r4, 8168
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8168);

label_80B3E360:
    ctx->pc = 0x80B3E360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80B3E360: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3E360u)) return;
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
label_80B3E364:
    ctx->pc = 0x80B3E364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80B3E364: stfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E364u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E368:
    ctx->pc = 0x80B3E368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E368u)) return;
    // 80B3E368: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3E36C:
    ctx->pc = 0x80B3E36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E36Cu)) return;
    // 80B3E36C: addi    r4, r4, 8172
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8172);

label_80B3E370:
    ctx->pc = 0x80B3E370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80B3E370: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3E370u)) return;
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
label_80B3E374:
    ctx->pc = 0x80B3E374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80B3E374: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E374u)) return;
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
label_80B3E378:
    ctx->pc = 0x80B3E378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E378u)) return;
    // 80B3E378: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3E37C:
    ctx->pc = 0x80B3E37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E37Cu)) return;
    // 80B3E37C: addi    r4, r4, 8176
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8176);

label_80B3E380:
    ctx->pc = 0x80B3E380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80B3E380: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3E380u)) return;
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
label_80B3E384:
    ctx->pc = 0x80B3E384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80B3E384: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E384u)) return;
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
label_80B3E388:
    ctx->pc = 0x80B3E388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E388u)) return;
    // 80B3E388: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3E38C:
    ctx->pc = 0x80B3E38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E38Cu)) return;
    // 80B3E38C: addi    r4, r4, 8180
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8180);

label_80B3E390:
    ctx->pc = 0x80B3E390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B3E390: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3E390u)) return;
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
label_80B3E394:
    ctx->pc = 0x80B3E394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B3E394: stfs     f0, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E394u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E398:
    ctx->pc = 0x80B3E398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E398u)) return;
    // 80B3E398: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3E39C:
    ctx->pc = 0x80B3E39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E39Cu)) return;
    // 80B3E39C: addi    r4, r4, 8184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8184);

label_80B3E3A0:
    ctx->pc = 0x80B3E3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B3E3A0: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3E3A0u)) return;
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
label_80B3E3A4:
    ctx->pc = 0x80B3E3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3E3A4: stfs     f0, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E3A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E3A8:
    ctx->pc = 0x80B3E3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3A8u)) return;
    // 80B3E3A8: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3E3AC:
    ctx->pc = 0x80B3E3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3ACu)) return;
    // 80B3E3AC: addi    r4, r4, 8188
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8188);

label_80B3E3B0:
    ctx->pc = 0x80B3E3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3E3B0: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3E3B0u)) return;
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
label_80B3E3B4:
    ctx->pc = 0x80B3E3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E3B4: stfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E3B4u)) return;
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
label_80B3E3B8:
    ctx->pc = 0x80B3E3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E3B8: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E3B8u)) return;
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
label_80B3E3BC:
    ctx->pc = 0x80B3E3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E3BC: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E3BCu)) return;
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
label_80B3E3C0:
    ctx->pc = 0x80B3E3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E3C0: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E3C0u)) return;
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
label_80B3E3C4:
    ctx->pc = 0x80B3E3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E3C4: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E3C4u)) return;
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
label_80B3E3C8:
    ctx->pc = 0x80B3E3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3E3C8: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E3C8u)) return;
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
label_80B3E3CC:
    ctx->pc = 0x80B3E3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3E3CC: stfs     f1, 56(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E3CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E3D0:
    ctx->pc = 0x80B3E3D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E3D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80B3E3D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B3E3D4:
    ctx->pc = 0x80B3E3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E3D4: lwz     r31, 12(r1)
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
label_80B3E3D8:
    ctx->pc = 0x80B3E3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E3D8: lwz     r30, 8(r1)
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
label_80B3E3DC:
    ctx->pc = 0x80B3E3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E3DC: lwz     r0, 20(r1)
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
label_80B3E3E0:
    ctx->pc = 0x80B3E3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3E3E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E3E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E3E4:
    ctx->pc = 0x80B3E3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3E4u)) return;
    // 80B3E3E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3E3E8:
    ctx->pc = 0x80B3E3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3E8u)) return;
    // 80B3E3E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E3EC:
    ctx->pc = 0x80B3E3ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E3ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E3EC: stwu     r1, -64(r1)
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
label_80B3E3F0:
    ctx->pc = 0x80B3E3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E3F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E3F4:
    ctx->pc = 0x80B3E3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E3F4: stw     r0, 68(r1)
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
label_80B3E3F8:
    ctx->pc = 0x80B3E3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3F8u)) return;
    // 80B3E3F8: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80B3E3FC:
    ctx->pc = 0x80B3E3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E3FCu)) return;
    // 80B3E3FC: bl      0x80006DD4
    {
            ctx->lr = 0x80B3E400u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80B3E400:
    ctx->pc = 0x80B3E400u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E400u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80B3E400: lwz     r27, 32(r3)
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
label_80B3E404:
    ctx->pc = 0x80B3E404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E404u)) return;
    // 80B3E404: lis     r3, -27572
    ctx->gpr[3] = ((u32)(s32)(-27572) << 16);

label_80B3E408:
    ctx->pc = 0x80B3E408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E408u)) return;
    // 80B3E408: addi    r3, r3, 8192
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8192);

label_80B3E40C:
    ctx->pc = 0x80B3E40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E40Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80B3E40C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E40Cu)) return;
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
label_80B3E410:
    ctx->pc = 0x80B3E410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80B3E410: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B3E410u)) return;
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
label_80B3E414:
    ctx->pc = 0x80B3E414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E414u)) return;
    // 80B3E414: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B3E414u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B3E418:
    ctx->pc = 0x80B3E418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E418u)) return;
    // 80B3E418: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B3E418u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B3E41C:
    ctx->pc = 0x80B3E41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E41Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80B3E41C: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B3E41Cu)) return;
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
label_80B3E420:
    ctx->pc = 0x80B3E420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80B3E420: lwz     r31, 12(r1)
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
label_80B3E424:
    ctx->pc = 0x80B3E424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80B3E424: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B3E424u)) return;
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
label_80B3E428:
    ctx->pc = 0x80B3E428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E428u)) return;
    // 80B3E428: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B3E428u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B3E42C:
    ctx->pc = 0x80B3E42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E42Cu)) return;
    // 80B3E42C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B3E42Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B3E430:
    ctx->pc = 0x80B3E430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B3E430: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B3E430u)) return;
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
label_80B3E434:
    ctx->pc = 0x80B3E434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B3E434: lwz     r30, 20(r1)
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
label_80B3E438:
    ctx->pc = 0x80B3E438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B3E438: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B3E438u)) return;
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
label_80B3E43C:
    ctx->pc = 0x80B3E43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E43Cu)) return;
    // 80B3E43C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B3E43Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B3E440:
    ctx->pc = 0x80B3E440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E440u)) return;
    // 80B3E440: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B3E440u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B3E444:
    ctx->pc = 0x80B3E444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B3E444: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B3E444u)) return;
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
label_80B3E448:
    ctx->pc = 0x80B3E448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3E448: lwz     r29, 28(r1)
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
label_80B3E44C:
    ctx->pc = 0x80B3E44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E44Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B3E44C: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B3E44Cu)) return;
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
label_80B3E450:
    ctx->pc = 0x80B3E450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E450u)) return;
    // 80B3E450: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B3E450u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B3E454:
    ctx->pc = 0x80B3E454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E454u)) return;
    // 80B3E454: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B3E454u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B3E458:
    ctx->pc = 0x80B3E458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E458: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B3E458u)) return;
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
label_80B3E45C:
    ctx->pc = 0x80B3E45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E45Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E45C: lwz     r28, 36(r1)
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
label_80B3E460:
    ctx->pc = 0x80B3E460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E460u)) return;
    // 80B3E460: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3E464:
    ctx->pc = 0x80B3E464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E464u)) return;
    // 80B3E464: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80B3E468:
    ctx->pc = 0x80B3E468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E468: lwz     r0, 0(r3)
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
label_80B3E46C:
    ctx->pc = 0x80B3E46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E46Cu)) return;
    // 80B3E46C: cmpwi   r0, 0
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

label_80B3E470:
    ctx->pc = 0x80B3E470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E470u)) return;
    // 80B3E470: bc    4, 2, 0x80B3E528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3E528;
        }
    }

label_80B3E474:
    ctx->pc = 0x80B3E474u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E474u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3E474: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80B3E478:
    ctx->pc = 0x80B3E478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E478u)) return;
    // 80B3E478: cmplwi  r0, 0x0000
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

label_80B3E47C:
    ctx->pc = 0x80B3E47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E47Cu)) return;
    // 80B3E47C: bc    12, 2, 0x80B3E528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3E528;
        }
    }

label_80B3E480:
    ctx->pc = 0x80B3E480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3E480: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3E484:
    ctx->pc = 0x80B3E484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E484u)) return;
    // 80B3E484: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80B3E488:
    ctx->pc = 0x80B3E488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E488u)) return;
    // 80B3E488: bl      0x8060F4F8
    {
            ctx->lr = 0x80B3E48Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80B3E48C:
    ctx->pc = 0x80B3E48Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E48Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3E48C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3E490:
    ctx->pc = 0x80B3E490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E490u)) return;
    // 80B3E490: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80B3E494:
    ctx->pc = 0x80B3E494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E494u)) return;
    // 80B3E494: bl      0x8060F4F8
    {
            ctx->lr = 0x80B3E498u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80B3E498:
    ctx->pc = 0x80B3E498u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E498u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E498: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B3E498u)) return;
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
label_80B3E49C:
    ctx->pc = 0x80B3E49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E49Cu)) return;
    // 80B3E49C: lis     r3, -27572
    ctx->gpr[3] = ((u32)(s32)(-27572) << 16);

label_80B3E4A0:
    ctx->pc = 0x80B3E4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4A0u)) return;
    // 80B3E4A0: addi    r3, r3, 8200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8200);

label_80B3E4A4:
    ctx->pc = 0x80B3E4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E4A4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E4A4u)) return;
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
label_80B3E4A8:
    ctx->pc = 0x80B3E4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4A8u)) return;
    // 80B3E4A8: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80B3E4A8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80B3E4AC:
    ctx->pc = 0x80B3E4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4ACu)) return;
    // 80B3E4AC: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80B3E4B0:
    ctx->pc = 0x80B3E4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4B0u)) return;
    // 80B3E4B0: bc    4, 2, 0x80B3E4C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3E4C4;
        }
    }

label_80B3E4B4:
    ctx->pc = 0x80B3E4B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E4B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B3E4B4: lis     r3, -27572
    ctx->gpr[3] = ((u32)(s32)(-27572) << 16);

label_80B3E4B8:
    ctx->pc = 0x80B3E4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4B8u)) return;
    // 80B3E4B8: addi    r3, r3, 8196
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8196);

label_80B3E4BC:
    ctx->pc = 0x80B3E4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3E4BC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E4BCu)) return;
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
label_80B3E4C0:
    ctx->pc = 0x80B3E4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4C0u)) return;
    // 80B3E4C0: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80B3E4C0u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80B3E4C4:
    ctx->pc = 0x80B3E4C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E4C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3E4C4: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80B3E4C8:
    ctx->pc = 0x80B3E4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4C8u)) return;
    // 80B3E4C8: cmplwi  r0, 0x00FF
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

label_80B3E4CC:
    ctx->pc = 0x80B3E4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4CCu)) return;
    // 80B3E4CC: bc    4, 1, 0x80B3E4D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3E4D4;
        }
    }

label_80B3E4D0:
    ctx->pc = 0x80B3E4D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E4D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3E4D0: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80B3E4D4:
    ctx->pc = 0x80B3E4D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E4D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80B3E4D4: lis     r3, -27572
    ctx->gpr[3] = ((u32)(s32)(-27572) << 16);

label_80B3E4D8:
    ctx->pc = 0x80B3E4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4D8u)) return;
    // 80B3E4D8: addi    r3, r3, 8204
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8204);

label_80B3E4DC:
    ctx->pc = 0x80B3E4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80B3E4DC: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E4DCu)) return;
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
label_80B3E4E0:
    ctx->pc = 0x80B3E4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4E0u)) return;
    // 80B3E4E0: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80B3E4E0u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80B3E4E4:
    ctx->pc = 0x80B3E4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4E4u)) return;
    // 80B3E4E4: lis     r3, -27572
    ctx->gpr[3] = ((u32)(s32)(-27572) << 16);

label_80B3E4E8:
    ctx->pc = 0x80B3E4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4E8u)) return;
    // 80B3E4E8: addi    r3, r3, 8208
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8208);

label_80B3E4EC:
    ctx->pc = 0x80B3E4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B3E4EC: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E4ECu)) return;
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
label_80B3E4F0:
    ctx->pc = 0x80B3E4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4F0u)) return;
    // 80B3E4F0: lis     r3, -27572
    ctx->gpr[3] = ((u32)(s32)(-27572) << 16);

label_80B3E4F4:
    ctx->pc = 0x80B3E4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4F4u)) return;
    // 80B3E4F4: addi    r3, r3, 8212
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8212);

label_80B3E4F8:
    ctx->pc = 0x80B3E4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B3E4F8: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E4F8u)) return;
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
label_80B3E4FC:
    ctx->pc = 0x80B3E4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E4FCu)) return;
    // 80B3E4FC: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80B3E500:
    ctx->pc = 0x80B3E500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E500u)) return;
    // 80B3E500: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80B3E504:
    ctx->pc = 0x80B3E504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E504u)) return;
    // 80B3E504: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80B3E508:
    ctx->pc = 0x80B3E508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E508u)) return;
    // 80B3E508: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80B3E50C:
    ctx->pc = 0x80B3E50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E50Cu)) return;
    // 80B3E50C: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80B3E510:
    ctx->pc = 0x80B3E510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E510u)) return;
    // 80B3E510: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80B3E514:
    ctx->pc = 0x80B3E514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E514u)) return;
    // 80B3E514: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80B3E518:
    ctx->pc = 0x80B3E518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E518u)) return;
    // 80B3E518: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80B3E51C:
    ctx->pc = 0x80B3E51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E51Cu)) return;
    // 80B3E51C: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80B3E520:
    ctx->pc = 0x80B3E520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E520u)) return;
    // 80B3E520: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80B3E524:
    ctx->pc = 0x80B3E524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E524u)) return;
    // 80B3E524: bl      0x80B3E540
    {
            ctx->lr = 0x80B3E528u;
            goto label_80B3E540;
    }

label_80B3E528:
    ctx->pc = 0x80B3E528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3E528: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80B3E52C:
    ctx->pc = 0x80B3E52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E52Cu)) return;
    // 80B3E52C: bl      0x80006E20
    {
            ctx->lr = 0x80B3E530u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80B3E530:
    ctx->pc = 0x80B3E530u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E530u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E530: lwz     r0, 68(r1)
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
label_80B3E534:
    ctx->pc = 0x80B3E534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3E534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E534: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E538:
    ctx->pc = 0x80B3E538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E538u)) return;
    // 80B3E538: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80B3E53C:
    ctx->pc = 0x80B3E53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E53Cu)) return;
    // 80B3E53C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E540:
    ctx->pc = 0x80B3E540u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E540u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E540: stwu     r1, -16(r1)
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
label_80B3E544:
    ctx->pc = 0x80B3E544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E544: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E548:
    ctx->pc = 0x80B3E548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E548: stw     r0, 20(r1)
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
label_80B3E54C:
    ctx->pc = 0x80B3E54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E54Cu)) return;
    // 80B3E54C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80B3E550:
    ctx->pc = 0x80B3E550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E550u)) return;
    // 80B3E550: bl      0x80607948
    {
            ctx->lr = 0x80B3E554u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80B3E554:
    ctx->pc = 0x80B3E554u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E554u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E554: lwz     r0, 20(r1)
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
label_80B3E558:
    ctx->pc = 0x80B3E558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3E558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E558: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E55C:
    ctx->pc = 0x80B3E55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E55Cu)) return;
    // 80B3E55C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3E560:
    ctx->pc = 0x80B3E560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E560u)) return;
    // 80B3E560: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E564:
    ctx->pc = 0x80B3E564u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E564u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B3E564: stwu     r1, -16(r1)
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
label_80B3E568:
    ctx->pc = 0x80B3E568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3E568: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E56C:
    ctx->pc = 0x80B3E56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E56Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B3E56C: stw     r0, 20(r1)
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
label_80B3E570:
    ctx->pc = 0x80B3E570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3E570: lwz     r5, 32(r3)
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
label_80B3E574:
    ctx->pc = 0x80B3E574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3E574: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3E574u)) return;
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
label_80B3E578:
    ctx->pc = 0x80B3E578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E578: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3E578u)) return;
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
label_80B3E57C:
    ctx->pc = 0x80B3E57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E57Cu)) return;
    // 80B3E57C: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B3E57Cu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80B3E580:
    ctx->pc = 0x80B3E580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E580u)) return;
    // 80B3E580: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3E584:
    ctx->pc = 0x80B3E584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E584u)) return;
    // 80B3E584: addi    r4, r4, 8216
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8216);

label_80B3E588:
    ctx->pc = 0x80B3E588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E588u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E588: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3E588u)) return;
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
label_80B3E58C:
    ctx->pc = 0x80B3E58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E58Cu)) return;
    // 80B3E58C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B3E58Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80B3E590:
    ctx->pc = 0x80B3E590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E590u)) return;
    // 80B3E590: bc    4, 1, 0x80B3E59C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3E59C;
        }
    }

label_80B3E594:
    ctx->pc = 0x80B3E594u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E594u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3E594: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B3E594u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80B3E598:
    ctx->pc = 0x80B3E598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E598u)) return;
    // 80B3E598: b       0x80B3E5B4
    {
            goto label_80B3E5B4;
    }

label_80B3E59C:
    ctx->pc = 0x80B3E59Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E59Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3E59C: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3E5A0:
    ctx->pc = 0x80B3E5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E5A0u)) return;
    // 80B3E5A0: addi    r4, r4, 8204
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8204);

label_80B3E5A4:
    ctx->pc = 0x80B3E5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E5A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E5A4: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3E5A4u)) return;
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
label_80B3E5A8:
    ctx->pc = 0x80B3E5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E5A8u)) return;
    // 80B3E5A8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B3E5A8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80B3E5AC:
    ctx->pc = 0x80B3E5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E5ACu)) return;
    // 80B3E5AC: bc    4, 0, 0x80B3E5B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3E5B4;
        }
    }

label_80B3E5B0:
    ctx->pc = 0x80B3E5B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E5B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3E5B0: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B3E5B0u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80B3E5B4:
    ctx->pc = 0x80B3E5B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E5B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3E5B4: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3E5B4u)) return;
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
label_80B3E5B8:
    ctx->pc = 0x80B3E5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E5B8u)) return;
    // 80B3E5B8: bl      0x80B3E3EC
    {
            ctx->lr = 0x80B3E5BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B3E3ECu;
                return;
            }
            goto label_80B3E3EC;
    }

label_80B3E5BC:
    ctx->pc = 0x80B3E5BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E5BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E5BC: lwz     r0, 20(r1)
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
label_80B3E5C0:
    ctx->pc = 0x80B3E5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3E5C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E5C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E5C4:
    ctx->pc = 0x80B3E5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E5C4u)) return;
    // 80B3E5C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3E5C8:
    ctx->pc = 0x80B3E5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E5C8u)) return;
    // 80B3E5C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E5CC:
    ctx->pc = 0x80B3E5CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E5CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3E5CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E5D0:
    ctx->pc = 0x80B3E5D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E5D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B3E5D0: stwu     r1, -16(r1)
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
label_80B3E5D4:
    ctx->pc = 0x80B3E5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E5D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B3E5D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E5D8:
    ctx->pc = 0x80B3E5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E5D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3E5D8: stw     r0, 20(r1)
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
label_80B3E5DC:
    ctx->pc = 0x80B3E5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E5DCu)) return;
    // 80B3E5DC: lis     r4, -32588
    ctx->gpr[4] = ((u32)(s32)(-32588) << 16);

label_80B3E5E0:
    ctx->pc = 0x80B3E5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E5E0u)) return;
    // 80B3E5E0: addi    r0, r4, -6812
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-6812);

label_80B3E5E4:
    ctx->pc = 0x80B3E5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E5E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3E5E4: stw     r0, 16(r3)
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
label_80B3E5E8:
    ctx->pc = 0x80B3E5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E5E8u)) return;
    // 80B3E5E8: lis     r4, -32588
    ctx->gpr[4] = ((u32)(s32)(-32588) << 16);

label_80B3E5EC:
    ctx->pc = 0x80B3E5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E5ECu)) return;
    // 80B3E5EC: addi    r0, r4, -7188
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-7188);

label_80B3E5F0:
    ctx->pc = 0x80B3E5F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E5F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E5F0: stw     r0, 20(r3)
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
label_80B3E5F4:
    ctx->pc = 0x80B3E5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E5F4u)) return;
    // 80B3E5F4: lis     r4, -32588
    ctx->gpr[4] = ((u32)(s32)(-32588) << 16);

label_80B3E5F8:
    ctx->pc = 0x80B3E5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E5F8u)) return;
    // 80B3E5F8: addi    r0, r4, -6708
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-6708);

label_80B3E5FC:
    ctx->pc = 0x80B3E5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E5FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3E5FC: stw     r0, 24(r3)
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
label_80B3E600:
    ctx->pc = 0x80B3E600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E600u)) return;
    // 80B3E600: bl      0x80B3E564
    {
            ctx->lr = 0x80B3E604u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B3E564u;
                return;
            }
            goto label_80B3E564;
    }

label_80B3E604:
    ctx->pc = 0x80B3E604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E604: lwz     r0, 20(r1)
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
label_80B3E608:
    ctx->pc = 0x80B3E608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3E608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E608: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E60C:
    ctx->pc = 0x80B3E60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E60Cu)) return;
    // 80B3E60C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3E610:
    ctx->pc = 0x80B3E610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E610u)) return;
    // 80B3E610: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E614:
    ctx->pc = 0x80B3E614u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E614u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80B3E614: stwu     r1, -96(r1)
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
label_80B3E618:
    ctx->pc = 0x80B3E618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80B3E618: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E61C:
    ctx->pc = 0x80B3E61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E61Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80B3E61C: stw     r0, 100(r1)
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
label_80B3E620:
    ctx->pc = 0x80B3E620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80B3E620: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B3E620u)) return;
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
label_80B3E624:
    ctx->pc = 0x80B3E624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80B3E624: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B3E624u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80B3E624u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E628:
    ctx->pc = 0x80B3E628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80B3E628: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B3E628u)) return;
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
label_80B3E62C:
    ctx->pc = 0x80B3E62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E62Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B3E62C: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B3E62Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80B3E62Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E630:
    ctx->pc = 0x80B3E630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E630u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B3E630: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B3E630u)) return;
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
label_80B3E634:
    ctx->pc = 0x80B3E634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B3E634: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B3E634u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80B3E634u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E638:
    ctx->pc = 0x80B3E638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B3E638: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B3E638u)) return;
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
label_80B3E63C:
    ctx->pc = 0x80B3E63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E63Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B3E63C: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B3E63Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80B3E63Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E640:
    ctx->pc = 0x80B3E640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B3E640: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B3E640u)) return;
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
label_80B3E644:
    ctx->pc = 0x80B3E644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3E644: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B3E644u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80B3E644u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E648:
    ctx->pc = 0x80B3E648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E648u)) return;
    // 80B3E648: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80B3E648u)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80B3E64C:
    ctx->pc = 0x80B3E64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E64Cu)) return;
    // 80B3E64C: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80B3E64Cu)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80B3E650:
    ctx->pc = 0x80B3E650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E650u)) return;
    // 80B3E650: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80B3E650u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80B3E654:
    ctx->pc = 0x80B3E654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E654u)) return;
    // 80B3E654: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80B3E654u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80B3E658:
    ctx->pc = 0x80B3E658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E658u)) return;
    // 80B3E658: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80B3E658u)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80B3E65C:
    ctx->pc = 0x80B3E65Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E65Cu)) return;
    // 80B3E65C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3E660:
    ctx->pc = 0x80B3E660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E660u)) return;
    // 80B3E660: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80B3E664:
    ctx->pc = 0x80B3E664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E664u)) return;
    // 80B3E664: lis     r5, -32588
    ctx->gpr[5] = ((u32)(s32)(-32588) << 16);

label_80B3E668:
    ctx->pc = 0x80B3E668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E668u)) return;
    // 80B3E668: addi    r5, r5, -6704
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-6704);

label_80B3E66C:
    ctx->pc = 0x80B3E66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E66Cu)) return;
    // 80B3E66C: bl      0x8050FD60
    {
            ctx->lr = 0x80B3E670u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80B3E670:
    ctx->pc = 0x80B3E670u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E670u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80B3E670: lwz     r5, 32(r3)
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
label_80B3E674:
    ctx->pc = 0x80B3E674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80B3E674: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3E674u)) return;
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
label_80B3E678:
    ctx->pc = 0x80B3E678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80B3E678: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3E678u)) return;
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
label_80B3E67C:
    ctx->pc = 0x80B3E67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E67Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80B3E67C: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3E67Cu)) return;
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
label_80B3E680:
    ctx->pc = 0x80B3E680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E680u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80B3E680: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3E680u)) return;
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
label_80B3E684:
    ctx->pc = 0x80B3E684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E684u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80B3E684: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3E684u)) return;
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
label_80B3E688:
    ctx->pc = 0x80B3E688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E688u)) return;
    // 80B3E688: lis     r4, -27572
    ctx->gpr[4] = ((u32)(s32)(-27572) << 16);

label_80B3E68C:
    ctx->pc = 0x80B3E68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E68Cu)) return;
    // 80B3E68C: addi    r4, r4, 8200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8200);

label_80B3E690:
    ctx->pc = 0x80B3E690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B3E690: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3E690u)) return;
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
label_80B3E694:
    ctx->pc = 0x80B3E694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B3E694: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3E694u)) return;
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
label_80B3E698:
    ctx->pc = 0x80B3E698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B3E698: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B3E698u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80B3E698u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E69C:
    ctx->pc = 0x80B3E69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E69Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B3E69C: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B3E69Cu)) return;
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
label_80B3E6A0:
    ctx->pc = 0x80B3E6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E6A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B3E6A0: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B3E6A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80B3E6A0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E6A4:
    ctx->pc = 0x80B3E6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E6A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B3E6A4: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B3E6A4u)) return;
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
label_80B3E6A8:
    ctx->pc = 0x80B3E6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E6A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3E6A8: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B3E6A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80B3E6A8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E6AC:
    ctx->pc = 0x80B3E6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E6ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B3E6AC: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B3E6ACu)) return;
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
label_80B3E6B0:
    ctx->pc = 0x80B3E6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E6B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3E6B0: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B3E6B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80B3E6B0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E6B4:
    ctx->pc = 0x80B3E6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E6B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3E6B4: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B3E6B4u)) return;
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
label_80B3E6B8:
    ctx->pc = 0x80B3E6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E6B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E6B8: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B3E6B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80B3E6B8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E6BC:
    ctx->pc = 0x80B3E6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E6BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E6BC: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B3E6BCu)) return;
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
label_80B3E6C0:
    ctx->pc = 0x80B3E6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E6C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E6C0: lwz     r0, 100(r1)
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
label_80B3E6C4:
    ctx->pc = 0x80B3E6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3E6C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E6C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E6C8:
    ctx->pc = 0x80B3E6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E6C8u)) return;
    // 80B3E6C8: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80B3E6CC:
    ctx->pc = 0x80B3E6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E6CCu)) return;
    // 80B3E6CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E6D0:
    ctx->pc = 0x80B3E6D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E6D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E6D0: lwz     r3, 32(r3)
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
label_80B3E6D4:
    ctx->pc = 0x80B3E6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E6D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3E6D4: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E6D4u)) return;
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
label_80B3E6D8:
    ctx->pc = 0x80B3E6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E6D8u)) return;
    // 80B3E6D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E6DC:
    ctx->pc = 0x80B3E6DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E6DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E6DC: lwz     r3, 32(r3)
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
label_80B3E6E0:
    ctx->pc = 0x80B3E6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E6E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3E6E0: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E6E0u)) return;
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
label_80B3E6E4:
    ctx->pc = 0x80B3E6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E6E4u)) return;
    // 80B3E6E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E6E8:
    ctx->pc = 0x80B3E6E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E6E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E6E8: lwz     r3, 32(r3)
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
label_80B3E6EC:
    ctx->pc = 0x80B3E6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E6ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E6EC: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E6ECu)) return;
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
label_80B3E6F0:
    ctx->pc = 0x80B3E6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E6F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E6F0: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E6F0u)) return;
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
label_80B3E6F4:
    ctx->pc = 0x80B3E6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E6F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3E6F4: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E6F4u)) return;
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
label_80B3E6F8:
    ctx->pc = 0x80B3E6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E6F8u)) return;
    // 80B3E6F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E6FC:
    ctx->pc = 0x80B3E6FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E6FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E6FC: lwz     r3, 32(r3)
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
label_80B3E700:
    ctx->pc = 0x80B3E700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3E700: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3E700u)) return;
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
label_80B3E704:
    ctx->pc = 0x80B3E704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E704u)) return;
    // 80B3E704: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E708:
    ctx->pc = 0x80B3E708u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E708u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E708: stwu     r1, -16(r1)
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
label_80B3E70C:
    ctx->pc = 0x80B3E70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E70Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E70C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E710:
    ctx->pc = 0x80B3E710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E710: stw     r0, 20(r1)
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
label_80B3E714:
    ctx->pc = 0x80B3E714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E714: lwz     r3, 32(r3)
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
label_80B3E718:
    ctx->pc = 0x80B3E718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3E718: lwz     r3, 16(r3)
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
label_80B3E71C:
    ctx->pc = 0x80B3E71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E71Cu)) return;
    // 80B3E71C: bl      0x80509CF0
    {
            ctx->lr = 0x80B3E720u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80B3E720:
    ctx->pc = 0x80B3E720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E720: lwz     r0, 20(r1)
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
label_80B3E724:
    ctx->pc = 0x80B3E724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3E724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E724: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E728:
    ctx->pc = 0x80B3E728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E728u)) return;
    // 80B3E728: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3E72C:
    ctx->pc = 0x80B3E72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E72Cu)) return;
    // 80B3E72C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E730:
    ctx->pc = 0x80B3E730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3E730: stwu     r1, -32(r1)
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
label_80B3E734:
    ctx->pc = 0x80B3E734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B3E734: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E738:
    ctx->pc = 0x80B3E738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3E738: stw     r0, 36(r1)
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
label_80B3E73C:
    ctx->pc = 0x80B3E73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E73Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3E73C: stw     r31, 28(r1)
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
label_80B3E740:
    ctx->pc = 0x80B3E740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E740: stw     r30, 24(r1)
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
label_80B3E744:
    ctx->pc = 0x80B3E744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E744: stw     r29, 20(r1)
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
label_80B3E748:
    ctx->pc = 0x80B3E748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E748: lwz     r31, 32(r3)
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
label_80B3E74C:
    ctx->pc = 0x80B3E74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E74Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E74C: lwz     r30, 16(r31)
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
label_80B3E750:
    ctx->pc = 0x80B3E750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E750: lwz     r5, 28(r31)
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
label_80B3E754:
    ctx->pc = 0x80B3E754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E754u)) return;
    // 80B3E754: cmpwi   r5, 0
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

label_80B3E758:
    ctx->pc = 0x80B3E758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E758u)) return;
    // 80B3E758: bc    4, 1, 0x80B3E790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3E790;
        }
    }

label_80B3E75C:
    ctx->pc = 0x80B3E75Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E75Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80B3E75C: lwz     r4, 24(r31)
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
label_80B3E760:
    ctx->pc = 0x80B3E760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E760u)) return;
    // 80B3E760: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80B3E764:
    ctx->pc = 0x80B3E764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80B3E764: lwz     r0, 20(r31)
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
label_80B3E768:
    ctx->pc = 0x80B3E768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80B3E768u)) return;
    // 80B3E768: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80B3E76C:
    ctx->pc = 0x80B3E76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E76Cu)) return;
    // 80B3E76C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80B3E770:
    ctx->pc = 0x80B3E770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80B3E770u)) return;
    // 80B3E770: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80B3E774:
    ctx->pc = 0x80B3E774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E774u)) return;
    // 80B3E774: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B3E778:
    ctx->pc = 0x80B3E778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E778u)) return;
    // 80B3E778: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B3E77C:
    ctx->pc = 0x80B3E77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E77Cu)) return;
    // 80B3E77C: bl      0x80509C74
    {
            ctx->lr = 0x80B3E780u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80B3E780:
    ctx->pc = 0x80B3E780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E780: stw     r29, 20(r31)
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
label_80B3E784:
    ctx->pc = 0x80B3E784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E784: lwz     r3, 28(r31)
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
label_80B3E788:
    ctx->pc = 0x80B3E788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E788u)) return;
    // 80B3E788: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80B3E78C:
    ctx->pc = 0x80B3E78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E78Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3E78C: stw     r0, 28(r31)
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
label_80B3E790:
    ctx->pc = 0x80B3E790u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E790u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E790: lwz     r5, 40(r31)
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
label_80B3E794:
    ctx->pc = 0x80B3E794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E794u)) return;
    // 80B3E794: cmpwi   r5, 0
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

label_80B3E798:
    ctx->pc = 0x80B3E798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E798u)) return;
    // 80B3E798: bc    4, 1, 0x80B3E7D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3E7D0;
        }
    }

label_80B3E79C:
    ctx->pc = 0x80B3E79Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E79Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80B3E79C: lwz     r4, 36(r31)
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
label_80B3E7A0:
    ctx->pc = 0x80B3E7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E7A0u)) return;
    // 80B3E7A0: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80B3E7A4:
    ctx->pc = 0x80B3E7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E7A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80B3E7A4: lwz     r0, 32(r31)
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
label_80B3E7A8:
    ctx->pc = 0x80B3E7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80B3E7A8u)) return;
    // 80B3E7A8: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80B3E7AC:
    ctx->pc = 0x80B3E7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E7ACu)) return;
    // 80B3E7AC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80B3E7B0:
    ctx->pc = 0x80B3E7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80B3E7B0u)) return;
    // 80B3E7B0: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80B3E7B4:
    ctx->pc = 0x80B3E7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E7B4u)) return;
    // 80B3E7B4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B3E7B8:
    ctx->pc = 0x80B3E7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E7B8u)) return;
    // 80B3E7B8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B3E7BC:
    ctx->pc = 0x80B3E7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E7BCu)) return;
    // 80B3E7BC: bl      0x80509BF8
    {
            ctx->lr = 0x80B3E7C0u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80B3E7C0:
    ctx->pc = 0x80B3E7C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E7C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E7C0: stw     r29, 32(r31)
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
label_80B3E7C4:
    ctx->pc = 0x80B3E7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E7C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E7C4: lwz     r3, 40(r31)
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
label_80B3E7C8:
    ctx->pc = 0x80B3E7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E7C8u)) return;
    // 80B3E7C8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80B3E7CC:
    ctx->pc = 0x80B3E7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E7CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3E7CC: stw     r0, 40(r31)
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
label_80B3E7D0:
    ctx->pc = 0x80B3E7D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E7D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E7D0: lwz     r5, 52(r31)
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
label_80B3E7D4:
    ctx->pc = 0x80B3E7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E7D4u)) return;
    // 80B3E7D4: cmpwi   r5, 0
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

label_80B3E7D8:
    ctx->pc = 0x80B3E7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E7D8u)) return;
    // 80B3E7D8: bc    4, 1, 0x80B3E810
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3E810;
        }
    }

label_80B3E7DC:
    ctx->pc = 0x80B3E7DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E7DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80B3E7DC: lwz     r4, 48(r31)
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
label_80B3E7E0:
    ctx->pc = 0x80B3E7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E7E0u)) return;
    // 80B3E7E0: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80B3E7E4:
    ctx->pc = 0x80B3E7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E7E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80B3E7E4: lwz     r0, 44(r31)
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
label_80B3E7E8:
    ctx->pc = 0x80B3E7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80B3E7E8u)) return;
    // 80B3E7E8: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80B3E7EC:
    ctx->pc = 0x80B3E7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E7ECu)) return;
    // 80B3E7EC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80B3E7F0:
    ctx->pc = 0x80B3E7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80B3E7F0u)) return;
    // 80B3E7F0: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80B3E7F4:
    ctx->pc = 0x80B3E7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E7F4u)) return;
    // 80B3E7F4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B3E7F8:
    ctx->pc = 0x80B3E7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E7F8u)) return;
    // 80B3E7F8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B3E7FC:
    ctx->pc = 0x80B3E7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E7FCu)) return;
    // 80B3E7FC: bl      0x80509B94
    {
            ctx->lr = 0x80B3E800u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80B3E800:
    ctx->pc = 0x80B3E800u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E800u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E800: stw     r29, 44(r31)
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
label_80B3E804:
    ctx->pc = 0x80B3E804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E804: lwz     r3, 52(r31)
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
label_80B3E808:
    ctx->pc = 0x80B3E808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E808u)) return;
    // 80B3E808: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80B3E80C:
    ctx->pc = 0x80B3E80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E80Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3E80C: stw     r0, 52(r31)
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
label_80B3E810:
    ctx->pc = 0x80B3E810u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E810u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3E810: lwz     r31, 28(r1)
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
label_80B3E814:
    ctx->pc = 0x80B3E814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E814: lwz     r30, 24(r1)
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
label_80B3E818:
    ctx->pc = 0x80B3E818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E818: lwz     r29, 20(r1)
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
label_80B3E81C:
    ctx->pc = 0x80B3E81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E81Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E81C: lwz     r0, 36(r1)
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
label_80B3E820:
    ctx->pc = 0x80B3E820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3E820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E820: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E824:
    ctx->pc = 0x80B3E824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E824u)) return;
    // 80B3E824: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B3E828:
    ctx->pc = 0x80B3E828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E828u)) return;
    // 80B3E828: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E82C:
    ctx->pc = 0x80B3E82Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E82Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B3E82C: stwu     r1, -32(r1)
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
label_80B3E830:
    ctx->pc = 0x80B3E830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E830u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3E830: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E834:
    ctx->pc = 0x80B3E834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B3E834: stw     r0, 36(r1)
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
label_80B3E838:
    ctx->pc = 0x80B3E838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3E838: stw     r31, 28(r1)
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
label_80B3E83C:
    ctx->pc = 0x80B3E83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E83Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3E83C: stw     r30, 24(r1)
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
label_80B3E840:
    ctx->pc = 0x80B3E840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E840: stw     r29, 20(r1)
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
label_80B3E844:
    ctx->pc = 0x80B3E844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E844u)) return;
    // 80B3E844: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B3E848:
    ctx->pc = 0x80B3E848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E848u)) return;
    // 80B3E848: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B3E84C:
    ctx->pc = 0x80B3E84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E84Cu)) return;
    // 80B3E84C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3E850:
    ctx->pc = 0x80B3E850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E850u)) return;
    // 80B3E850: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80B3E854:
    ctx->pc = 0x80B3E854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E854u)) return;
    // 80B3E854: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B3E858:
    ctx->pc = 0x80B3E858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E858u)) return;
    // 80B3E858: bl      0x8050FD60
    {
            ctx->lr = 0x80B3E85Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80B3E85C:
    ctx->pc = 0x80B3E85Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E85Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3E85C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B3E860:
    ctx->pc = 0x80B3E860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E860u)) return;
    // 80B3E860: cmplwi  r31, 0x0000
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

label_80B3E864:
    ctx->pc = 0x80B3E864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E864u)) return;
    // 80B3E864: bc    12, 2, 0x80B3E8C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3E8C8;
        }
    }

label_80B3E868:
    ctx->pc = 0x80B3E868u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E868u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B3E868: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B3E86C:
    ctx->pc = 0x80B3E86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E86Cu)) return;
    // 80B3E86C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B3E870:
    ctx->pc = 0x80B3E870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E870u)) return;
    // 80B3E870: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80B3E874:
    ctx->pc = 0x80B3E874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E874u)) return;
    // 80B3E874: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B3E878:
    ctx->pc = 0x80B3E878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E878u)) return;
    // 80B3E878: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B3E87C:
    ctx->pc = 0x80B3E87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E87Cu)) return;
    // 80B3E87C: bl      0x8050A0D4
    {
            ctx->lr = 0x80B3E880u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80B3E880:
    ctx->pc = 0x80B3E880u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E880u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80B3E880: lis     r3, -32588
    ctx->gpr[3] = ((u32)(s32)(-32588) << 16);

label_80B3E884:
    ctx->pc = 0x80B3E884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E884u)) return;
    // 80B3E884: addi    r0, r3, -6352
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-6352);

label_80B3E888:
    ctx->pc = 0x80B3E888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B3E888: stw     r0, 16(r31)
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
label_80B3E88C:
    ctx->pc = 0x80B3E88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E88Cu)) return;
    // 80B3E88C: lis     r3, -32588
    ctx->gpr[3] = ((u32)(s32)(-32588) << 16);

label_80B3E890:
    ctx->pc = 0x80B3E890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E890u)) return;
    // 80B3E890: addi    r0, r3, -6392
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-6392);

label_80B3E894:
    ctx->pc = 0x80B3E894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B3E894: stw     r0, 24(r31)
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
label_80B3E898:
    ctx->pc = 0x80B3E898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B3E898: lwz     r3, 32(r31)
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
label_80B3E89C:
    ctx->pc = 0x80B3E89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E89Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3E89C: stw     r31, 16(r3)
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
label_80B3E8A0:
    ctx->pc = 0x80B3E8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8A0u)) return;
    // 80B3E8A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B3E8A4:
    ctx->pc = 0x80B3E8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3E8A4: stw     r0, 20(r3)
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
label_80B3E8A8:
    ctx->pc = 0x80B3E8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3E8A8: stw     r0, 24(r3)
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
label_80B3E8AC:
    ctx->pc = 0x80B3E8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E8AC: stw     r0, 28(r3)
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
label_80B3E8B0:
    ctx->pc = 0x80B3E8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E8B0: stw     r0, 32(r3)
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
label_80B3E8B4:
    ctx->pc = 0x80B3E8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E8B4: stw     r0, 36(r3)
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
label_80B3E8B8:
    ctx->pc = 0x80B3E8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E8B8: stw     r0, 40(r3)
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
label_80B3E8BC:
    ctx->pc = 0x80B3E8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E8BC: stw     r0, 44(r3)
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
label_80B3E8C0:
    ctx->pc = 0x80B3E8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3E8C0: stw     r0, 48(r3)
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
label_80B3E8C4:
    ctx->pc = 0x80B3E8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3E8C4: stw     r0, 52(r3)
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
label_80B3E8C8:
    ctx->pc = 0x80B3E8C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E8C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3E8C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B3E8CC:
    ctx->pc = 0x80B3E8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3E8CC: lwz     r31, 28(r1)
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
label_80B3E8D0:
    ctx->pc = 0x80B3E8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E8D0: lwz     r30, 24(r1)
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
label_80B3E8D4:
    ctx->pc = 0x80B3E8D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E8D4: lwz     r29, 20(r1)
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
label_80B3E8D8:
    ctx->pc = 0x80B3E8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E8D8: lwz     r0, 36(r1)
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
label_80B3E8DC:
    ctx->pc = 0x80B3E8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3E8DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E8DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E8E0:
    ctx->pc = 0x80B3E8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8E0u)) return;
    // 80B3E8E0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B3E8E4:
    ctx->pc = 0x80B3E8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8E4u)) return;
    // 80B3E8E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E8E8:
    ctx->pc = 0x80B3E8E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E8E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3E8E8: stwu     r1, -16(r1)
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
label_80B3E8EC:
    ctx->pc = 0x80B3E8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B3E8EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E8F0:
    ctx->pc = 0x80B3E8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3E8F0: stw     r0, 20(r1)
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
label_80B3E8F4:
    ctx->pc = 0x80B3E8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3E8F4: stw     r31, 12(r1)
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
label_80B3E8F8:
    ctx->pc = 0x80B3E8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E8F8: stw     r30, 8(r1)
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
label_80B3E8FC:
    ctx->pc = 0x80B3E8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E8FCu)) return;
    // 80B3E8FC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B3E900:
    ctx->pc = 0x80B3E900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E900u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E900: lwz     r31, 32(r3)
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
label_80B3E904:
    ctx->pc = 0x80B3E904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E904: stw     r30, 24(r31)
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
label_80B3E908:
    ctx->pc = 0x80B3E908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E908u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E908: stw     r5, 28(r31)
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
label_80B3E90C:
    ctx->pc = 0x80B3E90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E90Cu)) return;
    // 80B3E90C: cmpwi   r5, 0
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

label_80B3E910:
    ctx->pc = 0x80B3E910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E910u)) return;
    // 80B3E910: bc    12, 1, 0x80B3E920
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3E920;
        }
    }

label_80B3E914:
    ctx->pc = 0x80B3E914u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E914u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3E914: lwz     r3, 16(r31)
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
label_80B3E918:
    ctx->pc = 0x80B3E918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E918u)) return;
    // 80B3E918: bl      0x80509C74
    {
            ctx->lr = 0x80B3E91Cu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80B3E91C:
    ctx->pc = 0x80B3E91Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E91Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3E91C: stw     r30, 20(r31)
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
label_80B3E920:
    ctx->pc = 0x80B3E920u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E920u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E920: lwz     r31, 12(r1)
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
label_80B3E924:
    ctx->pc = 0x80B3E924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E924: lwz     r30, 8(r1)
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
label_80B3E928:
    ctx->pc = 0x80B3E928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E928u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E928: lwz     r0, 20(r1)
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
label_80B3E92C:
    ctx->pc = 0x80B3E92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3E92Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E92C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E930:
    ctx->pc = 0x80B3E930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E930u)) return;
    // 80B3E930: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3E934:
    ctx->pc = 0x80B3E934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E934u)) return;
    // 80B3E934: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E938:
    ctx->pc = 0x80B3E938u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E938u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3E938: stwu     r1, -16(r1)
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
label_80B3E93C:
    ctx->pc = 0x80B3E93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E93Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B3E93C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E940:
    ctx->pc = 0x80B3E940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3E940: stw     r0, 20(r1)
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
label_80B3E944:
    ctx->pc = 0x80B3E944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3E944: stw     r31, 12(r1)
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
label_80B3E948:
    ctx->pc = 0x80B3E948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E948u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E948: stw     r30, 8(r1)
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
label_80B3E94C:
    ctx->pc = 0x80B3E94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E94Cu)) return;
    // 80B3E94C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B3E950:
    ctx->pc = 0x80B3E950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E950: lwz     r31, 32(r3)
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
label_80B3E954:
    ctx->pc = 0x80B3E954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E954: stw     r30, 36(r31)
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
label_80B3E958:
    ctx->pc = 0x80B3E958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E958: stw     r5, 40(r31)
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
label_80B3E95C:
    ctx->pc = 0x80B3E95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E95Cu)) return;
    // 80B3E95C: cmpwi   r5, 0
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

label_80B3E960:
    ctx->pc = 0x80B3E960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E960u)) return;
    // 80B3E960: bc    12, 1, 0x80B3E970
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3E970;
        }
    }

label_80B3E964:
    ctx->pc = 0x80B3E964u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E964u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3E964: lwz     r3, 16(r31)
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
label_80B3E968:
    ctx->pc = 0x80B3E968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E968u)) return;
    // 80B3E968: bl      0x80509BF8
    {
            ctx->lr = 0x80B3E96Cu;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80B3E96C:
    ctx->pc = 0x80B3E96Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E96Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3E96C: stw     r30, 32(r31)
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
label_80B3E970:
    ctx->pc = 0x80B3E970u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E970u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E970: lwz     r31, 12(r1)
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
label_80B3E974:
    ctx->pc = 0x80B3E974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E974u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E974: lwz     r30, 8(r1)
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
label_80B3E978:
    ctx->pc = 0x80B3E978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E978u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E978: lwz     r0, 20(r1)
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
label_80B3E97C:
    ctx->pc = 0x80B3E97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3E97Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E97C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E980:
    ctx->pc = 0x80B3E980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E980u)) return;
    // 80B3E980: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3E984:
    ctx->pc = 0x80B3E984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E984u)) return;
    // 80B3E984: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E988:
    ctx->pc = 0x80B3E988u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E988u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3E988: stwu     r1, -16(r1)
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
label_80B3E98C:
    ctx->pc = 0x80B3E98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E98Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B3E98C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E990:
    ctx->pc = 0x80B3E990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3E990: stw     r0, 20(r1)
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
label_80B3E994:
    ctx->pc = 0x80B3E994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3E994: stw     r31, 12(r1)
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
label_80B3E998:
    ctx->pc = 0x80B3E998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E998: stw     r30, 8(r1)
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
label_80B3E99C:
    ctx->pc = 0x80B3E99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E99Cu)) return;
    // 80B3E99C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B3E9A0:
    ctx->pc = 0x80B3E9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E9A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E9A0: lwz     r31, 32(r3)
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
label_80B3E9A4:
    ctx->pc = 0x80B3E9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E9A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3E9A4: stw     r30, 48(r31)
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
label_80B3E9A8:
    ctx->pc = 0x80B3E9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E9A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E9A8: stw     r5, 52(r31)
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
label_80B3E9AC:
    ctx->pc = 0x80B3E9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E9ACu)) return;
    // 80B3E9AC: cmpwi   r5, 0
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

label_80B3E9B0:
    ctx->pc = 0x80B3E9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E9B0u)) return;
    // 80B3E9B0: bc    12, 1, 0x80B3E9C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3E9C0;
        }
    }

label_80B3E9B4:
    ctx->pc = 0x80B3E9B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E9B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3E9B4: lwz     r3, 16(r31)
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
label_80B3E9B8:
    ctx->pc = 0x80B3E9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E9B8u)) return;
    // 80B3E9B8: bl      0x80509B94
    {
            ctx->lr = 0x80B3E9BCu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80B3E9BC:
    ctx->pc = 0x80B3E9BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E9BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3E9BC: stw     r30, 44(r31)
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
label_80B3E9C0:
    ctx->pc = 0x80B3E9C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E9C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E9C0: lwz     r31, 12(r1)
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
label_80B3E9C4:
    ctx->pc = 0x80B3E9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E9C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3E9C4: lwz     r30, 8(r1)
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
label_80B3E9C8:
    ctx->pc = 0x80B3E9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E9C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3E9C8: lwz     r0, 20(r1)
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
label_80B3E9CC:
    ctx->pc = 0x80B3E9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3E9CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E9CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E9D0:
    ctx->pc = 0x80B3E9D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E9D0u)) return;
    // 80B3E9D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3E9D4:
    ctx->pc = 0x80B3E9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E9D4u)) return;
    // 80B3E9D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3E9D8:
    ctx->pc = 0x80B3E9D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3E9D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B3E9D8: stwu     r1, -16(r1)
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
label_80B3E9DC:
    ctx->pc = 0x80B3E9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E9DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3E9DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3E9E0:
    ctx->pc = 0x80B3E9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E9E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3E9E0: stw     r0, 20(r1)
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
label_80B3E9E4:
    ctx->pc = 0x80B3E9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E9E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3E9E4: stw     r31, 12(r1)
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
label_80B3E9E8:
    ctx->pc = 0x80B3E9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E9E8u)) return;
    // 80B3E9E8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B3E9EC:
    ctx->pc = 0x80B3E9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E9ECu)) return;
    // 80B3E9EC: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3E9F0:
    ctx->pc = 0x80B3E9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E9F0u)) return;
    // 80B3E9F0: addi    r4, r4, 3092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3092);

label_80B3E9F4:
    ctx->pc = 0x80B3E9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E9F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3E9F4: lwz     r0, 0(r4)
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
label_80B3E9F8:
    ctx->pc = 0x80B3E9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E9F8u)) return;
    // 80B3E9F8: cmplwi  r0, 0x0000
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

label_80B3E9FC:
    ctx->pc = 0x80B3E9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3E9FCu)) return;
    // 80B3E9FC: bc    4, 2, 0x80B3EA20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3EA20;
        }
    }

label_80B3EA00:
    ctx->pc = 0x80B3EA00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EA00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3EA00: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80B3EA04:
    ctx->pc = 0x80B3EA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA04u)) return;
    // 80B3EA04: bl      0x8050EEC0
    {
            ctx->lr = 0x80B3EA08u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80B3EA08:
    ctx->pc = 0x80B3EA08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EA08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B3EA08: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3EA0C:
    ctx->pc = 0x80B3EA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA0Cu)) return;
    // 80B3EA0C: addi    r4, r4, 3092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3092);

label_80B3EA10:
    ctx->pc = 0x80B3EA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3EA10: stw     r3, 0(r4)
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
label_80B3EA14:
    ctx->pc = 0x80B3EA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA14u)) return;
    // 80B3EA14: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3EA18:
    ctx->pc = 0x80B3EA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA18u)) return;
    // 80B3EA18: addi    r3, r3, 3088
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3088);

label_80B3EA1C:
    ctx->pc = 0x80B3EA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3EA1C: stw     r31, 0(r3)
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
label_80B3EA20:
    ctx->pc = 0x80B3EA20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EA20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3EA20: lwz     r31, 12(r1)
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
label_80B3EA24:
    ctx->pc = 0x80B3EA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3EA24: lwz     r0, 20(r1)
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
label_80B3EA28:
    ctx->pc = 0x80B3EA28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3EA28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EA28: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EA2C:
    ctx->pc = 0x80B3EA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA2Cu)) return;
    // 80B3EA2C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3EA30:
    ctx->pc = 0x80B3EA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA30u)) return;
    // 80B3EA30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3EA34:
    ctx->pc = 0x80B3EA34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EA34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B3EA34: stwu     r1, -32(r1)
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
label_80B3EA38:
    ctx->pc = 0x80B3EA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3EA38: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EA3C:
    ctx->pc = 0x80B3EA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B3EA3C: stw     r0, 36(r1)
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
label_80B3EA40:
    ctx->pc = 0x80B3EA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3EA40: stw     r31, 28(r1)
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
label_80B3EA44:
    ctx->pc = 0x80B3EA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3EA44: stw     r30, 24(r1)
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
label_80B3EA48:
    ctx->pc = 0x80B3EA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3EA48: stw     r29, 20(r1)
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
label_80B3EA4C:
    ctx->pc = 0x80B3EA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3EA4C: stw     r28, 16(r1)
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
label_80B3EA50:
    ctx->pc = 0x80B3EA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA50u)) return;
    // 80B3EA50: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3EA54:
    ctx->pc = 0x80B3EA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA54u)) return;
    // 80B3EA54: addi    r30, r3, 3092
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(3092);

label_80B3EA58:
    ctx->pc = 0x80B3EA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EA58: lwz     r0, 0(r30)
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
label_80B3EA5C:
    ctx->pc = 0x80B3EA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA5Cu)) return;
    // 80B3EA5C: cmplwi  r0, 0x0000
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

label_80B3EA60:
    ctx->pc = 0x80B3EA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA60u)) return;
    // 80B3EA60: bc    12, 2, 0x80B3EAC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3EAC0;
        }
    }

label_80B3EA64:
    ctx->pc = 0x80B3EA64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EA64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3EA64: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80B3EA68:
    ctx->pc = 0x80B3EA68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA68u)) return;
    // 80B3EA68: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80B3EA6C:
    ctx->pc = 0x80B3EA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA6Cu)) return;
    // 80B3EA6C: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3EA70:
    ctx->pc = 0x80B3EA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA70u)) return;
    // 80B3EA70: addi    r31, r3, 3088
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(3088);

label_80B3EA74:
    ctx->pc = 0x80B3EA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA74u)) return;
    // 80B3EA74: b       0x80B3EA94
    {
            goto label_80B3EA94;
    }

label_80B3EA78:
    ctx->pc = 0x80B3EA78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EA78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3EA78: lwz     r3, 0(r30)
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
label_80B3EA7C:
    ctx->pc = 0x80B3EA7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EA7C: lwzx    r3, r3, r29
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
label_80B3EA80:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA80u)) return;
    // 80B3EA80: cmplwi  r3, 0x0000
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

label_80B3EA84:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA84u)) return;
    // 80B3EA84: bc    12, 2, 0x80B3EA8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3EA8C;
        }
    }

label_80B3EA88:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EA88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3EA88: bl      0x8050F9E0
    {
            ctx->lr = 0x80B3EA8Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B3EA8C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EA8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3EA8C: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80B3EA90:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA90u)) return;
    // 80B3EA90: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80B3EA94:
    ctx->pc = 0x80B3EA94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EA94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EA94: lwz     r0, 0(r31)
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
label_80B3EA98:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA98u)) return;
    // 80B3EA98: cmpw    r28, r0
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

label_80B3EA9C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EA9Cu)) return;
    // 80B3EA9C: bc    12, 0, 0x80B3EA78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B3EA78u;
                return;
            }
            goto label_80B3EA78;
        }
    }

label_80B3EAA0:
    ctx->pc = 0x80B3EAA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EAA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B3EAA0: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3EAA4:
    ctx->pc = 0x80B3EAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EAA4u)) return;
    // 80B3EAA4: addi    r3, r3, 3092
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3092);

label_80B3EAA8:
    ctx->pc = 0x80B3EAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EAA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3EAA8: lwz     r3, 0(r3)
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
label_80B3EAAC:
    ctx->pc = 0x80B3EAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EAACu)) return;
    // 80B3EAAC: bl      0x8050ED40
    {
            ctx->lr = 0x80B3EAB0u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80B3EAB0:
    ctx->pc = 0x80B3EAB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EAB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B3EAB0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B3EAB4:
    ctx->pc = 0x80B3EAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EAB4u)) return;
    // 80B3EAB4: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3EAB8:
    ctx->pc = 0x80B3EAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EAB8u)) return;
    // 80B3EAB8: addi    r3, r3, 3092
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3092);

label_80B3EABC:
    ctx->pc = 0x80B3EABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3EABC: stw     r0, 0(r3)
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
label_80B3EAC0:
    ctx->pc = 0x80B3EAC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EAC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3EAC0: lwz     r31, 28(r1)
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
label_80B3EAC4:
    ctx->pc = 0x80B3EAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EAC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3EAC4: lwz     r30, 24(r1)
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
label_80B3EAC8:
    ctx->pc = 0x80B3EAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EAC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3EAC8: lwz     r29, 20(r1)
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
label_80B3EACC:
    ctx->pc = 0x80B3EACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3EACC: lwz     r28, 16(r1)
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
label_80B3EAD0:
    ctx->pc = 0x80B3EAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EAD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3EAD0: lwz     r0, 36(r1)
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
label_80B3EAD4:
    ctx->pc = 0x80B3EAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3EAD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EAD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EAD8:
    ctx->pc = 0x80B3EAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EAD8u)) return;
    // 80B3EAD8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B3EADC:
    ctx->pc = 0x80B3EADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EADCu)) return;
    // 80B3EADC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3EAE0:
    ctx->pc = 0x80B3EAE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EAE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3EAE0: stwu     r1, -16(r1)
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
label_80B3EAE4:
    ctx->pc = 0x80B3EAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EAE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3EAE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EAE8:
    ctx->pc = 0x80B3EAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EAE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3EAE8: stw     r0, 20(r1)
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
label_80B3EAEC:
    ctx->pc = 0x80B3EAECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EAECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3EAEC: stw     r31, 12(r1)
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
label_80B3EAF0:
    ctx->pc = 0x80B3EAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EAF0u)) return;
    // 80B3EAF0: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3EAF4:
    ctx->pc = 0x80B3EAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EAF4u)) return;
    // 80B3EAF4: addi    r6, r6, 3088
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3088);

label_80B3EAF8:
    ctx->pc = 0x80B3EAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EAF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EAF8: lwz     r0, 0(r6)
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
label_80B3EAFC:
    ctx->pc = 0x80B3EAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EAFCu)) return;
    // 80B3EAFC: cmpw    r3, r0
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

label_80B3EB00:
    ctx->pc = 0x80B3EB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB00u)) return;
    // 80B3EB00: bc    4, 0, 0x80B3EB3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3EB3C;
        }
    }

label_80B3EB04:
    ctx->pc = 0x80B3EB04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EB04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3EB04: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3EB08:
    ctx->pc = 0x80B3EB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB08u)) return;
    // 80B3EB08: addi    r6, r6, 3092
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3092);

label_80B3EB0C:
    ctx->pc = 0x80B3EB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3EB0C: lwz     r6, 0(r6)
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
label_80B3EB10:
    ctx->pc = 0x80B3EB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB10u)) return;
    // 80B3EB10: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B3EB14:
    ctx->pc = 0x80B3EB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EB14: lwzx    r0, r6, r31
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
label_80B3EB18:
    ctx->pc = 0x80B3EB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB18u)) return;
    // 80B3EB18: cmplwi  r0, 0x0000
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

label_80B3EB1C:
    ctx->pc = 0x80B3EB1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB1Cu)) return;
    // 80B3EB1C: bc    4, 2, 0x80B3EB3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3EB3C;
        }
    }

label_80B3EB20:
    ctx->pc = 0x80B3EB20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EB20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3EB20: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B3EB24:
    ctx->pc = 0x80B3EB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB24u)) return;
    // 80B3EB24: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80B3EB28:
    ctx->pc = 0x80B3EB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB28u)) return;
    // 80B3EB28: bl      0x80B3E82C
    {
            ctx->lr = 0x80B3EB2Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B3E82Cu;
                return;
            }
            goto label_80B3E82C;
    }

label_80B3EB2C:
    ctx->pc = 0x80B3EB2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EB2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B3EB2C: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3EB30:
    ctx->pc = 0x80B3EB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB30u)) return;
    // 80B3EB30: addi    r4, r4, 3092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3092);

label_80B3EB34:
    ctx->pc = 0x80B3EB34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3EB34: lwz     r4, 0(r4)
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
label_80B3EB38:
    ctx->pc = 0x80B3EB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3EB38: stwx    r3, r4, r31
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
label_80B3EB3C:
    ctx->pc = 0x80B3EB3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EB3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3EB3C: lwz     r31, 12(r1)
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
label_80B3EB40:
    ctx->pc = 0x80B3EB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3EB40: lwz     r0, 20(r1)
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
label_80B3EB44:
    ctx->pc = 0x80B3EB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3EB44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EB44: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EB48:
    ctx->pc = 0x80B3EB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB48u)) return;
    // 80B3EB48: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3EB4C:
    ctx->pc = 0x80B3EB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB4Cu)) return;
    // 80B3EB4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3EB50:
    ctx->pc = 0x80B3EB50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EB50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3EB50: stwu     r1, -16(r1)
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
label_80B3EB54:
    ctx->pc = 0x80B3EB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3EB54: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EB58:
    ctx->pc = 0x80B3EB58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3EB58: stw     r0, 20(r1)
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
label_80B3EB5C:
    ctx->pc = 0x80B3EB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3EB5C: stw     r31, 12(r1)
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
label_80B3EB60:
    ctx->pc = 0x80B3EB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB60u)) return;
    // 80B3EB60: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3EB64:
    ctx->pc = 0x80B3EB64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB64u)) return;
    // 80B3EB64: addi    r4, r4, 3088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3088);

label_80B3EB68:
    ctx->pc = 0x80B3EB68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EB68: lwz     r0, 0(r4)
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
label_80B3EB6C:
    ctx->pc = 0x80B3EB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB6Cu)) return;
    // 80B3EB6C: cmpw    r3, r0
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

label_80B3EB70:
    ctx->pc = 0x80B3EB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB70u)) return;
    // 80B3EB70: bc    4, 0, 0x80B3EBA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3EBA8;
        }
    }

label_80B3EB74:
    ctx->pc = 0x80B3EB74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EB74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3EB74: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3EB78:
    ctx->pc = 0x80B3EB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB78u)) return;
    // 80B3EB78: addi    r4, r4, 3092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3092);

label_80B3EB7C:
    ctx->pc = 0x80B3EB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3EB7C: lwz     r4, 0(r4)
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
label_80B3EB80:
    ctx->pc = 0x80B3EB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB80u)) return;
    // 80B3EB80: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B3EB84:
    ctx->pc = 0x80B3EB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EB84: lwzx    r3, r4, r31
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
label_80B3EB88:
    ctx->pc = 0x80B3EB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB88u)) return;
    // 80B3EB88: cmplwi  r3, 0x0000
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

label_80B3EB8C:
    ctx->pc = 0x80B3EB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB8Cu)) return;
    // 80B3EB8C: bc    12, 2, 0x80B3EBA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3EBA8;
        }
    }

label_80B3EB90:
    ctx->pc = 0x80B3EB90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EB90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3EB90: bl      0x8050F9E0
    {
            ctx->lr = 0x80B3EB94u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B3EB94:
    ctx->pc = 0x80B3EB94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EB94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3EB94: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B3EB98:
    ctx->pc = 0x80B3EB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB98u)) return;
    // 80B3EB98: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3EB9C:
    ctx->pc = 0x80B3EB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EB9Cu)) return;
    // 80B3EB9C: addi    r3, r3, 3092
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3092);

label_80B3EBA0:
    ctx->pc = 0x80B3EBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EBA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3EBA0: lwz     r3, 0(r3)
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
label_80B3EBA4:
    ctx->pc = 0x80B3EBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EBA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B3EBA4: stwx    r0, r3, r31
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
label_80B3EBA8:
    ctx->pc = 0x80B3EBA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EBA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3EBA8: lwz     r31, 12(r1)
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
label_80B3EBAC:
    ctx->pc = 0x80B3EBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EBACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3EBAC: lwz     r0, 20(r1)
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
label_80B3EBB0:
    ctx->pc = 0x80B3EBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3EBB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EBB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EBB4:
    ctx->pc = 0x80B3EBB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EBB4u)) return;
    // 80B3EBB4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3EBB8:
    ctx->pc = 0x80B3EBB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EBB8u)) return;
    // 80B3EBB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3EBBC:
    ctx->pc = 0x80B3EBBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EBBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3EBBC: stwu     r1, -16(r1)
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
label_80B3EBC0:
    ctx->pc = 0x80B3EBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EBC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3EBC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EBC4:
    ctx->pc = 0x80B3EBC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EBC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3EBC4: stw     r0, 20(r1)
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
label_80B3EBC8:
    ctx->pc = 0x80B3EBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EBC8u)) return;
    // 80B3EBC8: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3EBCC:
    ctx->pc = 0x80B3EBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EBCCu)) return;
    // 80B3EBCC: addi    r6, r6, 3088
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3088);

label_80B3EBD0:
    ctx->pc = 0x80B3EBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EBD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EBD0: lwz     r0, 0(r6)
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
label_80B3EBD4:
    ctx->pc = 0x80B3EBD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EBD4u)) return;
    // 80B3EBD4: cmpw    r3, r0
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

label_80B3EBD8:
    ctx->pc = 0x80B3EBD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EBD8u)) return;
    // 80B3EBD8: bc    4, 0, 0x80B3EBFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3EBFC;
        }
    }

label_80B3EBDC:
    ctx->pc = 0x80B3EBDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EBDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3EBDC: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3EBE0:
    ctx->pc = 0x80B3EBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EBE0u)) return;
    // 80B3EBE0: addi    r6, r6, 3092
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3092);

label_80B3EBE4:
    ctx->pc = 0x80B3EBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EBE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3EBE4: lwz     r6, 0(r6)
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
label_80B3EBE8:
    ctx->pc = 0x80B3EBE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EBE8u)) return;
    // 80B3EBE8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B3EBEC:
    ctx->pc = 0x80B3EBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EBECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EBEC: lwzx    r3, r6, r0
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
label_80B3EBF0:
    ctx->pc = 0x80B3EBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EBF0u)) return;
    // 80B3EBF0: cmplwi  r3, 0x0000
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

label_80B3EBF4:
    ctx->pc = 0x80B3EBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EBF4u)) return;
    // 80B3EBF4: bc    12, 2, 0x80B3EBFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3EBFC;
        }
    }

label_80B3EBF8:
    ctx->pc = 0x80B3EBF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EBF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3EBF8: bl      0x80B3E8E8
    {
            ctx->lr = 0x80B3EBFCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B3E8E8u;
                return;
            }
            goto label_80B3E8E8;
    }

label_80B3EBFC:
    ctx->pc = 0x80B3EBFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EBFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3EBFC: lwz     r0, 20(r1)
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
label_80B3EC00:
    ctx->pc = 0x80B3EC00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3EC00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EC00: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EC04:
    ctx->pc = 0x80B3EC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC04u)) return;
    // 80B3EC04: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3EC08:
    ctx->pc = 0x80B3EC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC08u)) return;
    // 80B3EC08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3EC0C:
    ctx->pc = 0x80B3EC0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EC0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3EC0C: stwu     r1, -16(r1)
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
label_80B3EC10:
    ctx->pc = 0x80B3EC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3EC10: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EC14:
    ctx->pc = 0x80B3EC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3EC14: stw     r0, 20(r1)
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
label_80B3EC18:
    ctx->pc = 0x80B3EC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC18u)) return;
    // 80B3EC18: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3EC1C:
    ctx->pc = 0x80B3EC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC1Cu)) return;
    // 80B3EC1C: addi    r6, r6, 3088
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3088);

label_80B3EC20:
    ctx->pc = 0x80B3EC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EC20: lwz     r0, 0(r6)
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
label_80B3EC24:
    ctx->pc = 0x80B3EC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC24u)) return;
    // 80B3EC24: cmpw    r3, r0
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

label_80B3EC28:
    ctx->pc = 0x80B3EC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC28u)) return;
    // 80B3EC28: bc    4, 0, 0x80B3EC4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3EC4C;
        }
    }

label_80B3EC2C:
    ctx->pc = 0x80B3EC2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EC2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3EC2C: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3EC30:
    ctx->pc = 0x80B3EC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC30u)) return;
    // 80B3EC30: addi    r6, r6, 3092
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3092);

label_80B3EC34:
    ctx->pc = 0x80B3EC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3EC34: lwz     r6, 0(r6)
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
label_80B3EC38:
    ctx->pc = 0x80B3EC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC38u)) return;
    // 80B3EC38: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B3EC3C:
    ctx->pc = 0x80B3EC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EC3C: lwzx    r3, r6, r0
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
label_80B3EC40:
    ctx->pc = 0x80B3EC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC40u)) return;
    // 80B3EC40: cmplwi  r3, 0x0000
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

label_80B3EC44:
    ctx->pc = 0x80B3EC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC44u)) return;
    // 80B3EC44: bc    12, 2, 0x80B3EC4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3EC4C;
        }
    }

label_80B3EC48:
    ctx->pc = 0x80B3EC48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EC48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3EC48: bl      0x80B3E938
    {
            ctx->lr = 0x80B3EC4Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B3E938u;
                return;
            }
            goto label_80B3E938;
    }

label_80B3EC4C:
    ctx->pc = 0x80B3EC4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EC4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3EC4C: lwz     r0, 20(r1)
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
label_80B3EC50:
    ctx->pc = 0x80B3EC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3EC50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EC50: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EC54:
    ctx->pc = 0x80B3EC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC54u)) return;
    // 80B3EC54: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3EC58:
    ctx->pc = 0x80B3EC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC58u)) return;
    // 80B3EC58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3EC5C:
    ctx->pc = 0x80B3EC5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EC5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3EC5C: stwu     r1, -16(r1)
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
label_80B3EC60:
    ctx->pc = 0x80B3EC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3EC60: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EC64:
    ctx->pc = 0x80B3EC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3EC64: stw     r0, 20(r1)
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
label_80B3EC68:
    ctx->pc = 0x80B3EC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC68u)) return;
    // 80B3EC68: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3EC6C:
    ctx->pc = 0x80B3EC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC6Cu)) return;
    // 80B3EC6C: addi    r6, r6, 3088
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3088);

label_80B3EC70:
    ctx->pc = 0x80B3EC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EC70: lwz     r0, 0(r6)
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
label_80B3EC74:
    ctx->pc = 0x80B3EC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC74u)) return;
    // 80B3EC74: cmpw    r3, r0
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

label_80B3EC78:
    ctx->pc = 0x80B3EC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC78u)) return;
    // 80B3EC78: bc    4, 0, 0x80B3EC9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3EC9C;
        }
    }

label_80B3EC7C:
    ctx->pc = 0x80B3EC7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EC7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3EC7C: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3EC80:
    ctx->pc = 0x80B3EC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC80u)) return;
    // 80B3EC80: addi    r6, r6, 3092
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3092);

label_80B3EC84:
    ctx->pc = 0x80B3EC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3EC84: lwz     r6, 0(r6)
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
label_80B3EC88:
    ctx->pc = 0x80B3EC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC88u)) return;
    // 80B3EC88: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B3EC8C:
    ctx->pc = 0x80B3EC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EC8C: lwzx    r3, r6, r0
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
label_80B3EC90:
    ctx->pc = 0x80B3EC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC90u)) return;
    // 80B3EC90: cmplwi  r3, 0x0000
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

label_80B3EC94:
    ctx->pc = 0x80B3EC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EC94u)) return;
    // 80B3EC94: bc    12, 2, 0x80B3EC9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B3EC9C;
        }
    }

label_80B3EC98:
    ctx->pc = 0x80B3EC98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EC98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3EC98: bl      0x80B3E988
    {
            ctx->lr = 0x80B3EC9Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B3E988u;
                return;
            }
            goto label_80B3E988;
    }

label_80B3EC9C:
    ctx->pc = 0x80B3EC9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EC9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3EC9C: lwz     r0, 20(r1)
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
label_80B3ECA0:
    ctx->pc = 0x80B3ECA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3ECA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3ECA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3ECA4:
    ctx->pc = 0x80B3ECA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECA4u)) return;
    // 80B3ECA4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B3ECA8:
    ctx->pc = 0x80B3ECA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECA8u)) return;
    // 80B3ECA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

label_80B3ECAC:
    ctx->pc = 0x80B3ECACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3ECACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B3ECAC: stwu     r1, -32(r1)
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
label_80B3ECB0:
    ctx->pc = 0x80B3ECB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B3ECB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3ECB4:
    ctx->pc = 0x80B3ECB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3ECB4: stw     r0, 36(r1)
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
label_80B3ECB8:
    ctx->pc = 0x80B3ECB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B3ECB8: stw     r31, 28(r1)
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
label_80B3ECBC:
    ctx->pc = 0x80B3ECBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3ECBC: stw     r30, 24(r1)
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
label_80B3ECC0:
    ctx->pc = 0x80B3ECC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3ECC0: stw     r29, 20(r1)
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
label_80B3ECC4:
    ctx->pc = 0x80B3ECC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3ECC4: stw     r28, 16(r1)
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
label_80B3ECC8:
    ctx->pc = 0x80B3ECC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECC8u)) return;
    // 80B3ECC8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B3ECCC:
    ctx->pc = 0x80B3ECCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECCCu)) return;
    // 80B3ECCC: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B3ECD0:
    ctx->pc = 0x80B3ECD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECD0u)) return;
    // 80B3ECD0: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80B3ECD4:
    ctx->pc = 0x80B3ECD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECD4u)) return;
    // 80B3ECD4: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80B3ECD8:
    ctx->pc = 0x80B3ECD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECD8u)) return;
    // 80B3ECD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3ECDC:
    ctx->pc = 0x80B3ECDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECDCu)) return;
    // 80B3ECDC: bl      0x80401DB0
    {
            ctx->lr = 0x80B3ECE0u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80B3ECE0:
    ctx->pc = 0x80B3ECE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3ECE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B3ECE0: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3ECE4:
    ctx->pc = 0x80B3ECE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECE4u)) return;
    // 80B3ECE4: addi    r4, r4, 3096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3096);

label_80B3ECE8:
    ctx->pc = 0x80B3ECE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3ECE8: lwz     r0, 0(r4)
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
label_80B3ECEC:
    ctx->pc = 0x80B3ECECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECECu)) return;
    // 80B3ECEC: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80B3ECF0:
    ctx->pc = 0x80B3ECF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECF0u)) return;
    // 80B3ECF0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B3ECF4:
    ctx->pc = 0x80B3ECF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECF4u)) return;
    // 80B3ECF4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B3ECF8:
    ctx->pc = 0x80B3ECF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECF8u)) return;
    // 80B3ECF8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80B3ECFC:
    ctx->pc = 0x80B3ECFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ECFCu)) return;
    // 80B3ECFC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B3ED00:
    ctx->pc = 0x80B3ED00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED00u)) return;
    // 80B3ED00: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80B3ED04:
    ctx->pc = 0x80B3ED04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED04u)) return;
    // 80B3ED04: bl      0x8050A0D4
    {
            ctx->lr = 0x80B3ED08u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80B3ED08:
    ctx->pc = 0x80B3ED08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3ED08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3ED08: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B3ED0C:
    ctx->pc = 0x80B3ED0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED0Cu)) return;
    // 80B3ED0C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80B3ED10:
    ctx->pc = 0x80B3ED10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED10u)) return;
    // 80B3ED10: bl      0x80509C74
    {
            ctx->lr = 0x80B3ED14u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80B3ED14:
    ctx->pc = 0x80B3ED14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3ED14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3ED14: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B3ED18:
    ctx->pc = 0x80B3ED18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED18u)) return;
    // 80B3ED18: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B3ED1C:
    ctx->pc = 0x80B3ED1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED1Cu)) return;
    // 80B3ED1C: bl      0x80509BF8
    {
            ctx->lr = 0x80B3ED20u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80B3ED20:
    ctx->pc = 0x80B3ED20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3ED20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3ED20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B3ED24:
    ctx->pc = 0x80B3ED24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED24u)) return;
    // 80B3ED24: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B3ED28:
    ctx->pc = 0x80B3ED28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED28u)) return;
    // 80B3ED28: bl      0x80509B94
    {
            ctx->lr = 0x80B3ED2Cu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80B3ED2C:
    ctx->pc = 0x80B3ED2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3ED2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B3ED2C: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3ED30:
    ctx->pc = 0x80B3ED30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED30u)) return;
    // 80B3ED30: addi    r4, r3, 3096
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3096);

label_80B3ED34:
    ctx->pc = 0x80B3ED34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B3ED34: lwz     r3, 0(r4)
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
label_80B3ED38:
    ctx->pc = 0x80B3ED38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED38u)) return;
    // 80B3ED38: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80B3ED3C:
    ctx->pc = 0x80B3ED3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B3ED3C: stw     r0, 0(r4)
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
label_80B3ED40:
    ctx->pc = 0x80B3ED40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED40u)) return;
    // 80B3ED40: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80B3ED44:
    ctx->pc = 0x80B3ED44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B3ED44: stw     r0, 0(r4)
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
label_80B3ED48:
    ctx->pc = 0x80B3ED48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B3ED48: lwz     r31, 28(r1)
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
label_80B3ED4C:
    ctx->pc = 0x80B3ED4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3ED4C: lwz     r30, 24(r1)
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
label_80B3ED50:
    ctx->pc = 0x80B3ED50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3ED50: lwz     r29, 20(r1)
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
label_80B3ED54:
    ctx->pc = 0x80B3ED54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3ED54: lwz     r28, 16(r1)
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
label_80B3ED58:
    ctx->pc = 0x80B3ED58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3ED58: lwz     r0, 36(r1)
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
label_80B3ED5C:
    ctx->pc = 0x80B3ED5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B3ED5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3ED5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3ED60:
    ctx->pc = 0x80B3ED60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED60u)) return;
    // 80B3ED60: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B3ED64:
    ctx->pc = 0x80B3ED64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED64u)) return;
    // 80B3ED64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3D920;
        }
    }

    ctx->pc = 0x80B3ED68u;
    return;
return_dispatch_80B3D920:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80B3D95Cu: goto label_80B3D95C;
    case 0x80B3D960u: goto label_80B3D960;
    case 0x80B3D964u: goto label_80B3D964;
    case 0x80B3D968u: goto label_80B3D968;
    case 0x80B3D9B0u: goto label_80B3D9B0;
    case 0x80B3D9F0u: goto label_80B3D9F0;
    case 0x80B3D9F8u: goto label_80B3D9F8;
    case 0x80B3DA00u: goto label_80B3DA00;
    case 0x80B3DA28u: goto label_80B3DA28;
    case 0x80B3DA30u: goto label_80B3DA30;
    case 0x80B3DA44u: goto label_80B3DA44;
    case 0x80B3DA4Cu: goto label_80B3DA4C;
    case 0x80B3DA74u: goto label_80B3DA74;
    case 0x80B3DA7Cu: goto label_80B3DA7C;
    case 0x80B3DA88u: goto label_80B3DA88;
    case 0x80B3DA90u: goto label_80B3DA90;
    case 0x80B3DA9Cu: goto label_80B3DA9C;
    case 0x80B3DAC0u: goto label_80B3DAC0;
    case 0x80B3DAF0u: goto label_80B3DAF0;
    case 0x80B3DB0Cu: goto label_80B3DB0C;
    case 0x80B3DB28u: goto label_80B3DB28;
    case 0x80B3DB58u: goto label_80B3DB58;
    case 0x80B3DB70u: goto label_80B3DB70;
    case 0x80B3DC44u: goto label_80B3DC44;
    case 0x80B3DC78u: goto label_80B3DC78;
    case 0x80B3DC80u: goto label_80B3DC80;
    case 0x80B3DCB0u: goto label_80B3DCB0;
    case 0x80B3DCCCu: goto label_80B3DCCC;
    case 0x80B3DD00u: goto label_80B3DD00;
    case 0x80B3DD04u: goto label_80B3DD04;
    case 0x80B3DD0Cu: goto label_80B3DD0C;
    case 0x80B3DD18u: goto label_80B3DD18;
    case 0x80B3DD20u: goto label_80B3DD20;
    case 0x80B3DD48u: goto label_80B3DD48;
    case 0x80B3DD50u: goto label_80B3DD50;
    case 0x80B3DD78u: goto label_80B3DD78;
    case 0x80B3DD80u: goto label_80B3DD80;
    case 0x80B3DD88u: goto label_80B3DD88;
    case 0x80B3DDB0u: goto label_80B3DDB0;
    case 0x80B3DDB8u: goto label_80B3DDB8;
    case 0x80B3DDC8u: goto label_80B3DDC8;
    case 0x80B3DDD0u: goto label_80B3DDD0;
    case 0x80B3DDF8u: goto label_80B3DDF8;
    case 0x80B3DE00u: goto label_80B3DE00;
    case 0x80B3DE28u: goto label_80B3DE28;
    case 0x80B3DE30u: goto label_80B3DE30;
    case 0x80B3DE60u: goto label_80B3DE60;
    case 0x80B3DE7Cu: goto label_80B3DE7C;
    case 0x80B3DE94u: goto label_80B3DE94;
    case 0x80B3DE9Cu: goto label_80B3DE9C;
    case 0x80B3DECCu: goto label_80B3DECC;
    case 0x80B3DEE8u: goto label_80B3DEE8;
    case 0x80B3DF18u: goto label_80B3DF18;
    case 0x80B3DF20u: goto label_80B3DF20;
    case 0x80B3DF50u: goto label_80B3DF50;
    case 0x80B3DF68u: goto label_80B3DF68;
    case 0x80B3DF80u: goto label_80B3DF80;
    case 0x80B3DF88u: goto label_80B3DF88;
    case 0x80B3DF90u: goto label_80B3DF90;
    case 0x80B3DF9Cu: goto label_80B3DF9C;
    case 0x80B3DFA4u: goto label_80B3DFA4;
    case 0x80B3DFBCu: goto label_80B3DFBC;
    case 0x80B3DFFCu: goto label_80B3DFFC;
    case 0x80B3E004u: goto label_80B3E004;
    case 0x80B3E034u: goto label_80B3E034;
    case 0x80B3E05Cu: goto label_80B3E05C;
    case 0x80B3E070u: goto label_80B3E070;
    case 0x80B3E074u: goto label_80B3E074;
    case 0x80B3E07Cu: goto label_80B3E07C;
    case 0x80B3E084u: goto label_80B3E084;
    case 0x80B3E088u: goto label_80B3E088;
    case 0x80B3E090u: goto label_80B3E090;
    case 0x80B3E098u: goto label_80B3E098;
    case 0x80B3E0A4u: goto label_80B3E0A4;
    case 0x80B3E0BCu: goto label_80B3E0BC;
    case 0x80B3E0E4u: goto label_80B3E0E4;
    case 0x80B3E124u: goto label_80B3E124;
    case 0x80B3E12Cu: goto label_80B3E12C;
    case 0x80B3E138u: goto label_80B3E138;
    case 0x80B3E150u: goto label_80B3E150;
    case 0x80B3E168u: goto label_80B3E168;
    case 0x80B3E180u: goto label_80B3E180;
    case 0x80B3E18Cu: goto label_80B3E18C;
    case 0x80B3E194u: goto label_80B3E194;
    case 0x80B3E1B8u: goto label_80B3E1B8;
    case 0x80B3E1E8u: goto label_80B3E1E8;
    case 0x80B3E210u: goto label_80B3E210;
    case 0x80B3E2D8u: goto label_80B3E2D8;
    case 0x80B3E30Cu: goto label_80B3E30C;
    case 0x80B3E354u: goto label_80B3E354;
    case 0x80B3E400u: goto label_80B3E400;
    case 0x80B3E48Cu: goto label_80B3E48C;
    case 0x80B3E498u: goto label_80B3E498;
    case 0x80B3E528u: goto label_80B3E528;
    case 0x80B3E530u: goto label_80B3E530;
    case 0x80B3E554u: goto label_80B3E554;
    case 0x80B3E5BCu: goto label_80B3E5BC;
    case 0x80B3E604u: goto label_80B3E604;
    case 0x80B3E670u: goto label_80B3E670;
    case 0x80B3E720u: goto label_80B3E720;
    case 0x80B3E780u: goto label_80B3E780;
    case 0x80B3E7C0u: goto label_80B3E7C0;
    case 0x80B3E800u: goto label_80B3E800;
    case 0x80B3E85Cu: goto label_80B3E85C;
    case 0x80B3E880u: goto label_80B3E880;
    case 0x80B3E91Cu: goto label_80B3E91C;
    case 0x80B3E96Cu: goto label_80B3E96C;
    case 0x80B3E9BCu: goto label_80B3E9BC;
    case 0x80B3EA08u: goto label_80B3EA08;
    case 0x80B3EA8Cu: goto label_80B3EA8C;
    case 0x80B3EAB0u: goto label_80B3EAB0;
    case 0x80B3EB2Cu: goto label_80B3EB2C;
    case 0x80B3EB94u: goto label_80B3EB94;
    case 0x80B3EBFCu: goto label_80B3EBFC;
    case 0x80B3EC4Cu: goto label_80B3EC4C;
    case 0x80B3EC9Cu: goto label_80B3EC9C;
    case 0x80B3ECE0u: goto label_80B3ECE0;
    case 0x80B3ED08u: goto label_80B3ED08;
    case 0x80B3ED14u: goto label_80B3ED14;
    case 0x80B3ED20u: goto label_80B3ED20;
    case 0x80B3ED2Cu: goto label_80B3ED2C;
    default: return;
    }
}

