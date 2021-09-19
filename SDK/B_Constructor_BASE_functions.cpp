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

// Function B_Constructor_BASE.B_Constructor_BASE_C.BaseSelfApplyGameplaySpec
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectSpecHandle GE_Spec                        (Parm)
void AB_Constructor_BASE_C::BaseSelfApplyGameplaySpec(const struct FGameplayEffectSpecHandle& GE_Spec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.BaseSelfApplyGameplaySpec");

	AB_Constructor_BASE_C_BaseSelfApplyGameplaySpec_Params params;
	params.GE_Spec = GE_Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetBaseVisualGlow
// (Public, BlueprintCallable, BlueprintEvent)
void AB_Constructor_BASE_C::SetBaseVisualGlow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.SetBaseVisualGlow");

	AB_Constructor_BASE_C_SetBaseVisualGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetDamageMultiplier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AB_Constructor_BASE_C::SetDamageMultiplier()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.SetDamageMultiplier");

	AB_Constructor_BASE_C_SetDamageMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_CollectResources
// (BlueprintCallable, BlueprintEvent)
void AB_Constructor_BASE_C::OnRep_CollectResources()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_CollectResources");

	AB_Constructor_BASE_C_OnRep_CollectResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText AB_Constructor_BASE_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintGetInteractionString");

	AB_Constructor_BASE_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.AddResourceToStack
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructRecyclingResource RecyclingResource              (Parm)
// int                            AmountToSpawn                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorldItemDefinition* Stored_Resource                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStructRecyclingResource SetValue                       (Parm, OutParm)
void AB_Constructor_BASE_C::AddResourceToStack(const struct FStructRecyclingResource& RecyclingResource, int AmountToSpawn, class UFortWorldItemDefinition* Stored_Resource, struct FStructRecyclingResource* SetValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.AddResourceToStack");

	AB_Constructor_BASE_C_AddResourceToStack_Params params;
	params.RecyclingResource = RecyclingResource;
	params.AmountToSpawn = AmountToSpawn;
	params.Stored_Resource = Stored_Resource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SetValue != nullptr)
		*SetValue = params.SetValue;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SpawnResourceForRecycling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItemDefinition* ItemDefinition                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            AmountToSpawn                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<FortniteGame_EFortResourceType> ResourceType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Constructor_BASE_C::SpawnResourceForRecycling(class UFortWorldItemDefinition* ItemDefinition, int AmountToSpawn, TEnumAsByte<FortniteGame_EFortResourceType> ResourceType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.SpawnResourceForRecycling");

	AB_Constructor_BASE_C_SpawnResourceForRecycling_Params params;
	params.ItemDefinition = ItemDefinition;
	params.AmountToSpawn = AmountToSpawn;
	params.ResourceType = ResourceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AB_Constructor_BASE_C::BlueprintCanInteract(class AFortPawn* InteractingPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintCanInteract");

	AB_Constructor_BASE_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function B_Constructor_BASE.B_Constructor_BASE_C.AddGEToBaseArray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBASEGameplayEffect> BaseArray                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                  GameplayEffect                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            LevelOverride                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Constructor_BASE_C::AddGEToBaseArray(TArray<struct FBASEGameplayEffect>* BaseArray, class UClass* GameplayEffect, int LevelOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.AddGEToBaseArray");

	AB_Constructor_BASE_C_AddGEToBaseArray_Params params;
	params.GameplayEffect = GameplayEffect;
	params.LevelOverride = LevelOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BaseArray != nullptr)
		*BaseArray = params.BaseArray;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_NumbPlayersNearBase
// (BlueprintCallable, BlueprintEvent)
void AB_Constructor_BASE_C::OnRep_NumbPlayersNearBase()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_NumbPlayersNearBase");

	AB_Constructor_BASE_C_OnRep_NumbPlayersNearBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_BaseIsPlaced
// (BlueprintCallable, BlueprintEvent)
void AB_Constructor_BASE_C::OnRep_BaseIsPlaced()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_BaseIsPlaced");

	AB_Constructor_BASE_C_OnRep_BaseIsPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.RecycleResources
// (Public, BlueprintCallable, BlueprintEvent)
void AB_Constructor_BASE_C::RecycleResources()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.RecycleResources");

	AB_Constructor_BASE_C_RecycleResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupHostileEffects
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FBASEGameplayEffect> HostileEffects                 (Parm, OutParm, ZeroConstructor)
void AB_Constructor_BASE_C::SetupHostileEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* HostileEffects)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.SetupHostileEffects");

	AB_Constructor_BASE_C_SetupHostileEffects_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HostileEffects != nullptr)
		*HostileEffects = params.HostileEffects;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupFriendlyEffects
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FBASEGameplayEffect> FriendlyEffects                (Parm, OutParm, ZeroConstructor)
void AB_Constructor_BASE_C::SetupFriendlyEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* FriendlyEffects)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.SetupFriendlyEffects");

	AB_Constructor_BASE_C_SetupFriendlyEffects_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FriendlyEffects != nullptr)
		*FriendlyEffects = params.FriendlyEffects;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupBuildingEffects
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FBASEGameplayEffect> BuildingEffects                (Parm, OutParm, ZeroConstructor)
void AB_Constructor_BASE_C::SetupBuildingEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* BuildingEffects)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.SetupBuildingEffects");

	AB_Constructor_BASE_C_SetupBuildingEffects_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildingEffects != nullptr)
		*BuildingEffects = params.BuildingEffects;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.Setup Base Effect Array
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* Instigator_Ability_System      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FBASEGameplayEffect> BASEBuildingEffects            (Parm, OutParm, ZeroConstructor)
// TArray<struct FBASEGameplayEffect> BASEFriendlyEffects            (Parm, OutParm, ZeroConstructor)
// TArray<struct FBASEGameplayEffect> BASEHostileEffects             (Parm, OutParm, ZeroConstructor)
void AB_Constructor_BASE_C::Setup_Base_Effect_Array(class UAbilitySystemComponent* Instigator_Ability_System, TArray<struct FBASEGameplayEffect>* BASEBuildingEffects, TArray<struct FBASEGameplayEffect>* BASEFriendlyEffects, TArray<struct FBASEGameplayEffect>* BASEHostileEffects)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.Setup Base Effect Array");

	AB_Constructor_BASE_C_Setup_Base_Effect_Array_Params params;
	params.Instigator_Ability_System = Instigator_Ability_System;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BASEBuildingEffects != nullptr)
		*BASEBuildingEffects = params.BASEBuildingEffects;
	if (BASEFriendlyEffects != nullptr)
		*BASEFriendlyEffects = params.BASEFriendlyEffects;
	if (BASEHostileEffects != nullptr)
		*BASEHostileEffects = params.BASEHostileEffects;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupBaseDefaultValues
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* Ability_System_Component       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            NodesToAffect                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Constructor_BASE_C::SetupBaseDefaultValues(class UAbilitySystemComponent* Ability_System_Component, int* NodesToAffect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.SetupBaseDefaultValues");

	AB_Constructor_BASE_C_SetupBaseDefaultValues_Params params;
	params.Ability_System_Component = Ability_System_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NodesToAffect != nullptr)
		*NodesToAffect = params.NodesToAffect;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_Constructor_BASE_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.UserConstructionScript");

	AB_Constructor_BASE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.OnPlaced
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* InstigatorAbilitySystemComponent (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Constructor_BASE_C::OnPlaced(class UAbilitySystemComponent* InstigatorAbilitySystemComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.OnPlaced");

	AB_Constructor_BASE_C_OnPlaced_Params params;
	params.InstigatorAbilitySystemComponent = InstigatorAbilitySystemComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.Recycling
// (BlueprintCallable, BlueprintEvent)
void AB_Constructor_BASE_C::Recycling()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.Recycling");

	AB_Constructor_BASE_C_Recycling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AB_Constructor_BASE_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature");

	AB_Constructor_BASE_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Constructor_BASE_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature");

	AB_Constructor_BASE_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.AnimateLegs
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LegsUp                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Constructor_BASE_C::AnimateLegs(bool LegsUp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.AnimateLegs");

	AB_Constructor_BASE_C_AnimateLegs_Params params;
	params.LegsUp = LegsUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.StartBuildingActorVisuals
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class ABuildingSMActor*        BuildingActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*    EffectMeshComp                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Constructor_BASE_C::StartBuildingActorVisuals(class ABuildingSMActor* BuildingActor, class UStaticMeshComponent* EffectMeshComp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.StartBuildingActorVisuals");

	AB_Constructor_BASE_C_StartBuildingActorVisuals_Params params;
	params.BuildingActor = BuildingActor;
	params.EffectMeshComp = EffectMeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.StopBuildingActorVisuals
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class ABuildingSMActor*        BuildingActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*    EffectMeshComp                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Constructor_BASE_C::StopBuildingActorVisuals(class ABuildingSMActor* BuildingActor, class UStaticMeshComponent* EffectMeshComp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.StopBuildingActorVisuals");

	AB_Constructor_BASE_C_StopBuildingActorVisuals_Params params;
	params.BuildingActor = BuildingActor;
	params.EffectMeshComp = EffectMeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Constructor_BASE_C::BlueprintOnInteract(class AFortPawn* InteractingPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintOnInteract");

	AB_Constructor_BASE_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.GetDamageAmp
// (BlueprintCallable, BlueprintEvent)
void AB_Constructor_BASE_C::GetDamageAmp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.GetDamageAmp");

	AB_Constructor_BASE_C_GetDamageAmp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.ResourcesCreated
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AB_Constructor_BASE_C::ResourcesCreated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.ResourcesCreated");

	AB_Constructor_BASE_C_ResourcesCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.ExecuteUbergraph_B_Constructor_BASE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Constructor_BASE_C::ExecuteUbergraph_B_Constructor_BASE(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Constructor_BASE.B_Constructor_BASE_C.ExecuteUbergraph_B_Constructor_BASE");

	AB_Constructor_BASE_C_ExecuteUbergraph_B_Constructor_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
