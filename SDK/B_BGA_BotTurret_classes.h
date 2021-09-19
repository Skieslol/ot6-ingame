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

// BlueprintGeneratedClass B_BGA_BotTurret.B_BGA_BotTurret_C
// 0x02A8 (FullSize[0x0730] - InheritedSize[0x0488])
class AB_BGA_BotTurret_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0488(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                             ScannerDecal;                                              // 0x048C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    ScannerRays;                                               // 0x0490(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Thruster_L;                                                // 0x0494(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Thruster_R;                                                // 0x0498(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_BotTurret_MF_R;                                          // 0x049C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_BotTurret_MF_L;                                          // 0x04A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Weapon_Fire_R_AudioComponent;                              // 0x04A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Weapon_Fire_L_AudioComponent;                              // 0x04A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      SK_Bot_Turret;                                             // 0x04AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                            Sphere_ViewRadius_Collision;                               // 0x04B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Bot_Idle_AudioComponent;                                   // 0x04B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Bot_Explode_Cue;                                           // 0x04B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Bot_WarmUP_Sound;                                          // 0x04BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Bot_StartUP_AudioComponent;                                // 0x04C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x04C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FVector                                     Timeline_2_Rotation_AC2F08D240A37A1E0A447EB04E197178;      // 0x04C8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_2__Direction_AC2F08D240A37A1E0A447EB04E197178;    // 0x04D4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MEY5[0x3];                                     // 0x04D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_3;                                                // 0x04D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Timeline_0_NewTrack_0_2A6889104467A297A0FF38B63E176895;    // 0x04DC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_2A6889104467A297A0FF38B63E176895;    // 0x04E8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZT0Y[0x3];                                     // 0x04E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x04EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Initial_Location;                                          // 0x04F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DeltaTimeRot;                                              // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              WarmupTime;                                                // 0x0500(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Bot_Rotation_Speed;                                        // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ShootingGun;                                               // 0x0508(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	float                                              Duration;                                                  // 0x050C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                                  StartTransform;                                            // 0x0510(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFortPawn*                                   TargetPawnToTrack;                                         // 0x0540(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Movement_Start_Timer;                                      // 0x0544(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              FireRate;                                                  // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasTarget;                                                 // 0x054C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U1P8[0x3];                                     // 0x054D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Delta_Time;                                                // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              BotRadius;                                                 // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class AFortPawn*>                           PotentialTargets;                                          // 0x0558(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              RangeSquared;                                              // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     TargetAcquisitionFunctionName;                             // 0x0568(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TargetAcquisitionCheckTimer;                               // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     FiringFunctionName;                                        // 0x0578(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              FireTimer;                                                 // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     Gun_Spawn_Loc;                                             // 0x0588(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    Gun_Spawn_Rot;                                             // 0x0594(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      Projectile;                                                // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Bot_MID__0;                                                // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Bot_Turret_Emissive_Color__Friendly_;                      // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Bot_Turret_Emissive_Color__Enemy_;                         // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Scanner_Ray_Light_Color__Friendly_;                        // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Scanner_Ray_Light_Color__Enemy_;                           // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Scanner_Ray_Core_Light_Color__Friendly_;                   // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Scanner_Ray_Core_Light_Color__Enemy_;                      // 0x05F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                MF_Sparks_Color__Friendly_;                                // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                MF_Sparks_Color__Enemy_;                                   // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                MF_Light_Color__Friendly_;                                 // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                MF_Light_Color__Enemy_;                                    // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                MF_Ring_Color__Friendly_;                                  // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                MF_Ring_Color__Enemy_;                                     // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Thruster_Light_Color__Friendly_;                           // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Thruster_Light_Color__Enemy_;                              // 0x0678(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    Actor_Init_Rot;                                            // 0x0688(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                Left_Right_Gun;                                            // 0x0694(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	class UParticleSystem*                             DeathExplodeTemplate;                                      // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              BotPitch;                                                  // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    AimRotation;                                               // 0x06A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     ThrusterSize;                                              // 0x06AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     BotStartLocation;                                          // 0x06B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FFortGameplayEffectContainer                EC_ProjectileDamage;                                       // 0x06C4(0x006C) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass B_BGA_BotTurret.B_BGA_BotTurret_C");
		return ptr;
	}



	void OnRep_Left_Right_Gun();
	void SetTeamColorsVFX();
	void UpdateScannerRay();
	void AttemptAcquireTarget();
	void SetFiringTimer();
	void OnPotentialTargetUntouched(class AFortPawn* UntouchedPotentialTarget);
	void ClearFiringTimer();
	void ClearTargetAcquisitionTimer();
	void SetTargetAcquisitionTimer();
	void SetTrackingTarget(class AFortPawn* Target);
	void IsValidTarget(class AFortPawn* PotentialTarget, bool IncludeSimpleRangeCheck, bool IncludeFireLimitCheck, bool IncludeObstructionCheck, bool* ValidTarget);
	void OnNewPotentialTargetTouched(class AFortPawn* PotentialTargetPawn);
	void Perform_Bot_Rotation(class AActor* LookAtActor);
	void OnRep_NewVar0();
	void OnRep_ShootingGun();
	void OnRep_Target_Location();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void ReceiveBeginPlay();
	void PassBotInfo(float WarmupTime, float BotDuration, float FireRate, float Radius);
	void Bot_Explode();
	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_439_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void AttemptFire();
	void ExecuteUbergraph_B_BGA_BotTurret(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
