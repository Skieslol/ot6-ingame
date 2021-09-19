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

// Function TooltipLibrary.TooltipLibrary_C.Create Core Stat Tooltip
struct UTooltipLibrary_C_Create_Core_Stat_Tooltip_Params
{
	class APlayerController*                           Owning_Player;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHeroCoreStat                               Data;                                                      // (Parm)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUserWidget*                                 Output;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TooltipLibrary.TooltipLibrary_C.Create Basic Multi Line Tooltip
struct UTooltipLibrary_C_Create_Basic_Multi_Line_Tooltip_Params
{
	class APlayerController*                           Owning_Player;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FText>                               Body_Text;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       Header_Text;                                               // (Parm)
	class USlateBrushAsset*                            Icon_Brush;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUserWidget*                                 Output;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TooltipLibrary.TooltipLibrary_C.Create Compare Item Tooltip
struct UTooltipLibrary_C_Create_Compare_Item_Tooltip_Params
{
	class APlayerController*                           Owning_Player;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Header_Text;                                               // (Parm)
	class USlateBrushAsset*                            Header_Icon;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortItem*                                   Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortItem*                                   ComparedItem;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidget*                                     Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TooltipLibrary.TooltipLibrary_C.Create Item Tooltip
struct UTooltipLibrary_C_Create_Item_Tooltip_Params
{
	class APlayerController*                           Owning_Player;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Header_Text;                                               // (Parm)
	class USlateBrushAsset*                            Header_Icon;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortItem*                                   Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidget*                                     Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TooltipLibrary.TooltipLibrary_C.Set Enabled And Tooltip Text
struct UTooltipLibrary_C_Set_Enabled_And_Tooltip_Text_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Enabled;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Tooltip_Text;                                              // (Parm)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TooltipLibrary.TooltipLibrary_C.Create Custom Tooltip
struct UTooltipLibrary_C_Create_Custom_Tooltip_Params
{
	class APlayerController*                           Owning_Player;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Header_Text;                                               // (Parm)
	class USlateBrushAsset*                            Icon_Brush;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUserWidget*                                 Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUserWidget*                                 Output;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TooltipLibrary.TooltipLibrary_C.Create Basic Tooltip
struct UTooltipLibrary_C_Create_Basic_Tooltip_Params
{
	class APlayerController*                           Owning_Player;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Body_Text;                                                 // (Parm)
	struct FText                                       Header_Text;                                               // (Parm)
	class USlateBrushAsset*                            Icon_Brush;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUserWidget*                                 Output;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
