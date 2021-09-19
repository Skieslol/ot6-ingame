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

// Function FlingerPawn.FlingerPawn_C.IsReadyToReceiveNewSpawnGroup
struct AFlingerPawn_C_IsReadyToReceiveNewSpawnGroup_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function FlingerPawn.FlingerPawn_C.OnReceiveSpawnGroup
struct AFlingerPawn_C_OnReceiveSpawnGroup_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function FlingerPawn.FlingerPawn_C.UserConstructionScript
struct AFlingerPawn_C_UserConstructionScript_Params
{
};

// Function FlingerPawn.FlingerPawn_C.Timeline_0__FinishedFunc
struct AFlingerPawn_C_Timeline_0__FinishedFunc_Params
{
};

// Function FlingerPawn.FlingerPawn_C.Timeline_0__UpdateFunc
struct AFlingerPawn_C_Timeline_0__UpdateFunc_Params
{
};

// Function FlingerPawn.FlingerPawn_C.Timeline_0__Spawn__EventFunc
struct AFlingerPawn_C_Timeline_0__Spawn__EventFunc_Params
{
};

// Function FlingerPawn.FlingerPawn_C.Disolve & Particle Trigger__FinishedFunc
struct AFlingerPawn_C_Disolve___Particle_Trigger__FinishedFunc_Params
{
};

// Function FlingerPawn.FlingerPawn_C.Disolve & Particle Trigger__UpdateFunc
struct AFlingerPawn_C_Disolve___Particle_Trigger__UpdateFunc_Params
{
};

// Function FlingerPawn.FlingerPawn_C.Disolve & Particle Trigger__Spawn Death FX__EventFunc
struct AFlingerPawn_C_Disolve___Particle_Trigger__Spawn_Death_FX__EventFunc_Params
{
};

