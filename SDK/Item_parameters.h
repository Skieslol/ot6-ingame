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

// Function Item.Item_C.Set Display Style
struct UItem_C_Set_Display_Style_Params
{
	bool                                               Override_Display_Style;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle>    DisplayStyle;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Item.Item_C.Hide Subtype Icons
struct UItem_C_Hide_Subtype_Icons_Params
{
};

// Function Item.Item_C.Set Item Icon Visibility
struct UItem_C_Set_Item_Icon_Visibility_Params
{
	bool                                               Override_Icon_Visibility;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<UMG_ESlateVisibility>                  Item_Icon_Visibility;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Item.Item_C.Set Subtype Icons & Ammo Color
struct UItem_C_Set_Subtype_Icons___Ammo_Color_Params
{
	bool                                               Override_Secondary_Icon_Color;                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Secondary_Icon_Override_Color;                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Override_Tertiary_Icon_Color;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Tertiary_Icon_Override_Color;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Item.Item_C.OnMouseButtonDoubleClick
struct UItem_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                              // (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Item.Item_C.Resize
struct UItem_C_Resize_Params
{
	TEnumAsByte<FortniteGame_EFortBrushSize>           Brush_Size;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Item.Item_C.Refresh
struct UItem_C_Refresh_Params
{
};

// Function Item.Item_C.Set Stack Count
struct UItem_C_Set_Stack_Count_Params
{
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Item.Item_C.Set Cooldown
struct UItem_C_Set_Cooldown_Params
{
	struct FTimespan                                   Time_Left;                                                 // (Parm, ZeroConstructor)
	float                                              Percentage;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Show_Disabled_Without_Cooldown;                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Item.Item_C.Set Durability
struct UItem_C_Set_Durability_Params
{
	float                                              Durability;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Item.Item_C.Update Cooldown Meter
struct UItem_C_Update_Cooldown_Meter_Params
{
};

// Function Item.Item_C.Update Durability Meter
struct UItem_C_Update_Durability_Meter_Params
{
};

// Function Item.Item_C.Set Tooltip Header
struct UItem_C_Set_Tooltip_Header_Params
{
	struct FText                                       Header_Text;                                               // (Parm)
	class USlateBrushAsset*                            Icon_Brush;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Item.Item_C.Get Item Tooltip
struct UItem_C_Get_Item_Tooltip_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Item.Item_C.Set Display Mode
struct UItem_C_Set_Display_Mode_Params
{
	TEnumAsByte<FortniteUI_EFortUIState>               Current_UI_State;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Cursor_Mode;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Item.Item_C.Set Ammo Count
struct UItem_C_Set_Ammo_Count_Params
{
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Item.Item_C.Update Subtype Icons & Ammo
struct UItem_C_Update_Subtype_Icons___Ammo_Params
{
};

// Function Item.Item_C.Shade
struct UItem_C_Shade_Params
{
};

// Function Item.Item_C.Update Side Bevel
struct UItem_C_Update_Side_Bevel_Params
{
};

// Function Item.Item_C.Update Top Bevel
struct UItem_C_Update_Top_Bevel_Params
{
};

// Function Item.Item_C.Update Bottom Bevel
struct UItem_C_Update_Bottom_Bevel_Params
{
};

// Function Item.Item_C.Update Masked Gradient
struct UItem_C_Update_Masked_Gradient_Params
{
	class UImage*                                      Image;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture*                                    Texture_Mask;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color_A;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color_B;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Item.Item_C.Get Display Style
struct UItem_C_Get_Display_Style_Params
{
	TEnumAsByte<FortniteGame_EFortItemType>            Item_Type;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle>    Style;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Item.Item_C.Level Badge
struct UItem_C_Level_Badge_Params
{
};

// Function Item.Item_C.Update Item Icon
struct UItem_C_Update_Item_Icon_Params
{
};

// Function Item.Item_C.Get Item Texture Set
struct UItem_C_Get_Item_Texture_Set_Params
{
	TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle>    Display_Style;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FItemTextureSet                             Texture_Set;                                               // (Parm, OutParm)
};

// Function Item.Item_C.Update Background
struct UItem_C_Update_Background_Params
{
};

// Function Item.Item_C.Update Size Box
struct UItem_C_Update_Size_Box_Params
{
};

// Function Item.Item_C.OnDragDetected
struct UItem_C_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Item.Item_C.OnMouseButtonDown
struct UItem_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Item.Item_C.Update All
struct UItem_C_Update_All_Params
{
};

// Function Item.Item_C.Update Stack Counter
struct UItem_C_Update_Stack_Counter_Params
{
};

// Function Item.Item_C.Set Item Data
struct UItem_C_Set_Item_Data_Params
{
	class UFortItem*                                   Item_Data;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Item.Item_C.Update Base
struct UItem_C_Update_Base_Params
{
};

// Function Item.Item_C.BPOnItemChanged
struct UItem_C_BPOnItemChanged_Params
{
};

// Function Item.Item_C.Construct
struct UItem_C_Construct_Params
{
};

// Function Item.Item_C.PreConstruct
struct UItem_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Item.Item_C.BPOnItemSet
struct UItem_C_BPOnItemSet_Params
{
	class UFortItem*                                   NewItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Item.Item_C.OnCursorModeChanged
struct UItem_C_OnCursorModeChanged_Params
{
	bool                                               bCursorModeEnabled;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       ActionName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUserWidget*                                 CursorModeContentWidget;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Item.Item_C.ExecuteUbergraph_Item
struct UItem_C_ExecuteUbergraph_Item_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
