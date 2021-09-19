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

// Function GA_AirStrike.GA_AirStrike_C.GetCustomAbilitySourceTransform
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform UGA_AirStrike_C::GetCustomAbilitySourceTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_AirStrike.GA_AirStrike_C.GetCustomAbilitySourceTransform");

	UGA_AirStrike_C_GetCustomAbilitySourceTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_AirStrike.GA_AirStrike_C.GetAttributeValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGA_AirStrike_C::GetAttributeValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_AirStrike.GA_AirStrike_C.GetAttributeValue");

	UGA_AirStrike_C_GetAttributeValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_AirStrike.GA_AirStrike_C.OnFailed_FD8DF5D249A3F015BFB1F0A559B298F9
// (BlueprintCallable, BlueprintEvent)
void UGA_AirStrike_C::OnFailed_FD8DF5D249A3F015BFB1F0A559B298F9()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_AirStrike.GA_AirStrike_C.OnFailed_FD8DF5D249A3F015BFB1F0A559B298F9");

	UGA_AirStrike_C_OnFailed_FD8DF5D249A3F015BFB1F0A559B298F9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_AirStrike.GA_AirStrike_C.OnCommitted_FD8DF5D249A3F015BFB1F0A559B298F9
// (BlueprintCallable, BlueprintEvent)
void UGA_AirStrike_C::OnCommitted_FD8DF5D249A3F015BFB1F0A559B298F9()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_AirStrike.GA_AirStrike_C.OnCommitted_FD8DF5D249A3F015BFB1F0A559B298F9");

	UGA_AirStrike_C_OnCommitted_FD8DF5D249A3F015BFB1F0A559B298F9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_AirStrike.GA_AirStrike_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_AirStrike_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_AirStrike.GA_AirStrike_C.K2_ActivateAbility");

	UGA_AirStrike_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_AirStrike.GA_AirStrike_C.ExecuteUbergraph_GA_AirStrike
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_AirStrike_C::ExecuteUbergraph_GA_AirStrike(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_AirStrike.GA_AirStrike_C.ExecuteUbergraph_GA_AirStrike");

	UGA_AirStrike_C_ExecuteUbergraph_GA_AirStrike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
