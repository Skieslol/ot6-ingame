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

// Function ItemBadge.ItemBadge_C.Refresh
struct UItemBadge_C_Refresh_Params
{
	class UFortItem*                                   Item_Data;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle>    Display_Style;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ItemDisplayMode_EItemDisplayMode>      Display_Mode;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemBadge.ItemBadge_C.Update
struct UItemBadge_C_Update_Params
{
	TEnumAsByte<FortniteGame_EFortBrushSize>           Brush_Size;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle>    Display_Style;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ItemDisplayMode_EItemDisplayMode>      Display_Mode;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortRarityItemData                         RarityData;                                                // (Parm)
	class UFortItem*                                   Item_Data;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
