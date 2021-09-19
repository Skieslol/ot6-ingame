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

// Function ButtonIconText.ButtonIconText_C.Set Alignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Slate_ETextJustify> Align                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UButtonIconText_C::Set_Alignment(TEnumAsByte<Slate_ETextJustify> Align)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ButtonIconText.ButtonIconText_C.Set Alignment");

	UButtonIconText_C_Set_Alignment_Params params;
	params.Align = Align;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ButtonIconText.ButtonIconText_C.Update Size Box
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void UButtonIconText_C::Update_Size_Box()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ButtonIconText.ButtonIconText_C.Update Size Box");

	UButtonIconText_C_Update_Size_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ButtonIconText.ButtonIconText_C.Get Primary Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UButtonIconText_C::Get_Primary_Color()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ButtonIconText.ButtonIconText_C.Get Primary Color");

	UButtonIconText_C_Get_Primary_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ButtonIconText.ButtonIconText_C.Get Secondary Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FLinearColor UButtonIconText_C::Get_Secondary_Color()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ButtonIconText.ButtonIconText_C.Get Secondary Color");

	UButtonIconText_C_Get_Secondary_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ButtonIconText.ButtonIconText_C.Update Padding
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void UButtonIconText_C::Update_Padding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ButtonIconText.ButtonIconText_C.Update Padding");

	UButtonIconText_C_Update_Padding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ButtonIconText.ButtonIconText_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             InBrush                        (Parm)
// bool                           RefreshPadding                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UButtonIconText_C::Set_Icon(const struct FSlateBrush& InBrush, bool RefreshPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ButtonIconText.ButtonIconText_C.Set Icon");

	UButtonIconText_C_Set_Icon_Params params;
	params.InBrush = InBrush;
	params.RefreshPadding = RefreshPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ButtonIconText.ButtonIconText_C.Set Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (Parm)
// bool                           RefreshPadding                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UButtonIconText_C::Set_Text(const struct FText& InText, bool RefreshPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ButtonIconText.ButtonIconText_C.Set Text");

	UButtonIconText_C_Set_Text_Params params;
	params.InText = InText;
	params.RefreshPadding = RefreshPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ButtonIconText.ButtonIconText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UButtonIconText_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ButtonIconText.ButtonIconText_C.PreConstruct");

	UButtonIconText_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ButtonIconText.ButtonIconText_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
void UButtonIconText_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ButtonIconText.ButtonIconText_C.OnMouseEnter");

	UButtonIconText_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ButtonIconText.ButtonIconText_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
void UButtonIconText_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ButtonIconText.ButtonIconText_C.OnMouseLeave");

	UButtonIconText_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ButtonIconText.ButtonIconText_C.ExecuteUbergraph_ButtonIconText
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UButtonIconText_C::ExecuteUbergraph_ButtonIconText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ButtonIconText.ButtonIconText_C.ExecuteUbergraph_ButtonIconText");

	UButtonIconText_C_ExecuteUbergraph_ButtonIconText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ButtonIconText.ButtonIconText_C.On Mouse Hovered Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Hovered                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UButtonIconText_C::On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ButtonIconText.ButtonIconText_C.On Mouse Hovered Changed__DelegateSignature");

	UButtonIconText_C_On_Mouse_Hovered_Changed__DelegateSignature_Params params;
	params.Is_Hovered = Is_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
