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
// Classes
//---------------------------------------------------------------------------

// Class FortniteUI.FortAbstractButtonGroup
// 0x0048 (FullSize[0x0118] - InheritedSize[0x00D0])
class UFortAbstractButtonGroup : public UWidget
{
public:
	int                                                SelectedIndex;                                             // 0x00D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x00D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x00D5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HQV8[0x2];                                     // 0x00D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     InternalPadding;                                           // 0x00D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_ESelectionMode>                  SelectionMode;                                             // 0x00E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_EButtonGroupDirection>      LayoutMode;                                                // 0x00E9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_14LF[0x2];                                     // 0x00EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnButtonClicked;                                           // 0x00EC(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TArray<struct FText>                               DataProvider;                                              // 0x00F8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UFortButton*>                         Buttons;                                                   // 0x0104(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R4KG[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortAbstractButtonGroup");
		return ptr;
	}



	void SetDataProvider(TArray<struct FText> InDataProvider);
	void HandleButtonClicked(class UFortButton* Button);
};

// Class FortniteUI.FortButtonGroup
// 0x0014 (FullSize[0x012C] - InheritedSize[0x0118])
class UFortButtonGroup : public UFortAbstractButtonGroup
{
public:
	struct FScriptDelegate                             OnGenerateButtonEvent;                                     // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      ButtonClass;                                               // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortButtonGroup");
		return ptr;
	}



};

// Class FortniteUI.FortTabButtonGroup
// 0x0014 (FullSize[0x012C] - InheritedSize[0x0118])
class UFortTabButtonGroup : public UFortAbstractButtonGroup
{
public:
	struct FScriptDelegate                             OnGenerateButtonEvent;                                     // 0x0118(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      ButtonClass;                                               // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortTabButtonGroup");
		return ptr;
	}



	void SetInitialButtonSelection(int INDEX);
	class UFortTabButton* GetTabButton(int INDEX);
};

// Class FortniteUI.FortActorCanvas
// 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
class UFortActorCanvas : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_GPFF[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortActorCanvas");
		return ptr;
	}



	class UFortActorCanvasSlot* AddActorIndicator(class UFortActorIndicatorWidget* Indicator);
};

// Class FortniteUI.FortActorCanvasSlot
// 0x0008 (FullSize[0x002C] - InheritedSize[0x0024])
class UFortActorCanvasSlot : public UPanelSlot
{
public:
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0025(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanAutoRemove;                                            // 0x0026(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WL0E[0x5];                                     // 0x0027(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortActorCanvasSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetCanAutoRemove(bool bAllowAutoRemove);
};

// Class FortniteUI.FortAsyncAction_SetUIState
// 0x0014 (FullSize[0x0030] - InheritedSize[0x001C])
class UFortAsyncAction_SetUIState : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnStateEntered;                                            // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_I7CW[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_SetUIState");
		return ptr;
	}



	class UFortAsyncAction_SetUIState* STATIC_SetUIState(class UObject* InWorldContextObject, TEnumAsByte<FortniteUI_EFortUIState> DesiredState);
};

// Class FortniteUI.FortAsyncAction_ShowConfirmation
// 0x0078 (FullSize[0x0094] - InheritedSize[0x001C])
class UFortAsyncAction_ShowConfirmation : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnConfirmed;                                               // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDeclined;                                                // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTimedOut;                                                // 0x0034(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortDialogDescription                      Description;                                               // 0x0044(0x0050) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_ShowConfirmation");
		return ptr;
	}



	class UFortAsyncAction_ShowConfirmation* STATIC_ShowConfirmationDialog(class UObject* InWorldContextObject, const struct FText& Title, const struct FText& Message, const struct FText& ConfirmButtonText, const struct FText& DeclineButtonText, class UFortUserWidget* InAdditionalContent, float InDisplayTime);
};

// Class FortniteUI.FortBangWrapper
// 0x0030 (FullSize[0x0110] - InheritedSize[0x00E0])
class UFortBangWrapper : public UContentWidget
{
public:
	unsigned char                                      UnknownData_164W[0x4];                                     // 0x00E0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<FortniteUI_EFortBangSize>              Size;                                                      // 0x00E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CPB0[0x3];                                     // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Offset;                                                    // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortBangType>            BangType;                                                  // 0x00F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XI1N[0x3];                                     // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       TutorialNameID;                                            // 0x00F4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_EFortTutorialGlowType>      TutorialGlowType;                                          // 0x00FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NZSW[0x13];                                    // 0x00FD(0x0013) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortBangWrapper");
		return ptr;
	}



	void SetBangVisibility(bool InVisible);
};

// Class FortniteUI.FortButtonInternalWidget
// 0x000C (FullSize[0x0384] - InheritedSize[0x0378])
class UFortButtonInternalWidget : public UButton
{
public:
	bool                                               IsClickable;                                               // 0x0378(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D9BG[0xB];                                     // 0x0379(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortButtonInternalWidget");
		return ptr;
	}



};

// Class FortniteUI.FortUserWidget
// 0x008C (FullSize[0x0244] - InheritedSize[0x01B8])
class UFortUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_IDHN[0x4];                                     // 0x01B8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bConsumePointerInput;                                      // 0x01BC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2GYE[0x87];                                    // 0x01BD(0x0087) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortUserWidget");
		return ptr;
	}



	void UnregisterForEvent(const struct FName& EventName, const struct FScriptDelegate& InCallback);
	void RegisterForInvalidation(const struct FName& InvalidationType, const struct FScriptDelegate& Callback);
	void RegisterForEvent(const struct FName& EventName, const struct FScriptDelegate& InCallback);
	void PreConstruct(bool IsDesignTime);
	bool IsInvalid(const struct FName& Type);
	void DispatchEvent(const struct FName& EventName);
	void _BPInvalidate(const struct FName& Type);
};

// Class FortniteUI.FortButtonStyle
// 0x15C0 (FullSize[0x15DC] - InheritedSize[0x001C])
class UFortButtonStyle : public UObject
{
public:
	struct FFortStateStyle                             NormalBase;                                                // 0x001C(0x02D8) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                             NormalHovered;                                             // 0x02F4(0x02D8) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                             NormalPressed;                                             // 0x05CC(0x02D8) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                             SelectedBase;                                              // 0x08A4(0x02D8) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                             SelectedHovered;                                           // 0x0B7C(0x02D8) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                             SelectedPressed;                                           // 0x0E54(0x02D8) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                             Disabled;                                                  // 0x112C(0x02D8) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortMultiSizeMargin                        ButtonPadding;                                             // 0x1404(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortMultiSizeFont                          Font;                                                      // 0x1464(0x00F0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortMultiSizeMargin                        CustomPadding;                                             // 0x1554(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateSound                                 PressedSlateSound;                                         // 0x15B4(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateSound                                 HoveredSlateSound;                                         // 0x15C8(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortButtonStyle");
		return ptr;
	}



	struct FMargin STATIC_GetMarginBySizeFromMultiSizeMargin(const struct FFortMultiSizeMargin& MultiSizeMargin, TEnumAsByte<FortniteGame_EFortBrushSize> Size);
	struct FSlateFontInfo STATIC_GetFontBySizeFromMultiSizeFont(const struct FFortMultiSizeFont& MultiSizeFont, TEnumAsByte<FortniteGame_EFortBrushSize> Size);
	struct FSlateFontInfo GetFontBySize(TEnumAsByte<FortniteGame_EFortBrushSize> Size);
	struct FMargin GetCustomPaddingBySize(TEnumAsByte<FortniteGame_EFortBrushSize> Size);
	struct FMargin GetButtonPaddingBySize(TEnumAsByte<FortniteGame_EFortBrushSize> Size);
	struct FSlateBrush STATIC_GetBrushBySizeFromMultiSizeBrush(const struct FFortMultiSizeBrush& MultiSizeBrush, TEnumAsByte<FortniteGame_EFortBrushSize> Size);
};

