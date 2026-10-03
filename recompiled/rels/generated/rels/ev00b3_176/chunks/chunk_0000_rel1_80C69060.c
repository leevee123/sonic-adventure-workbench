// DolRecomp output
#include "../generated.h"

void func_80C69060(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80C69060[1333] = {
        &&label_80C69060,
        &&label_80C69064,
        &&label_80C69068,
        &&label_80C6906C,
        &&label_80C69070,
        &&label_80C69074,
        &&label_80C69078,
        &&label_80C6907C,
        &&label_80C69080,
        &&label_80C69084,
        &&label_80C69088,
        &&label_80C6908C,
        &&label_80C69090,
        &&label_80C69094,
        &&label_80C69098,
        &&label_80C6909C,
        &&label_80C690A0,
        &&label_80C690A4,
        &&label_80C690A8,
        &&label_80C690AC,
        &&label_80C690B0,
        &&label_80C690B4,
        &&label_80C690B8,
        &&label_80C690BC,
        &&label_80C690C0,
        &&label_80C690C4,
        &&label_80C690C8,
        &&label_80C690CC,
        &&label_80C690D0,
        &&label_80C690D4,
        &&label_80C690D8,
        &&label_80C690DC,
        &&label_80C690E0,
        &&label_80C690E4,
        &&label_80C690E8,
        &&label_80C690EC,
        &&label_80C690F0,
        &&label_80C690F4,
        &&label_80C690F8,
        &&label_80C690FC,
        &&label_80C69100,
        &&label_80C69104,
        &&label_80C69108,
        &&label_80C6910C,
        &&label_80C69110,
        &&label_80C69114,
        &&label_80C69118,
        &&label_80C6911C,
        &&label_80C69120,
        &&label_80C69124,
        &&label_80C69128,
        &&label_80C6912C,
        &&label_80C69130,
        &&label_80C69134,
        &&label_80C69138,
        &&label_80C6913C,
        &&label_80C69140,
        &&label_80C69144,
        &&label_80C69148,
        &&label_80C6914C,
        &&label_80C69150,
        &&label_80C69154,
        &&label_80C69158,
        &&label_80C6915C,
        &&label_80C69160,
        &&label_80C69164,
        &&label_80C69168,
        &&label_80C6916C,
        &&label_80C69170,
        &&label_80C69174,
        &&label_80C69178,
        &&label_80C6917C,
        &&label_80C69180,
        &&label_80C69184,
        &&label_80C69188,
        &&label_80C6918C,
        &&label_80C69190,
        &&label_80C69194,
        &&label_80C69198,
        &&label_80C6919C,
        &&label_80C691A0,
        &&label_80C691A4,
        &&label_80C691A8,
        &&label_80C691AC,
        &&label_80C691B0,
        &&label_80C691B4,
        &&label_80C691B8,
        &&label_80C691BC,
        &&label_80C691C0,
        &&label_80C691C4,
        &&label_80C691C8,
        &&label_80C691CC,
        &&label_80C691D0,
        &&label_80C691D4,
        &&label_80C691D8,
        &&label_80C691DC,
        &&label_80C691E0,
        &&label_80C691E4,
        &&label_80C691E8,
        &&label_80C691EC,
        &&label_80C691F0,
        &&label_80C691F4,
        &&label_80C691F8,
        &&label_80C691FC,
        &&label_80C69200,
        &&label_80C69204,
        &&label_80C69208,
        &&label_80C6920C,
        &&label_80C69210,
        &&label_80C69214,
        &&label_80C69218,
        &&label_80C6921C,
        &&label_80C69220,
        &&label_80C69224,
        &&label_80C69228,
        &&label_80C6922C,
        &&label_80C69230,
        &&label_80C69234,
        &&label_80C69238,
        &&label_80C6923C,
        &&label_80C69240,
        &&label_80C69244,
        &&label_80C69248,
        &&label_80C6924C,
        &&label_80C69250,
        &&label_80C69254,
        &&label_80C69258,
        &&label_80C6925C,
        &&label_80C69260,
        &&label_80C69264,
        &&label_80C69268,
        &&label_80C6926C,
        &&label_80C69270,
        &&label_80C69274,
        &&label_80C69278,
        &&label_80C6927C,
        &&label_80C69280,
        &&label_80C69284,
        &&label_80C69288,
        &&label_80C6928C,
        &&label_80C69290,
        &&label_80C69294,
        &&label_80C69298,
        &&label_80C6929C,
        &&label_80C692A0,
        &&label_80C692A4,
        &&label_80C692A8,
        &&label_80C692AC,
        &&label_80C692B0,
        &&label_80C692B4,
        &&label_80C692B8,
        &&label_80C692BC,
        &&label_80C692C0,
        &&label_80C692C4,
        &&label_80C692C8,
        &&label_80C692CC,
        &&label_80C692D0,
        &&label_80C692D4,
        &&label_80C692D8,
        &&label_80C692DC,
        &&label_80C692E0,
        &&label_80C692E4,
        &&label_80C692E8,
        &&label_80C692EC,
        &&label_80C692F0,
        &&label_80C692F4,
        &&label_80C692F8,
        &&label_80C692FC,
        &&label_80C69300,
        &&label_80C69304,
        &&label_80C69308,
        &&label_80C6930C,
        &&label_80C69310,
        &&label_80C69314,
        &&label_80C69318,
        &&label_80C6931C,
        &&label_80C69320,
        &&label_80C69324,
        &&label_80C69328,
        &&label_80C6932C,
        &&label_80C69330,
        &&label_80C69334,
        &&label_80C69338,
        &&label_80C6933C,
        &&label_80C69340,
        &&label_80C69344,
        &&label_80C69348,
        &&label_80C6934C,
        &&label_80C69350,
        &&label_80C69354,
        &&label_80C69358,
        &&label_80C6935C,
        &&label_80C69360,
        &&label_80C69364,
        &&label_80C69368,
        &&label_80C6936C,
        &&label_80C69370,
        &&label_80C69374,
        &&label_80C69378,
        &&label_80C6937C,
        &&label_80C69380,
        &&label_80C69384,
        &&label_80C69388,
        &&label_80C6938C,
        &&label_80C69390,
        &&label_80C69394,
        &&label_80C69398,
        &&label_80C6939C,
        &&label_80C693A0,
        &&label_80C693A4,
        &&label_80C693A8,
        &&label_80C693AC,
        &&label_80C693B0,
        &&label_80C693B4,
        &&label_80C693B8,
        &&label_80C693BC,
        &&label_80C693C0,
        &&label_80C693C4,
        &&label_80C693C8,
        &&label_80C693CC,
        &&label_80C693D0,
        &&label_80C693D4,
        &&label_80C693D8,
        &&label_80C693DC,
        &&label_80C693E0,
        &&label_80C693E4,
        &&label_80C693E8,
        &&label_80C693EC,
        &&label_80C693F0,
        &&label_80C693F4,
        &&label_80C693F8,
        &&label_80C693FC,
        &&label_80C69400,
        &&label_80C69404,
        &&label_80C69408,
        &&label_80C6940C,
        &&label_80C69410,
        &&label_80C69414,
        &&label_80C69418,
        &&label_80C6941C,
        &&label_80C69420,
        &&label_80C69424,
        &&label_80C69428,
        &&label_80C6942C,
        &&label_80C69430,
        &&label_80C69434,
        &&label_80C69438,
        &&label_80C6943C,
        &&label_80C69440,
        &&label_80C69444,
        &&label_80C69448,
        &&label_80C6944C,
        &&label_80C69450,
        &&label_80C69454,
        &&label_80C69458,
        &&label_80C6945C,
        &&label_80C69460,
        &&label_80C69464,
        &&label_80C69468,
        &&label_80C6946C,
        &&label_80C69470,
        &&label_80C69474,
        &&label_80C69478,
        &&label_80C6947C,
        &&label_80C69480,
        &&label_80C69484,
        &&label_80C69488,
        &&label_80C6948C,
        &&label_80C69490,
        &&label_80C69494,
        &&label_80C69498,
        &&label_80C6949C,
        &&label_80C694A0,
        &&label_80C694A4,
        &&label_80C694A8,
        &&label_80C694AC,
        &&label_80C694B0,
        &&label_80C694B4,
        &&label_80C694B8,
        &&label_80C694BC,
        &&label_80C694C0,
        &&label_80C694C4,
        &&label_80C694C8,
        &&label_80C694CC,
        &&label_80C694D0,
        &&label_80C694D4,
        &&label_80C694D8,
        &&label_80C694DC,
        &&label_80C694E0,
        &&label_80C694E4,
        &&label_80C694E8,
        &&label_80C694EC,
        &&label_80C694F0,
        &&label_80C694F4,
        &&label_80C694F8,
        &&label_80C694FC,
        &&label_80C69500,
        &&label_80C69504,
        &&label_80C69508,
        &&label_80C6950C,
        &&label_80C69510,
        &&label_80C69514,
        &&label_80C69518,
        &&label_80C6951C,
        &&label_80C69520,
        &&label_80C69524,
        &&label_80C69528,
        &&label_80C6952C,
        &&label_80C69530,
        &&label_80C69534,
        &&label_80C69538,
        &&label_80C6953C,
        &&label_80C69540,
        &&label_80C69544,
        &&label_80C69548,
        &&label_80C6954C,
        &&label_80C69550,
        &&label_80C69554,
        &&label_80C69558,
        &&label_80C6955C,
        &&label_80C69560,
        &&label_80C69564,
        &&label_80C69568,
        &&label_80C6956C,
        &&label_80C69570,
        &&label_80C69574,
        &&label_80C69578,
        &&label_80C6957C,
        &&label_80C69580,
        &&label_80C69584,
        &&label_80C69588,
        &&label_80C6958C,
        &&label_80C69590,
        &&label_80C69594,
        &&label_80C69598,
        &&label_80C6959C,
        &&label_80C695A0,
        &&label_80C695A4,
        &&label_80C695A8,
        &&label_80C695AC,
        &&label_80C695B0,
        &&label_80C695B4,
        &&label_80C695B8,
        &&label_80C695BC,
        &&label_80C695C0,
        &&label_80C695C4,
        &&label_80C695C8,
        &&label_80C695CC,
        &&label_80C695D0,
        &&label_80C695D4,
        &&label_80C695D8,
        &&label_80C695DC,
        &&label_80C695E0,
        &&label_80C695E4,
        &&label_80C695E8,
        &&label_80C695EC,
        &&label_80C695F0,
        &&label_80C695F4,
        &&label_80C695F8,
        &&label_80C695FC,
        &&label_80C69600,
        &&label_80C69604,
        &&label_80C69608,
        &&label_80C6960C,
        &&label_80C69610,
        &&label_80C69614,
        &&label_80C69618,
        &&label_80C6961C,
        &&label_80C69620,
        &&label_80C69624,
        &&label_80C69628,
        &&label_80C6962C,
        &&label_80C69630,
        &&label_80C69634,
        &&label_80C69638,
        &&label_80C6963C,
        &&label_80C69640,
        &&label_80C69644,
        &&label_80C69648,
        &&label_80C6964C,
        &&label_80C69650,
        &&label_80C69654,
        &&label_80C69658,
        &&label_80C6965C,
        &&label_80C69660,
        &&label_80C69664,
        &&label_80C69668,
        &&label_80C6966C,
        &&label_80C69670,
        &&label_80C69674,
        &&label_80C69678,
        &&label_80C6967C,
        &&label_80C69680,
        &&label_80C69684,
        &&label_80C69688,
        &&label_80C6968C,
        &&label_80C69690,
        &&label_80C69694,
        &&label_80C69698,
        &&label_80C6969C,
        &&label_80C696A0,
        &&label_80C696A4,
        &&label_80C696A8,
        &&label_80C696AC,
        &&label_80C696B0,
        &&label_80C696B4,
        &&label_80C696B8,
        &&label_80C696BC,
        &&label_80C696C0,
        &&label_80C696C4,
        &&label_80C696C8,
        &&label_80C696CC,
        &&label_80C696D0,
        &&label_80C696D4,
        &&label_80C696D8,
        &&label_80C696DC,
        &&label_80C696E0,
        &&label_80C696E4,
        &&label_80C696E8,
        &&label_80C696EC,
        &&label_80C696F0,
        &&label_80C696F4,
        &&label_80C696F8,
        &&label_80C696FC,
        &&label_80C69700,
        &&label_80C69704,
        &&label_80C69708,
        &&label_80C6970C,
        &&label_80C69710,
        &&label_80C69714,
        &&label_80C69718,
        &&label_80C6971C,
        &&label_80C69720,
        &&label_80C69724,
        &&label_80C69728,
        &&label_80C6972C,
        &&label_80C69730,
        &&label_80C69734,
        &&label_80C69738,
        &&label_80C6973C,
        &&label_80C69740,
        &&label_80C69744,
        &&label_80C69748,
        &&label_80C6974C,
        &&label_80C69750,
        &&label_80C69754,
        &&label_80C69758,
        &&label_80C6975C,
        &&label_80C69760,
        &&label_80C69764,
        &&label_80C69768,
        &&label_80C6976C,
        &&label_80C69770,
        &&label_80C69774,
        &&label_80C69778,
        &&label_80C6977C,
        &&label_80C69780,
        &&label_80C69784,
        &&label_80C69788,
        &&label_80C6978C,
        &&label_80C69790,
        &&label_80C69794,
        &&label_80C69798,
        &&label_80C6979C,
        &&label_80C697A0,
        &&label_80C697A4,
        &&label_80C697A8,
        &&label_80C697AC,
        &&label_80C697B0,
        &&label_80C697B4,
        &&label_80C697B8,
        &&label_80C697BC,
        &&label_80C697C0,
        &&label_80C697C4,
        &&label_80C697C8,
        &&label_80C697CC,
        &&label_80C697D0,
        &&label_80C697D4,
        &&label_80C697D8,
        &&label_80C697DC,
        &&label_80C697E0,
        &&label_80C697E4,
        &&label_80C697E8,
        &&label_80C697EC,
        &&label_80C697F0,
        &&label_80C697F4,
        &&label_80C697F8,
        &&label_80C697FC,
        &&label_80C69800,
        &&label_80C69804,
        &&label_80C69808,
        &&label_80C6980C,
        &&label_80C69810,
        &&label_80C69814,
        &&label_80C69818,
        &&label_80C6981C,
        &&label_80C69820,
        &&label_80C69824,
        &&label_80C69828,
        &&label_80C6982C,
        &&label_80C69830,
        &&label_80C69834,
        &&label_80C69838,
        &&label_80C6983C,
        &&label_80C69840,
        &&label_80C69844,
        &&label_80C69848,
        &&label_80C6984C,
        &&label_80C69850,
        &&label_80C69854,
        &&label_80C69858,
        &&label_80C6985C,
        &&label_80C69860,
        &&label_80C69864,
        &&label_80C69868,
        &&label_80C6986C,
        &&label_80C69870,
        &&label_80C69874,
        &&label_80C69878,
        &&label_80C6987C,
        &&label_80C69880,
        &&label_80C69884,
        &&label_80C69888,
        &&label_80C6988C,
        &&label_80C69890,
        &&label_80C69894,
        &&label_80C69898,
        &&label_80C6989C,
        &&label_80C698A0,
        &&label_80C698A4,
        &&label_80C698A8,
        &&label_80C698AC,
        &&label_80C698B0,
        &&label_80C698B4,
        &&label_80C698B8,
        &&label_80C698BC,
        &&label_80C698C0,
        &&label_80C698C4,
        &&label_80C698C8,
        &&label_80C698CC,
        &&label_80C698D0,
        &&label_80C698D4,
        &&label_80C698D8,
        &&label_80C698DC,
        &&label_80C698E0,
        &&label_80C698E4,
        &&label_80C698E8,
        &&label_80C698EC,
        &&label_80C698F0,
        &&label_80C698F4,
        &&label_80C698F8,
        &&label_80C698FC,
        &&label_80C69900,
        &&label_80C69904,
        &&label_80C69908,
        &&label_80C6990C,
        &&label_80C69910,
        &&label_80C69914,
        &&label_80C69918,
        &&label_80C6991C,
        &&label_80C69920,
        &&label_80C69924,
        &&label_80C69928,
        &&label_80C6992C,
        &&label_80C69930,
        &&label_80C69934,
        &&label_80C69938,
        &&label_80C6993C,
        &&label_80C69940,
        &&label_80C69944,
        &&label_80C69948,
        &&label_80C6994C,
        &&label_80C69950,
        &&label_80C69954,
        &&label_80C69958,
        &&label_80C6995C,
        &&label_80C69960,
        &&label_80C69964,
        &&label_80C69968,
        &&label_80C6996C,
        &&label_80C69970,
        &&label_80C69974,
        &&label_80C69978,
        &&label_80C6997C,
        &&label_80C69980,
        &&label_80C69984,
        &&label_80C69988,
        &&label_80C6998C,
        &&label_80C69990,
        &&label_80C69994,
        &&label_80C69998,
        &&label_80C6999C,
        &&label_80C699A0,
        &&label_80C699A4,
        &&label_80C699A8,
        &&label_80C699AC,
        &&label_80C699B0,
        &&label_80C699B4,
        &&label_80C699B8,
        &&label_80C699BC,
        &&label_80C699C0,
        &&label_80C699C4,
        &&label_80C699C8,
        &&label_80C699CC,
        &&label_80C699D0,
        &&label_80C699D4,
        &&label_80C699D8,
        &&label_80C699DC,
        &&label_80C699E0,
        &&label_80C699E4,
        &&label_80C699E8,
        &&label_80C699EC,
        &&label_80C699F0,
        &&label_80C699F4,
        &&label_80C699F8,
        &&label_80C699FC,
        &&label_80C69A00,
        &&label_80C69A04,
        &&label_80C69A08,
        &&label_80C69A0C,
        &&label_80C69A10,
        &&label_80C69A14,
        &&label_80C69A18,
        &&label_80C69A1C,
        &&label_80C69A20,
        &&label_80C69A24,
        &&label_80C69A28,
        &&label_80C69A2C,
        &&label_80C69A30,
        &&label_80C69A34,
        &&label_80C69A38,
        &&label_80C69A3C,
        &&label_80C69A40,
        &&label_80C69A44,
        &&label_80C69A48,
        &&label_80C69A4C,
        &&label_80C69A50,
        &&label_80C69A54,
        &&label_80C69A58,
        &&label_80C69A5C,
        &&label_80C69A60,
        &&label_80C69A64,
        &&label_80C69A68,
        &&label_80C69A6C,
        &&label_80C69A70,
        &&label_80C69A74,
        &&label_80C69A78,
        &&label_80C69A7C,
        &&label_80C69A80,
        &&label_80C69A84,
        &&label_80C69A88,
        &&label_80C69A8C,
        &&label_80C69A90,
        &&label_80C69A94,
        &&label_80C69A98,
        &&label_80C69A9C,
        &&label_80C69AA0,
        &&label_80C69AA4,
        &&label_80C69AA8,
        &&label_80C69AAC,
        &&label_80C69AB0,
        &&label_80C69AB4,
        &&label_80C69AB8,
        &&label_80C69ABC,
        &&label_80C69AC0,
        &&label_80C69AC4,
        &&label_80C69AC8,
        &&label_80C69ACC,
        &&label_80C69AD0,
        &&label_80C69AD4,
        &&label_80C69AD8,
        &&label_80C69ADC,
        &&label_80C69AE0,
        &&label_80C69AE4,
        &&label_80C69AE8,
        &&label_80C69AEC,
        &&label_80C69AF0,
        &&label_80C69AF4,
        &&label_80C69AF8,
        &&label_80C69AFC,
        &&label_80C69B00,
        &&label_80C69B04,
        &&label_80C69B08,
        &&label_80C69B0C,
        &&label_80C69B10,
        &&label_80C69B14,
        &&label_80C69B18,
        &&label_80C69B1C,
        &&label_80C69B20,
        &&label_80C69B24,
        &&label_80C69B28,
        &&label_80C69B2C,
        &&label_80C69B30,
        &&label_80C69B34,
        &&label_80C69B38,
        &&label_80C69B3C,
        &&label_80C69B40,
        &&label_80C69B44,
        &&label_80C69B48,
        &&label_80C69B4C,
        &&label_80C69B50,
        &&label_80C69B54,
        &&label_80C69B58,
        &&label_80C69B5C,
        &&label_80C69B60,
        &&label_80C69B64,
        &&label_80C69B68,
        &&label_80C69B6C,
        &&label_80C69B70,
        &&label_80C69B74,
        &&label_80C69B78,
        &&label_80C69B7C,
        &&label_80C69B80,
        &&label_80C69B84,
        &&label_80C69B88,
        &&label_80C69B8C,
        &&label_80C69B90,
        &&label_80C69B94,
        &&label_80C69B98,
        &&label_80C69B9C,
        &&label_80C69BA0,
        &&label_80C69BA4,
        &&label_80C69BA8,
        &&label_80C69BAC,
        &&label_80C69BB0,
        &&label_80C69BB4,
        &&label_80C69BB8,
        &&label_80C69BBC,
        &&label_80C69BC0,
        &&label_80C69BC4,
        &&label_80C69BC8,
        &&label_80C69BCC,
        &&label_80C69BD0,
        &&label_80C69BD4,
        &&label_80C69BD8,
        &&label_80C69BDC,
        &&label_80C69BE0,
        &&label_80C69BE4,
        &&label_80C69BE8,
        &&label_80C69BEC,
        &&label_80C69BF0,
        &&label_80C69BF4,
        &&label_80C69BF8,
        &&label_80C69BFC,
        &&label_80C69C00,
        &&label_80C69C04,
        &&label_80C69C08,
        &&label_80C69C0C,
        &&label_80C69C10,
        &&label_80C69C14,
        &&label_80C69C18,
        &&label_80C69C1C,
        &&label_80C69C20,
        &&label_80C69C24,
        &&label_80C69C28,
        &&label_80C69C2C,
        &&label_80C69C30,
        &&label_80C69C34,
        &&label_80C69C38,
        &&label_80C69C3C,
        &&label_80C69C40,
        &&label_80C69C44,
        &&label_80C69C48,
        &&label_80C69C4C,
        &&label_80C69C50,
        &&label_80C69C54,
        &&label_80C69C58,
        &&label_80C69C5C,
        &&label_80C69C60,
        &&label_80C69C64,
        &&label_80C69C68,
        &&label_80C69C6C,
        &&label_80C69C70,
        &&label_80C69C74,
        &&label_80C69C78,
        &&label_80C69C7C,
        &&label_80C69C80,
        &&label_80C69C84,
        &&label_80C69C88,
        &&label_80C69C8C,
        &&label_80C69C90,
        &&label_80C69C94,
        &&label_80C69C98,
        &&label_80C69C9C,
        &&label_80C69CA0,
        &&label_80C69CA4,
        &&label_80C69CA8,
        &&label_80C69CAC,
        &&label_80C69CB0,
        &&label_80C69CB4,
        &&label_80C69CB8,
        &&label_80C69CBC,
        &&label_80C69CC0,
        &&label_80C69CC4,
        &&label_80C69CC8,
        &&label_80C69CCC,
        &&label_80C69CD0,
        &&label_80C69CD4,
        &&label_80C69CD8,
        &&label_80C69CDC,
        &&label_80C69CE0,
        &&label_80C69CE4,
        &&label_80C69CE8,
        &&label_80C69CEC,
        &&label_80C69CF0,
        &&label_80C69CF4,
        &&label_80C69CF8,
        &&label_80C69CFC,
        &&label_80C69D00,
        &&label_80C69D04,
        &&label_80C69D08,
        &&label_80C69D0C,
        &&label_80C69D10,
        &&label_80C69D14,
        &&label_80C69D18,
        &&label_80C69D1C,
        &&label_80C69D20,
        &&label_80C69D24,
        &&label_80C69D28,
        &&label_80C69D2C,
        &&label_80C69D30,
        &&label_80C69D34,
        &&label_80C69D38,
        &&label_80C69D3C,
        &&label_80C69D40,
        &&label_80C69D44,
        &&label_80C69D48,
        &&label_80C69D4C,
        &&label_80C69D50,
        &&label_80C69D54,
        &&label_80C69D58,
        &&label_80C69D5C,
        &&label_80C69D60,
        &&label_80C69D64,
        &&label_80C69D68,
        &&label_80C69D6C,
        &&label_80C69D70,
        &&label_80C69D74,
        &&label_80C69D78,
        &&label_80C69D7C,
        &&label_80C69D80,
        &&label_80C69D84,
        &&label_80C69D88,
        &&label_80C69D8C,
        &&label_80C69D90,
        &&label_80C69D94,
        &&label_80C69D98,
        &&label_80C69D9C,
        &&label_80C69DA0,
        &&label_80C69DA4,
        &&label_80C69DA8,
        &&label_80C69DAC,
        &&label_80C69DB0,
        &&label_80C69DB4,
        &&label_80C69DB8,
        &&label_80C69DBC,
        &&label_80C69DC0,
        &&label_80C69DC4,
        &&label_80C69DC8,
        &&label_80C69DCC,
        &&label_80C69DD0,
        &&label_80C69DD4,
        &&label_80C69DD8,
        &&label_80C69DDC,
        &&label_80C69DE0,
        &&label_80C69DE4,
        &&label_80C69DE8,
        &&label_80C69DEC,
        &&label_80C69DF0,
        &&label_80C69DF4,
        &&label_80C69DF8,
        &&label_80C69DFC,
        &&label_80C69E00,
        &&label_80C69E04,
        &&label_80C69E08,
        &&label_80C69E0C,
        &&label_80C69E10,
        &&label_80C69E14,
        &&label_80C69E18,
        &&label_80C69E1C,
        &&label_80C69E20,
        &&label_80C69E24,
        &&label_80C69E28,
        &&label_80C69E2C,
        &&label_80C69E30,
        &&label_80C69E34,
        &&label_80C69E38,
        &&label_80C69E3C,
        &&label_80C69E40,
        &&label_80C69E44,
        &&label_80C69E48,
        &&label_80C69E4C,
        &&label_80C69E50,
        &&label_80C69E54,
        &&label_80C69E58,
        &&label_80C69E5C,
        &&label_80C69E60,
        &&label_80C69E64,
        &&label_80C69E68,
        &&label_80C69E6C,
        &&label_80C69E70,
        &&label_80C69E74,
        &&label_80C69E78,
        &&label_80C69E7C,
        &&label_80C69E80,
        &&label_80C69E84,
        &&label_80C69E88,
        &&label_80C69E8C,
        &&label_80C69E90,
        &&label_80C69E94,
        &&label_80C69E98,
        &&label_80C69E9C,
        &&label_80C69EA0,
        &&label_80C69EA4,
        &&label_80C69EA8,
        &&label_80C69EAC,
        &&label_80C69EB0,
        &&label_80C69EB4,
        &&label_80C69EB8,
        &&label_80C69EBC,
        &&label_80C69EC0,
        &&label_80C69EC4,
        &&label_80C69EC8,
        &&label_80C69ECC,
        &&label_80C69ED0,
        &&label_80C69ED4,
        &&label_80C69ED8,
        &&label_80C69EDC,
        &&label_80C69EE0,
        &&label_80C69EE4,
        &&label_80C69EE8,
        &&label_80C69EEC,
        &&label_80C69EF0,
        &&label_80C69EF4,
        &&label_80C69EF8,
        &&label_80C69EFC,
        &&label_80C69F00,
        &&label_80C69F04,
        &&label_80C69F08,
        &&label_80C69F0C,
        &&label_80C69F10,
        &&label_80C69F14,
        &&label_80C69F18,
        &&label_80C69F1C,
        &&label_80C69F20,
        &&label_80C69F24,
        &&label_80C69F28,
        &&label_80C69F2C,
        &&label_80C69F30,
        &&label_80C69F34,
        &&label_80C69F38,
        &&label_80C69F3C,
        &&label_80C69F40,
        &&label_80C69F44,
        &&label_80C69F48,
        &&label_80C69F4C,
        &&label_80C69F50,
        &&label_80C69F54,
        &&label_80C69F58,
        &&label_80C69F5C,
        &&label_80C69F60,
        &&label_80C69F64,
        &&label_80C69F68,
        &&label_80C69F6C,
        &&label_80C69F70,
        &&label_80C69F74,
        &&label_80C69F78,
        &&label_80C69F7C,
        &&label_80C69F80,
        &&label_80C69F84,
        &&label_80C69F88,
        &&label_80C69F8C,
        &&label_80C69F90,
        &&label_80C69F94,
        &&label_80C69F98,
        &&label_80C69F9C,
        &&label_80C69FA0,
        &&label_80C69FA4,
        &&label_80C69FA8,
        &&label_80C69FAC,
        &&label_80C69FB0,
        &&label_80C69FB4,
        &&label_80C69FB8,
        &&label_80C69FBC,
        &&label_80C69FC0,
        &&label_80C69FC4,
        &&label_80C69FC8,
        &&label_80C69FCC,
        &&label_80C69FD0,
        &&label_80C69FD4,
        &&label_80C69FD8,
        &&label_80C69FDC,
        &&label_80C69FE0,
        &&label_80C69FE4,
        &&label_80C69FE8,
        &&label_80C69FEC,
        &&label_80C69FF0,
        &&label_80C69FF4,
        &&label_80C69FF8,
        &&label_80C69FFC,
        &&label_80C6A000,
        &&label_80C6A004,
        &&label_80C6A008,
        &&label_80C6A00C,
        &&label_80C6A010,
        &&label_80C6A014,
        &&label_80C6A018,
        &&label_80C6A01C,
        &&label_80C6A020,
        &&label_80C6A024,
        &&label_80C6A028,
        &&label_80C6A02C,
        &&label_80C6A030,
        &&label_80C6A034,
        &&label_80C6A038,
        &&label_80C6A03C,
        &&label_80C6A040,
        &&label_80C6A044,
        &&label_80C6A048,
        &&label_80C6A04C,
        &&label_80C6A050,
        &&label_80C6A054,
        &&label_80C6A058,
        &&label_80C6A05C,
        &&label_80C6A060,
        &&label_80C6A064,
        &&label_80C6A068,
        &&label_80C6A06C,
        &&label_80C6A070,
        &&label_80C6A074,
        &&label_80C6A078,
        &&label_80C6A07C,
        &&label_80C6A080,
        &&label_80C6A084,
        &&label_80C6A088,
        &&label_80C6A08C,
        &&label_80C6A090,
        &&label_80C6A094,
        &&label_80C6A098,
        &&label_80C6A09C,
        &&label_80C6A0A0,
        &&label_80C6A0A4,
        &&label_80C6A0A8,
        &&label_80C6A0AC,
        &&label_80C6A0B0,
        &&label_80C6A0B4,
        &&label_80C6A0B8,
        &&label_80C6A0BC,
        &&label_80C6A0C0,
        &&label_80C6A0C4,
        &&label_80C6A0C8,
        &&label_80C6A0CC,
        &&label_80C6A0D0,
        &&label_80C6A0D4,
        &&label_80C6A0D8,
        &&label_80C6A0DC,
        &&label_80C6A0E0,
        &&label_80C6A0E4,
        &&label_80C6A0E8,
        &&label_80C6A0EC,
        &&label_80C6A0F0,
        &&label_80C6A0F4,
        &&label_80C6A0F8,
        &&label_80C6A0FC,
        &&label_80C6A100,
        &&label_80C6A104,
        &&label_80C6A108,
        &&label_80C6A10C,
        &&label_80C6A110,
        &&label_80C6A114,
        &&label_80C6A118,
        &&label_80C6A11C,
        &&label_80C6A120,
        &&label_80C6A124,
        &&label_80C6A128,
        &&label_80C6A12C,
        &&label_80C6A130,
        &&label_80C6A134,
        &&label_80C6A138,
        &&label_80C6A13C,
        &&label_80C6A140,
        &&label_80C6A144,
        &&label_80C6A148,
        &&label_80C6A14C,
        &&label_80C6A150,
        &&label_80C6A154,
        &&label_80C6A158,
        &&label_80C6A15C,
        &&label_80C6A160,
        &&label_80C6A164,
        &&label_80C6A168,
        &&label_80C6A16C,
        &&label_80C6A170,
        &&label_80C6A174,
        &&label_80C6A178,
        &&label_80C6A17C,
        &&label_80C6A180,
        &&label_80C6A184,
        &&label_80C6A188,
        &&label_80C6A18C,
        &&label_80C6A190,
        &&label_80C6A194,
        &&label_80C6A198,
        &&label_80C6A19C,
        &&label_80C6A1A0,
        &&label_80C6A1A4,
        &&label_80C6A1A8,
        &&label_80C6A1AC,
        &&label_80C6A1B0,
        &&label_80C6A1B4,
        &&label_80C6A1B8,
        &&label_80C6A1BC,
        &&label_80C6A1C0,
        &&label_80C6A1C4,
        &&label_80C6A1C8,
        &&label_80C6A1CC,
        &&label_80C6A1D0,
        &&label_80C6A1D4,
        &&label_80C6A1D8,
        &&label_80C6A1DC,
        &&label_80C6A1E0,
        &&label_80C6A1E4,
        &&label_80C6A1E8,
        &&label_80C6A1EC,
        &&label_80C6A1F0,
        &&label_80C6A1F4,
        &&label_80C6A1F8,
        &&label_80C6A1FC,
        &&label_80C6A200,
        &&label_80C6A204,
        &&label_80C6A208,
        &&label_80C6A20C,
        &&label_80C6A210,
        &&label_80C6A214,
        &&label_80C6A218,
        &&label_80C6A21C,
        &&label_80C6A220,
        &&label_80C6A224,
        &&label_80C6A228,
        &&label_80C6A22C,
        &&label_80C6A230,
        &&label_80C6A234,
        &&label_80C6A238,
        &&label_80C6A23C,
        &&label_80C6A240,
        &&label_80C6A244,
        &&label_80C6A248,
        &&label_80C6A24C,
        &&label_80C6A250,
        &&label_80C6A254,
        &&label_80C6A258,
        &&label_80C6A25C,
        &&label_80C6A260,
        &&label_80C6A264,
        &&label_80C6A268,
        &&label_80C6A26C,
        &&label_80C6A270,
        &&label_80C6A274,
        &&label_80C6A278,
        &&label_80C6A27C,
        &&label_80C6A280,
        &&label_80C6A284,
        &&label_80C6A288,
        &&label_80C6A28C,
        &&label_80C6A290,
        &&label_80C6A294,
        &&label_80C6A298,
        &&label_80C6A29C,
        &&label_80C6A2A0,
        &&label_80C6A2A4,
        &&label_80C6A2A8,
        &&label_80C6A2AC,
        &&label_80C6A2B0,
        &&label_80C6A2B4,
        &&label_80C6A2B8,
        &&label_80C6A2BC,
        &&label_80C6A2C0,
        &&label_80C6A2C4,
        &&label_80C6A2C8,
        &&label_80C6A2CC,
        &&label_80C6A2D0,
        &&label_80C6A2D4,
        &&label_80C6A2D8,
        &&label_80C6A2DC,
        &&label_80C6A2E0,
        &&label_80C6A2E4,
        &&label_80C6A2E8,
        &&label_80C6A2EC,
        &&label_80C6A2F0,
        &&label_80C6A2F4,
        &&label_80C6A2F8,
        &&label_80C6A2FC,
        &&label_80C6A300,
        &&label_80C6A304,
        &&label_80C6A308,
        &&label_80C6A30C,
        &&label_80C6A310,
        &&label_80C6A314,
        &&label_80C6A318,
        &&label_80C6A31C,
        &&label_80C6A320,
        &&label_80C6A324,
        &&label_80C6A328,
        &&label_80C6A32C,
        &&label_80C6A330,
        &&label_80C6A334,
        &&label_80C6A338,
        &&label_80C6A33C,
        &&label_80C6A340,
        &&label_80C6A344,
        &&label_80C6A348,
        &&label_80C6A34C,
        &&label_80C6A350,
        &&label_80C6A354,
        &&label_80C6A358,
        &&label_80C6A35C,
        &&label_80C6A360,
        &&label_80C6A364,
        &&label_80C6A368,
        &&label_80C6A36C,
        &&label_80C6A370,
        &&label_80C6A374,
        &&label_80C6A378,
        &&label_80C6A37C,
        &&label_80C6A380,
        &&label_80C6A384,
        &&label_80C6A388,
        &&label_80C6A38C,
        &&label_80C6A390,
        &&label_80C6A394,
        &&label_80C6A398,
        &&label_80C6A39C,
        &&label_80C6A3A0,
        &&label_80C6A3A4,
        &&label_80C6A3A8,
        &&label_80C6A3AC,
        &&label_80C6A3B0,
        &&label_80C6A3B4,
        &&label_80C6A3B8,
        &&label_80C6A3BC,
        &&label_80C6A3C0,
        &&label_80C6A3C4,
        &&label_80C6A3C8,
        &&label_80C6A3CC,
        &&label_80C6A3D0,
        &&label_80C6A3D4,
        &&label_80C6A3D8,
        &&label_80C6A3DC,
        &&label_80C6A3E0,
        &&label_80C6A3E4,
        &&label_80C6A3E8,
        &&label_80C6A3EC,
        &&label_80C6A3F0,
        &&label_80C6A3F4,
        &&label_80C6A3F8,
        &&label_80C6A3FC,
        &&label_80C6A400,
        &&label_80C6A404,
        &&label_80C6A408,
        &&label_80C6A40C,
        &&label_80C6A410,
        &&label_80C6A414,
        &&label_80C6A418,
        &&label_80C6A41C,
        &&label_80C6A420,
        &&label_80C6A424,
        &&label_80C6A428,
        &&label_80C6A42C,
        &&label_80C6A430,
        &&label_80C6A434,
        &&label_80C6A438,
        &&label_80C6A43C,
        &&label_80C6A440,
        &&label_80C6A444,
        &&label_80C6A448,
        &&label_80C6A44C,
        &&label_80C6A450,
        &&label_80C6A454,
        &&label_80C6A458,
        &&label_80C6A45C,
        &&label_80C6A460,
        &&label_80C6A464,
        &&label_80C6A468,
        &&label_80C6A46C,
        &&label_80C6A470,
        &&label_80C6A474,
        &&label_80C6A478,
        &&label_80C6A47C,
        &&label_80C6A480,
        &&label_80C6A484,
        &&label_80C6A488,
        &&label_80C6A48C,
        &&label_80C6A490,
        &&label_80C6A494,
        &&label_80C6A498,
        &&label_80C6A49C,
        &&label_80C6A4A0,
        &&label_80C6A4A4,
        &&label_80C6A4A8,
        &&label_80C6A4AC,
        &&label_80C6A4B0,
        &&label_80C6A4B4,
        &&label_80C6A4B8,
        &&label_80C6A4BC,
        &&label_80C6A4C0,
        &&label_80C6A4C4,
        &&label_80C6A4C8,
        &&label_80C6A4CC,
        &&label_80C6A4D0,
        &&label_80C6A4D4,
        &&label_80C6A4D8,
        &&label_80C6A4DC,
        &&label_80C6A4E0,
        &&label_80C6A4E4,
        &&label_80C6A4E8,
        &&label_80C6A4EC,
        &&label_80C6A4F0,
        &&label_80C6A4F4,
        &&label_80C6A4F8,
        &&label_80C6A4FC,
        &&label_80C6A500,
        &&label_80C6A504,
        &&label_80C6A508,
        &&label_80C6A50C,
        &&label_80C6A510,
        &&label_80C6A514,
        &&label_80C6A518,
        &&label_80C6A51C,
        &&label_80C6A520,
        &&label_80C6A524,
        &&label_80C6A528,
        &&label_80C6A52C,
        &&label_80C6A530
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80C69060u && pc <= 0x80C6A530u && ((pc - 0x80C69060u) & 3u) == 0u)
            goto *pc_table_80C69060[(pc - 0x80C69060u) >> 2];
    }
    return;
