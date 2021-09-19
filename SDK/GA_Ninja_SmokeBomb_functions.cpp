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

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.ThrowSmokeBomb
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawn_Ninja_C*     Requestor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortGameplayEffectContainerSpec EffectSpec                     (Parm, OutParm)
void UGA_Ninja_SmokeBomb_C::ThrowSmokeBomb(class APlayerPawn_Ninja_C** Requestor, struct FVector* Location, struct FRotator* Rotation, struct FFortGameplayEffectContainerSpec* EffectSpec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.ThrowSmokeBomb");

	UGA_Ninja_SmokeBomb_C_ThrowSmokeBomb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Requestor != nullptr)
		*Requestor = params.Requestor;
	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (EffectSpec != nullptr)
		*EffectSpec = params.EffectSpec;

}


// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Completed_3644944049E84BE80D314DBC53F664CB
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Ninja_SmokeBomb_C::Completed_3644944049E84BE80D314DBC53F664CB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Completed_3644944049E84BE80D314DBC53F664CB");

	UGA_Ninja_SmokeBomb_C_Completed_3644944049E84BE80D314DBC53F664CB_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Cancelled_3644944049E84BE80D314DBC53F664CB
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Ninja_SmokeBomb_C::Cancelled_3644944049E84BE80D314DBC53F664CB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Cancelled_3644944049E84BE80D314DBC53F664CB");

	UGA_Ninja_SmokeBomb_C_Cancelled_3644944049E84BE80D314DBC53F664CB_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Triggered_3644944049E84BE80D314DBC53F664CB
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Ninja_SmokeBomb_C::Triggered_3644944049E84BE80D314DBC53F664CB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Triggered_3644944049E84BE80D314DBC53F664CB");

	UGA_Ninja_SmokeBomb_C_Triggered_3644944049E84BE80D314DBC53F664CB_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Destroyed_4C7C12404F5C962CA59DD49973166CB9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Ninja_SmokeBomb_C::Destroyed_4C7C12404F5C962CA59DD49973166CB9(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Destroyed_4C7C12404F5C962CA59DD49973166CB9");

	UGA_Ninja_SmokeBomb_C_Destroyed_4C7C12404F5C962CA59DD49973166CB9_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Exploded_4C7C12404F5C962CA59DD49973166CB9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Ninja_SmokeBomb_C::Exploded_4C7C12404F5C962CA59DD49973166CB9(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Exploded_4C7C12404F5C962CA59DD49973166CB9");

	UGA_Ninja_SmokeBomb_C_Exploded_4C7C12404F5C962CA59DD49973166CB9_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Stopped_4C7C12404F5C962CA59DD49973166CB9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Ninja_SmokeBomb_C::Stopped_4C7C12404F5C962CA59DD49973166CB9(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Stopped_4C7C12404F5C962CA59DD49973166CB9");

	UGA_Ninja_SmokeBomb_C_Stopped_4C7C12404F5C962CA59DD49973166CB9_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Bounced_4C7C12404F5C962CA59DD49973166CB9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Ninja_SmokeBomb_C::Bounced_4C7C12404F5C962CA59DD49973166CB9(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Bounced_4C7C12404F5C962CA59DD49973166CB9");

	UGA_Ninja_SmokeBomb_C_Bounced_4C7C12404F5C962CA59DD49973166CB9_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Touched_4C7C12404F5C962CA59DD49973166CB9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Ninja_SmokeBomb_C::Touched_4C7C12404F5C962CA59DD49973166CB9(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Touched_4C7C12404F5C962CA59DD49973166CB9");

	UGA_Ninja_SmokeBomb_C_Touched_4C7C12404F5C962CA59DD49973166CB9_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Created_4C7C12404F5C962CA59DD49973166CB9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Ninja_SmokeBomb_C::Created_4C7C12404F5C962CA59DD49973166CB9(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Created_4C7C12404F5C962CA59DD49973166CB9");

	UGA_Ninja_SmokeBomb_C_Created_4C7C12404F5C962CA59DD49973166CB9_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Ninja_SmokeBomb_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.K2_ActivateAbility");

	UGA_Ninja_SmokeBomb_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.ExecuteUbergraph_GA_Ninja_SmokeBomb
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Ninja_SmokeBomb_C::ExecuteUbergraph_GA_Ninja_SmokeBomb(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.ExecuteUbergraph_GA_Ninja_SmokeBomb");

	UGA_Ninja_SmokeBomb_C_ExecuteUbergraph_GA_Ninja_SmokeBomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
