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

// BlueprintGeneratedClass GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C
// 0x0128 (FullSize[0x0868] - InheritedSize[0x0740])
class UGA_Ninja_SmokeBomb_C : public UGAT_NinjaActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0740(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CanExecute;                                                // 0x0744(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V2RP[0x3];                                     // 0x0745(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      P_SmokeBomb;                                               // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     Position_Offset;                                           // 0x074C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EventActivation;                                           // 0x0758(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                             // 0x0760(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventRunSpeed;                                             // 0x0768(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEventData                          EventData;                                                 // 0x0770(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_FireAndSmoke;                                           // 0x07C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventEnterShadowStance;                                    // 0x07E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_ImpactVisuals;                                          // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                GC_RunTrails;                                              // 0x07EC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_CloudPersist;                                           // 0x07F4(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      AOE_CloudPersist;                                          // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     ExplosionLocation;                                         // 0x0810(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EC_PersistCloud;                                           // 0x081C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayAttribute                          ATT_GunpowderFoundry;                                      // 0x0824(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ProjectileThrown;                                          // 0x0828(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsTriggered;                                               // 0x0829(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CWBY[0x2];                                     // 0x082A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BombSpeed;                                                 // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_InAir;                                                  // 0x0830(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NinjaTrainingV;                                         // 0x0848(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DefaultDuration;                                           // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              UpgradeDuration;                                           // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C");
		return ptr;
	}



	void ThrowSmokeBomb(class APlayerPawn_Ninja_C** Requestor, struct FVector* Location, struct FRotator* Rotation, struct FFortGameplayEffectContainerSpec* EffectSpec);
	void Completed_3644944049E84BE80D314DBC53F664CB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_3644944049E84BE80D314DBC53F664CB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_3644944049E84BE80D314DBC53F664CB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Destroyed_4C7C12404F5C962CA59DD49973166CB9(const struct FProjectileEventData& ProjectileData);
	void Exploded_4C7C12404F5C962CA59DD49973166CB9(const struct FProjectileEventData& ProjectileData);
	void Stopped_4C7C12404F5C962CA59DD49973166CB9(const struct FProjectileEventData& ProjectileData);
	void Bounced_4C7C12404F5C962CA59DD49973166CB9(const struct FProjectileEventData& ProjectileData);
	void Touched_4C7C12404F5C962CA59DD49973166CB9(const struct FProjectileEventData& ProjectileData);
	void Created_4C7C12404F5C962CA59DD49973166CB9(const struct FProjectileEventData& ProjectileData);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Ninja_SmokeBomb(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