// Class FortniteUI.FortBaseButton
// 0x04F8 (FullSize[0x073C] - InheritedSize[0x0244])
class UFortBaseButton : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData_6233[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    EnabledChanged;                                            // 0x0248(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    SelectedChanged;                                           // 0x0254(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    ButtonClicked;                                             // 0x0260(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_EFortBangSize>              BangSize;                                                  // 0x026C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XPLV[0x3];                                     // 0x026D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   BangOffset;                                                // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	TEnumAsByte<FortniteGame_EFortBangType>            BangType;                                                  // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1BWY[0x3];                                     // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       TutorialNameID;                                            // 0x027C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<FortniteUI_EFortTutorialGlowType>      TutorialGlowType;                                          // 0x0284(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OGV9[0x3];                                     // 0x0285(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Style;                                                     // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<FortniteGame_EFortBrushSize>           BrushSize;                                                 // 0x028C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J3BC[0x3];                                     // 0x028D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateSound                                 PressedSlateSoundOverride;                                 // 0x0290(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                                 HoveredSlateSoundOverride;                                 // 0x02A4(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	bool                                               bSelectable;                                               // 0x02B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZFKZ[0x3];                                     // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SelectionGroup;                                            // 0x02BC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bToggleable;                                               // 0x02C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	bool                                               bClickable;                                                // 0x02C5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EButtonClickMethod>          ClickMethod;                                               // 0x02C6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XDH7[0x475];                                   // 0x02C7(0x0475) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortBaseButton");
		return ptr;
	}



	void SetStyle(class UClass* InStyle);
	void SetSelectionGroup(const struct FName& InSelectionGroup);
	void SetSelected(bool InSelected);
	void SetHovered(bool InHovered);
	void SetClickMethod(TEnumAsByte<SlateCore_EButtonClickMethod> InClickMethod);
	void SetClickable(bool InClickable);
	void SetBrushSize(TEnumAsByte<FortniteGame_EFortBrushSize> InSize);
	void SetBangVisibility(bool bVisible);
	void OnButtonClicked();
	class UFortButtonStyle* GetStyle();
	int GetSelectionGroupIndex();
	bool GetSelected();
	struct FFortStateStyle GetCurrentStateStyle();
	struct FSlateFontInfo GetCurrentFont();
	struct FMargin GetCurrentCustomPadding();
	struct FMargin GetCurrentButtonPadding();
	void ForceClick();
};

// Class FortniteUI.FortFrontEndContext
// 0x0118 (FullSize[0x0134] - InheritedSize[0x001C])
class UFortFrontEndContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData_TELY[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFrontEndCameraChanged;                                   // 0x0020(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnTheaterSelected;                                         // 0x002C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTheaterDataChanged;                                      // 0x0038(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTheaterTileClicked;                                      // 0x0044(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTheaterTileUnselected;                                   // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRecruitHero;                                             // 0x005C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerLoggedIn;                                          // 0x0068(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerLoggedOut;                                         // 0x0074(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnOutpostViewLoaded;                                       // 0x0080(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FFortFrontEndFeatureStruct                  Features[0x9];                                             // 0x008C(0x0090) (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FFortSavedModeLoadout                       CachedModeLoadout;                                         // 0x011C(0x0018) (Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortFrontEndContext");
		return ptr;
	}



	void ViewVaultItem(class UFortItem* ItemToView);
	void TriggerUIFeedbackEvent(const struct FName& EventName);
	void SkipInitialBenchmark();
	bool ShouldRunInitialBenchmark();
	void SetSelectedTheater(int TheaterIndex);
	void SetPersonalHeroChoice(class UFortHero* Hero);
	void SetHeroChoice(int PartyMemberIndex, class UFortHero* Hero);
	void SetFrontEndCamera(TEnumAsByte<FortniteGame_EFrontEndCamera> NewState);
	void SelectGadgetForSlot(int Slot, class UFortItemDefinition* GadgetDefinition);
	void SelectDefaultTheaterTile();
	void RunBenchmarkAndApplyBestSettings();
	void NotifyCreateBuildingClosed(class UHomeBaseBuilding* Building);
	void MarkSeenItemsInVault();
	bool LoadOutpostView(int TheaterSlot);
	bool IsFabricatorDisintegrating(int TheaterSlot);
	bool IsActiveTileMissionValid();
	bool GetTileMissionDetails(class AFortTheaterMapTile* Tile, struct FFortMissionDetails* MissionDetails);
	TEnumAsByte<FortniteGame_EFortTheaterType> GetTheaterType(int TheaterIndex);
	int GetTheaterRegionCount(int TheaterIndex);
	struct FText GetTheaterName(int TheaterIndex);
	struct FText GetTheaterDifficultyText(int TheaterIndex);
	bool GetTheaterData(int TheaterIndex, struct FFortTheaterMapData* OutTheaterData);
	int GetSelectedTheaterIndex();
	bool GetSelectedTheaterData(struct FFortTheaterMapData* OutTheaterData);
	void GetSelectableGadgets(TArray<class UFortWorldItem*>* SelectableGadgets, TArray<class UFortWorldItem*>* LastSelectedGadgets);
	struct FSlateBrush GetSchematicXpResourceBrush();
	class UFortPersistentResourceItemDefinition* GetSchematicResourceItemDefinition();
	struct FText GetRequirementText(const struct FFortRequirementsInfo& InRequirements);
	struct FSlateBrush GetPersonnelXpResourceBrush();
	class UFortPersistentResourceItemDefinition* GetPersonnelResourceItemDefinition();
	class UFortPersistentResourceItemDefinition* GetPersistentResourceItemDefinition(TEnumAsByte<FortniteGame_EFortPersistentResources> ResourceType);
	void GetOutpostStructureUpgradeCost(int TheaterSlot, int UpgradeLevel, class UFortOutpostItemDefinition* OutpostStructure, TArray<struct FFortItemQuantityPair>* OutWorldItems, TArray<struct FFortItemQuantityPair>* OutAccountItems);
	int GetOutpostStructureMaxLevel(int TheaterSlot, class UFortOutpostItemDefinition* OutpostStructure);
	int GetOutpostStructureLevel(int TheaterSlot, class UFortOutpostItemDefinition* OutpostStructure);
	int GetNumberOfItemsInStorageVault(int TheaterSlot);
	int GetMaxNumberOfItemsInStorageVault(int TheaterSlot);
	class UFortItemDefinition* GetItemFromItemQuantityPair(const struct FFortItemQuantityPair& InPair);
	class AFortPlayerPawn* GetHeroPlayerPawnByIndex(int PartyMemberIndex);
	class UFortWorldItemDefinition* GetHarvestingToolForLevel(int TheaterSlot, int InHarvestingOptimizerLevel);
	TEnumAsByte<FortniteGame_EFrontEndCamera> GetFrontEndCamera();
	TEnumAsByte<FortniteUI_EFortFrontEndFeatureState> GetFeatureState(TEnumAsByte<FortniteUI_EFortFrontEndFeature> Feature);
	int GetFabricatorStoredGooAmount(int TheaterSlot);
	int GetFabricatorMaxCapacity(int TheaterSlot);
	int GetFabricatorIncomingGooAmount(int TheaterSlot);
	int GetFabricatorDisintegrationSecondsRemaining(int TheaterSlot);
	TEnumAsByte<FortniteGame_EFrontEndCamera> GetDesiredPlayButtonCamera();
	struct FText GetCurrentTheaterName();
	TArray<struct FGameDifficultyInfo> GetAvailibleDifficulties();
	struct FFortMultiSizeBrush GetAttributeIcon(const struct FFortAttributeInfo& InAttribute, const struct FGameplayTagContainer& InRequiredTags);
	struct FText GetAttributeDisplayName(const struct FFortAttributeInfo& InAttribute, const struct FGameplayTagContainer& InRequiredTags);
	struct FText GetAttributeDescription(const struct FFortAttributeInfo& InAttribute, const struct FGameplayTagContainer& InRequiredTags);
	bool GetAllTheaterData(TArray<struct FFortTheaterMapData>* OutAllTheaterData);
	bool GetActiveTileMissionDetails(struct FFortMissionDetails* MissionDetails);
	class AFortTheaterMapTile* GetActiveTile();
	void GetAccountLevelUpRewards(TArray<struct FFortItemQuantityPair>* Rewards, int AccountLevel);
	void ForceSetFeatureState(TEnumAsByte<FortniteUI_EFortFrontEndFeature> Feature, TEnumAsByte<FortniteUI_EFortFrontEndFeatureState> State);
	void CreateKeepMenu(class UNativeWidgetHost* InNativeWidgetHost, class UHomeBaseBuilding* Building);
	void ClearSelectedTheater();
	void ClearNativeWidget(class UNativeWidgetHost* InNativeWidgetHost);
	void BindToFeatureStateAndInitialize(TEnumAsByte<FortniteUI_EFortFrontEndFeature> Feature, const struct FScriptDelegate& Delegate);
};

