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

// BlueprintGeneratedClass GAB_HuskDeath.GAB_HuskDeath_C
// 0x000C (FullSize[0x079C] - InheritedSize[0x0790])
class UGAB_HuskDeath_C : public UGAB_GenericDeath_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0790(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                LaserTag;                                                  // 0x0794(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GAB_HuskDeath.GAB_HuskDeath_C");
		return ptr;
	}



	void PickDeathMontageSection();
	void ExecuteUbergraph_GAB_HuskDeath(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
