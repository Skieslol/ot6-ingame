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

// Function TheaterMapViewer.TheaterMapViewer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATheaterMapViewer_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheaterMapViewer.TheaterMapViewer_C.UserConstructionScript");

	ATheaterMapViewer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