// Class FortniteUI.FortGlobalUIContext
// 0x014C (FullSize[0x0168] - InheritedSize[0x001C])
class UFortGlobalUIContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData_W3R7[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnKeybindsChanged;                                         // 0x0020(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTeamPowerChanged;                                        // 0x002C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    DragAndDropStartedDelegate;                                // 0x0038(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    DragAndDropEndedDelegate;                                  // 0x0044(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNetworkError;                                            // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnQueryFortBackendVersionComplete;                         // 0x005C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1C6B[0x18];                                    // 0x0068(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, class UFortUIMessageManager*>   MessageManagersByName;                                     // 0x0080(0x0050) ELEMENT_SIZE_MISMATCH (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	struct FFortUIFeatureStruct                        Features[0x3];                                             // 0x00BC(0x0030) (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JRJW[0x78];                                    // 0x00EC(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsUIVisible;                                              // 0x0164(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6MOC[0x3];                                     // 0x0165(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortGlobalUIContext");
		return ptr;
	}



	void UnregisterToReceiveNotifications();
	void UnregisterScriptedAction(class UClass* ScriptedAction);
	void TakeScreenshot(const struct FScriptDelegate& Callback);
	void ShowBang(TEnumAsByte<FortniteGame_EFortBangType> Type);
	bool ShouldCloseMenuOnEscape();
	void SendUINavigationAnalytic(const struct FString& Destination, bool bUserInitiated);
	void SendLeaveZoneAnalytic();
	void SendExperienceRatingAnalytic(const struct FString& RatingType, int StarCount, const struct FString& GameSessionID, const struct FString& Comment);
	void RemoveNotification(const struct FFortDialogDescription& NotificationDescription);
	void RegisterToReceiveNotifications(const struct FScriptDelegate& InOnNotifcationAvailable);
	void RegisterScriptedActions(TArray<class UClass*> ScriptedActions);
	void RegisterScriptedAction(class UClass* ScriptedAction);
	void QuitGame();
	void QueryGameBackendVersion();
	void ProcessNotificationResult(TEnumAsByte<FortniteUI_EFortDialogResult> InResult, const struct FFortDialogDescription& NotificationDescription);
	void OnQueryFortBackendVersionDelegate__DelegateSignature(const struct FFortBackendVersion& FortBackendVersion);
	void OnNetworkErrorDelegate__DelegateSignature(const struct FText& NetworkErrorMessage);
	void Logout();
	bool IsUIVisible();
	bool IsInZone();
	bool IsInOutpostZone();
	bool IsHUDVisible();
	bool IsBluGloEnabled();
	void HideBang(TEnumAsByte<FortniteGame_EFortBangType> Type);
	struct FString GetWatermark();
	void GetTeamPower(int* TeamPower, int* PersonalPower);
	class UFortQuestManager* GetQuestManager();
	bool GetNextNotification(struct FFortDialogDescription* NotifcationDescription);
	class UFortUIMessageManager* GetMessageManager(const struct FName& ManagerName, bool* bCreatedNew);
	struct FGameSummaryInfo GetLastGameSummaryInfo();
	struct FText GetKeyTextForAction(const struct FName& Action);
	struct FKey GetKeyForAction(const struct FName& Action);
	struct FFortBackendVersion GetGameBackendVersion();
	TEnumAsByte<FortniteUI_EFortUIFeatureState> GetFeatureState(TEnumAsByte<FortniteUI_EFortUIFeature> Feature);
	struct FString GetBackendName();
	TEnumAsByte<FortniteGame_EFortInputPreset> GetActiveKeybindSet();
	void DisplayStateContent(bool bDisplay);
	void ClearSelectionGroup(const struct FName& SelectionGroup);
	void ClearLastGameSummaryInfo();
	void CheckNetworkError();
	void STATIC_CheckFlag(const struct FString& FlagName, TEnumAsByte<FortniteUI_EFlagStatus>* OutStatus);
	void BindToFeatureStateAndInitialize(TEnumAsByte<FortniteUI_EFortUIFeature> Feature, const struct FScriptDelegate& Delegate);
};

// Class FortniteUI.FortGridPickerTile
// 0x0008 (FullSize[0x024C] - InheritedSize[0x0244])
class UFortGridPickerTile : public UFortUserWidget
{
public:
	class UObject*                                     Data;                                                      // 0x0244(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortGridWidgetBase*                         Owner;                                                     // 0x0248(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortGridPickerTile");
		return ptr;
	}



	void SetData(class UObject* InData);
	void OnMouseLeave();
	void OnMouseEnter();
	void OnClicked();
	void ForwardClicked();
};

// Class FortniteUI.FortGridWidgetBase
// 0x010C (FullSize[0x01EC] - InheritedSize[0x00E0])
class UFortGridWidgetBase : public UContentWidget
{
public:
	class UClass*                                      ClearWidgetType;                                           // 0x00E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TileWidth;                                                 // 0x00E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TileHeight;                                                // 0x00E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                TilesAcross;                                               // 0x00EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                TilesDown;                                                 // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bShrinkToFit;                                              // 0x00F4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q9IH[0x3];                                     // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PeekOverflowTilePercentage;                                // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                                     TilePadding;                                               // 0x00FC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                                 GridBackground;                                            // 0x010C(0x0074) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FMargin                                     GridBackgroundPadding;                                     // 0x0180(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TArray<class UObject*>                             DataProvider;                                              // 0x0190(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnTileGenerated;                                           // 0x019C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTileClicked;                                             // 0x01A8(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMouseEnterTile;                                          // 0x01B4(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMouseLeaveTile;                                          // 0x01C0(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UClass*                                      TileWidgetType;                                            // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteUI_EGridSortKind>              SortKind;                                                  // 0x01D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReversed;                                                 // 0x01D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4ALN[0x2];                                     // 0x01D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             GetSortKeyFor;                                             // 0x01D4(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_67W3[0x8];                                     // 0x01E4(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortGridWidgetBase");
		return ptr;
	}



	void SetTileWidth(float Width);
	void SetTilesDown(int Down);
	void SetTilesAcross(int Across);
	void SetTilePadding(const struct FMargin& Padding);
	void SetTileHeight(float Height);
	void SetPeekOverflowTilePercentage(float Percent);
	void SetDataProvider(TArray<class UObject*> Data);
	void SetClearWidgetType(class UClass* InClearWidgetType);
};

// Class FortniteUI.FortGridPickerGrid
// 0x0000 (FullSize[0x0244] - InheritedSize[0x0244])
class UFortGridPickerGrid : public UFortUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortGridPickerGrid");
		return ptr;
	}



};

// Class FortniteUI.FortGridPickerButton
// 0x0030 (FullSize[0x021C] - InheritedSize[0x01EC])
class UFortGridPickerButton : public UFortGridWidgetBase
{
public:
	TEnumAsByte<SlateCore_EMenuPlacement>              GridPlacement;                                             // 0x01EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M6B9[0x3];                                     // 0x01ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFortGridPickerGrid*                         GridWidget;                                                // 0x01F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCloseOnTileClicked;                                       // 0x01F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q5C6[0x3];                                     // 0x01F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             GridWidgetDelegate;                                        // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGridPickerOpenChanged;                                   // 0x0208(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BLZ8[0x8];                                     // 0x0214(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortGridPickerButton");
		return ptr;
	}



	void SetIsOpen(bool ShouldBeOpen);
	void OnIsGridPickerOpenChanged__DelegateSignature(bool IsOpen);
	void OnButtonClicked();
	class UFortGridPickerGrid* CreateGridWidget__DelegateSignature();
};

