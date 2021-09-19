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

// Function HeroAbility_Widget.HeroAbility_Widget_C.On Ability Selected
struct UHeroAbility_Widget_C_On_Ability_Selected_Params
{
	class UFortBaseButton*                             Ability_Button;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SELECTED;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroAbility_Widget.HeroAbility_Widget_C.Update
struct UHeroAbility_Widget_C_Update_Params
{
	class UFortAbilityKit*                             Ability_Kit;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Cost;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Is_Active;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroAbility_Widget.HeroAbility_Widget_C.Get Ability Kit Tooltip
struct UHeroAbility_Widget_C_Get_Ability_Kit_Tooltip_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HeroAbility_Widget.HeroAbility_Widget_C.Construct
struct UHeroAbility_Widget_C_Construct_Params
{
};

// Function HeroAbility_Widget.HeroAbility_Widget_C.ExecuteUbergraph_HeroAbility_Widget
struct UHeroAbility_Widget_C_ExecuteUbergraph_HeroAbility_Widget_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroAbility_Widget.HeroAbility_Widget_C.OnAbilitySelected__DelegateSignature
struct UHeroAbility_Widget_C_OnAbilitySelected__DelegateSignature_Params
{
	int                                                INDEX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SELECTED;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
