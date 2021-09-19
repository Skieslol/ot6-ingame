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

// Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ALoginCamera_Blueprint_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.UserConstructionScript");

	ALoginCamera_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.OnActivated
// (Event, Public, BlueprintEvent)
void ALoginCamera_Blueprint_C::OnActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.OnActivated");

	ALoginCamera_Blueprint_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.ExecuteUbergraph_LoginCamera_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALoginCamera_Blueprint_C::ExecuteUbergraph_LoginCamera_Blueprint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.ExecuteUbergraph_LoginCamera_Blueprint");

	ALoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