label_80C69060:
    ctx->pc = 0x80C69060u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69060u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69060: stwu     r1, -16(r1)
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
label_80C69064:
    ctx->pc = 0x80C69064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C69064: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69068:
    ctx->pc = 0x80C69068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69068: stw     r0, 20(r1)
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
label_80C6906C:
    ctx->pc = 0x80C6906Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6906Cu)) return;
    // 80C6906C: cmpwi   r3, 2
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

label_80C69070:
    ctx->pc = 0x80C69070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69070u)) return;
    // 80C69070: bc    12, 2, 0x80C69B68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C69B68;
        }
    }

label_80C69074:
    ctx->pc = 0x80C69074u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69074u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C69074: bc    4, 0, 0x80C69088
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C69088;
        }
    }

label_80C69078:
    ctx->pc = 0x80C69078u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69078u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69078: cmpwi   r3, 0
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

label_80C6907C:
    ctx->pc = 0x80C6907Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6907Cu)) return;
    // 80C6907C: bc    12, 2, 0x80C69BA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C69BA8;
        }
    }

label_80C69080:
    ctx->pc = 0x80C69080u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69080u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C69080: bc    4, 0, 0x80C69090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C69090;
        }
    }

label_80C69084:
    ctx->pc = 0x80C69084u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69084u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C69084: b       0x80C69BA8
    {
            goto label_80C69BA8;
    }

label_80C69088:
    ctx->pc = 0x80C69088u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69088u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69088: cmpwi   r3, 4
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

label_80C6908C:
    ctx->pc = 0x80C6908Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6908Cu)) return;
    // 80C6908C: b       0x80C69BA8
    {
            goto label_80C69BA8;
    }

label_80C69090:
    ctx->pc = 0x80C69090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C69090: bl      0x8045DE7C
    {
            ctx->lr = 0x80C69094u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80C69094:
    ctx->pc = 0x80C69094u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69094u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C69094: bl      0x80460A60
    {
            ctx->lr = 0x80C69098u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80C69098:
    ctx->pc = 0x80C69098u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69098u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C69098: bl      0x80460A24
    {
            ctx->lr = 0x80C6909Cu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80C6909C:
    ctx->pc = 0x80C6909Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6909Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C6909C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C690A0:
    ctx->pc = 0x80C690A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690A0u)) return;
    // 80C690A0: bl      0x8045EC10
    {
            ctx->lr = 0x80C690A4u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C690A4:
    ctx->pc = 0x80C690A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C690A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C690A4: li      r3, 91
    ctx->gpr[3] = (u32)(s32)(91);

label_80C690A8:
    ctx->pc = 0x80C690A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690A8u)) return;
    // 80C690A8: bl      0x80406090
    {
            ctx->lr = 0x80C690ACu;
            ctx->pc = 0x80406090u;
            return;
    }

label_80C690AC:
    ctx->pc = 0x80C690ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C690ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C690AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C690B0:
    ctx->pc = 0x80C690B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690B0u)) return;
    // 80C690B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C690B4:
    ctx->pc = 0x80C690B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690B4u)) return;
    // 80C690B4: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C690B8:
    ctx->pc = 0x80C690B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690B8u)) return;
    // 80C690B8: addi    r5, r5, -27600
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27600);

label_80C690BC:
    ctx->pc = 0x80C690BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C690BC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C690BCu)) return;
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
label_80C690C0:
    ctx->pc = 0x80C690C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690C0u)) return;
    // 80C690C0: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C690C4:
    ctx->pc = 0x80C690C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690C4u)) return;
    // 80C690C4: addi    r5, r5, -27596
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27596);

label_80C690C8:
    ctx->pc = 0x80C690C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C690C8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C690C8u)) return;
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
label_80C690CC:
    ctx->pc = 0x80C690CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690CCu)) return;
    // 80C690CC: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C690D0:
    ctx->pc = 0x80C690D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690D0u)) return;
    // 80C690D0: addi    r5, r5, -27592
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27592);

label_80C690D4:
    ctx->pc = 0x80C690D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C690D4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C690D4u)) return;
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
label_80C690D8:
    ctx->pc = 0x80C690D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690D8u)) return;
    // 80C690D8: bl      0x8045C750
    {
            ctx->lr = 0x80C690DCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C690DC:
    ctx->pc = 0x80C690DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C690DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C690DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C690E0:
    ctx->pc = 0x80C690E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690E0u)) return;
    // 80C690E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C690E4:
    ctx->pc = 0x80C690E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690E4u)) return;
    // 80C690E4: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C690E8:
    ctx->pc = 0x80C690E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690E8u)) return;
    // 80C690E8: addi    r5, r5, -4864
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4864);

label_80C690EC:
    ctx->pc = 0x80C690ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690ECu)) return;
    // 80C690EC: li      r6, 2034
    ctx->gpr[6] = (u32)(s32)(2034);

label_80C690F0:
    ctx->pc = 0x80C690F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690F0u)) return;
    // 80C690F0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C690F4:
    ctx->pc = 0x80C690F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690F4u)) return;
    // 80C690F4: bl      0x8045C7B4
    {
            ctx->lr = 0x80C690F8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C690F8:
    ctx->pc = 0x80C690F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C690F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C690F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C690FC:
    ctx->pc = 0x80C690FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C690FCu)) return;
    // 80C690FC: bl      0x8045F220
    {
            ctx->lr = 0x80C69100u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C69100:
    ctx->pc = 0x80C69100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C69100: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C69104:
    ctx->pc = 0x80C69104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69104u)) return;
    // 80C69104: addi    r4, r4, -27588
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27588);

label_80C69108:
    ctx->pc = 0x80C69108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69108: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C69108u)) return;
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
label_80C6910C:
    ctx->pc = 0x80C6910Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6910Cu)) return;
    // 80C6910C: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C69110:
    ctx->pc = 0x80C69110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69110u)) return;
    // 80C69110: addi    r4, r4, -27584
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27584);

label_80C69114:
    ctx->pc = 0x80C69114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69114: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C69114u)) return;
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
label_80C69118:
    ctx->pc = 0x80C69118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69118u)) return;
    // 80C69118: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C6911C:
    ctx->pc = 0x80C6911Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6911Cu)) return;
    // 80C6911C: addi    r4, r4, -27580
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27580);

label_80C69120:
    ctx->pc = 0x80C69120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C69120: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C69120u)) return;
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
label_80C69124:
    ctx->pc = 0x80C69124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69124u)) return;
    // 80C69124: bl      0x8045EF2C
    {
            ctx->lr = 0x80C69128u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C69128:
    ctx->pc = 0x80C69128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69128: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C6912C:
    ctx->pc = 0x80C6912Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6912Cu)) return;
    // 80C6912C: bl      0x8045F220
    {
            ctx->lr = 0x80C69130u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C69130:
    ctx->pc = 0x80C69130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C69130: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C69134:
    ctx->pc = 0x80C69134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69134u)) return;
    // 80C69134: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C69138:
    ctx->pc = 0x80C69138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69138u)) return;
    // 80C69138: addi    r5, r5, -643
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-643);

label_80C6913C:
    ctx->pc = 0x80C6913Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6913Cu)) return;
    // 80C6913C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C69140:
    ctx->pc = 0x80C69140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69140u)) return;
    // 80C69140: bl      0x8045EEA8
    {
            ctx->lr = 0x80C69144u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C69144:
    ctx->pc = 0x80C69144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69144: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C69148:
    ctx->pc = 0x80C69148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69148u)) return;
    // 80C69148: bl      0x8045F7C8
    {
            ctx->lr = 0x80C6914Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C6914C:
    ctx->pc = 0x80C6914Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6914Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C6914C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69150:
    ctx->pc = 0x80C69150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69150u)) return;
    // 80C69150: bl      0x8045F220
    {
            ctx->lr = 0x80C69154u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C69154:
    ctx->pc = 0x80C69154u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69154u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C69154: bl      0x8045EB8C
    {
            ctx->lr = 0x80C69158u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C69158:
    ctx->pc = 0x80C69158u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69158u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69158: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C6915C:
    ctx->pc = 0x80C6915Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6915Cu)) return;
    // 80C6915C: bl      0x8045F220
    {
            ctx->lr = 0x80C69160u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C69160:
    ctx->pc = 0x80C69160u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69160u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C69160: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80C69164:
    ctx->pc = 0x80C69164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69164u)) return;
    // 80C69164: addi    r4, r4, 29640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29640);

label_80C69168:
    ctx->pc = 0x80C69168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69168u)) return;
    // 80C69168: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80C6916C:
    ctx->pc = 0x80C6916Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6916Cu)) return;
    // 80C6916C: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80C69170:
    ctx->pc = 0x80C69170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69170u)) return;
    // 80C69170: lis     r6, -27426
    ctx->gpr[6] = ((u32)(s32)(-27426) << 16);

label_80C69174:
    ctx->pc = 0x80C69174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69174u)) return;
    // 80C69174: addi    r6, r6, -27576
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27576);

label_80C69178:
    ctx->pc = 0x80C69178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C69178: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C69178u)) return;
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
label_80C6917C:
    ctx->pc = 0x80C6917Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6917Cu)) return;
    // 80C6917C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C69180:
    ctx->pc = 0x80C69180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69180u)) return;
    // 80C69180: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C69184:
    ctx->pc = 0x80C69184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69184u)) return;
    // 80C69184: bl      0x8045EBE4
    {
            ctx->lr = 0x80C69188u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C69188:
    ctx->pc = 0x80C69188u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69188u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69188: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C6918C:
    ctx->pc = 0x80C6918Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6918Cu)) return;
    // 80C6918C: bl      0x8045F220
    {
            ctx->lr = 0x80C69190u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C69190:
    ctx->pc = 0x80C69190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69190u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C69190: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C69194:
    ctx->pc = 0x80C69194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69194u)) return;
    // 80C69194: addi    r4, r4, -27572
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27572);

label_80C69198:
    ctx->pc = 0x80C69198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C69198: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C69198u)) return;
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
label_80C6919C:
    ctx->pc = 0x80C6919Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6919Cu)) return;
    // 80C6919C: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C691A0:
    ctx->pc = 0x80C691A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691A0u)) return;
    // 80C691A0: addi    r4, r4, -27568
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27568);

label_80C691A4:
    ctx->pc = 0x80C691A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C691A4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C691A4u)) return;
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
label_80C691A8:
    ctx->pc = 0x80C691A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691A8u)) return;
    // 80C691A8: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C691AC:
    ctx->pc = 0x80C691ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691ACu)) return;
    // 80C691AC: addi    r4, r4, -27564
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27564);

label_80C691B0:
    ctx->pc = 0x80C691B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C691B0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C691B0u)) return;
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
label_80C691B4:
    ctx->pc = 0x80C691B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691B4u)) return;
    // 80C691B4: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C691B8:
    ctx->pc = 0x80C691B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691B8u)) return;
    // 80C691B8: addi    r4, r4, -27560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27560);

label_80C691BC:
    ctx->pc = 0x80C691BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C691BC: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C691BCu)) return;
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
label_80C691C0:
    ctx->pc = 0x80C691C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691C0u)) return;
    // 80C691C0: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C691C4:
    ctx->pc = 0x80C691C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691C4u)) return;
    // 80C691C4: addi    r4, r4, -27556
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27556);

label_80C691C8:
    ctx->pc = 0x80C691C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C691C8: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C691C8u)) return;
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
label_80C691CC:
    ctx->pc = 0x80C691CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691CCu)) return;
    // 80C691CC: bl      0x8045E570
    {
            ctx->lr = 0x80C691D0u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80C691D0:
    ctx->pc = 0x80C691D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C691D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80C691D0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C691D4:
    ctx->pc = 0x80C691D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691D4u)) return;
    // 80C691D4: lis     r4, -32676
    ctx->gpr[4] = ((u32)(s32)(-32676) << 16);

label_80C691D8:
    ctx->pc = 0x80C691D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691D8u)) return;
    // 80C691D8: addi    r4, r4, 13404
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13404);

label_80C691DC:
    ctx->pc = 0x80C691DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691DCu)) return;
    // 80C691DC: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C691E0:
    ctx->pc = 0x80C691E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691E0u)) return;
    // 80C691E0: addi    r5, r5, -27552
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27552);

label_80C691E4:
    ctx->pc = 0x80C691E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C691E4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C691E4u)) return;
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
label_80C691E8:
    ctx->pc = 0x80C691E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691E8u)) return;
    // 80C691E8: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C691EC:
    ctx->pc = 0x80C691ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691ECu)) return;
    // 80C691EC: addi    r5, r5, -27548
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27548);

label_80C691F0:
    ctx->pc = 0x80C691F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C691F0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C691F0u)) return;
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
label_80C691F4:
    ctx->pc = 0x80C691F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691F4u)) return;
    // 80C691F4: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C691F8:
    ctx->pc = 0x80C691F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691F8u)) return;
    // 80C691F8: addi    r5, r5, -27544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27544);

label_80C691FC:
    ctx->pc = 0x80C691FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C691FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C691FC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C691FCu)) return;
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
label_80C69200:
    ctx->pc = 0x80C69200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69200u)) return;
    // 80C69200: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C69204:
    ctx->pc = 0x80C69204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69204u)) return;
    // 80C69204: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C69208:
    ctx->pc = 0x80C69208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69208u)) return;
    // 80C69208: addi    r6, r6, -22788
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22788);

