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

// WidgetBlueprintGeneratedClass SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C
// 0x000D (FullSize[0x0275] - InheritedSize[0x0268])
class USlateContent_ActionHandlerPanel_C : public UFortActionHandlerPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0268(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortLegacySlateBridgeWidget*                _Slate_Widget__Panel_Content;                              // 0x026C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USizeBox*                                    SlateSizeBox;                                              // 0x0270(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	bool                                               CloseOnEscape;                                             // 0x0274(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C");
		return ptr;
	}



	void SetSizeBoxOverrides(float InWidth, float InHeight);
	void OnHandleAction(struct FEventReply* Result, bool* bPassThrough);
	void InitializeSlateContent(TEnumAsByte<FortniteUI_EFortLegacySlateWidget> Slate_Widget_Type);
	void Construct();
	void HandleOnSlateWidgetClosed();
	void ExecuteUbergraph_SlateContent_ActionHandlerPanel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
