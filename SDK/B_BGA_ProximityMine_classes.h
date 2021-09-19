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

// BlueprintGeneratedClass B_BGA_ProximityMine.B_BGA_ProximityMine_C
// 0x020C (FullSize[0x0694] - InheritedSize[0x0488])
class AB_BGA_ProximityMine_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0488(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Collision_HalfSphere__1_Unit;                              // 0x048C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        ActivateRingConstant_Vertical;                             // 0x0490(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        ExplodeDamageRingConstant_Vertical;                        // 0x0494(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        ActivateRingConstant_Flat;                                 // 0x0498(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        ExplodeDamageRingConstant_flat;                            // 0x049C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Sm_ProximityMine_RadarDisc_01;                             // 0x04A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_ProximityMine_Beacon_01;                                 // 0x04A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_ExplosionEffect;                                         // 0x04A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_ProximityMine_AoE_Reticle_01;                            // 0x04AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_Land_Effect;                                             // 0x04B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      SK_ProximityMine;                                          // 0x04B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        ProxyMine_Mesh;                                            // 0x04B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                            Root_Shpere_Collision;                                     // 0x04BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UProjectileMovementComponent*                ProjectileMovement1;                                       // 0x04C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              ScaleDownAll_ScaleDown_C7142F4C41588327B2083F80EC920637;   // 0x04C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             ScaleDownAll__Direction_C7142F4C41588327B2083F80EC920637;  // 0x04C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G1HF[0x3];                                     // 0x04C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ScaleDownAll;                                              // 0x04CC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Scale_Ring_In_LERP_97089CCA4B30B5D55C3444B11A88826F;       // 0x04D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Scale_Ring_In__Direction_97089CCA4B30B5D55C3444B11A88826F; // 0x04D4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4D5E[0x3];                                     // 0x04D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Scale_Ring_In;                                             // 0x04D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Scale_Rings_Up_LERP_1C2C39AC441B3BFE9AA68EBE28BAFB7E;      // 0x04DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Scale_Rings_Up__Direction_1C2C39AC441B3BFE9AA68EBE28BAFB7E; // 0x04E0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZWTT[0x3];                                     // 0x04E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Scale_Rings_Up;                                            // 0x04E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Timeline_0_NewTrack_0_A78484B549A162C03F2B799BECBA42F4;    // 0x04E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_A78484B549A162C03F2B799BECBA42F4;    // 0x04EC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I795[0x3];                                     // 0x04ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x04F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Land_Sound;                                                // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsPlaced;                                                  // 0x04F8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_B4KO[0x3];                                     // 0x04F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Impact_Loc;                                                // 0x04FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     ExplosionRadiusGuide;                                      // 0x0508(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DistanceGuideDuration;                                     // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EventExplosion;                                            // 0x0518(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TargetRules;                                               // 0x0520(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     HitNormal;                                                 // 0x0538(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsValidEnemy;                                              // 0x0544(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J5AL[0x3];                                     // 0x0545(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PawnActors;                                                // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  CueExplode;                                                // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bActivated;                                                // 0x0550(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_25UJ[0x3];                                     // 0x0551(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    Mine_Mat;                                                  // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                DefaultExplosionTag;                                       // 0x0558(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Upgrade1ExplosionTag;                                      // 0x0560(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Upgrade2ExplosionTag;                                      // 0x0568(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Activation_Radius;                                         // 0x0570(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Beacon_Can_Play_;                                          // 0x0574(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NDLI[0x3];                                     // 0x0575(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Beacon_Speedup_Play_Speed;                                 // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Beacon_Speedup_Play_Speed_Chip_OffTime;                    // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     Rings_Start_Size;                                          // 0x0580(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Ring_Restart_Delay;                                        // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsDead_;                                                   // 0x0590(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_7CTH[0x3];                                     // 0x0591(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Activation_Delay;                                          // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Activate_Ring_MID;                                         // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Activate_Ring_Color_Inner__Friendly_;                      // 0x059C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Activate_Ring_Color_Outer__Friendly_;                      // 0x05AC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Beacon_Core_Color__Friendly_;                              // 0x05BC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Beacon_Core_Color__Enemy_;                                 // 0x05CC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Beacon_Streak_Color__Friendly_;                            // 0x05DC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Beacon_Streak_Color__Enemy_;                               // 0x05EC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Beacon_Mesh_Color__Friendly_;                              // 0x05FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Beacon_Mesh_Color__Enemy_;                                 // 0x060C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Radar_Disc_MID;                                            // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Radar_Disc_Lights_Color__Friendly_;                        // 0x0620(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Radar_Disc_Lights_Color__Enemy_;                           // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Radar_Disc_Dark_Color__Friendly_;                          // 0x0640(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Radar_Disc_Dark_Color__Enemy_;                             // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Activate_Ring_Color_Inner__Enemy_;                         // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Activate_Ring_Color_Outer__Enemy_;                         // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AngleToShowAdditionalHUD;                                  // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Activate_Ring_Vertical_MID;                                // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    DamageRingMID;                                             // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Damage_Ring_Vertical_MID;                                  // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                             Player_Owner;                                              // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass B_BGA_ProximityMine.B_BGA_ProximityMine_C");
		return ptr;
	}



	void VFX_SetTeamColors();
	void AttachFX();
	void DestroyFX();
	void OnRep_IsDead_();
	void OnRep_bActivated();
	void OnRep_IsPlaced();
	bool IsValidTarget(class UObject* Object);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Scale_Rings_Up__FinishedFunc();
	void Scale_Rings_Up__UpdateFunc();
	void Scale_Ring_In__FinishedFunc();
	void Scale_Ring_In__UpdateFunc();
	void ScaleDownAll__FinishedFunc();
	void ScaleDownAll__UpdateFunc();
	void SetProjectile(float Init_Speed, float Gravity, float Activation_Delay);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void StopSpin();
	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void DamageExplode();
	void StartSpin();
	void GameplayCue_Abilities_Activation_Generic_proxymine(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void SetExplosion(int Explosion_Level, float Activation_Radius, class AFortPlayerPawn* PlayerPawn);
	void BaseDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void BaseDestroyed();
	void BndEvt__S_HalfSphere_Collision_1_Unit_K2Node_ComponentBoundEvent_420_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Beacon_Loop();
	void ExecuteUbergraph_B_BGA_ProximityMine(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