// Class FortniteUI.FortGridWidget
// 0x0008 (FullSize[0x01F4] - InheritedSize[0x01EC])
class UFortGridWidget : public UFortGridWidgetBase
{
public:
	unsigned char                                      UnknownData_97SQ[0x8];                                     // 0x01EC(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortGridWidget");
		return ptr;
	}



};

// Class FortniteUI.FortHeroManagementContext
// 0x00FC (FullSize[0x0118] - InheritedSize[0x001C])
class UFortHeroManagementContext : public UBlueprintContextBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayerDataUpdated;                                       // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMcpHeroDeleteResponse;                                   // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMcpHeroCreateResponse;                                   // 0x0034(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAvailableHeroesChanged;                                  // 0x0040(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCurrentHeroChanged;                                      // 0x004C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMcpAbilityChangeRequestResponse;                         // 0x0058(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMcpAbilityChangeRequestSent;                             // 0x0064(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAbilitySelectionRolledBack;                              // 0x0070(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAvailableAbilityPointsChanged;                           // 0x007C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHeroStatsChanged;                                        // 0x0088(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortHero*                                   CurrentHero;                                               // 0x0094(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortHeroType*>                       AllHeroTypes;                                              // 0x0098(0x000C) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3NF6[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFortHero*                                   HeroBeingDeleted;                                          // 0x00A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CSSO[0x6C];                                    // 0x00AC(0x006C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortHeroManagementContext");
		return ptr;
	}



	void SetShowingStatsScreen(bool bIsShowingStats);
	bool SetHeroNameFromID(const struct FString& HeroId, const struct FString& NewName);
	bool SetHeroName(const struct FString& NewName);
	bool SetCurrentHero(const struct FString& HeroId);
	bool RequestSetTraitDepthFromID(const struct FString& HeroId, int TraitIdx, int Depth);
	bool RequestSetTraitDepth(int TraitIdx, int Depth);
	bool RequestDeleteHero(const struct FString& HeroId);
	bool RequestCreateHero(class UFortHeroType* HeroType, const struct FString& Name, TEnumAsByte<FortniteGame_EFortCustomGender> Gender);
	bool RedeemPrevAbilityFromID(const struct FString& HeroId, int TraitIdx);
	bool RedeemPrevAbility(int TraitIdx);
	void RedeemAllAbilitiesFromID(const struct FString& HeroId);
	bool RedeemAllAbilities();
	bool PurchaseNextAbilityFromID(const struct FString& HeroId, int TraitIdx);
	bool PurchaseNextAbility(int TraitIdx);
	int NumHeroSlots();
	bool IsSkillTreeUnlockedFromID(const struct FString& HeroId);
	bool IsSkillTreeUnlocked();
	bool IsShowingStatsScreen();
	bool IsDeleteHeroEnabled();
	bool IsCreateHeroEnabled();
	class UFortTrait* GetTraitFromID(const struct FString& HeroId, int TraitIdx);
	int GetTraitDepthFromID(const struct FString& HeroId, int TraitIdx);
	bool GetTraitDepth(int TraitIdx, int* Depth);
	class UFortTrait* GetTrait(int TraitIdx);
	int GetNumUnspentAbilityPointsFromID(const struct FString& HeroId);
	bool GetNumUnspentAbilityPoints(int* NumAbilityPoints);
	int GetNumHeroTraits();
	int GetNextAbilityCostFromID(const struct FString& HeroId, int TraitIdx);
	int GetNextAbilityCost(int TraitIdx);
	int GetMaxNameLength();
	struct FHeroUIData GetHeroDataFromID(const struct FString& HeroId);
	bool GetHeroData(struct FHeroUIData* HeroData);
	TArray<struct FEmptyHeroSlot> GetEmptyHeroSlots();
	void GetDisplayStats(TArray<struct FFortGameplayEffectModifierDescription>* Stats);
	bool GetCurrentHeroID(struct FString* HeroId);
	TArray<class UFortAbilityKit*> GetCoreAbilitiesFromID(const struct FString& HeroId);
	TArray<class UFortAbilityKit*> GetCoreAbilities();
	bool GetAttributeValuesArrayFromID(const struct FString& HeroId, TArray<struct FGameplayAttribute> Attributes, TArray<float>* Values);
	bool GetAttributeValuesArray(TArray<struct FGameplayAttribute> Attributes, TArray<float>* Values);
	float GetAttributeValueFromID(const struct FString& HeroId, const struct FGameplayAttribute& Attribute);
	float GetAttributeValue(const struct FGameplayAttribute& Attribute);
	TArray<struct FString> GetAllHeroIDs();
	int GetAbilityCostFromID(const struct FString& HeroId, int TraitIdx, int TraitDepth);
	int GetAbilityCost(int TraitIdx, int TraitDepth);
	void GenerateRandomHeroName(class UDataTable* NameTable, struct FString* Name);
	TEnumAsByte<FortniteUI_ENameStatus> CheckHeroNameValidity(const struct FString& Name);
	bool CanRedeemAllAbilities();
	bool CanModifyTraitDepthFromID(const struct FString& HeroId, int TraitIdx);
	bool CanModifyTraitDepth(int TraitIdx);
	bool CanAffordNextAbilityFromID(const struct FString& HeroId, int TraitIdx);
	bool CanAffordNextAbility(int TraitIdx);
	bool CanAffordAbilityFromID(const struct FString& HeroId, int TraitIdx, int TraitDepth);
	bool CanAffordAbility(int TraitIdx, int TraitDepth);
};

// Class FortniteUI.FortHUDContext
// 0x01E0 (FullSize[0x01FC] - InheritedSize[0x001C])
class UFortHUDContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData_4176[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCursorModeChanged;                                       // 0x0020(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnIndicatorModeChanged;                                    // 0x002C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBuildingFocused;                                         // 0x0038(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFocusedBuildingStateChanged;                             // 0x0044(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFocusedBuildingHealthChanged;                            // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFocusedBuildingRepairCostChanged;                        // 0x005C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFocusedBuildingAttachedTrapDurabilityChanged;            // 0x0068(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerTargetingChanged;                                  // 0x0074(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnActorUnderReticleChanged;                                // 0x0080(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnScoreChanged;                                            // 0x008C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnScoreStatChanged;                                        // 0x0098(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnZoneCompleted;                                           // 0x00A4(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPawnSet;                                                 // 0x00B0(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDamageReceived;                                          // 0x00BC(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAbilityFailed;                                           // 0x00C8(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLocalPlayerMaxHealthChanged;                             // 0x00D4(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLocalPlayerHealthChanged;                                // 0x00E0(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLocalPlayerDied;                                         // 0x00EC(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLocalPlayerMaxShieldChanged;                             // 0x00F8(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLocalPlayerShieldChanged;                                // 0x0104(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLocalPlayerMaxStaminaChanged;                            // 0x0110(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLocalPlayerStaminaChanged;                               // 0x011C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnWeaponEquippedDelegate;                                  // 0x0128(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAbilityDecisionWindowStackUpdated;                       // 0x0134(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemCollectorChanged;                                    // 0x0140(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bPendingAttachToHUD;                                       // 0x014C(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DRJG[0x3];                                     // 0x014D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AFortPlayerState*                            OwningPlayerState;                                         // 0x0150(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ABuildingActor*                              CurFocusedBuilding;                                        // 0x0154(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P67E[0xA4];                                    // 0x0158(0x00A4) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortHUDContext");
		return ptr;
	}



	void SetIndicatorsAllowed(bool bIndicatorsAllowed);
	bool IsInCursorMode();
	void HandleLocalPawnDied(const struct FFortPlayerDeathReport& DeathReport);
	class AFortPvPBaseCornerstone* GetTeamCornerstone(TEnumAsByte<FortniteGame_EFortTeam> Team);
	float GetScoreDisplayFactor();
	class AFortPlayerStateZone* GetPlayerStateZone();
	class UFortAbilitySystemComponent* GetPlayerAbilitySystemComponent();
	struct FFortKillerVisualInfo GetKillerVisualInfoFromDeathReport(const struct FFortPlayerDeathReport& DeathReport);
	class AFortGameStateZone* GetGameStateZone();
	bool GetFocusedBuildingInfo(struct FFortFocusedBuildingInfo* OutBuildingInfo);
	class UFortHero* GetCurrentHero();
	void ForwardOnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void ForwardOnAbilityDecisionWindowStackUpdated();
	void EnterCursorMode(const struct FName& ActionName, class UUserWidget* CursorModeWidget);
	void EnterCameraMode();
	bool AreIndicatorsEnabled();
};

