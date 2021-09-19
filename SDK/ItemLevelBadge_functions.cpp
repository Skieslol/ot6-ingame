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

// Function ItemLevelBadge.ItemLevelBadge_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ItemDisplayMode_EItemDisplayMode> Display_Mode                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Max                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemLevelBadge_C::Refresh(TEnumAsByte<ItemDisplayMode_EItemDisplayMode> Display_Mode, int Max, int Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemLevelBadge.ItemLevelBadge_C.Refresh");

	UItemLevelBadge_C_Refresh_Params params;
	params.Display_Mode = Display_Mode;
	params.Max = Max;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemLevelBadge.ItemLevelBadge_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Max                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRarityItemData     Rarity_Data                    (Parm)
// TEnumAsByte<ItemDisplayMode_EItemDisplayMode> Display_Mode                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemLevelBadge_C::Update(int Max, int Level, TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size, const struct FFortRarityItemData& Rarity_Data, TEnumAsByte<ItemDisplayMode_EItemDisplayMode> Display_Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemLevelBadge.ItemLevelBadge_C.Update");

	UItemLevelBadge_C_Update_Params params;
	params.Max = Max;
	params.Level = Level;
	params.Brush_Size = Brush_Size;
	params.Rarity_Data = Rarity_Data;
	params.Display_Mode = Display_Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
