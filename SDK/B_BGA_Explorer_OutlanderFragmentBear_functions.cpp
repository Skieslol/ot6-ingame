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

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.OnRep_TargetPawnToTrack
// (BlueprintCallable, BlueprintEvent)
void AB_BGA_Explorer_OutlanderFragmentBear_C::OnRep_TargetPawnToTrack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.OnRep_TargetPawnToTrack");

	AB_BGA_Explorer_OutlanderFragmentBear_C_OnRep_TargetPawnToTrack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ToggleFireCue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_Explorer_OutlanderFragmentBear_C::ToggleFireCue(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ToggleFireCue");

	AB_BGA_Explorer_OutlanderFragmentBear_C_ToggleFireCue_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.Is Pawn Inside Pitch Limits
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bInsidePitchLimits             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_Explorer_OutlanderFragmentBear_C::Is_Pawn_Inside_Pitch_Limits(class AFortPawn* Pawn, bool* bInsidePitchLimits)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.Is Pawn Inside Pitch Limits");

	AB_BGA_Explorer_OutlanderFragmentBear_C_Is_Pawn_Inside_Pitch_Limits_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bInsidePitchLimits != nullptr)
		*bInsidePitchLimits = params.bInsidePitchLimits;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.IsValidTarget
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               PotentialTarget                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bIncludeSimpleRangeCheck       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bIncludeFiringLimitCheck       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bIncludeObstructionCheck       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bValidTarget                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_Explorer_OutlanderFragmentBear_C::IsValidTarget(class AFortPawn* PotentialTarget, bool bIncludeSimpleRangeCheck, bool bIncludeFiringLimitCheck, bool bIncludeObstructionCheck, bool* bValidTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.IsValidTarget");

	AB_BGA_Explorer_OutlanderFragmentBear_C_IsValidTarget_Params params;
	params.PotentialTarget = PotentialTarget;
	params.bIncludeSimpleRangeCheck = bIncludeSimpleRangeCheck;
	params.bIncludeFiringLimitCheck = bIncludeFiringLimitCheck;
	params.bIncludeObstructionCheck = bIncludeObstructionCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bValidTarget != nullptr)
		*bValidTarget = params.bValidTarget;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.OnPotentialTargetUntouched
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               UntouchedPotentialTarget       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_Explorer_OutlanderFragmentBear_C::OnPotentialTargetUntouched(class AFortPawn* UntouchedPotentialTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.OnPotentialTargetUntouched");

	AB_BGA_Explorer_OutlanderFragmentBear_C_OnPotentialTargetUntouched_Params params;
	params.UntouchedPotentialTarget = UntouchedPotentialTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.OnNewPotentialTargetTouched
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               PotentialTargetPawn            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_Explorer_OutlanderFragmentBear_C::OnNewPotentialTargetTouched(class AFortPawn* PotentialTargetPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.OnNewPotentialTargetTouched");

	AB_BGA_Explorer_OutlanderFragmentBear_C_OnNewPotentialTargetTouched_Params params;
	params.PotentialTargetPawn = PotentialTargetPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ShouldFire
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldFire                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_Explorer_OutlanderFragmentBear_C::ShouldFire(bool* ShouldFire)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ShouldFire");

	AB_BGA_Explorer_OutlanderFragmentBear_C_ShouldFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldFire != nullptr)
		*ShouldFire = params.ShouldFire;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ClearTargetAcquisitionTimer
// (Protected, BlueprintCallable, BlueprintEvent)
void AB_BGA_Explorer_OutlanderFragmentBear_C::ClearTargetAcquisitionTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ClearTargetAcquisitionTimer");

	AB_BGA_Explorer_OutlanderFragmentBear_C_ClearTargetAcquisitionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ClearFiringTimer
// (Protected, BlueprintCallable, BlueprintEvent)
void AB_BGA_Explorer_OutlanderFragmentBear_C::ClearFiringTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ClearFiringTimer");

	AB_BGA_Explorer_OutlanderFragmentBear_C_ClearFiringTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.SpawnImpactEffects
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_Explorer_OutlanderFragmentBear_C::SpawnImpactEffects(const struct FVector& HitLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.SpawnImpactEffects");

	AB_BGA_Explorer_OutlanderFragmentBear_C_SpawnImpactEffects_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.SpawnTracer
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bLeftTracer                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_Explorer_OutlanderFragmentBear_C::SpawnTracer(const struct FVector& HitLocation, bool bLeftTracer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.SpawnTracer");

	AB_BGA_Explorer_OutlanderFragmentBear_C_SpawnTracer_Params params;
	params.HitLocation = HitLocation;
	params.bLeftTracer = bLeftTracer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.UpdateRotation
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LookAtActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_Explorer_OutlanderFragmentBear_C::UpdateRotation(class AActor* LookAtActor, float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.UpdateRotation");

	AB_BGA_Explorer_OutlanderFragmentBear_C_UpdateRotation_Params params;
	params.LookAtActor = LookAtActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.SetTargetAcquisitionTimer
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void AB_BGA_Explorer_OutlanderFragmentBear_C::SetTargetAcquisitionTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.SetTargetAcquisitionTimer");

	AB_BGA_Explorer_OutlanderFragmentBear_C_SetTargetAcquisitionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.SetFiringTimer
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void AB_BGA_Explorer_OutlanderFragmentBear_C::SetFiringTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.SetFiringTimer");

	AB_BGA_Explorer_OutlanderFragmentBear_C_SetFiringTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.AttemptFire
// (Public, BlueprintCallable, BlueprintEvent)
void AB_BGA_Explorer_OutlanderFragmentBear_C::AttemptFire()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.AttemptFire");

	AB_BGA_Explorer_OutlanderFragmentBear_C_AttemptFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.AttemptAcquireTarget
// (Public, BlueprintCallable, BlueprintEvent)
void AB_BGA_Explorer_OutlanderFragmentBear_C::AttemptAcquireTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.AttemptAcquireTarget");

	AB_BGA_Explorer_OutlanderFragmentBear_C_AttemptAcquireTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.GetTargetingSourceTransform
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteGame_EFortAbilityTargetingSource> Source                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform AB_BGA_Explorer_OutlanderFragmentBear_C::GetTargetingSourceTransform(TEnumAsByte<FortniteGame_EFortAbilityTargetingSource> Source)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.GetTargetingSourceTransform");

	AB_BGA_Explorer_OutlanderFragmentBear_C_GetTargetingSourceTransform_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_BGA_Explorer_OutlanderFragmentBear_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.UserConstructionScript");

	AB_BGA_Explorer_OutlanderFragmentBear_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AB_BGA_Explorer_OutlanderFragmentBear_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ReceiveBeginPlay");

	AB_BGA_Explorer_OutlanderFragmentBear_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.GameplayCue.Impact.Physical
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void AB_BGA_Explorer_OutlanderFragmentBear_C::GameplayCue_Impact_Physical(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.GameplayCue.Impact.Physical");

	AB_BGA_Explorer_OutlanderFragmentBear_C_GameplayCue_Impact_Physical_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_Explorer_OutlanderFragmentBear_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ReceiveTick");

	AB_BGA_Explorer_OutlanderFragmentBear_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AFortPawn*               InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
void AB_BGA_Explorer_OutlanderFragmentBear_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.OnDeathPlayEffects");

	AB_BGA_Explorer_OutlanderFragmentBear_C_OnDeathPlayEffects_Params params;
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


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
void AB_BGA_Explorer_OutlanderFragmentBear_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.OnDeathServer");

	AB_BGA_Explorer_OutlanderFragmentBear_C_OnDeathServer_Params params;
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


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AB_BGA_Explorer_OutlanderFragmentBear_C::BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature");

	AB_BGA_Explorer_OutlanderFragmentBear_C_BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_Explorer_OutlanderFragmentBear_C::BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature");

	AB_BGA_Explorer_OutlanderFragmentBear_C_BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.KilledTargetPawn
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AB_BGA_Explorer_OutlanderFragmentBear_C::KilledTargetPawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.KilledTargetPawn");

	AB_BGA_Explorer_OutlanderFragmentBear_C_KilledTargetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.GameplayCue.Weapons.Activation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void AB_BGA_Explorer_OutlanderFragmentBear_C::GameplayCue_Weapons_Activation(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.GameplayCue.Weapons.Activation");

	AB_BGA_Explorer_OutlanderFragmentBear_C_GameplayCue_Weapons_Activation_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.SetTargetPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               NewTargetPawn                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_Explorer_OutlanderFragmentBear_C::SetTargetPawn(class AFortPawn* NewTargetPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.SetTargetPawn");

	AB_BGA_Explorer_OutlanderFragmentBear_C_SetTargetPawn_Params params;
	params.NewTargetPawn = NewTargetPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.OnTargetPawnDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     FHitComponent                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_Explorer_OutlanderFragmentBear_C::OnTargetPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.OnTargetPawnDied");

	AB_BGA_Explorer_OutlanderFragmentBear_C_OnTargetPawnDied_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.Bearricade
// (BlueprintCallable, BlueprintEvent)
void AB_BGA_Explorer_OutlanderFragmentBear_C::Bearricade()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.Bearricade");

	AB_BGA_Explorer_OutlanderFragmentBear_C_Bearricade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ExecuteUbergraph_B_BGA_Explorer_OutlanderFragmentBear
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_Explorer_OutlanderFragmentBear_C::ExecuteUbergraph_B_BGA_Explorer_OutlanderFragmentBear(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ExecuteUbergraph_B_BGA_Explorer_OutlanderFragmentBear");

	AB_BGA_Explorer_OutlanderFragmentBear_C_ExecuteUbergraph_B_BGA_Explorer_OutlanderFragmentBear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
