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

// Function UseableWeaponsObject.UseableWeaponsObject_C.ExecuteUbergraph_UseableWeaponsObject
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUseableWeaponsObject_C::ExecuteUbergraph_UseableWeaponsObject(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UseableWeaponsObject.UseableWeaponsObject_C.ExecuteUbergraph_UseableWeaponsObject");

	UUseableWeaponsObject_C_ExecuteUbergraph_UseableWeaponsObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
