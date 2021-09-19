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

// Function LightBox.LightBox_C.OnPanelActivated
struct ULightBox_C_OnPanelActivated_Params
{
};

// Function LightBox.LightBox_C.EstablishContainedPanel
struct ULightBox_C_EstablishContainedPanel_Params
{
	class UFortActionHandlerPanel*                     New_Panel;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LightBox.LightBox_C.AddActivePanelContent
struct ULightBox_C_AddActivePanelContent_Params
{
	class UFortActionHandlerPanel*                     ActionHandlerPanel;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontal_Alignment;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVertical_Alignment;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LightBox.LightBox_C.OnPanelDeactivated
struct ULightBox_C_OnPanelDeactivated_Params
{
};

// Function LightBox.LightBox_C.Construct
struct ULightBox_C_Construct_Params
{
};

// Function LightBox.LightBox_C.Destruct
struct ULightBox_C_Destruct_Params
{
};

// Function LightBox.LightBox_C.OnFadeOutComplete
struct ULightBox_C_OnFadeOutComplete_Params
{
};

// Function LightBox.LightBox_C.ExecuteUbergraph_LightBox
struct ULightBox_C_ExecuteUbergraph_LightBox_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LightBox.LightBox_C.CenterContentCleared__DelegateSignature
struct ULightBox_C_CenterContentCleared__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
