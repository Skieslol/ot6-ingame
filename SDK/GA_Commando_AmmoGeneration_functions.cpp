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

// Function GA_Commando_AmmoGeneration.GA_Commando_AmmoGeneration_C.SetupVariables
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_Commando_AmmoGeneration_C::SetupVariables()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_AmmoGeneration.GA_Commando_AmmoGeneration_C.SetupVariables");

	UGA_Commando_AmmoGeneration_C_SetupVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Commando_AmmoGeneration.GA_Commando_AmmoGeneration_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGA_Commando_AmmoGeneration_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_AmmoGeneration.GA_Commando_AmmoGeneration_C.K2_ActivateAbilityFromEvent");

	UGA_Commando_AmmoGeneration_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Commando_AmmoGeneration.GA_Commando_AmmoGeneration_C.ExecuteUbergraph_GA_Commando_AmmoGeneration
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Commando_AmmoGeneration_C::ExecuteUbergraph_GA_Commando_AmmoGeneration(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_AmmoGeneration.GA_Commando_AmmoGeneration_C.ExecuteUbergraph_GA_Commando_AmmoGeneration");

	UGA_Commando_AmmoGeneration_C_ExecuteUbergraph_GA_Commando_AmmoGeneration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
