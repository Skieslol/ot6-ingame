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

// Function GadgetSelectButton.GadgetSelectButton_C.On_EmptySlot_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UGadgetSelectButton_C::On_EmptySlot_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectButton.GadgetSelectButton_C.On_EmptySlot_MouseButtonDown_1");

	UGadgetSelectButton_C_On_EmptySlot_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function GadgetSelectButton.GadgetSelectButton_C.On_Locked_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UGadgetSelectButton_C::On_Locked_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectButton.GadgetSelectButton_C.On_Locked_MouseButtonDown_1");

	UGadgetSelectButton_C_On_Locked_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function GadgetSelectButton.GadgetSelectButton_C.Get_EmptySlot_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWidget* UGadgetSelectButton_C::Get_EmptySlot_ToolTipWidget_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectButton.GadgetSelectButton_C.Get_EmptySlot_ToolTipWidget_1");

	UGadgetSelectButton_C_Get_EmptySlot_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GadgetSelectButton.GadgetSelectButton_C.Get_Locked_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWidget* UGadgetSelectButton_C::Get_Locked_ToolTipWidget_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectButton.GadgetSelectButton_C.Get_Locked_ToolTipWidget_1");

	UGadgetSelectButton_C_Get_Locked_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GadgetSelectButton.GadgetSelectButton_C.InternalInit
// (Private, BlueprintCallable, BlueprintEvent)
void UGadgetSelectButton_C::InternalInit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectButton.GadgetSelectButton_C.InternalInit");

	UGadgetSelectButton_C_InternalInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetSelectButton.GadgetSelectButton_C.Init
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*          Gadget                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortWorldItem*>  AvailableGadgets               (Parm, OutParm, ZeroConstructor, ReferenceParm)
void UGadgetSelectButton_C::Init(class UFortWorldItem* Gadget, TArray<class UFortWorldItem*>* AvailableGadgets)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectButton.GadgetSelectButton_C.Init");

	UGadgetSelectButton_C_Init_Params params;
	params.Gadget = Gadget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AvailableGadgets != nullptr)
		*AvailableGadgets = params.AvailableGadgets;

}


// Function GadgetSelectButton.GadgetSelectButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UGadgetSelectButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectButton.GadgetSelectButton_C.Construct");

	UGadgetSelectButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetSelectButton.GadgetSelectButton_C.BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                 Data                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGridPickerTile*     Tile                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGadgetSelectButton_C::BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature(class UObject* Data, class UFortGridPickerTile* Tile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectButton.GadgetSelectButton_C.BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature");

	UGadgetSelectButton_C_BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature_Params params;
	params.Data = Data;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetSelectButton.GadgetSelectButton_C.BndEvt__Item_K2Node_ComponentBoundEvent_56_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGadgetSelectButton_C::BndEvt__Item_K2Node_ComponentBoundEvent_56_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectButton.GadgetSelectButton_C.BndEvt__Item_K2Node_ComponentBoundEvent_56_FortBaseButtonClicked__DelegateSignature");

	UGadgetSelectButton_C_BndEvt__Item_K2Node_ComponentBoundEvent_56_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetSelectButton.GadgetSelectButton_C.ExecuteUbergraph_GadgetSelectButton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGadgetSelectButton_C::ExecuteUbergraph_GadgetSelectButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectButton.GadgetSelectButton_C.ExecuteUbergraph_GadgetSelectButton");

	UGadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetSelectButton.GadgetSelectButton_C.GadgetSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*          Gadget                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGadgetSelectButton_C::GadgetSelected__DelegateSignature(class UFortWorldItem* Gadget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectButton.GadgetSelectButton_C.GadgetSelected__DelegateSignature");

	UGadgetSelectButton_C_GadgetSelected__DelegateSignature_Params params;
	params.Gadget = Gadget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