// Function FlingerPawn.FlingerPawn_C.FlingerSpawnedAnEnemy
struct AFlingerPawn_C_FlingerSpawnedAnEnemy_Params
{
	class AFortAIPawn*                                 EnemySpawned;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortProjectileBase*                         ProjectileThatSpawnedThisEnemy;                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerPawn.FlingerPawn_C.CanFlingerSpawnAnEnemy
struct AFlingerPawn_C_CanFlingerSpawnAnEnemy_Params
{
	class AActor*                                      ActorWhoAsked;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerPawn.FlingerPawn_C.FlingerCanSpawnAnEnemy
struct AFlingerPawn_C_FlingerCanSpawnAnEnemy_Params
{
};

// Function FlingerPawn.FlingerPawn_C.FlingerCan'tSpawnAnEnemy
struct AFlingerPawn_C_FlingerCantSpawnAnEnemy_Params
{
};

// Function FlingerPawn.FlingerPawn_C.FlingerThrewAProjectileContainingAnEnemy
struct AFlingerPawn_C_FlingerThrewAProjectileContainingAnEnemy_Params
{
	class AFortProjectileBase*                         Projectile;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerPawn.FlingerPawn_C.FlingerEnemyFailedToSpawn
struct AFlingerPawn_C_FlingerEnemyFailedToSpawn_Params
{
	class AFortProjectileBase*                         FailedProjectile;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerPawn.FlingerPawn_C.AlertEnemySpawnedByFlinger
struct AFlingerPawn_C_AlertEnemySpawnedByFlinger_Params
{
	struct FVector                                     PushMomentum;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PushDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APawn*                                       OwningFlinger;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerPawn.FlingerPawn_C.FlingerEnemyDied
struct AFlingerPawn_C_FlingerEnemyDied_Params
{
	class APawn*                                       PawnThatDied;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerPawn.FlingerPawn_C.MantleStart
struct AFlingerPawn_C_MantleStart_Params
{
	struct FVector                                     StartPos;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     MidPos;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     EndPos;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               LowWall;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MidWall;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               FullWall;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WindowWall;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerPawn.FlingerPawn_C.MantleEnd
struct AFlingerPawn_C_MantleEnd_Params
{
};

// Function FlingerPawn.FlingerPawn_C.HuskEvadeStart
struct AFlingerPawn_C_HuskEvadeStart_Params
{
};

// Function FlingerPawn.FlingerPawn_C.VerifyTakerAttack
struct AFlingerPawn_C_VerifyTakerAttack_Params
{
	bool                                               SpecialAttack;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Swoop;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Soul_Suck;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Portal;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerPawn.FlingerPawn_C.ResetTakerSpecialAttackTimer
struct AFlingerPawn_C_ResetTakerSpecialAttackTimer_Params
{
	bool                                               Swoop;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SoulSuckMelee;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Portal;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerPawn.FlingerPawn_C.BeginTakerSwoopAttack
struct AFlingerPawn_C_BeginTakerSwoopAttack_Params
{
};

// Function FlingerPawn.FlingerPawn_C.EndTakerSwoopAttack
struct AFlingerPawn_C_EndTakerSwoopAttack_Params
{
};

// Function FlingerPawn.FlingerPawn_C.TakerWallPortalBehavior
struct AFlingerPawn_C_TakerWallPortalBehavior_Params
{
	class AActor*                                      BuildingPart;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBTTask_BlueprintBase*                       Task;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     DesiredMoveLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Debug;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerPawn.FlingerPawn_C.IsTakerWallPortalAvailable
struct AFlingerPawn_C_IsTakerWallPortalAvailable_Params
{
	bool                                               Portal_Available_;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerPawn.FlingerPawn_C.TakerAttackFSM
struct AFlingerPawn_C_TakerAttackFSM_Params
{
	bool                                               SuccessfulHit;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerPawn.FlingerPawn_C.TakerSoulSuckSoundBegin
struct AFlingerPawn_C_TakerSoulSuckSoundBegin_Params
{
	bool                                               Success;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerPawn.FlingerPawn_C.TakerSoulSuckSoundEnd
struct AFlingerPawn_C_TakerSoulSuckSoundEnd_Params
{
};

// Function FlingerPawn.FlingerPawn_C.PortalAdd
struct AFlingerPawn_C_PortalAdd_Params
{
	class ABuildingActor*                              BuildingActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class ABuildingActor*>                      BuildingActorList;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FlingerPawn.FlingerPawn_C.PortalClear
struct AFlingerPawn_C_PortalClear_Params
{
};

// Function FlingerPawn.FlingerPawn_C.TakerSoulSuckInterrupted
struct AFlingerPawn_C_TakerSoulSuckInterrupted_Params
{
};

// Function FlingerPawn.FlingerPawn_C.PortalGet
struct AFlingerPawn_C_PortalGet_Params
{
	class ABuildingActor*                              BuildingActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class ABuildingActor*>                      BuildingActorList;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      BT;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerPawn.FlingerPawn_C.PortalFX
struct AFlingerPawn_C_PortalFX_Params
{
};

// Function FlingerPawn.FlingerPawn_C.PortalCollision
struct AFlingerPawn_C_PortalCollision_Params
{
	bool                                               Collide_;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerPawn.FlingerPawn_C.OnSpawnedFromRift
struct AFlingerPawn_C_OnSpawnedFromRift_Params
{
};

// Function FlingerPawn.FlingerPawn_C.OnForceSpawnEffectCompletion
struct AFlingerPawn_C_OnForceSpawnEffectCompletion_Params
{
};

// Function FlingerPawn.FlingerPawn_C.OnDamagePlayEffects
struct AFlingerPawn_C_OnDamagePlayEffects_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AFortPawn*                                   InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function FlingerPawn.FlingerPawn_C.AdditiveHitReactDelay
struct AFlingerPawn_C_AdditiveHitReactDelay_Params
{
};

// Function FlingerPawn.FlingerPawn_C.ReceiveBeginPlay
struct AFlingerPawn_C_ReceiveBeginPlay_Params
{
};

// Function FlingerPawn.FlingerPawn_C.OnDeathServer
struct AFlingerPawn_C_OnDeathServer_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AController*                                 InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function FlingerPawn.FlingerPawn_C.GameplayCue.Impact.Physical.Creature
struct AFlingerPawn_C_GameplayCue_Impact_Physical_Creature_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function FlingerPawn.FlingerPawn_C.OnDeathPlayEffects
struct AFlingerPawn_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AFortPawn*                                   InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Ranged.Grab
struct AFlingerPawn_C_GameplayCue_NPC_Ranged_Grab_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Ranged.Throw
struct AFlingerPawn_C_GameplayCue_NPC_Ranged_Throw_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Flinger.Ranged.Grab.NPC
struct AFlingerPawn_C_GameplayCue_NPC_Flinger_Ranged_Grab_NPC_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function FlingerPawn.FlingerPawn_C.ExecuteUbergraph_FlingerPawn
struct AFlingerPawn_C_ExecuteUbergraph_FlingerPawn_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
