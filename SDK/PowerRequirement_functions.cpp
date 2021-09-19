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

// Function PowerRequirement.PowerRequirement_C.GenerateToolTipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWidget* UPowerRequirement_C::GenerateToolTipWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PowerRequirement.PowerRequirement_C.GenerateToolTipWidget");

	UPowerRequirement_C_GenerateToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PowerRequirement.PowerRequirement_C.SetUIForRequired
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PartyPower                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPowerRequirement_C::SetUIForRequired(int PartyPower)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PowerRequirement.PowerRequirement_C.SetUIForRequired");

	UPowerRequirement_C_SetUIForRequired_Params params;
	params.PartyPower = PartyPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PowerRequirement.PowerRequirement_C.SetUIForRecommended
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PartyPower                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPowerRequirement_C::SetUIForRecommended(int PartyPower)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PowerRequirement.PowerRequirement_C.SetUIForRecommended");

	UPowerRequirement_C_SetUIForRecommended_Params params;
	params.PartyPower = PartyPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PowerRequirement.PowerRequirement_C.Update
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamPower                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPowerRequirement_C::Update(int TeamPower)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PowerRequirement.PowerRequirement_C.Update");

	UPowerRequirement_C_Update_Params params;
	params.TeamPower = TeamPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PowerRequirement.PowerRequirement_C.SetRequirements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RequiredPower                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            RecommendedPower               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPowerRequirement_C::SetRequirements(int RequiredPower, int RecommendedPower)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PowerRequirement.PowerRequirement_C.SetRequirements");

	UPowerRequirement_C_SetRequirements_Params params;
	params.RequiredPower = RequiredPower;
	params.RecommendedPower = RecommendedPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PowerRequirement.PowerRequirement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UPowerRequirement_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PowerRequirement.PowerRequirement_C.Construct");

	UPowerRequirement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PowerRequirement.PowerRequirement_C.HandleTeamPowerChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamPower                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            PersonalPower                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPowerRequirement_C::HandleTeamPowerChanged(int TeamPower, int PersonalPower)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PowerRequirement.PowerRequirement_C.HandleTeamPowerChanged");

	UPowerRequirement_C_HandleTeamPowerChanged_Params params;
	params.TeamPower = TeamPower;
	params.PersonalPower = PersonalPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PowerRequirement.PowerRequirement_C.ExecuteUbergraph_PowerRequirement
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPowerRequirement_C::ExecuteUbergraph_PowerRequirement(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PowerRequirement.PowerRequirement_C.ExecuteUbergraph_PowerRequirement");

	UPowerRequirement_C_ExecuteUbergraph_PowerRequirement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
