// Name: Fortnite, Version: OT-6_5

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function FlingerPawn.FlingerPawn_C.IsReadyToReceiveNewSpawnGroup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AFlingerPawn_C::IsReadyToReceiveNewSpawnGroup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.IsReadyToReceiveNewSpawnGroup");

	AFlingerPawn_C_IsReadyToReceiveNewSpawnGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlingerPawn.FlingerPawn_C.OnReceiveSpawnGroup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AFlingerPawn_C::OnReceiveSpawnGroup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.OnReceiveSpawnGroup");

	AFlingerPawn_C_OnReceiveSpawnGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlingerPawn.FlingerPawn_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AFlingerPawn_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.UserConstructionScript");

	AFlingerPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void AFlingerPawn_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.Timeline_0__FinishedFunc");

	AFlingerPawn_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void AFlingerPawn_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.Timeline_0__UpdateFunc");

	AFlingerPawn_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.Timeline_0__Spawn__EventFunc
// (BlueprintEvent)
void AFlingerPawn_C::Timeline_0__Spawn__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.Timeline_0__Spawn__EventFunc");

	AFlingerPawn_C_Timeline_0__Spawn__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.Disolve & Particle Trigger__FinishedFunc
// (BlueprintEvent)
void AFlingerPawn_C::Disolve___Particle_Trigger__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.Disolve & Particle Trigger__FinishedFunc");

	AFlingerPawn_C_Disolve___Particle_Trigger__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.Disolve & Particle Trigger__UpdateFunc
// (BlueprintEvent)
void AFlingerPawn_C::Disolve___Particle_Trigger__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.Disolve & Particle Trigger__UpdateFunc");

	AFlingerPawn_C_Disolve___Particle_Trigger__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.Disolve & Particle Trigger__Spawn Death FX__EventFunc
// (BlueprintEvent)
void AFlingerPawn_C::Disolve___Particle_Trigger__Spawn_Death_FX__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.Disolve & Particle Trigger__Spawn Death FX__EventFunc");

	AFlingerPawn_C_Disolve___Particle_Trigger__Spawn_Death_FX__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.FlingerSpawnedAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*             EnemySpawned                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortProjectileBase*     ProjectileThatSpawnedThisEnemy (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFlingerPawn_C::FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.FlingerSpawnedAnEnemy");

	AFlingerPawn_C_FlingerSpawnedAnEnemy_Params params;
	params.EnemySpawned = EnemySpawned;
	params.ProjectileThatSpawnedThisEnemy = ProjectileThatSpawnedThisEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.CanFlingerSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorWhoAsked                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFlingerPawn_C::CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.CanFlingerSpawnAnEnemy");

	AFlingerPawn_C_CanFlingerSpawnAnEnemy_Params params;
	params.ActorWhoAsked = ActorWhoAsked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.FlingerCanSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
void AFlingerPawn_C::FlingerCanSpawnAnEnemy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.FlingerCanSpawnAnEnemy");

	AFlingerPawn_C_FlingerCanSpawnAnEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.FlingerCan'tSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
void AFlingerPawn_C::FlingerCantSpawnAnEnemy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.FlingerCan'tSpawnAnEnemy");

	AFlingerPawn_C_FlingerCantSpawnAnEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.FlingerThrewAProjectileContainingAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     Projectile                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFlingerPawn_C::FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.FlingerThrewAProjectileContainingAnEnemy");

	AFlingerPawn_C_FlingerThrewAProjectileContainingAnEnemy_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.FlingerEnemyFailedToSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     FailedProjectile               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFlingerPawn_C::FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.FlingerEnemyFailedToSpawn");

	AFlingerPawn_C_FlingerEnemyFailedToSpawn_Params params;
	params.FailedProjectile = FailedProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.AlertEnemySpawnedByFlinger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PushMomentum                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          PushDuration                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                   OwningFlinger                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFlingerPawn_C::AlertEnemySpawnedByFlinger(const struct FVector& PushMomentum, float PushDuration, class APawn* OwningFlinger)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.AlertEnemySpawnedByFlinger");

	AFlingerPawn_C_AlertEnemySpawnedByFlinger_Params params;
	params.PushMomentum = PushMomentum;
	params.PushDuration = PushDuration;
	params.OwningFlinger = OwningFlinger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.FlingerEnemyDied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PawnThatDied                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFlingerPawn_C::FlingerEnemyDied(class APawn* PawnThatDied)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.FlingerEnemyDied");

	AFlingerPawn_C_FlingerEnemyDied_Params params;
	params.PawnThatDied = PawnThatDied;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.MantleStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartPos                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 MidPos                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 EndPos                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           LowWall                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           MidWall                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           FullWall                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           WindowWall                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFlingerPawn_C::MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.MantleStart");

	AFlingerPawn_C_MantleStart_Params params;
	params.StartPos = StartPos;
	params.MidPos = MidPos;
	params.EndPos = EndPos;
	params.LowWall = LowWall;
	params.MidWall = MidWall;
	params.FullWall = FullWall;
	params.WindowWall = WindowWall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.MantleEnd
// (Public, BlueprintCallable, BlueprintEvent)
void AFlingerPawn_C::MantleEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.MantleEnd");

	AFlingerPawn_C_MantleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.HuskEvadeStart
// (Public, BlueprintCallable, BlueprintEvent)
void AFlingerPawn_C::HuskEvadeStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.HuskEvadeStart");

	AFlingerPawn_C_HuskEvadeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.VerifyTakerAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SpecialAttack                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Swoop                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Soul_Suck                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Portal                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFlingerPawn_C::VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.VerifyTakerAttack");

	AFlingerPawn_C_VerifyTakerAttack_Params params;
	params.SpecialAttack = SpecialAttack;
	params.Swoop = Swoop;
	params.Soul_Suck = Soul_Suck;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.ResetTakerSpecialAttackTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Swoop                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SoulSuckMelee                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Portal                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFlingerPawn_C::ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.ResetTakerSpecialAttackTimer");

	AFlingerPawn_C_ResetTakerSpecialAttackTimer_Params params;
	params.Swoop = Swoop;
	params.SoulSuckMelee = SoulSuckMelee;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.BeginTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)
