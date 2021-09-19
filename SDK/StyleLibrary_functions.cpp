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

// Function StyleLibrary.StyleLibrary_C.Get Item Size
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortUIStylesheet       Stylesheet                     (Parm)
// TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D               Item_Size                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStyleLibrary_C::STATIC_Get_Item_Size(const struct FFortUIStylesheet& Stylesheet, TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size, class UObject* __WorldContext, struct FVector2D* Item_Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Item Size");

	UStyleLibrary_C_Get_Item_Size_Params params;
	params.Stylesheet = Stylesheet;
	params.Brush_Size = Brush_Size;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item_Size != nullptr)
		*Item_Size = params.Item_Size;

}


// Function StyleLibrary.StyleLibrary_C.Get Negative Color
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       Stylesheet                     (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStyleLibrary_C::STATIC_Get_Negative_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Negative Color");

	UStyleLibrary_C_Get_Negative_Color_Params params;
	params.Stylesheet = Stylesheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function StyleLibrary.StyleLibrary_C.Get Additive Color
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       Stylesheet                     (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStyleLibrary_C::STATIC_Get_Additive_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Additive Color");

	UStyleLibrary_C_Get_Additive_Color_Params params;
	params.Stylesheet = Stylesheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function StyleLibrary.StyleLibrary_C.Get Item Icon Size
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortUIStylesheet       Stylesheet                     (Parm)
// TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D               Icon_Size                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStyleLibrary_C::STATIC_Get_Item_Icon_Size(const struct FFortUIStylesheet& Stylesheet, TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size, class UObject* __WorldContext, struct FVector2D* Icon_Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Item Icon Size");

	UStyleLibrary_C_Get_Item_Icon_Size_Params params;
	params.Stylesheet = Stylesheet;
	params.Brush_Size = Brush_Size;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon_Size != nullptr)
		*Icon_Size = params.Icon_Size;

}


// Function StyleLibrary.StyleLibrary_C.Get Standard Icon Size
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortUIStylesheet       Stylesheet                     (Parm)
// TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D               Icon_Size                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStyleLibrary_C::STATIC_Get_Standard_Icon_Size(const struct FFortUIStylesheet& Stylesheet, TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size, class UObject* __WorldContext, struct FVector2D* Icon_Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Standard Icon Size");

	UStyleLibrary_C_Get_Standard_Icon_Size_Params params;
	params.Stylesheet = Stylesheet;
	params.Brush_Size = Brush_Size;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon_Size != nullptr)
		*Icon_Size = params.Icon_Size;

}


// Function StyleLibrary.StyleLibrary_C.Get Theme
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       Stylesheet                     (Parm)
// TEnumAsByte<EFortUITheme_EFortUITheme> Theme_Type                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortUITheme            Theme                          (Parm, OutParm)
void UStyleLibrary_C::STATIC_Get_Theme(const struct FFortUIStylesheet& Stylesheet, TEnumAsByte<EFortUITheme_EFortUITheme> Theme_Type, class UObject* __WorldContext, struct FFortUITheme* Theme)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Theme");

	UStyleLibrary_C_Get_Theme_Params params;
	params.Stylesheet = Stylesheet;
	params.Theme_Type = Theme_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Theme != nullptr)
		*Theme = params.Theme;

}


// Function StyleLibrary.StyleLibrary_C.Get Theme Color
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       Stylesheet                     (Parm)
// TEnumAsByte<EFortUITheme_EFortUITheme> Theme_Type                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<EFortUIThemeColor_EFortUIThemeColor> Color_Type                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Theme_Color                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStyleLibrary_C::STATIC_Get_Theme_Color(const struct FFortUIStylesheet& Stylesheet, TEnumAsByte<EFortUITheme_EFortUITheme> Theme_Type, TEnumAsByte<EFortUIThemeColor_EFortUIThemeColor> Color_Type, class UObject* __WorldContext, struct FLinearColor* Theme_Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Theme Color");

	UStyleLibrary_C_Get_Theme_Color_Params params;
	params.Stylesheet = Stylesheet;
	params.Theme_Type = Theme_Type;
	params.Color_Type = Color_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Theme_Color != nullptr)
		*Theme_Color = params.Theme_Color;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