// Class FortniteUI.FortInventoryContext
// 0x00B4 (FullSize[0x00D0] - InheritedSize[0x001C])
class UFortInventoryContext : public UBlueprintContextBase
{
public:
	struct FScriptMulticastDelegate                    OnWorldItemListChanged;                                    // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemPickedUp;                                            // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnQuickbarContentsChanged;                                 // 0x0034(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnQuickbarSlotFocusChanged;                                // 0x0040(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnQuickbarForceFullUpdate;                                 // 0x004C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnWorldItemsChanged;                                       // 0x0058(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPinnedSchematicsChanged;                                 // 0x0064(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSchematicsLockedChanged;                                 // 0x0070(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSchematicUnlocked;                                       // 0x007C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCraftItemStarted;                                        // 0x0088(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<class UFortSchematicItemDefinition*, bool>    SchematicLockedStates;                                     // 0x0094(0x0050) ELEMENT_SIZE_MISMATCH (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortInventoryContext");
		return ptr;
	}



	bool WillQuickBarAcceptItem(class UFortItem* Item, TEnumAsByte<FortniteGame_EFortQuickBars> InQuickBar, int Slot);
	void UnlockSchematic(class UFortSchematicItemDefinition* SchematicDefinition);
	void UnlockAllSchematics();
	bool SetSchematicPinned(class UFortSchematicItem* Schematic, bool bEnabled);
	bool RemoveItemFromQuickBar(class UFortItem* Item);
	void LockAllSchematics();
	bool IsSchematicPinned(class UFortSchematicItem* Schematic);
	void GetWorldItemList(TArray<class UFortWorldItem*>* Items, const struct FFortItemListFilter& FilterSettings);
	void GetSchematicItemList(TArray<class UFortSchematicItem*>* Items, const struct FFortItemListFilter& FilterSettings);
	class UFortResourceItemDefinition* GetResourceItemDefinition(TEnumAsByte<FortniteGame_EFortResourceType> ResourceType);
	class UTexture2D* GetResourceIcon(TEnumAsByte<FortniteGame_EFortResourceType> ResourceType);
	int GetResourceCount(TEnumAsByte<FortniteGame_EFortResourceType> ResourceType);
	class UFortItem* GetQuickBarSlottedItem(TEnumAsByte<FortniteGame_EFortQuickBars> InQuickBar, int Slot);
	void GetQuickbarFocus(TEnumAsByte<FortniteGame_EFortQuickBars>* OutQuickBar, int* OutSlot);
	void GetPinnedSchematicList(TArray<class UFortSchematicItem*>* PinnedItems);
	int GetNumInInventory(class UFortWorldItemDefinition* ItemDefinition, bool bIncludeReserved);
	class AFortWeapon* GetEquippedWeapon();
	class UFortResourceItemDefinition* GetCurrentResourceItemDefinition();
	class UTexture2D* GetCurrentResourceIcon();
	int GetCurrentResourceCount();
	class UFortWorldItemDefinition* GetCurrentAmmoItemDefinition();
	class UTexture2D* GetCurrentAmmoIcon();
	void GetBackpackItemCounts(int* ItemsCount, int* MaxItemsCount, int* OverflowItemsCount);
	bool DropItemOnQuickBar(class UFortItem* Item, TEnumAsByte<FortniteGame_EFortQuickBars> TargetQuickbar, int TargetSlot);
	void DropItemOnPlayerOrWorld(class UFortWorldItem* ItemBeingDropped, class AFortPlayerState* InDestinationPlayer, class UWidget* OwnerWidget, const struct FPointerEvent& PointerEvent, const struct FGeometry& InGeometry);
	bool DoesItemMatchFilter(class UFortItem* Item, const struct FFortItemListFilter& FilterSettings);
	bool DisassembleItem(class UFortWorldItem* Item);
	bool CraftSchematic(class UFortSchematicItem* SchematicItem, TEnumAsByte<FortniteGame_EFortCraftFailCause>* FailCause);
	bool CanPinSchematic(class UFortSchematicItem* Schematic);
	bool CanDisassembleItem(class UFortWorldItem* Item);
	bool CanCraftSchematic(class UFortSchematicItem* SchematicItem, TEnumAsByte<FortniteGame_EFortCraftFailCause>* FailCause);
	bool ActivateItem(class UFortItem* Item);
};

// Class FortniteUI.FortLegacySlateBridgeWidget
// 0x0024 (FullSize[0x00FC] - InheritedSize[0x00D8])
class UFortLegacySlateBridgeWidget : public UNativeWidgetHost
{
public:
	TEnumAsByte<FortniteUI_EFortLegacySlateWidget>     ContainedWidgetType;                                       // 0x00D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_41IA[0x3];                                     // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DPIScaleFactor;                                            // 0x00DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptDelegate                             OnClose;                                                   // 0x00E0(0x0010) (ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0SY4[0xC];                                     // 0x00F0(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortLegacySlateBridgeWidget");
		return ptr;
	}



	void UpdateSlateWidget(TEnumAsByte<FortniteUI_EFortLegacySlateWidget> SlateWidgetType);
	void SetOnCloseHandler(const struct FScriptDelegate& OnCloseHandler);
};

// Class FortniteUI.FortListView
// 0x0048 (FullSize[0x0118] - InheritedSize[0x00D0])
class UFortListView : public UTableViewBase
{
public:
	struct FScriptMulticastDelegate                    OnItemClicked;                                             // 0x00D0(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemSelected;                                            // 0x00DC(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnGenerateRowEvent;                                        // 0x00E8(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ItemHeight;                                                // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UObject*>                             DataProvider;                                              // 0x00FC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<Slate_ESelectionMode>                  SelectionMode;                                             // 0x0108(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EConsumeMouseWheel>          ConsumeMouseWheel;                                         // 0x0109(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2B9G[0x2];                                     // 0x010A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ListItemClass;                                             // 0x010C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_D3FC[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortListView");
		return ptr;
	}



	bool SetItemSelected(class UObject* Item);
	bool SetIndexSelected(int INDEX);
	void SetDataProvider(TArray<class UObject*> NewData);
	void RemoveItemAt(int INDEX);
	class UObject* GetItemAt(int INDEX);
	int GetIndexForItem(class UObject* Item);
	void ClearSelection();
	void Clear();
	void AddItem(class UObject* NewItem);
};

// Class FortniteUI.FortModalContainerData
// 0x000C (FullSize[0x0028] - InheritedSize[0x001C])
class UFortModalContainerData : public UDataAsset
{
public:
	TArray<struct FFortModalContainerSizeEntry>        Entries;                                                   // 0x001C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortModalContainerData");
		return ptr;
	}



};

// Class FortniteUI.FortModalContainerWidget
// 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
class UFortModalContainerWidget : public UWidget
{
public:
	unsigned char                                      UnknownData_2QVH[0x4];                                     // 0x00D0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<FortniteUI_EModalContainerSize>        SizeConstraint;                                            // 0x00D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3TJN[0x3];                                     // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFortModalContainerSizeEntry>        DefaultSizeEntries;                                        // 0x00D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UFortModalContainerData*                     OverrideSizeEntries;                                       // 0x00E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     TopContent;                                                // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                                     MiddleContent;                                             // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                                     BottomContent;                                             // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                                     BackgroudContent;                                          // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Q3HT[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortModalContainerWidget");
		return ptr;
	}



};

// Class FortniteUI.FortSocialListView
// 0x05F0 (FullSize[0x06C0] - InheritedSize[0x00D0])
class UFortSocialListView : public UWidget
{
public:
	struct FScriptDelegate                             GenerateItemEvent;                                         // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      SocialItemWidgetType;                                      // 0x00E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTableRowStyle                              ListRowStyle;                                              // 0x00E4(0x05AC) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6UJG[0x30];                                    // 0x0690(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortSocialListView");
		return ptr;
	}



	void SetList(TArray<class UFortSocialItem*> InList);
};

