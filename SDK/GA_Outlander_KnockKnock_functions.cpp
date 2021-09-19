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

// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.OtherTargetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGA_Outlander_KnockKnock_C::OtherTargetting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.OtherTargetting");

	UGA_Outlander_KnockKnock_C_OtherTargetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.GetCustomAbilitySourceTransform
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform UGA_Outlander_KnockKnock_C::GetCustomAbilitySourceTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.GetCustomAbilitySourceTransform");

	UGA_Outlander_KnockKnock_C_GetCustomAbilitySourceTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (Parm, ContainsInstancedReference)
// struct FGameplayEventData      Payload                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGA_Outlander_KnockKnock_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.K2_ShouldAbilityRespondToEvent");

	UGA_Outlander_KnockKnock_C_K2_ShouldAbilityRespondToEvent_Params params;
	params.ActorInfo = ActorInfo;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.Cancelled_8217F61642070692A0A818BB146A36B8
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Outlander_KnockKnock_C::Cancelled_8217F61642070692A0A818BB146A36B8(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.Cancelled_8217F61642070692A0A818BB146A36B8");

	UGA_Outlander_KnockKnock_C_Cancelled_8217F61642070692A0A818BB146A36B8_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.Targeted_8217F61642070692A0A818BB146A36B8
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Outlander_KnockKnock_C::Targeted_8217F61642070692A0A818BB146A36B8(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.Targeted_8217F61642070692A0A818BB146A36B8");

	UGA_Outlander_KnockKnock_C_Targeted_8217F61642070692A0A818BB146A36B8_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGA_Outlander_KnockKnock_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.K2_ActivateAbilityFromEvent");

	UGA_Outlander_KnockKnock_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.ExecuteUbergraph_GA_Outlander_KnockKnock
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Outlander_KnockKnock_C::ExecuteUbergraph_GA_Outlander_KnockKnock(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.ExecuteUbergraph_GA_Outlander_KnockKnock");

	UGA_Outlander_KnockKnock_C_ExecuteUbergraph_GA_Outlander_KnockKnock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
