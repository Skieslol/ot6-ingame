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

// Function PowerRequirement.PowerRequirement_C.GenerateToolTipWidget
struct UPowerRequirement_C_GenerateToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PowerRequirement.PowerRequirement_C.SetUIForRequired
struct UPowerRequirement_C_SetUIForRequired_Params
{
	int                                                PartyPower;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PowerRequirement.PowerRequirement_C.SetUIForRecommended
struct UPowerRequirement_C_SetUIForRecommended_Params
{
	int                                                PartyPower;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PowerRequirement.PowerRequirement_C.Update
struct UPowerRequirement_C_Update_Params
{
	int                                                TeamPower;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PowerRequirement.PowerRequirement_C.SetRequirements
struct UPowerRequirement_C_SetRequirements_Params
{
	int                                                RequiredPower;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                RecommendedPower;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PowerRequirement.PowerRequirement_C.Construct
struct UPowerRequirement_C_Construct_Params
{
};

// Function PowerRequirement.PowerRequirement_C.HandleTeamPowerChanged
struct UPowerRequirement_C_HandleTeamPowerChanged_Params
{
	int                                                TeamPower;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                PersonalPower;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PowerRequirement.PowerRequirement_C.ExecuteUbergraph_PowerRequirement
struct UPowerRequirement_C_ExecuteUbergraph_PowerRequirement_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
