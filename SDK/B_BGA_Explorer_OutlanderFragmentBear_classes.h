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

// BlueprintGeneratedClass B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C
// 0x0120 (FullSize[0x05A8] - InheritedSize[0x0488])
class AB_BGA_Explorer_OutlanderFragmentBear_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0488(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             FiringAudioComponent;                                      // 0x048C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    MuzzleFlashParticleComponent_L;                            // 0x0490(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      BearMesh;                                                  // 0x0494(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                            SightRadiusSphereComponent;                                // 0x0498(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    MuzzleFlashParticleComponent_R;                            // 0x049C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCapsuleComponent*                           CollisionComponent;                                        // 0x04A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FGameplayTagContainer                       TC_TargetAcquisitionAbility;                               // 0x04A4(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       EyeSocketName;                                             // 0x04BC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFortPawn*                                   TargetPawnToTrack;                                         // 0x04C4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              TargetAcquisitionCheckTimer;                               // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     TargetAcquisitionFunctionName;                             // 0x04CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     FiringFunctionName;                                        // 0x04D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              FireTimer;                                                 // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    InitialRelativeGunRotation;                                // 0x04E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              GunInterpSpeed;                                            // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_SentryFireAbility;                                      // 0x04F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      TracerClass;                                               // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             ImpactEffect;                                              // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RangeSquared;                                              // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              FiringDotProductThreshold;                                 // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             DeathEffects;                                              // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsDeployed;                                                // 0x0524(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_GJGP[0x3];                                     // 0x0525(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              YawRotationLimit;                                          // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              PitchRotationLimit;                                        // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              SightRadius;                                               // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class AFortPawn*>                           PotentialTargets;                                          // 0x0534(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              RotationClampMax;                                          // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  DeploymentSound;                                           // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     Tracer_Scale;                                              // 0x0548(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Cue_SpawnBear;                                             // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  CueBearDies;                                               // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  CueBearBark;                                               // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTimerHandle                                BearBarkTimer;                                             // 0x0560(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                FireCueTag;                                                // 0x0564(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                                    TargetRelativeRotation;                                    // 0x056C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       MuzzleLeftSocketName;                                      // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       MuzzleRightSocketName;                                     // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    CurrentRelativeRotation;                                   // 0x0588(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RotateToTargetInterpSpeed;                                 // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RotationResetInterpSpeed;                                  // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bLeftTracer;                                               // 0x059C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J0K5[0x3];                                     // 0x059D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastKillSoundTime;                                         // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MinKillSoundInterval;                                      // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C");
		return ptr;
	}



	void OnRep_TargetPawnToTrack();
	void ToggleFireCue(bool bEnable);
	void Is_Pawn_Inside_Pitch_Limits(class AFortPawn* Pawn, bool* bInsidePitchLimits);
	void IsValidTarget(class AFortPawn* PotentialTarget, bool bIncludeSimpleRangeCheck, bool bIncludeFiringLimitCheck, bool bIncludeObstructionCheck, bool* bValidTarget);
	void OnPotentialTargetUntouched(class AFortPawn* UntouchedPotentialTarget);
	void OnNewPotentialTargetTouched(class AFortPawn* PotentialTargetPawn);
	void ShouldFire(bool* ShouldFire);
	void ClearTargetAcquisitionTimer();
	void ClearFiringTimer();
	void SpawnImpactEffects(const struct FVector& HitLocation);
	void SpawnTracer(const struct FVector& HitLocation, bool bLeftTracer);
	void UpdateRotation(class AActor* LookAtActor, float DeltaSeconds);
	void SetTargetAcquisitionTimer();
	void SetFiringTimer();
	void AttemptFire();
	void AttemptAcquireTarget();
	struct FTransform GetTargetingSourceTransform(TEnumAsByte<FortniteGame_EFortAbilityTargetingSource> Source);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void GameplayCue_Impact_Physical(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ReceiveTick(float DeltaSeconds);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void KilledTargetPawn();
	void GameplayCue_Weapons_Activation(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void SetTargetPawn(class AFortPawn* NewTargetPawn);
	void OnTargetPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void Bearricade();
	void ExecuteUbergraph_B_BGA_Explorer_OutlanderFragmentBear(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
