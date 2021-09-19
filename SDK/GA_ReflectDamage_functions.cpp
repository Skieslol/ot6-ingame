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

// Function GA_ReflectDamage.GA_ReflectDamage_C.ReflectDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* OriginalDmgCauser              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent* OriginalDmgReceiver            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent* ReflectedDmgDealer             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          OriginalDmg                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   OriginalDmgReceiverTags        (Parm)
// struct FGameplayTagContainer   OriginalDmgCauserTags          (Parm)
void UGA_ReflectDamage_C::ReflectDamage(class UAbilitySystemComponent* OriginalDmgCauser, class UAbilitySystemComponent* OriginalDmgReceiver, class UAbilitySystemComponent* ReflectedDmgDealer, float OriginalDmg, const struct FGameplayTagContainer& OriginalDmgReceiverTags, const struct FGameplayTagContainer& OriginalDmgCauserTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_ReflectDamage.GA_ReflectDamage_C.ReflectDamage");

	UGA_ReflectDamage_C_ReflectDamage_Params params;
	params.OriginalDmgCauser = OriginalDmgCauser;
	params.OriginalDmgReceiver = OriginalDmgReceiver;
	params.ReflectedDmgDealer = ReflectedDmgDealer;
	params.OriginalDmg = OriginalDmg;
	params.OriginalDmgReceiverTags = OriginalDmgReceiverTags;
	params.OriginalDmgCauserTags = OriginalDmgCauserTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ReflectDamage.GA_ReflectDamage_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGA_ReflectDamage_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_ReflectDamage.GA_ReflectDamage_C.K2_ActivateAbilityFromEvent");

	UGA_ReflectDamage_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ReflectDamage.GA_ReflectDamage_C.ExecuteUbergraph_GA_ReflectDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_ReflectDamage_C::ExecuteUbergraph_GA_ReflectDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_ReflectDamage.GA_ReflectDamage_C.ExecuteUbergraph_GA_ReflectDamage");

	UGA_ReflectDamage_C_ExecuteUbergraph_GA_ReflectDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
