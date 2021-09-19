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

// Function StyleLibrary.StyleLibrary_C.Get Item Size
struct UStyleLibrary_C_Get_Item_Size_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                                // (Parm)
	TEnumAsByte<FortniteGame_EFortBrushSize>           Brush_Size;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   Item_Size;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StyleLibrary.StyleLibrary_C.Get Negative Color
struct UStyleLibrary_C_Get_Negative_Color_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                                // (Parm)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StyleLibrary.StyleLibrary_C.Get Additive Color
struct UStyleLibrary_C_Get_Additive_Color_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                                // (Parm)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StyleLibrary.StyleLibrary_C.Get Item Icon Size
struct UStyleLibrary_C_Get_Item_Icon_Size_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                                // (Parm)
	TEnumAsByte<FortniteGame_EFortBrushSize>           Brush_Size;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   Icon_Size;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StyleLibrary.StyleLibrary_C.Get Standard Icon Size
struct UStyleLibrary_C_Get_Standard_Icon_Size_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                                // (Parm)
	TEnumAsByte<FortniteGame_EFortBrushSize>           Brush_Size;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   Icon_Size;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StyleLibrary.StyleLibrary_C.Get Theme
struct UStyleLibrary_C_Get_Theme_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                                // (Parm)
	TEnumAsByte<EFortUITheme_EFortUITheme>             Theme_Type;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortUITheme                                Theme;                                                     // (Parm, OutParm)
};

// Function StyleLibrary.StyleLibrary_C.Get Theme Color
struct UStyleLibrary_C_Get_Theme_Color_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                                // (Parm)
	TEnumAsByte<EFortUITheme_EFortUITheme>             Theme_Type;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<EFortUIThemeColor_EFortUIThemeColor>   Color_Type;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Theme_Color;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
