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

// Function IconLibrary.IconLibrary_C.Get Item Tier Icon
struct UIconLibrary_C_Get_Item_Tier_Icon_Params
{
	struct FItemTierIconSet                            TierIconSet;                                               // (Parm)
	TEnumAsByte<FortniteGame_EFortItemTier>            Tier;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<FortniteGame_EFortBrushSize>           Size;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateBrush                                 Tier_Brush;                                                // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