void AFlingerPawn_C::BeginTakerSwoopAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.BeginTakerSwoopAttack");

	AFlingerPawn_C_BeginTakerSwoopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.EndTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)
void AFlingerPawn_C::EndTakerSwoopAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.EndTakerSwoopAttack");

	AFlingerPawn_C_EndTakerSwoopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.TakerWallPortalBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  BuildingPart                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBTTask_BlueprintBase*   Task                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 DesiredMoveLocation            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Debug                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFlingerPawn_C::TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.TakerWallPortalBehavior");

	AFlingerPawn_C_TakerWallPortalBehavior_Params params;
	params.BuildingPart = BuildingPart;
	params.Task = Task;
	params.DesiredMoveLocation = DesiredMoveLocation;
	params.Debug = Debug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.IsTakerWallPortalAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Portal_Available_              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFlingerPawn_C::IsTakerWallPortalAvailable(bool Portal_Available_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.IsTakerWallPortalAvailable");

	AFlingerPawn_C_IsTakerWallPortalAvailable_Params params;
	params.Portal_Available_ = Portal_Available_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.TakerAttackFSM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SuccessfulHit                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFlingerPawn_C::TakerAttackFSM(bool SuccessfulHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.TakerAttackFSM");

	AFlingerPawn_C_TakerAttackFSM_Params params;
	params.SuccessfulHit = SuccessfulHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.TakerSoulSuckSoundBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFlingerPawn_C::TakerSoulSuckSoundBegin(bool Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.TakerSoulSuckSoundBegin");

	AFlingerPawn_C_TakerSoulSuckSoundBegin_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.TakerSoulSuckSoundEnd
// (Public, BlueprintCallable, BlueprintEvent)
void AFlingerPawn_C::TakerSoulSuckSoundEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.TakerSoulSuckSoundEnd");

	AFlingerPawn_C_TakerSoulSuckSoundEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.PortalAdd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABuildingActor*>  BuildingActorList              (Parm, OutParm, ZeroConstructor, ReferenceParm)
void AFlingerPawn_C::PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>* BuildingActorList)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.PortalAdd");

	AFlingerPawn_C_PortalAdd_Params params;
	params.BuildingActor = BuildingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildingActorList != nullptr)
		*BuildingActorList = params.BuildingActorList;

}


