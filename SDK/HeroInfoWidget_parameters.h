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

// Function HeroInfoWidget.HeroInfoWidget_C.OnHeroStatsChanged
struct UHeroInfoWidget_C_OnHeroStatsChanged_Params
{
};

// Function HeroInfoWidget.HeroInfoWidget_C.Refresh Hero ID
struct UHeroInfoWidget_C_Refresh_Hero_ID_Params
{
};

// Function HeroInfoWidget.HeroInfoWidget_C.Set As Current Hero
struct UHeroInfoWidget_C_Set_As_Current_Hero_Params
{
	bool                                               IsSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroInfoWidget.HeroInfoWidget_C.On Player Data Updated
struct UHeroInfoWidget_C_On_Player_Data_Updated_Params
{
};

// Function HeroInfoWidget.HeroInfoWidget_C.Get XP Progress Tooltip
struct UHeroInfoWidget_C_Get_XP_Progress_Tooltip_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HeroInfoWidget.HeroInfoWidget_C.Refresh Format
struct UHeroInfoWidget_C_Refresh_Format_Params
{
};

// Function HeroInfoWidget.HeroInfoWidget_C.Bind Delegates
struct UHeroInfoWidget_C_Bind_Delegates_Params
{
};

// Function HeroInfoWidget.HeroInfoWidget_C.Refresh Hero Info
struct UHeroInfoWidget_C_Refresh_Hero_Info_Params
{
};

// Function HeroInfoWidget.HeroInfoWidget_C.Refresh Hero XP
struct UHeroInfoWidget_C_Refresh_Hero_XP_Params
{
};

// Function HeroInfoWidget.HeroInfoWidget_C.Refresh Hero Stats
struct UHeroInfoWidget_C_Refresh_Hero_Stats_Params
{
};

// Function HeroInfoWidget.HeroInfoWidget_C.Update
struct UHeroInfoWidget_C_Update_Params
{
};

// Function HeroInfoWidget.HeroInfoWidget_C.Construct
struct UHeroInfoWidget_C_Construct_Params
{
};

// Function HeroInfoWidget.HeroInfoWidget_C.PreConstruct
struct UHeroInfoWidget_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroInfoWidget.HeroInfoWidget_C.ExecuteUbergraph_HeroInfoWidget
struct UHeroInfoWidget_C_ExecuteUbergraph_HeroInfoWidget_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroInfoWidget.HeroInfoWidget_C.OnHeroSelected__DelegateSignature
struct UHeroInfoWidget_C_OnHeroSelected__DelegateSignature_Params
{
	struct FString                                     Hero_ID;                                                   // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
