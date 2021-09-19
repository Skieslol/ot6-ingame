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

// Function BuildingLevelWidget.BuildingLevelWidget_C.Update
struct UBuildingLevelWidget_C_Update_Params
{
};

// Function BuildingLevelWidget.BuildingLevelWidget_C.Set Brush Size
struct UBuildingLevelWidget_C_Set_Brush_Size_Params
{
	TEnumAsByte<FortniteGame_EFortBrushSize>           New_Size;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BuildingLevelWidget.BuildingLevelWidget_C.Set Level
struct UBuildingLevelWidget_C_Set_Level_Params
{
	int                                                New_Level;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BuildingLevelWidget.BuildingLevelWidget_C.Construct
struct UBuildingLevelWidget_C_Construct_Params
{
};

// Function BuildingLevelWidget.BuildingLevelWidget_C.ExecuteUbergraph_BuildingLevelWidget
struct UBuildingLevelWidget_C_ExecuteUbergraph_BuildingLevelWidget_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
