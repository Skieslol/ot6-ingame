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

// Function InlineHeroCoreStat.InlineHeroCoreStat_C.Get Tooltip Widget
struct UInlineHeroCoreStat_C_Get_Tooltip_Widget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function InlineHeroCoreStat.InlineHeroCoreStat_C.Update
struct UInlineHeroCoreStat_C_Update_Params
{
	struct FHeroCoreStat                               Data;                                                      // (Parm)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<FortniteGame_EFortBrushSize>           Brush_Size;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InlineHeroCoreStat.InlineHeroCoreStat_C.Construct
struct UInlineHeroCoreStat_C_Construct_Params
{
};

// Function InlineHeroCoreStat.InlineHeroCoreStat_C.ExecuteUbergraph_InlineHeroCoreStat
struct UInlineHeroCoreStat_C_ExecuteUbergraph_InlineHeroCoreStat_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