label_80C6920C:
    ctx->pc = 0x80C6920Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6920Cu)) return;
    // 80C6920C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C69210:
    ctx->pc = 0x80C69210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69210u)) return;
    // 80C69210: bl      0x8045ED84
    {
            ctx->lr = 0x80C69214u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80C69214:
    ctx->pc = 0x80C69214u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69214u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69214: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C69218:
    ctx->pc = 0x80C69218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69218u)) return;
    // 80C69218: bl      0x8045F7C8
    {
            ctx->lr = 0x80C6921Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C6921C:
    ctx->pc = 0x80C6921Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6921Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C6921C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C69220:
    ctx->pc = 0x80C69220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69220u)) return;
    // 80C69220: bl      0x8045EC10
    {
            ctx->lr = 0x80C69224u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C69224:
    ctx->pc = 0x80C69224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69224: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C69228:
    ctx->pc = 0x80C69228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69228u)) return;
    // 80C69228: bl      0x8045F220
    {
            ctx->lr = 0x80C6922Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C6922C:
    ctx->pc = 0x80C6922Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6922Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C6922C: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C69230:
    ctx->pc = 0x80C69230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69230u)) return;
    // 80C69230: addi    r4, r4, -27540
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27540);

label_80C69234:
    ctx->pc = 0x80C69234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69234: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C69234u)) return;
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
label_80C69238:
    ctx->pc = 0x80C69238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69238u)) return;
    // 80C69238: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C6923C:
    ctx->pc = 0x80C6923Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6923Cu)) return;
    // 80C6923C: addi    r4, r4, -27536
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27536);

label_80C69240:
    ctx->pc = 0x80C69240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69240: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C69240u)) return;
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
label_80C69244:
    ctx->pc = 0x80C69244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69244u)) return;
    // 80C69244: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C69248:
    ctx->pc = 0x80C69248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69248u)) return;
    // 80C69248: addi    r4, r4, -27532
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27532);

label_80C6924C:
    ctx->pc = 0x80C6924Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6924Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6924C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C6924Cu)) return;
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
label_80C69250:
    ctx->pc = 0x80C69250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69250u)) return;
    // 80C69250: bl      0x8045EF2C
    {
            ctx->lr = 0x80C69254u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C69254:
    ctx->pc = 0x80C69254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69254: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C69258:
    ctx->pc = 0x80C69258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69258u)) return;
    // 80C69258: bl      0x8045F220
    {
            ctx->lr = 0x80C6925Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C6925C:
    ctx->pc = 0x80C6925Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6925Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C6925C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C69260:
    ctx->pc = 0x80C69260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69260u)) return;
    // 80C69260: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C69264:
    ctx->pc = 0x80C69264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69264u)) return;
    // 80C69264: addi    r5, r5, -22784
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-22784);

label_80C69268:
    ctx->pc = 0x80C69268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69268u)) return;
    // 80C69268: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C6926C:
    ctx->pc = 0x80C6926Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6926Cu)) return;
    // 80C6926C: bl      0x8045EEA8
    {
            ctx->lr = 0x80C69270u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C69270:
    ctx->pc = 0x80C69270u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69270u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69270: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C69274:
    ctx->pc = 0x80C69274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69274u)) return;
    // 80C69274: bl      0x8045F220
    {
            ctx->lr = 0x80C69278u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C69278:
    ctx->pc = 0x80C69278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C69278: bl      0x8045EB8C
    {
            ctx->lr = 0x80C6927Cu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C6927C:
    ctx->pc = 0x80C6927Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6927Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C6927C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C69280:
    ctx->pc = 0x80C69280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69280u)) return;
    // 80C69280: bl      0x8045F220
    {
            ctx->lr = 0x80C69284u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C69284:
    ctx->pc = 0x80C69284u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69284u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C69284: lis     r4, -27425
    ctx->gpr[4] = ((u32)(s32)(-27425) << 16);

label_80C69288:
    ctx->pc = 0x80C69288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69288u)) return;
    // 80C69288: addi    r4, r4, -8720
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8720);

label_80C6928C:
    ctx->pc = 0x80C6928Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6928Cu)) return;
    // 80C6928C: lis     r5, -28548
    ctx->gpr[5] = ((u32)(s32)(-28548) << 16);

label_80C69290:
    ctx->pc = 0x80C69290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69290u)) return;
    // 80C69290: addi    r5, r5, -23912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23912);

label_80C69294:
    ctx->pc = 0x80C69294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69294u)) return;
    // 80C69294: lis     r6, -27426
    ctx->gpr[6] = ((u32)(s32)(-27426) << 16);

label_80C69298:
    ctx->pc = 0x80C69298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69298u)) return;
    // 80C69298: addi    r6, r6, -27576
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27576);

label_80C6929C:
    ctx->pc = 0x80C6929Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6929Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C6929C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C6929Cu)) return;
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
label_80C692A0:
    ctx->pc = 0x80C692A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C692A0u)) return;
    // 80C692A0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C692A4:
    ctx->pc = 0x80C692A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C692A4u)) return;
    // 80C692A4: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80C692A8:
    ctx->pc = 0x80C692A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C692A8u)) return;
    // 80C692A8: bl      0x8045EBE4
    {
            ctx->lr = 0x80C692ACu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C692AC:
    ctx->pc = 0x80C692ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C692ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C692AC: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80C692B0:
    ctx->pc = 0x80C692B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C692B0u)) return;
    // 80C692B0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C692B4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C692B4:
    ctx->pc = 0x80C692B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C692B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C692B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C692B8:
    ctx->pc = 0x80C692B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C692B8u)) return;
    // 80C692B8: bl      0x8045F220
    {
            ctx->lr = 0x80C692BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C692BC:
    ctx->pc = 0x80C692BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C692BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C692BC: bl      0x8045E6B8
    {
            ctx->lr = 0x80C692C0u;
            ctx->pc = 0x8045E6B8u;
            return;
    }

label_80C692C0:
    ctx->pc = 0x80C692C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C692C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C692C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C692C4:
    ctx->pc = 0x80C692C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C692C4u)) return;
    // 80C692C4: bl      0x8045F220
    {
            ctx->lr = 0x80C692C8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C692C8:
    ctx->pc = 0x80C692C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C692C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C692C8: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80C692CC:
    ctx->pc = 0x80C692CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C692CCu)) return;
    // 80C692CC: addi    r4, r4, -9384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9384);

label_80C692D0:
    ctx->pc = 0x80C692D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C692D0u)) return;
    // 80C692D0: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80C692D4:
    ctx->pc = 0x80C692D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C692D4u)) return;
    // 80C692D4: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80C692D8:
    ctx->pc = 0x80C692D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C692D8u)) return;
    // 80C692D8: lis     r6, -27426
    ctx->gpr[6] = ((u32)(s32)(-27426) << 16);

label_80C692DC:
    ctx->pc = 0x80C692DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C692DCu)) return;
    // 80C692DC: addi    r6, r6, -27576
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27576);

label_80C692E0:
    ctx->pc = 0x80C692E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C692E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C692E0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C692E0u)) return;
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
label_80C692E4:
    ctx->pc = 0x80C692E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C692E4u)) return;
    // 80C692E4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C692E8:
    ctx->pc = 0x80C692E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C692E8u)) return;
    // 80C692E8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C692EC:
    ctx->pc = 0x80C692ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C692ECu)) return;
    // 80C692EC: bl      0x8045EBE4
    {
            ctx->lr = 0x80C692F0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C692F0:
    ctx->pc = 0x80C692F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C692F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C692F0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C692F4:
    ctx->pc = 0x80C692F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C692F4u)) return;
    // 80C692F4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C692F8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C692F8:
    ctx->pc = 0x80C692F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C692F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C692F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C692FC:
    ctx->pc = 0x80C692FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C692FCu)) return;
    // 80C692FC: bl      0x8045F220
    {
            ctx->lr = 0x80C69300u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C69300:
    ctx->pc = 0x80C69300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C69300: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C69304:
    ctx->pc = 0x80C69304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69304u)) return;
    // 80C69304: addi    r4, r4, -27528
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27528);

label_80C69308:
    ctx->pc = 0x80C69308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69308: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C69308u)) return;
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
label_80C6930C:
    ctx->pc = 0x80C6930Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6930Cu)) return;
    // 80C6930C: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C69310:
    ctx->pc = 0x80C69310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69310u)) return;
    // 80C69310: addi    r4, r4, -27536
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27536);

label_80C69314:
    ctx->pc = 0x80C69314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69314: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C69314u)) return;
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
label_80C69318:
    ctx->pc = 0x80C69318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69318u)) return;
    // 80C69318: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C6931C:
    ctx->pc = 0x80C6931Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6931Cu)) return;
    // 80C6931C: addi    r4, r4, -27524
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27524);

label_80C69320:
    ctx->pc = 0x80C69320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C69320: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C69320u)) return;
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
label_80C69324:
    ctx->pc = 0x80C69324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69324u)) return;
    // 80C69324: bl      0x8045EF2C
    {
            ctx->lr = 0x80C69328u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C69328:
    ctx->pc = 0x80C69328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69328: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C6932C:
    ctx->pc = 0x80C6932Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6932Cu)) return;
    // 80C6932C: bl      0x8045F220
    {
            ctx->lr = 0x80C69330u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C69330:
    ctx->pc = 0x80C69330u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69330u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C69330: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_80C69334:
    ctx->pc = 0x80C69334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69334u)) return;
    // 80C69334: addi    r4, r4, -32
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32);

label_80C69338:
    ctx->pc = 0x80C69338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69338u)) return;
    // 80C69338: li      r5, 7864
    ctx->gpr[5] = (u32)(s32)(7864);

label_80C6933C:
    ctx->pc = 0x80C6933Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6933Cu)) return;
    // 80C6933C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C69340:
    ctx->pc = 0x80C69340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69340u)) return;
    // 80C69340: bl      0x8045EEA8
    {
            ctx->lr = 0x80C69344u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C69344:
    ctx->pc = 0x80C69344u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69344u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C69344: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69348:
    ctx->pc = 0x80C69348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69348u)) return;
    // 80C69348: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C6934C:
    ctx->pc = 0x80C6934Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6934Cu)) return;
    // 80C6934C: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69350:
    ctx->pc = 0x80C69350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69350u)) return;
    // 80C69350: addi    r5, r5, -27520
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27520);

label_80C69354:
    ctx->pc = 0x80C69354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69354: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69354u)) return;
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
label_80C69358:
    ctx->pc = 0x80C69358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69358u)) return;
    // 80C69358: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C6935C:
    ctx->pc = 0x80C6935Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6935Cu)) return;
    // 80C6935C: addi    r5, r5, -27516
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27516);

label_80C69360:
    ctx->pc = 0x80C69360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69360: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69360u)) return;
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
label_80C69364:
    ctx->pc = 0x80C69364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69364u)) return;
    // 80C69364: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69368:
    ctx->pc = 0x80C69368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69368u)) return;
    // 80C69368: addi    r5, r5, -27512
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27512);

label_80C6936C:
    ctx->pc = 0x80C6936Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6936Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6936C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6936Cu)) return;
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
label_80C69370:
    ctx->pc = 0x80C69370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69370u)) return;
    // 80C69370: bl      0x8045C750
    {
            ctx->lr = 0x80C69374u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C69374:
    ctx->pc = 0x80C69374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C69374: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69378:
    ctx->pc = 0x80C69378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69378u)) return;
    // 80C69378: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C6937C:
    ctx->pc = 0x80C6937Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6937Cu)) return;
    // 80C6937C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C69380:
    ctx->pc = 0x80C69380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69380u)) return;
    // 80C69380: addi    r5, r6, -2048
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2048);

label_80C69384:
    ctx->pc = 0x80C69384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69384u)) return;
    // 80C69384: addi    r6, r6, -22542
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22542);

label_80C69388:
    ctx->pc = 0x80C69388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69388u)) return;
    // 80C69388: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C6938C:
    ctx->pc = 0x80C6938Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6938Cu)) return;
    // 80C6938C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C69390u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C69390:
    ctx->pc = 0x80C69390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69390: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C69394:
    ctx->pc = 0x80C69394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69394u)) return;
    // 80C69394: bl      0x8045F220
    {
            ctx->lr = 0x80C69398u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C69398:
    ctx->pc = 0x80C69398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C69398: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C6939C:
    ctx->pc = 0x80C6939Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6939Cu)) return;
    // 80C6939C: addi    r4, r4, 20324
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20324);

label_80C693A0:
    ctx->pc = 0x80C693A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693A0u)) return;
    // 80C693A0: lis     r5, -28548
    ctx->gpr[5] = ((u32)(s32)(-28548) << 16);

label_80C693A4:
    ctx->pc = 0x80C693A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693A4u)) return;
    // 80C693A4: addi    r5, r5, -23912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23912);

label_80C693A8:
    ctx->pc = 0x80C693A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693A8u)) return;
    // 80C693A8: lis     r6, -27426
    ctx->gpr[6] = ((u32)(s32)(-27426) << 16);

label_80C693AC:
    ctx->pc = 0x80C693ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693ACu)) return;
    // 80C693AC: addi    r6, r6, -27576
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27576);

label_80C693B0:
    ctx->pc = 0x80C693B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C693B0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C693B0u)) return;
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
label_80C693B4:
    ctx->pc = 0x80C693B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693B4u)) return;
    // 80C693B4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C693B8:
    ctx->pc = 0x80C693B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693B8u)) return;
    // 80C693B8: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80C693BC:
    ctx->pc = 0x80C693BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693BCu)) return;
    // 80C693BC: bl      0x8045EBE4
    {
            ctx->lr = 0x80C693C0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C693C0:
    ctx->pc = 0x80C693C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C693C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C693C0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C693C4:
    ctx->pc = 0x80C693C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693C4u)) return;
    // 80C693C4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C693C8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C693C8:
    ctx->pc = 0x80C693C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C693C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C693C8: li      r3, 1183
    ctx->gpr[3] = (u32)(s32)(1183);

label_80C693CC:
    ctx->pc = 0x80C693CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693CCu)) return;
    // 80C693CC: bl      0x8045BFA0
    {
            ctx->lr = 0x80C693D0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C693D0:
    ctx->pc = 0x80C693D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C693D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C693D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C693D4:
    ctx->pc = 0x80C693D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693D4u)) return;
    // 80C693D4: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C693D8:
    ctx->pc = 0x80C693D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693D8u)) return;
    // 80C693D8: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C693DC:
    ctx->pc = 0x80C693DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C693DC: lwz     r0, 0(r4)
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
label_80C693E0:
    ctx->pc = 0x80C693E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693E0u)) return;
    // 80C693E0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C693E4:
    ctx->pc = 0x80C693E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693E4u)) return;
    // 80C693E4: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C693E8:
    ctx->pc = 0x80C693E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693E8u)) return;
    // 80C693E8: addi    r4, r4, -26732
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26732);

label_80C693EC:
    ctx->pc = 0x80C693ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C693EC: lwzx    r4, r4, r0
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
label_80C693F0:
    ctx->pc = 0x80C693F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C693F0: lwz     r4, 0(r4)
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
label_80C693F4:
    ctx->pc = 0x80C693F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693F4u)) return;
    // 80C693F4: bl      0x8045F608
    {
            ctx->lr = 0x80C693F8u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C693F8:
    ctx->pc = 0x80C693F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C693F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C693F8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C693FC:
    ctx->pc = 0x80C693FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C693FCu)) return;
    // 80C693FC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C69400u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C69400:
    ctx->pc = 0x80C69400u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69400u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C69400: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69404:
    ctx->pc = 0x80C69404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69404u)) return;
    // 80C69404: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80C69408:
    ctx->pc = 0x80C69408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69408u)) return;
    // 80C69408: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C6940C:
    ctx->pc = 0x80C6940Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6940Cu)) return;
    // 80C6940C: addi    r5, r5, -27508
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27508);

label_80C69410:
    ctx->pc = 0x80C69410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69410: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69410u)) return;
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
label_80C69414:
    ctx->pc = 0x80C69414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69414u)) return;
    // 80C69414: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69418:
    ctx->pc = 0x80C69418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69418u)) return;
    // 80C69418: addi    r5, r5, -27504
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27504);

label_80C6941C:
    ctx->pc = 0x80C6941Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6941Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6941C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6941Cu)) return;
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
label_80C69420:
    ctx->pc = 0x80C69420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69420u)) return;
    // 80C69420: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69424:
    ctx->pc = 0x80C69424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69424u)) return;
    // 80C69424: addi    r5, r5, -27500
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27500);

label_80C69428:
    ctx->pc = 0x80C69428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C69428: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69428u)) return;
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
label_80C6942C:
    ctx->pc = 0x80C6942Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6942Cu)) return;
    // 80C6942C: bl      0x8045C750
    {
            ctx->lr = 0x80C69430u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C69430:
    ctx->pc = 0x80C69430u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69430u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C69430: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69434:
    ctx->pc = 0x80C69434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69434u)) return;
    // 80C69434: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80C69438:
    ctx->pc = 0x80C69438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69438u)) return;
    // 80C69438: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C6943C:
    ctx->pc = 0x80C6943Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6943Cu)) return;
    // 80C6943C: addi    r5, r6, -2048
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2048);

label_80C69440:
    ctx->pc = 0x80C69440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69440u)) return;
    // 80C69440: addi    r6, r6, -22542
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22542);

label_80C69444:
    ctx->pc = 0x80C69444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69444u)) return;
    // 80C69444: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C69448:
    ctx->pc = 0x80C69448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69448u)) return;
    // 80C69448: bl      0x8045C7B4
    {
            ctx->lr = 0x80C6944Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C6944C:
    ctx->pc = 0x80C6944Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6944Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C6944C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80C69450:
    ctx->pc = 0x80C69450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69450u)) return;
    // 80C69450: bl      0x8045F7C8
    {
            ctx->lr = 0x80C69454u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C69454:
    ctx->pc = 0x80C69454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C69454: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69458:
    ctx->pc = 0x80C69458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69458u)) return;
    // 80C69458: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80C6945C:
    ctx->pc = 0x80C6945Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6945Cu)) return;
    // 80C6945C: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69460:
    ctx->pc = 0x80C69460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69460u)) return;
    // 80C69460: addi    r5, r5, -27520
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27520);

label_80C69464:
    ctx->pc = 0x80C69464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69464: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69464u)) return;
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
label_80C69468:
    ctx->pc = 0x80C69468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69468u)) return;
    // 80C69468: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C6946C:
    ctx->pc = 0x80C6946Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6946Cu)) return;
    // 80C6946C: addi    r5, r5, -27516
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27516);

label_80C69470:
    ctx->pc = 0x80C69470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69470: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69470u)) return;
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
label_80C69474:
    ctx->pc = 0x80C69474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69474u)) return;
    // 80C69474: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69478:
    ctx->pc = 0x80C69478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69478u)) return;
    // 80C69478: addi    r5, r5, -27512
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27512);

label_80C6947C:
    ctx->pc = 0x80C6947Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6947Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6947C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6947Cu)) return;
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
label_80C69480:
    ctx->pc = 0x80C69480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69480u)) return;
    // 80C69480: bl      0x8045C750
    {
            ctx->lr = 0x80C69484u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C69484:
    ctx->pc = 0x80C69484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C69484: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69488:
    ctx->pc = 0x80C69488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69488u)) return;
    // 80C69488: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80C6948C:
    ctx->pc = 0x80C6948Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6948Cu)) return;
    // 80C6948C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C69490:
    ctx->pc = 0x80C69490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69490u)) return;
    // 80C69490: addi    r5, r6, -2048
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2048);

label_80C69494:
    ctx->pc = 0x80C69494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69494u)) return;
    // 80C69494: addi    r6, r6, -22542
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22542);

label_80C69498:
    ctx->pc = 0x80C69498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69498u)) return;
    // 80C69498: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C6949C:
    ctx->pc = 0x80C6949Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6949Cu)) return;
    // 80C6949C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C694A0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C694A0:
    ctx->pc = 0x80C694A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C694A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C694A0: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80C694A4:
    ctx->pc = 0x80C694A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C694A4u)) return;
    // 80C694A4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C694A8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C694A8:
    ctx->pc = 0x80C694A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C694A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C694A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C694AC:
    ctx->pc = 0x80C694ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C694ACu)) return;
    // 80C694AC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80C694B0:
    ctx->pc = 0x80C694B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C694B0u)) return;
    // 80C694B0: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C694B4:
    ctx->pc = 0x80C694B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C694B4u)) return;
    // 80C694B4: addi    r5, r5, -27508
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27508);

label_80C694B8:
    ctx->pc = 0x80C694B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C694B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C694B8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C694B8u)) return;
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
label_80C694BC:
    ctx->pc = 0x80C694BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C694BCu)) return;
    // 80C694BC: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C694C0:
    ctx->pc = 0x80C694C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C694C0u)) return;
    // 80C694C0: addi    r5, r5, -27504
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27504);

label_80C694C4:
    ctx->pc = 0x80C694C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C694C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C694C4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C694C4u)) return;
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
label_80C694C8:
    ctx->pc = 0x80C694C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C694C8u)) return;
    // 80C694C8: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C694CC:
    ctx->pc = 0x80C694CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C694CCu)) return;
    // 80C694CC: addi    r5, r5, -27500
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27500);

label_80C694D0:
    ctx->pc = 0x80C694D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C694D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C694D0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C694D0u)) return;
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
label_80C694D4:
    ctx->pc = 0x80C694D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C694D4u)) return;
    // 80C694D4: bl      0x8045C750
    {
            ctx->lr = 0x80C694D8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C694D8:
    ctx->pc = 0x80C694D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C694D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C694D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C694DC:
    ctx->pc = 0x80C694DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C694DCu)) return;
    // 80C694DC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80C694E0:
    ctx->pc = 0x80C694E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C694E0u)) return;
    // 80C694E0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C694E4:
    ctx->pc = 0x80C694E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C694E4u)) return;
    // 80C694E4: addi    r5, r6, -2048
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2048);

label_80C694E8:
    ctx->pc = 0x80C694E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C694E8u)) return;
    // 80C694E8: addi    r6, r6, -22542
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22542);

label_80C694EC:
    ctx->pc = 0x80C694ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C694ECu)) return;
    // 80C694EC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C694F0:
    ctx->pc = 0x80C694F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C694F0u)) return;
    // 80C694F0: bl      0x8045C7B4
    {
            ctx->lr = 0x80C694F4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C694F4:
    ctx->pc = 0x80C694F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C694F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C694F4: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80C694F8:
    ctx->pc = 0x80C694F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C694F8u)) return;
    // 80C694F8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C694FCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C694FC:
    ctx->pc = 0x80C694FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C694FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C694FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69500:
    ctx->pc = 0x80C69500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69500u)) return;
    // 80C69500: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80C69504:
    ctx->pc = 0x80C69504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69504u)) return;
    // 80C69504: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69508:
    ctx->pc = 0x80C69508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69508u)) return;
    // 80C69508: addi    r5, r5, -27520
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27520);

label_80C6950C:
    ctx->pc = 0x80C6950Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6950Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6950C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6950Cu)) return;
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
label_80C69510:
    ctx->pc = 0x80C69510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69510u)) return;
    // 80C69510: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69514:
    ctx->pc = 0x80C69514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69514u)) return;
    // 80C69514: addi    r5, r5, -27516
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27516);

label_80C69518:
    ctx->pc = 0x80C69518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69518: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69518u)) return;
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
label_80C6951C:
    ctx->pc = 0x80C6951Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6951Cu)) return;
    // 80C6951C: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69520:
    ctx->pc = 0x80C69520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69520u)) return;
    // 80C69520: addi    r5, r5, -27512
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27512);

label_80C69524:
    ctx->pc = 0x80C69524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C69524: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69524u)) return;
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
label_80C69528:
    ctx->pc = 0x80C69528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69528u)) return;
    // 80C69528: bl      0x8045C750
    {
            ctx->lr = 0x80C6952Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C6952C:
    ctx->pc = 0x80C6952Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6952Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C6952C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69530:
    ctx->pc = 0x80C69530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69530u)) return;
    // 80C69530: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80C69534:
    ctx->pc = 0x80C69534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69534u)) return;
    // 80C69534: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C69538:
    ctx->pc = 0x80C69538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69538u)) return;
    // 80C69538: addi    r5, r6, -2048
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2048);

label_80C6953C:
    ctx->pc = 0x80C6953Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6953Cu)) return;
    // 80C6953C: addi    r6, r6, -22542
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22542);

label_80C69540:
    ctx->pc = 0x80C69540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69540u)) return;
    // 80C69540: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C69544:
    ctx->pc = 0x80C69544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69544u)) return;
    // 80C69544: bl      0x8045C7B4
    {
            ctx->lr = 0x80C69548u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C69548:
    ctx->pc = 0x80C69548u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69548u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69548: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80C6954C:
    ctx->pc = 0x80C6954Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6954Cu)) return;
    // 80C6954C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C69550u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C69550:
    ctx->pc = 0x80C69550u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69550u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69550: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69554:
    ctx->pc = 0x80C69554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69554u)) return;
    // 80C69554: bl      0x8045F220
    {
            ctx->lr = 0x80C69558u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C69558:
    ctx->pc = 0x80C69558u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69558u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C69558: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C6955C:
    ctx->pc = 0x80C6955Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6955Cu)) return;
    // 80C6955C: addi    r4, r4, -3016
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3016);

label_80C69560:
    ctx->pc = 0x80C69560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69560u)) return;
    // 80C69560: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80C69564:
    ctx->pc = 0x80C69564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69564u)) return;
    // 80C69564: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80C69568:
    ctx->pc = 0x80C69568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69568u)) return;
    // 80C69568: lis     r6, -27426
    ctx->gpr[6] = ((u32)(s32)(-27426) << 16);

label_80C6956C:
    ctx->pc = 0x80C6956Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6956Cu)) return;
    // 80C6956C: addi    r6, r6, -27576
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27576);

label_80C69570:
    ctx->pc = 0x80C69570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C69570: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C69570u)) return;
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
label_80C69574:
    ctx->pc = 0x80C69574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69574u)) return;
    // 80C69574: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C69578:
    ctx->pc = 0x80C69578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69578u)) return;
    // 80C69578: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C6957C:
    ctx->pc = 0x80C6957Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6957Cu)) return;
    // 80C6957C: bl      0x8045EBE4
    {
            ctx->lr = 0x80C69580u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C69580:
    ctx->pc = 0x80C69580u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69580u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C69580: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69584:
    ctx->pc = 0x80C69584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69584u)) return;
    // 80C69584: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C69588:
    ctx->pc = 0x80C69588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69588u)) return;
    // 80C69588: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C6958C:
    ctx->pc = 0x80C6958Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6958Cu)) return;
    // 80C6958C: addi    r5, r5, -27496
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27496);

label_80C69590:
    ctx->pc = 0x80C69590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69590: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69590u)) return;
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
label_80C69594:
    ctx->pc = 0x80C69594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69594u)) return;
    // 80C69594: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69598:
    ctx->pc = 0x80C69598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69598u)) return;
    // 80C69598: addi    r5, r5, -27492
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27492);

