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

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ToggleCapsuleCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Constructor_BullRush_C::ToggleCapsuleCollision(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ToggleCapsuleCollision");

	UGA_Constructor_BullRush_C_ToggleCapsuleCollision_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_ImpactEnemy
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_Constructor_BullRush_C::FX_ImpactEnemy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_ImpactEnemy");

	UGA_Constructor_BullRush_C_FX_ImpactEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_ShieldHitsGround
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_Constructor_BullRush_C::FX_ShieldHitsGround()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_ShieldHitsGround");

	UGA_Constructor_BullRush_C_FX_ShieldHitsGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndPushingAll
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_Constructor_BullRush_C::EndPushingAll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndPushingAll");

	UGA_Constructor_BullRush_C_EndPushingAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.BeginPushingPawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               PawnToPush                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Constructor_BullRush_C::BeginPushingPawn(class AFortPawn* PawnToPush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.BeginPushingPawn");

	UGA_Constructor_BullRush_C_BeginPushingPawn_Params params;
	params.PawnToPush = PawnToPush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ToggleSteeringReduction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnableSteeringReduction       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Constructor_BullRush_C::ToggleSteeringReduction(bool bEnableSteeringReduction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ToggleSteeringReduction");

	UGA_Constructor_BullRush_C_ToggleSteeringReduction_Params params;
	params.bEnableSteeringReduction = bEnableSteeringReduction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_MotionLines_Deactivate
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_Constructor_BullRush_C::FX_MotionLines_Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_MotionLines_Deactivate");

	UGA_Constructor_BullRush_C_FX_MotionLines_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_MotionLines_Activate
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_Constructor_BullRush_C::FX_MotionLines_Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_MotionLines_Activate");

	UGA_Constructor_BullRush_C_FX_MotionLines_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyEndingDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGA_Constructor_BullRush_C::ApplyEndingDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyEndingDamage");

	UGA_Constructor_BullRush_C_ApplyEndingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyPushAside
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               PawnToPush                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Constructor_BullRush_C::ApplyPushAside(class AFortPawn* PawnToPush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyPushAside");

	UGA_Constructor_BullRush_C_ApplyPushAside_Params params;
	params.PawnToPush = PawnToPush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.InitBullRushVars
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_Constructor_BullRush_C::InitBullRushVars()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.InitBullRushVars");

	UGA_Constructor_BullRush_C_InitBullRushVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_7F48364C4417ADD50A45C0B1A7272F05
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Constructor_BullRush_C::Completed_7F48364C4417ADD50A45C0B1A7272F05(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_7F48364C4417ADD50A45C0B1A7272F05");

	UGA_Constructor_BullRush_C_Completed_7F48364C4417ADD50A45C0B1A7272F05_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_7F48364C4417ADD50A45C0B1A7272F05
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Constructor_BullRush_C::Cancelled_7F48364C4417ADD50A45C0B1A7272F05(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_7F48364C4417ADD50A45C0B1A7272F05");

	UGA_Constructor_BullRush_C_Cancelled_7F48364C4417ADD50A45C0B1A7272F05_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_7F48364C4417ADD50A45C0B1A7272F05
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Constructor_BullRush_C::Triggered_7F48364C4417ADD50A45C0B1A7272F05(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_7F48364C4417ADD50A45C0B1A7272F05");

	UGA_Constructor_BullRush_C_Triggered_7F48364C4417ADD50A45C0B1A7272F05_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OnFinish_BDF7E7A84D7FB1380E68BBB8061B5115
// (BlueprintCallable, BlueprintEvent)
void UGA_Constructor_BullRush_C::OnFinish_BDF7E7A84D7FB1380E68BBB8061B5115()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OnFinish_BDF7E7A84D7FB1380E68BBB8061B5115");

	UGA_Constructor_BullRush_C_OnFinish_BDF7E7A84D7FB1380E68BBB8061B5115_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Constructor_BullRush_C::Completed_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1");

	UGA_Constructor_BullRush_C_Completed_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Constructor_BullRush_C::Cancelled_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1");

	UGA_Constructor_BullRush_C_Cancelled_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Constructor_BullRush_C::Triggered_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1");

	UGA_Constructor_BullRush_C_Triggered_AEE84BDD4BB90ECDF1B6BF83B5EDC3C1_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Constructor_BullRush_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.K2_ActivateAbility");

	UGA_Constructor_BullRush_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
void UGA_Constructor_BullRush_C::K2_OnEndAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.K2_OnEndAbility");

	UGA_Constructor_BullRush_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OnBullRushOverlap
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Constructor_BullRush_C::OnBullRushOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OnBullRushOverlap");

	UGA_Constructor_BullRush_C_OnBullRushOverlap_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OnBullRushStopCollisionOverlap
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Constructor_BullRush_C::OnBullRushStopCollisionOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OnBullRushStopCollisionOverlap");

	UGA_Constructor_BullRush_C_OnBullRushStopCollisionOverlap_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndDash
// (BlueprintCallable, BlueprintEvent)
void UGA_Constructor_BullRush_C::EndDash()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndDash");

	UGA_Constructor_BullRush_C_EndDash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.CheckEndDash
// (BlueprintCallable, BlueprintEvent)
void UGA_Constructor_BullRush_C::CheckEndDash()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.CheckEndDash");

	UGA_Constructor_BullRush_C_CheckEndDash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ExecuteUbergraph_GA_Constructor_BullRush
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Constructor_BullRush_C::ExecuteUbergraph_GA_Constructor_BullRush(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ExecuteUbergraph_GA_Constructor_BullRush");

	UGA_Constructor_BullRush_C_ExecuteUbergraph_GA_Constructor_BullRush_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
