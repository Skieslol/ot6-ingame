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

// Enum UMG.ESlateVisibility
enum class UMG_ESlateVisibility : uint8_t
{
	ESlateVisibility__Visible      = 0,
	ESlateVisibility__Collapsed    = 1,
	ESlateVisibility__Hidden       = 2,
	ESlateVisibility__HitTestInvisible = 3,
	ESlateVisibility__SelfHitTestInvisible = 4,
	ESlateVisibility__ESlateVisibility_MAX = 5,

};

// Enum UMG.EVirtualKeyboardType
enum class UMG_EVirtualKeyboardType : uint8_t
{
	EVirtualKeyboardType__Default  = 0,
	EVirtualKeyboardType__Number   = 1,
	EVirtualKeyboardType__Web      = 2,
	EVirtualKeyboardType__Email    = 3,
	EVirtualKeyboardType__Password = 4,
	EVirtualKeyboardType__AlphaNumeric = 5,
	EVirtualKeyboardType__EVirtualKeyboardType_MAX = 6,

};

// Enum UMG.EDragPivot
enum class UMG_EDragPivot : uint8_t
{
	EDragPivot__MouseDown          = 0,
	EDragPivot__TopLeft            = 1,
	EDragPivot__TopCenter          = 2,
	EDragPivot__TopRight           = 3,
	EDragPivot__CenterLeft         = 4,
	EDragPivot__CenterCenter       = 5,
	EDragPivot__CenterRight        = 6,
	EDragPivot__BottomLeft         = 7,
	EDragPivot__BottomCenter       = 8,
	EDragPivot__BottomRight        = 9,
	EDragPivot__EDragPivot_MAX     = 10,

};

// Enum UMG.ESlateSizeRule
enum class UMG_ESlateSizeRule : uint8_t
{
	ESlateSizeRule__Automatic      = 0,
	ESlateSizeRule__Fill           = 1,
	ESlateSizeRule__ESlateSizeRule_MAX = 2,

};

// Enum UMG.EWidgetDesignFlags
enum class UMG_EWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags__None       = 0,
	EWidgetDesignFlags__Designing  = 1,
	EWidgetDesignFlags__ShowOutline = 2,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX = 3,

};

// Enum UMG.EDesignPreviewSizeMode
enum class UMG_EDesignPreviewSizeMode : uint8_t
{
	EDesignPreviewSizeMode__FillScreen = 0,
	EDesignPreviewSizeMode__Custom = 1,
	EDesignPreviewSizeMode__CustomOnScreen = 2,
	EDesignPreviewSizeMode__Desired = 3,
	EDesignPreviewSizeMode__DesiredOnScreen = 4,
	EDesignPreviewSizeMode__EDesignPreviewSizeMode_MAX = 5,

};

// Enum UMG.EUMGSequencePlayMode
enum class UMG_EUMGSequencePlayMode : uint8_t
{
	EUMGSequencePlayMode__Forward  = 0,
	EUMGSequencePlayMode__Reverse  = 1,
	EUMGSequencePlayMode__PingPong = 2,
	EUMGSequencePlayMode__EUMGSequencePlayMode_MAX = 3,

};

// Enum UMG.EBindingKind
enum class UMG_EBindingKind : uint8_t
{
	EBindingKind__Function         = 0,
	EBindingKind__Property         = 1,
	EBindingKind__EBindingKind_MAX = 2,

};

// Enum UMG.EWidgetBlendMode
enum class UMG_EWidgetBlendMode : uint8_t
{
	EWidgetBlendMode__Opaque       = 0,
	EWidgetBlendMode__Masked       = 1,
	EWidgetBlendMode__Transparent  = 2,
	EWidgetBlendMode__EWidgetBlendMode_MAX = 3,

};

// Enum UMG.EWidgetSpace
enum class UMG_EWidgetSpace : uint8_t
{
	EWidgetSpace__World            = 0,
	EWidgetSpace__Screen           = 1,
	EWidgetSpace__EWidgetSpace_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UMG.PropertyPathSegment
// 0x0014
struct FPropertyPathSegment
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArrayIndex;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStruct*                                     Struct;                                                    // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UField*                                      Field;                                                     // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct UMG.DynamicPropertyPath
// 0x000C
struct FDynamicPropertyPath
{
	TArray<struct FPropertyPathSegment>                Segments;                                                  // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct UMG.SlateMeshVertex
// 0x003C
struct FSlateMeshVertex
{
	struct FVector2D                                   Position;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV0;                                                       // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV1;                                                       // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV2;                                                       // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV3;                                                       // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV4;                                                       // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV5;                                                       // 0x0034(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct UMG.AnchorData
// 0x0028
struct FAnchorData
{
	struct FMargin                                     Offsets;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAnchors                                    Anchors;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                                   Alignment;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct UMG.SlateChildSize
// 0x0008
struct FSlateChildSize
{
	float                                              Value;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<UMG_ESlateSizeRule>                    SizeRule;                                                  // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N98D[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct UMG.EventReply
// 0x0060
struct FEventReply
{
	unsigned char                                      UnknownData_6R2L[0x60];                                    // 0x0000(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct UMG.WidgetTransform
// 0x001C
struct FWidgetTransform
{
	struct FVector2D                                   Translation;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   Scale;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   Shear;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Angle;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct UMG.ShapedTextOptions
// 0x0008
struct FShapedTextOptions
{
	unsigned char                                      bOverride_TextShapingMethod : 1;                           // 0x0000(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_TextFlowDirection : 1;                           // 0x0000(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9YL2[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<SlateCore_ETextShapingMethod>          TextShapingMethod;                                         // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_ETextFlowDirection>              TextFlowDirection;                                         // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_76Z9[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct UMG.NamedSlotBinding
// 0x000C
struct FNamedSlotBinding
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Content;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct UMG.PaintContext
// 0x001C
struct FPaintContext
{
	unsigned char                                      UnknownData_Z7R2[0x1C];                                    // 0x0000(0x001C) MISSED OFFSET (PADDING)

};

// ScriptStruct UMG.WidgetAnimationBinding
// 0x0020
struct FWidgetAnimationBinding
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SlotWidgetName;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       AnimationGuid;                                             // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct UMG.DelegateRuntimeBinding
// 0x002C
struct FDelegateRuntimeBinding
{
	struct FString                                     ObjectName;                                                // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PropertyName;                                              // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FunctionName;                                              // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicPropertyPath                        SourcePath;                                                // 0x001C(0x000C) (NativeAccessSpecifierPublic)
	TEnumAsByte<UMG_EBindingKind>                      Kind;                                                      // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TJYO[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct UMG.WidgetNavigationData
// 0x0014
struct FWidgetNavigationData
{
	TEnumAsByte<SlateCore_EUINavigationRule>           Rule;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LXQY[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       WidgetToFocus;                                             // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AZNE[0x8];                                     // 0x000C(0x0008) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
