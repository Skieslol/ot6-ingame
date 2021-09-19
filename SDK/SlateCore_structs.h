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
// Enums
//---------------------------------------------------------------------------

// Enum SlateCore.ESlateBrushImageType
enum class SlateCore_ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage  = 0,
	ESlateBrushImageType__FullColor = 1,
	ESlateBrushImageType__Linear   = 2,
	ESlateBrushImageType__ESlateBrushImageType_MAX = 3,

};

// Enum SlateCore.ESlateBrushMirrorType
enum class SlateCore_ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror = 0,
	ESlateBrushMirrorType__Horizontal = 1,
	ESlateBrushMirrorType__Vertical = 2,
	ESlateBrushMirrorType__Both    = 3,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX = 4,

};

// Enum SlateCore.ESlateBrushTileType
enum class SlateCore_ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile    = 0,
	ESlateBrushTileType__Horizontal = 1,
	ESlateBrushTileType__Vertical  = 2,
	ESlateBrushTileType__Both      = 3,
	ESlateBrushTileType__ESlateBrushTileType_MAX = 4,

};

// Enum SlateCore.ESlateColorStylingMode
enum class SlateCore_ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified = 0,
	ESlateColorStylingMode__UseColor_Specified_Link = 1,
	ESlateColorStylingMode__UseColor_Foreground = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued = 3,
	ESlateColorStylingMode__UseColor_MAX = 4,

};

// Enum SlateCore.ESlateBrushDrawType
enum class SlateCore_ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType = 0,
	ESlateBrushDrawType__Box       = 1,
	ESlateBrushDrawType__Border    = 2,
	ESlateBrushDrawType__Image     = 3,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX = 4,

};

// Enum SlateCore.EFontHinting
enum class SlateCore_EFontHinting : uint8_t
{
	EFontHinting__Default          = 0,
	EFontHinting__Auto             = 1,
	EFontHinting__AutoLight        = 2,
	EFontHinting__Monochrome       = 3,
	EFontHinting__None             = 4,
	EFontHinting__EFontHinting_MAX = 5,

};

// Enum SlateCore.ESelectInfo
enum class SlateCore_ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress        = 0,
	ESelectInfo__OnNavigation      = 1,
	ESelectInfo__OnMouseClick      = 2,
	ESelectInfo__Direct            = 3,
	ESelectInfo__ESelectInfo_MAX   = 4,

};

// Enum SlateCore.ETextCommit
enum class SlateCore_ETextCommit : uint8_t
{
	ETextCommit__Default           = 0,
	ETextCommit__OnEnter           = 1,
	ETextCommit__OnUserMovedFocus  = 2,
	ETextCommit__OnCleared         = 3,
	ETextCommit__ETextCommit_MAX   = 4,

};

// Enum SlateCore.EScrollDirection
enum class SlateCore_EScrollDirection : uint8_t
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2,

};

// Enum SlateCore.EOrientation
enum class SlateCore_EOrientation : uint8_t
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2,

};

// Enum SlateCore.EMenuPlacement
enum class SlateCore_EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_MAX              = 11,

};

// Enum SlateCore.EVerticalAlignment
enum class SlateCore_EVerticalAlignment : uint8_t
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4,

};

// Enum SlateCore.EHorizontalAlignment
enum class SlateCore_EHorizontalAlignment : uint8_t
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4,

};

// Enum SlateCore.EUINavigation
enum class SlateCore_EUINavigation : uint8_t
{
	EUINavigation__Left            = 0,
	EUINavigation__Right           = 1,
	EUINavigation__Up              = 2,
	EUINavigation__Down            = 3,
	EUINavigation__Next            = 4,
	EUINavigation__Previous        = 5,
	EUINavigation__Num             = 6,
	EUINavigation__Invalid         = 7,
	EUINavigation__EUINavigation_MAX = 8,

};

// Enum SlateCore.EButtonPressMethod
enum class SlateCore_EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp  = 0,
	EButtonPressMethod__ButtonPress = 1,
	EButtonPressMethod__ButtonRelease = 2,
	EButtonPressMethod__EButtonPressMethod_MAX = 3,

};

