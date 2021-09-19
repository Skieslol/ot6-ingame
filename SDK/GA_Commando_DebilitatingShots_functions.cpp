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

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupFatigue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectSpecHandle EffectspecOutInstant           (Parm, OutParm)
// struct FGameplayEffectSpecHandle EffectspecOutDuration          (Parm, OutParm)
void UGA_Commando_DebilitatingShots_C::SetupFatigue(struct FGameplayEffectSpecHandle* EffectspecOutInstant, struct FGameplayEffectSpecHandle* EffectspecOutDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupFatigue");

	UGA_Commando_DebilitatingShots_C_SetupFatigue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EffectspecOutInstant != nullptr)
		*EffectspecOutInstant = params.EffectspecOutInstant;
	if (EffectspecOutDuration != nullptr)
		*EffectspecOutDuration = params.EffectspecOutDuration;

}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupAppliedEffect
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Stack_Count                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectSpecHandle EffectSpecHandle               (Parm)
// struct FGameplayEffectSpecHandle EffectspecHandleOut            (Parm, OutParm)
void UGA_Commando_DebilitatingShots_C::SetupAppliedEffect(float Duration, float Magnitude, int Stack_Count, const struct FGameplayEffectSpecHandle& EffectSpecHandle, struct FGameplayEffectSpecHandle* EffectspecHandleOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupAppliedEffect");

	UGA_Commando_DebilitatingShots_C_SetupAppliedEffect_Params params;
	params.Duration = Duration;
	params.Magnitude = Magnitude;
	params.Stack_Count = Stack_Count;
	params.EffectSpecHandle = EffectSpecHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EffectspecHandleOut != nullptr)
		*EffectspecHandleOut = params.EffectspecHandleOut;

}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupGameplayEffect
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag            EventTag                       (Parm)
// class UObject*                 OptionalObject                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandle Target_Data                    (Parm, OutParm)
// class UClass*                  DebilitatingShots              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Effect_Level                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Stack_Count                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Commando_DebilitatingShots_C::SetupGameplayEffect(class AActor* HitActor, const struct FGameplayTag& EventTag, class UObject* OptionalObject, struct FGameplayAbilityTargetDataHandle* Target_Data, class UClass** DebilitatingShots, int* Effect_Level, int* Stack_Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupGameplayEffect");

	UGA_Commando_DebilitatingShots_C_SetupGameplayEffect_Params params;
	params.HitActor = HitActor;
	params.EventTag = EventTag;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Target_Data != nullptr)
		*Target_Data = params.Target_Data;
	if (DebilitatingShots != nullptr)
		*DebilitatingShots = params.DebilitatingShots;
	if (Effect_Level != nullptr)
		*Effect_Level = params.Effect_Level;
	if (Stack_Count != nullptr)
		*Stack_Count = params.Stack_Count;

}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (Parm, ContainsInstancedReference)
// struct FGameplayEventData      Payload                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGA_Commando_DebilitatingShots_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.K2_ShouldAbilityRespondToEvent");

	UGA_Commando_DebilitatingShots_C_K2_ShouldAbilityRespondToEvent_Params params;
	params.ActorInfo = ActorInfo;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGA_Commando_DebilitatingShots_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.K2_ActivateAbilityFromEvent");

	UGA_Commando_DebilitatingShots_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.ExecuteUbergraph_GA_Commando_DebilitatingShots
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Commando_DebilitatingShots_C::ExecuteUbergraph_GA_Commando_DebilitatingShots(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.ExecuteUbergraph_GA_Commando_DebilitatingShots");

	UGA_Commando_DebilitatingShots_C_ExecuteUbergraph_GA_Commando_DebilitatingShots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
