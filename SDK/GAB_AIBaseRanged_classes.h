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

// GameplayAbilityBlueprintGeneratedClass GAB_AIBaseRanged.GAB_AIBaseRanged_C
// 0x0010 (FullSize[0x06EC] - InheritedSize[0x06DC])
class UGAB_AIBaseRanged_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      CurrentAIAbilityTarget;                                    // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              LastThrowTime;                                             // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              TimeSinceLastThrowToResetThrowCount;                       // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GAB_AIBaseRanged.GAB_AIBaseRanged_C");
		return ptr;
	}



	void Completed_2221E89D4148023005FB94B04BA06EF9(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_2221E89D4148023005FB94B04BA06EF9(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_2221E89D4148023005FB94B04BA06EF9(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void K2_TriggerFromAnimation(const struct FGameplayTag& ApplicationTag);
	void IncreaseAccuracyAndUpdateLastThrowTime();
	void ExecuteUbergraph_GAB_AIBaseRanged(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
