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

// BlueprintGeneratedClass GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C
// 0x0158 (FullSize[0x0834] - InheritedSize[0x06DC])
class UGA_Ninja_MantisLeap_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      Instigator;                                                // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Jump_Multiple;                                             // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     Basic_Jump_Z_Adjust;                                       // 0x06E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_CanExecute;                                             // 0x06F4(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               CanExecute;                                                // 0x070C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NF71[0x3];                                     // 0x070D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     PrayingMantisJumpZAdjust;                                  // 0x0710(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_RemoveMantisLeap;                                       // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_PrayingMantis;                                          // 0x0720(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     FinalJumpHeight;                                           // 0x0738(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayEventData                          EventData;                                                 // 0x0744(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Ninja_C*                         NinjaPawn;                                                 // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EventActivation;                                           // 0x07A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                             // 0x07A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       Effects_Location_Bone1;                                    // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       Effects_Location_Bone2;                                    // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_LeapEffects;                                             // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  MantisLeapCue;                                             // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EC_MantisStrike;                                           // 0x07C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RefractionRingHeight;                                      // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_Shockwave;                                               // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EventTriggerSmokeBomb;                                     // 0x07D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_Hack;                                                   // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_ImpactEffects;                                           // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Cue_ImpactSound;                                           // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EventEnterShadowStance;                                    // 0x07EC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_MantisStrike;                                           // 0x07F4(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PrayingMantis;                                             // 0x080C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               MantisStrike;                                              // 0x080D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SL6B[0x2];                                     // 0x080E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       TC_ShadowStanceActive;                                     // 0x0810(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ShadowStanceActive;                                        // 0x0828(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HackAlreadyExecuted;                                       // 0x0829(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NULK[0x2];                                     // 0x082A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                MantisStrikeGCN;                                           // 0x082C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C");
		return ptr;
	}



	void SetJumpHeight(class APlayerPawn_Ninja_C* Ninja_Pawn, class AFortPlayerPawn** Ninja_Pawn_Out, struct FVector* Jump_Height);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void Cancelled_023C704A4687994EABB842B14222FB9B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_023C704A4687994EABB842B14222FB9B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void OnPawnLanded_Event_1(const struct FHitResult& Hit);
	void ExecuteUbergraph_GA_Ninja_MantisLeap(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
