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

// Function Tooltip-Item.Tooltip-Item_C.Build Durability
struct UTooltip_Item_C_Build_Durability_Params
{
};

// Function Tooltip-Item.Tooltip-Item_C.Build Consumable Stats
struct UTooltip_Item_C_Build_Consumable_Stats_Params
{
};

// Function Tooltip-Item.Tooltip-Item_C.Build Trap Stats
struct UTooltip_Item_C_Build_Trap_Stats_Params
{
};

// Function Tooltip-Item.Tooltip-Item_C.Build Alteration Info
struct UTooltip_Item_C_Build_Alteration_Info_Params
{
};

// Function Tooltip-Item.Tooltip-Item_C.Build Worker Stats
struct UTooltip_Item_C_Build_Worker_Stats_Params
{
};

// Function Tooltip-Item.Tooltip-Item_C.Build Weapon DPS Stat
struct UTooltip_Item_C_Build_Weapon_DPS_Stat_Params
{
};

// Function Tooltip-Item.Tooltip-Item_C.Get Scaled Stat (float)
struct UTooltip_Item_C_Get_Scaled_Stat__float__Params
{
	float                                              Base_Stat;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Scaling;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Scaled_Stat;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tooltip-Item.Tooltip-Item_C.Build Base Weapon Stats
struct UTooltip_Item_C_Build_Base_Weapon_Stats_Params
{
	struct FFortBaseWeaponStats                        Data;                                                      // (Parm)
};

// Function Tooltip-Item.Tooltip-Item_C.Build Melee Weapon Stats
struct UTooltip_Item_C_Build_Melee_Weapon_Stats_Params
{
	struct FFortMeleeWeaponStats                       Data;                                                      // (Parm)
};

// Function Tooltip-Item.Tooltip-Item_C.Build Ranged Weapon Stats
struct UTooltip_Item_C_Build_Ranged_Weapon_Stats_Params
{
	struct FFortRangedWeaponStats                      Data;                                                      // (Parm)
};

// Function Tooltip-Item.Tooltip-Item_C.Build Basic Info
struct UTooltip_Item_C_Build_Basic_Info_Params
{
};

// Function Tooltip-Item.Tooltip-Item_C.Build Weapon Stats
struct UTooltip_Item_C_Build_Weapon_Stats_Params
{
};

// Function Tooltip-Item.Tooltip-Item_C.Set Item Data
struct UTooltip_Item_C_Set_Item_Data_Params
{
	class UFortItem*                                   Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Text Visibility
struct UTooltip_Item_C_Get_Tooltip_Header_Text_Visibility_Params
{
	TEnumAsByte<UMG_ESlateVisibility>                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Icon Visibility
struct UTooltip_Item_C_Get_Tooltip_Header_Icon_Visibility_Params
{
	TEnumAsByte<UMG_ESlateVisibility>                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Visibility
struct UTooltip_Item_C_Get_Tooltip_Header_Visibility_Params
{
	TEnumAsByte<UMG_ESlateVisibility>                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Tooltip-Item.Tooltip-Item_C.Update
struct UTooltip_Item_C_Update_Params
{
};

// Function Tooltip-Item.Tooltip-Item_C.Get Theme Color [Normal]
struct UTooltip_Item_C_Get_Theme_Color__Normal__Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Tooltip-Item.Tooltip-Item_C.Get Icon Brush
struct UTooltip_Item_C_Get_Icon_Brush_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Tooltip-Item.Tooltip-Item_C.Construct
struct UTooltip_Item_C_Construct_Params
{
};

// Function Tooltip-Item.Tooltip-Item_C.ExecuteUbergraph_Tooltip-Item
struct UTooltip_Item_C_ExecuteUbergraph_Tooltip_Item_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
