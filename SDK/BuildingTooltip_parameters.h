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

// Function BuildingTooltip.BuildingTooltip_C.SetupTooltip
struct UBuildingTooltip_C_SetupTooltip_Params
{
	struct FString                                     InBuildingTemplateId;                                      // (Parm, ZeroConstructor)
};

// Function BuildingTooltip.BuildingTooltip_C.GetGadget
struct UBuildingTooltip_C_GetGadget_Params
{
	class UHomeBaseBuilding*                           Building;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortItemDefinition*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BuildingTooltip.BuildingTooltip_C.Set Visible
struct UBuildingTooltip_C_Set_Visible_Params
{
	bool                                               In_Visible;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BuildingTooltip.BuildingTooltip_C.Construct
struct UBuildingTooltip_C_Construct_Params
{
};

// Function BuildingTooltip.BuildingTooltip_C.ExecuteUbergraph_BuildingTooltip
struct UBuildingTooltip_C_ExecuteUbergraph_BuildingTooltip_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