// Class FortniteUI.FortStoreContext
// 0x0050 (FullSize[0x006C] - InheritedSize[0x001C])
class UFortStoreContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData_KLXM[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCardPackOffersChanged;                                   // 0x0020(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStoreStateChange;                                        // 0x002C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FCardPackOffer>                      Offers;                                                    // 0x0038(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                                   NextStoreRefresh;                                          // 0x0044(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCard>                               CardList;                                                  // 0x004C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                CardIndex;                                                 // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOpenedCardPack                             OpenedCardPack;                                            // 0x005C(0x0008) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TEnumAsByte<FortniteGame_EFortRarity>              LastCardRarity;                                            // 0x0064(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SCGM[0x7];                                     // 0x0065(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortStoreContext");
		return ptr;
	}



	bool OpenWebPayment(const struct FString& AttemptedMTXOfferId);
	TEnumAsByte<FortniteUI_ECardPackPurchaseError> MakePurchase(const struct FCardPackOffer& Offer, int Quantity);
	bool IsNewStoreEnabled();
	bool IsCatalogAvailable();
	struct FTimespan GetTimeUntilMarketplaceRefresh();
	struct FTimespan GetTimeUntilDailyLimitReset();
	TEnumAsByte<FortniteUI_EFortStoreState> GetStoreState();
	struct FLinearColor GetRarityColor(TEnumAsByte<FortniteGame_EFortRarity> Rarity);
	TEnumAsByte<FortniteUI_EFortStoreState> GetPreviousState();
	int GetNumUnopenedCardPacksRemaining(class UFortCardPackItemDefinition* PackType);
	bool GetCard(int CardIdx, struct FCard* ResultOut);
	void GetAccountItems(TArray<class UFortAccountItemDefinition*> AccountItemDefinitions, TArray<class UFortAccountItem*>* AccountItems);
	void FreshenCache();
	void FireInteractionAnalyticsEvent(const struct FString& Interaction, const struct FString& Details);
	bool ExitWebPayment();
	bool ExitSummary();
	bool ExitCurrencyStore();
	bool ExitCardPackStore();
	bool ErrorOccurred(const struct FString& ErrorAnalytics);
	bool EnterCurrencyStore(const struct FString& AttemptedPurchaseCardPackId);
	bool EnterCardPackStore();
	void DismissError();
	bool CardPackOpeningComplete();
	bool CardPackDestroyComplete();
	bool CardFrontRevealComplete();
	bool CardFlipComplete();
	bool CardExitComplete();
	bool CardEntryComplete();
	bool CardBackRevealComplete();
	bool CardAddedToSummaryComplete();
};

// Class FortniteUI.FortUIMessageManager
// 0x0024 (FullSize[0x0040] - InheritedSize[0x001C])
class UFortUIMessageManager : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnMessageAvailable;                                        // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UFortUIMessageItemWidget*>            MessageQueue;                                              // 0x0028(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UFortUIMessageItemWidget*>            CurrentlyDisplayedMessages;                                // 0x0034(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortUIMessageManager");
		return ptr;
	}



	void HandleMessageRemoved(class UFortUIMessageItemWidget* MessageItem);
	void HandleMessageDisplayed(class UFortUIMessageItemWidget* MessageItem);
	int GetNumDisplayedItems();
	class UFortUIMessageItemWidget* GetNextMessageInQueue();
	void AddMessageItem(class UFortUIMessageItemWidget* MessageItem);
};

// Class FortniteUI.FortUIStateTrigger
// 0x0004 (FullSize[0x0020] - InheritedSize[0x001C])
class UFortUIStateTrigger : public UObject
{
public:
	TEnumAsByte<FortniteUI_EFortUIState>               UIState;                                                   // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AY4E[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortUIStateTrigger");
		return ptr;
	}



	bool IsLoggedIn();
	bool EvalBP();
};

// Class FortniteUI.FortUIStateTrigger_InGame
// 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
class UFortUIStateTrigger_InGame : public UFortUIStateTrigger
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortUIStateTrigger_InGame");
		return ptr;
	}



};

// Class FortniteUI.FortUIStateTrigger_Login
// 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
class UFortUIStateTrigger_Login : public UFortUIStateTrigger
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortUIStateTrigger_Login");
		return ptr;
	}



};

// Class FortniteUI.FortActionHandlerPanel
// 0x0024 (FullSize[0x0268] - InheritedSize[0x0244])
class UFortActionHandlerPanel : public UFortUserWidget
{
public:
	bool                                               bAutoActivate;                                             // 0x0244(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsActive;                                                 // 0x0245(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IV9M[0x2];                                     // 0x0246(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnPanelActivated;                                          // 0x0248(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             OnPanelDeactivated;                                        // 0x0258(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortActionHandlerPanel");
		return ptr;
	}



	void SetOnPanelDeactivated(const struct FScriptDelegate& OnDeactivatedHandler);
	void SetOnPanelActivated(const struct FScriptDelegate& OnActivatedHandler);
	void RemoveOnPanelDeactivated(class UObject* BoundObject);
	void RemoveOnPanelActivated(class UObject* BoundObject);
	void OnHandleAction(struct FEventReply* Result, bool* bPassThrough);
	void DeactivateActionHandler();
	void ActivateActionHandler();
};

// Class FortniteUI.FortConfirmationWindow
// 0x0050 (FullSize[0x02B8] - InheritedSize[0x0268])
class UFortConfirmationWindow : public UFortActionHandlerPanel
{
public:
	struct FFortDialogDescription                      CurrentDescription;                                        // 0x0268(0x0050) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortConfirmationWindow");
		return ptr;
	}



	void ShowConfirmation(const struct FFortDialogDescription& Description);
	void ProcessResult(TEnumAsByte<FortniteUI_EFortDialogResult> DialogResult);
	void OnShow();
	void OnKill();
	void KillConfirmation();
};

// Class FortniteUI.FortErrorDialog
// 0x000C (FullSize[0x0274] - InheritedSize[0x0268])
class UFortErrorDialog : public UFortActionHandlerPanel
{
public:
	TArray<struct FFortErrorInfo>                      ErrorInfo;                                                 // 0x0268(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortErrorDialog");
		return ptr;
	}



	void ResetErrorInfo();
	void OnRebuildDialog(int NewIndex);
	void DisplaySimpleError(const struct FText& ErrorMessage);
	void DisplayError(const struct FFortErrorInfo& ErrorInfo);
};

// Class FortniteUI.FortUIStateWidget
// 0x0000 (FullSize[0x0268] - InheritedSize[0x0268])
class UFortUIStateWidget : public UFortActionHandlerPanel
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortUIStateWidget");
		return ptr;
	}



	void OnExitState(TEnumAsByte<FortniteUI_EFortUIState> NextUIState);
	void OnEnterState(TEnumAsByte<FortniteUI_EFortUIState> PreviousUIState);
};

// Class FortniteUI.FortVerticalRibbon
// 0x000C (FullSize[0x0274] - InheritedSize[0x0268])
class UFortVerticalRibbon : public UFortActionHandlerPanel
{
public:
	TArray<class UWidget*>                             WidgetStack;                                               // 0x0268(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortVerticalRibbon");
		return ptr;
	}



	void PushContent(class UWidget* NewContent);
	void PopContent();
	class UWidget* GetTop();
	void _BPOnStackDepthChanged(int NewDepth);
};

// Class FortniteUI.FortActorIndicatorWidget
// 0x0028 (FullSize[0x026C] - InheritedSize[0x0244])
class UFortActorIndicatorWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData_E7P5[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      IndicatedActor;                                            // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     RelativeLocation;                                          // 0x024C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              MinScale;                                                  // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxScale;                                                  // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxDistance;                                               // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxScaleDistance;                                          // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bClampOnScreen;                                            // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8FBA[0x3];                                     // 0x0269(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortActorIndicatorWidget");
		return ptr;
	}



	void OnIndicatedActorSet();
};

