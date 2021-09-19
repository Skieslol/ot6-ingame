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

// Function GAB_GenericStunned.GAB_GenericStunned_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
void UGAB_GenericStunned_C::K2_OnEndAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericStunned.GAB_GenericStunned_C.K2_OnEndAbility");

	UGAB_GenericStunned_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_GenericStunned.GAB_GenericStunned_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGAB_GenericStunned_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericStunned.GAB_GenericStunned_C.K2_ActivateAbility");

	UGAB_GenericStunned_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_GenericStunned.GAB_GenericStunned_C.ExecuteUbergraph_GAB_GenericStunned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGAB_GenericStunned_C::ExecuteUbergraph_GAB_GenericStunned(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericStunned.GAB_GenericStunned_C.ExecuteUbergraph_GAB_GenericStunned");

	UGAB_GenericStunned_C_ExecuteUbergraph_GAB_GenericStunned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
