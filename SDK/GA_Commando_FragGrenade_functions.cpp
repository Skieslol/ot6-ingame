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

// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.KeepOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    Projectile_Data                (Parm, ContainsInstancedReference)
void UGA_Commando_FragGrenade_C::KeepOut(const struct FProjectileEventData& Projectile_Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.KeepOut");

	UGA_Commando_FragGrenade_C_KeepOut_Params params;
	params.Projectile_Data = Projectile_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.PerfectEngineering
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    Projectile_Data                (Parm, ContainsInstancedReference)
void UGA_Commando_FragGrenade_C::PerfectEngineering(const struct FProjectileEventData& Projectile_Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.PerfectEngineering");

	UGA_Commando_FragGrenade_C_PerfectEngineering_Params params;
	params.Projectile_Data = Projectile_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.ActivateClusterBombs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    Projectile_Data                (Parm, ContainsInstancedReference)
void UGA_Commando_FragGrenade_C::ActivateClusterBombs(const struct FProjectileEventData& Projectile_Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.ActivateClusterBombs");

	UGA_Commando_FragGrenade_C_ActivateClusterBombs_Params params;
	params.Projectile_Data = Projectile_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.ThrowGrenade
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                  Base_Grenade                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Spawn_Location                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                Spawn_Rotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Projectile_Speed               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Projectile_Gravity             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortGameplayEffectContainerSpec Explosion_Gameplay_Spec        (Parm, OutParm)
void UGA_Commando_FragGrenade_C::ThrowGrenade(class UAbilitySystemComponent* AbilitySystemComponent, class UClass** Base_Grenade, struct FVector* Spawn_Location, struct FRotator* Spawn_Rotation, float* Projectile_Speed, float* Projectile_Gravity, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.ThrowGrenade");

	UGA_Commando_FragGrenade_C_ThrowGrenade_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Base_Grenade != nullptr)
		*Base_Grenade = params.Base_Grenade;
	if (Spawn_Location != nullptr)
		*Spawn_Location = params.Spawn_Location;
	if (Spawn_Rotation != nullptr)
		*Spawn_Rotation = params.Spawn_Rotation;
	if (Projectile_Speed != nullptr)
		*Projectile_Speed = params.Projectile_Speed;
	if (Projectile_Gravity != nullptr)
		*Projectile_Gravity = params.Projectile_Gravity;
	if (Explosion_Gameplay_Spec != nullptr)
		*Explosion_Gameplay_Spec = params.Explosion_Gameplay_Spec;

}


// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Destroyed_A0715E3447A5D46682E46A89960E35AA
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Commando_FragGrenade_C::Destroyed_A0715E3447A5D46682E46A89960E35AA(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Destroyed_A0715E3447A5D46682E46A89960E35AA");

	UGA_Commando_FragGrenade_C_Destroyed_A0715E3447A5D46682E46A89960E35AA_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Exploded_A0715E3447A5D46682E46A89960E35AA
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Commando_FragGrenade_C::Exploded_A0715E3447A5D46682E46A89960E35AA(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Exploded_A0715E3447A5D46682E46A89960E35AA");

	UGA_Commando_FragGrenade_C_Exploded_A0715E3447A5D46682E46A89960E35AA_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Stopped_A0715E3447A5D46682E46A89960E35AA
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Commando_FragGrenade_C::Stopped_A0715E3447A5D46682E46A89960E35AA(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Stopped_A0715E3447A5D46682E46A89960E35AA");

	UGA_Commando_FragGrenade_C_Stopped_A0715E3447A5D46682E46A89960E35AA_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Bounced_A0715E3447A5D46682E46A89960E35AA
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Commando_FragGrenade_C::Bounced_A0715E3447A5D46682E46A89960E35AA(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Bounced_A0715E3447A5D46682E46A89960E35AA");

	UGA_Commando_FragGrenade_C_Bounced_A0715E3447A5D46682E46A89960E35AA_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Touched_A0715E3447A5D46682E46A89960E35AA
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Commando_FragGrenade_C::Touched_A0715E3447A5D46682E46A89960E35AA(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Touched_A0715E3447A5D46682E46A89960E35AA");

	UGA_Commando_FragGrenade_C_Touched_A0715E3447A5D46682E46A89960E35AA_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Created_A0715E3447A5D46682E46A89960E35AA
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Commando_FragGrenade_C::Created_A0715E3447A5D46682E46A89960E35AA(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Created_A0715E3447A5D46682E46A89960E35AA");

	UGA_Commando_FragGrenade_C_Created_A0715E3447A5D46682E46A89960E35AA_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Completed_DE7AD8FA464F26E37AC20281DAD7839E
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Commando_FragGrenade_C::Completed_DE7AD8FA464F26E37AC20281DAD7839E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Completed_DE7AD8FA464F26E37AC20281DAD7839E");

	UGA_Commando_FragGrenade_C_Completed_DE7AD8FA464F26E37AC20281DAD7839E_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Cancelled_DE7AD8FA464F26E37AC20281DAD7839E
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Commando_FragGrenade_C::Cancelled_DE7AD8FA464F26E37AC20281DAD7839E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Cancelled_DE7AD8FA464F26E37AC20281DAD7839E");

	UGA_Commando_FragGrenade_C_Cancelled_DE7AD8FA464F26E37AC20281DAD7839E_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Triggered_DE7AD8FA464F26E37AC20281DAD7839E
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Commando_FragGrenade_C::Triggered_DE7AD8FA464F26E37AC20281DAD7839E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Triggered_DE7AD8FA464F26E37AC20281DAD7839E");

	UGA_Commando_FragGrenade_C_Triggered_DE7AD8FA464F26E37AC20281DAD7839E_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.OnFinish_978FA3324D06E995EB838282AB600A46
// (BlueprintCallable, BlueprintEvent)
void UGA_Commando_FragGrenade_C::OnFinish_978FA3324D06E995EB838282AB600A46()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.OnFinish_978FA3324D06E995EB838282AB600A46");

	UGA_Commando_FragGrenade_C_OnFinish_978FA3324D06E995EB838282AB600A46_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Commando_FragGrenade_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.K2_ActivateAbility");

	UGA_Commando_FragGrenade_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.ExecuteUbergraph_GA_Commando_FragGrenade
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Commando_FragGrenade_C::ExecuteUbergraph_GA_Commando_FragGrenade(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.ExecuteUbergraph_GA_Commando_FragGrenade");

	UGA_Commando_FragGrenade_C_ExecuteUbergraph_GA_Commando_FragGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