// Class FortniteUI.FortItemWidget
// 0x001C (FullSize[0x0758] - InheritedSize[0x073C])
class UFortItemWidget : public UFortBaseButton
{
public:
	struct FScriptDelegate                             OnGetItemToCompareDelegate;                                // 0x073C(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EPQD[0x8];                                     // 0x074C(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                QuantityOverride;                                          // 0x0754(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortItemWidget");
		return ptr;
	}



	void SetOnGetItemToCompareDelegate(const struct FScriptDelegate& InDelegate);
	void SetItem(class UFortItem* InItem, int QuantityOverride);
	void OnGetItemToCompare__DelegateSignature(class UFortItem** ItemToCompare);
	void OnFortItemUpdated(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void OnFortItemInvalidated();
	void OnFortItemDestroyed();
	bool IsSlotted();
	bool IsSchematic();
	bool IsItemValid();
	bool IsInBackpackOverflow();
	bool IsEquipped();
	bool HasTertiaryCategory();
	bool HasSecondaryCategory();
	bool HasLevel();
	bool HasDurability();
	float GetType();
	struct FSlateBrush GetTertiaryCategoryTexture(TEnumAsByte<FortniteGame_EFortBrushSize> InBrushSize);
	int GetStackCount();
	struct FSlateBrush GetSecondaryCategoryTexture(TEnumAsByte<FortniteGame_EFortBrushSize> InBrushSize);
	TEnumAsByte<FortniteGame_EFortRarity> GetRarity();
	float GetPulse();
	int GetLevel();
	class UFortItem* GetItemToCompare();
	class UFortItem* GetItem();
	class UTexture* GetIconTexture(TEnumAsByte<FortniteGame_EFortBrushSize> InBrushSize);
	float GetIconScale();
	float GetDurability();
	struct FText GetDisplayName();
	struct FText GetDescription();
	int GetAmmoCount();
	void BPOnItemSet(class UFortItem* NewItem);
	void BPOnItemChanged();
};

// Class FortniteUI.FortBluGloCounter
// 0x0004 (FullSize[0x0248] - InheritedSize[0x0244])
class UFortBluGloCounter : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData_YUMF[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortBluGloCounter");
		return ptr;
	}



	void OnBluGloQuantityChanged(int Quantity);
};

// Class FortniteUI.FortButton
// 0x0024 (FullSize[0x0268] - InheritedSize[0x0244])
class UFortButton : public UFortUserWidget
{
public:
	struct FScriptMulticastDelegate                    ButtonClickedEvent;                                        // 0x0244(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bDisabled;                                                 // 0x0250(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JE60[0x3];                                     // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayText;                                               // 0x0254(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	int                                                INDEX;                                                     // 0x0260(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<FortniteUI_EFortButtonState>           PendingState;                                              // 0x0264(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TEnumAsByte<FortniteUI_EFortButtonState>           CurrentState;                                              // 0x0265(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TEnumAsByte<FortniteUI_EFortButtonState>           LastState;                                                 // 0x0266(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CKNC[0x1];                                     // 0x0267(0x0001) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortButton");
		return ptr;
	}



	void SetText(const struct FText& InText);
	void SetIndex(int InIndex);
	void SetDisabled(bool InDisable);
	void SetCurrentState(TEnumAsByte<FortniteUI_EFortButtonState> NewState);
	struct FText GetText();
	TEnumAsByte<FortniteUI_EFortButtonState> GetPendingState();
	int GetIndex();
	bool GetDisabled();
	TEnumAsByte<FortniteUI_EFortButtonState> GetCurrentState();
};

// Class FortniteUI.FortTabButton
// 0x0004 (FullSize[0x026C] - InheritedSize[0x0268])
class UFortTabButton : public UFortButton
{
public:
	unsigned char                                      UnknownData_X80Z[0x4];                                     // 0x0268(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortTabButton");
		return ptr;
	}



	void SetSelection(bool InSelected);
	bool IsSelected();
	void ClearSelection();
	void _BPOnSelectedChanged();
};

// Class FortniteUI.FortCapturePointWidget
// 0x0010 (FullSize[0x0254] - InheritedSize[0x0244])
class UFortCapturePointWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData_8T4Q[0x10];                                    // 0x0244(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortCapturePointWidget");
		return ptr;
	}



	void OnCapturePointDataChanged(bool bActivated, bool bLocked, float CapturePercentage, TEnumAsByte<FortniteGame_ECaptureState> CaptureState, TEnumAsByte<FortniteGame_EFortTeam> ControllingTeam);
};

// Class FortniteUI.FortChatContainer
// 0x0008 (FullSize[0x024C] - InheritedSize[0x0244])
class UFortChatContainer : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData_Z3HG[0x8];                                     // 0x0244(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortChatContainer");
		return ptr;
	}



	void SetNativeWidgetHost(class UNativeWidgetHost* InNativeWidgetHost);
	void AttachChatWindowToNativeWidget();
};

// Class FortniteUI.FortItemCollectorWidget
// 0x0008 (FullSize[0x024C] - InheritedSize[0x0244])
class UFortItemCollectorWidget : public UFortUserWidget
{
public:
	class ABuildingItemCollectorActor*                 ItemCollector;                                             // 0x0244(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YI8P[0x4];                                     // 0x0248(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortItemCollectorWidget");
		return ptr;
	}



	void OnItemCollectorValuesChanged(TArray<int>* DepositAmounts, TArray<int>* DepositGoals);
	void OnItemCollectorStateChanged(TEnumAsByte<FortniteGame_EFortItemCollectorState> ItemCollectorState);
	void OnItemCollectorChanged(class ABuildingItemCollectorActor* OutItemCollector);
};

// Class FortniteUI.FortListItem
// 0x0000 (FullSize[0x0244] - InheritedSize[0x0244])
class UFortListItem : public UFortUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortListItem");
		return ptr;
	}



	void ToggleExpansion();
	void SetSelected(bool bSelected);
	void SetIndexInList(int InIndexInList);
	void SetData(class UObject* InData);
	void Private_OnExpanderArrowShiftClicked();
	bool IsItemExpanded();
	TEnumAsByte<Slate_ESelectionMode> GetSelectionMode();
	int GetIndentLevel();
	int DoesItemHaveChildren();
};

// Class FortniteUI.FortLoginRewardItem
// 0x000C (FullSize[0x0250] - InheritedSize[0x0244])
class UFortLoginRewardItem : public UFortUserWidget
{
public:
	class UFortItem*                                   FortItem;                                                  // 0x0244(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                LoginRewardDay;                                            // 0x0248(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPlayClaimAnimation;                                       // 0x024C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bHighValueItem;                                            // 0x024D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bUnclaimedItem;                                            // 0x024E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_97Q7[0x1];                                     // 0x024F(0x0001) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortLoginRewardItem");
		return ptr;
	}



	void SetUnclaimedItem(bool bInUnclaimedItem);
	void SetPlayClaimAnimation(bool bInPlayClaimAnimation);
	void SetLoginRewardDay(int InLoginRewardDay);
	void SetHighValueItem(bool bInHighValueItem);
	void SetFortItem(class UFortItem* InFortItem);
	void CreateItemTooltip();
};

// Class FortniteUI.FortLoginRewards
// 0x0038 (FullSize[0x027C] - InheritedSize[0x0244])
class UFortLoginRewards : public UFortUserWidget
{
public:
	int                                                PageSize;                                                  // 0x0244(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumRows;                                                   // 0x0248(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumColumns;                                                // 0x024C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CurrentPage;                                               // 0x0250(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItem*                                   RewardClaimed;                                             // 0x0254(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MinutesUntilNextReward;                                    // 0x0258(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPageWrap;                                                 // 0x025C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1T4W[0x3];                                     // 0x025D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      RewardItemWidgetType;                                      // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMcpProfileAccount*                      LocalMcpProfile;                                           // 0x0264(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PUMU[0x14];                                    // 0x0268(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortLoginRewards");
		return ptr;
	}



	void SetGridPanel(class UUniformGridPanel* InGridPanel);
	void HandlePageRight();
	void HandlePageLeft();
	int GetCurrentPage();
	int GetCurrentLoginDays();
	void EnablePaging(TEnumAsByte<FortniteUI_EPageDirection> Direction);
	void DisablePaging(TEnumAsByte<FortniteUI_EPageDirection> Direction);
	class UFortLoginRewardItem* CreateLoginRewardWidget();
};

