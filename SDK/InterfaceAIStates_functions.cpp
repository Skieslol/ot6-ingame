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

// Function InterfaceAIStates.InterfaceAIStates_C.PortalCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Collide_                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInterfaceAIStates_C::PortalCollision(bool Collide_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.PortalCollision");

	UInterfaceAIStates_C_PortalCollision_Params params;
	params.Collide_ = Collide_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InterfaceAIStates.InterfaceAIStates_C.PortalFX
// (Public, BlueprintCallable, BlueprintEvent)
void UInterfaceAIStates_C::PortalFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.PortalFX");

	UInterfaceAIStates_C_PortalFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InterfaceAIStates.InterfaceAIStates_C.PortalGet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABuildingActor*>  BuildingActorList              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  BT                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInterfaceAIStates_C::PortalGet(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>* BuildingActorList, class AActor* BT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.PortalGet");

	UInterfaceAIStates_C_PortalGet_Params params;
	params.BuildingActor = BuildingActor;
	params.BT = BT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildingActorList != nullptr)
		*BuildingActorList = params.BuildingActorList;

}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckInterrupted
// (Public, BlueprintCallable, BlueprintEvent)
void UInterfaceAIStates_C::TakerSoulSuckInterrupted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckInterrupted");

	UInterfaceAIStates_C_TakerSoulSuckInterrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InterfaceAIStates.InterfaceAIStates_C.PortalClear
// (Public, BlueprintCallable, BlueprintEvent)
void UInterfaceAIStates_C::PortalClear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.PortalClear");

	UInterfaceAIStates_C_PortalClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InterfaceAIStates.InterfaceAIStates_C.PortalAdd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABuildingActor*>  BuildingActorList              (Parm, OutParm, ZeroConstructor, ReferenceParm)
void UInterfaceAIStates_C::PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>* BuildingActorList)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.PortalAdd");

	UInterfaceAIStates_C_PortalAdd_Params params;
	params.BuildingActor = BuildingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildingActorList != nullptr)
		*BuildingActorList = params.BuildingActorList;

}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundEnd
// (Public, BlueprintCallable, BlueprintEvent)
void UInterfaceAIStates_C::TakerSoulSuckSoundEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundEnd");

	UInterfaceAIStates_C_TakerSoulSuckSoundEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInterfaceAIStates_C::TakerSoulSuckSoundBegin(bool Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundBegin");

	UInterfaceAIStates_C_TakerSoulSuckSoundBegin_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerAttackFSM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SuccessfulHit                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInterfaceAIStates_C::TakerAttackFSM(bool SuccessfulHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.TakerAttackFSM");

	UInterfaceAIStates_C_TakerAttackFSM_Params params;
	params.SuccessfulHit = SuccessfulHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InterfaceAIStates.InterfaceAIStates_C.IsTakerWallPortalAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Portal_Available_              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInterfaceAIStates_C::IsTakerWallPortalAvailable(bool Portal_Available_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.IsTakerWallPortalAvailable");

	UInterfaceAIStates_C_IsTakerWallPortalAvailable_Params params;
	params.Portal_Available_ = Portal_Available_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InterfaceAIStates.InterfaceAIStates_C.TakerWallPortalBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  BuildingPart                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBTTask_BlueprintBase*   Task                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 DesiredMoveLocation            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Debug                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInterfaceAIStates_C::TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.TakerWallPortalBehavior");

	UInterfaceAIStates_C_TakerWallPortalBehavior_Params params;
	params.BuildingPart = BuildingPart;
	params.Task = Task;
	params.DesiredMoveLocation = DesiredMoveLocation;
	params.Debug = Debug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InterfaceAIStates.InterfaceAIStates_C.EndTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)
void UInterfaceAIStates_C::EndTakerSwoopAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.EndTakerSwoopAttack");

	UInterfaceAIStates_C_EndTakerSwoopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InterfaceAIStates.InterfaceAIStates_C.BeginTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)
void UInterfaceAIStates_C::BeginTakerSwoopAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.BeginTakerSwoopAttack");

	UInterfaceAIStates_C_BeginTakerSwoopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InterfaceAIStates.InterfaceAIStates_C.ResetTakerSpecialAttackTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Swoop                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SoulSuckMelee                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Portal                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInterfaceAIStates_C::ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.ResetTakerSpecialAttackTimer");

	UInterfaceAIStates_C_ResetTakerSpecialAttackTimer_Params params;
	params.Swoop = Swoop;
	params.SoulSuckMelee = SoulSuckMelee;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InterfaceAIStates.InterfaceAIStates_C.VerifyTakerAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SpecialAttack                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Swoop                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Soul_Suck                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Portal                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInterfaceAIStates_C::VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.VerifyTakerAttack");

	UInterfaceAIStates_C_VerifyTakerAttack_Params params;
	params.SpecialAttack = SpecialAttack;
	params.Swoop = Swoop;
	params.Soul_Suck = Soul_Suck;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InterfaceAIStates.InterfaceAIStates_C.HuskEvadeStart
// (Public, BlueprintCallable, BlueprintEvent)
void UInterfaceAIStates_C::HuskEvadeStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.HuskEvadeStart");

	UInterfaceAIStates_C_HuskEvadeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InterfaceAIStates.InterfaceAIStates_C.MantleEnd
// (Public, BlueprintCallable, BlueprintEvent)
void UInterfaceAIStates_C::MantleEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.MantleEnd");

	UInterfaceAIStates_C_MantleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InterfaceAIStates.InterfaceAIStates_C.MantleStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartPos                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 MidPos                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 EndPos                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           LowWall                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           MidWall                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           FullWall                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           WindowWall                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInterfaceAIStates_C::MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InterfaceAIStates.InterfaceAIStates_C.MantleStart");

	UInterfaceAIStates_C_MantleStart_Params params;
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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
