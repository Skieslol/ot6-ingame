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

// Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.SetMasterSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCanEdit                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOutpost_CanEditPanel_C::SetMasterSwitch(bool bCanEdit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.SetMasterSwitch");

	UOutpost_CanEditPanel_C_SetMasterSwitch_Params params;
	params.bCanEdit = bCanEdit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerOutpost* InOutpostOwner                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOutpost_CanEditPanel_C::Init(class AFortPlayerControllerOutpost* InOutpostOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.Init");

	UOutpost_CanEditPanel_C_Init_Params params;
	params.InOutpostOwner = InOutpostOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SELECTED                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOutpost_CanEditPanel_C::BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature");

	UOutpost_CanEditPanel_C_BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature_Params params;
	params.Button = Button;
	params.SELECTED = SELECTED;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UOutpost_CanEditPanel_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.Construct");

	UOutpost_CanEditPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.HandleJoined
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewTeamMemberInfo              (Parm)
void UOutpost_CanEditPanel_C::HandleJoined(const struct FFortTeamMemberInfo& NewTeamMemberInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.HandleJoined");

	UOutpost_CanEditPanel_C_HandleJoined_Params params;
	params.NewTeamMemberInfo = NewTeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.HandleRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOutpost_CanEditPanel_C::HandleRemoved(int PlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.HandleRemoved");

	UOutpost_CanEditPanel_C_HandleRemoved_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.ExecuteUbergraph_Outpost_CanEditPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOutpost_CanEditPanel_C::ExecuteUbergraph_Outpost_CanEditPanel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.ExecuteUbergraph_Outpost_CanEditPanel");

	UOutpost_CanEditPanel_C_ExecuteUbergraph_Outpost_CanEditPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