// Class FortniteUI.FortLoginWindow
// 0x0028 (FullSize[0x026C] - InheritedSize[0x0244])
class UFortLoginWindow : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData_IO66[0x24];                                    // 0x0244(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bRememberMe;                                               // 0x0268(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1SVK[0x3];                                     // 0x0269(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortLoginWindow");
		return ptr;
	}



	bool ShouldShowLoginButton(const struct FString& InEmail, const struct FString& InPassword);
	void OnLoginStatusChanged(TEnumAsByte<FortniteUI_EUILoginStatus> NewStatus, const struct FText& InMessage);
	void Login(const struct FString& InEmail, const struct FString& InPassword, bool bRemember);
	bool IsRememberMeChecked();
	struct FText GetLoginStatusText();
	struct FString GetDefaultEmail();
};

// Class FortniteUI.FortMovieWidget
// 0x0004 (FullSize[0x0248] - InheritedSize[0x0244])
class UFortMovieWidget : public UFortUserWidget
{
public:
	class UMediaPlayer*                                MediaPlayer;                                               // 0x0244(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortMovieWidget");
		return ptr;
	}



	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	void RequestStopMovie();
	void RequestPlayMovie();
	class UMediaPlayer* GetMediaPlayer();
};

// Class FortniteUI.FortPvPMinimapWidget
// 0x0010 (FullSize[0x0254] - InheritedSize[0x0244])
class UFortPvPMinimapWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData_41H8[0x10];                                    // 0x0244(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortPvPMinimapWidget");
		return ptr;
	}



};

// Class FortniteUI.FortSocialItemWidget
// 0x0000 (FullSize[0x0244] - InheritedSize[0x0244])
class UFortSocialItemWidget : public UFortUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortSocialItemWidget");
		return ptr;
	}



	void SetSocialItem(class UFortSocialItem* InSocialItem);
};

// Class FortniteUI.FortStorefront
// 0x0000 (FullSize[0x0244] - InheritedSize[0x0244])
class UFortStorefront : public UFortUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortStorefront");
		return ptr;
	}



};

// Class FortniteUI.FortTutorialOverlay
// 0x0010 (FullSize[0x0254] - InheritedSize[0x0244])
class UFortTutorialOverlay : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData_JHWG[0x10];                                    // 0x0244(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortTutorialOverlay");
		return ptr;
	}



	void SetupNativeWidgets(class UNamedSlot* NativeSlot);
	void SetTutorialNotificationActive(bool bActive);
	void OpenBannerMenu();
};

// Class FortniteUI.FortTutorialScreen
// 0x0000 (FullSize[0x0244] - InheritedSize[0x0244])
class UFortTutorialScreen : public UFortUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortTutorialScreen");
		return ptr;
	}



	void PlayerFinished();
	void OnShowTutorialScreen(class UTexture2D* Image);
	void OnHideTutorialScreen();
};

// Class FortniteUI.FortUIManagerWidget
// 0x010C (FullSize[0x0350] - InheritedSize[0x0244])
class UFortUIManagerWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData_7FPM[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnBeginSpokenDialog;                                       // 0x0248(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEndSpokenDialog;                                         // 0x0254(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TAssetPtr<class UClass>                            StateWidgets[0x8];                                         // 0x0260(0x00C0) (Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TEnumAsByte<FortniteUI_EFortUIState>               CurrentState;                                              // 0x0320(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TEnumAsByte<FortniteUI_EFortUIState>               PendingState;                                              // 0x0321(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P2K0[0x2];                                     // 0x0322(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFortUIStateWidget*                          CurrentStateWidget;                                        // 0x0324(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      PendingStateWidgetClass;                                   // 0x0328(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortUIStateTrigger*>                 StateTriggers;                                             // 0x032C(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UFortActionHandlerPanel*>             ActionHandlerPanels;                                       // 0x0338(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FTQ0[0x4];                                     // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFortNotificationQueue*                      UINotificationQueue;                                       // 0x0348(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsStateContentDisplayed;                                  // 0x034C(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SYTP[0x3];                                     // 0x034D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortUIManagerWidget");
		return ptr;
	}



	void UpdateStateWidgetContent(class UFortUIStateWidget* StateWidget);
	void UnregisterStateTrigger(class UFortUIStateTrigger* TriggerToRemove);
	void STATIC_ShowErrorDialog(class UObject* WorldContextObject, const struct FText& OperationDesc, const struct FText& DisplayMessage, const struct FString& ErrorCode);
	void SetStateContentDisplayed(bool bDisplay);
	void RegisterStateTrigger(class UFortUIStateTrigger* StateTrigger);
	void OnStateStarted();
	void OnShowConfirmation(const struct FFortDialogDescription& Description);
	void OnEndSpokenDialog__DelegateSignature();
	void OnBeginSpokenDialog__DelegateSignature(class UTexture2D* Image, const struct FText& Title);
	void STATIC_KillConfirmationDialog(class UObject* WorldContextObject);
	bool IsStateContentDisplayed();
	class UFortUIManagerWidget* STATIC_GetUIManagerWidget(class UObject* WorldContextObject);
	class UFortUIStateWidget* GetCurrentUIStateWidget();
	void DisplayStateContent(bool bDisplay);
	void DisplayErrorDialog(const struct FFortErrorInfo& Info);
	class UFortUIStateTrigger* STATIC_CreateUIStateTrigger(class UClass* Class, class UObject* WorldContextObject);
	TEnumAsByte<FortniteUI_EFortUIState> _BPGetCurrentUIState();
};

// Class FortniteUI.FortUIMessageItemWidget
// 0x0028 (FullSize[0x026C] - InheritedSize[0x0244])
class UFortUIMessageItemWidget : public UFortUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnMessageDisplayed;                                        // 0x0244(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMessageRemoved;                                          // 0x0250(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FName                                       MessageID;                                                 // 0x025C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IdleDisplayTime;                                           // 0x0264(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoved;                                                  // 0x0268(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Z0F1[0x3];                                     // 0x0269(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortUIMessageItemWidget");
		return ptr;
	}



	void StackItem(class UFortUIMessageItemWidget* StackedItem);
	void RequestRemove();
	void OnRemoveRequested();
};

// Class FortniteUI.FortVaultDetailsWidget
// 0x0010 (FullSize[0x0254] - InheritedSize[0x0244])
class UFortVaultDetailsWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData_T2RH[0x10];                                    // 0x0244(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortVaultDetailsWidget");
		return ptr;
	}



	void SetItemForCommand(class UFortItem* InItem, TEnumAsByte<FortniteUI_EVaultCommandType> InCommand, bool bForce);
	void SetItem(class UFortItem* InItem, bool bForce);
	bool HasPendingUpgrade();
	bool HasPendingCustomization();
	void GetProperties(TArray<struct FVaultPropertyInfo>* Properties, bool bWithUpgradeData);
	struct FVaultPropertyInfo GetMaxLevelProperty();
	struct FVaultPropertyInfo GetLevelProperty();
	class UFortItem* GetItem();
	struct FVaultDetailsInfo GetInfo();
	void GetAlterationSlots(TArray<struct FVaultAlterationInfo>* Slots);
	void _BPOnNewItemSet();
};

// Class FortniteUI.FortVaultWidget
// 0x0000 (FullSize[0x0244] - InheritedSize[0x0244])
class UFortVaultWidget : public UFortUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.FortVaultWidget");
		return ptr;
	}



	bool IsSupportedSortType(TEnumAsByte<FortniteUI_EVaultContentSortType> InSortType, TEnumAsByte<FortniteUI_EVaultContentType> InContentType, TEnumAsByte<FortniteGame_EFortInventoryFilter> InContentSubType);
	void GetItemList(TArray<class UFortAccountItem*>* OutItemList, TEnumAsByte<FortniteUI_EVaultContentType> InContentType, const struct FVaultContentDetails& Details);
	void _BPOnContentUpdated();
};

// Class FortniteUI.SocialStyle
// 0x4E70 (FullSize[0x4E8C] - InheritedSize[0x001C])
class USocialStyle : public UDataAsset
{
public:
	struct FFriendsAndChatStyle                        Style;                                                     // 0x001C(0x4E70) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FortniteUI.SocialStyle");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
