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

// Function B_Teleporter.B_Teleporter_C.InternalSetActive
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Teleporter_C::InternalSetActive(bool bActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.InternalSetActive");

	AB_Teleporter_C_InternalSetActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.TriggerRechargeInternal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
void AB_Teleporter_C::TriggerRechargeInternal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.TriggerRechargeInternal");

	AB_Teleporter_C_TriggerRechargeInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.OnRep_TeleporterArrowColor
// (BlueprintCallable, BlueprintEvent)
void AB_Teleporter_C::OnRep_TeleporterArrowColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.OnRep_TeleporterArrowColor");

	AB_Teleporter_C_OnRep_TeleporterArrowColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.OnRep_bRecharging
// (BlueprintCallable, BlueprintEvent)
void AB_Teleporter_C::OnRep_bRecharging()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.OnRep_bRecharging");

	AB_Teleporter_C_OnRep_bRecharging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.InitializeTeleporter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewMaxRange                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          NewRechargeDecay               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            TeleporterArrowColor           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Teleporter_C::InitializeTeleporter(float NewMaxRange, float NewRechargeDecay, const struct FLinearColor& TeleporterArrowColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.InitializeTeleporter");

	AB_Teleporter_C_InitializeTeleporter_Params params;
	params.NewMaxRange = NewMaxRange;
	params.NewRechargeDecay = NewRechargeDecay;
	params.TeleporterArrowColor = TeleporterArrowColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.SetShowGlow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Teleporter_C::SetShowGlow(bool Show)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.SetShowGlow");

	AB_Teleporter_C_SetShowGlow_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.UpdateGlowVisuals
// (Public, BlueprintCallable, BlueprintEvent)
void AB_Teleporter_C::UpdateGlowVisuals()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.UpdateGlowVisuals");

	AB_Teleporter_C_UpdateGlowVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.OnRep_bBeingCarried
// (BlueprintCallable, BlueprintEvent)
void AB_Teleporter_C::OnRep_bBeingCarried()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.OnRep_bBeingCarried");

	AB_Teleporter_C_OnRep_bBeingCarried_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.UpdateTargetTeleporterLocation
// (Public, BlueprintCallable, BlueprintEvent)
void AB_Teleporter_C::UpdateTargetTeleporterLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.UpdateTargetTeleporterLocation");

	AB_Teleporter_C_UpdateTargetTeleporterLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.IsAcceptablePositionForPlacement
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 InLocation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FRotator                InRotation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// class AFortDecoTool*           DecoTool                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bIsCDO                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   OutFailureReason               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AB_Teleporter_C::IsAcceptablePositionForPlacement(const struct FVector& InLocation, const struct FRotator& InRotation, class AFortDecoTool* DecoTool, bool bIsCDO, struct FText* OutFailureReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.IsAcceptablePositionForPlacement");

	AB_Teleporter_C_IsAcceptablePositionForPlacement_Params params;
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


// Function B_Teleporter.B_Teleporter_C.OnRep_TeleportCount
// (BlueprintCallable, BlueprintEvent)
void AB_Teleporter_C::OnRep_TeleportCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.OnRep_TeleportCount");

	AB_Teleporter_C_OnRep_TeleportCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.TriggerRecharge
// (Private, BlueprintCallable, BlueprintEvent)
void AB_Teleporter_C::TriggerRecharge()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.TriggerRecharge");

	AB_Teleporter_C_TriggerRecharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.RechargeComplete
// (Private, BlueprintCallable, BlueprintEvent)
void AB_Teleporter_C::RechargeComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.RechargeComplete");

	AB_Teleporter_C_RechargeComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.OnRep_bTeleporterActive
// (BlueprintCallable, BlueprintEvent)
void AB_Teleporter_C::OnRep_bTeleporterActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.OnRep_bTeleporterActive");

	AB_Teleporter_C_OnRep_bTeleporterActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.IsExclusivelyActive
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Teleporter_C::IsExclusivelyActive(bool* IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.IsExclusivelyActive");

	AB_Teleporter_C_IsExclusivelyActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;

}


// Function B_Teleporter.B_Teleporter_C.UpdateTeleportersActive
// (Private, BlueprintCallable, BlueprintEvent)
void AB_Teleporter_C::UpdateTeleportersActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.UpdateTeleportersActive");

	AB_Teleporter_C_UpdateTeleportersActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.IsValidActorToTeleport
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToTeleport                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ValidActor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Teleporter_C::IsValidActorToTeleport(class AActor* ActorToTeleport, bool* ValidActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.IsValidActorToTeleport");

	AB_Teleporter_C_IsValidActorToTeleport_Params params;
	params.ActorToTeleport = ActorToTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ValidActor != nullptr)
		*ValidActor = params.ValidActor;

}


// Function B_Teleporter.B_Teleporter_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText AB_Teleporter_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.BlueprintGetInteractionString");

	AB_Teleporter_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function B_Teleporter.B_Teleporter_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AB_Teleporter_C::BlueprintCanInteract(class AFortPawn* InteractingPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.BlueprintCanInteract");

	AB_Teleporter_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function B_Teleporter.B_Teleporter_C.TeleportToTarget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToTeleport                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Teleporter_C::TeleportToTarget(class AActor* ActorToTeleport)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.TeleportToTarget");

	AB_Teleporter_C_TeleportToTarget_Params params;
	params.ActorToTeleport = ActorToTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.SetTargetTeleporter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_Teleporter_C*         NewTarget                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Teleporter_C::SetTargetTeleporter(class AB_Teleporter_C* NewTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.SetTargetTeleporter");

	AB_Teleporter_C_SetTargetTeleporter_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_Teleporter_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.UserConstructionScript");

	AB_Teleporter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.RingSpeedUp__FinishedFunc
// (BlueprintEvent)
void AB_Teleporter_C::RingSpeedUp__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.RingSpeedUp__FinishedFunc");

	AB_Teleporter_C_RingSpeedUp__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.RingSpeedUp__UpdateFunc
// (BlueprintEvent)
void AB_Teleporter_C::RingSpeedUp__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.RingSpeedUp__UpdateFunc");

	AB_Teleporter_C_RingSpeedUp__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.GlowMaterialTransitionIn__FinishedFunc
// (BlueprintEvent)
void AB_Teleporter_C::GlowMaterialTransitionIn__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.GlowMaterialTransitionIn__FinishedFunc");

	AB_Teleporter_C_GlowMaterialTransitionIn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.GlowMaterialTransitionIn__UpdateFunc
// (BlueprintEvent)
void AB_Teleporter_C::GlowMaterialTransitionIn__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.GlowMaterialTransitionIn__UpdateFunc");

	AB_Teleporter_C_GlowMaterialTransitionIn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.GlowMaterialTransitionOut__FinishedFunc
// (BlueprintEvent)
void AB_Teleporter_C::GlowMaterialTransitionOut__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.GlowMaterialTransitionOut__FinishedFunc");

	AB_Teleporter_C_GlowMaterialTransitionOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.GlowMaterialTransitionOut__UpdateFunc
// (BlueprintEvent)
void AB_Teleporter_C::GlowMaterialTransitionOut__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.GlowMaterialTransitionOut__UpdateFunc");

	AB_Teleporter_C_GlowMaterialTransitionOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.LightrayFade__FinishedFunc
// (BlueprintEvent)
void AB_Teleporter_C::LightrayFade__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.LightrayFade__FinishedFunc");

	AB_Teleporter_C_LightrayFade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.LightrayFade__UpdateFunc
// (BlueprintEvent)
void AB_Teleporter_C::LightrayFade__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.LightrayFade__UpdateFunc");

	AB_Teleporter_C_LightrayFade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.RotateArrowTimeline__FinishedFunc
// (BlueprintEvent)
void AB_Teleporter_C::RotateArrowTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.RotateArrowTimeline__FinishedFunc");

	AB_Teleporter_C_RotateArrowTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.RotateArrowTimeline__UpdateFunc
// (BlueprintEvent)
void AB_Teleporter_C::RotateArrowTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.RotateArrowTimeline__UpdateFunc");

	AB_Teleporter_C_RotateArrowTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.ScaleLoadingRings__FinishedFunc
// (BlueprintEvent)
void AB_Teleporter_C::ScaleLoadingRings__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.ScaleLoadingRings__FinishedFunc");

	AB_Teleporter_C_ScaleLoadingRings__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.ScaleLoadingRings__UpdateFunc
// (BlueprintEvent)
void AB_Teleporter_C::ScaleLoadingRings__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.ScaleLoadingRings__UpdateFunc");

	AB_Teleporter_C_ScaleLoadingRings__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.PostProcessTL__FinishedFunc
// (BlueprintEvent)
void AB_Teleporter_C::PostProcessTL__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.PostProcessTL__FinishedFunc");

	AB_Teleporter_C_PostProcessTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.PostProcessTL__UpdateFunc
// (BlueprintEvent)
void AB_Teleporter_C::PostProcessTL__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.PostProcessTL__UpdateFunc");

	AB_Teleporter_C_PostProcessTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Teleporter_C::BlueprintOnInteract(class AFortPawn* InteractingPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.BlueprintOnInteract");

	AB_Teleporter_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.OnComponentBeginOverlap_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AB_Teleporter_C::OnComponentBeginOverlap_Event_1(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.OnComponentBeginOverlap_Event_1");

	AB_Teleporter_C_OnComponentBeginOverlap_Event_1_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
void AB_Teleporter_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.OnDeathServer");

	AB_Teleporter_C_OnDeathServer_Params params;
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


// Function B_Teleporter.B_Teleporter_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void AB_Teleporter_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.ReceiveDestroyed");

	AB_Teleporter_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.OnActiveChanged
// (BlueprintCallable, BlueprintEvent)
void AB_Teleporter_C::OnActiveChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.OnActiveChanged");

	AB_Teleporter_C_OnActiveChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.DirectionalRayActivate
// (BlueprintCallable, BlueprintEvent)
void AB_Teleporter_C::DirectionalRayActivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.DirectionalRayActivate");

	AB_Teleporter_C_DirectionalRayActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.DirectionalRayDeactivate
// (BlueprintCallable, BlueprintEvent)
void AB_Teleporter_C::DirectionalRayDeactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.DirectionalRayDeactivate");

	AB_Teleporter_C_DirectionalRayDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.UpdateArrowDirection
// (BlueprintCallable, BlueprintEvent)
void AB_Teleporter_C::UpdateArrowDirection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.UpdateArrowDirection");

	AB_Teleporter_C_UpdateArrowDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.OnRechargingChanged
// (BlueprintCallable, BlueprintEvent)
void AB_Teleporter_C::OnRechargingChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.OnRechargingChanged");

	AB_Teleporter_C_OnRechargingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.OnWorldReady
// (Event, Public, BlueprintEvent)
void AB_Teleporter_C::OnWorldReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.OnWorldReady");

	AB_Teleporter_C_OnWorldReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AFortPawn*               InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
void AB_Teleporter_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.OnDeathPlayEffects");

	AB_Teleporter_C_OnDeathPlayEffects_Params params;
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


// Function B_Teleporter.B_Teleporter_C.ClientActorsTeleported
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TeleportedActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Teleporter_C::ClientActorsTeleported(class AActor* TeleportedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.ClientActorsTeleported");

	AB_Teleporter_C_ClientActorsTeleported_Params params;
	params.TeleportedActor = TeleportedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Teleporter.B_Teleporter_C.ExecuteUbergraph_B_Teleporter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Teleporter_C::ExecuteUbergraph_B_Teleporter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Teleporter.B_Teleporter_C.ExecuteUbergraph_B_Teleporter");

	AB_Teleporter_C_ExecuteUbergraph_B_Teleporter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
