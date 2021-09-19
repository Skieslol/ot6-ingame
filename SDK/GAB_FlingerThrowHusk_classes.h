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

// GameplayAbilityBlueprintGeneratedClass GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C
// 0x001C (FullSize[0x06F8] - InheritedSize[0x06DC])
class UGAB_FlingerThrowHusk_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class AFlingerPawn_C*                              FlingerPawn;                                               // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AHuskPawn_C*                                 HuskHeldByFlinger;                                         // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                GC_FlingerGrabNPC;                                         // 0x06E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_NPCRangedThrow;                                         // 0x06F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C");
		return ptr;
	}



	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void Completed_B56594C44CE933A96A3E13BDCFC1097D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_B56594C44CE933A96A3E13BDCFC1097D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_B56594C44CE933A96A3E13BDCFC1097D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void CommitAndEndAbility();
	void SpawnFX();
	void StopFX();
	void ExecuteUbergraph_GAB_FlingerThrowHusk(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
