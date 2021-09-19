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

// Function HeroListItemWidget.HeroListItemWidget_C.Set Selected
struct UHeroListItemWidget_C_Set_Selected_Params
{
	bool                                               SELECTED;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroListItemWidget.HeroListItemWidget_C.Init Selected
struct UHeroListItemWidget_C_Init_Selected_Params
{
};

// Function HeroListItemWidget.HeroListItemWidget_C.Construct
struct UHeroListItemWidget_C_Construct_Params
{
};

// Function HeroListItemWidget.HeroListItemWidget_C.On Hero Selected
struct UHeroListItemWidget_C_On_Hero_Selected_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SELECTED;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroListItemWidget.HeroListItemWidget_C.ExecuteUbergraph_HeroListItemWidget
struct UHeroListItemWidget_C_ExecuteUbergraph_HeroListItemWidget_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroListItemWidget.HeroListItemWidget_C.HeroSelected__DelegateSignature
struct UHeroListItemWidget_C_HeroSelected__DelegateSignature_Params
{
	struct FString                                     Hero_ID;                                                   // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
