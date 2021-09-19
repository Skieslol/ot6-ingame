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

// Function GadgetDisplayBar.GadgetDisplayBar_C.HandledTeamMemberAdded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     InNewMemberInfo                (Parm, OutParm, ReferenceParm)
void UGadgetDisplayBar_C::HandledTeamMemberAdded(struct FFortTeamMemberInfo* InNewMemberInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetDisplayBar.GadgetDisplayBar_C.HandledTeamMemberAdded");

	UGadgetDisplayBar_C_HandledTeamMemberAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InNewMemberInfo != nullptr)
		*InNewMemberInfo = params.InNewMemberInfo;

}


// Function GadgetDisplayBar.GadgetDisplayBar_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void UGadgetDisplayBar_C::UpdateVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetDisplayBar.GadgetDisplayBar_C.UpdateVisibility");

	UGadgetDisplayBar_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetDisplayBar.GadgetDisplayBar_C.UpdateAssignedTeamMember
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGadgetDisplayBar_C::UpdateAssignedTeamMember()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetDisplayBar.GadgetDisplayBar_C.UpdateAssignedTeamMember");

	UGadgetDisplayBar_C_UpdateAssignedTeamMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetDisplayBar.GadgetDisplayBar_C.SetShown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShown                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGadgetDisplayBar_C::SetShown(bool bShown)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetDisplayBar.GadgetDisplayBar_C.SetShown");

	UGadgetDisplayBar_C_SetShown_Params params;
	params.bShown = bShown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetDisplayBar.GadgetDisplayBar_C.SetPlayerIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InPlayerIndex                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGadgetDisplayBar_C::SetPlayerIndex(int InPlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetDisplayBar.GadgetDisplayBar_C.SetPlayerIndex");

	UGadgetDisplayBar_C_SetPlayerIndex_Params params;
	params.InPlayerIndex = InPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetDisplayBar.GadgetDisplayBar_C.HandlePartyLeft
// (Public, BlueprintCallable, BlueprintEvent)
void UGadgetDisplayBar_C::HandlePartyLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetDisplayBar.GadgetDisplayBar_C.HandlePartyLeft");

	UGadgetDisplayBar_C_HandlePartyLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetDisplayBar.GadgetDisplayBar_C.BindTeamDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUITeamInfo*         TeamInfo                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGadgetDisplayBar_C::BindTeamDelegates(class UFortUITeamInfo* TeamInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetDisplayBar.GadgetDisplayBar_C.BindTeamDelegates");

	UGadgetDisplayBar_C_BindTeamDelegates_Params params;
	params.TeamInfo = TeamInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetDisplayBar.GadgetDisplayBar_C.RemoveAssignedTeamMember
// (Public, BlueprintCallable, BlueprintEvent)
void UGadgetDisplayBar_C::RemoveAssignedTeamMember()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetDisplayBar.GadgetDisplayBar_C.RemoveAssignedTeamMember");

	UGadgetDisplayBar_C_RemoveAssignedTeamMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetDisplayBar.GadgetDisplayBar_C.HandleTeamMemberUpdated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     InNewMemberInfo                (Parm, OutParm, ReferenceParm)
void UGadgetDisplayBar_C::HandleTeamMemberUpdated(struct FFortTeamMemberInfo* InNewMemberInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetDisplayBar.GadgetDisplayBar_C.HandleTeamMemberUpdated");

	UGadgetDisplayBar_C_HandleTeamMemberUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InNewMemberInfo != nullptr)
		*InNewMemberInfo = params.InNewMemberInfo;

}


// Function GadgetDisplayBar.GadgetDisplayBar_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
void UGadgetDisplayBar_C::BindDelegates()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetDisplayBar.GadgetDisplayBar_C.BindDelegates");

	UGadgetDisplayBar_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetDisplayBar.GadgetDisplayBar_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     InMemberInfo                   (Parm)
void UGadgetDisplayBar_C::Update(const struct FFortTeamMemberInfo& InMemberInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetDisplayBar.GadgetDisplayBar_C.Update");

	UGadgetDisplayBar_C_Update_Params params;
	params.InMemberInfo = InMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetDisplayBar.GadgetDisplayBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UGadgetDisplayBar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetDisplayBar.GadgetDisplayBar_C.Construct");

	UGadgetDisplayBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetDisplayBar.GadgetDisplayBar_C.OnTeamMemberAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewTeamMemberInfo              (Parm)
void UGadgetDisplayBar_C::OnTeamMemberAdded(const struct FFortTeamMemberInfo& NewTeamMemberInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetDisplayBar.GadgetDisplayBar_C.OnTeamMemberAdded");

	UGadgetDisplayBar_C_OnTeamMemberAdded_Params params;
	params.NewTeamMemberInfo = NewTeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetDisplayBar.GadgetDisplayBar_C.OnTeamMemberUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewTeamMemberInfo              (Parm)
void UGadgetDisplayBar_C::OnTeamMemberUpdated(const struct FFortTeamMemberInfo& NewTeamMemberInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetDisplayBar.GadgetDisplayBar_C.OnTeamMemberUpdated");

	UGadgetDisplayBar_C_OnTeamMemberUpdated_Params params;
	params.NewTeamMemberInfo = NewTeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetDisplayBar.GadgetDisplayBar_C.OnTeamMemberRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGadgetDisplayBar_C::OnTeamMemberRemoved(int PlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetDisplayBar.GadgetDisplayBar_C.OnTeamMemberRemoved");

	UGadgetDisplayBar_C_OnTeamMemberRemoved_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetDisplayBar.GadgetDisplayBar_C.ExecuteUbergraph_GadgetDisplayBar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGadgetDisplayBar_C::ExecuteUbergraph_GadgetDisplayBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetDisplayBar.GadgetDisplayBar_C.ExecuteUbergraph_GadgetDisplayBar");

	UGadgetDisplayBar_C_ExecuteUbergraph_GadgetDisplayBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
