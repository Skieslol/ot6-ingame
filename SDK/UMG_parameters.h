﻿#pragma once

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

// Function UMG.AsyncTaskDownloadImage.DownloadImage
struct UAsyncTaskDownloadImage_DownloadImage_Params
{
	struct FString                                     URL;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAsyncTaskDownloadImage*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.DragDropOperation.Drop
struct UDragDropOperation_Drop_Params
{
	struct FPointerEvent                               PointerEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function UMG.DragDropOperation.Dragged
struct UDragDropOperation_Dragged_Params
{
	struct FPointerEvent                               PointerEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function UMG.DragDropOperation.DragCancelled
struct UDragDropOperation_DragCancelled_Params
{
	struct FPointerEvent                               PointerEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function UMG.BoolBinding.GetValue
struct UBoolBinding_GetValue_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.BrushBinding.GetValue
struct UBrushBinding_GetValue_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.CheckedStateBinding.GetValue
struct UCheckedStateBinding_GetValue_Params
{
	TEnumAsByte<SlateCore_ECheckBoxState>              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.ColorBinding.GetSlateValue
struct UColorBinding_GetSlateValue_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.ColorBinding.GetLinearValue
struct UColorBinding_GetLinearValue_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.FloatBinding.GetValue
struct UFloatBinding_GetValue_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Int32Binding.GetValue
struct UInt32Binding_GetValue_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.MouseCursorBinding.GetValue
struct UMouseCursorBinding_GetValue_Params
{
	TEnumAsByte<CoreUObject_EMouseCursor>              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.TextBinding.GetTextValue
struct UTextBinding_GetTextValue_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.TextBinding.GetStringValue
struct UTextBinding_GetStringValue_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.VisibilityBinding.GetValue
struct UVisibilityBinding_GetValue_Params
{
	TEnumAsByte<UMG_ESlateVisibility>                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBinding.GetValue
struct UWidgetBinding_GetValue_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SlateBlueprintLibrary.LocalToViewport
struct USlateBlueprintLibrary_LocalToViewport_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGeometry                                   Geometry;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   LocalCoordinate;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   PixelPosition;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   ViewportPosition;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
struct USlateBlueprintLibrary_LocalToAbsolute_Params
{
	struct FGeometry                                   Geometry;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   LocalCoordinate;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.SlateBlueprintLibrary.IsUnderLocation
struct USlateBlueprintLibrary_IsUnderLocation_Params
{
	struct FGeometry                                   Geometry;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   AbsoluteCoordinate;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.SlateBlueprintLibrary.GetLocalSize
struct USlateBlueprintLibrary_GetLocalSize_Params
{
	struct FGeometry                                   Geometry;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
struct USlateBlueprintLibrary_AbsoluteToViewport_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   AbsoluteDesktopCoordinate;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   PixelPosition;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   ViewportPosition;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
struct USlateBlueprintLibrary_AbsoluteToLocal_Params
{
	struct FGeometry                                   Geometry;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   AbsoluteCoordinate;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.BorderSlot.SetVerticalAlignment
struct UBorderSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.BorderSlot.SetPadding
struct UBorderSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.BorderSlot.SetHorizontalAlignment
struct UBorderSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.ButtonSlot.SetVerticalAlignment
struct UButtonSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.ButtonSlot.SetPadding
struct UButtonSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.ButtonSlot.SetHorizontalAlignment
struct UButtonSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.CanvasPanelSlot.SetZOrder
struct UCanvasPanelSlot_SetZOrder_Params
{
	int                                                InZOrder;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.CanvasPanelSlot.SetSize
struct UCanvasPanelSlot_SetSize_Params
{
	struct FVector2D                                   InSize;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.CanvasPanelSlot.SetPosition
struct UCanvasPanelSlot_SetPosition_Params
{
	struct FVector2D                                   InPosition;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.CanvasPanelSlot.SetOffsets
struct UCanvasPanelSlot_SetOffsets_Params
{
	struct FMargin                                     InOffset;                                                  // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.CanvasPanelSlot.SetMinimum
struct UCanvasPanelSlot_SetMinimum_Params
{
	struct FVector2D                                   InMinimumAnchors;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.CanvasPanelSlot.SetMaximum
struct UCanvasPanelSlot_SetMaximum_Params
{
	struct FVector2D                                   InMaximumAnchors;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.CanvasPanelSlot.SetLayout
struct UCanvasPanelSlot_SetLayout_Params
{
	struct FAnchorData                                 InLayoutData;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function UMG.CanvasPanelSlot.SetAutoSize
struct UCanvasPanelSlot_SetAutoSize_Params
{
	bool                                               InbAutoSize;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.CanvasPanelSlot.SetAnchors
struct UCanvasPanelSlot_SetAnchors_Params
{
	struct FAnchors                                    InAnchors;                                                 // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.CanvasPanelSlot.SetAlignment
struct UCanvasPanelSlot_SetAlignment_Params
{
	struct FVector2D                                   InAlignment;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.CanvasPanelSlot.GetZOrder
struct UCanvasPanelSlot_GetZOrder_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.CanvasPanelSlot.GetSize
struct UCanvasPanelSlot_GetSize_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.CanvasPanelSlot.GetPosition
struct UCanvasPanelSlot_GetPosition_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.CanvasPanelSlot.GetOffsets
struct UCanvasPanelSlot_GetOffsets_Params
{
	struct FMargin                                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.CanvasPanelSlot.GetLayout
struct UCanvasPanelSlot_GetLayout_Params
{
	struct FAnchorData                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.CanvasPanelSlot.GetAutoSize
struct UCanvasPanelSlot_GetAutoSize_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.CanvasPanelSlot.GetAnchors
struct UCanvasPanelSlot_GetAnchors_Params
{
	struct FAnchors                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.CanvasPanelSlot.GetAlignment
struct UCanvasPanelSlot_GetAlignment_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.GridSlot.SetVerticalAlignment
struct UGridSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.GridSlot.SetRowSpan
struct UGridSlot_SetRowSpan_Params
{
	int                                                InRowSpan;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.GridSlot.SetRow
struct UGridSlot_SetRow_Params
{
	int                                                InRow;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.GridSlot.SetLayer
struct UGridSlot_SetLayer_Params
{
	int                                                InLayer;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.GridSlot.SetHorizontalAlignment
struct UGridSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.GridSlot.SetColumnSpan
struct UGridSlot_SetColumnSpan_Params
{
	int                                                InColumnSpan;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.GridSlot.SetColumn
struct UGridSlot_SetColumn_Params
{
	int                                                InColumn;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
struct UHorizontalBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.HorizontalBoxSlot.SetSize
struct UHorizontalBoxSlot_SetSize_Params
{
	struct FSlateChildSize                             InSize;                                                    // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.HorizontalBoxSlot.SetPadding
struct UHorizontalBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
struct UHorizontalBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.OverlaySlot.SetVerticalAlignment
struct UOverlaySlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.OverlaySlot.SetPadding
struct UOverlaySlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.OverlaySlot.SetHorizontalAlignment
struct UOverlaySlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.ScaleBoxSlot.SetVerticalAlignment
struct UScaleBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.ScaleBoxSlot.SetPadding
struct UScaleBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
struct UScaleBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.ScrollBoxSlot.SetPadding
struct UScrollBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
struct UScrollBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SizeBoxSlot.SetVerticalAlignment
struct USizeBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SizeBoxSlot.SetPadding
struct USizeBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.SizeBoxSlot.SetHorizontalAlignment
struct USizeBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UniformGridSlot.SetVerticalAlignment
struct UUniformGridSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UniformGridSlot.SetRow
struct UUniformGridSlot_SetRow_Params
{
	int                                                InRow;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UniformGridSlot.SetHorizontalAlignment
struct UUniformGridSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UniformGridSlot.SetColumn
struct UUniformGridSlot_SetColumn_Params
{
	int                                                InColumn;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.VerticalBoxSlot.SetVerticalAlignment
struct UVerticalBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.VerticalBoxSlot.SetSize
struct UVerticalBoxSlot_SetSize_Params
{
	struct FSlateChildSize                             InSize;                                                    // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.VerticalBoxSlot.SetPadding
struct UVerticalBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
struct UVerticalBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
struct UWidgetSwitcherSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetSwitcherSlot.SetPadding
struct UWidgetSwitcherSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
struct UWidgetSwitcherSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WrapBoxSlot.SetVerticalAlignment
struct UWrapBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WrapBoxSlot.SetPadding
struct UWrapBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.WrapBoxSlot.SetHorizontalAlignment
struct UWrapBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
struct UWrapBoxSlot_SetFillSpanWhenLessThan_Params
{
	float                                              InFillSpanWhenLessThan;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WrapBoxSlot.SetFillEmptySpace
struct UWrapBoxSlot_SetFillEmptySpace_Params
{
	bool                                               InbFillEmptySpace;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.SetVisibility
struct UWidget_SetVisibility_Params
{
	TEnumAsByte<UMG_ESlateVisibility>                  InVisibility;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.SetUserFocus
struct UWidget_SetUserFocus_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.SetToolTipText
struct UWidget_SetToolTipText_Params
{
	struct FText                                       InToolTipText;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.SetToolTip
struct UWidget_SetToolTip_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.SetRenderTranslation
struct UWidget_SetRenderTranslation_Params
{
	struct FVector2D                                   Translation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.SetRenderTransformPivot
struct UWidget_SetRenderTransformPivot_Params
{
	struct FVector2D                                   Pivot;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.SetRenderTransform
struct UWidget_SetRenderTransform_Params
{
	struct FWidgetTransform                            InTransform;                                               // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.SetRenderShear
struct UWidget_SetRenderShear_Params
{
	struct FVector2D                                   Shear;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.SetRenderScale
struct UWidget_SetRenderScale_Params
{
	struct FVector2D                                   Scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.SetRenderAngle
struct UWidget_SetRenderAngle_Params
{
	float                                              Angle;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.SetKeyboardFocus
struct UWidget_SetKeyboardFocus_Params
{
};

// Function UMG.Widget.SetIsEnabled
struct UWidget_SetIsEnabled_Params
{
	bool                                               bInIsEnabled;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.SetCursor
struct UWidget_SetCursor_Params
{
	TEnumAsByte<CoreUObject_EMouseCursor>              InCursor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.ResetCursor
struct UWidget_ResetCursor_Params
{
};

// Function UMG.Widget.RemoveFromParent
struct UWidget_RemoveFromParent_Params
{
};

// DelegateFunction UMG.Widget.OnReply__DelegateSignature
struct UWidget_OnReply__DelegateSignature_Params
{
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
struct UWidget_OnPointerEvent__DelegateSignature_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.IsVisible
struct UWidget_IsVisible_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.IsHovered
struct UWidget_IsHovered_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.InvalidateLayoutAndVolatility
struct UWidget_InvalidateLayoutAndVolatility_Params
{
};

// Function UMG.Widget.HasUserFocusedDescendants
struct UWidget_HasUserFocusedDescendants_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.HasUserFocus
struct UWidget_HasUserFocus_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.HasMouseCapture
struct UWidget_HasMouseCapture_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.HasKeyboardFocus
struct UWidget_HasKeyboardFocus_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.HasFocusedDescendants
struct UWidget_HasFocusedDescendants_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.HasAnyUserFocus
struct UWidget_HasAnyUserFocus_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
struct UWidget_GetWidget__DelegateSignature_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.GetVisibility
struct UWidget_GetVisibility_Params
{
	TEnumAsByte<UMG_ESlateVisibility>                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.Widget.GetText__DelegateSignature
struct UWidget_GetText__DelegateSignature_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
struct UWidget_GetSlateVisibility__DelegateSignature_Params
{
	TEnumAsByte<UMG_ESlateVisibility>                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
struct UWidget_GetSlateColor__DelegateSignature_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
struct UWidget_GetSlateBrush__DelegateSignature_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.GetParent
struct UWidget_GetParent_Params
{
	class UPanelWidget*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
struct UWidget_GetMouseCursor__DelegateSignature_Params
{
	TEnumAsByte<CoreUObject_EMouseCursor>              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
struct UWidget_GetLinearColor__DelegateSignature_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.GetIsEnabled
struct UWidget_GetIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
struct UWidget_GetInt32__DelegateSignature_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
struct UWidget_GetFloat__DelegateSignature_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.GetDesiredSize
struct UWidget_GetDesiredSize_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
struct UWidget_GetCheckBoxState__DelegateSignature_Params
{
	TEnumAsByte<SlateCore_ECheckBoxState>              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.Widget.GetBool__DelegateSignature
struct UWidget_GetBool__DelegateSignature_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
struct UWidget_GenerateWidgetForString__DelegateSignature_Params
{
	struct FString                                     Item;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
struct UWidget_GenerateWidgetForObject__DelegateSignature_Params
{
	class UObject*                                     Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.ForceVolatile
struct UWidget_ForceVolatile_Params
{
	bool                                               bForce;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Widget.ForceLayoutPrepass
struct UWidget_ForceLayoutPrepass_Params
{
};

// Function UMG.CircularThrobber.SetRadius
struct UCircularThrobber_SetRadius_Params
{
	float                                              InRadius;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.CircularThrobber.SetPeriod
struct UCircularThrobber_SetPeriod_Params
{
	float                                              InPeriod;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.CircularThrobber.SetNumberOfPieces
struct UCircularThrobber_SetNumberOfPieces_Params
{
	int                                                InNumberOfPieces;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.ComboBoxString.SetSelectedOption
struct UComboBoxString_SetSelectedOption_Params
{
	struct FString                                     Option;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.ComboBoxString.RemoveOption
struct UComboBoxString_RemoveOption_Params
{
	struct FString                                     Option;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.ComboBoxString.RefreshOptions
struct UComboBoxString_RefreshOptions_Params
{
};

// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
struct UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
struct UComboBoxString_OnOpeningEvent__DelegateSignature_Params
{
};

// Function UMG.ComboBoxString.GetSelectedOption
struct UComboBoxString_GetSelectedOption_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.ComboBoxString.GetOptionCount
struct UComboBoxString_GetOptionCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.ComboBoxString.GetOptionAtIndex
struct UComboBoxString_GetOptionAtIndex_Params
{
	int                                                INDEX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.ComboBoxString.FindOptionIndex
struct UComboBoxString_FindOptionIndex_Params
{
	struct FString                                     Option;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.ComboBoxString.ClearSelection
struct UComboBoxString_ClearSelection_Params
{
};

// Function UMG.ComboBoxString.ClearOptions
struct UComboBoxString_ClearOptions_Params
{
};

// Function UMG.ComboBoxString.AddOption
struct UComboBoxString_AddOption_Params
{
	struct FString                                     Option;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.EditableText.SetText
struct UEditableText_SetText_Params
{
	struct FText                                       InText;                                                    // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.EditableText.SetIsReadOnly
struct UEditableText_SetIsReadOnly_Params
{
	bool                                               InbIsReadyOnly;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.EditableText.SetIsPassword
struct UEditableText_SetIsPassword_Params
{
	bool                                               InbIsPassword;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.EditableText.SetHintText
struct UEditableText_SetHintText_Params
{
	struct FText                                       InHintText;                                                // (Parm, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
struct UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       TEXT;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
struct UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       TEXT;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function UMG.EditableText.GetText
struct UEditableText_GetText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.EditableTextBox.SetText
struct UEditableTextBox_SetText_Params
{
	struct FText                                       InText;                                                    // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.EditableTextBox.SetError
struct UEditableTextBox_SetError_Params
{
	struct FText                                       InError;                                                   // (Parm, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
struct UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       TEXT;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
struct UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       TEXT;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function UMG.EditableTextBox.GetText
struct UEditableTextBox_GetText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.EditableTextBox.ClearError
struct UEditableTextBox_ClearError_Params
{
};

// Function UMG.ExpandableArea.SetIsExpanded
struct UExpandableArea_SetIsExpanded_Params
{
	bool                                               IsExpanded;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.ExpandableArea.GetIsExpanded
struct UExpandableArea_GetIsExpanded_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Image.SetOpacity
struct UImage_SetOpacity_Params
{
	float                                              InOpacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Image.SetColorAndOpacity
struct UImage_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Image.SetBrushFromTexture
struct UImage_SetBrushFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMatchSize;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Image.SetBrushFromMaterial
struct UImage_SetBrushFromMaterial_Params
{
	class UMaterialInterface*                          Material;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Image.SetBrushFromAsset
struct UImage_SetBrushFromAsset_Params
{
	class USlateBrushAsset*                            Asset;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Image.SetBrush
struct UImage_SetBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function UMG.Image.GetDynamicMaterial
struct UImage_GetDynamicMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.PanelWidget.RemoveChildAt
struct UPanelWidget_RemoveChildAt_Params
{
	int                                                INDEX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.PanelWidget.RemoveChild
struct UPanelWidget_RemoveChild_Params
{
	class UWidget*                                     Content;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.PanelWidget.HasChild
struct UPanelWidget_HasChild_Params
{
	class UWidget*                                     Content;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.PanelWidget.HasAnyChildren
struct UPanelWidget_HasAnyChildren_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.PanelWidget.GetChildrenCount
struct UPanelWidget_GetChildrenCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.PanelWidget.GetChildIndex
struct UPanelWidget_GetChildIndex_Params
{
	class UWidget*                                     Content;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.PanelWidget.GetChildAt
struct UPanelWidget_GetChildAt_Params
{
	int                                                INDEX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.PanelWidget.ClearChildren
struct UPanelWidget_ClearChildren_Params
{
};

// Function UMG.PanelWidget.AddChild
struct UPanelWidget_AddChild_Params
{
	class UWidget*                                     Content;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelSlot*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.CanvasPanel.AddChildToCanvas
struct UCanvasPanel_AddChildToCanvas_Params
{
	class UWidget*                                     Content;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanvasPanelSlot*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.ContentWidget.GetContentSlot
struct UContentWidget_GetContentSlot_Params
{
	class UPanelSlot*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Border.SetVerticalAlignment
struct UBorder_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Border.SetPadding
struct UBorder_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.Border.SetHorizontalAlignment
struct UBorder_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Border.SetContentColorAndOpacity
struct UBorder_SetContentColorAndOpacity_Params
{
	struct FLinearColor                                InContentColorAndOpacity;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Border.SetBrushFromTexture
struct UBorder_SetBrushFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Border.SetBrushFromMaterial
struct UBorder_SetBrushFromMaterial_Params
{
	class UMaterialInterface*                          Material;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Border.SetBrushFromAsset
struct UBorder_SetBrushFromAsset_Params
{
	class USlateBrushAsset*                            Asset;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Border.SetBrushColor
struct UBorder_SetBrushColor_Params
{
	struct FLinearColor                                InBrushColor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Border.SetBrush
struct UBorder_SetBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function UMG.Border.GetDynamicMaterial
struct UBorder_GetDynamicMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Button.SetStyle
struct UButton_SetStyle_Params
{
	struct FButtonStyle                                InStyle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function UMG.Button.SetColorAndOpacity
struct UButton_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Button.SetBackgroundColor
struct UButton_SetBackgroundColor_Params
{
	struct FLinearColor                                InBackgroundColor;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Button.IsPressed
struct UButton_IsPressed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.CheckBox.SetIsChecked
struct UCheckBox_SetIsChecked_Params
{
	bool                                               InIsChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.CheckBox.SetCheckedState
struct UCheckBox_SetCheckedState_Params
{
	TEnumAsByte<SlateCore_ECheckBoxState>              InCheckedState;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.CheckBox.IsPressed
struct UCheckBox_IsPressed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.CheckBox.IsChecked
struct UCheckBox_IsChecked_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.CheckBox.GetCheckedState
struct UCheckBox_GetCheckedState_Params
{
	TEnumAsByte<SlateCore_ECheckBoxState>              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.InvalidationBox.SetCanCache
struct UInvalidationBox_SetCanCache_Params
{
	bool                                               CanCache;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.InvalidationBox.InvalidateCache
struct UInvalidationBox_InvalidateCache_Params
{
};

// Function UMG.InvalidationBox.GetCanCache
struct UInvalidationBox_GetCanCache_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.MenuAnchor.ToggleOpen
struct UMenuAnchor_ToggleOpen_Params
{
	bool                                               bFocusOnOpen;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.MenuAnchor.ShouldOpenDueToClick
struct UMenuAnchor_ShouldOpenDueToClick_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.MenuAnchor.Open
struct UMenuAnchor_Open_Params
{
	bool                                               bFocusMenu;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.MenuAnchor.IsOpen
struct UMenuAnchor_IsOpen_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.MenuAnchor.HasOpenSubMenus
struct UMenuAnchor_HasOpenSubMenus_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.MenuAnchor.GetMenuPosition
struct UMenuAnchor_GetMenuPosition_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.MenuAnchor.Close
struct UMenuAnchor_Close_Params
{
};

// Function UMG.RetainerBox.SetTextureParameter
struct URetainerBox_SetTextureParameter_Params
{
	struct FName                                       TextureParameter;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.RetainerBox.SetEffectMaterial
struct URetainerBox_SetEffectMaterial_Params
{
	class UMaterialInterface*                          EffectMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.RetainerBox.GetEffectMaterial
struct URetainerBox_GetEffectMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SizeBox.SetWidthOverride
struct USizeBox_SetWidthOverride_Params
{
	float                                              InWidthOverride;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SizeBox.SetMinDesiredWidth
struct USizeBox_SetMinDesiredWidth_Params
{
	float                                              InMinDesiredWidth;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SizeBox.SetMinDesiredHeight
struct USizeBox_SetMinDesiredHeight_Params
{
	float                                              InMinDesiredHeight;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SizeBox.SetMaxDesiredWidth
struct USizeBox_SetMaxDesiredWidth_Params
{
	float                                              InMaxDesiredWidth;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SizeBox.SetMaxDesiredHeight
struct USizeBox_SetMaxDesiredHeight_Params
{
	float                                              InMaxDesiredHeight;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SizeBox.SetHeightOverride
struct USizeBox_SetHeightOverride_Params
{
	float                                              InHeightOverride;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SizeBox.ClearWidthOverride
struct USizeBox_ClearWidthOverride_Params
{
};

// Function UMG.SizeBox.ClearMinDesiredWidth
struct USizeBox_ClearMinDesiredWidth_Params
{
};

// Function UMG.SizeBox.ClearMinDesiredHeight
struct USizeBox_ClearMinDesiredHeight_Params
{
};

// Function UMG.SizeBox.ClearMaxDesiredWidth
struct USizeBox_ClearMaxDesiredWidth_Params
{
};

// Function UMG.SizeBox.ClearMaxDesiredHeight
struct USizeBox_ClearMaxDesiredHeight_Params
{
};

// Function UMG.SizeBox.ClearHeightOverride
struct USizeBox_ClearHeightOverride_Params
{
};

// Function UMG.Viewport.Spawn
struct UViewport_Spawn_Params
{
	class UClass*                                      ActorClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Viewport.SetViewRotation
struct UViewport_SetViewRotation_Params
{
	struct FRotator                                    Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Viewport.SetViewLocation
struct UViewport_SetViewLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Viewport.GetViewRotation
struct UViewport_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Viewport.GetViewportWorld
struct UViewport_GetViewportWorld_Params
{
	class UWorld*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Viewport.GetViewLocation
struct UViewport_GetViewLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.GridPanel.AddChildToGrid
struct UGridPanel_AddChildToGrid_Params
{
	class UWidget*                                     Content;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGridSlot*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.HorizontalBox.AddChildToHorizontalBox
struct UHorizontalBox_AddChildToHorizontalBox_Params
{
	class UWidget*                                     Content;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBoxSlot*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Overlay.AddChildToOverlay
struct UOverlay_AddChildToOverlay_Params
{
	class UWidget*                                     Content;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOverlaySlot*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.ScrollBox.SetScrollOffset
struct UScrollBox_SetScrollOffset_Params
{
	float                                              NewScrollOffset;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.ScrollBox.ScrollWidgetIntoView
struct UScrollBox_ScrollWidgetIntoView_Params
{
	class UWidget*                                     WidgetToFind;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AnimateScroll;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.ScrollBox.ScrollToStart
struct UScrollBox_ScrollToStart_Params
{
};

// Function UMG.ScrollBox.ScrollToEnd
struct UScrollBox_ScrollToEnd_Params
{
};

// Function UMG.ScrollBox.GetScrollOffset
struct UScrollBox_GetScrollOffset_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UniformGridPanel.SetSlotPadding
struct UUniformGridPanel_SetSlotPadding_Params
{
	struct FMargin                                     InSlotPadding;                                             // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
struct UUniformGridPanel_SetMinDesiredSlotWidth_Params
{
	float                                              InMinDesiredSlotWidth;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
struct UUniformGridPanel_SetMinDesiredSlotHeight_Params
{
	float                                              InMinDesiredSlotHeight;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UniformGridPanel.AddChildToUniformGrid
struct UUniformGridPanel_AddChildToUniformGrid_Params
{
	class UWidget*                                     Content;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUniformGridSlot*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.VerticalBox.AddChildToVerticalBox
struct UVerticalBox_AddChildToVerticalBox_Params
{
	class UWidget*                                     Content;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVerticalBoxSlot*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
struct UWidgetSwitcher_SetActiveWidgetIndex_Params
{
	int                                                INDEX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetSwitcher.SetActiveWidget
struct UWidgetSwitcher_SetActiveWidget_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetSwitcher.GetWidgetAtIndex
struct UWidgetSwitcher_GetWidgetAtIndex_Params
{
	int                                                INDEX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetSwitcher.GetNumWidgets
struct UWidgetSwitcher_GetNumWidgets_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
struct UWidgetSwitcher_GetActiveWidgetIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WrapBox.SetInnerSlotPadding
struct UWrapBox_SetInnerSlotPadding_Params
{
	struct FVector2D                                   InPadding;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.WrapBox.AddChildWrapBox
struct UWrapBox_AddChildWrapBox_Params
{
	class UWidget*                                     Content;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWrapBoxSlot*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.ProgressBar.SetPercent
struct UProgressBar_SetPercent_Params
{
	float                                              InPercent;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.ProgressBar.SetIsMarquee
struct UProgressBar_SetIsMarquee_Params
{
	bool                                               InbIsMarquee;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.ProgressBar.SetFillColorAndOpacity
struct UProgressBar_SetFillColorAndOpacity_Params
{
	struct FLinearColor                                InColor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.ScrollBar.SetState
struct UScrollBar_SetState_Params
{
	float                                              InOffsetFraction;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InThumbSizeFraction;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Slider.SetValue
struct USlider_SetValue_Params
{
	float                                              InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Slider.SetStepSize
struct USlider_SetStepSize_Params
{
	float                                              InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Slider.SetSliderHandleColor
struct USlider_SetSliderHandleColor_Params
{
	struct FLinearColor                                InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Slider.SetSliderBarColor
struct USlider_SetSliderBarColor_Params
{
	struct FLinearColor                                InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Slider.SetLocked
struct USlider_SetLocked_Params
{
	bool                                               InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Slider.SetIndentHandle
struct USlider_SetIndentHandle_Params
{
	bool                                               InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Slider.GetValue
struct USlider_GetValue_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Spacer.SetSize
struct USpacer_SetSize_Params
{
	struct FVector2D                                   InSize;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.SpinBox.SetValue
struct USpinBox_SetValue_Params
{
	float                                              NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SpinBox.SetMinValue
struct USpinBox_SetMinValue_Params
{
	float                                              NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SpinBox.SetMinSliderValue
struct USpinBox_SetMinSliderValue_Params
{
	float                                              NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SpinBox.SetMaxValue
struct USpinBox_SetMaxValue_Params
{
	float                                              NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SpinBox.SetMaxSliderValue
struct USpinBox_SetMaxSliderValue_Params
{
	float                                              NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SpinBox.SetForegroundColor
struct USpinBox_SetForegroundColor_Params
{
	struct FSlateColor                                 InForegroundColor;                                         // (Parm, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
struct USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
struct USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
struct USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params
{
};

// Function UMG.SpinBox.GetValue
struct USpinBox_GetValue_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SpinBox.GetMinValue
struct USpinBox_GetMinValue_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SpinBox.GetMinSliderValue
struct USpinBox_GetMinSliderValue_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SpinBox.GetMaxValue
struct USpinBox_GetMaxValue_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SpinBox.GetMaxSliderValue
struct USpinBox_GetMaxSliderValue_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.SpinBox.ClearMinValue
struct USpinBox_ClearMinValue_Params
{
};

// Function UMG.SpinBox.ClearMinSliderValue
struct USpinBox_ClearMinSliderValue_Params
{
};

// Function UMG.SpinBox.ClearMaxValue
struct USpinBox_ClearMaxValue_Params
{
};

// Function UMG.SpinBox.ClearMaxSliderValue
struct USpinBox_ClearMaxSliderValue_Params
{
};

// DelegateFunction UMG.TableViewBase.OnGenerateRowUObject__DelegateSignature
struct UTableViewBase_OnGenerateRowUObject__DelegateSignature_Params
{
	class UObject*                                     Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.TileView.SetItemWidth
struct UTileView_SetItemWidth_Params
{
	float                                              Width;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.TileView.SetItemHeight
struct UTileView_SetItemHeight_Params
{
	float                                              Height;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.TileView.RequestListRefresh
struct UTileView_RequestListRefresh_Params
{
};

// Function UMG.MultiLineEditableText.SetText
struct UMultiLineEditableText_SetText_Params
{
	struct FText                                       InText;                                                    // (Parm, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
struct UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       TEXT;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
struct UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       TEXT;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function UMG.MultiLineEditableText.GetText
struct UMultiLineEditableText_GetText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.MultiLineEditableTextBox.SetText
struct UMultiLineEditableTextBox_SetText_Params
{
	struct FText                                       InText;                                                    // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.MultiLineEditableTextBox.SetError
struct UMultiLineEditableTextBox_SetError_Params
{
	struct FText                                       InError;                                                   // (Parm, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       TEXT;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       TEXT;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function UMG.MultiLineEditableTextBox.GetText
struct UMultiLineEditableTextBox_GetText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.TextBlock.SetText
struct UTextBlock_SetText_Params
{
	struct FText                                       InText;                                                    // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.TextBlock.SetShadowOffset
struct UTextBlock_SetShadowOffset_Params
{
	struct FVector2D                                   InShadowOffset;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.TextBlock.SetShadowColorAndOpacity
struct UTextBlock_SetShadowColorAndOpacity_Params
{
	struct FLinearColor                                InShadowColorAndOpacity;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.TextBlock.SetOpacity
struct UTextBlock_SetOpacity_Params
{
	float                                              InOpacity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.TextBlock.SetJustification
struct UTextBlock_SetJustification_Params
{
	TEnumAsByte<Slate_ETextJustify>                    InJustification;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.TextBlock.SetFont
struct UTextBlock_SetFont_Params
{
	struct FSlateFontInfo                              InFontInfo;                                                // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.TextBlock.SetColorAndOpacity
struct UTextBlock_SetColorAndOpacity_Params
{
	struct FSlateColor                                 InColorAndOpacity;                                         // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.TextBlock.GetText
struct UTextBlock_GetText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.Throbber.SetNumberOfPieces
struct UThrobber_SetNumberOfPieces_Params
{
	int                                                InNumberOfPieces;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.Throbber.SetAnimateVertically
struct UThrobber_SetAnimateVertically_Params
{
	bool                                               bInAnimateVertically;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Throbber.SetAnimateOpacity
struct UThrobber_SetAnimateOpacity_Params
{
	bool                                               bInAnimateOpacity;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.Throbber.SetAnimateHorizontally
struct UThrobber_SetAnimateHorizontally_Params
{
	bool                                               bInAnimateHorizontally;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.Tick
struct UUserWidget_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              InDeltaTime;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.StopListeningForInputAction
struct UUserWidget_StopListeningForInputAction_Params
{
	struct FName                                       ActionName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EInputEvent>                    EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.StopListeningForAllInputActions
struct UUserWidget_StopListeningForAllInputActions_Params
{
};

// Function UMG.UserWidget.StopAnimation
struct UUserWidget_StopAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.SetPositionInViewport
struct UUserWidget_SetPositionInViewport_Params
{
	struct FVector2D                                   Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bRemoveDPIScale;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.SetPadding
struct UUserWidget_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.SetOwningLocalPlayer
struct UUserWidget_SetOwningLocalPlayer_Params
{
	class ULocalPlayer*                                LocalPlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.SetNumLoopsToPlay
struct UUserWidget_SetNumLoopsToPlay_Params
{
	class UWidgetAnimation*                            InAnimation;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumLoopsToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.SetInputActionPriority
struct UUserWidget_SetInputActionPriority_Params
{
	int                                                NewPriority;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.SetInputActionBlocking
struct UUserWidget_SetInputActionBlocking_Params
{
	bool                                               bShouldBlock;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.SetForegroundColor
struct UUserWidget_SetForegroundColor_Params
{
	struct FSlateColor                                 InForegroundColor;                                         // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.SetDesiredSizeInViewport
struct UUserWidget_SetDesiredSizeInViewport_Params
{
	struct FVector2D                                   Size;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.SetColorAndOpacity
struct UUserWidget_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.SetAnchorsInViewport
struct UUserWidget_SetAnchorsInViewport_Params
{
	struct FAnchors                                    Anchors;                                                   // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.SetAlignmentInViewport
struct UUserWidget_SetAlignmentInViewport_Params
{
	struct FVector2D                                   Alignment;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.RemoveFromViewport
struct UUserWidget_RemoveFromViewport_Params
{
};

// Function UMG.UserWidget.PlaySound
struct UUserWidget_PlaySound_Params
{
	class USoundBase*                                  SoundToPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.PlayAnimation
struct UUserWidget_PlayAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartAtTime;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumLoopsToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<UMG_EUMGSequencePlayMode>              PlayMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.PauseAnimation
struct UUserWidget_PauseAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnTouchStarted
struct UUserWidget_OnTouchStarted_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InTouchEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnTouchMoved
struct UUserWidget_OnTouchMoved_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InTouchEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnTouchGesture
struct UUserWidget_OnTouchGesture_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               GestureEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnTouchEnded
struct UUserWidget_OnTouchEnded_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InTouchEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnPreviewMouseButtonDown
struct UUserWidget_OnPreviewMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnPreviewKeyDown
struct UUserWidget_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FKeyEvent                                   InKeyEvent;                                                // (Parm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnPaint
struct UUserWidget_OnPaint_Params
{
	struct FPaintContext                               Context;                                                   // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnMouseWheel
struct UUserWidget_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnMouseMove
struct UUserWidget_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnMouseLeave
struct UUserWidget_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnMouseEnter
struct UUserWidget_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnMouseButtonUp
struct UUserWidget_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnMouseButtonDown
struct UUserWidget_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnMouseButtonDoubleClick
struct UUserWidget_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                              // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnMotionDetected
struct UUserWidget_OnMotionDetected_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMotionEvent                                InMotionEvent;                                             // (Parm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnKeyUp
struct UUserWidget_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FKeyEvent                                   InKeyEvent;                                                // (Parm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnKeyDown
struct UUserWidget_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FKeyEvent                                   InKeyEvent;                                                // (Parm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnKeyChar
struct UUserWidget_OnKeyChar_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterEvent                             InCharacterEvent;                                          // (Parm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnFocusReceived
struct UUserWidget_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFocusEvent                                 InFocusEvent;                                              // (Parm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnFocusLost
struct UUserWidget_OnFocusLost_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // (Parm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnDrop
struct UUserWidget_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               PointerEvent;                                              // (Parm, NativeAccessSpecifierPublic)
	class UDragDropOperation*                          Operation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnDragOver
struct UUserWidget_OnDragOver_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               PointerEvent;                                              // (Parm, NativeAccessSpecifierPublic)
	class UDragDropOperation*                          Operation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnDragLeave
struct UUserWidget_OnDragLeave_Params
{
	struct FPointerEvent                               PointerEvent;                                              // (Parm, NativeAccessSpecifierPublic)
	class UDragDropOperation*                          Operation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnDragEnter
struct UUserWidget_OnDragEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               PointerEvent;                                              // (Parm, NativeAccessSpecifierPublic)
	class UDragDropOperation*                          Operation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnDragDetected
struct UUserWidget_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               PointerEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UDragDropOperation*                          Operation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnDragCancelled
struct UUserWidget_OnDragCancelled_Params
{
	struct FPointerEvent                               PointerEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UDragDropOperation*                          Operation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnControllerButtonReleased
struct UUserWidget_OnControllerButtonReleased_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FControllerEvent                            ControllerEvent;                                           // (Parm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnControllerButtonPressed
struct UUserWidget_OnControllerButtonPressed_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FControllerEvent                            ControllerEvent;                                           // (Parm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnControllerAnalogValueChanged
struct UUserWidget_OnControllerAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FControllerEvent                            ControllerEvent;                                           // (Parm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnAnimationStarted
struct UUserWidget_OnAnimationStarted_Params
{
	class UWidgetAnimation*                            Animation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnAnimationFinished
struct UUserWidget_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.OnAnalogValueChanged
struct UUserWidget_OnAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnalogInputEvent                           InAnalogInputEvent;                                        // (Parm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.ListenForInputAction
struct UUserWidget_ListenForInputAction_Params
{
	struct FName                                       ActionName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EInputEvent>                    EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bConsume;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.IsPlayingAnimation
struct UUserWidget_IsPlayingAnimation_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.IsListeningForInputAction
struct UUserWidget_IsListeningForInputAction_Params
{
	struct FName                                       ActionName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.IsInViewport
struct UUserWidget_IsInViewport_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.IsInteractable
struct UUserWidget_IsInteractable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.IsAnimationPlaying
struct UUserWidget_IsAnimationPlaying_Params
{
	class UWidgetAnimation*                            InAnimation;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.GetOwningPlayerPawn
struct UUserWidget_GetOwningPlayerPawn_Params
{
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.GetOwningPlayer
struct UUserWidget_GetOwningPlayer_Params
{
	class APlayerController*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.GetOwningLocalPlayer
struct UUserWidget_GetOwningLocalPlayer_Params
{
	class ULocalPlayer*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.GetIsVisible
struct UUserWidget_GetIsVisible_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.Destruct
struct UUserWidget_Destruct_Params
{
};

// Function UMG.UserWidget.Construct
struct UUserWidget_Construct_Params
{
};

// Function UMG.UserWidget.AddToViewport
struct UUserWidget_AddToViewport_Params
{
	int                                                ZOrder;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.UserWidget.AddToPlayerScreen
struct UUserWidget_AddToPlayerScreen_Params
{
	int                                                ZOrder;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetAnimation.GetStartTime
struct UWidgetAnimation_GetStartTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetAnimation.GetEndTime
struct UWidgetAnimation_GetEndTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.UnlockMouse
struct UWidgetBlueprintLibrary_UnlockMouse_Params
{
	struct FEventReply                                 Reply;                                                     // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.Unhandled
struct UWidgetBlueprintLibrary_Unhandled_Params
{
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.SetUserFocus
struct UWidgetBlueprintLibrary_SetUserFocus_Params
{
	struct FEventReply                                 Reply;                                                     // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UWidget*                                     FocusWidget;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInAllUsers;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.SetMousePosition
struct UWidgetBlueprintLibrary_SetMousePosition_Params
{
	struct FEventReply                                 Reply;                                                     // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector2D                                   NewMousePosition;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
struct UWidgetBlueprintLibrary_SetInputMode_UIOnly_Params
{
	class APlayerController*                           Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     InWidgetToFocus;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockMouseToViewport;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
struct UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params
{
	class APlayerController*                           Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
struct UWidgetBlueprintLibrary_SetInputMode_GameAndUI_Params
{
	class APlayerController*                           Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     InWidgetToFocus;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockMouseToViewport;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bHideCursorDuringCapture;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
struct UWidgetBlueprintLibrary_SetFocusToGameViewport_Params
{
};

// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
struct UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params
{
	struct FSlateBrush                                 Brush;                                                     // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
struct UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params
{
	struct FSlateBrush                                 Brush;                                                     // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          Material;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
struct UWidgetBlueprintLibrary_ReleaseMouseCapture_Params
{
	struct FEventReply                                 Reply;                                                     // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
struct UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params
{
	struct FEventReply                                 Reply;                                                     // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bInAllJoysticks;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.NoResourceBrush
struct UWidgetBlueprintLibrary_NoResourceBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
struct UWidgetBlueprintLibrary_MakeBrushFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
struct UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params
{
	class UMaterialInterface*                          Material;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
struct UWidgetBlueprintLibrary_MakeBrushFromAsset_Params
{
	class USlateBrushAsset*                            BrushAsset;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.LockMouse
struct UWidgetBlueprintLibrary_LockMouse_Params
{
	struct FEventReply                                 Reply;                                                     // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UWidget*                                     CapturingWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.IsDragDropping
struct UWidgetBlueprintLibrary_IsDragDropping_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.Handled
struct UWidgetBlueprintLibrary_Handled_Params
{
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
struct UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params
{
	struct FAnalogInputEvent                           Event;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FKeyEvent                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
struct UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params
{
	struct FPointerEvent                               Event;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInputEvent                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
struct UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params
{
	struct FNavigationEvent                            Event;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInputEvent                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
struct UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params
{
	struct FKeyEvent                                   Event;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInputEvent                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromControllerEvent
struct UWidgetBlueprintLibrary_GetInputEventFromControllerEvent_Params
{
	struct FControllerEvent                            Event;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInputEvent                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
struct UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params
{
	struct FCharacterEvent                             Event;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInputEvent                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
struct UWidgetBlueprintLibrary_GetDynamicMaterial_Params
{
	struct FSlateBrush                                 Brush;                                                     // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
struct UWidgetBlueprintLibrary_GetDragDroppingContent_Params
{
	class UDragDropOperation*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
struct UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params
{
	struct FSlateBrush                                 Brush;                                                     // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
struct UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params
{
	struct FSlateBrush                                 Brush;                                                     // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.GetBrushResource
struct UWidgetBlueprintLibrary_GetBrushResource_Params
{
	struct FSlateBrush                                 Brush;                                                     // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
struct UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Interface;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UUserWidget*>                         FoundWidgets;                                              // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               TopLevelOnly;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
struct UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UUserWidget*>                         FoundWidgets;                                              // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      WidgetClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TopLevelOnly;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.EndDragDrop
struct UWidgetBlueprintLibrary_EndDragDrop_Params
{
	struct FEventReply                                 Reply;                                                     // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
struct UWidgetBlueprintLibrary_DrawTextFormatted_Params
{
	struct FPaintContext                               Context;                                                   // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       TEXT;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector2D                                   Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UFont*                                       Font;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FontSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FontTypeFace;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Tint;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.DrawText
struct UWidgetBlueprintLibrary_DrawText_Params
{
	struct FPaintContext                               Context;                                                   // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     InString;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                Tint;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.DrawLines
struct UWidgetBlueprintLibrary_DrawLines_Params
{
	struct FPaintContext                               Context;                                                   // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           Points;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLinearColor                                Tint;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAntiAlias;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.DrawLine
struct UWidgetBlueprintLibrary_DrawLine_Params
{
	struct FPaintContext                               Context;                                                   // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector2D                                   PositionA;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   PositionB;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                Tint;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAntiAlias;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.DrawBox
struct UWidgetBlueprintLibrary_DrawBox_Params
{
	struct FPaintContext                               Context;                                                   // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector2D                                   Position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   Size;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            Brush;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Tint;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.DismissAllMenus
struct UWidgetBlueprintLibrary_DismissAllMenus_Params
{
};

// Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
struct UWidgetBlueprintLibrary_DetectDragIfPressed_Params
{
	struct FPointerEvent                               PointerEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UWidget*                                     WidgetDetectingDrag;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        DragKey;                                                   // (Parm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.DetectDrag
struct UWidgetBlueprintLibrary_DetectDrag_Params
{
	struct FEventReply                                 Reply;                                                     // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UWidget*                                     WidgetDetectingDrag;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        DragKey;                                                   // (Parm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
struct UWidgetBlueprintLibrary_CreateDragDropOperation_Params
{
	class UClass*                                      OperationClass;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDragDropOperation*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.Create
struct UWidgetBlueprintLibrary_Create_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      WidgetType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           OwningPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
struct UWidgetBlueprintLibrary_ClearUserFocus_Params
{
	struct FEventReply                                 Reply;                                                     // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bInAllUsers;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.CaptureMouse
struct UWidgetBlueprintLibrary_CaptureMouse_Params
{
	struct FEventReply                                 Reply;                                                     // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UWidget*                                     CapturingWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
struct UWidgetBlueprintLibrary_CaptureJoystick_Params
{
	struct FEventReply                                 Reply;                                                     // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UWidget*                                     CapturingWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInAllJoysticks;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetBlueprintLibrary.CancelDragDrop
struct UWidgetBlueprintLibrary_CancelDragDrop_Params
{
};

// Function UMG.WidgetComponent.SetWidget
struct UWidgetComponent_SetWidget_Params
{
	class UUserWidget*                                 Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetComponent.SetOwnerPlayer
struct UWidgetComponent_SetOwnerPlayer_Params
{
	class ULocalPlayer*                                LocalPlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetComponent.SetMaxInteractionDistance
struct UWidgetComponent_SetMaxInteractionDistance_Params
{
	float                                              Distance;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetComponent.SetDrawSize
struct UWidgetComponent_SetDrawSize_Params
{
	struct FVector2D                                   Size;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetComponent.GetUserWidgetObject
struct UWidgetComponent_GetUserWidgetObject_Params
{
	class UUserWidget*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetComponent.GetOwnerPlayer
struct UWidgetComponent_GetOwnerPlayer_Params
{
	class ULocalPlayer*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetComponent.GetMaxInteractionDistance
struct UWidgetComponent_GetMaxInteractionDistance_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetComponent.GetDrawSize
struct UWidgetComponent_GetDrawSize_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
struct UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVerticalBoxSlot*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
struct UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUniformGridSlot*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
struct UWidgetLayoutLibrary_SlotAsOverlaySlot_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOverlaySlot*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
struct UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBoxSlot*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
struct UWidgetLayoutLibrary_SlotAsGridSlot_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGridSlot*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
struct UWidgetLayoutLibrary_SlotAsCanvasSlot_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanvasPanelSlot*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
struct UWidgetLayoutLibrary_SlotAsBorderSlot_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBorderSlot*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
struct UWidgetLayoutLibrary_RemoveAllWidgets_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
struct UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   ScreenPosition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetLayoutLibrary.GetViewportSize
struct UWidgetLayoutLibrary_GetViewportSize_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetLayoutLibrary.GetViewportScale
struct UWidgetLayoutLibrary_GetViewportScale_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
struct UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params
{
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LocationX;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LocationY;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
