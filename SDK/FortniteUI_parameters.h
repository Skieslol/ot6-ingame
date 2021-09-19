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

// Function FortniteUI.FortAbstractButtonGroup.SetDataProvider
struct UFortAbstractButtonGroup_SetDataProvider_Params
{
	TArray<struct FText>                               InDataProvider;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortAbstractButtonGroup.HandleButtonClicked
struct UFortAbstractButtonGroup_HandleButtonClicked_Params
{
	class UFortButton*                                 Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortTabButtonGroup.SetInitialButtonSelection
struct UFortTabButtonGroup_SetInitialButtonSelection_Params
{
	int                                                INDEX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortTabButtonGroup.GetTabButton
struct UFortTabButtonGroup_GetTabButton_Params
{
	int                                                INDEX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortTabButton*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortActorCanvas.AddActorIndicator
struct UFortActorCanvas_AddActorIndicator_Params
{
	class UFortActorIndicatorWidget*                   Indicator;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortActorCanvasSlot*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortActorCanvasSlot.SetVerticalAlignment
struct UFortActorCanvasSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortActorCanvasSlot.SetHorizontalAlignment
struct UFortActorCanvasSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortActorCanvasSlot.SetCanAutoRemove
struct UFortActorCanvasSlot_SetCanAutoRemove_Params
{
	bool                                               bAllowAutoRemove;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortAsyncAction_SetUIState.SetUIState
struct UFortAsyncAction_SetUIState_SetUIState_Params
{
	class UObject*                                     InWorldContextObject;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_EFortUIState>               DesiredState;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAsyncAction_SetUIState*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortAsyncAction_ShowConfirmation.ShowConfirmationDialog
struct UFortAsyncAction_ShowConfirmation_ShowConfirmationDialog_Params
{
	class UObject*                                     InWorldContextObject;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Title;                                                     // (Parm, NativeAccessSpecifierPublic)
	struct FText                                       Message;                                                   // (Parm, NativeAccessSpecifierPublic)
	struct FText                                       ConfirmButtonText;                                         // (Parm, NativeAccessSpecifierPublic)
	struct FText                                       DeclineButtonText;                                         // (Parm, NativeAccessSpecifierPublic)
	class UFortUserWidget*                             InAdditionalContent;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InDisplayTime;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAsyncAction_ShowConfirmation*           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortBangWrapper.SetBangVisibility
struct UFortBangWrapper_SetBangVisibility_Params
{
	bool                                               InVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUserWidget.UnregisterForEvent
struct UFortUserWidget_UnregisterForEvent_Params
{
	struct FName                                       EventName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             InCallback;                                                // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUserWidget.RegisterForInvalidation
struct UFortUserWidget_RegisterForInvalidation_Params
{
	struct FName                                       InvalidationType;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUserWidget.RegisterForEvent
struct UFortUserWidget_RegisterForEvent_Params
{
	struct FName                                       EventName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             InCallback;                                                // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUserWidget.PreConstruct
struct UFortUserWidget_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUserWidget.IsInvalid
struct UFortUserWidget_IsInvalid_Params
{
	struct FName                                       Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUserWidget.DispatchEvent
struct UFortUserWidget_DispatchEvent_Params
{
	struct FName                                       EventName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUserWidget._BPInvalidate
struct UFortUserWidget__BPInvalidate_Params
{
	struct FName                                       Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortButtonStyle.GetMarginBySizeFromMultiSizeMargin
struct UFortButtonStyle_GetMarginBySizeFromMultiSizeMargin_Params
{
	struct FFortMultiSizeMargin                        MultiSizeMargin;                                           // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortBrushSize>           Size;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortButtonStyle.GetFontBySizeFromMultiSizeFont
struct UFortButtonStyle_GetFontBySizeFromMultiSizeFont_Params
{
	struct FFortMultiSizeFont                          MultiSizeFont;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortBrushSize>           Size;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortButtonStyle.GetFontBySize
struct UFortButtonStyle_GetFontBySize_Params
{
	TEnumAsByte<FortniteGame_EFortBrushSize>           Size;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortButtonStyle.GetCustomPaddingBySize
struct UFortButtonStyle_GetCustomPaddingBySize_Params
{
	TEnumAsByte<FortniteGame_EFortBrushSize>           Size;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortButtonStyle.GetButtonPaddingBySize
struct UFortButtonStyle_GetButtonPaddingBySize_Params
{
	TEnumAsByte<FortniteGame_EFortBrushSize>           Size;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortButtonStyle.GetBrushBySizeFromMultiSizeBrush
struct UFortButtonStyle_GetBrushBySizeFromMultiSizeBrush_Params
{
	struct FFortMultiSizeBrush                         MultiSizeBrush;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortBrushSize>           Size;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortBaseButton.SetStyle
struct UFortBaseButton_SetStyle_Params
{
	class UClass*                                      InStyle;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortBaseButton.SetSelectionGroup
struct UFortBaseButton_SetSelectionGroup_Params
{
	struct FName                                       InSelectionGroup;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortBaseButton.SetSelected
struct UFortBaseButton_SetSelected_Params
{
	bool                                               InSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortBaseButton.SetHovered
struct UFortBaseButton_SetHovered_Params
{
	bool                                               InHovered;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortBaseButton.SetClickMethod
struct UFortBaseButton_SetClickMethod_Params
{
	TEnumAsByte<SlateCore_EButtonClickMethod>          InClickMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortBaseButton.SetClickable
struct UFortBaseButton_SetClickable_Params
{
	bool                                               InClickable;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortBaseButton.SetBrushSize
struct UFortBaseButton_SetBrushSize_Params
{
	TEnumAsByte<FortniteGame_EFortBrushSize>           InSize;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortBaseButton.SetBangVisibility
struct UFortBaseButton_SetBangVisibility_Params
{
	bool                                               bVisible;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortBaseButton.OnButtonClicked
struct UFortBaseButton_OnButtonClicked_Params
{
};

// Function FortniteUI.FortBaseButton.GetStyle
struct UFortBaseButton_GetStyle_Params
{
	class UFortButtonStyle*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortBaseButton.GetSelectionGroupIndex
struct UFortBaseButton_GetSelectionGroupIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortBaseButton.GetSelected
struct UFortBaseButton_GetSelected_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortBaseButton.GetCurrentStateStyle
struct UFortBaseButton_GetCurrentStateStyle_Params
{
	struct FFortStateStyle                             ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortBaseButton.GetCurrentFont
struct UFortBaseButton_GetCurrentFont_Params
{
	struct FSlateFontInfo                              ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortBaseButton.GetCurrentCustomPadding
struct UFortBaseButton_GetCurrentCustomPadding_Params
{
	struct FMargin                                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortBaseButton.GetCurrentButtonPadding
struct UFortBaseButton_GetCurrentButtonPadding_Params
{
	struct FMargin                                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortBaseButton.ForceClick
struct UFortBaseButton_ForceClick_Params
{
};

// Function FortniteUI.FortFrontEndContext.ViewVaultItem
struct UFortFrontEndContext_ViewVaultItem_Params
{
	class UFortItem*                                   ItemToView;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.TriggerUIFeedbackEvent
struct UFortFrontEndContext_TriggerUIFeedbackEvent_Params
{
	struct FName                                       EventName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.SkipInitialBenchmark
struct UFortFrontEndContext_SkipInitialBenchmark_Params
{
};

// Function FortniteUI.FortFrontEndContext.ShouldRunInitialBenchmark
struct UFortFrontEndContext_ShouldRunInitialBenchmark_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.SetSelectedTheater
struct UFortFrontEndContext_SetSelectedTheater_Params
{
	int                                                TheaterIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.SetPersonalHeroChoice
struct UFortFrontEndContext_SetPersonalHeroChoice_Params
{
	class UFortHero*                                   Hero;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.SetHeroChoice
struct UFortFrontEndContext_SetHeroChoice_Params
{
	int                                                PartyMemberIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortHero*                                   Hero;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.SetFrontEndCamera
struct UFortFrontEndContext_SetFrontEndCamera_Params
{
	TEnumAsByte<FortniteGame_EFrontEndCamera>          NewState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.SelectGadgetForSlot
struct UFortFrontEndContext_SelectGadgetForSlot_Params
{
	int                                                Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                         GadgetDefinition;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.SelectDefaultTheaterTile
struct UFortFrontEndContext_SelectDefaultTheaterTile_Params
{
};

// Function FortniteUI.FortFrontEndContext.RunBenchmarkAndApplyBestSettings
struct UFortFrontEndContext_RunBenchmarkAndApplyBestSettings_Params
{
};

// Function FortniteUI.FortFrontEndContext.NotifyCreateBuildingClosed
struct UFortFrontEndContext_NotifyCreateBuildingClosed_Params
{
	class UHomeBaseBuilding*                           Building;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.MarkSeenItemsInVault
struct UFortFrontEndContext_MarkSeenItemsInVault_Params
{
};

// Function FortniteUI.FortFrontEndContext.LoadOutpostView
struct UFortFrontEndContext_LoadOutpostView_Params
{
	int                                                TheaterSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.IsFabricatorDisintegrating
struct UFortFrontEndContext_IsFabricatorDisintegrating_Params
{
	int                                                TheaterSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.IsActiveTileMissionValid
struct UFortFrontEndContext_IsActiveTileMissionValid_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetTileMissionDetails
struct UFortFrontEndContext_GetTileMissionDetails_Params
{
	class AFortTheaterMapTile*                         Tile;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMissionDetails                         MissionDetails;                                            // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetTheaterType
struct UFortFrontEndContext_GetTheaterType_Params
{
	int                                                TheaterIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortTheaterType>         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetTheaterRegionCount
struct UFortFrontEndContext_GetTheaterRegionCount_Params
{
	int                                                TheaterIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetTheaterName
struct UFortFrontEndContext_GetTheaterName_Params
{
	int                                                TheaterIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetTheaterDifficultyText
struct UFortFrontEndContext_GetTheaterDifficultyText_Params
{
	int                                                TheaterIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetTheaterData
struct UFortFrontEndContext_GetTheaterData_Params
{
	int                                                TheaterIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortTheaterMapData                         OutTheaterData;                                            // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetSelectedTheaterIndex
struct UFortFrontEndContext_GetSelectedTheaterIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetSelectedTheaterData
struct UFortFrontEndContext_GetSelectedTheaterData_Params
{
	struct FFortTheaterMapData                         OutTheaterData;                                            // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetSelectableGadgets
struct UFortFrontEndContext_GetSelectableGadgets_Params
{
	TArray<class UFortWorldItem*>                      SelectableGadgets;                                         // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UFortWorldItem*>                      LastSelectedGadgets;                                       // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetSchematicXpResourceBrush
struct UFortFrontEndContext_GetSchematicXpResourceBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetSchematicResourceItemDefinition
struct UFortFrontEndContext_GetSchematicResourceItemDefinition_Params
{
	class UFortPersistentResourceItemDefinition*       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetRequirementText
struct UFortFrontEndContext_GetRequirementText_Params
{
	struct FFortRequirementsInfo                       InRequirements;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetPersonnelXpResourceBrush
struct UFortFrontEndContext_GetPersonnelXpResourceBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetPersonnelResourceItemDefinition
struct UFortFrontEndContext_GetPersonnelResourceItemDefinition_Params
{
	class UFortPersistentResourceItemDefinition*       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetPersistentResourceItemDefinition
struct UFortFrontEndContext_GetPersistentResourceItemDefinition_Params
{
	TEnumAsByte<FortniteGame_EFortPersistentResources> ResourceType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPersistentResourceItemDefinition*       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetOutpostStructureUpgradeCost
struct UFortFrontEndContext_GetOutpostStructureUpgradeCost_Params
{
	int                                                TheaterSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UpgradeLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortOutpostItemDefinition*                  OutpostStructure;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortItemQuantityPair>               OutWorldItems;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortItemQuantityPair>               OutAccountItems;                                           // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetOutpostStructureMaxLevel
struct UFortFrontEndContext_GetOutpostStructureMaxLevel_Params
{
	int                                                TheaterSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortOutpostItemDefinition*                  OutpostStructure;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetOutpostStructureLevel
struct UFortFrontEndContext_GetOutpostStructureLevel_Params
{
	int                                                TheaterSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortOutpostItemDefinition*                  OutpostStructure;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetNumberOfItemsInStorageVault
struct UFortFrontEndContext_GetNumberOfItemsInStorageVault_Params
{
	int                                                TheaterSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetMaxNumberOfItemsInStorageVault
struct UFortFrontEndContext_GetMaxNumberOfItemsInStorageVault_Params
{
	int                                                TheaterSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetItemFromItemQuantityPair
struct UFortFrontEndContext_GetItemFromItemQuantityPair_Params
{
	struct FFortItemQuantityPair                       InPair;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetHeroPlayerPawnByIndex
struct UFortFrontEndContext_GetHeroPlayerPawnByIndex_Params
{
	int                                                PartyMemberIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerPawn*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetHarvestingToolForLevel
struct UFortFrontEndContext_GetHarvestingToolForLevel_Params
{
	int                                                TheaterSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InHarvestingOptimizerLevel;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortWorldItemDefinition*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetFrontEndCamera
struct UFortFrontEndContext_GetFrontEndCamera_Params
{
	TEnumAsByte<FortniteGame_EFrontEndCamera>          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetFeatureState
struct UFortFrontEndContext_GetFeatureState_Params
{
	TEnumAsByte<FortniteUI_EFortFrontEndFeature>       Feature;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_EFortFrontEndFeatureState>  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetFabricatorStoredGooAmount
struct UFortFrontEndContext_GetFabricatorStoredGooAmount_Params
{
	int                                                TheaterSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetFabricatorMaxCapacity
struct UFortFrontEndContext_GetFabricatorMaxCapacity_Params
{
	int                                                TheaterSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetFabricatorIncomingGooAmount
struct UFortFrontEndContext_GetFabricatorIncomingGooAmount_Params
{
	int                                                TheaterSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetFabricatorDisintegrationSecondsRemaining
struct UFortFrontEndContext_GetFabricatorDisintegrationSecondsRemaining_Params
{
	int                                                TheaterSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetDesiredPlayButtonCamera
struct UFortFrontEndContext_GetDesiredPlayButtonCamera_Params
{
	TEnumAsByte<FortniteGame_EFrontEndCamera>          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetCurrentTheaterName
struct UFortFrontEndContext_GetCurrentTheaterName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetAvailibleDifficulties
struct UFortFrontEndContext_GetAvailibleDifficulties_Params
{
	TArray<struct FGameDifficultyInfo>                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetAttributeIcon
struct UFortFrontEndContext_GetAttributeIcon_Params
{
	struct FFortAttributeInfo                          InAttribute;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       InRequiredTags;                                            // (Parm, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                         ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetAttributeDisplayName
struct UFortFrontEndContext_GetAttributeDisplayName_Params
{
	struct FFortAttributeInfo                          InAttribute;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       InRequiredTags;                                            // (Parm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetAttributeDescription
struct UFortFrontEndContext_GetAttributeDescription_Params
{
	struct FFortAttributeInfo                          InAttribute;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       InRequiredTags;                                            // (Parm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetAllTheaterData
struct UFortFrontEndContext_GetAllTheaterData_Params
{
	TArray<struct FFortTheaterMapData>                 OutAllTheaterData;                                         // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetActiveTileMissionDetails
struct UFortFrontEndContext_GetActiveTileMissionDetails_Params
{
	struct FFortMissionDetails                         MissionDetails;                                            // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetActiveTile
struct UFortFrontEndContext_GetActiveTile_Params
{
	class AFortTheaterMapTile*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.GetAccountLevelUpRewards
struct UFortFrontEndContext_GetAccountLevelUpRewards_Params
{
	TArray<struct FFortItemQuantityPair>               Rewards;                                                   // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                AccountLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.ForceSetFeatureState
struct UFortFrontEndContext_ForceSetFeatureState_Params
{
	TEnumAsByte<FortniteUI_EFortFrontEndFeature>       Feature;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_EFortFrontEndFeatureState>  State;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.CreateKeepMenu
struct UFortFrontEndContext_CreateKeepMenu_Params
{
	class UNativeWidgetHost*                           InNativeWidgetHost;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHomeBaseBuilding*                           Building;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.ClearSelectedTheater
struct UFortFrontEndContext_ClearSelectedTheater_Params
{
};

// Function FortniteUI.FortFrontEndContext.ClearNativeWidget
struct UFortFrontEndContext_ClearNativeWidget_Params
{
	class UNativeWidgetHost*                           InNativeWidgetHost;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortFrontEndContext.BindToFeatureStateAndInitialize
struct UFortFrontEndContext_BindToFeatureStateAndInitialize_Params
{
	TEnumAsByte<FortniteUI_EFortFrontEndFeature>       Feature;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.UnregisterToReceiveNotifications
struct UFortGlobalUIContext_UnregisterToReceiveNotifications_Params
{
};

// Function FortniteUI.FortGlobalUIContext.UnregisterScriptedAction
struct UFortGlobalUIContext_UnregisterScriptedAction_Params
{
	class UClass*                                      ScriptedAction;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.TakeScreenshot
struct UFortGlobalUIContext_TakeScreenshot_Params
{
	struct FScriptDelegate                             Callback;                                                  // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.ShowBang
struct UFortGlobalUIContext_ShowBang_Params
{
	TEnumAsByte<FortniteGame_EFortBangType>            Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.ShouldCloseMenuOnEscape
struct UFortGlobalUIContext_ShouldCloseMenuOnEscape_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.SendUINavigationAnalytic
struct UFortGlobalUIContext_SendUINavigationAnalytic_Params
{
	struct FString                                     Destination;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUserInitiated;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.SendLeaveZoneAnalytic
struct UFortGlobalUIContext_SendLeaveZoneAnalytic_Params
{
};

// Function FortniteUI.FortGlobalUIContext.SendExperienceRatingAnalytic
struct UFortGlobalUIContext_SendExperienceRatingAnalytic_Params
{
	struct FString                                     RatingType;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StarCount;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameSessionID;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Comment;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.RemoveNotification
struct UFortGlobalUIContext_RemoveNotification_Params
{
	struct FFortDialogDescription                      NotificationDescription;                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.RegisterToReceiveNotifications
struct UFortGlobalUIContext_RegisterToReceiveNotifications_Params
{
	struct FScriptDelegate                             InOnNotifcationAvailable;                                  // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.RegisterScriptedActions
struct UFortGlobalUIContext_RegisterScriptedActions_Params
{
	TArray<class UClass*>                              ScriptedActions;                                           // (Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.RegisterScriptedAction
struct UFortGlobalUIContext_RegisterScriptedAction_Params
{
	class UClass*                                      ScriptedAction;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.QuitGame
struct UFortGlobalUIContext_QuitGame_Params
{
};

// Function FortniteUI.FortGlobalUIContext.QueryGameBackendVersion
struct UFortGlobalUIContext_QueryGameBackendVersion_Params
{
};

// Function FortniteUI.FortGlobalUIContext.ProcessNotificationResult
struct UFortGlobalUIContext_ProcessNotificationResult_Params
{
	TEnumAsByte<FortniteUI_EFortDialogResult>          InResult;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortDialogDescription                      NotificationDescription;                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// DelegateFunction FortniteUI.FortGlobalUIContext.OnQueryFortBackendVersionDelegate__DelegateSignature
struct UFortGlobalUIContext_OnQueryFortBackendVersionDelegate__DelegateSignature_Params
{
	struct FFortBackendVersion                         FortBackendVersion;                                        // (Parm, NativeAccessSpecifierPublic)
};

// DelegateFunction FortniteUI.FortGlobalUIContext.OnNetworkErrorDelegate__DelegateSignature
struct UFortGlobalUIContext_OnNetworkErrorDelegate__DelegateSignature_Params
{
	struct FText                                       NetworkErrorMessage;                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.Logout
struct UFortGlobalUIContext_Logout_Params
{
};

// Function FortniteUI.FortGlobalUIContext.IsUIVisible
struct UFortGlobalUIContext_IsUIVisible_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.IsInZone
struct UFortGlobalUIContext_IsInZone_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.IsInOutpostZone
struct UFortGlobalUIContext_IsInOutpostZone_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.IsHUDVisible
struct UFortGlobalUIContext_IsHUDVisible_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.IsBluGloEnabled
struct UFortGlobalUIContext_IsBluGloEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.HideBang
struct UFortGlobalUIContext_HideBang_Params
{
	TEnumAsByte<FortniteGame_EFortBangType>            Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.GetWatermark
struct UFortGlobalUIContext_GetWatermark_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.GetTeamPower
struct UFortGlobalUIContext_GetTeamPower_Params
{
	int                                                TeamPower;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PersonalPower;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.GetQuestManager
struct UFortGlobalUIContext_GetQuestManager_Params
{
	class UFortQuestManager*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.GetNextNotification
struct UFortGlobalUIContext_GetNextNotification_Params
{
	struct FFortDialogDescription                      NotifcationDescription;                                    // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.GetMessageManager
struct UFortGlobalUIContext_GetMessageManager_Params
{
	struct FName                                       ManagerName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCreatedNew;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UFortUIMessageManager*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.GetLastGameSummaryInfo
struct UFortGlobalUIContext_GetLastGameSummaryInfo_Params
{
	struct FGameSummaryInfo                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.GetKeyTextForAction
struct UFortGlobalUIContext_GetKeyTextForAction_Params
{
	struct FName                                       Action;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.GetKeyForAction
struct UFortGlobalUIContext_GetKeyForAction_Params
{
	struct FName                                       Action;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.GetGameBackendVersion
struct UFortGlobalUIContext_GetGameBackendVersion_Params
{
	struct FFortBackendVersion                         ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.GetFeatureState
struct UFortGlobalUIContext_GetFeatureState_Params
{
	TEnumAsByte<FortniteUI_EFortUIFeature>             Feature;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_EFortUIFeatureState>        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.GetBackendName
struct UFortGlobalUIContext_GetBackendName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.GetActiveKeybindSet
struct UFortGlobalUIContext_GetActiveKeybindSet_Params
{
	TEnumAsByte<FortniteGame_EFortInputPreset>         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.DisplayStateContent
struct UFortGlobalUIContext_DisplayStateContent_Params
{
	bool                                               bDisplay;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.ClearSelectionGroup
struct UFortGlobalUIContext_ClearSelectionGroup_Params
{
	struct FName                                       SelectionGroup;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.ClearLastGameSummaryInfo
struct UFortGlobalUIContext_ClearLastGameSummaryInfo_Params
{
};

// Function FortniteUI.FortGlobalUIContext.CheckNetworkError
struct UFortGlobalUIContext_CheckNetworkError_Params
{
};

// Function FortniteUI.FortGlobalUIContext.CheckFlag
struct UFortGlobalUIContext_CheckFlag_Params
{
	struct FString                                     FlagName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_EFlagStatus>                OutStatus;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGlobalUIContext.BindToFeatureStateAndInitialize
struct UFortGlobalUIContext_BindToFeatureStateAndInitialize_Params
{
	TEnumAsByte<FortniteUI_EFortUIFeature>             Feature;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGridPickerTile.SetData
struct UFortGridPickerTile_SetData_Params
{
	class UObject*                                     InData;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGridPickerTile.OnMouseLeave
struct UFortGridPickerTile_OnMouseLeave_Params
{
};

// Function FortniteUI.FortGridPickerTile.OnMouseEnter
struct UFortGridPickerTile_OnMouseEnter_Params
{
};

// Function FortniteUI.FortGridPickerTile.OnClicked
struct UFortGridPickerTile_OnClicked_Params
{
};

// Function FortniteUI.FortGridPickerTile.ForwardClicked
struct UFortGridPickerTile_ForwardClicked_Params
{
};

// Function FortniteUI.FortGridWidgetBase.SetTileWidth
struct UFortGridWidgetBase_SetTileWidth_Params
{
	float                                              Width;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGridWidgetBase.SetTilesDown
struct UFortGridWidgetBase_SetTilesDown_Params
{
	int                                                Down;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGridWidgetBase.SetTilesAcross
struct UFortGridWidgetBase_SetTilesAcross_Params
{
	int                                                Across;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGridWidgetBase.SetTilePadding
struct UFortGridWidgetBase_SetTilePadding_Params
{
	struct FMargin                                     Padding;                                                   // (Parm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGridWidgetBase.SetTileHeight
struct UFortGridWidgetBase_SetTileHeight_Params
{
	float                                              Height;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGridWidgetBase.SetPeekOverflowTilePercentage
struct UFortGridWidgetBase_SetPeekOverflowTilePercentage_Params
{
	float                                              Percent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGridWidgetBase.SetDataProvider
struct UFortGridWidgetBase_SetDataProvider_Params
{
	TArray<class UObject*>                             Data;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGridWidgetBase.SetClearWidgetType
struct UFortGridWidgetBase_SetClearWidgetType_Params
{
	class UClass*                                      InClearWidgetType;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGridPickerButton.SetIsOpen
struct UFortGridPickerButton_SetIsOpen_Params
{
	bool                                               ShouldBeOpen;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// DelegateFunction FortniteUI.FortGridPickerButton.OnIsGridPickerOpenChanged__DelegateSignature
struct UFortGridPickerButton_OnIsGridPickerOpenChanged__DelegateSignature_Params
{
	bool                                               IsOpen;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortGridPickerButton.OnButtonClicked
struct UFortGridPickerButton_OnButtonClicked_Params
{
};

// DelegateFunction FortniteUI.FortGridPickerButton.CreateGridWidget__DelegateSignature
struct UFortGridPickerButton_CreateGridWidget__DelegateSignature_Params
{
	class UFortGridPickerGrid*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.SetShowingStatsScreen
struct UFortHeroManagementContext_SetShowingStatsScreen_Params
{
	bool                                               bIsShowingStats;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.SetHeroNameFromID
struct UFortHeroManagementContext_SetHeroNameFromID_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.SetHeroName
struct UFortHeroManagementContext_SetHeroName_Params
{
	struct FString                                     NewName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.SetCurrentHero
struct UFortHeroManagementContext_SetCurrentHero_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.RequestSetTraitDepthFromID
struct UFortHeroManagementContext_RequestSetTraitDepthFromID_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Depth;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.RequestSetTraitDepth
struct UFortHeroManagementContext_RequestSetTraitDepth_Params
{
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Depth;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.RequestDeleteHero
struct UFortHeroManagementContext_RequestDeleteHero_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.RequestCreateHero
struct UFortHeroManagementContext_RequestCreateHero_Params
{
	class UFortHeroType*                               HeroType;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortCustomGender>        Gender;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.RedeemPrevAbilityFromID
struct UFortHeroManagementContext_RedeemPrevAbilityFromID_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.RedeemPrevAbility
struct UFortHeroManagementContext_RedeemPrevAbility_Params
{
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.RedeemAllAbilitiesFromID
struct UFortHeroManagementContext_RedeemAllAbilitiesFromID_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.RedeemAllAbilities
struct UFortHeroManagementContext_RedeemAllAbilities_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.PurchaseNextAbilityFromID
struct UFortHeroManagementContext_PurchaseNextAbilityFromID_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.PurchaseNextAbility
struct UFortHeroManagementContext_PurchaseNextAbility_Params
{
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.NumHeroSlots
struct UFortHeroManagementContext_NumHeroSlots_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.IsSkillTreeUnlockedFromID
struct UFortHeroManagementContext_IsSkillTreeUnlockedFromID_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.IsSkillTreeUnlocked
struct UFortHeroManagementContext_IsSkillTreeUnlocked_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.IsShowingStatsScreen
struct UFortHeroManagementContext_IsShowingStatsScreen_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.IsDeleteHeroEnabled
struct UFortHeroManagementContext_IsDeleteHeroEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.IsCreateHeroEnabled
struct UFortHeroManagementContext_IsCreateHeroEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetTraitFromID
struct UFortHeroManagementContext_GetTraitFromID_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortTrait*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetTraitDepthFromID
struct UFortHeroManagementContext_GetTraitDepthFromID_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetTraitDepth
struct UFortHeroManagementContext_GetTraitDepth_Params
{
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Depth;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetTrait
struct UFortHeroManagementContext_GetTrait_Params
{
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortTrait*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetNumUnspentAbilityPointsFromID
struct UFortHeroManagementContext_GetNumUnspentAbilityPointsFromID_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetNumUnspentAbilityPoints
struct UFortHeroManagementContext_GetNumUnspentAbilityPoints_Params
{
	int                                                NumAbilityPoints;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetNumHeroTraits
struct UFortHeroManagementContext_GetNumHeroTraits_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetNextAbilityCostFromID
struct UFortHeroManagementContext_GetNextAbilityCostFromID_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetNextAbilityCost
struct UFortHeroManagementContext_GetNextAbilityCost_Params
{
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetMaxNameLength
struct UFortHeroManagementContext_GetMaxNameLength_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetHeroDataFromID
struct UFortHeroManagementContext_GetHeroDataFromID_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHeroUIData                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetHeroData
struct UFortHeroManagementContext_GetHeroData_Params
{
	struct FHeroUIData                                 HeroData;                                                  // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetEmptyHeroSlots
struct UFortHeroManagementContext_GetEmptyHeroSlots_Params
{
	TArray<struct FEmptyHeroSlot>                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetDisplayStats
struct UFortHeroManagementContext_GetDisplayStats_Params
{
	TArray<struct FFortGameplayEffectModifierDescription> Stats;                                                     // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetCurrentHeroID
struct UFortHeroManagementContext_GetCurrentHeroID_Params
{
	struct FString                                     HeroId;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetCoreAbilitiesFromID
struct UFortHeroManagementContext_GetCoreAbilitiesFromID_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortAbilityKit*>                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetCoreAbilities
struct UFortHeroManagementContext_GetCoreAbilities_Params
{
	TArray<class UFortAbilityKit*>                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetAttributeValuesArrayFromID
struct UFortHeroManagementContext_GetAttributeValuesArrayFromID_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayAttribute>                  Attributes;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      Values;                                                    // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetAttributeValuesArray
struct UFortHeroManagementContext_GetAttributeValuesArray_Params
{
	TArray<struct FGameplayAttribute>                  Attributes;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      Values;                                                    // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetAttributeValueFromID
struct UFortHeroManagementContext_GetAttributeValueFromID_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          Attribute;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetAttributeValue
struct UFortHeroManagementContext_GetAttributeValue_Params
{
	struct FGameplayAttribute                          Attribute;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetAllHeroIDs
struct UFortHeroManagementContext_GetAllHeroIDs_Params
{
	TArray<struct FString>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetAbilityCostFromID
struct UFortHeroManagementContext_GetAbilityCostFromID_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TraitDepth;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GetAbilityCost
struct UFortHeroManagementContext_GetAbilityCost_Params
{
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TraitDepth;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.GenerateRandomHeroName
struct UFortHeroManagementContext_GenerateRandomHeroName_Params
{
	class UDataTable*                                  NameTable;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.CheckHeroNameValidity
struct UFortHeroManagementContext_CheckHeroNameValidity_Params
{
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_ENameStatus>                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.CanRedeemAllAbilities
struct UFortHeroManagementContext_CanRedeemAllAbilities_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.CanModifyTraitDepthFromID
struct UFortHeroManagementContext_CanModifyTraitDepthFromID_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.CanModifyTraitDepth
struct UFortHeroManagementContext_CanModifyTraitDepth_Params
{
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.CanAffordNextAbilityFromID
struct UFortHeroManagementContext_CanAffordNextAbilityFromID_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.CanAffordNextAbility
struct UFortHeroManagementContext_CanAffordNextAbility_Params
{
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.CanAffordAbilityFromID
struct UFortHeroManagementContext_CanAffordAbilityFromID_Params
{
	struct FString                                     HeroId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TraitDepth;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHeroManagementContext.CanAffordAbility
struct UFortHeroManagementContext_CanAffordAbility_Params
{
	int                                                TraitIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TraitDepth;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHUDContext.SetIndicatorsAllowed
struct UFortHUDContext_SetIndicatorsAllowed_Params
{
	bool                                               bIndicatorsAllowed;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHUDContext.IsInCursorMode
struct UFortHUDContext_IsInCursorMode_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHUDContext.HandleLocalPawnDied
struct UFortHUDContext_HandleLocalPawnDied_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHUDContext.GetTeamCornerstone
struct UFortHUDContext_GetTeamCornerstone_Params
{
	TEnumAsByte<FortniteGame_EFortTeam>                Team;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPvPBaseCornerstone*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHUDContext.GetScoreDisplayFactor
struct UFortHUDContext_GetScoreDisplayFactor_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHUDContext.GetPlayerStateZone
struct UFortHUDContext_GetPlayerStateZone_Params
{
	class AFortPlayerStateZone*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHUDContext.GetPlayerAbilitySystemComponent
struct UFortHUDContext_GetPlayerAbilitySystemComponent_Params
{
	class UFortAbilitySystemComponent*                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHUDContext.GetKillerVisualInfoFromDeathReport
struct UFortHUDContext_GetKillerVisualInfoFromDeathReport_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFortKillerVisualInfo                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHUDContext.GetGameStateZone
struct UFortHUDContext_GetGameStateZone_Params
{
	class AFortGameStateZone*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHUDContext.GetFocusedBuildingInfo
struct UFortHUDContext_GetFocusedBuildingInfo_Params
{
	struct FFortFocusedBuildingInfo                    OutBuildingInfo;                                           // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHUDContext.GetCurrentHero
struct UFortHUDContext_GetCurrentHero_Params
{
	class UFortHero*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHUDContext.ForwardOnWeaponEquipped
struct UFortHUDContext_ForwardOnWeaponEquipped_Params
{
	class AFortWeapon*                                 NewWeapon;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortWeapon*                                 PrevWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHUDContext.ForwardOnAbilityDecisionWindowStackUpdated
struct UFortHUDContext_ForwardOnAbilityDecisionWindowStackUpdated_Params
{
};

// Function FortniteUI.FortHUDContext.EnterCursorMode
struct UFortHUDContext_EnterCursorMode_Params
{
	struct FName                                       ActionName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                                 CursorModeWidget;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortHUDContext.EnterCameraMode
struct UFortHUDContext_EnterCameraMode_Params
{
};

// Function FortniteUI.FortHUDContext.AreIndicatorsEnabled
struct UFortHUDContext_AreIndicatorsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.WillQuickBarAcceptItem
struct UFortInventoryContext_WillQuickBarAcceptItem_Params
{
	class UFortItem*                                   Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortQuickBars>           InQuickBar;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.UnlockSchematic
struct UFortInventoryContext_UnlockSchematic_Params
{
	class UFortSchematicItemDefinition*                SchematicDefinition;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.UnlockAllSchematics
struct UFortInventoryContext_UnlockAllSchematics_Params
{
};

// Function FortniteUI.FortInventoryContext.SetSchematicPinned
struct UFortInventoryContext_SetSchematicPinned_Params
{
	class UFortSchematicItem*                          Schematic;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.RemoveItemFromQuickBar
struct UFortInventoryContext_RemoveItemFromQuickBar_Params
{
	class UFortItem*                                   Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.LockAllSchematics
struct UFortInventoryContext_LockAllSchematics_Params
{
};

// Function FortniteUI.FortInventoryContext.IsSchematicPinned
struct UFortInventoryContext_IsSchematicPinned_Params
{
	class UFortSchematicItem*                          Schematic;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.GetWorldItemList
struct UFortInventoryContext_GetWorldItemList_Params
{
	TArray<class UFortWorldItem*>                      Items;                                                     // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFortItemListFilter                         FilterSettings;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.GetSchematicItemList
struct UFortInventoryContext_GetSchematicItemList_Params
{
	TArray<class UFortSchematicItem*>                  Items;                                                     // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFortItemListFilter                         FilterSettings;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.GetResourceItemDefinition
struct UFortInventoryContext_GetResourceItemDefinition_Params
{
	TEnumAsByte<FortniteGame_EFortResourceType>        ResourceType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortResourceItemDefinition*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.GetResourceIcon
struct UFortInventoryContext_GetResourceIcon_Params
{
	TEnumAsByte<FortniteGame_EFortResourceType>        ResourceType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.GetResourceCount
struct UFortInventoryContext_GetResourceCount_Params
{
	TEnumAsByte<FortniteGame_EFortResourceType>        ResourceType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.GetQuickBarSlottedItem
struct UFortInventoryContext_GetQuickBarSlottedItem_Params
{
	TEnumAsByte<FortniteGame_EFortQuickBars>           InQuickBar;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.GetQuickbarFocus
struct UFortInventoryContext_GetQuickbarFocus_Params
{
	TEnumAsByte<FortniteGame_EFortQuickBars>           OutQuickBar;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutSlot;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.GetPinnedSchematicList
struct UFortInventoryContext_GetPinnedSchematicList_Params
{
	TArray<class UFortSchematicItem*>                  PinnedItems;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.GetNumInInventory
struct UFortInventoryContext_GetNumInInventory_Params
{
	class UFortWorldItemDefinition*                    ItemDefinition;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeReserved;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.GetEquippedWeapon
struct UFortInventoryContext_GetEquippedWeapon_Params
{
	class AFortWeapon*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.GetCurrentResourceItemDefinition
struct UFortInventoryContext_GetCurrentResourceItemDefinition_Params
{
	class UFortResourceItemDefinition*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.GetCurrentResourceIcon
struct UFortInventoryContext_GetCurrentResourceIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.GetCurrentResourceCount
struct UFortInventoryContext_GetCurrentResourceCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.GetCurrentAmmoItemDefinition
struct UFortInventoryContext_GetCurrentAmmoItemDefinition_Params
{
	class UFortWorldItemDefinition*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.GetCurrentAmmoIcon
struct UFortInventoryContext_GetCurrentAmmoIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.GetBackpackItemCounts
struct UFortInventoryContext_GetBackpackItemCounts_Params
{
	int                                                ItemsCount;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxItemsCount;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OverflowItemsCount;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.DropItemOnQuickBar
struct UFortInventoryContext_DropItemOnQuickBar_Params
{
	class UFortItem*                                   Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortQuickBars>           TargetQuickbar;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TargetSlot;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.DropItemOnPlayerOrWorld
struct UFortInventoryContext_DropItemOnPlayerOrWorld_Params
{
	class UFortWorldItem*                              ItemBeingDropped;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerState*                            InDestinationPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     OwnerWidget;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPointerEvent                               PointerEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.DoesItemMatchFilter
struct UFortInventoryContext_DoesItemMatchFilter_Params
{
	class UFortItem*                                   Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemListFilter                         FilterSettings;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.DisassembleItem
struct UFortInventoryContext_DisassembleItem_Params
{
	class UFortWorldItem*                              Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.CraftSchematic
struct UFortInventoryContext_CraftSchematic_Params
{
	class UFortSchematicItem*                          SchematicItem;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortCraftFailCause>      FailCause;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.CanPinSchematic
struct UFortInventoryContext_CanPinSchematic_Params
{
	class UFortSchematicItem*                          Schematic;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.CanDisassembleItem
struct UFortInventoryContext_CanDisassembleItem_Params
{
	class UFortWorldItem*                              Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.CanCraftSchematic
struct UFortInventoryContext_CanCraftSchematic_Params
{
	class UFortSchematicItem*                          SchematicItem;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortCraftFailCause>      FailCause;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortInventoryContext.ActivateItem
struct UFortInventoryContext_ActivateItem_Params
{
	class UFortItem*                                   Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortLegacySlateBridgeWidget.UpdateSlateWidget
struct UFortLegacySlateBridgeWidget_UpdateSlateWidget_Params
{
	TEnumAsByte<FortniteUI_EFortLegacySlateWidget>     SlateWidgetType;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortLegacySlateBridgeWidget.SetOnCloseHandler
struct UFortLegacySlateBridgeWidget_SetOnCloseHandler_Params
{
	struct FScriptDelegate                             OnCloseHandler;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortListView.SetItemSelected
struct UFortListView_SetItemSelected_Params
{
	class UObject*                                     Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortListView.SetIndexSelected
struct UFortListView_SetIndexSelected_Params
{
	int                                                INDEX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortListView.SetDataProvider
struct UFortListView_SetDataProvider_Params
{
	TArray<class UObject*>                             NewData;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortListView.RemoveItemAt
struct UFortListView_RemoveItemAt_Params
{
	int                                                INDEX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortListView.GetItemAt
struct UFortListView_GetItemAt_Params
{
	int                                                INDEX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortListView.GetIndexForItem
struct UFortListView_GetIndexForItem_Params
{
	class UObject*                                     Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortListView.ClearSelection
struct UFortListView_ClearSelection_Params
{
};

// Function FortniteUI.FortListView.Clear
struct UFortListView_Clear_Params
{
};

// Function FortniteUI.FortListView.AddItem
struct UFortListView_AddItem_Params
{
	class UObject*                                     NewItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortSocialListView.SetList
struct UFortSocialListView_SetList_Params
{
	TArray<class UFortSocialItem*>                     InList;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.OpenWebPayment
struct UFortStoreContext_OpenWebPayment_Params
{
	struct FString                                     AttemptedMTXOfferId;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.MakePurchase
struct UFortStoreContext_MakePurchase_Params
{
	struct FCardPackOffer                              Offer;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_ECardPackPurchaseError>     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.IsNewStoreEnabled
struct UFortStoreContext_IsNewStoreEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.IsCatalogAvailable
struct UFortStoreContext_IsCatalogAvailable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.GetTimeUntilMarketplaceRefresh
struct UFortStoreContext_GetTimeUntilMarketplaceRefresh_Params
{
	struct FTimespan                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.GetTimeUntilDailyLimitReset
struct UFortStoreContext_GetTimeUntilDailyLimitReset_Params
{
	struct FTimespan                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.GetStoreState
struct UFortStoreContext_GetStoreState_Params
{
	TEnumAsByte<FortniteUI_EFortStoreState>            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.GetRarityColor
struct UFortStoreContext_GetRarityColor_Params
{
	TEnumAsByte<FortniteGame_EFortRarity>              Rarity;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.GetPreviousState
struct UFortStoreContext_GetPreviousState_Params
{
	TEnumAsByte<FortniteUI_EFortStoreState>            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.GetNumUnopenedCardPacksRemaining
struct UFortStoreContext_GetNumUnopenedCardPacksRemaining_Params
{
	class UFortCardPackItemDefinition*                 PackType;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.GetCard
struct UFortStoreContext_GetCard_Params
{
	int                                                CardIdx;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCard                                       ResultOut;                                                 // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.GetAccountItems
struct UFortStoreContext_GetAccountItems_Params
{
	TArray<class UFortAccountItemDefinition*>          AccountItemDefinitions;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UFortAccountItem*>                    AccountItems;                                              // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.FreshenCache
struct UFortStoreContext_FreshenCache_Params
{
};

// Function FortniteUI.FortStoreContext.FireInteractionAnalyticsEvent
struct UFortStoreContext_FireInteractionAnalyticsEvent_Params
{
	struct FString                                     Interaction;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Details;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.ExitWebPayment
struct UFortStoreContext_ExitWebPayment_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.ExitSummary
struct UFortStoreContext_ExitSummary_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.ExitCurrencyStore
struct UFortStoreContext_ExitCurrencyStore_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.ExitCardPackStore
struct UFortStoreContext_ExitCardPackStore_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.ErrorOccurred
struct UFortStoreContext_ErrorOccurred_Params
{
	struct FString                                     ErrorAnalytics;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.EnterCurrencyStore
struct UFortStoreContext_EnterCurrencyStore_Params
{
	struct FString                                     AttemptedPurchaseCardPackId;                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.EnterCardPackStore
struct UFortStoreContext_EnterCardPackStore_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.DismissError
struct UFortStoreContext_DismissError_Params
{
};

// Function FortniteUI.FortStoreContext.CardPackOpeningComplete
struct UFortStoreContext_CardPackOpeningComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.CardPackDestroyComplete
struct UFortStoreContext_CardPackDestroyComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.CardFrontRevealComplete
struct UFortStoreContext_CardFrontRevealComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.CardFlipComplete
struct UFortStoreContext_CardFlipComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.CardExitComplete
struct UFortStoreContext_CardExitComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.CardEntryComplete
struct UFortStoreContext_CardEntryComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.CardBackRevealComplete
struct UFortStoreContext_CardBackRevealComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortStoreContext.CardAddedToSummaryComplete
struct UFortStoreContext_CardAddedToSummaryComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIMessageManager.HandleMessageRemoved
struct UFortUIMessageManager_HandleMessageRemoved_Params
{
	class UFortUIMessageItemWidget*                    MessageItem;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIMessageManager.HandleMessageDisplayed
struct UFortUIMessageManager_HandleMessageDisplayed_Params
{
	class UFortUIMessageItemWidget*                    MessageItem;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIMessageManager.GetNumDisplayedItems
struct UFortUIMessageManager_GetNumDisplayedItems_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIMessageManager.GetNextMessageInQueue
struct UFortUIMessageManager_GetNextMessageInQueue_Params
{
	class UFortUIMessageItemWidget*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIMessageManager.AddMessageItem
struct UFortUIMessageManager_AddMessageItem_Params
{
	class UFortUIMessageItemWidget*                    MessageItem;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIStateTrigger.IsLoggedIn
struct UFortUIStateTrigger_IsLoggedIn_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIStateTrigger.EvalBP
struct UFortUIStateTrigger_EvalBP_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortActionHandlerPanel.SetOnPanelDeactivated
struct UFortActionHandlerPanel_SetOnPanelDeactivated_Params
{
	struct FScriptDelegate                             OnDeactivatedHandler;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortActionHandlerPanel.SetOnPanelActivated
struct UFortActionHandlerPanel_SetOnPanelActivated_Params
{
	struct FScriptDelegate                             OnActivatedHandler;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortActionHandlerPanel.RemoveOnPanelDeactivated
struct UFortActionHandlerPanel_RemoveOnPanelDeactivated_Params
{
	class UObject*                                     BoundObject;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortActionHandlerPanel.RemoveOnPanelActivated
struct UFortActionHandlerPanel_RemoveOnPanelActivated_Params
{
	class UObject*                                     BoundObject;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortActionHandlerPanel.OnHandleAction
struct UFortActionHandlerPanel_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                    // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               bPassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortActionHandlerPanel.DeactivateActionHandler
struct UFortActionHandlerPanel_DeactivateActionHandler_Params
{
};

// Function FortniteUI.FortActionHandlerPanel.ActivateActionHandler
struct UFortActionHandlerPanel_ActivateActionHandler_Params
{
};

// Function FortniteUI.FortConfirmationWindow.ShowConfirmation
struct UFortConfirmationWindow_ShowConfirmation_Params
{
	struct FFortDialogDescription                      Description;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortConfirmationWindow.ProcessResult
struct UFortConfirmationWindow_ProcessResult_Params
{
	TEnumAsByte<FortniteUI_EFortDialogResult>          DialogResult;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortConfirmationWindow.OnShow
struct UFortConfirmationWindow_OnShow_Params
{
};

// Function FortniteUI.FortConfirmationWindow.OnKill
struct UFortConfirmationWindow_OnKill_Params
{
};

// Function FortniteUI.FortConfirmationWindow.KillConfirmation
struct UFortConfirmationWindow_KillConfirmation_Params
{
};

// Function FortniteUI.FortErrorDialog.ResetErrorInfo
struct UFortErrorDialog_ResetErrorInfo_Params
{
};

// Function FortniteUI.FortErrorDialog.OnRebuildDialog
struct UFortErrorDialog_OnRebuildDialog_Params
{
	int                                                NewIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortErrorDialog.DisplaySimpleError
struct UFortErrorDialog_DisplaySimpleError_Params
{
	struct FText                                       ErrorMessage;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortErrorDialog.DisplayError
struct UFortErrorDialog_DisplayError_Params
{
	struct FFortErrorInfo                              ErrorInfo;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIStateWidget.OnExitState
struct UFortUIStateWidget_OnExitState_Params
{
	TEnumAsByte<FortniteUI_EFortUIState>               NextUIState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIStateWidget.OnEnterState
struct UFortUIStateWidget_OnEnterState_Params
{
	TEnumAsByte<FortniteUI_EFortUIState>               PreviousUIState;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortVerticalRibbon.PushContent
struct UFortVerticalRibbon_PushContent_Params
{
	class UWidget*                                     NewContent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortVerticalRibbon.PopContent
struct UFortVerticalRibbon_PopContent_Params
{
};

// Function FortniteUI.FortVerticalRibbon.GetTop
struct UFortVerticalRibbon_GetTop_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortVerticalRibbon._BPOnStackDepthChanged
struct UFortVerticalRibbon__BPOnStackDepthChanged_Params
{
	int                                                NewDepth;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortActorIndicatorWidget.OnIndicatedActorSet
struct UFortActorIndicatorWidget_OnIndicatedActorSet_Params
{
};

// Function FortniteUI.FortItemWidget.SetOnGetItemToCompareDelegate
struct UFortItemWidget_SetOnGetItemToCompareDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                                // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.SetItem
struct UFortItemWidget_SetItem_Params
{
	class UFortItem*                                   InItem;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QuantityOverride;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction FortniteUI.FortItemWidget.OnGetItemToCompare__DelegateSignature
struct UFortItemWidget_OnGetItemToCompare__DelegateSignature_Params
{
	class UFortItem*                                   ItemToCompare;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.OnFortItemUpdated
struct UFortItemWidget_OnFortItemUpdated_Params
{
	bool                                               bItemChanged;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAmmoChanged;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIngredientsChanged;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.OnFortItemInvalidated
struct UFortItemWidget_OnFortItemInvalidated_Params
{
};

// Function FortniteUI.FortItemWidget.OnFortItemDestroyed
struct UFortItemWidget_OnFortItemDestroyed_Params
{
};

// Function FortniteUI.FortItemWidget.IsSlotted
struct UFortItemWidget_IsSlotted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.IsSchematic
struct UFortItemWidget_IsSchematic_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.IsItemValid
struct UFortItemWidget_IsItemValid_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.IsInBackpackOverflow
struct UFortItemWidget_IsInBackpackOverflow_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.IsEquipped
struct UFortItemWidget_IsEquipped_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.HasTertiaryCategory
struct UFortItemWidget_HasTertiaryCategory_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.HasSecondaryCategory
struct UFortItemWidget_HasSecondaryCategory_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.HasLevel
struct UFortItemWidget_HasLevel_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.HasDurability
struct UFortItemWidget_HasDurability_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.GetType
struct UFortItemWidget_GetType_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.GetTertiaryCategoryTexture
struct UFortItemWidget_GetTertiaryCategoryTexture_Params
{
	TEnumAsByte<FortniteGame_EFortBrushSize>           InBrushSize;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.GetStackCount
struct UFortItemWidget_GetStackCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.GetSecondaryCategoryTexture
struct UFortItemWidget_GetSecondaryCategoryTexture_Params
{
	TEnumAsByte<FortniteGame_EFortBrushSize>           InBrushSize;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.GetRarity
struct UFortItemWidget_GetRarity_Params
{
	TEnumAsByte<FortniteGame_EFortRarity>              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.GetPulse
struct UFortItemWidget_GetPulse_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.GetLevel
struct UFortItemWidget_GetLevel_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.GetItemToCompare
struct UFortItemWidget_GetItemToCompare_Params
{
	class UFortItem*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.GetItem
struct UFortItemWidget_GetItem_Params
{
	class UFortItem*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.GetIconTexture
struct UFortItemWidget_GetIconTexture_Params
{
	TEnumAsByte<FortniteGame_EFortBrushSize>           InBrushSize;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.GetIconScale
struct UFortItemWidget_GetIconScale_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.GetDurability
struct UFortItemWidget_GetDurability_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.GetDisplayName
struct UFortItemWidget_GetDisplayName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.GetDescription
struct UFortItemWidget_GetDescription_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.GetAmmoCount
struct UFortItemWidget_GetAmmoCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.BPOnItemSet
struct UFortItemWidget_BPOnItemSet_Params
{
	class UFortItem*                                   NewItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemWidget.BPOnItemChanged
struct UFortItemWidget_BPOnItemChanged_Params
{
};

// Function FortniteUI.FortBluGloCounter.OnBluGloQuantityChanged
struct UFortBluGloCounter_OnBluGloQuantityChanged_Params
{
	int                                                Quantity;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortButton.SetText
struct UFortButton_SetText_Params
{
	struct FText                                       InText;                                                    // (Parm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortButton.SetIndex
struct UFortButton_SetIndex_Params
{
	int                                                InIndex;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortButton.SetDisabled
struct UFortButton_SetDisabled_Params
{
	bool                                               InDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortButton.SetCurrentState
struct UFortButton_SetCurrentState_Params
{
	TEnumAsByte<FortniteUI_EFortButtonState>           NewState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortButton.GetText
struct UFortButton_GetText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortButton.GetPendingState
struct UFortButton_GetPendingState_Params
{
	TEnumAsByte<FortniteUI_EFortButtonState>           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortButton.GetIndex
struct UFortButton_GetIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortButton.GetDisabled
struct UFortButton_GetDisabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortButton.GetCurrentState
struct UFortButton_GetCurrentState_Params
{
	TEnumAsByte<FortniteUI_EFortButtonState>           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortTabButton.SetSelection
struct UFortTabButton_SetSelection_Params
{
	bool                                               InSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortTabButton.IsSelected
struct UFortTabButton_IsSelected_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortTabButton.ClearSelection
struct UFortTabButton_ClearSelection_Params
{
};

// Function FortniteUI.FortTabButton._BPOnSelectedChanged
struct UFortTabButton__BPOnSelectedChanged_Params
{
};

// Function FortniteUI.FortCapturePointWidget.OnCapturePointDataChanged
struct UFortCapturePointWidget_OnCapturePointDataChanged_Params
{
	bool                                               bActivated;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bLocked;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              CapturePercentage;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_ECaptureState>            CaptureState;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortTeam>                ControllingTeam;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortChatContainer.SetNativeWidgetHost
struct UFortChatContainer_SetNativeWidgetHost_Params
{
	class UNativeWidgetHost*                           InNativeWidgetHost;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortChatContainer.AttachChatWindowToNativeWidget
struct UFortChatContainer_AttachChatWindowToNativeWidget_Params
{
};

// Function FortniteUI.FortItemCollectorWidget.OnItemCollectorValuesChanged
struct UFortItemCollectorWidget_OnItemCollectorValuesChanged_Params
{
	TArray<int>                                        DepositAmounts;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int>                                        DepositGoals;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemCollectorWidget.OnItemCollectorStateChanged
struct UFortItemCollectorWidget_OnItemCollectorStateChanged_Params
{
	TEnumAsByte<FortniteGame_EFortItemCollectorState>  ItemCollectorState;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortItemCollectorWidget.OnItemCollectorChanged
struct UFortItemCollectorWidget_OnItemCollectorChanged_Params
{
	class ABuildingItemCollectorActor*                 OutItemCollector;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortListItem.ToggleExpansion
struct UFortListItem_ToggleExpansion_Params
{
};

// Function FortniteUI.FortListItem.SetSelected
struct UFortListItem_SetSelected_Params
{
	bool                                               bSelected;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortListItem.SetIndexInList
struct UFortListItem_SetIndexInList_Params
{
	int                                                InIndexInList;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortListItem.SetData
struct UFortListItem_SetData_Params
{
	class UObject*                                     InData;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortListItem.Private_OnExpanderArrowShiftClicked
struct UFortListItem_Private_OnExpanderArrowShiftClicked_Params
{
};

// Function FortniteUI.FortListItem.IsItemExpanded
struct UFortListItem_IsItemExpanded_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortListItem.GetSelectionMode
struct UFortListItem_GetSelectionMode_Params
{
	TEnumAsByte<Slate_ESelectionMode>                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortListItem.GetIndentLevel
struct UFortListItem_GetIndentLevel_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortListItem.DoesItemHaveChildren
struct UFortListItem_DoesItemHaveChildren_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortLoginRewardItem.SetUnclaimedItem
struct UFortLoginRewardItem_SetUnclaimedItem_Params
{
	bool                                               bInUnclaimedItem;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortLoginRewardItem.SetPlayClaimAnimation
struct UFortLoginRewardItem_SetPlayClaimAnimation_Params
{
	bool                                               bInPlayClaimAnimation;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortLoginRewardItem.SetLoginRewardDay
struct UFortLoginRewardItem_SetLoginRewardDay_Params
{
	int                                                InLoginRewardDay;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortLoginRewardItem.SetHighValueItem
struct UFortLoginRewardItem_SetHighValueItem_Params
{
	bool                                               bInHighValueItem;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortLoginRewardItem.SetFortItem
struct UFortLoginRewardItem_SetFortItem_Params
{
	class UFortItem*                                   InFortItem;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortLoginRewardItem.CreateItemTooltip
struct UFortLoginRewardItem_CreateItemTooltip_Params
{
};

// Function FortniteUI.FortLoginRewards.SetGridPanel
struct UFortLoginRewards_SetGridPanel_Params
{
	class UUniformGridPanel*                           InGridPanel;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortLoginRewards.HandlePageRight
struct UFortLoginRewards_HandlePageRight_Params
{
};

// Function FortniteUI.FortLoginRewards.HandlePageLeft
struct UFortLoginRewards_HandlePageLeft_Params
{
};

// Function FortniteUI.FortLoginRewards.GetCurrentPage
struct UFortLoginRewards_GetCurrentPage_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortLoginRewards.GetCurrentLoginDays
struct UFortLoginRewards_GetCurrentLoginDays_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortLoginRewards.EnablePaging
struct UFortLoginRewards_EnablePaging_Params
{
	TEnumAsByte<FortniteUI_EPageDirection>             Direction;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortLoginRewards.DisablePaging
struct UFortLoginRewards_DisablePaging_Params
{
	TEnumAsByte<FortniteUI_EPageDirection>             Direction;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortLoginRewards.CreateLoginRewardWidget
struct UFortLoginRewards_CreateLoginRewardWidget_Params
{
	class UFortLoginRewardItem*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortLoginWindow.ShouldShowLoginButton
struct UFortLoginWindow_ShouldShowLoginButton_Params
{
	struct FString                                     InEmail;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InPassword;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortLoginWindow.OnLoginStatusChanged
struct UFortLoginWindow_OnLoginStatusChanged_Params
{
	TEnumAsByte<FortniteUI_EUILoginStatus>             NewStatus;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       InMessage;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortLoginWindow.Login
struct UFortLoginWindow_Login_Params
{
	struct FString                                     InEmail;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InPassword;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemember;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortLoginWindow.IsRememberMeChecked
struct UFortLoginWindow_IsRememberMeChecked_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortLoginWindow.GetLoginStatusText
struct UFortLoginWindow_GetLoginStatusText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortLoginWindow.GetDefaultEmail
struct UFortLoginWindow_GetDefaultEmail_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortMovieWidget.SetMediaPlayer
struct UFortMovieWidget_SetMediaPlayer_Params
{
	class UMediaPlayer*                                NewMediaPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortMovieWidget.RequestStopMovie
struct UFortMovieWidget_RequestStopMovie_Params
{
};

// Function FortniteUI.FortMovieWidget.RequestPlayMovie
struct UFortMovieWidget_RequestPlayMovie_Params
{
};

// Function FortniteUI.FortMovieWidget.GetMediaPlayer
struct UFortMovieWidget_GetMediaPlayer_Params
{
	class UMediaPlayer*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortSocialItemWidget.SetSocialItem
struct UFortSocialItemWidget_SetSocialItem_Params
{
	class UFortSocialItem*                             InSocialItem;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortTutorialOverlay.SetupNativeWidgets
struct UFortTutorialOverlay_SetupNativeWidgets_Params
{
	class UNamedSlot*                                  NativeSlot;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortTutorialOverlay.SetTutorialNotificationActive
struct UFortTutorialOverlay_SetTutorialNotificationActive_Params
{
	bool                                               bActive;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortTutorialOverlay.OpenBannerMenu
struct UFortTutorialOverlay_OpenBannerMenu_Params
{
};

// Function FortniteUI.FortTutorialScreen.PlayerFinished
struct UFortTutorialScreen_PlayerFinished_Params
{
};

// Function FortniteUI.FortTutorialScreen.OnShowTutorialScreen
struct UFortTutorialScreen_OnShowTutorialScreen_Params
{
	class UTexture2D*                                  Image;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortTutorialScreen.OnHideTutorialScreen
struct UFortTutorialScreen_OnHideTutorialScreen_Params
{
};

// Function FortniteUI.FortUIManagerWidget.UpdateStateWidgetContent
struct UFortUIManagerWidget_UpdateStateWidgetContent_Params
{
	class UFortUIStateWidget*                          StateWidget;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIManagerWidget.UnregisterStateTrigger
struct UFortUIManagerWidget_UnregisterStateTrigger_Params
{
	class UFortUIStateTrigger*                         TriggerToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIManagerWidget.ShowErrorDialog
struct UFortUIManagerWidget_ShowErrorDialog_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       OperationDesc;                                             // (Parm, NativeAccessSpecifierPublic)
	struct FText                                       DisplayMessage;                                            // (Parm, NativeAccessSpecifierPublic)
	struct FString                                     ErrorCode;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIManagerWidget.SetStateContentDisplayed
struct UFortUIManagerWidget_SetStateContentDisplayed_Params
{
	bool                                               bDisplay;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIManagerWidget.RegisterStateTrigger
struct UFortUIManagerWidget_RegisterStateTrigger_Params
{
	class UFortUIStateTrigger*                         StateTrigger;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIManagerWidget.OnStateStarted
struct UFortUIManagerWidget_OnStateStarted_Params
{
};

// Function FortniteUI.FortUIManagerWidget.OnShowConfirmation
struct UFortUIManagerWidget_OnShowConfirmation_Params
{
	struct FFortDialogDescription                      Description;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// DelegateFunction FortniteUI.FortUIManagerWidget.OnEndSpokenDialog__DelegateSignature
struct UFortUIManagerWidget_OnEndSpokenDialog__DelegateSignature_Params
{
};

// DelegateFunction FortniteUI.FortUIManagerWidget.OnBeginSpokenDialog__DelegateSignature
struct UFortUIManagerWidget_OnBeginSpokenDialog__DelegateSignature_Params
{
	class UTexture2D*                                  Image;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Title;                                                     // (Parm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIManagerWidget.KillConfirmationDialog
struct UFortUIManagerWidget_KillConfirmationDialog_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIManagerWidget.IsStateContentDisplayed
struct UFortUIManagerWidget_IsStateContentDisplayed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIManagerWidget.GetUIManagerWidget
struct UFortUIManagerWidget_GetUIManagerWidget_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortUIManagerWidget*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIManagerWidget.GetCurrentUIStateWidget
struct UFortUIManagerWidget_GetCurrentUIStateWidget_Params
{
	class UFortUIStateWidget*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIManagerWidget.DisplayStateContent
struct UFortUIManagerWidget_DisplayStateContent_Params
{
	bool                                               bDisplay;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIManagerWidget.DisplayErrorDialog
struct UFortUIManagerWidget_DisplayErrorDialog_Params
{
	struct FFortErrorInfo                              Info;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIManagerWidget.CreateUIStateTrigger
struct UFortUIManagerWidget_CreateUIStateTrigger_Params
{
	class UClass*                                      Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortUIStateTrigger*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIManagerWidget._BPGetCurrentUIState
struct UFortUIManagerWidget__BPGetCurrentUIState_Params
{
	TEnumAsByte<FortniteUI_EFortUIState>               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIMessageItemWidget.StackItem
struct UFortUIMessageItemWidget_StackItem_Params
{
	class UFortUIMessageItemWidget*                    StackedItem;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortUIMessageItemWidget.RequestRemove
struct UFortUIMessageItemWidget_RequestRemove_Params
{
};

// Function FortniteUI.FortUIMessageItemWidget.OnRemoveRequested
struct UFortUIMessageItemWidget_OnRemoveRequested_Params
{
};

// Function FortniteUI.FortVaultDetailsWidget.SetItemForCommand
struct UFortVaultDetailsWidget_SetItemForCommand_Params
{
	class UFortItem*                                   InItem;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_EVaultCommandType>          InCommand;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortVaultDetailsWidget.SetItem
struct UFortVaultDetailsWidget_SetItem_Params
{
	class UFortItem*                                   InItem;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortVaultDetailsWidget.HasPendingUpgrade
struct UFortVaultDetailsWidget_HasPendingUpgrade_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortVaultDetailsWidget.HasPendingCustomization
struct UFortVaultDetailsWidget_HasPendingCustomization_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortVaultDetailsWidget.GetProperties
struct UFortVaultDetailsWidget_GetProperties_Params
{
	TArray<struct FVaultPropertyInfo>                  Properties;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bWithUpgradeData;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortVaultDetailsWidget.GetMaxLevelProperty
struct UFortVaultDetailsWidget_GetMaxLevelProperty_Params
{
	struct FVaultPropertyInfo                          ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortVaultDetailsWidget.GetLevelProperty
struct UFortVaultDetailsWidget_GetLevelProperty_Params
{
	struct FVaultPropertyInfo                          ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortVaultDetailsWidget.GetItem
struct UFortVaultDetailsWidget_GetItem_Params
{
	class UFortItem*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortVaultDetailsWidget.GetInfo
struct UFortVaultDetailsWidget_GetInfo_Params
{
	struct FVaultDetailsInfo                           ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortVaultDetailsWidget.GetAlterationSlots
struct UFortVaultDetailsWidget_GetAlterationSlots_Params
{
	TArray<struct FVaultAlterationInfo>                Slots;                                                     // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortVaultDetailsWidget._BPOnNewItemSet
struct UFortVaultDetailsWidget__BPOnNewItemSet_Params
{
};

// Function FortniteUI.FortVaultWidget.IsSupportedSortType
struct UFortVaultWidget_IsSupportedSortType_Params
{
	TEnumAsByte<FortniteUI_EVaultContentSortType>      InSortType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_EVaultContentType>          InContentType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortInventoryFilter>     InContentSubType;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortVaultWidget.GetItemList
struct UFortVaultWidget_GetItemList_Params
{
	TArray<class UFortAccountItem*>                    OutItemList;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_EVaultContentType>          InContentType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVaultContentDetails                        Details;                                                   // (Parm, NativeAccessSpecifierPublic)
};

// Function FortniteUI.FortVaultWidget._BPOnContentUpdated
struct UFortVaultWidget__BPOnContentUpdated_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
