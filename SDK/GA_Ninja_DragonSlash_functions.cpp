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

// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.SetWeaponVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ability_Active                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Ninja_DragonSlash_C::SetWeaponVisibility(bool Ability_Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.SetWeaponVisibility");

	UGA_Ninja_DragonSlash_C_SetWeaponVisibility_Params params;
	params.Ability_Active = Ability_Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.SetupCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawn_Ninja_C*     Ninja_Pawn                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Ninja_DragonSlash_C::SetupCollision(class APlayerPawn_Ninja_C* Ninja_Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.SetupCollision");

	UGA_Ninja_DragonSlash_C_SetupCollision_Params params;
	params.Ninja_Pawn = Ninja_Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.SetupAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGA_Ninja_DragonSlash_C::SetupAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.SetupAbility");

	UGA_Ninja_DragonSlash_C_SetupAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.ApplyDamageToTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Hit_Actor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerPawn_Ninja_C*     Ninja_Pawn                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Ninja_DragonSlash_C::ApplyDamageToTarget(class AActor* Hit_Actor, class APlayerPawn_Ninja_C* Ninja_Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.ApplyDamageToTarget");

	UGA_Ninja_DragonSlash_C_ApplyDamageToTarget_Params params;
	params.Hit_Actor = Hit_Actor;
	params.Ninja_Pawn = Ninja_Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.Completed_28380CAC46B6057F2BF9DFAD8C7B8F2A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Ninja_DragonSlash_C::Completed_28380CAC46B6057F2BF9DFAD8C7B8F2A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.Completed_28380CAC46B6057F2BF9DFAD8C7B8F2A");

	UGA_Ninja_DragonSlash_C_Completed_28380CAC46B6057F2BF9DFAD8C7B8F2A_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.Cancelled_28380CAC46B6057F2BF9DFAD8C7B8F2A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Ninja_DragonSlash_C::Cancelled_28380CAC46B6057F2BF9DFAD8C7B8F2A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.Cancelled_28380CAC46B6057F2BF9DFAD8C7B8F2A");

	UGA_Ninja_DragonSlash_C_Cancelled_28380CAC46B6057F2BF9DFAD8C7B8F2A_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.Triggered_28380CAC46B6057F2BF9DFAD8C7B8F2A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Ninja_DragonSlash_C::Triggered_28380CAC46B6057F2BF9DFAD8C7B8F2A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.Triggered_28380CAC46B6057F2BF9DFAD8C7B8F2A");

	UGA_Ninja_DragonSlash_C_Triggered_28380CAC46B6057F2BF9DFAD8C7B8F2A_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.OnFinish_9B08D05C4E0F86CA462DDE9A829D7C13
// (BlueprintCallable, BlueprintEvent)
void UGA_Ninja_DragonSlash_C::OnFinish_9B08D05C4E0F86CA462DDE9A829D7C13()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.OnFinish_9B08D05C4E0F86CA462DDE9A829D7C13");

	UGA_Ninja_DragonSlash_C_OnFinish_9B08D05C4E0F86CA462DDE9A829D7C13_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.OnFinish_5E00AB5343CB83D80843BE94EC51F21E
// (BlueprintCallable, BlueprintEvent)
void UGA_Ninja_DragonSlash_C::OnFinish_5E00AB5343CB83D80843BE94EC51F21E()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.OnFinish_5E00AB5343CB83D80843BE94EC51F21E");

	UGA_Ninja_DragonSlash_C_OnFinish_5E00AB5343CB83D80843BE94EC51F21E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Ninja_DragonSlash_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.K2_ActivateAbility");

	UGA_Ninja_DragonSlash_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
void UGA_Ninja_DragonSlash_C::K2_OnEndAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.K2_OnEndAbility");

	UGA_Ninja_DragonSlash_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.OverlapActors
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Ninja_DragonSlash_C::OverlapActors(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.OverlapActors");

	UGA_Ninja_DragonSlash_C_OverlapActors_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.BeginAOETrail
// (BlueprintCallable, BlueprintEvent)
void UGA_Ninja_DragonSlash_C::BeginAOETrail()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.BeginAOETrail");

	UGA_Ninja_DragonSlash_C_BeginAOETrail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.TrySpawnAOETrail
// (BlueprintCallable, BlueprintEvent)
void UGA_Ninja_DragonSlash_C::TrySpawnAOETrail()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.TrySpawnAOETrail");

	UGA_Ninja_DragonSlash_C_TrySpawnAOETrail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.ExecuteUbergraph_GA_Ninja_DragonSlash
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Ninja_DragonSlash_C::ExecuteUbergraph_GA_Ninja_DragonSlash(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.ExecuteUbergraph_GA_Ninja_DragonSlash");

	UGA_Ninja_DragonSlash_C_ExecuteUbergraph_GA_Ninja_DragonSlash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
