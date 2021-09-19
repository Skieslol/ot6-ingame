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

// Function GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (Parm, ContainsInstancedReference)
// struct FGameplayEventData      Payload                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGA_Constructor_ToInfinityAndBeyond_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C.K2_ShouldAbilityRespondToEvent");

	UGA_Constructor_ToInfinityAndBeyond_C_K2_ShouldAbilityRespondToEvent_Params params;
	params.ActorInfo = ActorInfo;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C.Cancelled_35315E614EE08E9B38A0B1BBADAA3319
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Constructor_ToInfinityAndBeyond_C::Cancelled_35315E614EE08E9B38A0B1BBADAA3319(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C.Cancelled_35315E614EE08E9B38A0B1BBADAA3319");

	UGA_Constructor_ToInfinityAndBeyond_C_Cancelled_35315E614EE08E9B38A0B1BBADAA3319_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C.Targeted_35315E614EE08E9B38A0B1BBADAA3319
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Constructor_ToInfinityAndBeyond_C::Targeted_35315E614EE08E9B38A0B1BBADAA3319(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C.Targeted_35315E614EE08E9B38A0B1BBADAA3319");

	UGA_Constructor_ToInfinityAndBeyond_C_Targeted_35315E614EE08E9B38A0B1BBADAA3319_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGA_Constructor_ToInfinityAndBeyond_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C.K2_ActivateAbilityFromEvent");

	UGA_Constructor_ToInfinityAndBeyond_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C.ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Constructor_ToInfinityAndBeyond_C::ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C.ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond");

	UGA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
