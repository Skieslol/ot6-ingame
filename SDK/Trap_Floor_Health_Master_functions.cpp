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

// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.BP_ShouldTrigger
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>          TouchingActors                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ATrap_Floor_Health_Master_C::BP_ShouldTrigger(TArray<class AActor*> TouchingActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.BP_ShouldTrigger");

	ATrap_Floor_Health_Master_C_BP_ShouldTrigger_Params params;
	params.TouchingActors = TouchingActors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.Active_FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATrap_Floor_Health_Master_C::Active_FX(bool Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.Active_FX");

	ATrap_Floor_Health_Master_C_Active_FX_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.OnRep_Charge_Value
// (BlueprintCallable, BlueprintEvent)
void ATrap_Floor_Health_Master_C::OnRep_Charge_Value()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.OnRep_Charge_Value");

	ATrap_Floor_Health_Master_C_OnRep_Charge_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATrap_Floor_Health_Master_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.UserConstructionScript");

	ATrap_Floor_Health_Master_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.OnReloadEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ATrap_Floor_Health_Master_C::OnReloadEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.OnReloadEnd");

	ATrap_Floor_Health_Master_C_OnReloadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.OnPlaced
// (Event, Public, BlueprintEvent)
void ATrap_Floor_Health_Master_C::OnPlaced()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.OnPlaced");

	ATrap_Floor_Health_Master_C_OnPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)
void ATrap_Floor_Health_Master_C::OnFinishedBuilding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.OnFinishedBuilding");

	ATrap_Floor_Health_Master_C_OnFinishedBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void ATrap_Floor_Health_Master_C::GameplayCue_Abilities_Activation_Traps_ReloadBegin(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin");

	ATrap_Floor_Health_Master_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void ATrap_Floor_Health_Master_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	ATrap_Floor_Health_Master_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ATrap_Floor_Health_Master_C::OnOutOfDurability()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.OnOutOfDurability");

	ATrap_Floor_Health_Master_C_OnOutOfDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_288_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void ATrap_Floor_Health_Master_C::BndEvt__Trigger_K2Node_ComponentBoundEvent_288_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_288_ComponentBeginOverlapSignature__DelegateSignature");

	ATrap_Floor_Health_Master_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_288_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_306_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATrap_Floor_Health_Master_C::BndEvt__Trigger_K2Node_ComponentBoundEvent_306_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_306_ComponentEndOverlapSignature__DelegateSignature");

	ATrap_Floor_Health_Master_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_306_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.OnDamaged_Event_1
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
void ATrap_Floor_Health_Master_C::OnDamaged_Event_1(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.OnDamaged_Event_1");

	ATrap_Floor_Health_Master_C_OnDamaged_Event_1_Params params;
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


// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.ExecuteUbergraph_Trap_Floor_Health_Master
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATrap_Floor_Health_Master_C::ExecuteUbergraph_Trap_Floor_Health_Master(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.ExecuteUbergraph_Trap_Floor_Health_Master");

	ATrap_Floor_Health_Master_C_ExecuteUbergraph_Trap_Floor_Health_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
