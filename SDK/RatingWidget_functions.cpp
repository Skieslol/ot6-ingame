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

// Function RatingWidget.RatingWidget_C.Redraw
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void URatingWidget_C::Redraw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RatingWidget.RatingWidget_C.Redraw");

	URatingWidget_C_Redraw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RatingWidget.RatingWidget_C.Set Display Style
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<RatingDisplayStyle_ERatingDisplayStyle> New_Style                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URatingWidget_C::Set_Display_Style(TEnumAsByte<RatingDisplayStyle_ERatingDisplayStyle> New_Style)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RatingWidget.RatingWidget_C.Set Display Style");

	URatingWidget_C_Set_Display_Style_Params params;
	params.New_Style = New_Style;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RatingWidget.RatingWidget_C.Set Padding
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void URatingWidget_C::Set_Padding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RatingWidget.RatingWidget_C.Set Padding");

	URatingWidget_C_Set_Padding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RatingWidget.RatingWidget_C.Set Size Box
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                Size_Box                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URatingWidget_C::Set_Size_Box(class USizeBox* Size_Box)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RatingWidget.RatingWidget_C.Set Size Box");

	URatingWidget_C_Set_Size_Box_Params params;
	params.Size_Box = Size_Box;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RatingWidget.RatingWidget_C.Set Icon
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortMultiSizeBrush     Icon_Brush                     (Parm)
void URatingWidget_C::Set_Icon(const struct FFortMultiSizeBrush& Icon_Brush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RatingWidget.RatingWidget_C.Set Icon");

	URatingWidget_C_Set_Icon_Params params;
	params.Icon_Brush = Icon_Brush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RatingWidget.RatingWidget_C.Set Rating Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rating                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URatingWidget_C::Set_Rating_Value(int Rating)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RatingWidget.RatingWidget_C.Set Rating Value");

	URatingWidget_C_Set_Rating_Value_Params params;
	params.Rating = Rating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RatingWidget.RatingWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URatingWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RatingWidget.RatingWidget_C.PreConstruct");

	URatingWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RatingWidget.RatingWidget_C.ExecuteUbergraph_RatingWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URatingWidget_C::ExecuteUbergraph_RatingWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RatingWidget.RatingWidget_C.ExecuteUbergraph_RatingWidget");

	URatingWidget_C_ExecuteUbergraph_RatingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
