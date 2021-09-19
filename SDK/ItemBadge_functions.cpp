// Name: Fortnite, Version: OT-6_5

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ItemBadge.ItemBadge_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item_Data                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle> Display_Style                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<ItemDisplayMode_EItemDisplayMode> Display_Mode                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemBadge_C::Refresh(class UFortItem* Item_Data, TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle> Display_Style, TEnumAsByte<ItemDisplayMode_EItemDisplayMode> Display_Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemBadge.ItemBadge_C.Refresh");

	UItemBadge_C_Refresh_Params params;
	params.Item_Data = Item_Data;
	params.Display_Style = Display_Style;
	params.Display_Mode = Display_Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemBadge.ItemBadge_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle> Display_Style                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<ItemDisplayMode_EItemDisplayMode> Display_Mode                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRarityItemData     RarityData                     (Parm)
// class UFortItem*               Item_Data                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemBadge_C::Update(TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size, TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle> Display_Style, TEnumAsByte<ItemDisplayMode_EItemDisplayMode> Display_Mode, const struct FFortRarityItemData& RarityData, class UFortItem* Item_Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemBadge.ItemBadge_C.Update");

	UItemBadge_C_Update_Params params;
	params.Brush_Size = Brush_Size;
	params.Display_Style = Display_Style;
	params.Display_Mode = Display_Mode;
	params.RarityData = RarityData;
	params.Item_Data = Item_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