label_80C6959C:
    ctx->pc = 0x80C6959Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6959Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6959C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6959Cu)) return;
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
label_80C695A0:
    ctx->pc = 0x80C695A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695A0u)) return;
    // 80C695A0: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C695A4:
    ctx->pc = 0x80C695A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695A4u)) return;
    // 80C695A4: addi    r5, r5, -27488
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27488);

label_80C695A8:
    ctx->pc = 0x80C695A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C695A8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C695A8u)) return;
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
label_80C695AC:
    ctx->pc = 0x80C695ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695ACu)) return;
    // 80C695AC: bl      0x8045C750
    {
            ctx->lr = 0x80C695B0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C695B0:
    ctx->pc = 0x80C695B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C695B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C695B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C695B4:
    ctx->pc = 0x80C695B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695B4u)) return;
    // 80C695B4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C695B8:
    ctx->pc = 0x80C695B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695B8u)) return;
    // 80C695B8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C695BC:
    ctx->pc = 0x80C695BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695BCu)) return;
    // 80C695BC: addi    r5, r5, -3584
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3584);

label_80C695C0:
    ctx->pc = 0x80C695C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695C0u)) return;
    // 80C695C0: li      r6, 8946
    ctx->gpr[6] = (u32)(s32)(8946);

label_80C695C4:
    ctx->pc = 0x80C695C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695C4u)) return;
    // 80C695C4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C695C8:
    ctx->pc = 0x80C695C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695C8u)) return;
    // 80C695C8: bl      0x8045C7B4
    {
            ctx->lr = 0x80C695CCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C695CC:
    ctx->pc = 0x80C695CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C695CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C695CC: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80C695D0:
    ctx->pc = 0x80C695D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695D0u)) return;
    // 80C695D0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C695D4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C695D4:
    ctx->pc = 0x80C695D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C695D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C695D4: li      r3, 1184
    ctx->gpr[3] = (u32)(s32)(1184);

label_80C695D8:
    ctx->pc = 0x80C695D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695D8u)) return;
    // 80C695D8: bl      0x8045BFA0
    {
            ctx->lr = 0x80C695DCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C695DC:
    ctx->pc = 0x80C695DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C695DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C695DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C695E0:
    ctx->pc = 0x80C695E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695E0u)) return;
    // 80C695E0: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C695E4:
    ctx->pc = 0x80C695E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695E4u)) return;
    // 80C695E4: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C695E8:
    ctx->pc = 0x80C695E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C695E8: lwz     r0, 0(r4)
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
label_80C695EC:
    ctx->pc = 0x80C695ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695ECu)) return;
    // 80C695EC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C695F0:
    ctx->pc = 0x80C695F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695F0u)) return;
    // 80C695F0: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C695F4:
    ctx->pc = 0x80C695F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695F4u)) return;
    // 80C695F4: addi    r4, r4, -26732
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26732);

label_80C695F8:
    ctx->pc = 0x80C695F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C695F8: lwzx    r4, r4, r0
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
label_80C695FC:
    ctx->pc = 0x80C695FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C695FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C695FC: lwz     r4, 4(r4)
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
label_80C69600:
    ctx->pc = 0x80C69600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69600u)) return;
    // 80C69600: bl      0x8045F608
    {
            ctx->lr = 0x80C69604u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C69604:
    ctx->pc = 0x80C69604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69604: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C69608:
    ctx->pc = 0x80C69608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69608u)) return;
    // 80C69608: bl      0x8045F220
    {
            ctx->lr = 0x80C6960Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C6960C:
    ctx->pc = 0x80C6960Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6960Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C6960C: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C69610:
    ctx->pc = 0x80C69610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69610u)) return;
    // 80C69610: addi    r4, r4, 26968
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26968);

label_80C69614:
    ctx->pc = 0x80C69614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69614u)) return;
    // 80C69614: lis     r5, -28548
    ctx->gpr[5] = ((u32)(s32)(-28548) << 16);

label_80C69618:
    ctx->pc = 0x80C69618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69618u)) return;
    // 80C69618: addi    r5, r5, -23912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23912);

label_80C6961C:
    ctx->pc = 0x80C6961Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6961Cu)) return;
    // 80C6961C: lis     r6, -27426
    ctx->gpr[6] = ((u32)(s32)(-27426) << 16);

label_80C69620:
    ctx->pc = 0x80C69620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69620u)) return;
    // 80C69620: addi    r6, r6, -27576
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27576);

label_80C69624:
    ctx->pc = 0x80C69624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C69624: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C69624u)) return;
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
label_80C69628:
    ctx->pc = 0x80C69628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69628u)) return;
    // 80C69628: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C6962C:
    ctx->pc = 0x80C6962Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6962Cu)) return;
    // 80C6962C: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80C69630:
    ctx->pc = 0x80C69630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69630u)) return;
    // 80C69630: bl      0x8045EBE4
    {
            ctx->lr = 0x80C69634u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C69634:
    ctx->pc = 0x80C69634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C69634: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69638:
    ctx->pc = 0x80C69638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69638u)) return;
    // 80C69638: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C6963C:
    ctx->pc = 0x80C6963Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6963Cu)) return;
    // 80C6963C: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69640:
    ctx->pc = 0x80C69640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69640u)) return;
    // 80C69640: addi    r5, r5, -27508
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27508);

label_80C69644:
    ctx->pc = 0x80C69644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69644: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69644u)) return;
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
label_80C69648:
    ctx->pc = 0x80C69648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69648u)) return;
    // 80C69648: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C6964C:
    ctx->pc = 0x80C6964Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6964Cu)) return;
    // 80C6964C: addi    r5, r5, -27504
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27504);

label_80C69650:
    ctx->pc = 0x80C69650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69650: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69650u)) return;
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
label_80C69654:
    ctx->pc = 0x80C69654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69654u)) return;
    // 80C69654: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69658:
    ctx->pc = 0x80C69658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69658u)) return;
    // 80C69658: addi    r5, r5, -27500
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27500);

label_80C6965C:
    ctx->pc = 0x80C6965Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6965Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6965C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6965Cu)) return;
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
label_80C69660:
    ctx->pc = 0x80C69660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69660u)) return;
    // 80C69660: bl      0x8045C750
    {
            ctx->lr = 0x80C69664u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C69664:
    ctx->pc = 0x80C69664u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69664u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C69664: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69668:
    ctx->pc = 0x80C69668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69668u)) return;
    // 80C69668: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C6966C:
    ctx->pc = 0x80C6966Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6966Cu)) return;
    // 80C6966C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C69670:
    ctx->pc = 0x80C69670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69670u)) return;
    // 80C69670: addi    r5, r6, -2048
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2048);

label_80C69674:
    ctx->pc = 0x80C69674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69674u)) return;
    // 80C69674: addi    r6, r6, -22542
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22542);

label_80C69678:
    ctx->pc = 0x80C69678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69678u)) return;
    // 80C69678: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C6967C:
    ctx->pc = 0x80C6967Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6967Cu)) return;
    // 80C6967C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C69680u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C69680:
    ctx->pc = 0x80C69680u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69680u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69680: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80C69684:
    ctx->pc = 0x80C69684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69684u)) return;
    // 80C69684: bl      0x8045F7C8
    {
            ctx->lr = 0x80C69688u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C69688:
    ctx->pc = 0x80C69688u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69688u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C69688: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C6968C:
    ctx->pc = 0x80C6968Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6968Cu)) return;
    // 80C6968C: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80C69690:
    ctx->pc = 0x80C69690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69690u)) return;
    // 80C69690: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69694:
    ctx->pc = 0x80C69694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69694u)) return;
    // 80C69694: addi    r5, r5, -27484
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27484);

label_80C69698:
    ctx->pc = 0x80C69698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69698: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69698u)) return;
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
label_80C6969C:
    ctx->pc = 0x80C6969Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6969Cu)) return;
    // 80C6969C: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C696A0:
    ctx->pc = 0x80C696A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696A0u)) return;
    // 80C696A0: addi    r5, r5, -27480
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27480);

label_80C696A4:
    ctx->pc = 0x80C696A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C696A4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C696A4u)) return;
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
label_80C696A8:
    ctx->pc = 0x80C696A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696A8u)) return;
    // 80C696A8: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C696AC:
    ctx->pc = 0x80C696ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696ACu)) return;
    // 80C696AC: addi    r5, r5, -27476
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27476);

label_80C696B0:
    ctx->pc = 0x80C696B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C696B0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C696B0u)) return;
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
label_80C696B4:
    ctx->pc = 0x80C696B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696B4u)) return;
    // 80C696B4: bl      0x8045C750
    {
            ctx->lr = 0x80C696B8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C696B8:
    ctx->pc = 0x80C696B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C696B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C696B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C696BC:
    ctx->pc = 0x80C696BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696BCu)) return;
    // 80C696BC: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80C696C0:
    ctx->pc = 0x80C696C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696C0u)) return;
    // 80C696C0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C696C4:
    ctx->pc = 0x80C696C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696C4u)) return;
    // 80C696C4: addi    r5, r6, -2048
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2048);

label_80C696C8:
    ctx->pc = 0x80C696C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696C8u)) return;
    // 80C696C8: addi    r6, r6, -22542
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22542);

label_80C696CC:
    ctx->pc = 0x80C696CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696CCu)) return;
    // 80C696CC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C696D0:
    ctx->pc = 0x80C696D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696D0u)) return;
    // 80C696D0: bl      0x8045C7B4
    {
            ctx->lr = 0x80C696D4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C696D4:
    ctx->pc = 0x80C696D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C696D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C696D4: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80C696D8:
    ctx->pc = 0x80C696D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696D8u)) return;
    // 80C696D8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C696DCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C696DC:
    ctx->pc = 0x80C696DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C696DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C696DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C696E0:
    ctx->pc = 0x80C696E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696E0u)) return;
    // 80C696E0: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80C696E4:
    ctx->pc = 0x80C696E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696E4u)) return;
    // 80C696E4: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C696E8:
    ctx->pc = 0x80C696E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696E8u)) return;
    // 80C696E8: addi    r5, r5, -27508
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27508);

label_80C696EC:
    ctx->pc = 0x80C696ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C696EC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C696ECu)) return;
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
label_80C696F0:
    ctx->pc = 0x80C696F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696F0u)) return;
    // 80C696F0: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C696F4:
    ctx->pc = 0x80C696F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696F4u)) return;
    // 80C696F4: addi    r5, r5, -27504
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27504);

label_80C696F8:
    ctx->pc = 0x80C696F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C696F8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C696F8u)) return;
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
label_80C696FC:
    ctx->pc = 0x80C696FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C696FCu)) return;
    // 80C696FC: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69700:
    ctx->pc = 0x80C69700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69700u)) return;
    // 80C69700: addi    r5, r5, -27500
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27500);

label_80C69704:
    ctx->pc = 0x80C69704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C69704: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69704u)) return;
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
label_80C69708:
    ctx->pc = 0x80C69708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69708u)) return;
    // 80C69708: bl      0x8045C750
    {
            ctx->lr = 0x80C6970Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C6970C:
    ctx->pc = 0x80C6970Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6970Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C6970C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69710:
    ctx->pc = 0x80C69710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69710u)) return;
    // 80C69710: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80C69714:
    ctx->pc = 0x80C69714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69714u)) return;
    // 80C69714: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C69718:
    ctx->pc = 0x80C69718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69718u)) return;
    // 80C69718: addi    r5, r6, -2048
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2048);

label_80C6971C:
    ctx->pc = 0x80C6971Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6971Cu)) return;
    // 80C6971C: addi    r6, r6, -22542
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22542);

label_80C69720:
    ctx->pc = 0x80C69720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69720u)) return;
    // 80C69720: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C69724:
    ctx->pc = 0x80C69724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69724u)) return;
    // 80C69724: bl      0x8045C7B4
    {
            ctx->lr = 0x80C69728u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C69728:
    ctx->pc = 0x80C69728u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69728u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69728: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80C6972C:
    ctx->pc = 0x80C6972Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6972Cu)) return;
    // 80C6972C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C69730u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C69730:
    ctx->pc = 0x80C69730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C69730: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69734:
    ctx->pc = 0x80C69734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69734u)) return;
    // 80C69734: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80C69738:
    ctx->pc = 0x80C69738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69738u)) return;
    // 80C69738: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C6973C:
    ctx->pc = 0x80C6973Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6973Cu)) return;
    // 80C6973C: addi    r5, r5, -27484
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27484);

label_80C69740:
    ctx->pc = 0x80C69740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69740: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69740u)) return;
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
label_80C69744:
    ctx->pc = 0x80C69744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69744u)) return;
    // 80C69744: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69748:
    ctx->pc = 0x80C69748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69748u)) return;
    // 80C69748: addi    r5, r5, -27480
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27480);

label_80C6974C:
    ctx->pc = 0x80C6974Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6974Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6974C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6974Cu)) return;
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
label_80C69750:
    ctx->pc = 0x80C69750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69750u)) return;
    // 80C69750: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69754:
    ctx->pc = 0x80C69754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69754u)) return;
    // 80C69754: addi    r5, r5, -27476
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27476);

label_80C69758:
    ctx->pc = 0x80C69758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C69758: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69758u)) return;
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
label_80C6975C:
    ctx->pc = 0x80C6975Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6975Cu)) return;
    // 80C6975C: bl      0x8045C750
    {
            ctx->lr = 0x80C69760u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C69760:
    ctx->pc = 0x80C69760u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69760u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C69760: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69764:
    ctx->pc = 0x80C69764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69764u)) return;
    // 80C69764: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80C69768:
    ctx->pc = 0x80C69768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69768u)) return;
    // 80C69768: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C6976C:
    ctx->pc = 0x80C6976Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6976Cu)) return;
    // 80C6976C: addi    r5, r6, -2048
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2048);

label_80C69770:
    ctx->pc = 0x80C69770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69770u)) return;
    // 80C69770: addi    r6, r6, -22542
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22542);

label_80C69774:
    ctx->pc = 0x80C69774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69774u)) return;
    // 80C69774: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C69778:
    ctx->pc = 0x80C69778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69778u)) return;
    // 80C69778: bl      0x8045C7B4
    {
            ctx->lr = 0x80C6977Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C6977C:
    ctx->pc = 0x80C6977Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6977Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C6977C: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80C69780:
    ctx->pc = 0x80C69780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69780u)) return;
    // 80C69780: bl      0x8045F7C8
    {
            ctx->lr = 0x80C69784u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C69784:
    ctx->pc = 0x80C69784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C69784: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69788:
    ctx->pc = 0x80C69788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69788u)) return;
    // 80C69788: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80C6978C:
    ctx->pc = 0x80C6978Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6978Cu)) return;
    // 80C6978C: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69790:
    ctx->pc = 0x80C69790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69790u)) return;
    // 80C69790: addi    r5, r5, -27508
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27508);

label_80C69794:
    ctx->pc = 0x80C69794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69794u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69794: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69794u)) return;
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
label_80C69798:
    ctx->pc = 0x80C69798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69798u)) return;
    // 80C69798: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C6979C:
    ctx->pc = 0x80C6979Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6979Cu)) return;
    // 80C6979C: addi    r5, r5, -27504
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27504);

label_80C697A0:
    ctx->pc = 0x80C697A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C697A0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C697A0u)) return;
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
label_80C697A4:
    ctx->pc = 0x80C697A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697A4u)) return;
    // 80C697A4: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C697A8:
    ctx->pc = 0x80C697A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697A8u)) return;
    // 80C697A8: addi    r5, r5, -27500
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27500);

label_80C697AC:
    ctx->pc = 0x80C697ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C697AC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C697ACu)) return;
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
label_80C697B0:
    ctx->pc = 0x80C697B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697B0u)) return;
    // 80C697B0: bl      0x8045C750
    {
            ctx->lr = 0x80C697B4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C697B4:
    ctx->pc = 0x80C697B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C697B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C697B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C697B8:
    ctx->pc = 0x80C697B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697B8u)) return;
    // 80C697B8: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80C697BC:
    ctx->pc = 0x80C697BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697BCu)) return;
    // 80C697BC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C697C0:
    ctx->pc = 0x80C697C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697C0u)) return;
    // 80C697C0: addi    r5, r6, -2048
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2048);

label_80C697C4:
    ctx->pc = 0x80C697C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697C4u)) return;
    // 80C697C4: addi    r6, r6, -22542
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22542);

label_80C697C8:
    ctx->pc = 0x80C697C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697C8u)) return;
    // 80C697C8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C697CC:
    ctx->pc = 0x80C697CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697CCu)) return;
    // 80C697CC: bl      0x8045C7B4
    {
            ctx->lr = 0x80C697D0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C697D0:
    ctx->pc = 0x80C697D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C697D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C697D0: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80C697D4:
    ctx->pc = 0x80C697D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697D4u)) return;
    // 80C697D4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C697D8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C697D8:
    ctx->pc = 0x80C697D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C697D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C697D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C697DC:
    ctx->pc = 0x80C697DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697DCu)) return;
    // 80C697DC: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80C697E0:
    ctx->pc = 0x80C697E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697E0u)) return;
    // 80C697E0: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C697E4:
    ctx->pc = 0x80C697E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697E4u)) return;
    // 80C697E4: addi    r5, r5, -27484
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27484);

label_80C697E8:
    ctx->pc = 0x80C697E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C697E8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C697E8u)) return;
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
label_80C697EC:
    ctx->pc = 0x80C697ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697ECu)) return;
    // 80C697EC: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C697F0:
    ctx->pc = 0x80C697F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697F0u)) return;
    // 80C697F0: addi    r5, r5, -27480
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27480);

label_80C697F4:
    ctx->pc = 0x80C697F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C697F4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C697F4u)) return;
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
label_80C697F8:
    ctx->pc = 0x80C697F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697F8u)) return;
    // 80C697F8: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C697FC:
    ctx->pc = 0x80C697FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C697FCu)) return;
    // 80C697FC: addi    r5, r5, -27476
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27476);

label_80C69800:
    ctx->pc = 0x80C69800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C69800: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69800u)) return;
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
label_80C69804:
    ctx->pc = 0x80C69804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69804u)) return;
    // 80C69804: bl      0x8045C750
    {
            ctx->lr = 0x80C69808u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C69808:
    ctx->pc = 0x80C69808u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69808u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C69808: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C6980C:
    ctx->pc = 0x80C6980Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6980Cu)) return;
    // 80C6980C: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_80C69810:
    ctx->pc = 0x80C69810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69810u)) return;
    // 80C69810: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C69814:
    ctx->pc = 0x80C69814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69814u)) return;
    // 80C69814: addi    r5, r6, -2048
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2048);

label_80C69818:
    ctx->pc = 0x80C69818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69818u)) return;
    // 80C69818: addi    r6, r6, -22542
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22542);

label_80C6981C:
    ctx->pc = 0x80C6981Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6981Cu)) return;
    // 80C6981C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C69820:
    ctx->pc = 0x80C69820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69820u)) return;
    // 80C69820: bl      0x8045C7B4
    {
            ctx->lr = 0x80C69824u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C69824:
    ctx->pc = 0x80C69824u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69824u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69824: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80C69828:
    ctx->pc = 0x80C69828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69828u)) return;
    // 80C69828: bl      0x8045F7C8
    {
            ctx->lr = 0x80C6982Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C6982C:
    ctx->pc = 0x80C6982Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6982Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C6982C: bl      0x8045F32C
    {
            ctx->lr = 0x80C69830u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C69830:
    ctx->pc = 0x80C69830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69830: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69834:
    ctx->pc = 0x80C69834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69834u)) return;
    // 80C69834: bl      0x8045F220
    {
            ctx->lr = 0x80C69838u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C69838:
    ctx->pc = 0x80C69838u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69838u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C69838: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C6983C:
    ctx->pc = 0x80C6983Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6983Cu)) return;
    // 80C6983C: addi    r4, r4, 2220
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2220);

label_80C69840:
    ctx->pc = 0x80C69840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69840u)) return;
    // 80C69840: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80C69844:
    ctx->pc = 0x80C69844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69844u)) return;
    // 80C69844: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80C69848:
    ctx->pc = 0x80C69848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69848u)) return;
    // 80C69848: lis     r6, -27426
    ctx->gpr[6] = ((u32)(s32)(-27426) << 16);

label_80C6984C:
    ctx->pc = 0x80C6984Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6984Cu)) return;
    // 80C6984C: addi    r6, r6, -27576
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27576);

label_80C69850:
    ctx->pc = 0x80C69850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C69850: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C69850u)) return;
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
label_80C69854:
    ctx->pc = 0x80C69854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69854u)) return;
    // 80C69854: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C69858:
    ctx->pc = 0x80C69858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69858u)) return;
    // 80C69858: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80C6985C:
    ctx->pc = 0x80C6985Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6985Cu)) return;
    // 80C6985C: bl      0x8045EBE4
    {
            ctx->lr = 0x80C69860u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C69860:
    ctx->pc = 0x80C69860u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69860u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C69860: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69864:
    ctx->pc = 0x80C69864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69864u)) return;
    // 80C69864: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C69868:
    ctx->pc = 0x80C69868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69868u)) return;
    // 80C69868: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C6986C:
    ctx->pc = 0x80C6986Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6986Cu)) return;
    // 80C6986C: addi    r5, r5, -27496
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27496);

label_80C69870:
    ctx->pc = 0x80C69870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69870: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69870u)) return;
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
label_80C69874:
    ctx->pc = 0x80C69874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69874u)) return;
    // 80C69874: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69878:
    ctx->pc = 0x80C69878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69878u)) return;
    // 80C69878: addi    r5, r5, -27492
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27492);

label_80C6987C:
    ctx->pc = 0x80C6987Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6987Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6987C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6987Cu)) return;
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
label_80C69880:
    ctx->pc = 0x80C69880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69880u)) return;
    // 80C69880: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69884:
    ctx->pc = 0x80C69884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69884u)) return;
    // 80C69884: addi    r5, r5, -27488
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27488);

label_80C69888:
    ctx->pc = 0x80C69888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C69888: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69888u)) return;
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
label_80C6988C:
    ctx->pc = 0x80C6988Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6988Cu)) return;
    // 80C6988C: bl      0x8045C750
    {
            ctx->lr = 0x80C69890u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C69890:
    ctx->pc = 0x80C69890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C69890: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69894:
    ctx->pc = 0x80C69894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69894u)) return;
    // 80C69894: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C69898:
    ctx->pc = 0x80C69898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69898u)) return;
    // 80C69898: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C6989C:
    ctx->pc = 0x80C6989Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6989Cu)) return;
    // 80C6989C: addi    r5, r5, -3584
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3584);

label_80C698A0:
    ctx->pc = 0x80C698A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C698A0u)) return;
    // 80C698A0: li      r6, 8946
    ctx->gpr[6] = (u32)(s32)(8946);

label_80C698A4:
    ctx->pc = 0x80C698A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C698A4u)) return;
    // 80C698A4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C698A8:
    ctx->pc = 0x80C698A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C698A8u)) return;
    // 80C698A8: bl      0x8045C7B4
    {
            ctx->lr = 0x80C698ACu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C698AC:
    ctx->pc = 0x80C698ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C698ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C698AC: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80C698B0:
    ctx->pc = 0x80C698B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C698B0u)) return;
    // 80C698B0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C698B4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C698B4:
    ctx->pc = 0x80C698B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C698B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C698B4: li      r3, 1185
    ctx->gpr[3] = (u32)(s32)(1185);

label_80C698B8:
    ctx->pc = 0x80C698B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C698B8u)) return;
    // 80C698B8: bl      0x8045BFA0
    {
            ctx->lr = 0x80C698BCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C698BC:
    ctx->pc = 0x80C698BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C698BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C698BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C698C0:
    ctx->pc = 0x80C698C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C698C0u)) return;
    // 80C698C0: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C698C4:
    ctx->pc = 0x80C698C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C698C4u)) return;
    // 80C698C4: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C698C8:
    ctx->pc = 0x80C698C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C698C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C698C8: lwz     r0, 0(r4)
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
label_80C698CC:
    ctx->pc = 0x80C698CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C698CCu)) return;
    // 80C698CC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C698D0:
    ctx->pc = 0x80C698D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C698D0u)) return;
    // 80C698D0: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C698D4:
    ctx->pc = 0x80C698D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C698D4u)) return;
    // 80C698D4: addi    r4, r4, -26732
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26732);

label_80C698D8:
    ctx->pc = 0x80C698D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C698D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C698D8: lwzx    r4, r4, r0
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
label_80C698DC:
    ctx->pc = 0x80C698DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C698DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C698DC: lwz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C698E0:
    ctx->pc = 0x80C698E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C698E0u)) return;
    // 80C698E0: bl      0x8045F608
    {
            ctx->lr = 0x80C698E4u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C698E4:
    ctx->pc = 0x80C698E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C698E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C698E4: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80C698E8:
    ctx->pc = 0x80C698E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C698E8u)) return;
    // 80C698E8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C698ECu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C698EC:
    ctx->pc = 0x80C698ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C698ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C698EC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C698F0:
    ctx->pc = 0x80C698F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C698F0u)) return;
    // 80C698F0: bl      0x8045F220
    {
            ctx->lr = 0x80C698F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C698F4:
    ctx->pc = 0x80C698F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C698F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C698F4: lis     r4, -27425
    ctx->gpr[4] = ((u32)(s32)(-27425) << 16);

label_80C698F8:
    ctx->pc = 0x80C698F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C698F8u)) return;
    // 80C698F8: addi    r4, r4, -19892
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19892);

label_80C698FC:
    ctx->pc = 0x80C698FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C698FCu)) return;
    // 80C698FC: lis     r5, -28548
    ctx->gpr[5] = ((u32)(s32)(-28548) << 16);

label_80C69900:
    ctx->pc = 0x80C69900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69900u)) return;
    // 80C69900: addi    r5, r5, -23912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23912);

label_80C69904:
    ctx->pc = 0x80C69904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69904u)) return;
    // 80C69904: lis     r6, -27426
    ctx->gpr[6] = ((u32)(s32)(-27426) << 16);

label_80C69908:
    ctx->pc = 0x80C69908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69908u)) return;
    // 80C69908: addi    r6, r6, -27576
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27576);

label_80C6990C:
    ctx->pc = 0x80C6990Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6990Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C6990C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C6990Cu)) return;
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
label_80C69910:
    ctx->pc = 0x80C69910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69910u)) return;
    // 80C69910: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C69914:
    ctx->pc = 0x80C69914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69914u)) return;
    // 80C69914: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C69918:
    ctx->pc = 0x80C69918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69918u)) return;
    // 80C69918: bl      0x8045EBE4
    {
            ctx->lr = 0x80C6991Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C6991C:
    ctx->pc = 0x80C6991Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6991Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C6991C: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80C69920:
    ctx->pc = 0x80C69920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69920u)) return;
    // 80C69920: bl      0x8045F7C8
    {
            ctx->lr = 0x80C69924u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C69924:
    ctx->pc = 0x80C69924u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69924u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C69924: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69928:
    ctx->pc = 0x80C69928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69928u)) return;
    // 80C69928: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C6992C:
    ctx->pc = 0x80C6992Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6992Cu)) return;
    // 80C6992C: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69930:
    ctx->pc = 0x80C69930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69930u)) return;
    // 80C69930: addi    r5, r5, -27472
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27472);

