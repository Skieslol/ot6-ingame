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

// Function GadgetSelectButton.GadgetSelectButton_C.On_EmptySlot_MouseButtonDown_1
struct UGadgetSelectButton_C_On_EmptySlot_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function GadgetSelectButton.GadgetSelectButton_C.On_Locked_MouseButtonDown_1
struct UGadgetSelectButton_C_On_Locked_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function GadgetSelectButton.GadgetSelectButton_C.Get_EmptySlot_ToolTipWidget_1
struct UGadgetSelectButton_C_Get_EmptySlot_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GadgetSelectButton.GadgetSelectButton_C.Get_Locked_ToolTipWidget_1
struct UGadgetSelectButton_C_Get_Locked_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GadgetSelectButton.GadgetSelectButton_C.InternalInit
struct UGadgetSelectButton_C_InternalInit_Params
{
};

// Function GadgetSelectButton.GadgetSelectButton_C.Init
struct UGadgetSelectButton_C_Init_Params
{
	class UFortWorldItem*                              Gadget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UFortWorldItem*>                      AvailableGadgets;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GadgetSelectButton.GadgetSelectButton_C.Construct
struct UGadgetSelectButton_C_Construct_Params
{
};

// Function GadgetSelectButton.GadgetSelectButton_C.BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature
struct UGadgetSelectButton_C_BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature_Params
{
	class UObject*                                     Data;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortGridPickerTile*                         Tile;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GadgetSelectButton.GadgetSelectButton_C.BndEvt__Item_K2Node_ComponentBoundEvent_56_FortBaseButtonClicked__DelegateSignature
struct UGadgetSelectButton_C_BndEvt__Item_K2Node_ComponentBoundEvent_56_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GadgetSelectButton.GadgetSelectButton_C.ExecuteUbergraph_GadgetSelectButton
struct UGadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GadgetSelectButton.GadgetSelectButton_C.GadgetSelected__DelegateSignature
struct UGadgetSelectButton_C_GadgetSelected__DelegateSignature_Params
{
	class UFortWorldItem*                              Gadget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
