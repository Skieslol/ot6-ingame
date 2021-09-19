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

// Function HuskPawn.HuskPawn_C.SetHuskRotationRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          YawRate                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::SetHuskRotationRate(float YawRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.SetHuskRotationRate");

	AHuskPawn_C_SetHuskRotationRate_Params params;
	params.YawRate = YawRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.ResetHuskRotationRateToDefault
// (Public, BlueprintCallable, BlueprintEvent)
void AHuskPawn_C::ResetHuskRotationRateToDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.ResetHuskRotationRateToDefault");

	AHuskPawn_C_ResetHuskRotationRateToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.PlayAdditiveHitReacts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitDirection                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::PlayAdditiveHitReacts(const struct FVector& HitDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.PlayAdditiveHitReacts");

	AHuskPawn_C_PlayAdditiveHitReacts_Params params;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.PickColorFromAnArrayOfColors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FLinearColor>    ArrayOfColors                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::PickColorFromAnArrayOfColors(TArray<struct FLinearColor>* ArrayOfColors, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.PickColorFromAnArrayOfColors");

	AHuskPawn_C_PickColorFromAnArrayOfColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ArrayOfColors != nullptr)
		*ArrayOfColors = params.ArrayOfColors;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function HuskPawn.HuskPawn_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AHuskPawn_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.UserConstructionScript");

	AHuskPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.Dissolve__FinishedFunc
// (BlueprintEvent)
void AHuskPawn_C::Dissolve__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.Dissolve__FinishedFunc");

	AHuskPawn_C_Dissolve__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.Dissolve__UpdateFunc
// (BlueprintEvent)
void AHuskPawn_C::Dissolve__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.Dissolve__UpdateFunc");

	AHuskPawn_C_Dissolve__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
void AHuskPawn_C::Timeline_1__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.Timeline_1__FinishedFunc");

	AHuskPawn_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
void AHuskPawn_C::Timeline_1__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.Timeline_1__UpdateFunc");

	AHuskPawn_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.Timeline_1__Spawn__EventFunc
// (BlueprintEvent)
void AHuskPawn_C::Timeline_1__Spawn__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.Timeline_1__Spawn__EventFunc");

	AHuskPawn_C_Timeline_1__Spawn__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.FlingerSpawnedAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*             EnemySpawned                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortProjectileBase*     ProjectileThatSpawnedThisEnemy (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.FlingerSpawnedAnEnemy");

	AHuskPawn_C_FlingerSpawnedAnEnemy_Params params;
	params.EnemySpawned = EnemySpawned;
	params.ProjectileThatSpawnedThisEnemy = ProjectileThatSpawnedThisEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.CanFlingerSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorWhoAsked                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.CanFlingerSpawnAnEnemy");

	AHuskPawn_C_CanFlingerSpawnAnEnemy_Params params;
	params.ActorWhoAsked = ActorWhoAsked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.FlingerCanSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
void AHuskPawn_C::FlingerCanSpawnAnEnemy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.FlingerCanSpawnAnEnemy");

	AHuskPawn_C_FlingerCanSpawnAnEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.FlingerCan'tSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
void AHuskPawn_C::FlingerCantSpawnAnEnemy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.FlingerCan'tSpawnAnEnemy");

	AHuskPawn_C_FlingerCantSpawnAnEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.FlingerThrewAProjectileContainingAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     Projectile                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.FlingerThrewAProjectileContainingAnEnemy");

	AHuskPawn_C_FlingerThrewAProjectileContainingAnEnemy_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.FlingerEnemyFailedToSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     FailedProjectile               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.FlingerEnemyFailedToSpawn");

	AHuskPawn_C_FlingerEnemyFailedToSpawn_Params params;
	params.FailedProjectile = FailedProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.AlertEnemySpawnedByFlinger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PushMomentum                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          PushDuration                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                   OwningFlinger                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::AlertEnemySpawnedByFlinger(const struct FVector& PushMomentum, float PushDuration, class APawn* OwningFlinger)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.AlertEnemySpawnedByFlinger");

	AHuskPawn_C_AlertEnemySpawnedByFlinger_Params params;
	params.PushMomentum = PushMomentum;
	params.PushDuration = PushDuration;
	params.OwningFlinger = OwningFlinger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.FlingerEnemyDied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PawnThatDied                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::FlingerEnemyDied(class APawn* PawnThatDied)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.FlingerEnemyDied");

	AHuskPawn_C_FlingerEnemyDied_Params params;
	params.PawnThatDied = PawnThatDied;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.HuskEvadeStart
// (Public, BlueprintCallable, BlueprintEvent)
void AHuskPawn_C::HuskEvadeStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.HuskEvadeStart");

	AHuskPawn_C_HuskEvadeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.VerifyTakerAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SpecialAttack                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Swoop                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Soul_Suck                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Portal                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.VerifyTakerAttack");

	AHuskPawn_C_VerifyTakerAttack_Params params;
	params.SpecialAttack = SpecialAttack;
	params.Swoop = Swoop;
	params.Soul_Suck = Soul_Suck;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.ResetTakerSpecialAttackTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Swoop                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SoulSuckMelee                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Portal                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.ResetTakerSpecialAttackTimer");

	AHuskPawn_C_ResetTakerSpecialAttackTimer_Params params;
	params.Swoop = Swoop;
	params.SoulSuckMelee = SoulSuckMelee;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.BeginTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)
void AHuskPawn_C::BeginTakerSwoopAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.BeginTakerSwoopAttack");

	AHuskPawn_C_BeginTakerSwoopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.EndTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)
