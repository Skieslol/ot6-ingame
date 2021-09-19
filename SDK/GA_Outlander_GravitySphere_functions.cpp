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

// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.GetCustomAbilitySourceTransform
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform UGA_Outlander_GravitySphere_C::GetCustomAbilitySourceTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.GetCustomAbilitySourceTransform");

	UGA_Outlander_GravitySphere_C_GetCustomAbilitySourceTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.DamageTargets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileEventData            (Parm, ContainsInstancedReference)
void UGA_Outlander_GravitySphere_C::DamageTargets(const struct FProjectileEventData& ProjectileEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.DamageTargets");

	UGA_Outlander_GravitySphere_C_DamageTargets_Params params;
	params.ProjectileEventData = ProjectileEventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.SetupCollector
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  MatterCollector                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 SpawnLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                ProjectileRotation             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          MatterSpeed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          MatterGravity                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortGameplayEffectContainerSpec TargetSpec                     (Parm, OutParm)
void UGA_Outlander_GravitySphere_C::SetupCollector(class UClass** MatterCollector, struct FVector* SpawnLocation, struct FRotator* ProjectileRotation, float* MatterSpeed, float* MatterGravity, struct FFortGameplayEffectContainerSpec* TargetSpec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.SetupCollector");

	UGA_Outlander_GravitySphere_C_SetupCollector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MatterCollector != nullptr)
		*MatterCollector = params.MatterCollector;
	if (SpawnLocation != nullptr)
		*SpawnLocation = params.SpawnLocation;
	if (ProjectileRotation != nullptr)
		*ProjectileRotation = params.ProjectileRotation;
	if (MatterSpeed != nullptr)
		*MatterSpeed = params.MatterSpeed;
	if (MatterGravity != nullptr)
		*MatterGravity = params.MatterGravity;
	if (TargetSpec != nullptr)
		*TargetSpec = params.TargetSpec;

}


// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Destroyed_E1B7FD7947617E82F2B80E9DEA42A6E8
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Outlander_GravitySphere_C::Destroyed_E1B7FD7947617E82F2B80E9DEA42A6E8(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Destroyed_E1B7FD7947617E82F2B80E9DEA42A6E8");

	UGA_Outlander_GravitySphere_C_Destroyed_E1B7FD7947617E82F2B80E9DEA42A6E8_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Exploded_E1B7FD7947617E82F2B80E9DEA42A6E8
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Outlander_GravitySphere_C::Exploded_E1B7FD7947617E82F2B80E9DEA42A6E8(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Exploded_E1B7FD7947617E82F2B80E9DEA42A6E8");

	UGA_Outlander_GravitySphere_C_Exploded_E1B7FD7947617E82F2B80E9DEA42A6E8_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Stopped_E1B7FD7947617E82F2B80E9DEA42A6E8
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Outlander_GravitySphere_C::Stopped_E1B7FD7947617E82F2B80E9DEA42A6E8(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Stopped_E1B7FD7947617E82F2B80E9DEA42A6E8");

	UGA_Outlander_GravitySphere_C_Stopped_E1B7FD7947617E82F2B80E9DEA42A6E8_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Bounced_E1B7FD7947617E82F2B80E9DEA42A6E8
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Outlander_GravitySphere_C::Bounced_E1B7FD7947617E82F2B80E9DEA42A6E8(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Bounced_E1B7FD7947617E82F2B80E9DEA42A6E8");

	UGA_Outlander_GravitySphere_C_Bounced_E1B7FD7947617E82F2B80E9DEA42A6E8_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Touched_E1B7FD7947617E82F2B80E9DEA42A6E8
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Outlander_GravitySphere_C::Touched_E1B7FD7947617E82F2B80E9DEA42A6E8(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Touched_E1B7FD7947617E82F2B80E9DEA42A6E8");

	UGA_Outlander_GravitySphere_C_Touched_E1B7FD7947617E82F2B80E9DEA42A6E8_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Created_E1B7FD7947617E82F2B80E9DEA42A6E8
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Outlander_GravitySphere_C::Created_E1B7FD7947617E82F2B80E9DEA42A6E8(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Created_E1B7FD7947617E82F2B80E9DEA42A6E8");

	UGA_Outlander_GravitySphere_C_Created_E1B7FD7947617E82F2B80E9DEA42A6E8_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Completed_A8F6F5F8468ED284B63ADFA133F95943
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Outlander_GravitySphere_C::Completed_A8F6F5F8468ED284B63ADFA133F95943(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Completed_A8F6F5F8468ED284B63ADFA133F95943");

	UGA_Outlander_GravitySphere_C_Completed_A8F6F5F8468ED284B63ADFA133F95943_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Cancelled_A8F6F5F8468ED284B63ADFA133F95943
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Outlander_GravitySphere_C::Cancelled_A8F6F5F8468ED284B63ADFA133F95943(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Cancelled_A8F6F5F8468ED284B63ADFA133F95943");

	UGA_Outlander_GravitySphere_C_Cancelled_A8F6F5F8468ED284B63ADFA133F95943_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Triggered_A8F6F5F8468ED284B63ADFA133F95943
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Outlander_GravitySphere_C::Triggered_A8F6F5F8468ED284B63ADFA133F95943(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Triggered_A8F6F5F8468ED284B63ADFA133F95943");

	UGA_Outlander_GravitySphere_C_Triggered_A8F6F5F8468ED284B63ADFA133F95943_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Outlander_GravitySphere_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.K2_ActivateAbility");

	UGA_Outlander_GravitySphere_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.ExecuteUbergraph_GA_Outlander_GravitySphere
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Outlander_GravitySphere_C::ExecuteUbergraph_GA_Outlander_GravitySphere(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.ExecuteUbergraph_GA_Outlander_GravitySphere");

	UGA_Outlander_GravitySphere_C_ExecuteUbergraph_GA_Outlander_GravitySphere_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
