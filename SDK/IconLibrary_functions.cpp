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

// Function IconLibrary.IconLibrary_C.Get Item Tier Icon
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemTierIconSet        TierIconSet                    (Parm)
// TEnumAsByte<FortniteGame_EFortItemTier> Tier                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<FortniteGame_EFortBrushSize> Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush             Tier_Brush                     (Parm, OutParm)
void UIconLibrary_C::STATIC_Get_Item_Tier_Icon(const struct FItemTierIconSet& TierIconSet, TEnumAsByte<FortniteGame_EFortItemTier> Tier, TEnumAsByte<FortniteGame_EFortBrushSize> Size, class UObject* __WorldContext, struct FSlateBrush* Tier_Brush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function IconLibrary.IconLibrary_C.Get Item Tier Icon");

	UIconLibrary_C_Get_Item_Tier_Icon_Params params;
	params.TierIconSet = TierIconSet;
	params.Tier = Tier;
	params.Size = Size;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tier_Brush != nullptr)
		*Tier_Brush = params.Tier_Brush;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
