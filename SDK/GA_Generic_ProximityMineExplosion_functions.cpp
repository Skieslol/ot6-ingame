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

// Function GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C.Cancelled_8BEAB59F4207CD7783898D81D6492C18
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Generic_ProximityMineExplosion_C::Cancelled_8BEAB59F4207CD7783898D81D6492C18(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C.Cancelled_8BEAB59F4207CD7783898D81D6492C18");

	UGA_Generic_ProximityMineExplosion_C_Cancelled_8BEAB59F4207CD7783898D81D6492C18_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C.Targeted_8BEAB59F4207CD7783898D81D6492C18
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Generic_ProximityMineExplosion_C::Targeted_8BEAB59F4207CD7783898D81D6492C18(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C.Targeted_8BEAB59F4207CD7783898D81D6492C18");

	UGA_Generic_ProximityMineExplosion_C_Targeted_8BEAB59F4207CD7783898D81D6492C18_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGA_Generic_ProximityMineExplosion_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C.K2_ActivateAbilityFromEvent");

	UGA_Generic_ProximityMineExplosion_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C.ExecuteUbergraph_GA_Generic_ProximityMineExplosion
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Generic_ProximityMineExplosion_C::ExecuteUbergraph_GA_Generic_ProximityMineExplosion(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C.ExecuteUbergraph_GA_Generic_ProximityMineExplosion");

	UGA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
