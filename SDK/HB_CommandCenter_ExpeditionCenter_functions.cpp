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

// Function HB_CommandCenter_ExpeditionCenter.HB_CommandCenter_ExpeditionCenter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AHB_CommandCenter_ExpeditionCenter_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_CommandCenter_ExpeditionCenter.HB_CommandCenter_ExpeditionCenter_C.UserConstructionScript");

	AHB_CommandCenter_ExpeditionCenter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
