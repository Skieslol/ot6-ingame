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

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.SetJumpHeight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawn_Ninja_C*     Ninja_Pawn                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*         Ninja_Pawn_Out                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Jump_Height                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Ninja_MantisLeap_C::SetJumpHeight(class APlayerPawn_Ninja_C* Ninja_Pawn, class AFortPlayerPawn** Ninja_Pawn_Out, struct FVector* Jump_Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.SetJumpHeight");

	UGA_Ninja_MantisLeap_C_SetJumpHeight_Params params;
	params.Ninja_Pawn = Ninja_Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ninja_Pawn_Out != nullptr)
		*Ninja_Pawn_Out = params.Ninja_Pawn_Out;
	if (Jump_Height != nullptr)
		*Jump_Height = params.Jump_Height;

}


// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (Parm, ContainsInstancedReference)
// struct FGameplayEventData      Payload                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGA_Ninja_MantisLeap_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.K2_ShouldAbilityRespondToEvent");

	UGA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent_Params params;
	params.ActorInfo = ActorInfo;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.Cancelled_023C704A4687994EABB842B14222FB9B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Ninja_MantisLeap_C::Cancelled_023C704A4687994EABB842B14222FB9B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.Cancelled_023C704A4687994EABB842B14222FB9B");

	UGA_Ninja_MantisLeap_C_Cancelled_023C704A4687994EABB842B14222FB9B_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.Targeted_023C704A4687994EABB842B14222FB9B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Ninja_MantisLeap_C::Targeted_023C704A4687994EABB842B14222FB9B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.Targeted_023C704A4687994EABB842B14222FB9B");

	UGA_Ninja_MantisLeap_C_Targeted_023C704A4687994EABB842B14222FB9B_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGA_Ninja_MantisLeap_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.K2_ActivateAbilityFromEvent");

	UGA_Ninja_MantisLeap_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.OnPawnLanded_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Ninja_MantisLeap_C::OnPawnLanded_Event_1(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.OnPawnLanded_Event_1");

	UGA_Ninja_MantisLeap_C_OnPawnLanded_Event_1_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.ExecuteUbergraph_GA_Ninja_MantisLeap
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Ninja_MantisLeap_C::ExecuteUbergraph_GA_Ninja_MantisLeap(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.ExecuteUbergraph_GA_Ninja_MantisLeap");

	UGA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
