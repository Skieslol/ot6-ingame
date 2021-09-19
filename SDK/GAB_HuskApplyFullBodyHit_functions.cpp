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

// Function GAB_HuskApplyFullBodyHit.GAB_HuskApplyFullBodyHit_C.PickFullBodyHitMontageSection
// (BlueprintCallable, BlueprintEvent)
void UGAB_HuskApplyFullBodyHit_C::PickFullBodyHitMontageSection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_HuskApplyFullBodyHit.GAB_HuskApplyFullBodyHit_C.PickFullBodyHitMontageSection");

	UGAB_HuskApplyFullBodyHit_C_PickFullBodyHitMontageSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_HuskApplyFullBodyHit.GAB_HuskApplyFullBodyHit_C.ExecuteUbergraph_GAB_HuskApplyFullBodyHit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGAB_HuskApplyFullBodyHit_C::ExecuteUbergraph_GAB_HuskApplyFullBodyHit(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_HuskApplyFullBodyHit.GAB_HuskApplyFullBodyHit_C.ExecuteUbergraph_GAB_HuskApplyFullBodyHit");

	UGAB_HuskApplyFullBodyHit_C_ExecuteUbergraph_GAB_HuskApplyFullBodyHit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
