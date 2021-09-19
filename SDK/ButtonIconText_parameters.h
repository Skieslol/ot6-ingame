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

// Function ButtonIconText.ButtonIconText_C.Set Alignment
struct UButtonIconText_C_Set_Alignment_Params
{
	TEnumAsByte<Slate_ETextJustify>                    Align;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ButtonIconText.ButtonIconText_C.Update Size Box
struct UButtonIconText_C_Update_Size_Box_Params
{
};

// Function ButtonIconText.ButtonIconText_C.Get Primary Color
struct UButtonIconText_C_Get_Primary_Color_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ButtonIconText.ButtonIconText_C.Get Secondary Color
struct UButtonIconText_C_Get_Secondary_Color_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ButtonIconText.ButtonIconText_C.Update Padding
struct UButtonIconText_C_Update_Padding_Params
{
};

// Function ButtonIconText.ButtonIconText_C.Set Icon
struct UButtonIconText_C_Set_Icon_Params
{
	struct FSlateBrush                                 InBrush;                                                   // (Parm)
	bool                                               RefreshPadding;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ButtonIconText.ButtonIconText_C.Set Text
struct UButtonIconText_C_Set_Text_Params
{
	struct FText                                       InText;                                                    // (Parm)
	bool                                               RefreshPadding;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ButtonIconText.ButtonIconText_C.PreConstruct
struct UButtonIconText_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ButtonIconText.ButtonIconText_C.OnMouseEnter
struct UButtonIconText_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ButtonIconText.ButtonIconText_C.OnMouseLeave
struct UButtonIconText_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ButtonIconText.ButtonIconText_C.ExecuteUbergraph_ButtonIconText
struct UButtonIconText_C_ExecuteUbergraph_ButtonIconText_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ButtonIconText.ButtonIconText_C.On Mouse Hovered Changed__DelegateSignature
struct UButtonIconText_C_On_Mouse_Hovered_Changed__DelegateSignature_Params
{
	bool                                               Is_Hovered;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
