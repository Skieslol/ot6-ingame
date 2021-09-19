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

// Function GA_Ninja_Assassination.GA_Ninja_Assassination_C.ApplyStack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawn_Ninja_C*     NinjaPawn                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Ninja_Assassination_C::ApplyStack(class APlayerPawn_Ninja_C* NinjaPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_Assassination.GA_Ninja_Assassination_C.ApplyStack");

	UGA_Ninja_Assassination_C_ApplyStack_Params params;
	params.NinjaPawn = NinjaPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_Assassination.GA_Ninja_Assassination_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (Parm, ContainsInstancedReference)
// struct FGameplayEventData      Payload                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGA_Ninja_Assassination_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_Assassination.GA_Ninja_Assassination_C.K2_ShouldAbilityRespondToEvent");

	UGA_Ninja_Assassination_C_K2_ShouldAbilityRespondToEvent_Params params;
	params.ActorInfo = ActorInfo;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_Ninja_Assassination.GA_Ninja_Assassination_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Ninja_Assassination_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_Assassination.GA_Ninja_Assassination_C.K2_ActivateAbility");

	UGA_Ninja_Assassination_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_Assassination.GA_Ninja_Assassination_C.ExecuteUbergraph_GA_Ninja_Assassination
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Ninja_Assassination_C::ExecuteUbergraph_GA_Ninja_Assassination(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_Assassination.GA_Ninja_Assassination_C.ExecuteUbergraph_GA_Ninja_Assassination");

	UGA_Ninja_Assassination_C_ExecuteUbergraph_GA_Ninja_Assassination_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
