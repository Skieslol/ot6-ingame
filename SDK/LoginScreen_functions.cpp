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

// Function LoginScreen.LoginScreen_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteUI_EFortUIState> PreviousUIState                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULoginScreen_C::OnEnterState(TEnumAsByte<FortniteUI_EFortUIState> PreviousUIState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnEnterState");

	ULoginScreen_C_OnEnterState_Params params;
	params.PreviousUIState = PreviousUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginScreen.LoginScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ULoginScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.Construct");

	ULoginScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginScreen.LoginScreen_C.OnExitState
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteUI_EFortUIState> NextUIState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULoginScreen_C::OnExitState(TEnumAsByte<FortniteUI_EFortUIState> NextUIState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnExitState");

	ULoginScreen_C_OnExitState_Params params;
	params.NextUIState = NextUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULoginScreen_C::ExecuteUbergraph_LoginScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen");

	ULoginScreen_C_ExecuteUbergraph_LoginScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
