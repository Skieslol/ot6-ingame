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

// Function HeroListRecruitWidget.HeroListRecruitWidget_C.Refresh Info
struct UHeroListRecruitWidget_C_Refresh_Info_Params
{
};

// Function HeroListRecruitWidget.HeroListRecruitWidget_C.Clear Error
struct UHeroListRecruitWidget_C_Clear_Error_Params
{
};

// Function HeroListRecruitWidget.HeroListRecruitWidget_C.Set Error
struct UHeroListRecruitWidget_C_Set_Error_Params
{
	struct FText                                       Error_Text;                                                // (Parm)
};

// Function HeroListRecruitWidget.HeroListRecruitWidget_C.ValidateNameField
struct UHeroListRecruitWidget_C_ValidateNameField_Params
{
};

// Function HeroListRecruitWidget.HeroListRecruitWidget_C.Get Random Name
struct UHeroListRecruitWidget_C_Get_Random_Name_Params
{
};

// Function HeroListRecruitWidget.HeroListRecruitWidget_C.Collapse
struct UHeroListRecruitWidget_C_Collapse_Params
{
};

// Function HeroListRecruitWidget.HeroListRecruitWidget_C.Expand
struct UHeroListRecruitWidget_C_Expand_Params
{
};

// Function HeroListRecruitWidget.HeroListRecruitWidget_C.Initialize
struct UHeroListRecruitWidget_C_Initialize_Params
{
	struct FEmptyHeroSlot                              Hero_Slot;                                                 // (Parm)
};

// Function HeroListRecruitWidget.HeroListRecruitWidget_C.Construct
struct UHeroListRecruitWidget_C_Construct_Params
{
};

// Function HeroListRecruitWidget.HeroListRecruitWidget_C.BndEvt__[Button] Cancel_K2Node_ComponentBoundEvent_150_FortBaseButtonClicked__DelegateSignature
struct UHeroListRecruitWidget_C_BndEvt___Button__Cancel_K2Node_ComponentBoundEvent_150_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroListRecruitWidget.HeroListRecruitWidget_C.BndEvt__[Button] Random Name_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature
struct UHeroListRecruitWidget_C_BndEvt___Button__Random_Name_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HeroListRecruitWidget.HeroListRecruitWidget_C.BndEvt__[Radio] Male Option_K2Node_ComponentBoundEvent_771_FortSelectedStateChanged__DelegateSignature
struct UHeroListRecruitWidget_C_BndEvt___Radio__Male_Option_K2Node_ComponentBoundEvent_771_FortSelectedStateChanged__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SELECTED;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroListRecruitWidget.HeroListRecruitWidget_C.BndEvt__[Radio] Female Option_K2Node_ComponentBoundEvent_784_FortSelectedStateChanged__DelegateSignature
struct UHeroListRecruitWidget_C_BndEvt___Radio__Female_Option_K2Node_ComponentBoundEvent_784_FortSelectedStateChanged__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SELECTED;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroListRecruitWidget.HeroListRecruitWidget_C.BndEvt__[Button] Recruit_K2Node_ComponentBoundEvent_1020_FortBaseButtonClicked__DelegateSignature
struct UHeroListRecruitWidget_C_BndEvt___Button__Recruit_K2Node_ComponentBoundEvent_1020_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroListRecruitWidget.HeroListRecruitWidget_C.BndEvt__[Button] Expand_K2Node_ComponentBoundEvent_631_FortSelectedStateChanged__DelegateSignature
struct UHeroListRecruitWidget_C_BndEvt___Button__Expand_K2Node_ComponentBoundEvent_631_FortSelectedStateChanged__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SELECTED;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroListRecruitWidget.HeroListRecruitWidget_C.BndEvt__[TextBox] Name Input_K2Node_ComponentBoundEvent_100_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UHeroListRecruitWidget_C_BndEvt___TextBox__Name_Input_K2Node_ComponentBoundEvent_100_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       TEXT;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroListRecruitWidget.HeroListRecruitWidget_C.BndEvt__[TextBox] Name Input_K2Node_ComponentBoundEvent_42_OnEditableTextBoxChangedEvent__DelegateSignature
struct UHeroListRecruitWidget_C_BndEvt___TextBox__Name_Input_K2Node_ComponentBoundEvent_42_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       TEXT;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function HeroListRecruitWidget.HeroListRecruitWidget_C.ExecuteUbergraph_HeroListRecruitWidget
struct UHeroListRecruitWidget_C_ExecuteUbergraph_HeroListRecruitWidget_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroListRecruitWidget.HeroListRecruitWidget_C.OnRequestCreateHero__DelegateSignature
struct UHeroListRecruitWidget_C_OnRequestCreateHero__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
