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
// Parameters
//---------------------------------------------------------------------------

// Function ItemLevelBadge.ItemLevelBadge_C.Refresh
struct UItemLevelBadge_C_Refresh_Params
{
	TEnumAsByte<ItemDisplayMode_EItemDisplayMode>      Display_Mode;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Max;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemLevelBadge.ItemLevelBadge_C.Update
struct UItemLevelBadge_C_Update_Params
{
	int                                                Max;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<FortniteGame_EFortBrushSize>           Brush_Size;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortRarityItemData                         Rarity_Data;                                               // (Parm)
	TEnumAsByte<ItemDisplayMode_EItemDisplayMode>      Display_Mode;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
