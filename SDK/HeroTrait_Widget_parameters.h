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

// Function HeroTrait_Widget.HeroTrait_Widget_C.Refresh
struct UHeroTrait_Widget_C_Refresh_Params
{
};

// Function HeroTrait_Widget.HeroTrait_Widget_C.On Ability Selected
struct UHeroTrait_Widget_C_On_Ability_Selected_Params
{
	int                                                INDEX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SELECTED;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroTrait_Widget.HeroTrait_Widget_C.Get Primary Trait Tooltip
struct UHeroTrait_Widget_C_Get_Primary_Trait_Tooltip_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HeroTrait_Widget.HeroTrait_Widget_C.Update
struct UHeroTrait_Widget_C_Update_Params
{
	class UFortTrait*                                  Trait;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                INDEX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroTrait_Widget.HeroTrait_Widget_C.Construct
struct UHeroTrait_Widget_C_Construct_Params
{
};

// Function HeroTrait_Widget.HeroTrait_Widget_C.ExecuteUbergraph_HeroTrait_Widget
struct UHeroTrait_Widget_C_ExecuteUbergraph_HeroTrait_Widget_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroTrait_Widget.HeroTrait_Widget_C.OnRequestSetTraitDepth__DelegateSignature
struct UHeroTrait_Widget_C_OnRequestSetTraitDepth__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
