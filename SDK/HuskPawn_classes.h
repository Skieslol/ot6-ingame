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

// BlueprintGeneratedClass HuskPawn.HuskPawn_C
// 0x022C (FullSize[0x107C] - InheritedSize[0x0E50])
class AHuskPawn_C : public AFortAIPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0E50(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Elemental_Layer_Audio_Loop;                                // 0x0E54(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Effect_Sleep_WakeUP;                                       // 0x0E58(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Effect_Sleep;                                              // 0x0E5C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Effect_Stun;                                               // 0x0E60(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              Timeline_1_ColorFadeOutTrack_6F447E9B4C4E47B267D3DF9D65CF1BF8; // 0x0E64(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Timeline_1_FadeInTrack_6F447E9B4C4E47B267D3DF9D65CF1BF8;   // 0x0E68(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_1__Direction_6F447E9B4C4E47B267D3DF9D65CF1BF8;    // 0x0E6C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_55XD[0x3];                                     // 0x0E6D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_2;                                                // 0x0E70(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Dissolve_Dissolve_433BF66B4CF1B472082D00AA8D70E5CB;        // 0x0E74(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Dissolve__Direction_433BF66B4CF1B472082D00AA8D70E5CB;      // 0x0E78(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BU69[0x3];                                     // 0x0E79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Dissolve;                                                  // 0x0E7C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCurveFloat*                                 HieghtDistributionCurve;                                   // 0x0E80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              PseudoRandomNetworkedFloat;                                // 0x0E84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FLinearColor>                        MaleHuskHairColors;                                        // 0x0E88(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        MaleHuskSkinColors;                                        // 0x0E94(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        MaleHuskPantColors;                                        // 0x0EA0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRandomStream                               RandomStream_1;                                            // 0x0EAC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        MaleHuskShirtColors;                                       // 0x0EB4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                HitCount;                                                  // 0x0EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LastTakeHitTime;                                           // 0x0EC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PushFromFlingerSpawn;                                      // 0x0EC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UsePOCScaleAndMaterials;                                   // 0x0EC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               POCShouldOverrideMaterial;                                 // 0x0ECA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               POCShouldOverrideMaterialValues;                           // 0x0ECB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          POCOverrideMaterial;                                       // 0x0ECC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                POCMaterialSkinColor;                                      // 0x0ED0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                POCMaterialHairColor;                                      // 0x0EE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                POCMaterialPantColor;                                      // 0x0EF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                POCMaterialShirtColor;                                     // 0x0F00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Mantling;                                                  // 0x0F10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TI4T[0x3];                                     // 0x0F11(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AFortPawn*                                   FlingerThatSpawnedMe;                                      // 0x0F14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	struct FVector                                     FlingerThatSpawnedMeLocation;                              // 0x0F18(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Stunned;                                                   // 0x0F24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Sleeping;                                                  // 0x0F25(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KPVM[0x2];                                     // 0x0F26(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       TC_HitReactionAdditiveSingleOneShot;                       // 0x0F28(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HitReactionAdditiveLoop;                                // 0x0F40(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HitReactionFullBody;                                    // 0x0F58(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HitReactionBlockAll;                                    // 0x0F70(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HitReactionBlockMelee;                                  // 0x0F88(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HitReactionBlockRanged;                                 // 0x0FA0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HitReactForMelee;                                          // 0x0FB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UseRandomColorVariation;                                   // 0x0FB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HuskIsInFlingersHand;                                      // 0x0FBA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HuskIsAirborne;                                            // 0x0FBB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     HuskFlingerHandOffset;                                     // 0x0FBC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    HuskFlingerHandRotation;                                   // 0x0FC8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HuskFlingerProjectileOffset;                               // 0x0FD4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    HuskFlingerProjectileRotation;                             // 0x0FE0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ElementalEnum_ElementalEnum>           ElementalType;                                             // 0x0FEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_1M34[0x3];                                     // 0x0FED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          Default_Material;                                          // 0x0FF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          Fire_Material;                                             // 0x0FF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          Ice_Material;                                              // 0x0FF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          Electrical_Mat;                                            // 0x0FFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Particle_Fire_Ambient;                                     // 0x1000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Particle_Ice_Ambient;                                      // 0x1004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Particle_Electrical_Ambient;                               // 0x1008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Temp_Disable_Elemental_Effects;                            // 0x100C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DDAU[0x3];                                     // 0x100D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       TC_MeleeWeapon;                                            // 0x1010(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsMeleeHit;                                                // 0x1028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TRXC[0x3];                                     // 0x1029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  Elemental_Audio_Layer_Sound;                               // 0x102C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RandomizeMeshScale;                                        // 0x1030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MKLZ[0x3];                                     // 0x1031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             ImpactParticles_Default;                                   // 0x1034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             ImpactParticles_HumanFlesh;                                // 0x1038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             ImpactParticles_Wood;                                      // 0x103C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             ImpactParticles_Stone;                                     // 0x1040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             ImpactParticles_Metal;                                     // 0x1044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               MeleeImpact_UseSocketTransforms;                           // 0x1048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KPP7[0x3];                                     // 0x1049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Impact_MeleeSocket;                                        // 0x104C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    HuskDefaultRotationRate;                                   // 0x1054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsHeadshot_HideHead;                                       // 0x1060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QPPK[0x3];                                     // 0x1061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                Damage_Red_Laser;                                          // 0x1064(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PreviousLargestDeathRadius;                                // 0x106C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    Death_Effects;                                             // 0x1070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Death_Normal_Sound;                                        // 0x1074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Death_RedLaser_Sound;                                      // 0x1078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HuskPawn.HuskPawn_C");
		return ptr;
	}



	void SetHuskRotationRate(float YawRate);
	void ResetHuskRotationRateToDefault();
	void PlayAdditiveHitReacts(const struct FVector& HitDirection);
	void PickColorFromAnArrayOfColors(TArray<struct FLinearColor>* ArrayOfColors, struct FLinearColor* Color);
	void UserConstructionScript();
	void Dissolve__FinishedFunc();
	void Dissolve__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_1__Spawn__EventFunc();
	void FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy);
	void CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked);
	void FlingerCanSpawnAnEnemy();
	void FlingerCantSpawnAnEnemy();
	void FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile);
	void FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile);
	void AlertEnemySpawnedByFlinger(const struct FVector& PushMomentum, float PushDuration, class APawn* OwningFlinger);
	void FlingerEnemyDied(class APawn* PawnThatDied);
	void HuskEvadeStart();
	void VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal);
	void ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal);
	void BeginTakerSwoopAttack();
	void EndTakerSwoopAttack();
	void TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug);
	void IsTakerWallPortalAvailable(bool Portal_Available_);
	void TakerAttackFSM(bool SuccessfulHit);
	void TakerSoulSuckSoundBegin(bool Success);
	void TakerSoulSuckSoundEnd();
	void PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>* BuildingActorList);
	void PortalClear();
	void TakerSoulSuckInterrupted();
	void PortalGet(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>* BuildingActorList, class AActor* BT);
	void PortalFX();
	void PortalCollision(bool Collide_);
	void OnStunnedEffectBegin();
	void OnStunnedEffectEnd();
	void PawnUniqueIDSet();
	void OnBeginSleepEffects();
	void OnEndSleepEffects();
	void OnLanded(const struct FHitResult& Hit);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall);
	void MantleEnd();
	void PlayHuskAdditiveHitReacts(const struct FVector& HitDirection);
	void AdditiveHitReactDelay();
	void ReceiveTick(float DeltaSeconds);
	void OnSpawnedFromRift();
	void OnForceSpawnEffectCompletion();
	void ReceiveBeginPlay();
	void OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void GameplayCue_Impact_Physical_Creature(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_HuskPawn(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
