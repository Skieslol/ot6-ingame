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

// Function GAT_OutlanderActiveAbility.GAT_OutlanderActiveAbility_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGAT_OutlanderActiveAbility_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAT_OutlanderActiveAbility.GAT_OutlanderActiveAbility_C.K2_ActivateAbility");

	UGAT_OutlanderActiveAbility_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAT_OutlanderActiveAbility.GAT_OutlanderActiveAbility_C.ExecuteUbergraph_GAT_OutlanderActiveAbility
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGAT_OutlanderActiveAbility_C::ExecuteUbergraph_GAT_OutlanderActiveAbility(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAT_OutlanderActiveAbility.GAT_OutlanderActiveAbility_C.ExecuteUbergraph_GAT_OutlanderActiveAbility");

	UGAT_OutlanderActiveAbility_C_ExecuteUbergraph_GAT_OutlanderActiveAbility_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
