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

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnRep_OnPlayerBuiltFloor
// (HasDefaults, BlueprintCallable, BlueprintEvent)
void APlayerPawn_Outlander_C::OnRep_OnPlayerBuiltFloor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnRep_OnPlayerBuiltFloor");

	APlayerPawn_Outlander_C_OnRep_OnPlayerBuiltFloor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void APlayerPawn_Outlander_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.UserConstructionScript");

	APlayerPawn_Outlander_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Phase Shift Activation Timeline__FinishedFunc
// (BlueprintEvent)
void APlayerPawn_Outlander_C::Phase_Shift_Activation_Timeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Phase Shift Activation Timeline__FinishedFunc");

	APlayerPawn_Outlander_C_Phase_Shift_Activation_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Phase Shift Activation Timeline__UpdateFunc
// (BlueprintEvent)
void APlayerPawn_Outlander_C::Phase_Shift_Activation_Timeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Phase Shift Activation Timeline__UpdateFunc");

	APlayerPawn_Outlander_C_Phase_Shift_Activation_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.PhaseShiftHitSweep__FinishedFunc
// (BlueprintEvent)
void APlayerPawn_Outlander_C::PhaseShiftHitSweep__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.PhaseShiftHitSweep__FinishedFunc");

	APlayerPawn_Outlander_C_PhaseShiftHitSweep__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.PhaseShiftHitSweep__UpdateFunc
// (BlueprintEvent)
void APlayerPawn_Outlander_C::PhaseShiftHitSweep__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.PhaseShiftHitSweep__UpdateFunc");

	APlayerPawn_Outlander_C_PhaseShiftHitSweep__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Outlander_C::GameplayCue_Explorer_Fragment(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment");

	APlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Outlander.InTheZone.FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Outlander_C::GameplayCue_Outlander_InTheZone_FX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Outlander.InTheZone.FX");

	APlayerPawn_Outlander_C_GameplayCue_Outlander_InTheZone_FX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnBaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  NewBase                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Outlander_C::OnBaseChanged(class AActor* NewBase)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnBaseChanged");

	APlayerPawn_Outlander_C_OnBaseChanged_Params params;
	params.NewBase = NewBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Outlander_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ReceivePossessed");

	APlayerPawn_Outlander_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment.Offense.PickupFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Outlander_C::GameplayCue_Explorer_Fragment_Offense_PickupFX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment.Offense.PickupFX");

	APlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Offense_PickupFX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment.Defense.PickupFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Outlander_C::GameplayCue_Explorer_Fragment_Defense_PickupFX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment.Defense.PickupFX");

	APlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Defense_PickupFX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment.Specialty.PickupFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Outlander_C::GameplayCue_Explorer_Fragment_Specialty_PickupFX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment.Specialty.PickupFX");

	APlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Specialty_PickupFX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.WithinReachOfTreasure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            VSpawnColor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Activate                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Outlander_C::WithinReachOfTreasure(const struct FLinearColor& VSpawnColor, bool Activate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.WithinReachOfTreasure");

	APlayerPawn_Outlander_C_WithinReachOfTreasure_Params params;
	params.VSpawnColor = VSpawnColor;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Outlander_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Outlander_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Outlander.PhaseShift.AppliedFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Outlander_C::GameplayCue_Outlander_PhaseShift_AppliedFX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Outlander.PhaseShift.AppliedFX");

	APlayerPawn_Outlander_C_GameplayCue_Outlander_PhaseShift_AppliedFX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.RefreshIcons
// (BlueprintCallable, BlueprintEvent)
void APlayerPawn_Outlander_C::RefreshIcons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.RefreshIcons");

	APlayerPawn_Outlander_C_RefreshIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnCharacterPartsReinitialized
// (Event, Protected, BlueprintEvent)
void APlayerPawn_Outlander_C::OnCharacterPartsReinitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnCharacterPartsReinitialized");

	APlayerPawn_Outlander_C_OnCharacterPartsReinitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AFortPawn*               InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
void APlayerPawn_Outlander_C::OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnDamagePlayEffects");

	APlayerPawn_Outlander_C_OnDamagePlayEffects_Params params;
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


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.EventOnDamagePlayFX
// (BlueprintCallable, BlueprintEvent)
void APlayerPawn_Outlander_C::EventOnDamagePlayFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.EventOnDamagePlayFX");

	APlayerPawn_Outlander_C_EventOnDamagePlayFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Outlander.KnockKnock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Outlander_C::GameplayCue_Outlander_KnockKnock(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Outlander.KnockKnock");

	APlayerPawn_Outlander_C_GameplayCue_Outlander_KnockKnock_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Outlander_C::GameplayCue_Abilities_Activation_Outlander_AntiMaterialCharge(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialCharge");

	APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialCharge_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeThruster
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Outlander_C::GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeThruster(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeThruster");

	APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeThruster_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeChargeUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Outlander_C::GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeChargeUp(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeChargeUp");

	APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeChargeUp_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeImpact
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Outlander_C::GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeImpact(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeImpact");

	APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeImpact_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ExecuteUbergraph_PlayerPawn_Outlander
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Outlander_C::ExecuteUbergraph_PlayerPawn_Outlander(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ExecuteUbergraph_PlayerPawn_Outlander");

	APlayerPawn_Outlander_C_ExecuteUbergraph_PlayerPawn_Outlander_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
