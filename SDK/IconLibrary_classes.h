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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IconLibrary.IconLibrary_C
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UIconLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass IconLibrary.IconLibrary_C");
		return ptr;
	}



	void STATIC_Get_Item_Tier_Icon(const struct FItemTierIconSet& TierIconSet, TEnumAsByte<FortniteGame_EFortItemTier> Tier, TEnumAsByte<FortniteGame_EFortBrushSize> Size, class UObject* __WorldContext, struct FSlateBrush* Tier_Brush);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