// Enum SlateCore.EButtonTouchMethod
enum class SlateCore_EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp  = 0,
	EButtonTouchMethod__PreciseTap = 1,
	EButtonTouchMethod__EButtonTouchMethod_MAX = 2,

};

// Enum SlateCore.EButtonClickMethod
enum class SlateCore_EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp  = 0,
	EButtonClickMethod__MouseDown  = 1,
	EButtonClickMethod__MouseUp    = 2,
	EButtonClickMethod__PreciseClick = 3,
	EButtonClickMethod__EButtonClickMethod_MAX = 4,

};

// Enum SlateCore.EFontFallback
enum class SlateCore_EFontFallback : uint8_t
{
	EFontFallback__FF_NoFallback   = 0,
	EFontFallback__FF_LocalizedFallback = 1,
	EFontFallback__FF_LastResortFallback = 2,
	EFontFallback__FF_Max          = 3,

};

// Enum SlateCore.ECheckBoxState
enum class SlateCore_ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked      = 0,
	ECheckBoxState__Checked        = 1,
	ECheckBoxState__Undetermined   = 2,
	ECheckBoxState__ECheckBoxState_MAX = 3,

};

// Enum SlateCore.ESlateCheckBoxType
enum class SlateCore_ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox   = 0,
	ESlateCheckBoxType__ToggleButton = 1,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX = 2,

};

// Enum SlateCore.EConsumeMouseWheel
enum class SlateCore_EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible = 0,
	EConsumeMouseWheel__Always     = 1,
	EConsumeMouseWheel__Never      = 2,
	EConsumeMouseWheel__EConsumeMouseWheel_MAX = 3,

};

// Enum SlateCore.ETextShapingMethod
enum class SlateCore_ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto       = 0,
	ETextShapingMethod__KerningOnly = 1,
	ETextShapingMethod__FullShaping = 2,
	ETextShapingMethod__ETextShapingMethod_MAX = 3,

};

// Enum SlateCore.EFocusCause
enum class SlateCore_EFocusCause : uint8_t
{
	EFocusCause__Mouse             = 0,
	EFocusCause__Navigation        = 1,
	EFocusCause__SetDirectly       = 2,
	EFocusCause__Cleared           = 3,
	EFocusCause__OtherWidgetLostFocus = 4,
	EFocusCause__WindowActivate    = 5,
	EFocusCause__EFocusCause_MAX   = 6,

};

// Enum SlateCore.EUINavigationRule
enum class SlateCore_EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape      = 0,
	EUINavigationRule__Explicit    = 1,
	EUINavigationRule__Wrap        = 2,
	EUINavigationRule__Stop        = 3,
	EUINavigationRule__Custom      = 4,
	EUINavigationRule__Invalid     = 5,
	EUINavigationRule__EUINavigationRule_MAX = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SlateCore.Margin
