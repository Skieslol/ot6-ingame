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

// Function GadgetSelectBar.GadgetSelectBar_C.SetShown
struct UGadgetSelectBar_C_SetShown_Params
{
	bool                                               bShown;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GadgetSelectBar.GadgetSelectBar_C.BindDelegates
struct UGadgetSelectBar_C_BindDelegates_Params
{
};

// Function GadgetSelectBar.GadgetSelectBar_C.SelectGadget
struct UGadgetSelectBar_C_SelectGadget_Params
{
	class UFortWorldItem*                              Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GadgetSelectBar.GadgetSelectBar_C.InitGadget
struct UGadgetSelectBar_C_InitGadget_Params
{
	class UGadgetSelectButton_C*                       Item_Widget;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Slot_Index;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GadgetSelectBar.GadgetSelectBar_C.InitBar
struct UGadgetSelectBar_C_InitBar_Params
{
};

// Function GadgetSelectBar.GadgetSelectBar_C.Init
struct UGadgetSelectBar_C_Init_Params
{
};

// Function GadgetSelectBar.GadgetSelectBar_C.Construct
struct UGadgetSelectBar_C_Construct_Params
{
};

// Function GadgetSelectBar.GadgetSelectBar_C.BndEvt__GadgetItem2_K2Node_ComponentBoundEvent_957_GadgetSelected__DelegateSignature
struct UGadgetSelectBar_C_BndEvt__GadgetItem2_K2Node_ComponentBoundEvent_957_GadgetSelected__DelegateSignature_Params
{
	class UFortWorldItem*                              Gadget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GadgetSelectBar.GadgetSelectBar_C.BndEvt__GadgetItem1_K2Node_ComponentBoundEvent_960_GadgetSelected__DelegateSignature
struct UGadgetSelectBar_C_BndEvt__GadgetItem1_K2Node_ComponentBoundEvent_960_GadgetSelected__DelegateSignature_Params
{
	class UFortWorldItem*                              Gadget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GadgetSelectBar.GadgetSelectBar_C.HandleAccountInfoChanged
struct UGadgetSelectBar_C_HandleAccountInfoChanged_Params
{
	struct FFortPrivateAccountInfo                     NewInfo;                                                   // (Parm)
};

// Function GadgetSelectBar.GadgetSelectBar_C.HandleLobbyStarted
struct UGadgetSelectBar_C_HandleLobbyStarted_Params
{
};

// Function GadgetSelectBar.GadgetSelectBar_C.HandleHomebaseInventoryUpdated
struct UGadgetSelectBar_C_HandleHomebaseInventoryUpdated_Params
{
};

// Function GadgetSelectBar.GadgetSelectBar_C.ExecuteUbergraph_GadgetSelectBar
struct UGadgetSelectBar_C_ExecuteUbergraph_GadgetSelectBar_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
