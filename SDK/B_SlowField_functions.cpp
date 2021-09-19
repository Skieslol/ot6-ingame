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

// Function B_SlowField.B_SlowField_C.SetTeamColorsVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AB_SlowField_C::SetTeamColorsVFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SlowField.B_SlowField_C.SetTeamColorsVFX");

	AB_SlowField_C_SetTeamColorsVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SlowField.B_SlowField_C.OnRep_IsDeployed
// (BlueprintCallable, BlueprintEvent)
void AB_SlowField_C::OnRep_IsDeployed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SlowField.B_SlowField_C.OnRep_IsDeployed");

	AB_SlowField_C_OnRep_IsDeployed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SlowField.B_SlowField_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_SlowField_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SlowField.B_SlowField_C.UserConstructionScript");

	AB_SlowField_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SlowField.B_SlowField_C.SlowPP__FinishedFunc
// (BlueprintEvent)
void AB_SlowField_C::SlowPP__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SlowField.B_SlowField_C.SlowPP__FinishedFunc");

	AB_SlowField_C_SlowPP__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SlowField.B_SlowField_C.SlowPP__UpdateFunc
// (BlueprintEvent)
void AB_SlowField_C::SlowPP__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SlowField.B_SlowField_C.SlowPP__UpdateFunc");

	AB_SlowField_C_SlowPP__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SlowField.B_SlowField_C.Audio Powerdown__FinishedFunc
// (BlueprintEvent)
void AB_SlowField_C::Audio_Powerdown__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SlowField.B_SlowField_C.Audio Powerdown__FinishedFunc");

	AB_SlowField_C_Audio_Powerdown__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SlowField.B_SlowField_C.Audio Powerdown__UpdateFunc
// (BlueprintEvent)
void AB_SlowField_C::Audio_Powerdown__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SlowField.B_SlowField_C.Audio Powerdown__UpdateFunc");

	AB_SlowField_C_Audio_Powerdown__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SlowField.B_SlowField_C.MaterializeCylinder__FinishedFunc
// (BlueprintEvent)
void AB_SlowField_C::MaterializeCylinder__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SlowField.B_SlowField_C.MaterializeCylinder__FinishedFunc");

	AB_SlowField_C_MaterializeCylinder__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SlowField.B_SlowField_C.MaterializeCylinder__UpdateFunc
// (BlueprintEvent)
void AB_SlowField_C::MaterializeCylinder__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SlowField.B_SlowField_C.MaterializeCylinder__UpdateFunc");

	AB_SlowField_C_MaterializeCylinder__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SlowField.B_SlowField_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AFortPawn*               InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
void AB_SlowField_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SlowField.B_SlowField_C.OnDeathPlayEffects");

	AB_SlowField_C_OnDeathPlayEffects_Params params;
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


// Function B_SlowField.B_SlowField_C.BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_233_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AB_SlowField_C::BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_233_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SlowField.B_SlowField_C.BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_233_ComponentBeginOverlapSignature__DelegateSignature");

	AB_SlowField_C_BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_233_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SlowField.B_SlowField_C.BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_242_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_SlowField_C::BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_242_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SlowField.B_SlowField_C.BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_242_ComponentEndOverlapSignature__DelegateSignature");

	AB_SlowField_C_BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_242_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SlowField.B_SlowField_C.PP_Activate
// (BlueprintCallable, BlueprintEvent)
void AB_SlowField_C::PP_Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SlowField.B_SlowField_C.PP_Activate");

	AB_SlowField_C_PP_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SlowField.B_SlowField_C.PP_Deactivate
// (BlueprintCallable, BlueprintEvent)
void AB_SlowField_C::PP_Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SlowField.B_SlowField_C.PP_Deactivate");

	AB_SlowField_C_PP_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SlowField.B_SlowField_C.PassInfo
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Height                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Activation_Delay               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_SlowField_C::PassInfo(float Height, float Radius, float Activation_Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SlowField.B_SlowField_C.PassInfo");

	AB_SlowField_C_PassInfo_Params params;
	params.Height = Height;
	params.Radius = Radius;
	params.Activation_Delay = Activation_Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SlowField.B_SlowField_C.Beacon Loop
// (BlueprintCallable, BlueprintEvent)
void AB_SlowField_C::Beacon_Loop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SlowField.B_SlowField_C.Beacon Loop");

	AB_SlowField_C_Beacon_Loop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SlowField.B_SlowField_C.BndEvt__ProjMovementComp_K2Node_ComponentBoundEvent_228_OnProjectileBounceDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FVector                 ImpactVelocity                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void AB_SlowField_C::BndEvt__ProjMovementComp_K2Node_ComponentBoundEvent_228_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SlowField.B_SlowField_C.BndEvt__ProjMovementComp_K2Node_ComponentBoundEvent_228_OnProjectileBounceDelegate__DelegateSignature");

	AB_SlowField_C_BndEvt__ProjMovementComp_K2Node_ComponentBoundEvent_228_OnProjectileBounceDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SlowField.B_SlowField_C.OnLocalPlayerDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DeadActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*               InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_SlowField_C::OnLocalPlayerDeath(class AActor* DeadActor, float Damage, class AFortPawn* InstigatedBy, const struct FVector& HitLocation, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SlowField.B_SlowField_C.OnLocalPlayerDeath");

	AB_SlowField_C_OnLocalPlayerDeath_Params params;
	params.DeadActor = DeadActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_SlowField.B_SlowField_C.ExecuteUbergraph_B_SlowField
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_SlowField_C::ExecuteUbergraph_B_SlowField(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_SlowField.B_SlowField_C.ExecuteUbergraph_B_SlowField");

	AB_SlowField_C_ExecuteUbergraph_B_SlowField_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
