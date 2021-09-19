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
// Parameters
//---------------------------------------------------------------------------

// Function HuskPawn.HuskPawn_C.SetHuskRotationRate
struct AHuskPawn_C_SetHuskRotationRate_Params
{
	float                                              YawRate;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.ResetHuskRotationRateToDefault
struct AHuskPawn_C_ResetHuskRotationRateToDefault_Params
{
};

// Function HuskPawn.HuskPawn_C.PlayAdditiveHitReacts
struct AHuskPawn_C_PlayAdditiveHitReacts_Params
{
	struct FVector                                     HitDirection;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.PickColorFromAnArrayOfColors
struct AHuskPawn_C_PickColorFromAnArrayOfColors_Params
{
	TArray<struct FLinearColor>                        ArrayOfColors;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.UserConstructionScript
struct AHuskPawn_C_UserConstructionScript_Params
{
};

// Function HuskPawn.HuskPawn_C.Dissolve__FinishedFunc
struct AHuskPawn_C_Dissolve__FinishedFunc_Params
{
};

// Function HuskPawn.HuskPawn_C.Dissolve__UpdateFunc
struct AHuskPawn_C_Dissolve__UpdateFunc_Params
{
};

// Function HuskPawn.HuskPawn_C.Timeline_1__FinishedFunc
struct AHuskPawn_C_Timeline_1__FinishedFunc_Params
{
};

// Function HuskPawn.HuskPawn_C.Timeline_1__UpdateFunc
struct AHuskPawn_C_Timeline_1__UpdateFunc_Params
{
};

// Function HuskPawn.HuskPawn_C.Timeline_1__Spawn__EventFunc
struct AHuskPawn_C_Timeline_1__Spawn__EventFunc_Params
{
};

// Function HuskPawn.HuskPawn_C.FlingerSpawnedAnEnemy
struct AHuskPawn_C_FlingerSpawnedAnEnemy_Params
{
	class AFortAIPawn*                                 EnemySpawned;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortProjectileBase*                         ProjectileThatSpawnedThisEnemy;                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.CanFlingerSpawnAnEnemy
struct AHuskPawn_C_CanFlingerSpawnAnEnemy_Params
{
	class AActor*                                      ActorWhoAsked;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.FlingerCanSpawnAnEnemy
struct AHuskPawn_C_FlingerCanSpawnAnEnemy_Params
{
};

// Function HuskPawn.HuskPawn_C.FlingerCan'tSpawnAnEnemy
struct AHuskPawn_C_FlingerCantSpawnAnEnemy_Params
{
};

// Function HuskPawn.HuskPawn_C.FlingerThrewAProjectileContainingAnEnemy
struct AHuskPawn_C_FlingerThrewAProjectileContainingAnEnemy_Params
{
	class AFortProjectileBase*                         Projectile;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.FlingerEnemyFailedToSpawn
struct AHuskPawn_C_FlingerEnemyFailedToSpawn_Params
{
	class AFortProjectileBase*                         FailedProjectile;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.AlertEnemySpawnedByFlinger
struct AHuskPawn_C_AlertEnemySpawnedByFlinger_Params
{
	struct FVector                                     PushMomentum;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PushDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APawn*                                       OwningFlinger;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.FlingerEnemyDied
struct AHuskPawn_C_FlingerEnemyDied_Params
{
	class APawn*                                       PawnThatDied;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.HuskEvadeStart
struct AHuskPawn_C_HuskEvadeStart_Params
{
};

// Function HuskPawn.HuskPawn_C.VerifyTakerAttack
struct AHuskPawn_C_VerifyTakerAttack_Params
{
	bool                                               SpecialAttack;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Swoop;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Soul_Suck;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Portal;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.ResetTakerSpecialAttackTimer
struct AHuskPawn_C_ResetTakerSpecialAttackTimer_Params
{
	bool                                               Swoop;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SoulSuckMelee;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Portal;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.BeginTakerSwoopAttack
struct AHuskPawn_C_BeginTakerSwoopAttack_Params
{
};

// Function HuskPawn.HuskPawn_C.EndTakerSwoopAttack
struct AHuskPawn_C_EndTakerSwoopAttack_Params
{
};

// Function HuskPawn.HuskPawn_C.TakerWallPortalBehavior
struct AHuskPawn_C_TakerWallPortalBehavior_Params
{
	class AActor*                                      BuildingPart;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBTTask_BlueprintBase*                       Task;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     DesiredMoveLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Debug;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.IsTakerWallPortalAvailable
struct AHuskPawn_C_IsTakerWallPortalAvailable_Params
{
	bool                                               Portal_Available_;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.TakerAttackFSM
struct AHuskPawn_C_TakerAttackFSM_Params
{
	bool                                               SuccessfulHit;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.TakerSoulSuckSoundBegin
struct AHuskPawn_C_TakerSoulSuckSoundBegin_Params
{
	bool                                               Success;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.TakerSoulSuckSoundEnd
struct AHuskPawn_C_TakerSoulSuckSoundEnd_Params
{
};

// Function HuskPawn.HuskPawn_C.PortalAdd
struct AHuskPawn_C_PortalAdd_Params
{
	class ABuildingActor*                              BuildingActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class ABuildingActor*>                      BuildingActorList;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HuskPawn.HuskPawn_C.PortalClear
struct AHuskPawn_C_PortalClear_Params
{
};

// Function HuskPawn.HuskPawn_C.TakerSoulSuckInterrupted
struct AHuskPawn_C_TakerSoulSuckInterrupted_Params
{
};

// Function HuskPawn.HuskPawn_C.PortalGet
struct AHuskPawn_C_PortalGet_Params
{
	class ABuildingActor*                              BuildingActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class ABuildingActor*>                      BuildingActorList;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      BT;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.PortalFX
struct AHuskPawn_C_PortalFX_Params
{
};

// Function HuskPawn.HuskPawn_C.PortalCollision
struct AHuskPawn_C_PortalCollision_Params
{
	bool                                               Collide_;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.OnStunnedEffectBegin
struct AHuskPawn_C_OnStunnedEffectBegin_Params
{
};

// Function HuskPawn.HuskPawn_C.OnStunnedEffectEnd
struct AHuskPawn_C_OnStunnedEffectEnd_Params
{
};

// Function HuskPawn.HuskPawn_C.PawnUniqueIDSet
struct AHuskPawn_C_PawnUniqueIDSet_Params
{
};

// Function HuskPawn.HuskPawn_C.OnBeginSleepEffects
struct AHuskPawn_C_OnBeginSleepEffects_Params
{
};

// Function HuskPawn.HuskPawn_C.OnEndSleepEffects
struct AHuskPawn_C_OnEndSleepEffects_Params
{
};

// Function HuskPawn.HuskPawn_C.OnLanded
struct AHuskPawn_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function HuskPawn.HuskPawn_C.OnDeathPlayEffects
struct AHuskPawn_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AFortPawn*                                   InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function HuskPawn.HuskPawn_C.MantleStart
struct AHuskPawn_C_MantleStart_Params
{
	struct FVector                                     StartPos;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     MidPos;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     EndPos;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               LowWall;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MidWall;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               FullWall;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WindowWall;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.MantleEnd
struct AHuskPawn_C_MantleEnd_Params
{
};

// Function HuskPawn.HuskPawn_C.PlayHuskAdditiveHitReacts
struct AHuskPawn_C_PlayHuskAdditiveHitReacts_Params
{
	struct FVector                                     HitDirection;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.AdditiveHitReactDelay
struct AHuskPawn_C_AdditiveHitReactDelay_Params
{
};

// Function HuskPawn.HuskPawn_C.ReceiveTick
struct AHuskPawn_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HuskPawn.HuskPawn_C.OnSpawnedFromRift
struct AHuskPawn_C_OnSpawnedFromRift_Params
{
};

// Function HuskPawn.HuskPawn_C.OnForceSpawnEffectCompletion
struct AHuskPawn_C_OnForceSpawnEffectCompletion_Params
{
};

// Function HuskPawn.HuskPawn_C.ReceiveBeginPlay
struct AHuskPawn_C_ReceiveBeginPlay_Params
{
};

// Function HuskPawn.HuskPawn_C.OnDamagePlayEffects
struct AHuskPawn_C_OnDamagePlayEffects_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AFortPawn*                                   InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function HuskPawn.HuskPawn_C.GameplayCue.Impact.Physical.Creature
struct AHuskPawn_C_GameplayCue_Impact_Physical_Creature_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function HuskPawn.HuskPawn_C.ExecuteUbergraph_HuskPawn
struct AHuskPawn_C_ExecuteUbergraph_HuskPawn_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
