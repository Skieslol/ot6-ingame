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

// Function HeroCoreAbility_Widget.HeroCoreAbility_Widget_C.Invalid Data
struct UHeroCoreAbility_Widget_C_Invalid_Data_Params
{
};

// Function HeroCoreAbility_Widget.HeroCoreAbility_Widget_C.Update
struct UHeroCoreAbility_Widget_C_Update_Params
{
	class UFortAbilityKit*                             Ability_Kit;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Is_Unlocked;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroCoreAbility_Widget.HeroCoreAbility_Widget_C.Get Ability Kit Tooltip
struct UHeroCoreAbility_Widget_C_Get_Ability_Kit_Tooltip_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HeroCoreAbility_Widget.HeroCoreAbility_Widget_C.Construct
struct UHeroCoreAbility_Widget_C_Construct_Params
{
};

// Function HeroCoreAbility_Widget.HeroCoreAbility_Widget_C.ExecuteUbergraph_HeroCoreAbility_Widget
struct UHeroCoreAbility_Widget_C_ExecuteUbergraph_HeroCoreAbility_Widget_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
