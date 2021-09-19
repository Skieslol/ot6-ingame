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

// Function RatingWidget.RatingWidget_C.Redraw
struct URatingWidget_C_Redraw_Params
{
};

// Function RatingWidget.RatingWidget_C.Set Display Style
struct URatingWidget_C_Set_Display_Style_Params
{
	TEnumAsByte<RatingDisplayStyle_ERatingDisplayStyle> New_Style;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RatingWidget.RatingWidget_C.Set Padding
struct URatingWidget_C_Set_Padding_Params
{
};

// Function RatingWidget.RatingWidget_C.Set Size Box
struct URatingWidget_C_Set_Size_Box_Params
{
	class USizeBox*                                    Size_Box;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RatingWidget.RatingWidget_C.Set Icon
struct URatingWidget_C_Set_Icon_Params
{
	struct FFortMultiSizeBrush                         Icon_Brush;                                                // (Parm)
};

// Function RatingWidget.RatingWidget_C.Set Rating Value
struct URatingWidget_C_Set_Rating_Value_Params
{
	int                                                Rating;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RatingWidget.RatingWidget_C.PreConstruct
struct URatingWidget_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RatingWidget.RatingWidget_C.ExecuteUbergraph_RatingWidget
struct URatingWidget_C_ExecuteUbergraph_RatingWidget_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
