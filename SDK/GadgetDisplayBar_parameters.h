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

// Function GadgetDisplayBar.GadgetDisplayBar_C.HandledTeamMemberAdded
struct UGadgetDisplayBar_C_HandledTeamMemberAdded_Params
{
	struct FFortTeamMemberInfo                         InNewMemberInfo;                                           // (Parm, OutParm, ReferenceParm)
};

// Function GadgetDisplayBar.GadgetDisplayBar_C.UpdateVisibility
struct UGadgetDisplayBar_C_UpdateVisibility_Params
{
};

// Function GadgetDisplayBar.GadgetDisplayBar_C.UpdateAssignedTeamMember
struct UGadgetDisplayBar_C_UpdateAssignedTeamMember_Params
{
};

// Function GadgetDisplayBar.GadgetDisplayBar_C.SetShown
struct UGadgetDisplayBar_C_SetShown_Params
{
	bool                                               bShown;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GadgetDisplayBar.GadgetDisplayBar_C.SetPlayerIndex
struct UGadgetDisplayBar_C_SetPlayerIndex_Params
{
	int                                                InPlayerIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GadgetDisplayBar.GadgetDisplayBar_C.HandlePartyLeft
struct UGadgetDisplayBar_C_HandlePartyLeft_Params
{
};

// Function GadgetDisplayBar.GadgetDisplayBar_C.BindTeamDelegates
struct UGadgetDisplayBar_C_BindTeamDelegates_Params
{
	class UFortUITeamInfo*                             TeamInfo;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GadgetDisplayBar.GadgetDisplayBar_C.RemoveAssignedTeamMember
struct UGadgetDisplayBar_C_RemoveAssignedTeamMember_Params
{
};

// Function GadgetDisplayBar.GadgetDisplayBar_C.HandleTeamMemberUpdated
struct UGadgetDisplayBar_C_HandleTeamMemberUpdated_Params
{
	struct FFortTeamMemberInfo                         InNewMemberInfo;                                           // (Parm, OutParm, ReferenceParm)
};

// Function GadgetDisplayBar.GadgetDisplayBar_C.BindDelegates
struct UGadgetDisplayBar_C_BindDelegates_Params
{
};

// Function GadgetDisplayBar.GadgetDisplayBar_C.Update
struct UGadgetDisplayBar_C_Update_Params
{
	struct FFortTeamMemberInfo                         InMemberInfo;                                              // (Parm)
};

// Function GadgetDisplayBar.GadgetDisplayBar_C.Construct
struct UGadgetDisplayBar_C_Construct_Params
{
};

// Function GadgetDisplayBar.GadgetDisplayBar_C.OnTeamMemberAdded
struct UGadgetDisplayBar_C_OnTeamMemberAdded_Params
{
	struct FFortTeamMemberInfo                         NewTeamMemberInfo;                                         // (Parm)
};

// Function GadgetDisplayBar.GadgetDisplayBar_C.OnTeamMemberUpdated
struct UGadgetDisplayBar_C_OnTeamMemberUpdated_Params
{
	struct FFortTeamMemberInfo                         NewTeamMemberInfo;                                         // (Parm)
};

// Function GadgetDisplayBar.GadgetDisplayBar_C.OnTeamMemberRemoved
struct UGadgetDisplayBar_C_OnTeamMemberRemoved_Params
{
	int                                                PlayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GadgetDisplayBar.GadgetDisplayBar_C.ExecuteUbergraph_GadgetDisplayBar
struct UGadgetDisplayBar_C_ExecuteUbergraph_GadgetDisplayBar_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