label_80C69934:
    ctx->pc = 0x80C69934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69934: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69934u)) return;
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
label_80C69938:
    ctx->pc = 0x80C69938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69938u)) return;
    // 80C69938: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C6993C:
    ctx->pc = 0x80C6993Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6993Cu)) return;
    // 80C6993C: addi    r5, r5, -27468
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27468);

label_80C69940:
    ctx->pc = 0x80C69940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69940: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69940u)) return;
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
label_80C69944:
    ctx->pc = 0x80C69944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69944u)) return;
    // 80C69944: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69948:
    ctx->pc = 0x80C69948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69948u)) return;
    // 80C69948: addi    r5, r5, -27464
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27464);

label_80C6994C:
    ctx->pc = 0x80C6994Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6994Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6994C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6994Cu)) return;
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
label_80C69950:
    ctx->pc = 0x80C69950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69950u)) return;
    // 80C69950: bl      0x8045C750
    {
            ctx->lr = 0x80C69954u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C69954:
    ctx->pc = 0x80C69954u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69954u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C69954: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69958:
    ctx->pc = 0x80C69958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69958u)) return;
    // 80C69958: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C6995C:
    ctx->pc = 0x80C6995Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6995Cu)) return;
    // 80C6995C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C69960:
    ctx->pc = 0x80C69960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69960u)) return;
    // 80C69960: addi    r5, r6, -1024
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-1024);

label_80C69964:
    ctx->pc = 0x80C69964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69964u)) return;
    // 80C69964: addi    r6, r6, -9230
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-9230);

label_80C69968:
    ctx->pc = 0x80C69968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69968u)) return;
    // 80C69968: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C6996C:
    ctx->pc = 0x80C6996Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6996Cu)) return;
    // 80C6996C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C69970u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C69970:
    ctx->pc = 0x80C69970u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69970u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69970: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C69974:
    ctx->pc = 0x80C69974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69974u)) return;
    // 80C69974: bl      0x8045F7C8
    {
            ctx->lr = 0x80C69978u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C69978:
    ctx->pc = 0x80C69978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C69978: bl      0x8045F32C
    {
            ctx->lr = 0x80C6997Cu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C6997C:
    ctx->pc = 0x80C6997Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6997Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C6997C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69980:
    ctx->pc = 0x80C69980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69980u)) return;
    // 80C69980: li      r4, 20
    ctx->gpr[4] = (u32)(s32)(20);

label_80C69984:
    ctx->pc = 0x80C69984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69984u)) return;
    // 80C69984: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69988:
    ctx->pc = 0x80C69988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69988u)) return;
    // 80C69988: addi    r5, r5, -27460
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27460);

label_80C6998C:
    ctx->pc = 0x80C6998Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6998Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6998C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6998Cu)) return;
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
label_80C69990:
    ctx->pc = 0x80C69990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69990u)) return;
    // 80C69990: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69994:
    ctx->pc = 0x80C69994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69994u)) return;
    // 80C69994: addi    r5, r5, -27480
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27480);

label_80C69998:
    ctx->pc = 0x80C69998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69998: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69998u)) return;
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
label_80C6999C:
    ctx->pc = 0x80C6999Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6999Cu)) return;
    // 80C6999C: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C699A0:
    ctx->pc = 0x80C699A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699A0u)) return;
    // 80C699A0: addi    r5, r5, -27456
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27456);

label_80C699A4:
    ctx->pc = 0x80C699A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C699A4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C699A4u)) return;
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
label_80C699A8:
    ctx->pc = 0x80C699A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699A8u)) return;
    // 80C699A8: bl      0x8045C750
    {
            ctx->lr = 0x80C699ACu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C699AC:
    ctx->pc = 0x80C699ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C699ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C699AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C699B0:
    ctx->pc = 0x80C699B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699B0u)) return;
    // 80C699B0: li      r4, 20
    ctx->gpr[4] = (u32)(s32)(20);

label_80C699B4:
    ctx->pc = 0x80C699B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699B4u)) return;
    // 80C699B4: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C699B8:
    ctx->pc = 0x80C699B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699B8u)) return;
    // 80C699B8: addi    r5, r5, -256
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-256);

label_80C699BC:
    ctx->pc = 0x80C699BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699BCu)) return;
    // 80C699BC: li      r6, 10994
    ctx->gpr[6] = (u32)(s32)(10994);

label_80C699C0:
    ctx->pc = 0x80C699C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699C0u)) return;
    // 80C699C0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C699C4:
    ctx->pc = 0x80C699C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699C4u)) return;
    // 80C699C4: bl      0x8045C7B4
    {
            ctx->lr = 0x80C699C8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C699C8:
    ctx->pc = 0x80C699C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C699C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C699C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C699CC:
    ctx->pc = 0x80C699CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699CCu)) return;
    // 80C699CC: bl      0x8045F220
    {
            ctx->lr = 0x80C699D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C699D0:
    ctx->pc = 0x80C699D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C699D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C699D0: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C699D4:
    ctx->pc = 0x80C699D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699D4u)) return;
    // 80C699D4: addi    r4, r4, 13680
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13680);

label_80C699D8:
    ctx->pc = 0x80C699D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699D8u)) return;
    // 80C699D8: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80C699DC:
    ctx->pc = 0x80C699DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699DCu)) return;
    // 80C699DC: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80C699E0:
    ctx->pc = 0x80C699E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699E0u)) return;
    // 80C699E0: lis     r6, -27426
    ctx->gpr[6] = ((u32)(s32)(-27426) << 16);

label_80C699E4:
    ctx->pc = 0x80C699E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699E4u)) return;
    // 80C699E4: addi    r6, r6, -27560
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27560);

label_80C699E8:
    ctx->pc = 0x80C699E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C699E8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C699E8u)) return;
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
label_80C699EC:
    ctx->pc = 0x80C699ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699ECu)) return;
    // 80C699EC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C699F0:
    ctx->pc = 0x80C699F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699F0u)) return;
    // 80C699F0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C699F4:
    ctx->pc = 0x80C699F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699F4u)) return;
    // 80C699F4: bl      0x8045EBE4
    {
            ctx->lr = 0x80C699F8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C699F8:
    ctx->pc = 0x80C699F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C699F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C699F8: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80C699FC:
    ctx->pc = 0x80C699FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C699FCu)) return;
    // 80C699FC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C69A00u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C69A00:
    ctx->pc = 0x80C69A00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69A00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C69A00: lis     r3, -27426
    ctx->gpr[3] = ((u32)(s32)(-27426) << 16);

label_80C69A04:
    ctx->pc = 0x80C69A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A04u)) return;
    // 80C69A04: addi    r3, r3, -27452
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27452);

label_80C69A08:
    ctx->pc = 0x80C69A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C69A08: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C69A08u)) return;
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
label_80C69A0C:
    ctx->pc = 0x80C69A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A0Cu)) return;
    // 80C69A0C: lis     r3, -27426
    ctx->gpr[3] = ((u32)(s32)(-27426) << 16);

label_80C69A10:
    ctx->pc = 0x80C69A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A10u)) return;
    // 80C69A10: addi    r3, r3, -27448
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27448);

label_80C69A14:
    ctx->pc = 0x80C69A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C69A14: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C69A14u)) return;
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
label_80C69A18:
    ctx->pc = 0x80C69A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A18u)) return;
    // 80C69A18: lis     r3, -27426
    ctx->gpr[3] = ((u32)(s32)(-27426) << 16);

label_80C69A1C:
    ctx->pc = 0x80C69A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A1Cu)) return;
    // 80C69A1C: addi    r3, r3, -27444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27444);

label_80C69A20:
    ctx->pc = 0x80C69A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C69A20: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C69A20u)) return;
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
label_80C69A24:
    ctx->pc = 0x80C69A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A24u)) return;
    // 80C69A24: fmr    f4, f3
    if (!ppc_fp_available_inline(ctx, 0x80C69A24u)) return;
    ctx->fpr[4] = ctx->fpr[3];

label_80C69A28:
    ctx->pc = 0x80C69A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A28u)) return;
    // 80C69A28: fmr    f5, f3
    if (!ppc_fp_available_inline(ctx, 0x80C69A28u)) return;
    ctx->fpr[5] = ctx->fpr[3];

label_80C69A2C:
    ctx->pc = 0x80C69A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A2Cu)) return;
    // 80C69A2C: bl      0x80C6A41C
    {
            ctx->lr = 0x80C69A30u;
            goto label_80C6A41C;
    }

label_80C69A30:
    ctx->pc = 0x80C69A30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69A30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C69A30: lis     r4, -27425
    ctx->gpr[4] = ((u32)(s32)(-27425) << 16);

label_80C69A34:
    ctx->pc = 0x80C69A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A34u)) return;
    // 80C69A34: addi    r4, r4, -8704
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8704);

label_80C69A38:
    ctx->pc = 0x80C69A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69A38: stw     r3, 0(r4)
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
label_80C69A3C:
    ctx->pc = 0x80C69A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A3Cu)) return;
    // 80C69A3C: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80C69A40:
    ctx->pc = 0x80C69A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A40u)) return;
    // 80C69A40: bl      0x8045F7C8
    {
            ctx->lr = 0x80C69A44u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C69A44:
    ctx->pc = 0x80C69A44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69A44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C69A44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69A48:
    ctx->pc = 0x80C69A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A48u)) return;
    // 80C69A48: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C69A4C:
    ctx->pc = 0x80C69A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A4Cu)) return;
    // 80C69A4C: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69A50:
    ctx->pc = 0x80C69A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A50u)) return;
    // 80C69A50: addi    r5, r5, -27440
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27440);

label_80C69A54:
    ctx->pc = 0x80C69A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69A54: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69A54u)) return;
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
label_80C69A58:
    ctx->pc = 0x80C69A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A58u)) return;
    // 80C69A58: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69A5C:
    ctx->pc = 0x80C69A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A5Cu)) return;
    // 80C69A5C: addi    r5, r5, -27436
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27436);

label_80C69A60:
    ctx->pc = 0x80C69A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69A60: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69A60u)) return;
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
label_80C69A64:
    ctx->pc = 0x80C69A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A64u)) return;
    // 80C69A64: lis     r5, -27426
    ctx->gpr[5] = ((u32)(s32)(-27426) << 16);

label_80C69A68:
    ctx->pc = 0x80C69A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A68u)) return;
    // 80C69A68: addi    r5, r5, -27432
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27432);

label_80C69A6C:
    ctx->pc = 0x80C69A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C69A6C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C69A6Cu)) return;
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
label_80C69A70:
    ctx->pc = 0x80C69A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A70u)) return;
    // 80C69A70: bl      0x8045C750
    {
            ctx->lr = 0x80C69A74u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C69A74:
    ctx->pc = 0x80C69A74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69A74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C69A74: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69A78:
    ctx->pc = 0x80C69A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A78u)) return;
    // 80C69A78: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C69A7C:
    ctx->pc = 0x80C69A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A7Cu)) return;
    // 80C69A7C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C69A80:
    ctx->pc = 0x80C69A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A80u)) return;
    // 80C69A80: addi    r5, r6, -256
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-256);

label_80C69A84:
    ctx->pc = 0x80C69A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A84u)) return;
    // 80C69A84: addi    r6, r6, -32526
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-32526);

label_80C69A88:
    ctx->pc = 0x80C69A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A88u)) return;
    // 80C69A88: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C69A8C:
    ctx->pc = 0x80C69A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A8Cu)) return;
    // 80C69A8C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C69A90u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C69A90:
    ctx->pc = 0x80C69A90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69A90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69A90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69A94:
    ctx->pc = 0x80C69A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A94u)) return;
    // 80C69A94: bl      0x8045F220
    {
            ctx->lr = 0x80C69A98u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C69A98:
    ctx->pc = 0x80C69A98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69A98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C69A98: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C69A9C:
    ctx->pc = 0x80C69A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69A9Cu)) return;
    // 80C69A9C: addi    r4, r4, -27428
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27428);

label_80C69AA0:
    ctx->pc = 0x80C69AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69AA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69AA0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C69AA0u)) return;
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
label_80C69AA4:
    ctx->pc = 0x80C69AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69AA4u)) return;
    // 80C69AA4: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C69AA8:
    ctx->pc = 0x80C69AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69AA8u)) return;
    // 80C69AA8: addi    r4, r4, -27424
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27424);

label_80C69AAC:
    ctx->pc = 0x80C69AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69AACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69AAC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C69AACu)) return;
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
label_80C69AB0:
    ctx->pc = 0x80C69AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69AB0u)) return;
    // 80C69AB0: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C69AB4:
    ctx->pc = 0x80C69AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69AB4u)) return;
    // 80C69AB4: addi    r4, r4, -27420
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27420);

label_80C69AB8:
    ctx->pc = 0x80C69AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C69AB8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C69AB8u)) return;
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
label_80C69ABC:
    ctx->pc = 0x80C69ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69ABCu)) return;
    // 80C69ABC: bl      0x8045EF2C
    {
            ctx->lr = 0x80C69AC0u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C69AC0:
    ctx->pc = 0x80C69AC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69AC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69AC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69AC4:
    ctx->pc = 0x80C69AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69AC4u)) return;
    // 80C69AC4: bl      0x8045F220
    {
            ctx->lr = 0x80C69AC8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C69AC8:
    ctx->pc = 0x80C69AC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69AC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C69AC8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C69ACC:
    ctx->pc = 0x80C69ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69ACCu)) return;
    // 80C69ACC: li      r5, 32036
    ctx->gpr[5] = (u32)(s32)(32036);

label_80C69AD0:
    ctx->pc = 0x80C69AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69AD0u)) return;
    // 80C69AD0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C69AD4:
    ctx->pc = 0x80C69AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69AD4u)) return;
    // 80C69AD4: bl      0x8045EEA8
    {
            ctx->lr = 0x80C69AD8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C69AD8:
    ctx->pc = 0x80C69AD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69AD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69AD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69ADC:
    ctx->pc = 0x80C69ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69ADCu)) return;
    // 80C69ADC: bl      0x8045F220
    {
            ctx->lr = 0x80C69AE0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C69AE0:
    ctx->pc = 0x80C69AE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69AE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C69AE0: bl      0x8045EB8C
    {
            ctx->lr = 0x80C69AE4u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C69AE4:
    ctx->pc = 0x80C69AE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69AE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69AE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69AE8:
    ctx->pc = 0x80C69AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69AE8u)) return;
    // 80C69AE8: bl      0x8045F220
    {
            ctx->lr = 0x80C69AECu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C69AEC:
    ctx->pc = 0x80C69AECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69AECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C69AEC: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80C69AF0:
    ctx->pc = 0x80C69AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69AF0u)) return;
    // 80C69AF0: addi    r4, r4, 29640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29640);

label_80C69AF4:
    ctx->pc = 0x80C69AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69AF4u)) return;
    // 80C69AF4: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80C69AF8:
    ctx->pc = 0x80C69AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69AF8u)) return;
    // 80C69AF8: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80C69AFC:
    ctx->pc = 0x80C69AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69AFCu)) return;
    // 80C69AFC: lis     r6, -27426
    ctx->gpr[6] = ((u32)(s32)(-27426) << 16);

label_80C69B00:
    ctx->pc = 0x80C69B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B00u)) return;
    // 80C69B00: addi    r6, r6, -27576
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27576);

label_80C69B04:
    ctx->pc = 0x80C69B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C69B04: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C69B04u)) return;
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
label_80C69B08:
    ctx->pc = 0x80C69B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B08u)) return;
    // 80C69B08: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C69B0C:
    ctx->pc = 0x80C69B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B0Cu)) return;
    // 80C69B0C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C69B10:
    ctx->pc = 0x80C69B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B10u)) return;
    // 80C69B10: bl      0x8045EBE4
    {
            ctx->lr = 0x80C69B14u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C69B14:
    ctx->pc = 0x80C69B14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69B14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69B14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69B18:
    ctx->pc = 0x80C69B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B18u)) return;
    // 80C69B18: bl      0x8045F220
    {
            ctx->lr = 0x80C69B1Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C69B1C:
    ctx->pc = 0x80C69B1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69B1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C69B1C: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C69B20:
    ctx->pc = 0x80C69B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B20u)) return;
    // 80C69B20: addi    r4, r4, -27416
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27416);

label_80C69B24:
    ctx->pc = 0x80C69B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C69B24: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C69B24u)) return;
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
label_80C69B28:
    ctx->pc = 0x80C69B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B28u)) return;
    // 80C69B28: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C69B2C:
    ctx->pc = 0x80C69B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B2Cu)) return;
    // 80C69B2C: addi    r4, r4, -27412
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27412);

label_80C69B30:
    ctx->pc = 0x80C69B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C69B30: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C69B30u)) return;
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
label_80C69B34:
    ctx->pc = 0x80C69B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B34u)) return;
    // 80C69B34: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C69B38:
    ctx->pc = 0x80C69B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B38u)) return;
    // 80C69B38: addi    r4, r4, -27408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27408);

label_80C69B3C:
    ctx->pc = 0x80C69B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69B3C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C69B3Cu)) return;
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
label_80C69B40:
    ctx->pc = 0x80C69B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B40u)) return;
    // 80C69B40: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C69B44:
    ctx->pc = 0x80C69B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B44u)) return;
    // 80C69B44: addi    r4, r4, -27560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27560);

label_80C69B48:
    ctx->pc = 0x80C69B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69B48: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C69B48u)) return;
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
label_80C69B4C:
    ctx->pc = 0x80C69B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B4Cu)) return;
    // 80C69B4C: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C69B50:
    ctx->pc = 0x80C69B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B50u)) return;
    // 80C69B50: addi    r4, r4, -27556
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27556);

label_80C69B54:
    ctx->pc = 0x80C69B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C69B54: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C69B54u)) return;
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
label_80C69B58:
    ctx->pc = 0x80C69B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B58u)) return;
    // 80C69B58: bl      0x8045E570
    {
            ctx->lr = 0x80C69B5Cu;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80C69B5C:
    ctx->pc = 0x80C69B5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69B5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69B5C: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80C69B60:
    ctx->pc = 0x80C69B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B60u)) return;
    // 80C69B60: bl      0x8045F7C8
    {
            ctx->lr = 0x80C69B64u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C69B64:
    ctx->pc = 0x80C69B64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69B64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C69B64: b       0x80C69BA8
    {
            goto label_80C69BA8;
    }

label_80C69B68:
    ctx->pc = 0x80C69B68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69B68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C69B68: lis     r3, -27425
    ctx->gpr[3] = ((u32)(s32)(-27425) << 16);

label_80C69B6C:
    ctx->pc = 0x80C69B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B6Cu)) return;
    // 80C69B6C: addi    r3, r3, -8704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8704);

label_80C69B70:
    ctx->pc = 0x80C69B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69B70: lwz     r3, 0(r3)
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
label_80C69B74:
    ctx->pc = 0x80C69B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B74u)) return;
    // 80C69B74: cmplwi  r3, 0x0000
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

label_80C69B78:
    ctx->pc = 0x80C69B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B78u)) return;
    // 80C69B78: bc    12, 2, 0x80C69B90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C69B90;
        }
    }

label_80C69B7C:
    ctx->pc = 0x80C69B7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69B7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C69B7C: bl      0x8050F9E0
    {
            ctx->lr = 0x80C69B80u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C69B80:
    ctx->pc = 0x80C69B80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69B80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C69B80: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C69B84:
    ctx->pc = 0x80C69B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B84u)) return;
    // 80C69B84: lis     r3, -27425
    ctx->gpr[3] = ((u32)(s32)(-27425) << 16);

label_80C69B88:
    ctx->pc = 0x80C69B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B88u)) return;
    // 80C69B88: addi    r3, r3, -8704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8704);

label_80C69B8C:
    ctx->pc = 0x80C69B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C69B8C: stw     r0, 0(r3)
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
label_80C69B90:
    ctx->pc = 0x80C69B90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69B90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69B90: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C69B94:
    ctx->pc = 0x80C69B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B94u)) return;
    // 80C69B94: bl      0x8045ED54
    {
            ctx->lr = 0x80C69B98u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80C69B98:
    ctx->pc = 0x80C69B98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69B98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69B98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C69B9C:
    ctx->pc = 0x80C69B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69B9Cu)) return;
    // 80C69B9C: bl      0x8045EC10
    {
            ctx->lr = 0x80C69BA0u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C69BA0:
    ctx->pc = 0x80C69BA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69BA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C69BA0: bl      0x8045DE34
    {
            ctx->lr = 0x80C69BA4u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80C69BA4:
    ctx->pc = 0x80C69BA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69BA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C69BA4: bl      0x80460A80
    {
            ctx->lr = 0x80C69BA8u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80C69BA8:
    ctx->pc = 0x80C69BA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69BA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69BA8: lwz     r0, 20(r1)
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
label_80C69BAC:
    ctx->pc = 0x80C69BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C69BACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69BAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69BB0:
    ctx->pc = 0x80C69BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69BB0u)) return;
    // 80C69BB0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C69BB4:
    ctx->pc = 0x80C69BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69BB4u)) return;
    // 80C69BB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C69BB8:
    ctx->pc = 0x80C69BB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69BB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C69BB8: stwu     r1, -16(r1)
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
label_80C69BBC:
    ctx->pc = 0x80C69BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69BBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69BBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69BC0:
    ctx->pc = 0x80C69BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69BC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C69BC0: stw     r0, 20(r1)
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
label_80C69BC4:
    ctx->pc = 0x80C69BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69BC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69BC4: lwz     r3, 32(r3)
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
label_80C69BC8:
    ctx->pc = 0x80C69BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69BC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C69BC8: lwz     r3, 16(r3)
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
label_80C69BCC:
    ctx->pc = 0x80C69BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69BCCu)) return;
    // 80C69BCC: bl      0x80509CF0
    {
            ctx->lr = 0x80C69BD0u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80C69BD0:
    ctx->pc = 0x80C69BD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69BD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69BD0: lwz     r0, 20(r1)
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
label_80C69BD4:
    ctx->pc = 0x80C69BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C69BD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69BD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69BD8:
    ctx->pc = 0x80C69BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69BD8u)) return;
    // 80C69BD8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C69BDC:
    ctx->pc = 0x80C69BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69BDCu)) return;
    // 80C69BDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C69BE0:
    ctx->pc = 0x80C69BE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69BE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C69BE0: stwu     r1, -32(r1)
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
label_80C69BE4:
    ctx->pc = 0x80C69BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69BE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C69BE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69BE8:
    ctx->pc = 0x80C69BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69BE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C69BE8: stw     r0, 36(r1)
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
label_80C69BEC:
    ctx->pc = 0x80C69BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69BECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69BEC: stw     r31, 28(r1)
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
label_80C69BF0:
    ctx->pc = 0x80C69BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69BF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C69BF0: stw     r30, 24(r1)
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
label_80C69BF4:
    ctx->pc = 0x80C69BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69BF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C69BF4: stw     r29, 20(r1)
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
label_80C69BF8:
    ctx->pc = 0x80C69BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69BF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69BF8: lwz     r31, 32(r3)
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
label_80C69BFC:
    ctx->pc = 0x80C69BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69BFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C69BFC: lwz     r30, 16(r31)
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
label_80C69C00:
    ctx->pc = 0x80C69C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69C00: lwz     r5, 28(r31)
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
label_80C69C04:
    ctx->pc = 0x80C69C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C04u)) return;
    // 80C69C04: cmpwi   r5, 0
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

label_80C69C08:
    ctx->pc = 0x80C69C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C08u)) return;
    // 80C69C08: bc    4, 1, 0x80C69C40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C69C40;
        }
    }

label_80C69C0C:
    ctx->pc = 0x80C69C0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69C0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C69C0C: lwz     r4, 24(r31)
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
label_80C69C10:
    ctx->pc = 0x80C69C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C10u)) return;
    // 80C69C10: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C69C14:
    ctx->pc = 0x80C69C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C69C14: lwz     r0, 20(r31)
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
label_80C69C18:
    ctx->pc = 0x80C69C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C69C18u)) return;
    // 80C69C18: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C69C1C:
    ctx->pc = 0x80C69C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C1Cu)) return;
    // 80C69C1C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C69C20:
    ctx->pc = 0x80C69C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C69C20u)) return;
    // 80C69C20: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C69C24:
    ctx->pc = 0x80C69C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C24u)) return;
    // 80C69C24: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C69C28:
    ctx->pc = 0x80C69C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C28u)) return;
    // 80C69C28: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C69C2C:
    ctx->pc = 0x80C69C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C2Cu)) return;
    // 80C69C2C: bl      0x80509C74
    {
            ctx->lr = 0x80C69C30u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C69C30:
    ctx->pc = 0x80C69C30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69C30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C69C30: stw     r29, 20(r31)
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
label_80C69C34:
    ctx->pc = 0x80C69C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69C34: lwz     r3, 28(r31)
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
label_80C69C38:
    ctx->pc = 0x80C69C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C38u)) return;
    // 80C69C38: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C69C3C:
    ctx->pc = 0x80C69C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C69C3C: stw     r0, 28(r31)
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
label_80C69C40:
    ctx->pc = 0x80C69C40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69C40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69C40: lwz     r5, 40(r31)
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
label_80C69C44:
    ctx->pc = 0x80C69C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C44u)) return;
    // 80C69C44: cmpwi   r5, 0
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

label_80C69C48:
    ctx->pc = 0x80C69C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C48u)) return;
    // 80C69C48: bc    4, 1, 0x80C69C80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C69C80;
        }
    }

label_80C69C4C:
    ctx->pc = 0x80C69C4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69C4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C69C4C: lwz     r4, 36(r31)
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
label_80C69C50:
    ctx->pc = 0x80C69C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C50u)) return;
    // 80C69C50: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C69C54:
    ctx->pc = 0x80C69C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C69C54: lwz     r0, 32(r31)
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
label_80C69C58:
    ctx->pc = 0x80C69C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C69C58u)) return;
    // 80C69C58: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C69C5C:
    ctx->pc = 0x80C69C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C5Cu)) return;
    // 80C69C5C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C69C60:
    ctx->pc = 0x80C69C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C69C60u)) return;
    // 80C69C60: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C69C64:
    ctx->pc = 0x80C69C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C64u)) return;
    // 80C69C64: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C69C68:
    ctx->pc = 0x80C69C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C68u)) return;
    // 80C69C68: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C69C6C:
    ctx->pc = 0x80C69C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C6Cu)) return;
    // 80C69C6C: bl      0x80509BF8
    {
            ctx->lr = 0x80C69C70u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C69C70:
    ctx->pc = 0x80C69C70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69C70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C69C70: stw     r29, 32(r31)
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
label_80C69C74:
    ctx->pc = 0x80C69C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69C74: lwz     r3, 40(r31)
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
label_80C69C78:
    ctx->pc = 0x80C69C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C78u)) return;
    // 80C69C78: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C69C7C:
    ctx->pc = 0x80C69C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C69C7C: stw     r0, 40(r31)
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
label_80C69C80:
    ctx->pc = 0x80C69C80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69C80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69C80: lwz     r5, 52(r31)
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
label_80C69C84:
    ctx->pc = 0x80C69C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C84u)) return;
    // 80C69C84: cmpwi   r5, 0
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

