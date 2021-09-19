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

// Function GA_ReflectDamageMelee.GA_ReflectDamageMelee_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGA_ReflectDamageMelee_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_ReflectDamageMelee.GA_ReflectDamageMelee_C.K2_ActivateAbilityFromEvent");

	UGA_ReflectDamageMelee_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ReflectDamageMelee.GA_ReflectDamageMelee_C.ExecuteUbergraph_GA_ReflectDamageMelee
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_ReflectDamageMelee_C::ExecuteUbergraph_GA_ReflectDamageMelee(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_ReflectDamageMelee.GA_ReflectDamageMelee_C.ExecuteUbergraph_GA_ReflectDamageMelee");

	UGA_ReflectDamageMelee_C_ExecuteUbergraph_GA_ReflectDamageMelee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
