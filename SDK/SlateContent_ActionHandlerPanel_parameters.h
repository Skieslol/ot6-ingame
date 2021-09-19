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

// Function SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C.SetSizeBoxOverrides
struct USlateContent_ActionHandlerPanel_C_SetSizeBoxOverrides_Params
{
	float                                              InWidth;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InHeight;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C.OnHandleAction
struct USlateContent_ActionHandlerPanel_C_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                    // (Parm, OutParm)
	bool                                               bPassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C.InitializeSlateContent
struct USlateContent_ActionHandlerPanel_C_InitializeSlateContent_Params
{
	TEnumAsByte<FortniteUI_EFortLegacySlateWidget>     Slate_Widget_Type;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C.Construct
struct USlateContent_ActionHandlerPanel_C_Construct_Params
{
};

// Function SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C.HandleOnSlateWidgetClosed
struct USlateContent_ActionHandlerPanel_C_HandleOnSlateWidgetClosed_Params
{
};

// Function SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C.ExecuteUbergraph_SlateContent_ActionHandlerPanel
struct USlateContent_ActionHandlerPanel_C_ExecuteUbergraph_SlateContent_ActionHandlerPanel_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
