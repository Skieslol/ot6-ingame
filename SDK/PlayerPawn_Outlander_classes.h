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

// BlueprintGeneratedClass PlayerPawn_Outlander.PlayerPawn_Outlander_C
// 0x026C (FullSize[0x11AC] - InheritedSize[0x0F40])
class APlayerPawn_Outlander_C : public APlayerPawn_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0F40(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               AntiMaterialHitBox;                                        // 0x0F44(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                            KeenEyesRadius;                                            // 0x0F48(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_Outlander_PhaseShift_Impact_01;                          // 0x0F4C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      Effect_HeadSkeletalMesh;                                   // 0x0F50(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      Effect_BodySkeletalMesh;                                   // 0x0F54(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              PhaseShiftHitSweep_Sweep_81A0178F416D1106B841D9A9B7E8C737; // 0x0F58(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             PhaseShiftHitSweep__Direction_81A0178F416D1106B841D9A9B7E8C737; // 0x0F5C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SLRV[0x3];                                     // 0x0F5D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          PhaseShiftHitSweep;                                        // 0x0F60(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Phase_Shift_Activation_Timeline_Sweep_6D72A2BD427987D65B765788F442228C; // 0x0F64(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Phase_Shift_Activation_Timeline_Opacity_6D72A2BD427987D65B765788F442228C; // 0x0F68(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Phase_Shift_Activation_Timeline__Direction_6D72A2BD427987D65B765788F442228C; // 0x0F6C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0GJ2[0x3];                                     // 0x0F6D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Phase_Shift_Activation_Timeline;                           // 0x0F70(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_FragmentActivation;                                      // 0x0F74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Core_Index_1;                                              // 0x0F78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Core_Index_2;                                              // 0x0F7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Core_Index_3;                                              // 0x0F80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Diamond_Index3;                                            // 0x0F84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Diamond_Index4;                                            // 0x0F88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Diamond_Index5;                                            // 0x0F8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Sparkles_Index8;                                           // 0x0F90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Smoke_Index7;                                              // 0x0F94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Diamond_Index6;                                            // 0x0F98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Sparkles_Index9;                                           // 0x0F9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                OffensiveColor1;                                           // 0x0FA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                OffensiveColor2;                                           // 0x0FB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                DefensiveColor1;                                           // 0x0FC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                DefensiveColor2;                                           // 0x0FD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                SpecialtyColor1;                                           // 0x0FE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                SpecialtyColor2;                                           // 0x0FF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_SpecialityBuff;                                         // 0x1000(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_DefensiveBuff;                                          // 0x1018(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_OffensiveBuff;                                          // 0x1030(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<E_Outlander_FragmentTypes_E_Outlander_FragmentTypes> FragType;                                                  // 0x1048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SVXA[0x3];                                     // 0x1049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             P_FragmentOffense;                                         // 0x104C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_FragmentDefense;                                         // 0x1050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_FragmentSpeciality;                                      // 0x1054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_InTheZone_Activate;                                      // 0x1058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               OnPlayerBuiltFloor;                                        // 0x105C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_D26Q[0x3];                                     // 0x105D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayEventData                          EventData;                                                 // 0x1060(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventNeedRoadsActivate;                                    // 0x10B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventNeedRoadsDeactivate;                                  // 0x10C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_WhereWeregoingWeNeedRoads;                              // 0x10C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             P_Fragment;                                                // 0x10E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_Specialty;                                               // 0x10E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_Defensive;                                               // 0x10E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_Offensive;                                               // 0x10EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FFortFeedbackHandle                         Feedback_ShardGet;                                         // 0x10F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortFeedbackHandle                         Feedback_OffensiveShard;                                   // 0x1100(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortFeedbackHandle                         Feedback_DefensiveShard;                                   // 0x1110(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortFeedbackHandle                         Feedback_SpecialtyShard;                                   // 0x1120(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  Sound_Frg_Offensive_Start;                                 // 0x1130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Frg_Defensive_Start;                                 // 0x1134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Frg_Resource_Start;                                  // 0x1138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Frg_Stop;                                            // 0x113C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Frg_Collect;                                         // 0x1140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_InTheZone_Running;                                       // 0x1144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_InTheZone_Hit;                                           // 0x1148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       Spawn_Color;                                               // 0x114C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            Head_Effect_Mesh_Materials;                                // 0x1154(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Body_Effect_Mesh_Materials;                                // 0x1160(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          Phase_Shift_Material_;                                     // 0x116C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             PhaseShiftActivateParticles;                               // 0x1170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bPhaseShiftActive_;                                        // 0x1174(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XCQ1[0x3];                                     // 0x1175(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             KnockKnockFX;                                              // 0x1178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_Handtrail;                                               // 0x117C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_AMCDustKickup;                                           // 0x1180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_AMCShockwave;                                            // 0x1184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    P_Handtrail_Active;                                        // 0x1188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_ArmThruster;                                             // 0x118C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    P_Arm_Thuster_Active;                                      // 0x1190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  ChargeUpSoundCue;                                          // 0x1194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAudioComponent*                             ChargeUpAudioComp;                                         // 0x1198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      ChargeUpCameraShake;                                       // 0x119C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundCue*                                   AMCImpactEnemySound;                                       // 0x11A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundCue*                                   AMCImpactBuildingSound;                                    // 0x11A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      AMCImpactCameraShake;                                      // 0x11A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Outlander.PlayerPawn_Outlander_C");
		return ptr;
	}



	void OnRep_OnPlayerBuiltFloor();
	void UserConstructionScript();
	void Phase_Shift_Activation_Timeline__FinishedFunc();
	void Phase_Shift_Activation_Timeline__UpdateFunc();
	void PhaseShiftHitSweep__FinishedFunc();
	void PhaseShiftHitSweep__UpdateFunc();
	void GameplayCue_Explorer_Fragment(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Outlander_InTheZone_FX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnBaseChanged(class AActor* NewBase);
	void ReceivePossessed(class AController* NewController);
	void GameplayCue_Explorer_Fragment_Offense_PickupFX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Explorer_Fragment_Defense_PickupFX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Explorer_Fragment_Specialty_PickupFX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void WithinReachOfTreasure(const struct FLinearColor& VSpawnColor, bool Activate);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Outlander_PhaseShift_AppliedFX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void RefreshIcons();
	void OnCharacterPartsReinitialized();
	void OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void EventOnDamagePlayFX();
	void GameplayCue_Outlander_KnockKnock(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialCharge(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeThruster(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeChargeUp(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeImpact(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_PlayerPawn_Outlander(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
