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

// Function B_Ranged_Generic.B_Ranged_Generic_C.IsUsingFirstPersonCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           UsingFirstPerson               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Ranged_Generic_C::IsUsingFirstPersonCamera(bool* UsingFirstPerson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.IsUsingFirstPersonCamera");

	AB_Ranged_Generic_C_IsUsingFirstPersonCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UsingFirstPerson != nullptr)
		*UsingFirstPerson = params.UsingFirstPerson;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Shell FX On Fire Update
// (Public, BlueprintCallable, BlueprintEvent)
void AB_Ranged_Generic_C::Shell_FX_On_Fire_Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.Shell FX On Fire Update");

	AB_Ranged_Generic_C_Shell_FX_On_Fire_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.IsUsingScope
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           UsingScope                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Ranged_Generic_C::IsUsingScope(bool* UsingScope)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.IsUsingScope");

	AB_Ranged_Generic_C_IsUsingScope_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UsingScope != nullptr)
		*UsingScope = params.UsingScope;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.GetMuzzleLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector AB_Ranged_Generic_C::GetMuzzleLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.GetMuzzleLocation");

	AB_Ranged_Generic_C_GetMuzzleLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteGame_EFortReloadFXState> Selection                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Ranged_Generic_C::Muzzle_Play_Reload_FX(TEnumAsByte<FortniteGame_EFortReloadFXState> Selection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX");

	AB_Ranged_Generic_C_Muzzle_Play_Reload_FX_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Ranged_Generic_C::Muzzle_Flash_FX(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX");

	AB_Ranged_Generic_C_Muzzle_Flash_FX_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity
// (Public, BlueprintCallable, BlueprintEvent)
void AB_Ranged_Generic_C::SetWpnRarity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity");

	AB_Ranged_Generic_C_SetWpnRarity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale
// (Public, BlueprintCallable, BlueprintEvent)
void AB_Ranged_Generic_C::AddRandomScale()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale");

	AB_Ranged_Generic_C_AddRandomScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AB_Ranged_Generic_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript");

	AB_Ranged_Generic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc
// (BlueprintEvent)
void AB_Ranged_Generic_C::AnimateScopePostProcess__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc");

	AB_Ranged_Generic_C_AnimateScopePostProcess__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc
// (BlueprintEvent)
void AB_Ranged_Generic_C::AnimateScopePostProcess__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc");

	AB_Ranged_Generic_C_AnimateScopePostProcess__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bPersistentFire                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Ranged_Generic_C::OnPlayWeaponFireFX(bool bPersistentFire)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX");

	AB_Ranged_Generic_C_OnPlayWeaponFireFX_Params params;
	params.bPersistentFire = bPersistentFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void AB_Ranged_Generic_C::OnStopWeaponFireFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX");

	AB_Ranged_Generic_C_OnStopWeaponFireFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.GameplayCue.Impact
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void AB_Ranged_Generic_C::GameplayCue_Impact(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.GameplayCue.Impact");

	AB_Ranged_Generic_C_GameplayCue_Impact_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteGame_EFortReloadFXState> ReloadStage                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Ranged_Generic_C::OnPlayReloadFX(TEnumAsByte<FortniteGame_EFortReloadFXState> ReloadStage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX");

	AB_Ranged_Generic_C_OnPlayReloadFX_Params params;
	params.ReloadStage = ReloadStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onFire)
// (BlueprintCallable, BlueprintEvent)
void AB_Ranged_Generic_C::ShellsON__onFire_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onFire)");

	AB_Ranged_Generic_C_ShellsON__onFire__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellsOFF_(onFire)
// (BlueprintCallable, BlueprintEvent)
void AB_Ranged_Generic_C::ShellsOFF__onFire_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ShellsOFF_(onFire)");

	AB_Ranged_Generic_C_ShellsOFF__onFire__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewIsTargeting                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Ranged_Generic_C::OnSetTargeting(bool bNewIsTargeting)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting");

	AB_Ranged_Generic_C_OnSetTargeting_Params params;
	params.bNewIsTargeting = bNewIsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)
void AB_Ranged_Generic_C::K2_OnUnEquip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip");

	AB_Ranged_Generic_C_K2_OnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables
// (BlueprintCallable, BlueprintEvent)
void AB_Ranged_Generic_C::InitializeScopeVariables()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables");

	AB_Ranged_Generic_C_InitializeScopeVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable_Or_Disable              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            StencilBufferValue             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Ranged_Generic_C::Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int StencilBufferValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths");

	AB_Ranged_Generic_C_Update_Enemy_Custom_Depths_Params params;
	params.Enable_Or_Disable = Enable_Or_Disable;
	params.StencilBufferValue = StencilBufferValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayImpactFX
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TEnumAsByte<Engine_EPhysicalSurface> ImpactPhysicalSurface          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent* SpawnedPSC                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Ranged_Generic_C::OnPlayImpactFX(const struct FHitResult& HitResult, TEnumAsByte<Engine_EPhysicalSurface> ImpactPhysicalSurface, class UParticleSystemComponent* SpawnedPSC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayImpactFX");

	AB_Ranged_Generic_C_OnPlayImpactFX_Params params;
	params.HitResult = HitResult;
	params.ImpactPhysicalSurface = ImpactPhysicalSurface;
	params.SpawnedPSC = SpawnedPSC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnAmmoCountChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void AB_Ranged_Generic_C::OnAmmoCountChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnAmmoCountChanged");

	AB_Ranged_Generic_C_OnAmmoCountChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
void AB_Ranged_Generic_C::OnWeaponAttached()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached");

	AB_Ranged_Generic_C_OnWeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortAlterationItemDefinition* NewAlteration                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Ranged_Generic_C::OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration");

	AB_Ranged_Generic_C_OnInitAlteration_Params params;
	params.NewAlteration = NewAlteration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortCosmeticModification CosmeticMod                    (Parm)
// class UMaterialInstanceDynamic* DynamicMaterialInstance        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Ranged_Generic_C::OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod, class UMaterialInstanceDynamic* DynamicMaterialInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations");

	AB_Ranged_Generic_C_OnInitCosmeticAlterations_Params params;
	params.CosmeticMod = CosmeticMod;
	params.DynamicMaterialInstance = DynamicMaterialInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Ranged_Generic_C::ExecuteUbergraph_B_Ranged_Generic(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic");

	AB_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