// 0x0010
struct FMargin
{
	float                                              Left;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Top;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Right;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bottom;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.SlateColor
// 0x001C
struct FSlateColor
{
	struct FLinearColor                                SpecifiedColor;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_ESlateColorStylingMode>      ColorUseRule;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W76M[0xB];                                     // 0x0011(0x000B) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.SlateBrush
// 0x0074
struct FSlateBrush
{
	unsigned char                                      UnknownData_2DUX[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   ImageSize;                                                 // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESlateBrushDrawType>         DrawAs;                                                    // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RSIS[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Margin;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                                Tint;                                                      // 0x0020(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                                 TintColor;                                                 // 0x0030(0x001C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESlateBrushTileType>         Tiling;                                                    // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESlateBrushMirrorType>       Mirroring;                                                 // 0x004D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_ESlateBrushImageType>        ImageType;                                                 // 0x004E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q33H[0x1];                                     // 0x004F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     ResourceObject;                                            // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       ResourceName;                                              // 0x0054(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsDynamicallyLoaded;                                      // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bHasUObject;                                               // 0x005D(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_US40[0x2];                                     // 0x005E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBox2D                                      UVRegion;                                                  // 0x0060(0x0014) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct SlateCore.InputEvent
// 0x001C
struct FInputEvent
{
	unsigned char                                      UnknownData_U3IY[0x1C];                                    // 0x0000(0x001C) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.PointerEvent
// 0x0044 (0x0060 - 0x001C)
struct FPointerEvent : public FInputEvent
{
	unsigned char                                      UnknownData_W3NI[0x44];                                    // 0x001C(0x0044) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.Geometry
// 0x0034
struct FGeometry
{
	unsigned char                                      UnknownData_7C6F[0x34];                                    // 0x0000(0x0034) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.SlateWidgetStyle
// 0x0004
struct FSlateWidgetStyle
{
	unsigned char                                      UnknownData_3CE2[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.SlateSound
// 0x0014
struct FSlateSound
{
	class UObject*                                     ResourceObject;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BZXE[0x10];                                    // 0x0004(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.ButtonStyle
// 0x0228 (0x022C - 0x0004)
struct FButtonStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Normal;                                                    // 0x0004(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Hovered;                                                   // 0x0078(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Pressed;                                                   // 0x00EC(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Disabled;                                                  // 0x0160(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     NormalPadding;                                             // 0x01D4(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     PressedPadding;                                            // 0x01E4(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateSound                                 PressedSlateSound;                                         // 0x01F4(0x0014) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateSound                                 HoveredSlateSound;                                         // 0x0208(0x0014) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FName                                       PressedSound;                                              // 0x021C(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HoveredSound;                                              // 0x0224(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.ComboButtonStyle
// 0x0324 (0x0328 - 0x0004)
struct FComboButtonStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                ButtonStyle;                                               // 0x0004(0x022C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DownArrowImage;                                            // 0x0230(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MenuBorderBrush;                                           // 0x02A4(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     MenuBorderPadding;                                         // 0x0318(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.ComboBoxStyle
// 0x0360 (0x0364 - 0x0004)
struct FComboBoxStyle : public FSlateWidgetStyle
{
	struct FComboButtonStyle                           ComboButtonStyle;                                          // 0x0004(0x0328) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateSound                                 PressedSlateSound;                                         // 0x032C(0x0014) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateSound                                 SelectionChangeSlateSound;                                 // 0x0340(0x0014) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FName                                       PressedSound;                                              // 0x0354(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SelectionChangeSound;                                      // 0x035C(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.SlateFontInfo
// 0x0028
struct FSlateFontInfo
{
	class UObject*                                     FontObject;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     FontMaterial;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CXVJ[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       TypefaceFontName;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Size;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FontName;                                                  // 0x001C(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TEnumAsByte<SlateCore_EFontHinting>                Hinting;                                                   // 0x0024(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RUAV[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.EditableTextStyle
// 0x01A0 (0x01A4 - 0x0004)
struct FEditableTextStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                      // 0x0004(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x002C(0x001C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundImageSelected;                                   // 0x0048(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundImageComposing;                                  // 0x00BC(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 CaretImage;                                                // 0x0130(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.ScrollBarStyle
// 0x0414 (0x0418 - 0x0004)
struct FScrollBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HorizontalBackgroundImage;                                 // 0x0004(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 VerticalBackgroundImage;                                   // 0x0078(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 VerticalTopSlotImage;                                      // 0x00EC(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HorizontalTopSlotImage;                                    // 0x0160(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 VerticalBottomSlotImage;                                   // 0x01D4(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HorizontalBottomSlotImage;                                 // 0x0248(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 NormalThumbImage;                                          // 0x02BC(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HoveredThumbImage;                                         // 0x0330(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DraggedThumbImage;                                         // 0x03A4(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.EditableTextBoxStyle
// 0x0694 (0x0698 - 0x0004)
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImageNormal;                                     // 0x0004(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundImageHovered;                                    // 0x0078(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundImageFocused;                                    // 0x00EC(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundImageReadOnly;                                   // 0x0160(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                   // 0x01D4(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x01E4(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ForegroundColor;                                           // 0x020C(0x001C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                                 BackgroundColor;                                           // 0x0228(0x001C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ReadOnlyForegroundColor;                                   // 0x0244(0x001C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     HScrollBarPadding;                                         // 0x0260(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     VScrollBarPadding;                                         // 0x0270(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                             ScrollBarStyle;                                            // 0x0280(0x0418) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.TextBlockStyle
// 0x00FC (0x0100 - 0x0004)
struct FTextBlockStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                      // 0x0004(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x002C(0x001C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                                   ShadowOffset;                                              // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColorAndOpacity;                                     // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                                 SelectedBackgroundColor;                                   // 0x0060(0x001C) (Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                                HighlightColor;                                            // 0x007C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HighlightShape;                                            // 0x008C(0x0074) (Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.SpinBoxStyle
// 0x0270 (0x0274 - 0x0004)
struct FSpinBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundBrush;                                           // 0x0004(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HoveredBackgroundBrush;                                    // 0x0078(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ActiveFillBrush;                                           // 0x00EC(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 InactiveFillBrush;                                         // 0x0160(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ArrowsImage;                                               // 0x01D4(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ForegroundColor;                                           // 0x0248(0x001C) (NativeAccessSpecifierPublic)
	struct FMargin                                     TextPadding;                                               // 0x0264(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.KeyEvent
// 0x0018 (0x0034 - 0x001C)
struct FKeyEvent : public FInputEvent
{
	unsigned char                                      UnknownData_507B[0x18];                                    // 0x001C(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.AnalogInputEvent
// 0x0004 (0x0038 - 0x0034)
struct FAnalogInputEvent : public FKeyEvent
{
	unsigned char                                      UnknownData_0YDF[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.ControllerEvent
// 0x0014 (0x0030 - 0x001C)
struct FControllerEvent : public FInputEvent
{
	unsigned char                                      UnknownData_Q4JV[0x14];                                    // 0x001C(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.FocusEvent
// 0x0008
struct FFocusEvent
{
	unsigned char                                      UnknownData_RWV0[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.CharacterEvent
// 0x0004 (0x0020 - 0x001C)
struct FCharacterEvent : public FInputEvent
{
	unsigned char                                      UnknownData_3TY8[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.MotionEvent
// 0x0030 (0x004C - 0x001C)
struct FMotionEvent : public FInputEvent
{
	unsigned char                                      UnknownData_FSKU[0x30];                                    // 0x001C(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.FontData
// 0x0020
struct FFontData
{
	struct FString                                     FontFilename;                                              // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFontBulkData*                               BulkDataPtr;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EFontHinting>                Hinting;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_29RV[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              FontData;                                                  // 0x0014(0x000C) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.TypefaceEntry
// 0x0028
struct FTypefaceEntry
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFontData                                   Font;                                                      // 0x0008(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.Typeface
// 0x000C
struct FTypeface
{
	TArray<struct FTypefaceEntry>                      Fonts;                                                     // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.CompositeSubFont
// 0x001C
struct FCompositeSubFont
{
	struct FTypeface                                   Typeface;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FInt32Range>                         CharacterRanges;                                           // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              ScalingFactor;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.CompositeFont
// 0x001C
struct FCompositeFont
{
	struct FTypeface                                   DefaultTypeface;                                           // 0x0000(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FCompositeSubFont>                   SubTypefaces;                                              // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6DJG[0x4];                                     // 0x0018(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.WindowStyle
// 0x0CF8 (0x0CFC - 0x0004)
struct FWindowStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                MinimizeButtonStyle;                                       // 0x0004(0x022C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                                MaximizeButtonStyle;                                       // 0x0230(0x022C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                                RestoreButtonStyle;                                        // 0x045C(0x022C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                                CloseButtonStyle;                                          // 0x0688(0x022C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TitleTextStyle;                                            // 0x08B4(0x0100) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ActiveTitleBrush;                                          // 0x09B4(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 InactiveTitleBrush;                                        // 0x0A28(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 FlashTitleBrush;                                           // 0x0A9C(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 OutlineBrush;                                              // 0x0B10(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                                 OutlineColor;                                              // 0x0B84(0x001C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BorderBrush;                                               // 0x0BA0(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundBrush;                                           // 0x0C14(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ChildBackgroundBrush;                                      // 0x0C88(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.ScrollBorderStyle
// 0x00E8 (0x00EC - 0x0004)
struct FScrollBorderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                            // 0x0004(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BottomShadowBrush;                                         // 0x0078(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.ScrollBoxStyle
// 0x01D0 (0x01D4 - 0x0004)
struct FScrollBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                            // 0x0004(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BottomShadowBrush;                                         // 0x0078(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 LeftShadowBrush;                                           // 0x00EC(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 RightShadowBrush;                                          // 0x0160(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.DockTabStyle
// 0x0588 (0x058C - 0x0004)
struct FDockTabStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                CloseButtonStyle;                                          // 0x0004(0x022C) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 NormalBrush;                                               // 0x0230(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ActiveBrush;                                               // 0x02A4(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ColorOverlayBrush;                                         // 0x0318(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ForegroundBrush;                                           // 0x038C(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HoveredBrush;                                              // 0x0400(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ContentAreaBrush;                                          // 0x0474(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 TabWellBrush;                                              // 0x04E8(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     TabPadding;                                                // 0x055C(0x0010) (Edit, NativeAccessSpecifierPublic)
	float                                              OverlapWidth;                                              // 0x056C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                                 FlashColor;                                                // 0x0570(0x001C) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.SplitterStyle
// 0x00E8 (0x00EC - 0x0004)
struct FSplitterStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HandleNormalBrush;                                         // 0x0004(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HandleHighlightBrush;                                      // 0x0078(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// 0x0414 (0x0418 - 0x0004)
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SortPrimaryAscendingImage;                                 // 0x0004(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 SortPrimaryDescendingImage;                                // 0x0078(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 SortSecondaryAscendingImage;                               // 0x00EC(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 SortSecondaryDescendingImage;                              // 0x0160(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 NormalBrush;                                               // 0x01D4(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HoveredBrush;                                              // 0x0248(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MenuDropdownImage;                                         // 0x02BC(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MenuDropdownNormalBorderBrush;                             // 0x0330(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MenuDropdownHoveredBorderBrush;                            // 0x03A4(0x0074) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.HeaderRowStyle
// 0x09AC (0x09B0 - 0x0004)
struct FHeaderRowStyle : public FSlateWidgetStyle
{
	struct FTableColumnHeaderStyle                     ColumnStyle;                                               // 0x0004(0x0418) (Edit, NativeAccessSpecifierPublic)
	struct FTableColumnHeaderStyle                     LastColumnStyle;                                           // 0x041C(0x0418) (Edit, NativeAccessSpecifierPublic)
	struct FSplitterStyle                              ColumnSplitterStyle;                                       // 0x0834(0x00EC) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundBrush;                                           // 0x0920(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ForegroundColor;                                           // 0x0994(0x001C) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.TableRowStyle
// 0x05A8 (0x05AC - 0x0004)
struct FTableRowStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SelectorFocusedBrush;                                      // 0x0004(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ActiveHoveredBrush;                                        // 0x0078(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ActiveBrush;                                               // 0x00EC(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 InactiveHoveredBrush;                                      // 0x0160(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 InactiveBrush;                                             // 0x01D4(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 EvenRowBackgroundHoveredBrush;                             // 0x0248(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 EvenRowBackgroundBrush;                                    // 0x02BC(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 OddRowBackgroundHoveredBrush;                              // 0x0330(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 OddRowBackgroundBrush;                                     // 0x03A4(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                                 TextColor;                                                 // 0x0418(0x001C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                                 SelectedTextColor;                                         // 0x0434(0x001C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DropIndicator_Above;                                       // 0x0450(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DropIndicator_Onto;                                        // 0x04C4(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DropIndicator_Below;                                       // 0x0538(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.InlineTextImageStyle
// 0x0078 (0x007C - 0x0004)
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Image;                                                     // 0x0004(0x0074) (Edit, NativeAccessSpecifierPublic)
	int16_t                                            Baseline;                                                  // 0x0078(0x0002) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2BNY[0x2];                                     // 0x007A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.SliderStyle
// 0x01D0 (0x01D4 - 0x0004)
struct FSliderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 NormalBarImage;                                            // 0x0004(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DisabledBarImage;                                          // 0x0078(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 NormalThumbImage;                                          // 0x00EC(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DisabledThumbImage;                                        // 0x0160(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.VolumeControlStyle
// 0x0418 (0x041C - 0x0004)
struct FVolumeControlStyle : public FSlateWidgetStyle
{
	struct FSliderStyle                                SliderStyle;                                               // 0x0004(0x01D4) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HighVolumeImage;                                           // 0x01D8(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MidVolumeImage;                                            // 0x024C(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 LowVolumeImage;                                            // 0x02C0(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 NoVolumeImage;                                             // 0x0334(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MutedImage;                                                // 0x03A8(0x0074) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.SearchBoxStyle
// 0x08A4 (0x08A8 - 0x0004)
struct FSearchBoxStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       TextBoxStyle;                                              // 0x0004(0x0698) (Edit, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              ActiveFontInfo;                                            // 0x069C(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UpArrowImage;                                              // 0x06C4(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DownArrowImage;                                            // 0x0738(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 GlassImage;                                                // 0x07AC(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ClearImage;                                                // 0x0820(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FMargin                                     ImagePadding;                                              // 0x0894(0x0010) (Edit, NativeAccessSpecifierPublic)
	bool                                               bLeftAlignButtons;                                         // 0x08A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RW3T[0x3];                                     // 0x08A5(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct SlateCore.ExpandableAreaStyle
// 0x00E8 (0x00EC - 0x0004)
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 CollapsedImage;                                            // 0x0004(0x0074) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ExpandedImage;                                             // 0x0078(0x0074) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.ProgressBarStyle
// 0x015C (0x0160 - 0x0004)
struct FProgressBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImage;                                           // 0x0004(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 FillImage;                                                 // 0x0078(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MarqueeImage;                                              // 0x00EC(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// 0x0798 (0x079C - 0x0004)
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                      // 0x0004(0x0698) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TextStyle;                                                 // 0x069C(0x0100) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.HyperlinkStyle
// 0x033C (0x0340 - 0x0004)
struct FHyperlinkStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                UnderlineStyle;                                            // 0x0004(0x022C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TextStyle;                                                 // 0x0230(0x0100) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                   // 0x0330(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.CheckBoxStyle
// 0x04B4 (0x04B8 - 0x0004)
struct FCheckBoxStyle : public FSlateWidgetStyle
{
	TEnumAsByte<SlateCore_ESlateCheckBoxType>          CheckBoxType;                                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZV6Q[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 UncheckedImage;                                            // 0x0008(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UncheckedHoveredImage;                                     // 0x007C(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UncheckedPressedImage;                                     // 0x00F0(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 CheckedImage;                                              // 0x0164(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 CheckedHoveredImage;                                       // 0x01D8(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 CheckedPressedImage;                                       // 0x024C(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UndeterminedImage;                                         // 0x02C0(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UndeterminedHoveredImage;                                  // 0x0334(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UndeterminedPressedImage;                                  // 0x03A8(0x0074) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                   // 0x041C(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ForegroundColor;                                           // 0x042C(0x001C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                                 BorderBackgroundColor;                                     // 0x0448(0x001C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateSound                                 CheckedSlateSound;                                         // 0x0464(0x0014) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateSound                                 UncheckedSlateSound;                                       // 0x0478(0x0014) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateSound                                 HoveredSlateSound;                                         // 0x048C(0x0014) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FName                                       CheckedSound;                                              // 0x04A0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       UncheckedSound;                                            // 0x04A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HoveredSound;                                              // 0x04B0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateCore.NavigationEvent
// 0x0004 (0x0020 - 0x001C)
struct FNavigationEvent : public FInputEvent
{
	unsigned char                                      UnknownData_9DE1[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
