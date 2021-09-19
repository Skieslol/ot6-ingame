// Name: Fortnite, Version: OT-6_5

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Item.Item_C.Set Display Style
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Override_Display_Style         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle> DisplayStyle                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItem_C::Set_Display_Style(bool Override_Display_Style, TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle> DisplayStyle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Set Display Style");

	UItem_C_Set_Display_Style_Params params;
	params.Override_Display_Style = Override_Display_Style;
	params.DisplayStyle = DisplayStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Hide Subtype Icons
// (Public, BlueprintCallable, BlueprintEvent)
void UItem_C::Hide_Subtype_Icons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Hide Subtype Icons");

	UItem_C_Hide_Subtype_Icons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Set Item Icon Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Override_Icon_Visibility       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<UMG_ESlateVisibility> Item_Icon_Visibility           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItem_C::Set_Item_Icon_Visibility(bool Override_Icon_Visibility, TEnumAsByte<UMG_ESlateVisibility> Item_Icon_Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Set Item Icon Visibility");

	UItem_C_Set_Item_Icon_Visibility_Params params;
	params.Override_Icon_Visibility = Override_Icon_Visibility;
	params.Item_Icon_Visibility = Item_Icon_Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Set Subtype Icons & Ammo Color
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Override_Secondary_Icon_Color  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Secondary_Icon_Override_Color  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Override_Tertiary_Icon_Color   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Tertiary_Icon_Override_Color   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItem_C::Set_Subtype_Icons___Ammo_Color(bool Override_Secondary_Icon_Color, const struct FLinearColor& Secondary_Icon_Override_Color, bool Override_Tertiary_Icon_Color, const struct FLinearColor& Tertiary_Icon_Override_Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Set Subtype Icons & Ammo Color");

	UItem_C_Set_Subtype_Icons___Ammo_Color_Params params;
	params.Override_Secondary_Icon_Color = Override_Secondary_Icon_Color;
	params.Secondary_Icon_Override_Color = Secondary_Icon_Override_Color;
	params.Override_Tertiary_Icon_Color = Override_Tertiary_Icon_Color;
	params.Tertiary_Icon_Override_Color = Tertiary_Icon_Override_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           InMouseEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UItem_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.OnMouseButtonDoubleClick");

	UItem_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Item.Item_C.Resize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItem_C::Resize(TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Resize");

	UItem_C_Resize_Params params;
	params.Brush_Size = Brush_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
void UItem_C::Refresh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Refresh");

	UItem_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Set Stack Count
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItem_C::Set_Stack_Count(int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Set Stack Count");

	UItem_C_Set_Stack_Count_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Set Cooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan               Time_Left                      (Parm, ZeroConstructor)
// float                          Percentage                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Show_Disabled_Without_Cooldown (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItem_C::Set_Cooldown(const struct FTimespan& Time_Left, float Percentage, bool Show_Disabled_Without_Cooldown)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Set Cooldown");

	UItem_C_Set_Cooldown_Params params;
	params.Time_Left = Time_Left;
	params.Percentage = Percentage;
	params.Show_Disabled_Without_Cooldown = Show_Disabled_Without_Cooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Set Durability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Durability                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItem_C::Set_Durability(float Durability)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Set Durability");

	UItem_C_Set_Durability_Params params;
	params.Durability = Durability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Update Cooldown Meter
// (Protected, BlueprintCallable, BlueprintEvent)
void UItem_C::Update_Cooldown_Meter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Update Cooldown Meter");

	UItem_C_Update_Cooldown_Meter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Update Durability Meter
// (Protected, BlueprintCallable, BlueprintEvent)
void UItem_C::Update_Durability_Meter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Update Durability Meter");

	UItem_C_Update_Durability_Meter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Set Tooltip Header
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Header_Text                    (Parm)
// class USlateBrushAsset*        Icon_Brush                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItem_C::Set_Tooltip_Header(const struct FText& Header_Text, class USlateBrushAsset* Icon_Brush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Set Tooltip Header");

	UItem_C_Set_Tooltip_Header_Params params;
	params.Header_Text = Header_Text;
	params.Icon_Brush = Icon_Brush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Get Item Tooltip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWidget* UItem_C::Get_Item_Tooltip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Get Item Tooltip");

	UItem_C_Get_Item_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Item.Item_C.Set Display Mode
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteUI_EFortUIState> Current_UI_State               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Cursor_Mode                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItem_C::Set_Display_Mode(TEnumAsByte<FortniteUI_EFortUIState> Current_UI_State, bool Cursor_Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Set Display Mode");

	UItem_C_Set_Display_Mode_Params params;
	params.Current_UI_State = Current_UI_State;
	params.Cursor_Mode = Cursor_Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Set Ammo Count
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItem_C::Set_Ammo_Count(int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Set Ammo Count");

	UItem_C_Set_Ammo_Count_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Update Subtype Icons & Ammo
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void UItem_C::Update_Subtype_Icons___Ammo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Update Subtype Icons & Ammo");

	UItem_C_Update_Subtype_Icons___Ammo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Shade
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void UItem_C::Shade()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Shade");

	UItem_C_Shade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Update Side Bevel
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void UItem_C::Update_Side_Bevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Update Side Bevel");

	UItem_C_Update_Side_Bevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Update Top Bevel
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void UItem_C::Update_Top_Bevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Update Top Bevel");

	UItem_C_Update_Top_Bevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Update Bottom Bevel
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void UItem_C::Update_Bottom_Bevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Update Bottom Bevel");

	UItem_C_Update_Bottom_Bevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Update Masked Gradient
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                Texture_Mask                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color_A                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color_B                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItem_C::Update_Masked_Gradient(class UImage* Image, class UTexture* Texture_Mask, const struct FLinearColor& Color_A, const struct FLinearColor& Color_B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Update Masked Gradient");

	UItem_C_Update_Masked_Gradient_Params params;
	params.Image = Image;
	params.Texture_Mask = Texture_Mask;
	params.Color_A = Color_A;
	params.Color_B = Color_B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Get Display Style
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteGame_EFortItemType> Item_Type                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle> Style                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItem_C::Get_Display_Style(TEnumAsByte<FortniteGame_EFortItemType> Item_Type, TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle>* Style)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Get Display Style");

	UItem_C_Get_Display_Style_Params params;
	params.Item_Type = Item_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Style != nullptr)
		*Style = params.Style;

}


// Function Item.Item_C.Level Badge
// (Protected, BlueprintCallable, BlueprintEvent)
void UItem_C::Level_Badge()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Level Badge");

	UItem_C_Level_Badge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Update Item Icon
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void UItem_C::Update_Item_Icon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Update Item Icon");

	UItem_C_Update_Item_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Get Item Texture Set
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle> Display_Style                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemTextureSet         Texture_Set                    (Parm, OutParm)
void UItem_C::Get_Item_Texture_Set(TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle> Display_Style, struct FItemTextureSet* Texture_Set)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Get Item Texture Set");

	UItem_C_Get_Item_Texture_Set_Params params;
	params.Display_Style = Display_Style;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Texture_Set != nullptr)
		*Texture_Set = params.Texture_Set;

}


// Function Item.Item_C.Update Background
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void UItem_C::Update_Background()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Update Background");

	UItem_C_Update_Background_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Update Size Box
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void UItem_C::Update_Size_Box()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Update Size Box");

	UItem_C_Update_Size_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItem_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.OnDragDetected");

	UItem_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;

}


// Function Item.Item_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UItem_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.OnMouseButtonDown");

	UItem_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Item.Item_C.Update All
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UItem_C::Update_All()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Update All");

	UItem_C_Update_All_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Update Stack Counter
// (Protected, BlueprintCallable, BlueprintEvent)
void UItem_C::Update_Stack_Counter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Update Stack Counter");

	UItem_C_Update_Stack_Counter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Set Item Data
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item_Data                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItem_C::Set_Item_Data(class UFortItem* Item_Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Set Item Data");

	UItem_C_Set_Item_Data_Params params;
	params.Item_Data = Item_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Update Base
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void UItem_C::Update_Base()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Update Base");

	UItem_C_Update_Base_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.BPOnItemChanged
// (Event, Protected, BlueprintEvent)
void UItem_C::BPOnItemChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.BPOnItemChanged");

	UItem_C_BPOnItemChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UItem_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.Construct");

	UItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItem_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.PreConstruct");

	UItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.BPOnItemSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*               NewItem                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItem_C::BPOnItemSet(class UFortItem* NewItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.BPOnItemSet");

	UItem_C_BPOnItemSet_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.OnCursorModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCursorModeEnabled             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*             CursorModeContentWidget        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItem_C::OnCursorModeChanged(bool bCursorModeEnabled, const struct FName& ActionName, class UUserWidget* CursorModeContentWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.OnCursorModeChanged");

	UItem_C_OnCursorModeChanged_Params params;
	params.bCursorModeEnabled = bCursorModeEnabled;
	params.ActionName = ActionName;
	params.CursorModeContentWidget = CursorModeContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item.Item_C.ExecuteUbergraph_Item
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItem_C::ExecuteUbergraph_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Item.Item_C.ExecuteUbergraph_Item");

	UItem_C_ExecuteUbergraph_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
