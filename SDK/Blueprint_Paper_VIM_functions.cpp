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

// Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.ExecuteUbergraph_Blueprint_Paper_VIM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBlueprint_Paper_VIM_C::ExecuteUbergraph_Blueprint_Paper_VIM(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.ExecuteUbergraph_Blueprint_Paper_VIM");

	UBlueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
