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

// BlueprintGeneratedClass GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C
// 0x0038 (FullSize[0x0714] - InheritedSize[0x06DC])
class UGAB_HuskThrownByFlinger_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class AHuskPawn_C*                                 HuskPawn;                                                  // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFortPawn*                                   FlingerPawn;                                               // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ZVelocityWhenShot;                                         // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              XYVelocityMaintainedWhenShot;                              // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       HuskPawnCapsuleDefaultCollisionProfileName;                // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       HuskPawnCapsuleCollisionProfileNameWhenHeldByFlinger;      // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     FireLocation;                                              // 0x0700(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       MontageSectionFlyingLoop;                                  // 0x070C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C");
		return ptr;
	}



	void Completed_405AED2944EC7B63E07F8CBC114C4467(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_405AED2944EC7B63E07F8CBC114C4467(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_405AED2944EC7B63E07F8CBC114C4467(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_E287620540AA42D086331C807CAC562F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_E287620540AA42D086331C807CAC562F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_E287620540AA42D086331C807CAC562F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void HuskDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void K2_OnEndAbility();
	void BindHuskDamaged();
	void HuskLanded(const struct FHitResult& Hit);
	void HuskHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void UnBindHuskDamaged();
	void BindHuskLanded();
	void UnBindHuskLanded();
	void RotationCheck();
	void HuskFaceForwardON();
	void HuskFaceForwardOFF();
	void ExecuteUbergraph_GAB_HuskThrownByFlinger(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
