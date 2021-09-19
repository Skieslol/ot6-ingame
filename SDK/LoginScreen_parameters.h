#pragma once

// Name: Fortnite, Version: OT-6_5


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function LoginScreen.LoginScreen_C.OnEnterState
struct ULoginScreen_C_OnEnterState_Params
{
	TEnumAsByte<FortniteUI_EFortUIState>               PreviousUIState;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LoginScreen.LoginScreen_C.Construct
struct ULoginScreen_C_Construct_Params
{
};

// Function LoginScreen.LoginScreen_C.OnExitState
struct ULoginScreen_C_OnExitState_Params
{
	TEnumAsByte<FortniteUI_EFortUIState>               NextUIState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen
struct ULoginScreen_C_ExecuteUbergraph_LoginScreen_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
