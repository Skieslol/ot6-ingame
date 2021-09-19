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

// BlueprintGeneratedClass ItemUIFunctionLibrary.ItemUIFunctionLibrary_C
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UItemUIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ItemUIFunctionLibrary.ItemUIFunctionLibrary_C");
		return ptr;
	}



	void STATIC_ParseLevelRequiredFromString(const struct FString& InString, class UObject* __WorldContext, int* outInt);
	void STATIC_Add_Alteration_Widgets(class UVerticalBox* Host_Widget, class UFortItem* Item, int PreviewLevel, bool ShowInVaultDetails, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
