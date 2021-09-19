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

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnRep_Left_Right_Gun
// (BlueprintCallable, BlueprintEvent)
void AB_BGA_BotTurret_C::OnRep_Left_Right_Gun()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnRep_Left_Right_Gun");

	AB_BGA_BotTurret_C_OnRep_Left_Right_Gun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.SetTeamColorsVFX
// (Public, BlueprintCallable, BlueprintEvent)
void AB_BGA_BotTurret_C::SetTeamColorsVFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.SetTeamColorsVFX");

	AB_BGA_BotTurret_C_SetTeamColorsVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.UpdateScannerRay
// (Public, BlueprintCallable, BlueprintEvent)
void AB_BGA_BotTurret_C::UpdateScannerRay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.UpdateScannerRay");

	AB_BGA_BotTurret_C_UpdateScannerRay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.AttemptAcquireTarget
// (Public, BlueprintCallable, BlueprintEvent)
void AB_BGA_BotTurret_C::AttemptAcquireTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.AttemptAcquireTarget");

	AB_BGA_BotTurret_C_AttemptAcquireTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.SetFiringTimer
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void AB_BGA_BotTurret_C::SetFiringTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.SetFiringTimer");

	AB_BGA_BotTurret_C_SetFiringTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnPotentialTargetUntouched
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               UntouchedPotentialTarget       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_BotTurret_C::OnPotentialTargetUntouched(class AFortPawn* UntouchedPotentialTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnPotentialTargetUntouched");

	AB_BGA_BotTurret_C_OnPotentialTargetUntouched_Params params;
	params.UntouchedPotentialTarget = UntouchedPotentialTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.ClearFiringTimer
// (Protected, BlueprintCallable, BlueprintEvent)
void AB_BGA_BotTurret_C::ClearFiringTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.ClearFiringTimer");

	AB_BGA_BotTurret_C_ClearFiringTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.ClearTargetAcquisitionTimer
// (Public, BlueprintCallable, BlueprintEvent)
void AB_BGA_BotTurret_C::ClearTargetAcquisitionTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.ClearTargetAcquisitionTimer");

	AB_BGA_BotTurret_C_ClearTargetAcquisitionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.SetTargetAcquisitionTimer
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void AB_BGA_BotTurret_C::SetTargetAcquisitionTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.SetTargetAcquisitionTimer");

	AB_BGA_BotTurret_C_SetTargetAcquisitionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.SetTrackingTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_BotTurret_C::SetTrackingTarget(class AFortPawn* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.SetTrackingTarget");

	AB_BGA_BotTurret_C_SetTrackingTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.IsValidTarget
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               PotentialTarget                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IncludeSimpleRangeCheck        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IncludeFireLimitCheck          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IncludeObstructionCheck        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ValidTarget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_BotTurret_C::IsValidTarget(class AFortPawn* PotentialTarget, bool IncludeSimpleRangeCheck, bool IncludeFireLimitCheck, bool IncludeObstructionCheck, bool* ValidTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.IsValidTarget");

	AB_BGA_BotTurret_C_IsValidTarget_Params params;
	params.PotentialTarget = PotentialTarget;
	params.IncludeSimpleRangeCheck = IncludeSimpleRangeCheck;
	params.IncludeFireLimitCheck = IncludeFireLimitCheck;
	params.IncludeObstructionCheck = IncludeObstructionCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ValidTarget != nullptr)
		*ValidTarget = params.ValidTarget;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnNewPotentialTargetTouched
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               PotentialTargetPawn            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_BotTurret_C::OnNewPotentialTargetTouched(class AFortPawn* PotentialTargetPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnNewPotentialTargetTouched");

	AB_BGA_BotTurret_C_OnNewPotentialTargetTouched_Params params;
	params.PotentialTargetPawn = PotentialTargetPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.Perform_Bot_Rotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LookAtActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_BotTurret_C::Perform_Bot_Rotation(class AActor* LookAtActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.Perform_Bot_Rotation");

	AB_BGA_BotTurret_C_Perform_Bot_Rotation_Params params;
	params.LookAtActor = LookAtActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnRep_NewVar0
// (BlueprintCallable, BlueprintEvent)
void AB_BGA_BotTurret_C::OnRep_NewVar0()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnRep_NewVar0");

	AB_BGA_BotTurret_C_OnRep_NewVar0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnRep_ShootingGun
// (BlueprintCallable, BlueprintEvent)
void AB_BGA_BotTurret_C::OnRep_ShootingGun()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnRep_ShootingGun");

	AB_BGA_BotTurret_C_OnRep_ShootingGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnRep_Target_Location
// (BlueprintCallable, BlueprintEvent)
void AB_BGA_BotTurret_C::OnRep_Target_Location()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnRep_Target_Location");

	AB_BGA_BotTurret_C_OnRep_Target_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_BGA_BotTurret_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.UserConstructionScript");

	AB_BGA_BotTurret_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void AB_BGA_BotTurret_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.Timeline_0__FinishedFunc");

	AB_BGA_BotTurret_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void AB_BGA_BotTurret_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.Timeline_0__UpdateFunc");

	AB_BGA_BotTurret_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.Timeline_2__FinishedFunc
// (BlueprintEvent)
void AB_BGA_BotTurret_C::Timeline_2__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.Timeline_2__FinishedFunc");

	AB_BGA_BotTurret_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.Timeline_2__UpdateFunc
// (BlueprintEvent)
void AB_BGA_BotTurret_C::Timeline_2__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.Timeline_2__UpdateFunc");

	AB_BGA_BotTurret_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AB_BGA_BotTurret_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.ReceiveBeginPlay");

	AB_BGA_BotTurret_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.PassBotInfo
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WarmupTime                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          BotDuration                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          FireRate                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_BotTurret_C::PassBotInfo(float WarmupTime, float BotDuration, float FireRate, float Radius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.PassBotInfo");

	AB_BGA_BotTurret_C_PassBotInfo_Params params;
	params.WarmupTime = WarmupTime;
	params.BotDuration = BotDuration;
	params.FireRate = FireRate;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.Bot_Explode
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AB_BGA_BotTurret_C::Bot_Explode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.Bot_Explode");

	AB_BGA_BotTurret_C_Bot_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
void AB_BGA_BotTurret_C::OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnDamageServer");

	AB_BGA_BotTurret_C_OnDamageServer_Params params;
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


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_BotTurret_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.ReceiveTick");

	AB_BGA_BotTurret_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AB_BGA_BotTurret_C::BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature");

	AB_BGA_BotTurret_C_BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_439_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_BotTurret_C::BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_439_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_439_ComponentEndOverlapSignature__DelegateSignature");

	AB_BGA_BotTurret_C_BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_439_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
void AB_BGA_BotTurret_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnDeathServer");

	AB_BGA_BotTurret_C_OnDeathServer_Params params;
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


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.AttemptFire
// (BlueprintCallable, BlueprintEvent)
void AB_BGA_BotTurret_C::AttemptFire()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.AttemptFire");

	AB_BGA_BotTurret_C_AttemptFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_BGA_BotTurret.B_BGA_BotTurret_C.ExecuteUbergraph_B_BGA_BotTurret
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_BGA_BotTurret_C::ExecuteUbergraph_B_BGA_BotTurret(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_BGA_BotTurret.B_BGA_BotTurret_C.ExecuteUbergraph_B_BGA_BotTurret");

	AB_BGA_BotTurret_C_ExecuteUbergraph_B_BGA_BotTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
