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

// BlueprintGeneratedClass HeroInfoLibrary.HeroInfoLibrary_C
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UHeroInfoLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HeroInfoLibrary.HeroInfoLibrary_C");
		return ptr;
	}



	void STATIC_Get_Core_Stat_By_Hero_ID(const struct FString& Hero_ID, const struct FGameplayAttribute& Attribute, const struct FHeroCoreStatSet& UI_Data, class UObject* __WorldContext, struct FHeroCoreStat* Stat, float* Value);
	void STATIC_Get_Current_Hero_Core_Stats(class UObject* __WorldContext, TArray<struct FHeroCoreStat>* Data, TArray<float>* Values);
	void STATIC_Get_Core_Stats_By_Hero_ID(const struct FString& Hero_ID, const struct FHeroCoreStatSet& UI_Data, class UObject* __WorldContext, TArray<struct FHeroCoreStat>* Data, TArray<float>* Values);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
