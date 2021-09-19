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

// Function GAB_HuskDeath.GAB_HuskDeath_C.PickDeathMontageSection
// (BlueprintCallable, BlueprintEvent)
void UGAB_HuskDeath_C::PickDeathMontageSection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_HuskDeath.GAB_HuskDeath_C.PickDeathMontageSection");

	UGAB_HuskDeath_C_PickDeathMontageSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_HuskDeath.GAB_HuskDeath_C.ExecuteUbergraph_GAB_HuskDeath
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGAB_HuskDeath_C::ExecuteUbergraph_GAB_HuskDeath(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_HuskDeath.GAB_HuskDeath_C.ExecuteUbergraph_GAB_HuskDeath");

	UGAB_HuskDeath_C_ExecuteUbergraph_GAB_HuskDeath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
