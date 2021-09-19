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

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.Landed
// (Public, BlueprintCallable, BlueprintEvent)
void AB_SupplyDropPlacement_C::Landed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.Landed");

	AB_SupplyDropPlacement_C_Landed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.OnRep_bIsLooted
// (BlueprintCallable, BlueprintEvent)
void AB_SupplyDropPlacement_C::OnRep_bIsLooted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.OnRep_bIsLooted");

	AB_SupplyDropPlacement_C_OnRep_bIsLooted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.IsAcceptablePositionForPlacement
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 InLocation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FRotator                InRotation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// class AFortDecoTool*           DecoTool                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bIsCDO                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   OutFailureReason               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AB_SupplyDropPlacement_C::IsAcceptablePositionForPlacement(const struct FVector& InLocation, const struct FRotator& InRotation, class AFortDecoTool* DecoTool, bool bIsCDO, struct FText* OutFailureReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.IsAcceptablePositionForPlacement");

	AB_SupplyDropPlacement_C_IsAcceptablePositionForPlacement_Params params;
	params.InLocation = InLocation;
	params.InRotation = InRotation;
	params.DecoTool = DecoTool;
	params.bIsCDO = bIsCDO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutFailureReason != nullptr)
		*OutFailureReason = params.OutFailureReason;


	return params.ReturnValue;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SetMatOnLevel
// (Public, BlueprintCallable, BlueprintEvent)
void AB_SupplyDropPlacement_C::SetMatOnLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SetMatOnLevel");

	AB_SupplyDropPlacement_C_SetMatOnLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.UpdateLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_SupplyDropPlacement_C::UpdateLocation(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.UpdateLocation");

	AB_SupplyDropPlacement_C_UpdateLocation_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AB_SupplyDropPlacement_C::BlueprintCanInteract(class AFortPawn* InteractingPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BlueprintCanInteract");

	AB_SupplyDropPlacement_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.TurnOnInteract
// (Public, BlueprintCallable, BlueprintEvent)
void AB_SupplyDropPlacement_C::TurnOnInteract()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.TurnOnInteract");

	AB_SupplyDropPlacement_C_TurnOnInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SpawnLoot
// (Public, BlueprintCallable, BlueprintEvent)
void AB_SupplyDropPlacement_C::SpawnLoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SpawnLoot");

	AB_SupplyDropPlacement_C_SpawnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_SupplyDropPlacement_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.UserConstructionScript");

	AB_SupplyDropPlacement_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void AB_SupplyDropPlacement_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.Timeline_0__FinishedFunc");

	AB_SupplyDropPlacement_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void AB_SupplyDropPlacement_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.Timeline_0__UpdateFunc");

	AB_SupplyDropPlacement_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.Timeline_0__StartTrail__EventFunc
// (BlueprintEvent)
void AB_SupplyDropPlacement_C::Timeline_0__StartTrail__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.Timeline_0__StartTrail__EventFunc");

	AB_SupplyDropPlacement_C_Timeline_0__StartTrail__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.Timeline_0__Impact__EventFunc
// (BlueprintEvent)
void AB_SupplyDropPlacement_C::Timeline_0__Impact__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.Timeline_0__Impact__EventFunc");

	AB_SupplyDropPlacement_C_Timeline_0__Impact__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AB_SupplyDropPlacement_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ReceiveBeginPlay");

	AB_SupplyDropPlacement_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_SupplyDropPlacement_C::BlueprintOnInteract(class AFortPawn* InteractingPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BlueprintOnInteract");

	AB_SupplyDropPlacement_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SelfDestruct
// (BlueprintCallable, BlueprintEvent)
void AB_SupplyDropPlacement_C::SelfDestruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SelfDestruct");

	AB_SupplyDropPlacement_C_SelfDestruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
void AB_SupplyDropPlacement_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.OnDeathServer");

	AB_SupplyDropPlacement_C_OnDeathServer_Params params;
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


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ExecuteUbergraph_B_SupplyDropPlacement
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_SupplyDropPlacement_C::ExecuteUbergraph_B_SupplyDropPlacement(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ExecuteUbergraph_B_SupplyDropPlacement");

	AB_SupplyDropPlacement_C_ExecuteUbergraph_B_SupplyDropPlacement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
