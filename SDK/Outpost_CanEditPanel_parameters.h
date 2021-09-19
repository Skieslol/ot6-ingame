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

// Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.SetMasterSwitch
struct UOutpost_CanEditPanel_C_SetMasterSwitch_Params
{
	bool                                               bCanEdit;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.Init
struct UOutpost_CanEditPanel_C_Init_Params
{
	class AFortPlayerControllerOutpost*                InOutpostOwner;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature
struct UOutpost_CanEditPanel_C_BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SELECTED;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.Construct
struct UOutpost_CanEditPanel_C_Construct_Params
{
};

// Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.HandleJoined
struct UOutpost_CanEditPanel_C_HandleJoined_Params
{
	struct FFortTeamMemberInfo                         NewTeamMemberInfo;                                         // (Parm)
};

// Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.HandleRemoved
struct UOutpost_CanEditPanel_C_HandleRemoved_Params
{
	int                                                PlayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Outpost_CanEditPanel.Outpost_CanEditPanel_C.ExecuteUbergraph_Outpost_CanEditPanel
struct UOutpost_CanEditPanel_C_ExecuteUbergraph_Outpost_CanEditPanel_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