void AHuskPawn_C::EndTakerSwoopAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.EndTakerSwoopAttack");

	AHuskPawn_C_EndTakerSwoopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.TakerWallPortalBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  BuildingPart                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBTTask_BlueprintBase*   Task                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 DesiredMoveLocation            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Debug                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.TakerWallPortalBehavior");

	AHuskPawn_C_TakerWallPortalBehavior_Params params;
	params.BuildingPart = BuildingPart;
	params.Task = Task;
	params.DesiredMoveLocation = DesiredMoveLocation;
	params.Debug = Debug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.IsTakerWallPortalAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Portal_Available_              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::IsTakerWallPortalAvailable(bool Portal_Available_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.IsTakerWallPortalAvailable");

	AHuskPawn_C_IsTakerWallPortalAvailable_Params params;
	params.Portal_Available_ = Portal_Available_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.TakerAttackFSM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SuccessfulHit                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::TakerAttackFSM(bool SuccessfulHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.TakerAttackFSM");

	AHuskPawn_C_TakerAttackFSM_Params params;
	params.SuccessfulHit = SuccessfulHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.TakerSoulSuckSoundBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::TakerSoulSuckSoundBegin(bool Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.TakerSoulSuckSoundBegin");

	AHuskPawn_C_TakerSoulSuckSoundBegin_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.TakerSoulSuckSoundEnd
// (Public, BlueprintCallable, BlueprintEvent)
void AHuskPawn_C::TakerSoulSuckSoundEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.TakerSoulSuckSoundEnd");

	AHuskPawn_C_TakerSoulSuckSoundEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.PortalAdd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABuildingActor*>  BuildingActorList              (Parm, OutParm, ZeroConstructor, ReferenceParm)
void AHuskPawn_C::PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>* BuildingActorList)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.PortalAdd");

	AHuskPawn_C_PortalAdd_Params params;
	params.BuildingActor = BuildingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildingActorList != nullptr)
		*BuildingActorList = params.BuildingActorList;

}


// Function HuskPawn.HuskPawn_C.PortalClear
// (Public, BlueprintCallable, BlueprintEvent)
void AHuskPawn_C::PortalClear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.PortalClear");

	AHuskPawn_C_PortalClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.TakerSoulSuckInterrupted
// (Public, BlueprintCallable, BlueprintEvent)
void AHuskPawn_C::TakerSoulSuckInterrupted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.TakerSoulSuckInterrupted");

	AHuskPawn_C_TakerSoulSuckInterrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.PortalGet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABuildingActor*>  BuildingActorList              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  BT                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::PortalGet(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>* BuildingActorList, class AActor* BT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.PortalGet");

	AHuskPawn_C_PortalGet_Params params;
	params.BuildingActor = BuildingActor;
	params.BT = BT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildingActorList != nullptr)
		*BuildingActorList = params.BuildingActorList;

}


