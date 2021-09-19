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

// BlueprintGeneratedClass FlingerPawn.FlingerPawn_C
// 0x0094 (FullSize[0x0EE4] - InheritedSize[0x0E50])
class AFlingerPawn_C : public AFortPawn_Flinger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0E50(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Disolve___Particle_Trigger_Disolve_The_Enemy_F0337528460D20BFFECC03A7A471C144; // 0x0E54(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Disolve___Particle_Trigger__Direction_F0337528460D20BFFECC03A7A471C144; // 0x0E58(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J9Q3[0x3];                                     // 0x0E59(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Disolve___Particle_Trigger;                                // 0x0E5C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Timeline_0_ColorFadeOutTrack_FF5DFFCA47FEE11FBE8FFF9B5CFA3D28; // 0x0E60(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Timeline_0_FadeInTrack_FF5DFFCA47FEE11FBE8FFF9B5CFA3D28;   // 0x0E64(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_FF5DFFCA47FEE11FBE8FFF9B5CFA3D28;    // 0x0E68(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E95G[0x3];                                     // 0x0E69(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0E6C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MontagePlayTime;                                           // 0x0E70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFortAIPawn*                                 PawnHeldByFlinger;                                         // 0x0E74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_WasThisAMeleeStrike;                                    // 0x0E78(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<ElementalEnum_ElementalEnum>           ElementalType;                                             // 0x0E90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_797D[0x3];                                     // 0x0E91(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    AmbientParticleEffect;                                     // 0x0E94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       ImpactMeleeSocket;                                         // 0x0E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             ImpactParticles_Default;                                   // 0x0EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             ImpactParticles_Wood;                                      // 0x0EA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             ImpactParticles_Stone;                                     // 0x0EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             ImpactParticles_Metal;                                     // 0x0EAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             ImpactParticles_HumanFlesh;                                // 0x0EB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               MeleeImpact_UseSocketTransforms;                           // 0x0EB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YT9R[0x3];                                     // 0x0EB5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Impact_MeleeSocket;                                        // 0x0EB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_NPCAbilityNonAttackRoar;                                // 0x0EC0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    FlingerRangedFX;                                           // 0x0ED8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             FlingerRangedSkullFXTemplate;                              // 0x0EDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             FlingerRangedHuskFXTemplate;                               // 0x0EE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FlingerPawn.FlingerPawn_C");
		return ptr;
	}



	bool IsReadyToReceiveNewSpawnGroup();
	bool OnReceiveSpawnGroup();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__Spawn__EventFunc();
	void Disolve___Particle_Trigger__FinishedFunc();
	void Disolve___Particle_Trigger__UpdateFunc();
	void Disolve___Particle_Trigger__Spawn_Death_FX__EventFunc();
	void FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy);
	void CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked);
	void FlingerCanSpawnAnEnemy();
	void FlingerCantSpawnAnEnemy();
	void FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile);
	void FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile);
	void AlertEnemySpawnedByFlinger(const struct FVector& PushMomentum, float PushDuration, class APawn* OwningFlinger);
	void FlingerEnemyDied(class APawn* PawnThatDied);
	void MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall);
	void MantleEnd();
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
	void OnSpawnedFromRift();
	void OnForceSpawnEffectCompletion();
	void OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void AdditiveHitReactDelay();
	void ReceiveBeginPlay();
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void GameplayCue_Impact_Physical_Creature(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void GameplayCue_NPC_Ranged_Grab(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_NPC_Ranged_Throw(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_NPC_Flinger_Ranged_Grab_NPC(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_FlingerPawn(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
