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

// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.DestroyPP
// (Public, BlueprintCallable, BlueprintEvent)
void AB_Prj_AdrenalineRush_C::DestroyPP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.DestroyPP");

	AB_Prj_AdrenalineRush_C_DestroyPP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_Prj_AdrenalineRush_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.UserConstructionScript");

	AB_Prj_AdrenalineRush_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.PP Shockwave__FinishedFunc
// (BlueprintEvent)
void AB_Prj_AdrenalineRush_C::PP_Shockwave__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.PP Shockwave__FinishedFunc");

	AB_Prj_AdrenalineRush_C_PP_Shockwave__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.PP Shockwave__UpdateFunc
// (BlueprintEvent)
void AB_Prj_AdrenalineRush_C::PP_Shockwave__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.PP Shockwave__UpdateFunc");

	AB_Prj_AdrenalineRush_C_PP_Shockwave__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.PassInfo
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*         Owner                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Prj_AdrenalineRush_C::PassInfo(float Radius, class AFortPlayerPawn* Owner, int Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.PassInfo");

	AB_Prj_AdrenalineRush_C_PassInfo_Params params;
	params.Radius = Radius;
	params.Owner = Owner;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.ExecuteUbergraph_B_Prj_AdrenalineRush
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Prj_AdrenalineRush_C::ExecuteUbergraph_B_Prj_AdrenalineRush(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C.ExecuteUbergraph_B_Prj_AdrenalineRush");

	AB_Prj_AdrenalineRush_C_ExecuteUbergraph_B_Prj_AdrenalineRush_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
