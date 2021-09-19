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

// Function Hero_Management.Hero_Management_C.On Hero Stats Changed
struct UHero_Management_C_On_Hero_Stats_Changed_Params
{
};

// Function Hero_Management.Hero_Management_C.Set Main Panel Visibility
struct UHero_Management_C_Set_Main_Panel_Visibility_Params
{
	bool                                               Is_Visible;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Hero_Management.Hero_Management_C.Refresh Delete Permission
struct UHero_Management_C_Refresh_Delete_Permission_Params
{
};

// Function Hero_Management.Hero_Management_C.Rebuild Hero Slots
struct UHero_Management_C_Rebuild_Hero_Slots_Params
{
};

// Function Hero_Management.Hero_Management_C.On Ability Points Assigned
struct UHero_Management_C_On_Ability_Points_Assigned_Params
{
	bool                                               Success;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Hero_Management.Hero_Management_C.On Hero Deleted
struct UHero_Management_C_On_Hero_Deleted_Params
{
	bool                                               Success;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Hero_Management.Hero_Management_C.On Hero Created
struct UHero_Management_C_On_Hero_Created_Params
{
	bool                                               Success;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Hero_Management.Hero_Management_C.Rebuild All
struct UHero_Management_C_Rebuild_All_Params
{
};

// Function Hero_Management.Hero_Management_C.Hide Stats Panel
struct UHero_Management_C_Hide_Stats_Panel_Params
{
	bool                                               Show_Panel;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Hero_Management.Hero_Management_C.Rebuild Stats Panel
struct UHero_Management_C_Rebuild_Stats_Panel_Params
{
};

// Function Hero_Management.Hero_Management_C.Rebuild Skill Tree
struct UHero_Management_C_Rebuild_Skill_Tree_Params
{
};

// Function Hero_Management.Hero_Management_C.Rebuild Core Abilities
struct UHero_Management_C_Rebuild_Core_Abilities_Params
{
};

// Function Hero_Management.Hero_Management_C.Rebuild Main Panel
struct UHero_Management_C_Rebuild_Main_Panel_Params
{
};

// Function Hero_Management.Hero_Management_C.Rebuild Hero List
struct UHero_Management_C_Rebuild_Hero_List_Params
{
};

// Function Hero_Management.Hero_Management_C.On Hero Selected
struct UHero_Management_C_On_Hero_Selected_Params
{
};

// Function Hero_Management.Hero_Management_C.OnTimedOut_2CEB7D4940ED5B5499AC7991F91F4019
struct UHero_Management_C_OnTimedOut_2CEB7D4940ED5B5499AC7991F91F4019_Params
{
};

// Function Hero_Management.Hero_Management_C.OnDeclined_2CEB7D4940ED5B5499AC7991F91F4019
struct UHero_Management_C_OnDeclined_2CEB7D4940ED5B5499AC7991F91F4019_Params
{
};

// Function Hero_Management.Hero_Management_C.OnConfirmed_2CEB7D4940ED5B5499AC7991F91F4019
struct UHero_Management_C_OnConfirmed_2CEB7D4940ED5B5499AC7991F91F4019_Params
{
};

// Function Hero_Management.Hero_Management_C.Construct
struct UHero_Management_C_Construct_Params
{
};

// Function Hero_Management.Hero_Management_C.BndEvt__[Tab] Stats_K2Node_ComponentBoundEvent_532_FortSelectedStateChanged__DelegateSignature
struct UHero_Management_C_BndEvt___Tab__Stats_K2Node_ComponentBoundEvent_532_FortSelectedStateChanged__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SELECTED;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Hero_Management.Hero_Management_C.BndEvt__[Button] Close Stats_K2Node_ComponentBoundEvent_606_FortBaseButtonClicked__DelegateSignature
struct UHero_Management_C_BndEvt___Button__Close_Stats_K2Node_ComponentBoundEvent_606_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Hero_Management.Hero_Management_C.BndEvt__[Button] Respec_K2Node_ComponentBoundEvent_693_FortBaseButtonClicked__DelegateSignature
struct UHero_Management_C_BndEvt___Button__Respec_K2Node_ComponentBoundEvent_693_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Hero_Management.Hero_Management_C.BndEvt__[Button] Delete_K2Node_ComponentBoundEvent_827_FortBaseButtonClicked__DelegateSignature
struct UHero_Management_C_BndEvt___Button__Delete_K2Node_ComponentBoundEvent_827_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Hero_Management.Hero_Management_C.ExecuteUbergraph_Hero_Management
struct UHero_Management_C_ExecuteUbergraph_Hero_Management_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
