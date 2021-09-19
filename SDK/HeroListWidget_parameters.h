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

// Function HeroListWidget.HeroListWidget_C.On Hero Deleted
struct UHeroListWidget_C_On_Hero_Deleted_Params
{
	bool                                               Success;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroListWidget.HeroListWidget_C.On Hero Created
struct UHeroListWidget_C_On_Hero_Created_Params
{
	bool                                               Success;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroListWidget.HeroListWidget_C.Set Tab Group Name
struct UHeroListWidget_C_Set_Tab_Group_Name_Params
{
};

// Function HeroListWidget.HeroListWidget_C.Refresh Hero List
struct UHeroListWidget_C_Refresh_Hero_List_Params
{
};

// Function HeroListWidget.HeroListWidget_C.Update Hero List
struct UHeroListWidget_C_Update_Hero_List_Params
{
};

// Function HeroListWidget.HeroListWidget_C.On Hero Selected
struct UHeroListWidget_C_On_Hero_Selected_Params
{
	class UFortBaseButton*                             Hero_List_Item;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SELECTED;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroListWidget.HeroListWidget_C.Construct
struct UHeroListWidget_C_Construct_Params
{
};

// Function HeroListWidget.HeroListWidget_C.ExecuteUbergraph_HeroListWidget
struct UHeroListWidget_C_ExecuteUbergraph_HeroListWidget_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