label_80C69C88:
    ctx->pc = 0x80C69C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C88u)) return;
    // 80C69C88: bc    4, 1, 0x80C69CC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C69CC0;
        }
    }

label_80C69C8C:
    ctx->pc = 0x80C69C8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69C8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C69C8C: lwz     r4, 48(r31)
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
label_80C69C90:
    ctx->pc = 0x80C69C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C90u)) return;
    // 80C69C90: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C69C94:
    ctx->pc = 0x80C69C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C69C94: lwz     r0, 44(r31)
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
label_80C69C98:
    ctx->pc = 0x80C69C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C69C98u)) return;
    // 80C69C98: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C69C9C:
    ctx->pc = 0x80C69C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69C9Cu)) return;
    // 80C69C9C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C69CA0:
    ctx->pc = 0x80C69CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C69CA0u)) return;
    // 80C69CA0: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C69CA4:
    ctx->pc = 0x80C69CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69CA4u)) return;
    // 80C69CA4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C69CA8:
    ctx->pc = 0x80C69CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69CA8u)) return;
    // 80C69CA8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C69CAC:
    ctx->pc = 0x80C69CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69CACu)) return;
    // 80C69CAC: bl      0x80509B94
    {
            ctx->lr = 0x80C69CB0u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C69CB0:
    ctx->pc = 0x80C69CB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69CB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C69CB0: stw     r29, 44(r31)
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
label_80C69CB4:
    ctx->pc = 0x80C69CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69CB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69CB4: lwz     r3, 52(r31)
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
label_80C69CB8:
    ctx->pc = 0x80C69CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69CB8u)) return;
    // 80C69CB8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C69CBC:
    ctx->pc = 0x80C69CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69CBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C69CBC: stw     r0, 52(r31)
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
label_80C69CC0:
    ctx->pc = 0x80C69CC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69CC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69CC0: lwz     r31, 28(r1)
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
label_80C69CC4:
    ctx->pc = 0x80C69CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C69CC4: lwz     r30, 24(r1)
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
label_80C69CC8:
    ctx->pc = 0x80C69CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69CC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C69CC8: lwz     r29, 20(r1)
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
label_80C69CCC:
    ctx->pc = 0x80C69CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69CCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69CCC: lwz     r0, 36(r1)
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
label_80C69CD0:
    ctx->pc = 0x80C69CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C69CD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69CD0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69CD4:
    ctx->pc = 0x80C69CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69CD4u)) return;
    // 80C69CD4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C69CD8:
    ctx->pc = 0x80C69CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69CD8u)) return;
    // 80C69CD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C69CDC:
    ctx->pc = 0x80C69CDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69CDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C69CDC: stwu     r1, -32(r1)
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
label_80C69CE0:
    ctx->pc = 0x80C69CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69CE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C69CE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69CE4:
    ctx->pc = 0x80C69CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69CE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C69CE4: stw     r0, 36(r1)
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
label_80C69CE8:
    ctx->pc = 0x80C69CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69CE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C69CE8: stw     r31, 28(r1)
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
label_80C69CEC:
    ctx->pc = 0x80C69CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69CECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69CEC: stw     r30, 24(r1)
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
label_80C69CF0:
    ctx->pc = 0x80C69CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69CF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C69CF0: stw     r29, 20(r1)
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
label_80C69CF4:
    ctx->pc = 0x80C69CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69CF4u)) return;
    // 80C69CF4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C69CF8:
    ctx->pc = 0x80C69CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69CF8u)) return;
    // 80C69CF8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C69CFC:
    ctx->pc = 0x80C69CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69CFCu)) return;
    // 80C69CFC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C69D00:
    ctx->pc = 0x80C69D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D00u)) return;
    // 80C69D00: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C69D04:
    ctx->pc = 0x80C69D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D04u)) return;
    // 80C69D04: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C69D08:
    ctx->pc = 0x80C69D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D08u)) return;
    // 80C69D08: bl      0x8050FD60
    {
            ctx->lr = 0x80C69D0Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C69D0C:
    ctx->pc = 0x80C69D0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69D0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C69D0C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C69D10:
    ctx->pc = 0x80C69D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D10u)) return;
    // 80C69D10: cmplwi  r31, 0x0000
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

label_80C69D14:
    ctx->pc = 0x80C69D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D14u)) return;
    // 80C69D14: bc    12, 2, 0x80C69D78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C69D78;
        }
    }

label_80C69D18:
    ctx->pc = 0x80C69D18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69D18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C69D18: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C69D1C:
    ctx->pc = 0x80C69D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D1Cu)) return;
    // 80C69D1C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C69D20:
    ctx->pc = 0x80C69D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D20u)) return;
    // 80C69D20: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C69D24:
    ctx->pc = 0x80C69D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D24u)) return;
    // 80C69D24: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C69D28:
    ctx->pc = 0x80C69D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D28u)) return;
    // 80C69D28: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C69D2C:
    ctx->pc = 0x80C69D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D2Cu)) return;
    // 80C69D2C: bl      0x8050A0D4
    {
            ctx->lr = 0x80C69D30u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80C69D30:
    ctx->pc = 0x80C69D30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69D30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80C69D30: lis     r3, -32569
    ctx->gpr[3] = ((u32)(s32)(-32569) << 16);

label_80C69D34:
    ctx->pc = 0x80C69D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D34u)) return;
    // 80C69D34: addi    r0, r3, -25632
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-25632);

label_80C69D38:
    ctx->pc = 0x80C69D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C69D38: stw     r0, 16(r31)
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
label_80C69D3C:
    ctx->pc = 0x80C69D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D3Cu)) return;
    // 80C69D3C: lis     r3, -32569
    ctx->gpr[3] = ((u32)(s32)(-32569) << 16);

label_80C69D40:
    ctx->pc = 0x80C69D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D40u)) return;
    // 80C69D40: addi    r0, r3, -25672
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-25672);

label_80C69D44:
    ctx->pc = 0x80C69D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C69D44: stw     r0, 24(r31)
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
label_80C69D48:
    ctx->pc = 0x80C69D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C69D48: lwz     r3, 32(r31)
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
label_80C69D4C:
    ctx->pc = 0x80C69D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C69D4C: stw     r31, 16(r3)
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
label_80C69D50:
    ctx->pc = 0x80C69D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D50u)) return;
    // 80C69D50: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C69D54:
    ctx->pc = 0x80C69D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C69D54: stw     r0, 20(r3)
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
label_80C69D58:
    ctx->pc = 0x80C69D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69D58: stw     r0, 24(r3)
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
label_80C69D5C:
    ctx->pc = 0x80C69D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C69D5C: stw     r0, 28(r3)
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
label_80C69D60:
    ctx->pc = 0x80C69D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C69D60: stw     r0, 32(r3)
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
label_80C69D64:
    ctx->pc = 0x80C69D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69D64: stw     r0, 36(r3)
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
label_80C69D68:
    ctx->pc = 0x80C69D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C69D68: stw     r0, 40(r3)
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
label_80C69D6C:
    ctx->pc = 0x80C69D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69D6C: stw     r0, 44(r3)
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
label_80C69D70:
    ctx->pc = 0x80C69D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C69D70: stw     r0, 48(r3)
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
label_80C69D74:
    ctx->pc = 0x80C69D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C69D74: stw     r0, 52(r3)
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
label_80C69D78:
    ctx->pc = 0x80C69D78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69D78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C69D78: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C69D7C:
    ctx->pc = 0x80C69D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69D7C: lwz     r31, 28(r1)
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
label_80C69D80:
    ctx->pc = 0x80C69D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C69D80: lwz     r30, 24(r1)
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
label_80C69D84:
    ctx->pc = 0x80C69D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C69D84: lwz     r29, 20(r1)
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
label_80C69D88:
    ctx->pc = 0x80C69D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69D88: lwz     r0, 36(r1)
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
label_80C69D8C:
    ctx->pc = 0x80C69D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C69D8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69D8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69D90:
    ctx->pc = 0x80C69D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D90u)) return;
    // 80C69D90: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C69D94:
    ctx->pc = 0x80C69D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D94u)) return;
    // 80C69D94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C69D98:
    ctx->pc = 0x80C69D98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69D98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C69D98: stwu     r1, -16(r1)
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
label_80C69D9C:
    ctx->pc = 0x80C69D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69D9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C69D9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69DA0:
    ctx->pc = 0x80C69DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69DA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C69DA0: stw     r0, 20(r1)
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
label_80C69DA4:
    ctx->pc = 0x80C69DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69DA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69DA4: stw     r31, 12(r1)
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
label_80C69DA8:
    ctx->pc = 0x80C69DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69DA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C69DA8: stw     r30, 8(r1)
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
label_80C69DAC:
    ctx->pc = 0x80C69DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69DACu)) return;
    // 80C69DAC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C69DB0:
    ctx->pc = 0x80C69DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69DB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69DB0: lwz     r31, 32(r3)
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
label_80C69DB4:
    ctx->pc = 0x80C69DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69DB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C69DB4: stw     r30, 24(r31)
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
label_80C69DB8:
    ctx->pc = 0x80C69DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69DB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69DB8: stw     r5, 28(r31)
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
label_80C69DBC:
    ctx->pc = 0x80C69DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69DBCu)) return;
    // 80C69DBC: cmpwi   r5, 0
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

label_80C69DC0:
    ctx->pc = 0x80C69DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69DC0u)) return;
    // 80C69DC0: bc    12, 1, 0x80C69DD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C69DD0;
        }
    }

label_80C69DC4:
    ctx->pc = 0x80C69DC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69DC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C69DC4: lwz     r3, 16(r31)
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
label_80C69DC8:
    ctx->pc = 0x80C69DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69DC8u)) return;
    // 80C69DC8: bl      0x80509C74
    {
            ctx->lr = 0x80C69DCCu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C69DCC:
    ctx->pc = 0x80C69DCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69DCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C69DCC: stw     r30, 20(r31)
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
label_80C69DD0:
    ctx->pc = 0x80C69DD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69DD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C69DD0: lwz     r31, 12(r1)
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
label_80C69DD4:
    ctx->pc = 0x80C69DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69DD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C69DD4: lwz     r30, 8(r1)
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
label_80C69DD8:
    ctx->pc = 0x80C69DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69DD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69DD8: lwz     r0, 20(r1)
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
label_80C69DDC:
    ctx->pc = 0x80C69DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C69DDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69DDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69DE0:
    ctx->pc = 0x80C69DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69DE0u)) return;
    // 80C69DE0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C69DE4:
    ctx->pc = 0x80C69DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69DE4u)) return;
    // 80C69DE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C69DE8:
    ctx->pc = 0x80C69DE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69DE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C69DE8: stwu     r1, -16(r1)
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
label_80C69DEC:
    ctx->pc = 0x80C69DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69DECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C69DEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69DF0:
    ctx->pc = 0x80C69DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69DF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C69DF0: stw     r0, 20(r1)
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
label_80C69DF4:
    ctx->pc = 0x80C69DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69DF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69DF4: stw     r31, 12(r1)
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
label_80C69DF8:
    ctx->pc = 0x80C69DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69DF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C69DF8: stw     r30, 8(r1)
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
label_80C69DFC:
    ctx->pc = 0x80C69DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69DFCu)) return;
    // 80C69DFC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C69E00:
    ctx->pc = 0x80C69E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69E00: lwz     r31, 32(r3)
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
label_80C69E04:
    ctx->pc = 0x80C69E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C69E04: stw     r30, 36(r31)
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
label_80C69E08:
    ctx->pc = 0x80C69E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69E08: stw     r5, 40(r31)
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
label_80C69E0C:
    ctx->pc = 0x80C69E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E0Cu)) return;
    // 80C69E0C: cmpwi   r5, 0
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

label_80C69E10:
    ctx->pc = 0x80C69E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E10u)) return;
    // 80C69E10: bc    12, 1, 0x80C69E20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C69E20;
        }
    }

label_80C69E14:
    ctx->pc = 0x80C69E14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69E14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C69E14: lwz     r3, 16(r31)
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
label_80C69E18:
    ctx->pc = 0x80C69E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E18u)) return;
    // 80C69E18: bl      0x80509BF8
    {
            ctx->lr = 0x80C69E1Cu;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C69E1C:
    ctx->pc = 0x80C69E1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69E1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C69E1C: stw     r30, 32(r31)
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
label_80C69E20:
    ctx->pc = 0x80C69E20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69E20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C69E20: lwz     r31, 12(r1)
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
label_80C69E24:
    ctx->pc = 0x80C69E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C69E24: lwz     r30, 8(r1)
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
label_80C69E28:
    ctx->pc = 0x80C69E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69E28: lwz     r0, 20(r1)
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
label_80C69E2C:
    ctx->pc = 0x80C69E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C69E2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69E2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69E30:
    ctx->pc = 0x80C69E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E30u)) return;
    // 80C69E30: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C69E34:
    ctx->pc = 0x80C69E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E34u)) return;
    // 80C69E34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C69E38:
    ctx->pc = 0x80C69E38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69E38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C69E38: stwu     r1, -16(r1)
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
label_80C69E3C:
    ctx->pc = 0x80C69E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C69E3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69E40:
    ctx->pc = 0x80C69E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C69E40: stw     r0, 20(r1)
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
label_80C69E44:
    ctx->pc = 0x80C69E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69E44: stw     r31, 12(r1)
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
label_80C69E48:
    ctx->pc = 0x80C69E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C69E48: stw     r30, 8(r1)
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
label_80C69E4C:
    ctx->pc = 0x80C69E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E4Cu)) return;
    // 80C69E4C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C69E50:
    ctx->pc = 0x80C69E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69E50: lwz     r31, 32(r3)
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
label_80C69E54:
    ctx->pc = 0x80C69E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C69E54: stw     r30, 48(r31)
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
label_80C69E58:
    ctx->pc = 0x80C69E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69E58: stw     r5, 52(r31)
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
label_80C69E5C:
    ctx->pc = 0x80C69E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E5Cu)) return;
    // 80C69E5C: cmpwi   r5, 0
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

label_80C69E60:
    ctx->pc = 0x80C69E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E60u)) return;
    // 80C69E60: bc    12, 1, 0x80C69E70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C69E70;
        }
    }

label_80C69E64:
    ctx->pc = 0x80C69E64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69E64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C69E64: lwz     r3, 16(r31)
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
label_80C69E68:
    ctx->pc = 0x80C69E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E68u)) return;
    // 80C69E68: bl      0x80509B94
    {
            ctx->lr = 0x80C69E6Cu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C69E6C:
    ctx->pc = 0x80C69E6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69E6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C69E6C: stw     r30, 44(r31)
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
label_80C69E70:
    ctx->pc = 0x80C69E70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69E70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C69E70: lwz     r31, 12(r1)
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
label_80C69E74:
    ctx->pc = 0x80C69E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C69E74: lwz     r30, 8(r1)
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
label_80C69E78:
    ctx->pc = 0x80C69E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69E78: lwz     r0, 20(r1)
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
label_80C69E7C:
    ctx->pc = 0x80C69E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C69E7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69E7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69E80:
    ctx->pc = 0x80C69E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E80u)) return;
    // 80C69E80: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C69E84:
    ctx->pc = 0x80C69E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E84u)) return;
    // 80C69E84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C69E88:
    ctx->pc = 0x80C69E88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69E88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C69E88: stwu     r1, -16(r1)
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
label_80C69E8C:
    ctx->pc = 0x80C69E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C69E8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69E90:
    ctx->pc = 0x80C69E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69E90: stw     r0, 20(r1)
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
label_80C69E94:
    ctx->pc = 0x80C69E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C69E94: stw     r31, 12(r1)
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
label_80C69E98:
    ctx->pc = 0x80C69E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E98u)) return;
    // 80C69E98: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C69E9C:
    ctx->pc = 0x80C69E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69E9Cu)) return;
    // 80C69E9C: lis     r4, -27425
    ctx->gpr[4] = ((u32)(s32)(-27425) << 16);

label_80C69EA0:
    ctx->pc = 0x80C69EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69EA0u)) return;
    // 80C69EA0: addi    r4, r4, -8692
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8692);

label_80C69EA4:
    ctx->pc = 0x80C69EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69EA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69EA4: lwz     r0, 0(r4)
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
label_80C69EA8:
    ctx->pc = 0x80C69EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69EA8u)) return;
    // 80C69EA8: cmplwi  r0, 0x0000
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

label_80C69EAC:
    ctx->pc = 0x80C69EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69EACu)) return;
    // 80C69EAC: bc    4, 2, 0x80C69ED0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C69ED0;
        }
    }

label_80C69EB0:
    ctx->pc = 0x80C69EB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69EB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69EB0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80C69EB4:
    ctx->pc = 0x80C69EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69EB4u)) return;
    // 80C69EB4: bl      0x8050EEC0
    {
            ctx->lr = 0x80C69EB8u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80C69EB8:
    ctx->pc = 0x80C69EB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69EB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C69EB8: lis     r4, -27425
    ctx->gpr[4] = ((u32)(s32)(-27425) << 16);

label_80C69EBC:
    ctx->pc = 0x80C69EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69EBCu)) return;
    // 80C69EBC: addi    r4, r4, -8692
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8692);

label_80C69EC0:
    ctx->pc = 0x80C69EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69EC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C69EC0: stw     r3, 0(r4)
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
label_80C69EC4:
    ctx->pc = 0x80C69EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69EC4u)) return;
    // 80C69EC4: lis     r3, -27425
    ctx->gpr[3] = ((u32)(s32)(-27425) << 16);

label_80C69EC8:
    ctx->pc = 0x80C69EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69EC8u)) return;
    // 80C69EC8: addi    r3, r3, -8696
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8696);

label_80C69ECC:
    ctx->pc = 0x80C69ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69ECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C69ECC: stw     r31, 0(r3)
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
label_80C69ED0:
    ctx->pc = 0x80C69ED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69ED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C69ED0: lwz     r31, 12(r1)
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
label_80C69ED4:
    ctx->pc = 0x80C69ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69ED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69ED4: lwz     r0, 20(r1)
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
label_80C69ED8:
    ctx->pc = 0x80C69ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C69ED8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69ED8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69EDC:
    ctx->pc = 0x80C69EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69EDCu)) return;
    // 80C69EDC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C69EE0:
    ctx->pc = 0x80C69EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69EE0u)) return;
    // 80C69EE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C69EE4:
    ctx->pc = 0x80C69EE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69EE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C69EE4: stwu     r1, -32(r1)
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
label_80C69EE8:
    ctx->pc = 0x80C69EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C69EE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69EEC:
    ctx->pc = 0x80C69EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69EECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C69EEC: stw     r0, 36(r1)
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
label_80C69EF0:
    ctx->pc = 0x80C69EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69EF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C69EF0: stw     r31, 28(r1)
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
label_80C69EF4:
    ctx->pc = 0x80C69EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69EF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69EF4: stw     r30, 24(r1)
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
label_80C69EF8:
    ctx->pc = 0x80C69EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69EF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C69EF8: stw     r29, 20(r1)
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
label_80C69EFC:
    ctx->pc = 0x80C69EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69EFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C69EFC: stw     r28, 16(r1)
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
label_80C69F00:
    ctx->pc = 0x80C69F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F00u)) return;
    // 80C69F00: lis     r3, -27425
    ctx->gpr[3] = ((u32)(s32)(-27425) << 16);

label_80C69F04:
    ctx->pc = 0x80C69F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F04u)) return;
    // 80C69F04: addi    r30, r3, -8692
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-8692);

label_80C69F08:
    ctx->pc = 0x80C69F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69F08: lwz     r0, 0(r30)
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
label_80C69F0C:
    ctx->pc = 0x80C69F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F0Cu)) return;
    // 80C69F0C: cmplwi  r0, 0x0000
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

label_80C69F10:
    ctx->pc = 0x80C69F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F10u)) return;
    // 80C69F10: bc    12, 2, 0x80C69F70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C69F70;
        }
    }

label_80C69F14:
    ctx->pc = 0x80C69F14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69F14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C69F14: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80C69F18:
    ctx->pc = 0x80C69F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F18u)) return;
    // 80C69F18: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80C69F1C:
    ctx->pc = 0x80C69F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F1Cu)) return;
    // 80C69F1C: lis     r3, -27425
    ctx->gpr[3] = ((u32)(s32)(-27425) << 16);

label_80C69F20:
    ctx->pc = 0x80C69F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F20u)) return;
    // 80C69F20: addi    r31, r3, -8696
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-8696);

label_80C69F24:
    ctx->pc = 0x80C69F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F24u)) return;
    // 80C69F24: b       0x80C69F44
    {
            goto label_80C69F44;
    }

label_80C69F28:
    ctx->pc = 0x80C69F28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69F28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C69F28: lwz     r3, 0(r30)
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
label_80C69F2C:
    ctx->pc = 0x80C69F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69F2C: lwzx    r3, r3, r29
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
label_80C69F30:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F30u)) return;
    // 80C69F30: cmplwi  r3, 0x0000
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

label_80C69F34:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F34u)) return;
    // 80C69F34: bc    12, 2, 0x80C69F3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C69F3C;
        }
    }

label_80C69F38:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69F38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C69F38: bl      0x8050F9E0
    {
            ctx->lr = 0x80C69F3Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C69F3C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69F3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C69F3C: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80C69F40:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F40u)) return;
    // 80C69F40: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80C69F44:
    ctx->pc = 0x80C69F44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69F44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69F44: lwz     r0, 0(r31)
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
label_80C69F48:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F48u)) return;
    // 80C69F48: cmpw    r28, r0
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

label_80C69F4C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F4Cu)) return;
    // 80C69F4C: bc    12, 0, 0x80C69F28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C69F28u;
                return;
            }
            goto label_80C69F28;
        }
    }

label_80C69F50:
    ctx->pc = 0x80C69F50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69F50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C69F50: lis     r3, -27425
    ctx->gpr[3] = ((u32)(s32)(-27425) << 16);

label_80C69F54:
    ctx->pc = 0x80C69F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F54u)) return;
    // 80C69F54: addi    r3, r3, -8692
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8692);

label_80C69F58:
    ctx->pc = 0x80C69F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C69F58: lwz     r3, 0(r3)
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
label_80C69F5C:
    ctx->pc = 0x80C69F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F5Cu)) return;
    // 80C69F5C: bl      0x8050ED40
    {
            ctx->lr = 0x80C69F60u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80C69F60:
    ctx->pc = 0x80C69F60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69F60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C69F60: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C69F64:
    ctx->pc = 0x80C69F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F64u)) return;
    // 80C69F64: lis     r3, -27425
    ctx->gpr[3] = ((u32)(s32)(-27425) << 16);

label_80C69F68:
    ctx->pc = 0x80C69F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F68u)) return;
    // 80C69F68: addi    r3, r3, -8692
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8692);

label_80C69F6C:
    ctx->pc = 0x80C69F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C69F6C: stw     r0, 0(r3)
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
label_80C69F70:
    ctx->pc = 0x80C69F70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69F70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C69F70: lwz     r31, 28(r1)
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
label_80C69F74:
    ctx->pc = 0x80C69F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69F74: lwz     r30, 24(r1)
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
label_80C69F78:
    ctx->pc = 0x80C69F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C69F78: lwz     r29, 20(r1)
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
label_80C69F7C:
    ctx->pc = 0x80C69F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C69F7C: lwz     r28, 16(r1)
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
label_80C69F80:
    ctx->pc = 0x80C69F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69F80: lwz     r0, 36(r1)
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
label_80C69F84:
    ctx->pc = 0x80C69F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C69F84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69F84: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69F88:
    ctx->pc = 0x80C69F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F88u)) return;
    // 80C69F88: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C69F8C:
    ctx->pc = 0x80C69F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F8Cu)) return;
    // 80C69F8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C69F90:
    ctx->pc = 0x80C69F90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69F90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C69F90: stwu     r1, -16(r1)
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
label_80C69F94:
    ctx->pc = 0x80C69F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C69F94: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69F98:
    ctx->pc = 0x80C69F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C69F98: stw     r0, 20(r1)
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
label_80C69F9C:
    ctx->pc = 0x80C69F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69F9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C69F9C: stw     r31, 12(r1)
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
label_80C69FA0:
    ctx->pc = 0x80C69FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69FA0u)) return;
    // 80C69FA0: lis     r6, -27425
    ctx->gpr[6] = ((u32)(s32)(-27425) << 16);

label_80C69FA4:
    ctx->pc = 0x80C69FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69FA4u)) return;
    // 80C69FA4: addi    r6, r6, -8696
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8696);

label_80C69FA8:
    ctx->pc = 0x80C69FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69FA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69FA8: lwz     r0, 0(r6)
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
label_80C69FAC:
    ctx->pc = 0x80C69FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69FACu)) return;
    // 80C69FAC: cmpw    r3, r0
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

label_80C69FB0:
    ctx->pc = 0x80C69FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69FB0u)) return;
    // 80C69FB0: bc    4, 0, 0x80C69FEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C69FEC;
        }
    }

label_80C69FB4:
    ctx->pc = 0x80C69FB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69FB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C69FB4: lis     r6, -27425
    ctx->gpr[6] = ((u32)(s32)(-27425) << 16);

label_80C69FB8:
    ctx->pc = 0x80C69FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69FB8u)) return;
    // 80C69FB8: addi    r6, r6, -8692
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8692);

label_80C69FBC:
    ctx->pc = 0x80C69FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69FBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69FBC: lwz     r6, 0(r6)
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
label_80C69FC0:
    ctx->pc = 0x80C69FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69FC0u)) return;
    // 80C69FC0: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C69FC4:
    ctx->pc = 0x80C69FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69FC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69FC4: lwzx    r0, r6, r31
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
label_80C69FC8:
    ctx->pc = 0x80C69FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69FC8u)) return;
    // 80C69FC8: cmplwi  r0, 0x0000
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

label_80C69FCC:
    ctx->pc = 0x80C69FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69FCCu)) return;
    // 80C69FCC: bc    4, 2, 0x80C69FEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C69FEC;
        }
    }