// Function HuskPawn.HuskPawn_C.PortalFX
// (Public, BlueprintCallable, BlueprintEvent)
void AHuskPawn_C::PortalFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.PortalFX");

	AHuskPawn_C_PortalFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.PortalCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Collide_                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::PortalCollision(bool Collide_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.PortalCollision");

	AHuskPawn_C_PortalCollision_Params params;
	params.Collide_ = Collide_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.OnStunnedEffectBegin
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
void AHuskPawn_C::OnStunnedEffectBegin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.OnStunnedEffectBegin");

	AHuskPawn_C_OnStunnedEffectBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.OnStunnedEffectEnd
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
void AHuskPawn_C::OnStunnedEffectEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.OnStunnedEffectEnd");

	AHuskPawn_C_OnStunnedEffectEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.PawnUniqueIDSet
// (Event, Public, BlueprintEvent)
void AHuskPawn_C::PawnUniqueIDSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.PawnUniqueIDSet");

	AHuskPawn_C_PawnUniqueIDSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.OnBeginSleepEffects
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void AHuskPawn_C::OnBeginSleepEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.OnBeginSleepEffects");

	AHuskPawn_C_OnBeginSleepEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.OnEndSleepEffects
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void AHuskPawn_C::OnEndSleepEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.OnEndSleepEffects");

	AHuskPawn_C_OnEndSleepEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.OnLanded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AHuskPawn_C::OnLanded(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.OnLanded");

	AHuskPawn_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AFortPawn*               InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
void AHuskPawn_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.OnDeathPlayEffects");

	AHuskPawn_C_OnDeathPlayEffects_Params params;
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


// Function HuskPawn.HuskPawn_C.MantleStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartPos                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 MidPos                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 EndPos                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           LowWall                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           MidWall                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           FullWall                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           WindowWall                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.MantleStart");

	AHuskPawn_C_MantleStart_Params params;
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


// Function HuskPawn.HuskPawn_C.MantleEnd
// (Public, BlueprintCallable, BlueprintEvent)
void AHuskPawn_C::MantleEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.MantleEnd");

	AHuskPawn_C_MantleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.PlayHuskAdditiveHitReacts
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitDirection                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::PlayHuskAdditiveHitReacts(const struct FVector& HitDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.PlayHuskAdditiveHitReacts");

	AHuskPawn_C_PlayHuskAdditiveHitReacts_Params params;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.AdditiveHitReactDelay
// (BlueprintCallable, BlueprintEvent)
void AHuskPawn_C::AdditiveHitReactDelay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.AdditiveHitReactDelay");

	AHuskPawn_C_AdditiveHitReactDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.ReceiveTick");

	AHuskPawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.OnSpawnedFromRift
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void AHuskPawn_C::OnSpawnedFromRift()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.OnSpawnedFromRift");

	AHuskPawn_C_OnSpawnedFromRift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.OnForceSpawnEffectCompletion
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void AHuskPawn_C::OnForceSpawnEffectCompletion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.OnForceSpawnEffectCompletion");

	AHuskPawn_C_OnForceSpawnEffectCompletion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AHuskPawn_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.ReceiveBeginPlay");

	AHuskPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AFortPawn*               InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
void AHuskPawn_C::OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.OnDamagePlayEffects");

	AHuskPawn_C_OnDamagePlayEffects_Params params;
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


// Function HuskPawn.HuskPawn_C.GameplayCue.Impact.Physical.Creature
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void AHuskPawn_C::GameplayCue_Impact_Physical_Creature(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.GameplayCue.Impact.Physical.Creature");

	AHuskPawn_C_GameplayCue_Impact_Physical_Creature_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn.HuskPawn_C.ExecuteUbergraph_HuskPawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_C::ExecuteUbergraph_HuskPawn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn.HuskPawn_C.ExecuteUbergraph_HuskPawn");

	AHuskPawn_C_ExecuteUbergraph_HuskPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
