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

// BlueprintGeneratedClass GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C
// 0x0164 (FullSize[0x0840] - InheritedSize[0x06DC])
class UGA_Ninja_DragonSlash_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                EventActivation;                                           // 0x06E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       SavedCollision;                                            // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_DragonSlashDamage;                                      // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayEventData                          EventData;                                                 // 0x06F4(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Ninja_C*                         NinjaPawn;                                                 // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAnimMontage*                                M_DragonSlash;                                             // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DragonSlashAnimDistance;                                   // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EventComplete;                                             // 0x0758(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventActivateShadowStance;                                 // 0x0760(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_ZenGardens;                                             // 0x0768(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_ReturnOfTheDragon;                                      // 0x0780(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_ReturnOfTheDragonSnare;                                 // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      PawnActors;                                                // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_ShroudOfTheDragon;                                      // 0x07A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_BreathOfTheDragon;                                      // 0x07B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DefaultDragonSlashSize;                                    // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              UpgradeDragonSlashSize;                                    // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DragonSlashDistance;                                       // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      TrailAOEClass;                                             // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DragonSlashAnimDuration;                                   // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                AreaOfEffectCount;                                         // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bEnableDamageTrail;                                        // 0x07E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VE4I[0x3];                                     // 0x07E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DragonSlashMovementStartTime;                              // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     LastAOELocation;                                           // 0x07F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AOEDistance;                                               // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_TailOfTheDragon;                                        // 0x0800(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_WingsOfTheDragon;                                       // 0x0818(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               EndedTailProperly;                                         // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4VK5[0x3];                                     // 0x0831(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              HitActors;                                                 // 0x0834(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C");
		return ptr;
	}



	void SetWeaponVisibility(bool Ability_Active);
	void SetupCollision(class APlayerPawn_Ninja_C* Ninja_Pawn);
	void SetupAbility();
	void ApplyDamageToTarget(class AActor* Hit_Actor, class APlayerPawn_Ninja_C* Ninja_Pawn);
	void Completed_28380CAC46B6057F2BF9DFAD8C7B8F2A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_28380CAC46B6057F2BF9DFAD8C7B8F2A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_28380CAC46B6057F2BF9DFAD8C7B8F2A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_9B08D05C4E0F86CA462DDE9A829D7C13();
	void OnFinish_5E00AB5343CB83D80843BE94EC51F21E();
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void OverlapActors(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BeginAOETrail();
	void TrySpawnAOETrail();
	void ExecuteUbergraph_GA_Ninja_DragonSlash(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
