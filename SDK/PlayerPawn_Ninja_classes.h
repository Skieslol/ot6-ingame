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

// BlueprintGeneratedClass PlayerPawn_Ninja.PlayerPawn_Ninja_C
// 0x01A0 (FullSize[0x10E0] - InheritedSize[0x0F40])
class APlayerPawn_Ninja_C : public APlayerPawn_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0F40(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_TOTD_Trail_01;                                           // 0x0F44(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_Assassination;                                           // 0x0F48(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      ShadowStanceHeadComponent;                                 // 0x0F4C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      ShadowStanceBodyComponent;                                 // 0x0F50(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                            DragonSlashImpact;                                         // 0x0F54(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Stealth_Activate;                                          // 0x0F58(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              FadeRibbonTOTD_Fade_37E3AFF842E4A1D772F228B07AA1229C;      // 0x0F5C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             FadeRibbonTOTD__Direction_37E3AFF842E4A1D772F228B07AA1229C; // 0x0F60(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LWUZ[0x3];                                     // 0x0F61(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FadeRibbonTOTD;                                            // 0x0F64(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Animate_Ninja_ShadowStance_Dissolve_Inverse_Translucent_Shader_Opacity_1E481F634B18DA79A1B2FDBCB1091D62; // 0x0F68(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Animate_Ninja_ShadowStance_Dissolve_NinjaDissolve_1E481F634B18DA79A1B2FDBCB1091D62; // 0x0F6C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Animate_Ninja_ShadowStance_Dissolve__Direction_1E481F634B18DA79A1B2FDBCB1091D62; // 0x0F70(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KM3A[0x3];                                     // 0x0F71(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Animate_Ninja_ShadowStance_Dissolve;                       // 0x0F74(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             E_SmokeBombSmokeAttached;                                  // 0x0F78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_EnableMantisLeap;                                       // 0x0F7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          MI_ShadowStanceDissolve;                                   // 0x0F80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TestMacros;                                                // 0x0F84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1SOK[0x3];                                     // 0x0F85(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             P_Assassination_Running;                                   // 0x0F88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       AssassinationSocket;                                       // 0x0F8C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       AssassinationSpawnRate;                                    // 0x0F94(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                StackCount;                                                // 0x0F9C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DimMakActive;                                              // 0x0FA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R0C5[0x3];                                     // 0x0FA1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  Sound_Stealth_Deactivate;                                  // 0x0FA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Stealth_Activate;                                    // 0x0FA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             MantisLeapEffect;                                          // 0x0FAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  MantisLeapCue;                                             // 0x0FB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       FootSocketL;                                               // 0x0FB4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       FootSocketR;                                               // 0x0FBC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_EnterShadowStance;                                       // 0x0FC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Shadow_Stance_Active;                                      // 0x0FC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_65OA[0x3];                                     // 0x0FC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             P_AssassinationActivate;                                   // 0x0FCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_AssassinationDeactivate;                                 // 0x0FD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            MID_ShadowStanceDissolveArray;                             // 0x0FD4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          MI_Shadow_Stance_Translucent_Shader;                       // 0x0FE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            MID_ShadowStanceTranslucentArray_Body;                     // 0x0FE4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            MID_ShadowStanceTranslucentArray_Head;                     // 0x0FF0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystemComponent*                    ShadowStanceLoopingFX;                                     // 0x0FFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ShadowStanceVisibility;                                    // 0x1000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          MI_Shadow_Stance_Translucent_Shader_Enemy_View;            // 0x1004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          Shadow_Stance_Material;                                    // 0x1008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DragonSlashActive;                                         // 0x100C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WeaponsShadowStanceReversed;                               // 0x100D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YWKV[0x2];                                     // 0x100E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GE_AssassinationStacks;                                    // 0x1010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                LargeFXActivateLvl;                                        // 0x1014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class USplineMeshComponent*>                TOTD_MeshSplines;                                          // 0x1018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USplineComponent*                            TOTD_Spline;                                               // 0x1024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     TOTD_LastSplinePoint;                                      // 0x1028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                TOTD_SplinePoints;                                         // 0x1034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DistanceToSpawnNewSplineAndParticles;                      // 0x1038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          TOTD_MID_1;                                                // 0x103C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          TOTD_MID_2;                                                // 0x1040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            TOTD_MID_Array_1;                                          // 0x1044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            TOTD_MID_Array_2;                                          // 0x1050(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TOTD_Lifetime;                                             // 0x105C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              TOTD_Fadeout;                                              // 0x1060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TOTDActive_;                                               // 0x1064(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NZ1Z[0x3];                                     // 0x1065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TOTD_ParticleTrailVelocity;                                // 0x1068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FVector>                             TOTD_RecalculatedPoints;                                   // 0x106C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                TOTD_MID_0_Color_A_Friendy;                                // 0x1078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                TOTD_MID_0_Color_A_Enemy;                                  // 0x1088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                TOTD_MID_1_Color_A_Friendy;                                // 0x1098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                TOTD_MID_1_Color_A_Enemy;                                  // 0x10A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                TOTD_MID_1_Color_B_Friendy;                                // 0x10B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                TOTD_MID_1_Color_B_Enemy;                                  // 0x10C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_MantisStrikeImpact;                                      // 0x10D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  MantisStrikeImpactCue;                                     // 0x10DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Ninja.PlayerPawn_Ninja_C");
		return ptr;
	}



	void VFX_RedistributePointsAlongSpline_TOTD();
	void VFX_CreateMIDs_TOTD();
	void VFX_DestroySplines_TOTD();
	void VFX_AddSplinePointAndMesh_TOTD();
	void VFX_UpdateSplinePoints_TOTD();
	void VFX_InitializeSpline_TOTD();
	void CreateAndAttachDuplicateEffectSkeletalMeshes(TEnumAsByte<FortniteGame_EFortCustomPartType> BodyType, class USkeletalMeshComponent** DuplicatedSkeletalMeshComponent, class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array, int TranslucentSortPriority);
	void UserConstructionScript();
	void Animate_Ninja_ShadowStance_Dissolve__FinishedFunc();
	void Animate_Ninja_ShadowStance_Dissolve__UpdateFunc();
	void FadeRibbonTOTD__FinishedFunc();
	void FadeRibbonTOTD__UpdateFunc();
	void GameplayCue_Ninja_SmokeBomb_ImpactFX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnLanded(const struct FHitResult& Hit);
	void GameplayCue_Abilities_Activation_Ninja_ShadowStance(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Ninja_Assassination_ActiveFX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Ninja_DimMak_ActiveFX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Ninja_MantisLeap_ActivationFX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void UpdateWeaponShadowStance();
	void DragonSlashActivatedOrDeactivated(bool Active_);
	void ReceiveBeginPlay();
	void Toggle_Shadow_Stance();
	void OnCharacterPartsReinitialized();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void TailOfDragonStart(float AoeCloudTimeToLive);
	void TailOfDragonEnd();
	void ReceiveTick(float DeltaSeconds);
	void TOTDTimerExpired();
	void GameplayCue_Ninja_MantisLeap_MantisStrikeFX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_PlayerPawn_Ninja(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
