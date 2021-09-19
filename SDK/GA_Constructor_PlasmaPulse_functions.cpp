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

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.DarkHackyMath
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SetByCallerValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Constructor_PlasmaPulse_C::DarkHackyMath(float* SetByCallerValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.DarkHackyMath");

	UGA_Constructor_PlasmaPulse_C_DarkHackyMath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SetByCallerValue != nullptr)
		*SetByCallerValue = params.SetByCallerValue;

}


// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.SpawnMiniPulses
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortGameplayEffectContainerSpec EffectContainerSpec            (Parm)
// class AActor*                  ParentPulse                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Constructor_PlasmaPulse_C::SpawnMiniPulses(const struct FVector& HitLocation, const struct FFortGameplayEffectContainerSpec& EffectContainerSpec, class AActor* ParentPulse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.SpawnMiniPulses");

	UGA_Constructor_PlasmaPulse_C_SpawnMiniPulses_Params params;
	params.HitLocation = HitLocation;
	params.EffectContainerSpec = EffectContainerSpec;
	params.ParentPulse = ParentPulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.SetupPlasmaPulse
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* Ability_System_Component       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Spawn_Location                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                Spawn_Rotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortGameplayEffectContainerSpec Plasma_Explosion               (Parm, OutParm)
// struct FFortGameplayEffectContainerSpec Mini_Explosion                 (Parm, OutParm)
void UGA_Constructor_PlasmaPulse_C::SetupPlasmaPulse(class UAbilitySystemComponent* Ability_System_Component, struct FVector* Spawn_Location, struct FRotator* Spawn_Rotation, struct FFortGameplayEffectContainerSpec* Plasma_Explosion, struct FFortGameplayEffectContainerSpec* Mini_Explosion)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.SetupPlasmaPulse");

	UGA_Constructor_PlasmaPulse_C_SetupPlasmaPulse_Params params;
	params.Ability_System_Component = Ability_System_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Spawn_Location != nullptr)
		*Spawn_Location = params.Spawn_Location;
	if (Spawn_Rotation != nullptr)
		*Spawn_Rotation = params.Spawn_Rotation;
	if (Plasma_Explosion != nullptr)
		*Plasma_Explosion = params.Plasma_Explosion;
	if (Mini_Explosion != nullptr)
		*Mini_Explosion = params.Mini_Explosion;

}


// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Destroyed_76104D9B4F6C3F61303653918697EC35
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Constructor_PlasmaPulse_C::Destroyed_76104D9B4F6C3F61303653918697EC35(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Destroyed_76104D9B4F6C3F61303653918697EC35");

	UGA_Constructor_PlasmaPulse_C_Destroyed_76104D9B4F6C3F61303653918697EC35_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Exploded_76104D9B4F6C3F61303653918697EC35
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Constructor_PlasmaPulse_C::Exploded_76104D9B4F6C3F61303653918697EC35(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Exploded_76104D9B4F6C3F61303653918697EC35");

	UGA_Constructor_PlasmaPulse_C_Exploded_76104D9B4F6C3F61303653918697EC35_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Stopped_76104D9B4F6C3F61303653918697EC35
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Constructor_PlasmaPulse_C::Stopped_76104D9B4F6C3F61303653918697EC35(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Stopped_76104D9B4F6C3F61303653918697EC35");

	UGA_Constructor_PlasmaPulse_C_Stopped_76104D9B4F6C3F61303653918697EC35_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Bounced_76104D9B4F6C3F61303653918697EC35
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Constructor_PlasmaPulse_C::Bounced_76104D9B4F6C3F61303653918697EC35(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Bounced_76104D9B4F6C3F61303653918697EC35");

	UGA_Constructor_PlasmaPulse_C_Bounced_76104D9B4F6C3F61303653918697EC35_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Touched_76104D9B4F6C3F61303653918697EC35
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Constructor_PlasmaPulse_C::Touched_76104D9B4F6C3F61303653918697EC35(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Touched_76104D9B4F6C3F61303653918697EC35");

	UGA_Constructor_PlasmaPulse_C_Touched_76104D9B4F6C3F61303653918697EC35_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Created_76104D9B4F6C3F61303653918697EC35
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Constructor_PlasmaPulse_C::Created_76104D9B4F6C3F61303653918697EC35(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Created_76104D9B4F6C3F61303653918697EC35");

	UGA_Constructor_PlasmaPulse_C_Created_76104D9B4F6C3F61303653918697EC35_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Completed_6AC3F9A4491B91FDE0457DAC0E8B468B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Constructor_PlasmaPulse_C::Completed_6AC3F9A4491B91FDE0457DAC0E8B468B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Completed_6AC3F9A4491B91FDE0457DAC0E8B468B");

	UGA_Constructor_PlasmaPulse_C_Completed_6AC3F9A4491B91FDE0457DAC0E8B468B_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Cancelled_6AC3F9A4491B91FDE0457DAC0E8B468B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Constructor_PlasmaPulse_C::Cancelled_6AC3F9A4491B91FDE0457DAC0E8B468B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Cancelled_6AC3F9A4491B91FDE0457DAC0E8B468B");

	UGA_Constructor_PlasmaPulse_C_Cancelled_6AC3F9A4491B91FDE0457DAC0E8B468B_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Triggered_6AC3F9A4491B91FDE0457DAC0E8B468B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Constructor_PlasmaPulse_C::Triggered_6AC3F9A4491B91FDE0457DAC0E8B468B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Triggered_6AC3F9A4491B91FDE0457DAC0E8B468B");

	UGA_Constructor_PlasmaPulse_C_Triggered_6AC3F9A4491B91FDE0457DAC0E8B468B_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Constructor_PlasmaPulse_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.K2_ActivateAbility");

	UGA_Constructor_PlasmaPulse_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.ExecuteUbergraph_GA_Constructor_PlasmaPulse
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Constructor_PlasmaPulse_C::ExecuteUbergraph_GA_Constructor_PlasmaPulse(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.ExecuteUbergraph_GA_Constructor_PlasmaPulse");

	UGA_Constructor_PlasmaPulse_C_ExecuteUbergraph_GA_Constructor_PlasmaPulse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
