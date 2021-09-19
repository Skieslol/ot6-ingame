#pragma once

// Name: Fortnite, Version: OT-6_5


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ItemTextureSet.ItemTextureSet
// 0x0D9C
struct FItemTextureSet
{
	TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle>    Style_21_0D38ED0D4F46097BD1353E930AE51488;                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UAAD[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFortMultiSizeBrush                         Bevel_Bottom_6_AD4B992A4499C810B0AA9F8AFD86EFAB;           // 0x0004(0x02B8) (Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                         Bevel_Side_9_057E11554D2F37A1758E5DBFC7265C02;             // 0x02BC(0x02B8) (Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                         Bevel_Top_12_21DC2A9C4E30B0D304AD4685FDFDA26D;             // 0x0574(0x02B8) (Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                         Background_30_825A0F66421E3990D07E7EACB4FE1C34;            // 0x082C(0x02B8) (Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                         Accent_18_514BE8E24563A9CF138144960776C114;                // 0x0AE4(0x02B8) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
