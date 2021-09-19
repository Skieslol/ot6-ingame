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

// Function TheaterTooltip.TheaterTooltip_C.Get Theater Info
struct UTheaterTooltip_C_Get_Theater_Info_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function TheaterTooltip.TheaterTooltip_C.SetPassengetInfoVisible
struct UTheaterTooltip_C_SetPassengetInfoVisible_Params
{
	bool                                               INDEX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TheaterTooltip.TheaterTooltip_C.Get Region Count
struct UTheaterTooltip_C_Get_Region_Count_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function TheaterTooltip.TheaterTooltip_C.Get Theater Difficulty
struct UTheaterTooltip_C_Get_Theater_Difficulty_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function TheaterTooltip.TheaterTooltip_C.Get Theater Name
struct UTheaterTooltip_C_Get_Theater_Name_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function TheaterTooltip.TheaterTooltip_C.Set Visibile
struct UTheaterTooltip_C_Set_Visibile_Params
{
	bool                                               Visibile;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       InfoText;                                                  // (Parm)
};

// Function TheaterTooltip.TheaterTooltip_C.Set Theater Index
struct UTheaterTooltip_C_Set_Theater_Index_Params
{
	int                                                INDEX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TheaterTooltip.TheaterTooltip_C.Construct
struct UTheaterTooltip_C_Construct_Params
{
};

// Function TheaterTooltip.TheaterTooltip_C.HandleLocalPlayerStateChange
struct UTheaterTooltip_C_HandleLocalPlayerStateChange_Params
{
	struct FFortTeamMemberInfo                         PlayerInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TheaterTooltip.TheaterTooltip_C.ExecuteUbergraph_TheaterTooltip
struct UTheaterTooltip_C_ExecuteUbergraph_TheaterTooltip_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
