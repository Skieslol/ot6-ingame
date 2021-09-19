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

// Function FlingerInterface.FlingerInterface_C.FlingerEnemyDied
struct UFlingerInterface_C_FlingerEnemyDied_Params
{
	class APawn*                                       PawnThatDied;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerInterface.FlingerInterface_C.AlertEnemySpawnedByFlinger
struct UFlingerInterface_C_AlertEnemySpawnedByFlinger_Params
{
	struct FVector                                     PushMomentum;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PushDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APawn*                                       OwningFlinger;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerInterface.FlingerInterface_C.FlingerEnemyFailedToSpawn
struct UFlingerInterface_C_FlingerEnemyFailedToSpawn_Params
{
	class AFortProjectileBase*                         FailedProjectile;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerInterface.FlingerInterface_C.FlingerThrewAProjectileContainingAnEnemy
struct UFlingerInterface_C_FlingerThrewAProjectileContainingAnEnemy_Params
{
	class AFortProjectileBase*                         Projectile;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerInterface.FlingerInterface_C.FlingerCan'tSpawnAnEnemy
struct UFlingerInterface_C_FlingerCantSpawnAnEnemy_Params
{
};

// Function FlingerInterface.FlingerInterface_C.FlingerCanSpawnAnEnemy
struct UFlingerInterface_C_FlingerCanSpawnAnEnemy_Params
{
};

// Function FlingerInterface.FlingerInterface_C.CanFlingerSpawnAnEnemy
struct UFlingerInterface_C_CanFlingerSpawnAnEnemy_Params
{
	class AActor*                                      ActorWhoAsked;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlingerInterface.FlingerInterface_C.FlingerSpawnedAnEnemy
struct UFlingerInterface_C_FlingerSpawnedAnEnemy_Params
{
	class AFortAIPawn*                                 EnemySpawned;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortProjectileBase*                         ProjectileThatSpawnedThisEnemy;                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