label_80C69FD0:
    ctx->pc = 0x80C69FD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69FD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C69FD0: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C69FD4:
    ctx->pc = 0x80C69FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69FD4u)) return;
    // 80C69FD4: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C69FD8:
    ctx->pc = 0x80C69FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69FD8u)) return;
    // 80C69FD8: bl      0x80C69CDC
    {
            ctx->lr = 0x80C69FDCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C69CDCu;
                return;
            }
            goto label_80C69CDC;
    }

label_80C69FDC:
    ctx->pc = 0x80C69FDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69FDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C69FDC: lis     r4, -27425
    ctx->gpr[4] = ((u32)(s32)(-27425) << 16);

label_80C69FE0:
    ctx->pc = 0x80C69FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69FE0u)) return;
    // 80C69FE0: addi    r4, r4, -8692
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8692);

label_80C69FE4:
    ctx->pc = 0x80C69FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69FE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C69FE4: lwz     r4, 0(r4)
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
label_80C69FE8:
    ctx->pc = 0x80C69FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69FE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C69FE8: stwx    r3, r4, r31
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
label_80C69FEC:
    ctx->pc = 0x80C69FECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C69FECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C69FEC: lwz     r31, 12(r1)
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
label_80C69FF0:
    ctx->pc = 0x80C69FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69FF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C69FF0: lwz     r0, 20(r1)
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
label_80C69FF4:
    ctx->pc = 0x80C69FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C69FF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C69FF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C69FF8:
    ctx->pc = 0x80C69FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69FF8u)) return;
    // 80C69FF8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C69FFC:
    ctx->pc = 0x80C69FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C69FFCu)) return;
    // 80C69FFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C6A000:
    ctx->pc = 0x80C6A000u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A000u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C6A000: stwu     r1, -16(r1)
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
label_80C6A004:
    ctx->pc = 0x80C6A004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6A004: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A008:
    ctx->pc = 0x80C6A008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C6A008: stw     r0, 20(r1)
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
label_80C6A00C:
    ctx->pc = 0x80C6A00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A00Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C6A00C: stw     r31, 12(r1)
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
label_80C6A010:
    ctx->pc = 0x80C6A010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A010u)) return;
    // 80C6A010: lis     r4, -27425
    ctx->gpr[4] = ((u32)(s32)(-27425) << 16);

label_80C6A014:
    ctx->pc = 0x80C6A014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A014u)) return;
    // 80C6A014: addi    r4, r4, -8696
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8696);

label_80C6A018:
    ctx->pc = 0x80C6A018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A018: lwz     r0, 0(r4)
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
label_80C6A01C:
    ctx->pc = 0x80C6A01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A01Cu)) return;
    // 80C6A01C: cmpw    r3, r0
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

label_80C6A020:
    ctx->pc = 0x80C6A020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A020u)) return;
    // 80C6A020: bc    4, 0, 0x80C6A058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C6A058;
        }
    }

label_80C6A024:
    ctx->pc = 0x80C6A024u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A024u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C6A024: lis     r4, -27425
    ctx->gpr[4] = ((u32)(s32)(-27425) << 16);

label_80C6A028:
    ctx->pc = 0x80C6A028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A028u)) return;
    // 80C6A028: addi    r4, r4, -8692
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8692);

label_80C6A02C:
    ctx->pc = 0x80C6A02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A02Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6A02C: lwz     r4, 0(r4)
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
label_80C6A030:
    ctx->pc = 0x80C6A030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A030u)) return;
    // 80C6A030: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C6A034:
    ctx->pc = 0x80C6A034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A034: lwzx    r3, r4, r31
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
label_80C6A038:
    ctx->pc = 0x80C6A038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A038u)) return;
    // 80C6A038: cmplwi  r3, 0x0000
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

label_80C6A03C:
    ctx->pc = 0x80C6A03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A03Cu)) return;
    // 80C6A03C: bc    12, 2, 0x80C6A058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C6A058;
        }
    }

label_80C6A040:
    ctx->pc = 0x80C6A040u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A040u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C6A040: bl      0x8050F9E0
    {
            ctx->lr = 0x80C6A044u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C6A044:
    ctx->pc = 0x80C6A044u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A044u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C6A044: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C6A048:
    ctx->pc = 0x80C6A048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A048u)) return;
    // 80C6A048: lis     r3, -27425
    ctx->gpr[3] = ((u32)(s32)(-27425) << 16);

label_80C6A04C:
    ctx->pc = 0x80C6A04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A04Cu)) return;
    // 80C6A04C: addi    r3, r3, -8692
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8692);

label_80C6A050:
    ctx->pc = 0x80C6A050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A050u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6A050: lwz     r3, 0(r3)
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
label_80C6A054:
    ctx->pc = 0x80C6A054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A054u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C6A054: stwx    r0, r3, r31
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
label_80C6A058:
    ctx->pc = 0x80C6A058u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A058u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C6A058: lwz     r31, 12(r1)
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
label_80C6A05C:
    ctx->pc = 0x80C6A05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A05Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6A05C: lwz     r0, 20(r1)
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
label_80C6A060:
    ctx->pc = 0x80C6A060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C6A060u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A060: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A064:
    ctx->pc = 0x80C6A064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A064u)) return;
    // 80C6A064: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C6A068:
    ctx->pc = 0x80C6A068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A068u)) return;
    // 80C6A068: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C6A06C:
    ctx->pc = 0x80C6A06Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A06Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6A06C: stwu     r1, -16(r1)
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
label_80C6A070:
    ctx->pc = 0x80C6A070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C6A070: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A074:
    ctx->pc = 0x80C6A074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C6A074: stw     r0, 20(r1)
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
label_80C6A078:
    ctx->pc = 0x80C6A078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A078u)) return;
    // 80C6A078: lis     r6, -27425
    ctx->gpr[6] = ((u32)(s32)(-27425) << 16);

label_80C6A07C:
    ctx->pc = 0x80C6A07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A07Cu)) return;
    // 80C6A07C: addi    r6, r6, -8696
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8696);

label_80C6A080:
    ctx->pc = 0x80C6A080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A080: lwz     r0, 0(r6)
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
label_80C6A084:
    ctx->pc = 0x80C6A084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A084u)) return;
    // 80C6A084: cmpw    r3, r0
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

label_80C6A088:
    ctx->pc = 0x80C6A088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A088u)) return;
    // 80C6A088: bc    4, 0, 0x80C6A0AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C6A0AC;
        }
    }

label_80C6A08C:
    ctx->pc = 0x80C6A08Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A08Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C6A08C: lis     r6, -27425
    ctx->gpr[6] = ((u32)(s32)(-27425) << 16);

label_80C6A090:
    ctx->pc = 0x80C6A090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A090u)) return;
    // 80C6A090: addi    r6, r6, -8692
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8692);

label_80C6A094:
    ctx->pc = 0x80C6A094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6A094: lwz     r6, 0(r6)
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
label_80C6A098:
    ctx->pc = 0x80C6A098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A098u)) return;
    // 80C6A098: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C6A09C:
    ctx->pc = 0x80C6A09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A09Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A09C: lwzx    r3, r6, r0
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
label_80C6A0A0:
    ctx->pc = 0x80C6A0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A0A0u)) return;
    // 80C6A0A0: cmplwi  r3, 0x0000
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

label_80C6A0A4:
    ctx->pc = 0x80C6A0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A0A4u)) return;
    // 80C6A0A4: bc    12, 2, 0x80C6A0AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C6A0AC;
        }
    }

label_80C6A0A8:
    ctx->pc = 0x80C6A0A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A0A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C6A0A8: bl      0x80C69D98
    {
            ctx->lr = 0x80C6A0ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C69D98u;
                return;
            }
            goto label_80C69D98;
    }

label_80C6A0AC:
    ctx->pc = 0x80C6A0ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A0ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6A0AC: lwz     r0, 20(r1)
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
label_80C6A0B0:
    ctx->pc = 0x80C6A0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C6A0B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A0B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A0B4:
    ctx->pc = 0x80C6A0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A0B4u)) return;
    // 80C6A0B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C6A0B8:
    ctx->pc = 0x80C6A0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A0B8u)) return;
    // 80C6A0B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C6A0BC:
    ctx->pc = 0x80C6A0BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A0BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6A0BC: stwu     r1, -16(r1)
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
label_80C6A0C0:
    ctx->pc = 0x80C6A0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A0C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C6A0C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A0C4:
    ctx->pc = 0x80C6A0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A0C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C6A0C4: stw     r0, 20(r1)
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
label_80C6A0C8:
    ctx->pc = 0x80C6A0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A0C8u)) return;
    // 80C6A0C8: lis     r6, -27425
    ctx->gpr[6] = ((u32)(s32)(-27425) << 16);

label_80C6A0CC:
    ctx->pc = 0x80C6A0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A0CCu)) return;
    // 80C6A0CC: addi    r6, r6, -8696
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8696);

label_80C6A0D0:
    ctx->pc = 0x80C6A0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A0D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A0D0: lwz     r0, 0(r6)
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
label_80C6A0D4:
    ctx->pc = 0x80C6A0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A0D4u)) return;
    // 80C6A0D4: cmpw    r3, r0
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

label_80C6A0D8:
    ctx->pc = 0x80C6A0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A0D8u)) return;
    // 80C6A0D8: bc    4, 0, 0x80C6A0FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C6A0FC;
        }
    }

label_80C6A0DC:
    ctx->pc = 0x80C6A0DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A0DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C6A0DC: lis     r6, -27425
    ctx->gpr[6] = ((u32)(s32)(-27425) << 16);

label_80C6A0E0:
    ctx->pc = 0x80C6A0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A0E0u)) return;
    // 80C6A0E0: addi    r6, r6, -8692
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8692);

label_80C6A0E4:
    ctx->pc = 0x80C6A0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A0E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6A0E4: lwz     r6, 0(r6)
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
label_80C6A0E8:
    ctx->pc = 0x80C6A0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A0E8u)) return;
    // 80C6A0E8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C6A0EC:
    ctx->pc = 0x80C6A0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A0ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A0EC: lwzx    r3, r6, r0
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
label_80C6A0F0:
    ctx->pc = 0x80C6A0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A0F0u)) return;
    // 80C6A0F0: cmplwi  r3, 0x0000
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

label_80C6A0F4:
    ctx->pc = 0x80C6A0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A0F4u)) return;
    // 80C6A0F4: bc    12, 2, 0x80C6A0FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C6A0FC;
        }
    }

label_80C6A0F8:
    ctx->pc = 0x80C6A0F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A0F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C6A0F8: bl      0x80C69DE8
    {
            ctx->lr = 0x80C6A0FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C69DE8u;
                return;
            }
            goto label_80C69DE8;
    }

label_80C6A0FC:
    ctx->pc = 0x80C6A0FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A0FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6A0FC: lwz     r0, 20(r1)
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
label_80C6A100:
    ctx->pc = 0x80C6A100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C6A100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A100: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A104:
    ctx->pc = 0x80C6A104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A104u)) return;
    // 80C6A104: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C6A108:
    ctx->pc = 0x80C6A108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A108u)) return;
    // 80C6A108: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C6A10C:
    ctx->pc = 0x80C6A10Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A10Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6A10C: stwu     r1, -16(r1)
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
label_80C6A110:
    ctx->pc = 0x80C6A110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C6A110: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A114:
    ctx->pc = 0x80C6A114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C6A114: stw     r0, 20(r1)
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
label_80C6A118:
    ctx->pc = 0x80C6A118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A118u)) return;
    // 80C6A118: lis     r6, -27425
    ctx->gpr[6] = ((u32)(s32)(-27425) << 16);

label_80C6A11C:
    ctx->pc = 0x80C6A11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A11Cu)) return;
    // 80C6A11C: addi    r6, r6, -8696
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8696);

label_80C6A120:
    ctx->pc = 0x80C6A120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A120: lwz     r0, 0(r6)
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
label_80C6A124:
    ctx->pc = 0x80C6A124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A124u)) return;
    // 80C6A124: cmpw    r3, r0
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

label_80C6A128:
    ctx->pc = 0x80C6A128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A128u)) return;
    // 80C6A128: bc    4, 0, 0x80C6A14C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C6A14C;
        }
    }

label_80C6A12C:
    ctx->pc = 0x80C6A12Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A12Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C6A12C: lis     r6, -27425
    ctx->gpr[6] = ((u32)(s32)(-27425) << 16);

label_80C6A130:
    ctx->pc = 0x80C6A130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A130u)) return;
    // 80C6A130: addi    r6, r6, -8692
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8692);

label_80C6A134:
    ctx->pc = 0x80C6A134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6A134: lwz     r6, 0(r6)
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
label_80C6A138:
    ctx->pc = 0x80C6A138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A138u)) return;
    // 80C6A138: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C6A13C:
    ctx->pc = 0x80C6A13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A13Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A13C: lwzx    r3, r6, r0
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
label_80C6A140:
    ctx->pc = 0x80C6A140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A140u)) return;
    // 80C6A140: cmplwi  r3, 0x0000
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

label_80C6A144:
    ctx->pc = 0x80C6A144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A144u)) return;
    // 80C6A144: bc    12, 2, 0x80C6A14C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C6A14C;
        }
    }

label_80C6A148:
    ctx->pc = 0x80C6A148u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A148u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C6A148: bl      0x80C69E38
    {
            ctx->lr = 0x80C6A14Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C69E38u;
                return;
            }
            goto label_80C69E38;
    }

label_80C6A14C:
    ctx->pc = 0x80C6A14Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A14Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6A14C: lwz     r0, 20(r1)
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
label_80C6A150:
    ctx->pc = 0x80C6A150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C6A150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A150: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A154:
    ctx->pc = 0x80C6A154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A154u)) return;
    // 80C6A154: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C6A158:
    ctx->pc = 0x80C6A158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A158u)) return;
    // 80C6A158: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C6A15C:
    ctx->pc = 0x80C6A15Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A15Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C6A15C: stwu     r1, -32(r1)
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
label_80C6A160:
    ctx->pc = 0x80C6A160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A160u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C6A160: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A164:
    ctx->pc = 0x80C6A164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C6A164: stw     r0, 36(r1)
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
label_80C6A168:
    ctx->pc = 0x80C6A168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C6A168: stw     r31, 28(r1)
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
label_80C6A16C:
    ctx->pc = 0x80C6A16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A16Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C6A16C: stw     r30, 24(r1)
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
label_80C6A170:
    ctx->pc = 0x80C6A170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6A170: stw     r29, 20(r1)
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
label_80C6A174:
    ctx->pc = 0x80C6A174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C6A174: stw     r28, 16(r1)
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
label_80C6A178:
    ctx->pc = 0x80C6A178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A178u)) return;
    // 80C6A178: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C6A17C:
    ctx->pc = 0x80C6A17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A17Cu)) return;
    // 80C6A17C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C6A180:
    ctx->pc = 0x80C6A180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A180u)) return;
    // 80C6A180: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C6A184:
    ctx->pc = 0x80C6A184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A184u)) return;
    // 80C6A184: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80C6A188:
    ctx->pc = 0x80C6A188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A188u)) return;
    // 80C6A188: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C6A18C:
    ctx->pc = 0x80C6A18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A18Cu)) return;
    // 80C6A18C: bl      0x80401DB0
    {
            ctx->lr = 0x80C6A190u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80C6A190:
    ctx->pc = 0x80C6A190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A190u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C6A190: lis     r4, -27425
    ctx->gpr[4] = ((u32)(s32)(-27425) << 16);

label_80C6A194:
    ctx->pc = 0x80C6A194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A194u)) return;
    // 80C6A194: addi    r4, r4, -8688
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8688);

label_80C6A198:
    ctx->pc = 0x80C6A198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6A198: lwz     r0, 0(r4)
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
label_80C6A19C:
    ctx->pc = 0x80C6A19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A19Cu)) return;
    // 80C6A19C: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80C6A1A0:
    ctx->pc = 0x80C6A1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1A0u)) return;
    // 80C6A1A0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C6A1A4:
    ctx->pc = 0x80C6A1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1A4u)) return;
    // 80C6A1A4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C6A1A8:
    ctx->pc = 0x80C6A1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1A8u)) return;
    // 80C6A1A8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C6A1AC:
    ctx->pc = 0x80C6A1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1ACu)) return;
    // 80C6A1AC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C6A1B0:
    ctx->pc = 0x80C6A1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1B0u)) return;
    // 80C6A1B0: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80C6A1B4:
    ctx->pc = 0x80C6A1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1B4u)) return;
    // 80C6A1B4: bl      0x8050A0D4
    {
            ctx->lr = 0x80C6A1B8u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80C6A1B8:
    ctx->pc = 0x80C6A1B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A1B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C6A1B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C6A1BC:
    ctx->pc = 0x80C6A1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1BCu)) return;
    // 80C6A1BC: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80C6A1C0:
    ctx->pc = 0x80C6A1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1C0u)) return;
    // 80C6A1C0: bl      0x80509C74
    {
            ctx->lr = 0x80C6A1C4u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C6A1C4:
    ctx->pc = 0x80C6A1C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A1C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C6A1C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C6A1C8:
    ctx->pc = 0x80C6A1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1C8u)) return;
    // 80C6A1C8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C6A1CC:
    ctx->pc = 0x80C6A1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1CCu)) return;
    // 80C6A1CC: bl      0x80509BF8
    {
            ctx->lr = 0x80C6A1D0u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C6A1D0:
    ctx->pc = 0x80C6A1D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A1D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C6A1D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C6A1D4:
    ctx->pc = 0x80C6A1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1D4u)) return;
    // 80C6A1D4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C6A1D8:
    ctx->pc = 0x80C6A1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1D8u)) return;
    // 80C6A1D8: bl      0x80509B94
    {
            ctx->lr = 0x80C6A1DCu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C6A1DC:
    ctx->pc = 0x80C6A1DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A1DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C6A1DC: lis     r3, -27425
    ctx->gpr[3] = ((u32)(s32)(-27425) << 16);

label_80C6A1E0:
    ctx->pc = 0x80C6A1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1E0u)) return;
    // 80C6A1E0: addi    r4, r3, -8688
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-8688);

label_80C6A1E4:
    ctx->pc = 0x80C6A1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C6A1E4: lwz     r3, 0(r4)
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
label_80C6A1E8:
    ctx->pc = 0x80C6A1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1E8u)) return;
    // 80C6A1E8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80C6A1EC:
    ctx->pc = 0x80C6A1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C6A1EC: stw     r0, 0(r4)
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
label_80C6A1F0:
    ctx->pc = 0x80C6A1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1F0u)) return;
    // 80C6A1F0: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80C6A1F4:
    ctx->pc = 0x80C6A1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C6A1F4: stw     r0, 0(r4)
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
label_80C6A1F8:
    ctx->pc = 0x80C6A1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C6A1F8: lwz     r31, 28(r1)
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
label_80C6A1FC:
    ctx->pc = 0x80C6A1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A1FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6A1FC: lwz     r30, 24(r1)
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
label_80C6A200:
    ctx->pc = 0x80C6A200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C6A200: lwz     r29, 20(r1)
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
label_80C6A204:
    ctx->pc = 0x80C6A204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C6A204: lwz     r28, 16(r1)
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
label_80C6A208:
    ctx->pc = 0x80C6A208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6A208: lwz     r0, 36(r1)
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
label_80C6A20C:
    ctx->pc = 0x80C6A20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C6A20Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A20C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A210:
    ctx->pc = 0x80C6A210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A210u)) return;
    // 80C6A210: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C6A214:
    ctx->pc = 0x80C6A214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A214u)) return;
    // 80C6A214: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C6A218:
    ctx->pc = 0x80C6A218u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A218u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6A218: stwu     r1, -64(r1)
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
label_80C6A21C:
    ctx->pc = 0x80C6A21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A21Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C6A21C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A220:
    ctx->pc = 0x80C6A220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A220: stw     r0, 68(r1)
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
label_80C6A224:
    ctx->pc = 0x80C6A224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A224u)) return;
    // 80C6A224: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80C6A228:
    ctx->pc = 0x80C6A228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A228u)) return;
    // 80C6A228: bl      0x80006DD4
    {
            ctx->lr = 0x80C6A22Cu;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80C6A22C:
    ctx->pc = 0x80C6A22Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A22Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C6A22C: lwz     r27, 32(r3)
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
label_80C6A230:
    ctx->pc = 0x80C6A230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A230u)) return;
    // 80C6A230: lis     r3, -27426
    ctx->gpr[3] = ((u32)(s32)(-27426) << 16);

label_80C6A234:
    ctx->pc = 0x80C6A234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A234u)) return;
    // 80C6A234: addi    r3, r3, -27400
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27400);

label_80C6A238:
    ctx->pc = 0x80C6A238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C6A238: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C6A238u)) return;
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
label_80C6A23C:
    ctx->pc = 0x80C6A23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A23Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C6A23C: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C6A23Cu)) return;
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
label_80C6A240:
    ctx->pc = 0x80C6A240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A240u)) return;
    // 80C6A240: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C6A240u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C6A244:
    ctx->pc = 0x80C6A244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A244u)) return;
    // 80C6A244: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C6A244u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C6A248:
    ctx->pc = 0x80C6A248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C6A248: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C6A248u)) return;
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
label_80C6A24C:
    ctx->pc = 0x80C6A24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A24Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C6A24C: lwz     r31, 12(r1)
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
label_80C6A250:
    ctx->pc = 0x80C6A250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C6A250: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C6A250u)) return;
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
label_80C6A254:
    ctx->pc = 0x80C6A254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A254u)) return;
    // 80C6A254: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C6A254u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C6A258:
    ctx->pc = 0x80C6A258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A258u)) return;
    // 80C6A258: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C6A258u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C6A25C:
    ctx->pc = 0x80C6A25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A25Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C6A25C: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C6A25Cu)) return;
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
label_80C6A260:
    ctx->pc = 0x80C6A260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C6A260: lwz     r30, 20(r1)
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
label_80C6A264:
    ctx->pc = 0x80C6A264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C6A264: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C6A264u)) return;
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
label_80C6A268:
    ctx->pc = 0x80C6A268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A268u)) return;
    // 80C6A268: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C6A268u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C6A26C:
    ctx->pc = 0x80C6A26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A26Cu)) return;
    // 80C6A26C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C6A26Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C6A270:
    ctx->pc = 0x80C6A270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C6A270: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C6A270u)) return;
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
label_80C6A274:
    ctx->pc = 0x80C6A274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C6A274: lwz     r29, 28(r1)
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
label_80C6A278:
    ctx->pc = 0x80C6A278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C6A278: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C6A278u)) return;
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
label_80C6A27C:
    ctx->pc = 0x80C6A27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A27Cu)) return;
    // 80C6A27C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C6A27Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C6A280:
    ctx->pc = 0x80C6A280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A280u)) return;
    // 80C6A280: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C6A280u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C6A284:
    ctx->pc = 0x80C6A284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C6A284: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C6A284u)) return;
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
label_80C6A288:
    ctx->pc = 0x80C6A288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C6A288: lwz     r28, 36(r1)
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
label_80C6A28C:
    ctx->pc = 0x80C6A28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A28Cu)) return;
    // 80C6A28C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C6A290:
    ctx->pc = 0x80C6A290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A290u)) return;
    // 80C6A290: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80C6A294:
    ctx->pc = 0x80C6A294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A294: lwz     r0, 0(r3)
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
label_80C6A298:
    ctx->pc = 0x80C6A298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A298u)) return;
    // 80C6A298: cmpwi   r0, 0
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

label_80C6A29C:
    ctx->pc = 0x80C6A29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A29Cu)) return;
    // 80C6A29C: bc    4, 2, 0x80C6A354
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C6A354;
        }
    }

label_80C6A2A0:
    ctx->pc = 0x80C6A2A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A2A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C6A2A0: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C6A2A4:
    ctx->pc = 0x80C6A2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A2A4u)) return;
    // 80C6A2A4: cmplwi  r0, 0x0000
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

label_80C6A2A8:
    ctx->pc = 0x80C6A2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A2A8u)) return;
    // 80C6A2A8: bc    12, 2, 0x80C6A354
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C6A354;
        }
    }

label_80C6A2AC:
    ctx->pc = 0x80C6A2ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A2ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C6A2AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C6A2B0:
    ctx->pc = 0x80C6A2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A2B0u)) return;
    // 80C6A2B0: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80C6A2B4:
    ctx->pc = 0x80C6A2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A2B4u)) return;
    // 80C6A2B4: bl      0x8060F4F8
    {
            ctx->lr = 0x80C6A2B8u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80C6A2B8:
    ctx->pc = 0x80C6A2B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A2B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C6A2B8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C6A2BC:
    ctx->pc = 0x80C6A2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A2BCu)) return;
    // 80C6A2BC: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80C6A2C0:
    ctx->pc = 0x80C6A2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A2C0u)) return;
    // 80C6A2C0: bl      0x8060F4F8
    {
            ctx->lr = 0x80C6A2C4u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80C6A2C4:
    ctx->pc = 0x80C6A2C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A2C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C6A2C4: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C6A2C4u)) return;
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
label_80C6A2C8:
    ctx->pc = 0x80C6A2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A2C8u)) return;
    // 80C6A2C8: lis     r3, -27426
    ctx->gpr[3] = ((u32)(s32)(-27426) << 16);

label_80C6A2CC:
    ctx->pc = 0x80C6A2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A2CCu)) return;
    // 80C6A2CC: addi    r3, r3, -27392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27392);

label_80C6A2D0:
    ctx->pc = 0x80C6A2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A2D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C6A2D0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C6A2D0u)) return;
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
label_80C6A2D4:
    ctx->pc = 0x80C6A2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A2D4u)) return;
    // 80C6A2D4: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80C6A2D4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80C6A2D8:
    ctx->pc = 0x80C6A2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A2D8u)) return;
    // 80C6A2D8: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80C6A2DC:
    ctx->pc = 0x80C6A2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A2DCu)) return;
    // 80C6A2DC: bc    4, 2, 0x80C6A2F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C6A2F0;
        }
    }

label_80C6A2E0:
    ctx->pc = 0x80C6A2E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A2E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C6A2E0: lis     r3, -27426
    ctx->gpr[3] = ((u32)(s32)(-27426) << 16);

label_80C6A2E4:
    ctx->pc = 0x80C6A2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A2E4u)) return;
    // 80C6A2E4: addi    r3, r3, -27396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27396);

label_80C6A2E8:
    ctx->pc = 0x80C6A2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A2E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6A2E8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C6A2E8u)) return;
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
label_80C6A2EC:
    ctx->pc = 0x80C6A2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A2ECu)) return;
    // 80C6A2EC: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80C6A2ECu)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80C6A2F0:
    ctx->pc = 0x80C6A2F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A2F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C6A2F0: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C6A2F4:
    ctx->pc = 0x80C6A2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A2F4u)) return;
    // 80C6A2F4: cmplwi  r0, 0x00FF
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

label_80C6A2F8:
    ctx->pc = 0x80C6A2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A2F8u)) return;
    // 80C6A2F8: bc    4, 1, 0x80C6A300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C6A300;
        }
    }

