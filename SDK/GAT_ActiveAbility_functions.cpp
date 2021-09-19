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

// Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGAT_ActiveAbility_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ActivateAbility");

	UGAT_ActiveAbility_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.ExecuteUbergraph_GAT_ActiveAbility
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGAT_ActiveAbility_C::ExecuteUbergraph_GAT_ActiveAbility(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAT_ActiveAbility.GAT_ActiveAbility_C.ExecuteUbergraph_GAT_ActiveAbility");

	UGAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
