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

// Function Hero_Management.Hero_Management_C.On Hero Stats Changed
// (Public, BlueprintCallable, BlueprintEvent)
void UHero_Management_C::On_Hero_Stats_Changed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.On Hero Stats Changed");

	UHero_Management_C_On_Hero_Stats_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.Set Main Panel Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Visible                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHero_Management_C::Set_Main_Panel_Visibility(bool Is_Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.Set Main Panel Visibility");

	UHero_Management_C_Set_Main_Panel_Visibility_Params params;
	params.Is_Visible = Is_Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.Refresh Delete Permission
// (Public, BlueprintCallable, BlueprintEvent)
void UHero_Management_C::Refresh_Delete_Permission()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.Refresh Delete Permission");

	UHero_Management_C_Refresh_Delete_Permission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.Rebuild Hero Slots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UHero_Management_C::Rebuild_Hero_Slots()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.Rebuild Hero Slots");

	UHero_Management_C_Rebuild_Hero_Slots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.On Ability Points Assigned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHero_Management_C::On_Ability_Points_Assigned(bool Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.On Ability Points Assigned");

	UHero_Management_C_On_Ability_Points_Assigned_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.On Hero Deleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHero_Management_C::On_Hero_Deleted(bool Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.On Hero Deleted");

	UHero_Management_C_On_Hero_Deleted_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.On Hero Created
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHero_Management_C::On_Hero_Created(bool Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.On Hero Created");

	UHero_Management_C_On_Hero_Created_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.Rebuild All
// (Public, BlueprintCallable, BlueprintEvent)
void UHero_Management_C::Rebuild_All()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.Rebuild All");

	UHero_Management_C_Rebuild_All_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.Hide Stats Panel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show_Panel                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHero_Management_C::Hide_Stats_Panel(bool Show_Panel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.Hide Stats Panel");

	UHero_Management_C_Hide_Stats_Panel_Params params;
	params.Show_Panel = Show_Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.Rebuild Stats Panel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UHero_Management_C::Rebuild_Stats_Panel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.Rebuild Stats Panel");

	UHero_Management_C_Rebuild_Stats_Panel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.Rebuild Skill Tree
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UHero_Management_C::Rebuild_Skill_Tree()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.Rebuild Skill Tree");

	UHero_Management_C_Rebuild_Skill_Tree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.Rebuild Core Abilities
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UHero_Management_C::Rebuild_Core_Abilities()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.Rebuild Core Abilities");

	UHero_Management_C_Rebuild_Core_Abilities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.Rebuild Main Panel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UHero_Management_C::Rebuild_Main_Panel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.Rebuild Main Panel");

	UHero_Management_C_Rebuild_Main_Panel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.Rebuild Hero List
// (Public, BlueprintCallable, BlueprintEvent)
void UHero_Management_C::Rebuild_Hero_List()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.Rebuild Hero List");

	UHero_Management_C_Rebuild_Hero_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.On Hero Selected
// (Public, BlueprintCallable, BlueprintEvent)
void UHero_Management_C::On_Hero_Selected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.On Hero Selected");

	UHero_Management_C_On_Hero_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.OnTimedOut_2CEB7D4940ED5B5499AC7991F91F4019
// (BlueprintCallable, BlueprintEvent)
void UHero_Management_C::OnTimedOut_2CEB7D4940ED5B5499AC7991F91F4019()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.OnTimedOut_2CEB7D4940ED5B5499AC7991F91F4019");

	UHero_Management_C_OnTimedOut_2CEB7D4940ED5B5499AC7991F91F4019_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.OnDeclined_2CEB7D4940ED5B5499AC7991F91F4019
// (BlueprintCallable, BlueprintEvent)
void UHero_Management_C::OnDeclined_2CEB7D4940ED5B5499AC7991F91F4019()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.OnDeclined_2CEB7D4940ED5B5499AC7991F91F4019");

	UHero_Management_C_OnDeclined_2CEB7D4940ED5B5499AC7991F91F4019_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.OnConfirmed_2CEB7D4940ED5B5499AC7991F91F4019
// (BlueprintCallable, BlueprintEvent)
void UHero_Management_C::OnConfirmed_2CEB7D4940ED5B5499AC7991F91F4019()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.OnConfirmed_2CEB7D4940ED5B5499AC7991F91F4019");

	UHero_Management_C_OnConfirmed_2CEB7D4940ED5B5499AC7991F91F4019_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UHero_Management_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.Construct");

	UHero_Management_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.BndEvt__[Tab] Stats_K2Node_ComponentBoundEvent_532_FortSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SELECTED                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHero_Management_C::BndEvt___Tab__Stats_K2Node_ComponentBoundEvent_532_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.BndEvt__[Tab] Stats_K2Node_ComponentBoundEvent_532_FortSelectedStateChanged__DelegateSignature");

	UHero_Management_C_BndEvt___Tab__Stats_K2Node_ComponentBoundEvent_532_FortSelectedStateChanged__DelegateSignature_Params params;
	params.Button = Button;
	params.SELECTED = SELECTED;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.BndEvt__[Button] Close Stats_K2Node_ComponentBoundEvent_606_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHero_Management_C::BndEvt___Button__Close_Stats_K2Node_ComponentBoundEvent_606_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.BndEvt__[Button] Close Stats_K2Node_ComponentBoundEvent_606_FortBaseButtonClicked__DelegateSignature");

	UHero_Management_C_BndEvt___Button__Close_Stats_K2Node_ComponentBoundEvent_606_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.BndEvt__[Button] Respec_K2Node_ComponentBoundEvent_693_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHero_Management_C::BndEvt___Button__Respec_K2Node_ComponentBoundEvent_693_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.BndEvt__[Button] Respec_K2Node_ComponentBoundEvent_693_FortBaseButtonClicked__DelegateSignature");

	UHero_Management_C_BndEvt___Button__Respec_K2Node_ComponentBoundEvent_693_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.BndEvt__[Button] Delete_K2Node_ComponentBoundEvent_827_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHero_Management_C::BndEvt___Button__Delete_K2Node_ComponentBoundEvent_827_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.BndEvt__[Button] Delete_K2Node_ComponentBoundEvent_827_FortBaseButtonClicked__DelegateSignature");

	UHero_Management_C_BndEvt___Button__Delete_K2Node_ComponentBoundEvent_827_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Hero_Management.Hero_Management_C.ExecuteUbergraph_Hero_Management
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHero_Management_C::ExecuteUbergraph_Hero_Management(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Hero_Management.Hero_Management_C.ExecuteUbergraph_Hero_Management");

	UHero_Management_C_ExecuteUbergraph_Hero_Management_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
