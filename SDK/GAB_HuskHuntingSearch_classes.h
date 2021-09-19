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

// GameplayAbilityBlueprintGeneratedClass GAB_HuskHuntingSearch.GAB_HuskHuntingSearch_C
// 0x0004 (FullSize[0x06E0] - InheritedSize[0x06DC])
class UGAB_HuskHuntingSearch_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GAB_HuskHuntingSearch.GAB_HuskHuntingSearch_C");
		return ptr;
	}



	void Completed_9925B44A484135CDB5C78BAF8BED9454(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_9925B44A484135CDB5C78BAF8BED9454(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_9925B44A484135CDB5C78BAF8BED9454(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_HuskHuntingSearch(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
