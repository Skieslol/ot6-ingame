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

// BlueprintGeneratedClass GA_Outlander_FindersKeepers.GA_Outlander_FindersKeepers_C
// 0x0008 (FullSize[0x0748] - InheritedSize[0x0740])
class UGA_Outlander_FindersKeepers_C : public UGAT_OutlanderTriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0740(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      GE_FindersKeepers;                                         // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Outlander_FindersKeepers.GA_Outlander_FindersKeepers_C");
		return ptr;
	}



	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Outlander_FindersKeepers(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
