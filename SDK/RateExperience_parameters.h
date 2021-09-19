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

// Function RateExperience.RateExperience_C.HandleFinished
struct URateExperience_C_HandleFinished_Params
{
};

// Function RateExperience.RateExperience_C.OnHandleAction
struct URateExperience_C_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                    // (Parm, OutParm)
	bool                                               bPassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RateExperience.RateExperience_C.UpdateVisibility
struct URateExperience_C_UpdateVisibility_Params
{
};

// Function RateExperience.RateExperience_C.SendAnalyticsEvent
struct URateExperience_C_SendAnalyticsEvent_Params
{
};

// Function RateExperience.RateExperience_C.CreateToolTip
struct URateExperience_C_CreateToolTip_Params
{
	class UWidget*                                     StarWidget;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                WidgetIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RateExperience.RateExperience_C.SetStarCount
struct URateExperience_C_SetStarCount_Params
{
	int                                                StarCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RateExperience.RateExperience_C.Construct
struct URateExperience_C_Construct_Params
{
};

// Function RateExperience.RateExperience_C.BndEvt__Submit_K2Node_ComponentBoundEvent_50_FortBaseButtonClicked__DelegateSignature
struct URateExperience_C_BndEvt__Submit_K2Node_ComponentBoundEvent_50_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RateExperience.RateExperience_C.BndEvt__Decline_K2Node_ComponentBoundEvent_59_FortBaseButtonClicked__DelegateSignature
struct URateExperience_C_BndEvt__Decline_K2Node_ComponentBoundEvent_59_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RateExperience.RateExperience_C.StarButtonClicked
struct URateExperience_C_StarButtonClicked_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RateExperience.RateExperience_C.BndEvt__CommentField_K2Node_ComponentBoundEvent_503_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
struct URateExperience_C_BndEvt__CommentField_K2Node_ComponentBoundEvent_503_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       TEXT;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function RateExperience.RateExperience_C.ExecuteUbergraph_RateExperience
struct URateExperience_C_ExecuteUbergraph_RateExperience_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
