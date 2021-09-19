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

// BlueprintGeneratedClass GAB_BlasterRanged.GAB_BlasterRanged_C
// 0x0010 (FullSize[0x06EC] - InheritedSize[0x06DC])
class UGAB_BlasterRanged_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                NumShotsMax;                                               // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ABlasterPawn_C*                              BlasterPawn;                                               // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RotationRateWhenAttacking;                                 // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GAB_BlasterRanged.GAB_BlasterRanged_C");
		return ptr;
	}



	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void OnInterrupted_F2E0D80F47E87F169FADB1814583F0E0();
	void OnComplete_F2E0D80F47E87F169FADB1814583F0E0();
	void Completed_B70914E34DF839C9F27FBA8D66801C0D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_B70914E34DF839C9F27FBA8D66801C0D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_B70914E34DF839C9F27FBA8D66801C0D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void Reset_Ending_Montage_DoOnce();
	void K2_OnEndAbility();
	void StopFiring();
	void ExecuteUbergraph_GAB_BlasterRanged(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
