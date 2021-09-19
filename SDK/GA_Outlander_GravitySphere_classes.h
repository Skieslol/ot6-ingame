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

// GameplayAbilityBlueprintGeneratedClass GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C
// 0x015C (FullSize[0x0838] - InheritedSize[0x06DC])
class UGA_Outlander_GravitySphere_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                          EventData;                                                 // 0x06E0(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Outlander_C*                     Outlander_Pawn;                                            // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EventActivation;                                           // 0x073C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      Prj_MatterCollector;                                       // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EventComplete;                                             // 0x0748(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayEffectContainerSpec            Spec_Damage;                                               // 0x0750(0x0064) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_BaseTargetting;                                         // 0x07B4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_BaseDamage;                                             // 0x07BC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_MatterCollectorDamage;                                  // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ProjectileSpeed;                                           // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ProjectileGravity;                                         // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_HowInTheWorld;                                          // 0x07D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_HowInTheWorld;                                          // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_DefaultDamage;                                          // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Stopped;                                                   // 0x07F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VSH2[0x3];                                     // 0x07F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFortFeedbackHandle                         MatterCollectDialogFeedback;                               // 0x07F4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_FriendlyTargets;                                        // 0x0804(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     Impact_Location;                                           // 0x080C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EC_EnemyTargets;                                           // 0x0818(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HeavyStuff;                                             // 0x0820(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C");
		return ptr;
	}



	struct FTransform GetCustomAbilitySourceTransform();
	void DamageTargets(const struct FProjectileEventData& ProjectileEventData);
	void SetupCollector(class UClass** MatterCollector, struct FVector* SpawnLocation, struct FRotator* ProjectileRotation, float* MatterSpeed, float* MatterGravity, struct FFortGameplayEffectContainerSpec* TargetSpec);
	void Destroyed_E1B7FD7947617E82F2B80E9DEA42A6E8(const struct FProjectileEventData& ProjectileData);
	void Exploded_E1B7FD7947617E82F2B80E9DEA42A6E8(const struct FProjectileEventData& ProjectileData);
	void Stopped_E1B7FD7947617E82F2B80E9DEA42A6E8(const struct FProjectileEventData& ProjectileData);
	void Bounced_E1B7FD7947617E82F2B80E9DEA42A6E8(const struct FProjectileEventData& ProjectileData);
	void Touched_E1B7FD7947617E82F2B80E9DEA42A6E8(const struct FProjectileEventData& ProjectileData);
	void Created_E1B7FD7947617E82F2B80E9DEA42A6E8(const struct FProjectileEventData& ProjectileData);
	void Completed_A8F6F5F8468ED284B63ADFA133F95943(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_A8F6F5F8468ED284B63ADFA133F95943(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_A8F6F5F8468ED284B63ADFA133F95943(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Outlander_GravitySphere(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