// Function FlingerPawn.FlingerPawn_C.PortalClear
// (Public, BlueprintCallable, BlueprintEvent)
void AFlingerPawn_C::PortalClear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.PortalClear");

	AFlingerPawn_C_PortalClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.TakerSoulSuckInterrupted
// (Public, BlueprintCallable, BlueprintEvent)
void AFlingerPawn_C::TakerSoulSuckInterrupted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.TakerSoulSuckInterrupted");

	AFlingerPawn_C_TakerSoulSuckInterrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.PortalGet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABuildingActor*>  BuildingActorList              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  BT                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFlingerPawn_C::PortalGet(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>* BuildingActorList, class AActor* BT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.PortalGet");

	AFlingerPawn_C_PortalGet_Params params;
	params.BuildingActor = BuildingActor;
	params.BT = BT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildingActorList != nullptr)
		*BuildingActorList = params.BuildingActorList;

}


// Function FlingerPawn.FlingerPawn_C.PortalFX
// (Public, BlueprintCallable, BlueprintEvent)
void AFlingerPawn_C::PortalFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.PortalFX");

	AFlingerPawn_C_PortalFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.PortalCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Collide_                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFlingerPawn_C::PortalCollision(bool Collide_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.PortalCollision");

	AFlingerPawn_C_PortalCollision_Params params;
	params.Collide_ = Collide_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.OnSpawnedFromRift
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void AFlingerPawn_C::OnSpawnedFromRift()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.OnSpawnedFromRift");

	AFlingerPawn_C_OnSpawnedFromRift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.OnForceSpawnEffectCompletion
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void AFlingerPawn_C::OnForceSpawnEffectCompletion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.OnForceSpawnEffectCompletion");

	AFlingerPawn_C_OnForceSpawnEffectCompletion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AFortPawn*               InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
void AFlingerPawn_C::OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.OnDamagePlayEffects");

	AFlingerPawn_C_OnDamagePlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.AdditiveHitReactDelay
// (BlueprintCallable, BlueprintEvent)
void AFlingerPawn_C::AdditiveHitReactDelay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.AdditiveHitReactDelay");

	AFlingerPawn_C_AdditiveHitReactDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AFlingerPawn_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.ReceiveBeginPlay");

	AFlingerPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
void AFlingerPawn_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.OnDeathServer");

	AFlingerPawn_C_OnDeathServer_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.GameplayCue.Impact.Physical.Creature
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void AFlingerPawn_C::GameplayCue_Impact_Physical_Creature(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.GameplayCue.Impact.Physical.Creature");

	AFlingerPawn_C_GameplayCue_Impact_Physical_Creature_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AFortPawn*               InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
void AFlingerPawn_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.OnDeathPlayEffects");

	AFlingerPawn_C_OnDeathPlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Ranged.Grab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void AFlingerPawn_C::GameplayCue_NPC_Ranged_Grab(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Ranged.Grab");

	AFlingerPawn_C_GameplayCue_NPC_Ranged_Grab_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Ranged.Throw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void AFlingerPawn_C::GameplayCue_NPC_Ranged_Throw(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Ranged.Throw");

	AFlingerPawn_C_GameplayCue_NPC_Ranged_Throw_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Flinger.Ranged.Grab.NPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void AFlingerPawn_C::GameplayCue_NPC_Flinger_Ranged_Grab_NPC(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.GameplayCue.NPC.Flinger.Ranged.Grab.NPC");

	AFlingerPawn_C_GameplayCue_NPC_Flinger_Ranged_Grab_NPC_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlingerPawn.FlingerPawn_C.ExecuteUbergraph_FlingerPawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFlingerPawn_C::ExecuteUbergraph_FlingerPawn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FlingerPawn.FlingerPawn_C.ExecuteUbergraph_FlingerPawn");

	AFlingerPawn_C_ExecuteUbergraph_FlingerPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
