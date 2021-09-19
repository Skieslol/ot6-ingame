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

// Function GadgetSelectBar.GadgetSelectBar_C.SetShown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShown                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGadgetSelectBar_C::SetShown(bool bShown)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectBar.GadgetSelectBar_C.SetShown");

	UGadgetSelectBar_C_SetShown_Params params;
	params.bShown = bShown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetSelectBar.GadgetSelectBar_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
void UGadgetSelectBar_C::BindDelegates()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectBar.GadgetSelectBar_C.BindDelegates");

	UGadgetSelectBar_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetSelectBar.GadgetSelectBar_C.SelectGadget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*          Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGadgetSelectBar_C::SelectGadget(class UFortWorldItem* Item, int Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectBar.GadgetSelectBar_C.SelectGadget");

	UGadgetSelectBar_C_SelectGadget_Params params;
	params.Item = Item;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetSelectBar.GadgetSelectBar_C.InitGadget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGadgetSelectButton_C*   Item_Widget                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Slot_Index                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGadgetSelectBar_C::InitGadget(class UGadgetSelectButton_C* Item_Widget, int Slot_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectBar.GadgetSelectBar_C.InitGadget");

	UGadgetSelectBar_C_InitGadget_Params params;
	params.Item_Widget = Item_Widget;
	params.Slot_Index = Slot_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetSelectBar.GadgetSelectBar_C.InitBar
// (Public, BlueprintCallable, BlueprintEvent)
void UGadgetSelectBar_C::InitBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectBar.GadgetSelectBar_C.InitBar");

	UGadgetSelectBar_C_InitBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetSelectBar.GadgetSelectBar_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
void UGadgetSelectBar_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectBar.GadgetSelectBar_C.Init");

	UGadgetSelectBar_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetSelectBar.GadgetSelectBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UGadgetSelectBar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectBar.GadgetSelectBar_C.Construct");

	UGadgetSelectBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetSelectBar.GadgetSelectBar_C.BndEvt__GadgetItem2_K2Node_ComponentBoundEvent_957_GadgetSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortWorldItem*          Gadget                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGadgetSelectBar_C::BndEvt__GadgetItem2_K2Node_ComponentBoundEvent_957_GadgetSelected__DelegateSignature(class UFortWorldItem* Gadget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectBar.GadgetSelectBar_C.BndEvt__GadgetItem2_K2Node_ComponentBoundEvent_957_GadgetSelected__DelegateSignature");

	UGadgetSelectBar_C_BndEvt__GadgetItem2_K2Node_ComponentBoundEvent_957_GadgetSelected__DelegateSignature_Params params;
	params.Gadget = Gadget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetSelectBar.GadgetSelectBar_C.BndEvt__GadgetItem1_K2Node_ComponentBoundEvent_960_GadgetSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortWorldItem*          Gadget                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGadgetSelectBar_C::BndEvt__GadgetItem1_K2Node_ComponentBoundEvent_960_GadgetSelected__DelegateSignature(class UFortWorldItem* Gadget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectBar.GadgetSelectBar_C.BndEvt__GadgetItem1_K2Node_ComponentBoundEvent_960_GadgetSelected__DelegateSignature");

	UGadgetSelectBar_C_BndEvt__GadgetItem1_K2Node_ComponentBoundEvent_960_GadgetSelected__DelegateSignature_Params params;
	params.Gadget = Gadget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetSelectBar.GadgetSelectBar_C.HandleAccountInfoChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPrivateAccountInfo NewInfo                        (Parm)
void UGadgetSelectBar_C::HandleAccountInfoChanged(const struct FFortPrivateAccountInfo& NewInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectBar.GadgetSelectBar_C.HandleAccountInfoChanged");

	UGadgetSelectBar_C_HandleAccountInfoChanged_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetSelectBar.GadgetSelectBar_C.HandleLobbyStarted
// (BlueprintCallable, BlueprintEvent)
void UGadgetSelectBar_C::HandleLobbyStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectBar.GadgetSelectBar_C.HandleLobbyStarted");

	UGadgetSelectBar_C_HandleLobbyStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetSelectBar.GadgetSelectBar_C.HandleHomebaseInventoryUpdated
// (BlueprintCallable, BlueprintEvent)
void UGadgetSelectBar_C::HandleHomebaseInventoryUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectBar.GadgetSelectBar_C.HandleHomebaseInventoryUpdated");

	UGadgetSelectBar_C_HandleHomebaseInventoryUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetSelectBar.GadgetSelectBar_C.ExecuteUbergraph_GadgetSelectBar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGadgetSelectBar_C::ExecuteUbergraph_GadgetSelectBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectBar.GadgetSelectBar_C.ExecuteUbergraph_GadgetSelectBar");

	UGadgetSelectBar_C_ExecuteUbergraph_GadgetSelectBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
