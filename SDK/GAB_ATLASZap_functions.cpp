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

// Function GAB_ATLASZap.GAB_ATLASZap_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGAB_ATLASZap_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_ATLASZap.GAB_ATLASZap_C.K2_ActivateAbilityFromEvent");

	UGAB_ATLASZap_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_ATLASZap.GAB_ATLASZap_C.ExecuteUbergraph_GAB_ATLASZap
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGAB_ATLASZap_C::ExecuteUbergraph_GAB_ATLASZap(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_ATLASZap.GAB_ATLASZap_C.ExecuteUbergraph_GAB_ATLASZap");

	UGAB_ATLASZap_C_ExecuteUbergraph_GAB_ATLASZap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
