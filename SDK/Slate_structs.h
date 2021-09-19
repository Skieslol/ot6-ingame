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

// Enum Slate.ETextFlowDirection
enum class Slate_ETextFlowDirection : uint8_t
{
	ETextFlowDirection__Auto       = 0,
	ETextFlowDirection__LeftToRight = 1,
	ETextFlowDirection__RightToLeft = 2,
	ETextFlowDirection__ETextFlowDirection_MAX = 3,

};

// Enum Slate.ETextJustify
enum class Slate_ETextJustify : uint8_t
{
	ETextJustify__Left             = 0,
	ETextJustify__Center           = 1,
	ETextJustify__Right            = 2,
	ETextJustify__ETextJustify_MAX = 3,

};

// Enum Slate.ETableViewMode
enum class Slate_ETableViewMode : uint8_t
{
	ETableViewMode__List           = 0,
	ETableViewMode__Tile           = 1,
	ETableViewMode__Tree           = 2,
	ETableViewMode__ETableViewMode_MAX = 3,

};

// Enum Slate.ESelectionMode
enum class Slate_ESelectionMode : uint8_t
{
	ESelectionMode__None           = 0,
	ESelectionMode__Single         = 1,
	ESelectionMode__SingleToggle   = 2,
	ESelectionMode__Multi          = 3,
	ESelectionMode__ESelectionMode_MAX = 4,

};

// Enum Slate.EStretch
enum class Slate_EStretch : uint8_t
{
	EStretch__None                 = 0,
	EStretch__Fill                 = 1,
	EStretch__ScaleToFit           = 2,
	EStretch__ScaleToFitX          = 3,
	EStretch__ScaleToFitY          = 4,
	EStretch__ScaleToFill          = 5,
	EStretch__UserSpecified        = 6,
	EStretch__EStretch_MAX         = 7,

};

// Enum Slate.EStretchDirection
enum class Slate_EStretchDirection : uint8_t
{
	EStretchDirection__Both        = 0,
	EStretchDirection__DownOnly    = 1,
	EStretchDirection__UpOnly      = 2,
	EStretchDirection__EStretchDirection_MAX = 3,

};

// Enum Slate.EProgressBarFillType
enum class Slate_EProgressBarFillType : uint8_t
{
	EProgressBarFillType__LeftToRight = 0,
	EProgressBarFillType__RightToLeft = 1,
	EProgressBarFillType__FillFromCenter = 2,
	EProgressBarFillType__TopToBottom = 3,
	EProgressBarFillType__BottomToTop = 4,
	EProgressBarFillType__EProgressBarFillType_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Slate.Anchors
// 0x0010
struct FAnchors
{
	struct FVector2D                                   Minimum;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   Maximum;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Slate.InputChord
// 0x0014
struct FInputChord
{
	struct FKey                                        Key;                                                       // 0x0000(0x0010) (NativeAccessSpecifierPublic)
	unsigned char                                      bShift : 1;                                                // 0x0010(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bCtrl : 1;                                                 // 0x0010(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAlt : 1;                                                  // 0x0010(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bCmd : 1;                                                  // 0x0010(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E4SY[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
