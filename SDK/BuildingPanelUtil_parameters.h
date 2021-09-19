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

// Function BuildingPanelUtil.BuildingPanelUtil_C.Get Attribute Modifier Header Text
struct UBuildingPanelUtil_C_Get_Attribute_Modifier_Header_Text_Params
{
	struct FFortAttributeInfo                          Attribute_Info;                                            // (Parm)
	struct FGameplayTagContainer                       Required_Tags;                                             // (Parm)
	struct FText                                       Required_Gameplay_Tags_Description;                        // (Parm)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BuildingPanelUtil.BuildingPanelUtil_C.Create Attribute Modifier Tool Tip
struct UBuildingPanelUtil_C_Create_Attribute_Modifier_Tool_Tip_Params
{
	class APlayerController*                           Owning_Player;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortAttributeInfo                          Attribute_Info;                                            // (Parm)
	struct FGameplayTagContainer                       Required_Gameplay_Tags;                                    // (Parm)
	struct FText                                       Required_Gameplay_Tags_Description;                        // (Parm)
	struct FText                                       Modifier_Source;                                           // (Parm)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidget*                                     Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BuildingPanelUtil.BuildingPanelUtil_C.Get Traits Of Workers
struct UBuildingPanelUtil_C_Get_Traits_Of_Workers_Params
{
	TArray<class UFortWorker*>                         Workers;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       Chief_Personality;                                         // (Parm, OutParm)
	struct FGameplayTagContainer                       Crew_Personalities;                                        // (Parm, OutParm)
	struct FGameplayTagContainer                       Crew_Set_Bonuses;                                          // (Parm, OutParm)
};

// Function BuildingPanelUtil.BuildingPanelUtil_C.Calculate Current Pulsing Highlight Color
struct UBuildingPanelUtil_C_Calculate_Current_Pulsing_Highlight_Color_Params
{
	struct FLinearColor                                Base_Color;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Hightlight_Color;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Current_Color;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BuildingPanelUtil.BuildingPanelUtil_C.Get Worker Bonus Text
struct UBuildingPanelUtil_C_Get_Worker_Bonus_Text_Params
{
	class UHomeBaseWorker*                             Worker;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Bonus_Text;                                                // (Parm, OutParm)
};

// Function BuildingPanelUtil.BuildingPanelUtil_C.EnsureIconBrush
struct UBuildingPanelUtil_C_EnsureIconBrush_Params
{
	struct FFortMultiSizeBrush                         Multi_size_Brush;                                          // (Parm)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateBrush                                 Brush;                                                     // (Parm, OutParm)
};

// Function BuildingPanelUtil.BuildingPanelUtil_C.InitItemWidget
struct UBuildingPanelUtil_C_InitItemWidget_Params
{
	class UFortItemWidget*                             Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortItem*                                   Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
