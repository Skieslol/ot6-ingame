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

// BlueprintGeneratedClass GA_Constructor_BullRush.GA_Constructor_BullRush_C
// 0x00C8 (FullSize[0x0808] - InheritedSize[0x0740])
class UGA_Constructor_BullRush_C : public UGAT_ConstructorActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0740(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                Event_Activate;                                            // 0x0744(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_Complete;                                            // 0x074C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                M_BullRush;                                                // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      BullRushDamageGE;                                          // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      BullRushKBGE;                                              // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                PushGE;                                                    // 0x0760(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                PushEndGE;                                                 // 0x0768(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RunForwardStartTime;                                       // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MaxPushAsideImpulse;                                       // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MinPushAsideImpulse;                                       // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              PushAsideZAngle;                                           // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              BullRushDistance;                                          // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RunForwardDuration;                                        // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              BullRushAnimUnitsPerSec;                                   // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ApplyEndingKnockback;                                      // 0x078C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PushEnemiesForward;                                        // 0x078D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QIQ4[0x2];                                     // 0x078E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AFortPawn*>                           HitPawns;                                                  // 0x0790(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              EndingKnockback;                                           // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              EndingKnockbackZAngle;                                     // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_RiotShield;                                             // 0x07A4(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_RiotShieldDamage;                                       // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_MotionLines;                                             // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    P_MotionLines_Active;                                      // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      ShieldActor;                                               // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AActor*                                      Ref_To_Shield;                                             // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              UpgradeDistance;                                           // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DefaultDistance;                                           // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              PitchInputScale;                                           // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              YawInputScale;                                             // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundCue*                                   ImpactEnemySound;                                          // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundCue*                                   ShieldChargeStartSound;                                    // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundCue*                                   ChargeKnockbackSound;                                      // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FFortFeedbackHandle                         BullRushStartFeedback;                                     // 0x07EC(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      ShieldCameraShake;                                         // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      ImpactEnemyCameraShake;                                    // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ABuildingActor*                              HitBuilding;                                               // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Constructor_BullRush.GA_Constructor_BullRush_C");
		return ptr;
	}



	void ToggleCapsuleCollision(bool Enable);
	void FX_ImpactEnemy();
	void FX_ShieldHitsGround();
	void EndPushingAll();
	void BeginPushingPawn(class AFortPawn* PawnToPush);
	void ToggleSteeringReduction(bool bEnableSteeringReduction);
	void FX_MotionLines_Deactivate();
	void FX_MotionLines_Activate();
	void ApplyEndingDamage();
	void ApplyPushAside(class AFortPawn* PawnToPush);
	void InitBullRushVars();
	void Completed_7F48364C4417ADD50A45C0B1A7272F05(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_7F48364C4417ADD50A45C0B1A7272F05(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_7F48364C4417ADD50A45C0B1A7272F05(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_BDF7E7A84D7FB1380E68BBB8061B5115();
	void Completed_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void OnBullRushOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnBullRushStopCollisionOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void EndDash();
	void CheckEndDash();
	void ExecuteUbergraph_GA_Constructor_BullRush(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