label_80C6A2FC:
    ctx->pc = 0x80C6A2FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A2FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C6A2FC: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80C6A300:
    ctx->pc = 0x80C6A300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80C6A300: lis     r3, -27426
    ctx->gpr[3] = ((u32)(s32)(-27426) << 16);

label_80C6A304:
    ctx->pc = 0x80C6A304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A304u)) return;
    // 80C6A304: addi    r3, r3, -27388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27388);

label_80C6A308:
    ctx->pc = 0x80C6A308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C6A308: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C6A308u)) return;
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
label_80C6A30C:
    ctx->pc = 0x80C6A30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A30Cu)) return;
    // 80C6A30C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80C6A30Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80C6A310:
    ctx->pc = 0x80C6A310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A310u)) return;
    // 80C6A310: lis     r3, -27426
    ctx->gpr[3] = ((u32)(s32)(-27426) << 16);

label_80C6A314:
    ctx->pc = 0x80C6A314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A314u)) return;
    // 80C6A314: addi    r3, r3, -27384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27384);

label_80C6A318:
    ctx->pc = 0x80C6A318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C6A318: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C6A318u)) return;
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
label_80C6A31C:
    ctx->pc = 0x80C6A31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A31Cu)) return;
    // 80C6A31C: lis     r3, -27426
    ctx->gpr[3] = ((u32)(s32)(-27426) << 16);

label_80C6A320:
    ctx->pc = 0x80C6A320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A320u)) return;
    // 80C6A320: addi    r3, r3, -27380
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27380);

label_80C6A324:
    ctx->pc = 0x80C6A324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C6A324: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C6A324u)) return;
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
label_80C6A328:
    ctx->pc = 0x80C6A328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A328u)) return;
    // 80C6A328: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80C6A32C:
    ctx->pc = 0x80C6A32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A32Cu)) return;
    // 80C6A32C: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80C6A330:
    ctx->pc = 0x80C6A330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A330u)) return;
    // 80C6A330: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80C6A334:
    ctx->pc = 0x80C6A334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A334u)) return;
    // 80C6A334: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C6A338:
    ctx->pc = 0x80C6A338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A338u)) return;
    // 80C6A338: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80C6A33C:
    ctx->pc = 0x80C6A33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A33Cu)) return;
    // 80C6A33C: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80C6A340:
    ctx->pc = 0x80C6A340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A340u)) return;
    // 80C6A340: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80C6A344:
    ctx->pc = 0x80C6A344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A344u)) return;
    // 80C6A344: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80C6A348:
    ctx->pc = 0x80C6A348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A348u)) return;
    // 80C6A348: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80C6A34C:
    ctx->pc = 0x80C6A34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A34Cu)) return;
    // 80C6A34C: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80C6A350:
    ctx->pc = 0x80C6A350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A350u)) return;
    // 80C6A350: bl      0x80C6A510
    {
            ctx->lr = 0x80C6A354u;
            goto label_80C6A510;
    }

label_80C6A354:
    ctx->pc = 0x80C6A354u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A354u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C6A354: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80C6A358:
    ctx->pc = 0x80C6A358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A358u)) return;
    // 80C6A358: bl      0x80006E20
    {
            ctx->lr = 0x80C6A35Cu;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80C6A35C:
    ctx->pc = 0x80C6A35Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A35Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6A35C: lwz     r0, 68(r1)
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
label_80C6A360:
    ctx->pc = 0x80C6A360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C6A360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A360: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A364:
    ctx->pc = 0x80C6A364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A364u)) return;
    // 80C6A364: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80C6A368:
    ctx->pc = 0x80C6A368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A368u)) return;
    // 80C6A368: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C6A36C:
    ctx->pc = 0x80C6A36Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A36Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C6A36C: stwu     r1, -16(r1)
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
label_80C6A370:
    ctx->pc = 0x80C6A370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C6A370: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A374:
    ctx->pc = 0x80C6A374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C6A374: stw     r0, 20(r1)
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
label_80C6A378:
    ctx->pc = 0x80C6A378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C6A378: lwz     r5, 32(r3)
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
label_80C6A37C:
    ctx->pc = 0x80C6A37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A37Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6A37C: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6A37Cu)) return;
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
label_80C6A380:
    ctx->pc = 0x80C6A380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C6A380: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6A380u)) return;
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
label_80C6A384:
    ctx->pc = 0x80C6A384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A384u)) return;
    // 80C6A384: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C6A384u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80C6A388:
    ctx->pc = 0x80C6A388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A388u)) return;
    // 80C6A388: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C6A38C:
    ctx->pc = 0x80C6A38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A38Cu)) return;
    // 80C6A38C: addi    r4, r4, -27376
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27376);

label_80C6A390:
    ctx->pc = 0x80C6A390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A390: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C6A390u)) return;
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
label_80C6A394:
    ctx->pc = 0x80C6A394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A394u)) return;
    // 80C6A394: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C6A394u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80C6A398:
    ctx->pc = 0x80C6A398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A398u)) return;
    // 80C6A398: bc    4, 1, 0x80C6A3A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C6A3A4;
        }
    }

label_80C6A39C:
    ctx->pc = 0x80C6A39Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A39Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C6A39C: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C6A39Cu)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80C6A3A0:
    ctx->pc = 0x80C6A3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A3A0u)) return;
    // 80C6A3A0: b       0x80C6A3BC
    {
            goto label_80C6A3BC;
    }

label_80C6A3A4:
    ctx->pc = 0x80C6A3A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A3A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C6A3A4: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C6A3A8:
    ctx->pc = 0x80C6A3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A3A8u)) return;
    // 80C6A3A8: addi    r4, r4, -27388
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27388);

label_80C6A3AC:
    ctx->pc = 0x80C6A3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A3ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A3AC: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C6A3ACu)) return;
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
label_80C6A3B0:
    ctx->pc = 0x80C6A3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A3B0u)) return;
    // 80C6A3B0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C6A3B0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80C6A3B4:
    ctx->pc = 0x80C6A3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A3B4u)) return;
    // 80C6A3B4: bc    4, 0, 0x80C6A3BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C6A3BC;
        }
    }

label_80C6A3B8:
    ctx->pc = 0x80C6A3B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A3B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C6A3B8: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C6A3B8u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80C6A3BC:
    ctx->pc = 0x80C6A3BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A3BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6A3BC: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6A3BCu)) return;
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
label_80C6A3C0:
    ctx->pc = 0x80C6A3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A3C0u)) return;
    // 80C6A3C0: bl      0x80C6A218
    {
            ctx->lr = 0x80C6A3C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C6A218u;
                return;
            }
            goto label_80C6A218;
    }

label_80C6A3C4:
    ctx->pc = 0x80C6A3C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A3C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6A3C4: lwz     r0, 20(r1)
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
label_80C6A3C8:
    ctx->pc = 0x80C6A3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C6A3C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A3C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A3CC:
    ctx->pc = 0x80C6A3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A3CCu)) return;
    // 80C6A3CC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C6A3D0:
    ctx->pc = 0x80C6A3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A3D0u)) return;
    // 80C6A3D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C6A3D4:
    ctx->pc = 0x80C6A3D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A3D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C6A3D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C6A3D8:
    ctx->pc = 0x80C6A3D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A3D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C6A3D8: stwu     r1, -16(r1)
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
label_80C6A3DC:
    ctx->pc = 0x80C6A3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A3DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C6A3DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A3E0:
    ctx->pc = 0x80C6A3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A3E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C6A3E0: stw     r0, 20(r1)
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
label_80C6A3E4:
    ctx->pc = 0x80C6A3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A3E4u)) return;
    // 80C6A3E4: lis     r4, -32569
    ctx->gpr[4] = ((u32)(s32)(-32569) << 16);

label_80C6A3E8:
    ctx->pc = 0x80C6A3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A3E8u)) return;
    // 80C6A3E8: addi    r0, r4, -23700
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-23700);

label_80C6A3EC:
    ctx->pc = 0x80C6A3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A3ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6A3EC: stw     r0, 16(r3)
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
label_80C6A3F0:
    ctx->pc = 0x80C6A3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A3F0u)) return;
    // 80C6A3F0: lis     r4, -32569
    ctx->gpr[4] = ((u32)(s32)(-32569) << 16);

label_80C6A3F4:
    ctx->pc = 0x80C6A3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A3F4u)) return;
    // 80C6A3F4: addi    r0, r4, -24040
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-24040);

label_80C6A3F8:
    ctx->pc = 0x80C6A3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A3F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6A3F8: stw     r0, 20(r3)
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
label_80C6A3FC:
    ctx->pc = 0x80C6A3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A3FCu)) return;
    // 80C6A3FC: lis     r4, -32569
    ctx->gpr[4] = ((u32)(s32)(-32569) << 16);

label_80C6A400:
    ctx->pc = 0x80C6A400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A400u)) return;
    // 80C6A400: addi    r0, r4, -23596
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-23596);

label_80C6A404:
    ctx->pc = 0x80C6A404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6A404: stw     r0, 24(r3)
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
label_80C6A408:
    ctx->pc = 0x80C6A408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A408u)) return;
    // 80C6A408: bl      0x80C6A36C
    {
            ctx->lr = 0x80C6A40Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C6A36Cu;
                return;
            }
            goto label_80C6A36C;
    }

label_80C6A40C:
    ctx->pc = 0x80C6A40Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A40Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6A40C: lwz     r0, 20(r1)
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
label_80C6A410:
    ctx->pc = 0x80C6A410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C6A410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A410: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A414:
    ctx->pc = 0x80C6A414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A414u)) return;
    // 80C6A414: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C6A418:
    ctx->pc = 0x80C6A418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A418u)) return;
    // 80C6A418: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C6A41C:
    ctx->pc = 0x80C6A41Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A41Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C6A41C: stwu     r1, -96(r1)
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
label_80C6A420:
    ctx->pc = 0x80C6A420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C6A420: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A424:
    ctx->pc = 0x80C6A424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C6A424: stw     r0, 100(r1)
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
label_80C6A428:
    ctx->pc = 0x80C6A428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C6A428: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C6A428u)) return;
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
label_80C6A42C:
    ctx->pc = 0x80C6A42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A42Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C6A42C: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C6A42Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80C6A42Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A430:
    ctx->pc = 0x80C6A430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C6A430: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C6A430u)) return;
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
label_80C6A434:
    ctx->pc = 0x80C6A434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C6A434: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C6A434u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80C6A434u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A438:
    ctx->pc = 0x80C6A438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C6A438: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C6A438u)) return;
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
label_80C6A43C:
    ctx->pc = 0x80C6A43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A43Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C6A43C: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C6A43Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80C6A43Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A440:
    ctx->pc = 0x80C6A440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C6A440: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C6A440u)) return;
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
label_80C6A444:
    ctx->pc = 0x80C6A444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C6A444: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C6A444u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80C6A444u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A448:
    ctx->pc = 0x80C6A448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C6A448: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C6A448u)) return;
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
label_80C6A44C:
    ctx->pc = 0x80C6A44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A44Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C6A44C: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C6A44Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80C6A44Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A450:
    ctx->pc = 0x80C6A450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A450u)) return;
    // 80C6A450: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80C6A450u)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80C6A454:
    ctx->pc = 0x80C6A454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A454u)) return;
    // 80C6A454: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80C6A454u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80C6A458:
    ctx->pc = 0x80C6A458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A458u)) return;
    // 80C6A458: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80C6A458u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80C6A45C:
    ctx->pc = 0x80C6A45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A45Cu)) return;
    // 80C6A45C: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80C6A45Cu)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80C6A460:
    ctx->pc = 0x80C6A460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A460u)) return;
    // 80C6A460: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80C6A460u)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80C6A464:
    ctx->pc = 0x80C6A464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A464u)) return;
    // 80C6A464: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C6A468:
    ctx->pc = 0x80C6A468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A468u)) return;
    // 80C6A468: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80C6A46C:
    ctx->pc = 0x80C6A46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A46Cu)) return;
    // 80C6A46C: lis     r5, -32569
    ctx->gpr[5] = ((u32)(s32)(-32569) << 16);

label_80C6A470:
    ctx->pc = 0x80C6A470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A470u)) return;
    // 80C6A470: addi    r5, r5, -23592
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23592);

label_80C6A474:
    ctx->pc = 0x80C6A474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A474u)) return;
    // 80C6A474: bl      0x8050FD60
    {
            ctx->lr = 0x80C6A478u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C6A478:
    ctx->pc = 0x80C6A478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C6A478: lwz     r5, 32(r3)
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
label_80C6A47C:
    ctx->pc = 0x80C6A47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A47Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C6A47C: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6A47Cu)) return;
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
label_80C6A480:
    ctx->pc = 0x80C6A480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A480u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C6A480: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6A480u)) return;
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
label_80C6A484:
    ctx->pc = 0x80C6A484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C6A484: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6A484u)) return;
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
label_80C6A488:
    ctx->pc = 0x80C6A488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A488u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C6A488: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6A488u)) return;
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
label_80C6A48C:
    ctx->pc = 0x80C6A48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A48Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C6A48C: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6A48Cu)) return;
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
label_80C6A490:
    ctx->pc = 0x80C6A490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A490u)) return;
    // 80C6A490: lis     r4, -27426
    ctx->gpr[4] = ((u32)(s32)(-27426) << 16);

label_80C6A494:
    ctx->pc = 0x80C6A494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A494u)) return;
    // 80C6A494: addi    r4, r4, -27392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27392);

label_80C6A498:
    ctx->pc = 0x80C6A498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C6A498: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C6A498u)) return;
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
label_80C6A49C:
    ctx->pc = 0x80C6A49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A49Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C6A49C: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C6A49Cu)) return;
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
label_80C6A4A0:
    ctx->pc = 0x80C6A4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C6A4A0: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C6A4A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C6A4A0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A4A4:
    ctx->pc = 0x80C6A4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C6A4A4: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C6A4A4u)) return;
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
label_80C6A4A8:
    ctx->pc = 0x80C6A4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C6A4A8: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C6A4A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80C6A4A8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A4AC:
    ctx->pc = 0x80C6A4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C6A4AC: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C6A4ACu)) return;
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
label_80C6A4B0:
    ctx->pc = 0x80C6A4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C6A4B0: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C6A4B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80C6A4B0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A4B4:
    ctx->pc = 0x80C6A4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C6A4B4: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C6A4B4u)) return;
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
label_80C6A4B8:
    ctx->pc = 0x80C6A4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C6A4B8: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C6A4B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80C6A4B8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A4BC:
    ctx->pc = 0x80C6A4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C6A4BC: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C6A4BCu)) return;
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
label_80C6A4C0:
    ctx->pc = 0x80C6A4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C6A4C0: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C6A4C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80C6A4C0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A4C4:
    ctx->pc = 0x80C6A4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C6A4C4: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C6A4C4u)) return;
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
label_80C6A4C8:
    ctx->pc = 0x80C6A4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6A4C8: lwz     r0, 100(r1)
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
label_80C6A4CC:
    ctx->pc = 0x80C6A4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C6A4CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A4CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A4D0:
    ctx->pc = 0x80C6A4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4D0u)) return;
    // 80C6A4D0: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80C6A4D4:
    ctx->pc = 0x80C6A4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4D4u)) return;
    // 80C6A4D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C6A4D8:
    ctx->pc = 0x80C6A4D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A4D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A4D8: lwz     r3, 32(r3)
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
label_80C6A4DC:
    ctx->pc = 0x80C6A4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6A4DC: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C6A4DCu)) return;
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
label_80C6A4E0:
    ctx->pc = 0x80C6A4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4E0u)) return;
    // 80C6A4E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C6A4E4:
    ctx->pc = 0x80C6A4E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A4E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A4E4: lwz     r3, 32(r3)
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
label_80C6A4E8:
    ctx->pc = 0x80C6A4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6A4E8: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C6A4E8u)) return;
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
label_80C6A4EC:
    ctx->pc = 0x80C6A4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4ECu)) return;
    // 80C6A4EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C6A4F0:
    ctx->pc = 0x80C6A4F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A4F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6A4F0: lwz     r3, 32(r3)
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
label_80C6A4F4:
    ctx->pc = 0x80C6A4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C6A4F4: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C6A4F4u)) return;
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
label_80C6A4F8:
    ctx->pc = 0x80C6A4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A4F8: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C6A4F8u)) return;
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
label_80C6A4FC:
    ctx->pc = 0x80C6A4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A4FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6A4FC: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C6A4FCu)) return;
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
label_80C6A500:
    ctx->pc = 0x80C6A500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A500u)) return;
    // 80C6A500: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C6A504:
    ctx->pc = 0x80C6A504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A504: lwz     r3, 32(r3)
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
label_80C6A508:
    ctx->pc = 0x80C6A508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C6A508: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C6A508u)) return;
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
label_80C6A50C:
    ctx->pc = 0x80C6A50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A50Cu)) return;
    // 80C6A50C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

label_80C6A510:
    ctx->pc = 0x80C6A510u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A510u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6A510: stwu     r1, -16(r1)
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
label_80C6A514:
    ctx->pc = 0x80C6A514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C6A514: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A518:
    ctx->pc = 0x80C6A518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A518: stw     r0, 20(r1)
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
label_80C6A51C:
    ctx->pc = 0x80C6A51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A51Cu)) return;
    // 80C6A51C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80C6A520:
    ctx->pc = 0x80C6A520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A520u)) return;
    // 80C6A520: bl      0x80607948
    {
            ctx->lr = 0x80C6A524u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80C6A524:
    ctx->pc = 0x80C6A524u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C6A524u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C6A524: lwz     r0, 20(r1)
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
label_80C6A528:
    ctx->pc = 0x80C6A528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C6A528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C6A528: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C6A52C:
    ctx->pc = 0x80C6A52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A52Cu)) return;
    // 80C6A52C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C6A530:
    ctx->pc = 0x80C6A530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C6A530u)) return;
    // 80C6A530: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C69060;
        }
    }

    ctx->pc = 0x80C6A534u;
    return;
return_dispatch_80C69060:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80C69094u: goto label_80C69094;
    case 0x80C69098u: goto label_80C69098;
    case 0x80C6909Cu: goto label_80C6909C;
    case 0x80C690A4u: goto label_80C690A4;
    case 0x80C690ACu: goto label_80C690AC;
    case 0x80C690DCu: goto label_80C690DC;
    case 0x80C690F8u: goto label_80C690F8;
    case 0x80C69100u: goto label_80C69100;
    case 0x80C69128u: goto label_80C69128;
    case 0x80C69130u: goto label_80C69130;
    case 0x80C69144u: goto label_80C69144;
    case 0x80C6914Cu: goto label_80C6914C;
    case 0x80C69154u: goto label_80C69154;
    case 0x80C69158u: goto label_80C69158;
    case 0x80C69160u: goto label_80C69160;
    case 0x80C69188u: goto label_80C69188;
    case 0x80C69190u: goto label_80C69190;
    case 0x80C691D0u: goto label_80C691D0;
    case 0x80C69214u: goto label_80C69214;
    case 0x80C6921Cu: goto label_80C6921C;
    case 0x80C69224u: goto label_80C69224;
    case 0x80C6922Cu: goto label_80C6922C;
    case 0x80C69254u: goto label_80C69254;
    case 0x80C6925Cu: goto label_80C6925C;
    case 0x80C69270u: goto label_80C69270;
    case 0x80C69278u: goto label_80C69278;
    case 0x80C6927Cu: goto label_80C6927C;
    case 0x80C69284u: goto label_80C69284;
    case 0x80C692ACu: goto label_80C692AC;
    case 0x80C692B4u: goto label_80C692B4;
    case 0x80C692BCu: goto label_80C692BC;
    case 0x80C692C0u: goto label_80C692C0;
    case 0x80C692C8u: goto label_80C692C8;
    case 0x80C692F0u: goto label_80C692F0;
    case 0x80C692F8u: goto label_80C692F8;
    case 0x80C69300u: goto label_80C69300;
    case 0x80C69328u: goto label_80C69328;
    case 0x80C69330u: goto label_80C69330;
    case 0x80C69344u: goto label_80C69344;
    case 0x80C69374u: goto label_80C69374;
    case 0x80C69390u: goto label_80C69390;
    case 0x80C69398u: goto label_80C69398;
    case 0x80C693C0u: goto label_80C693C0;
    case 0x80C693C8u: goto label_80C693C8;
    case 0x80C693D0u: goto label_80C693D0;
    case 0x80C693F8u: goto label_80C693F8;
    case 0x80C69400u: goto label_80C69400;
    case 0x80C69430u: goto label_80C69430;
    case 0x80C6944Cu: goto label_80C6944C;
    case 0x80C69454u: goto label_80C69454;
    case 0x80C69484u: goto label_80C69484;
    case 0x80C694A0u: goto label_80C694A0;
    case 0x80C694A8u: goto label_80C694A8;
    case 0x80C694D8u: goto label_80C694D8;
    case 0x80C694F4u: goto label_80C694F4;
    case 0x80C694FCu: goto label_80C694FC;
    case 0x80C6952Cu: goto label_80C6952C;
    case 0x80C69548u: goto label_80C69548;
    case 0x80C69550u: goto label_80C69550;
    case 0x80C69558u: goto label_80C69558;
    case 0x80C69580u: goto label_80C69580;
    case 0x80C695B0u: goto label_80C695B0;
    case 0x80C695CCu: goto label_80C695CC;
    case 0x80C695D4u: goto label_80C695D4;
    case 0x80C695DCu: goto label_80C695DC;
    case 0x80C69604u: goto label_80C69604;
    case 0x80C6960Cu: goto label_80C6960C;
    case 0x80C69634u: goto label_80C69634;
    case 0x80C69664u: goto label_80C69664;
    case 0x80C69680u: goto label_80C69680;
    case 0x80C69688u: goto label_80C69688;
    case 0x80C696B8u: goto label_80C696B8;
    case 0x80C696D4u: goto label_80C696D4;
    case 0x80C696DCu: goto label_80C696DC;
    case 0x80C6970Cu: goto label_80C6970C;
    case 0x80C69728u: goto label_80C69728;
    case 0x80C69730u: goto label_80C69730;
    case 0x80C69760u: goto label_80C69760;
    case 0x80C6977Cu: goto label_80C6977C;
    case 0x80C69784u: goto label_80C69784;
    case 0x80C697B4u: goto label_80C697B4;
    case 0x80C697D0u: goto label_80C697D0;
    case 0x80C697D8u: goto label_80C697D8;
    case 0x80C69808u: goto label_80C69808;
    case 0x80C69824u: goto label_80C69824;
    case 0x80C6982Cu: goto label_80C6982C;
    case 0x80C69830u: goto label_80C69830;
    case 0x80C69838u: goto label_80C69838;
    case 0x80C69860u: goto label_80C69860;
    case 0x80C69890u: goto label_80C69890;
    case 0x80C698ACu: goto label_80C698AC;
    case 0x80C698B4u: goto label_80C698B4;
    case 0x80C698BCu: goto label_80C698BC;
    case 0x80C698E4u: goto label_80C698E4;
    case 0x80C698ECu: goto label_80C698EC;
    case 0x80C698F4u: goto label_80C698F4;
    case 0x80C6991Cu: goto label_80C6991C;
    case 0x80C69924u: goto label_80C69924;
    case 0x80C69954u: goto label_80C69954;
    case 0x80C69970u: goto label_80C69970;
    case 0x80C69978u: goto label_80C69978;
    case 0x80C6997Cu: goto label_80C6997C;
    case 0x80C699ACu: goto label_80C699AC;
    case 0x80C699C8u: goto label_80C699C8;
    case 0x80C699D0u: goto label_80C699D0;
    case 0x80C699F8u: goto label_80C699F8;
    case 0x80C69A00u: goto label_80C69A00;
    case 0x80C69A30u: goto label_80C69A30;
    case 0x80C69A44u: goto label_80C69A44;
    case 0x80C69A74u: goto label_80C69A74;
    case 0x80C69A90u: goto label_80C69A90;
    case 0x80C69A98u: goto label_80C69A98;
    case 0x80C69AC0u: goto label_80C69AC0;
    case 0x80C69AC8u: goto label_80C69AC8;
    case 0x80C69AD8u: goto label_80C69AD8;
    case 0x80C69AE0u: goto label_80C69AE0;
    case 0x80C69AE4u: goto label_80C69AE4;
    case 0x80C69AECu: goto label_80C69AEC;
    case 0x80C69B14u: goto label_80C69B14;
    case 0x80C69B1Cu: goto label_80C69B1C;
    case 0x80C69B5Cu: goto label_80C69B5C;
    case 0x80C69B64u: goto label_80C69B64;
    case 0x80C69B80u: goto label_80C69B80;
    case 0x80C69B98u: goto label_80C69B98;
    case 0x80C69BA0u: goto label_80C69BA0;
    case 0x80C69BA4u: goto label_80C69BA4;
    case 0x80C69BA8u: goto label_80C69BA8;
    case 0x80C69BD0u: goto label_80C69BD0;
    case 0x80C69C30u: goto label_80C69C30;
    case 0x80C69C70u: goto label_80C69C70;
    case 0x80C69CB0u: goto label_80C69CB0;
    case 0x80C69D0Cu: goto label_80C69D0C;
    case 0x80C69D30u: goto label_80C69D30;
    case 0x80C69DCCu: goto label_80C69DCC;
    case 0x80C69E1Cu: goto label_80C69E1C;
    case 0x80C69E6Cu: goto label_80C69E6C;
    case 0x80C69EB8u: goto label_80C69EB8;
    case 0x80C69F3Cu: goto label_80C69F3C;
    case 0x80C69F60u: goto label_80C69F60;
    case 0x80C69FDCu: goto label_80C69FDC;
    case 0x80C6A044u: goto label_80C6A044;
    case 0x80C6A0ACu: goto label_80C6A0AC;
    case 0x80C6A0FCu: goto label_80C6A0FC;
    case 0x80C6A14Cu: goto label_80C6A14C;
    case 0x80C6A190u: goto label_80C6A190;
    case 0x80C6A1B8u: goto label_80C6A1B8;
    case 0x80C6A1C4u: goto label_80C6A1C4;
    case 0x80C6A1D0u: goto label_80C6A1D0;
    case 0x80C6A1DCu: goto label_80C6A1DC;
    case 0x80C6A22Cu: goto label_80C6A22C;
    case 0x80C6A2B8u: goto label_80C6A2B8;
    case 0x80C6A2C4u: goto label_80C6A2C4;
    case 0x80C6A354u: goto label_80C6A354;
    case 0x80C6A35Cu: goto label_80C6A35C;
    case 0x80C6A3C4u: goto label_80C6A3C4;
    case 0x80C6A40Cu: goto label_80C6A40C;
    case 0x80C6A478u: goto label_80C6A478;
    case 0x80C6A524u: goto label_80C6A524;
    default: return;
    }
}

