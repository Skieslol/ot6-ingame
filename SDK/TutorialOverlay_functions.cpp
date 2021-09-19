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

// Function TutorialOverlay.TutorialOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTutorialOverlay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TutorialOverlay.TutorialOverlay_C.Construct");

	UTutorialOverlay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TutorialOverlay.TutorialOverlay_C.ExecuteUbergraph_TutorialOverlay
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTutorialOverlay_C::ExecuteUbergraph_TutorialOverlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TutorialOverlay.TutorialOverlay_C.ExecuteUbergraph_TutorialOverlay");

	UTutorialOverlay_C_ExecuteUbergraph_TutorialOverlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
