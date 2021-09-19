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

// WidgetBlueprintGeneratedClass JournalCategoryWidget.JournalCategoryWidget_C
// 0x001C (FullSize[0x0260] - InheritedSize[0x0244])
class UJournalCategoryWidget_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortListView*                               EntryList;                                                 // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           ExpanderButton;                                            // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UFortQuestCategory*                          QuestCategory;                                             // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnItemSelected;                                            // 0x0254(0x0010) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass JournalCategoryWidget.JournalCategoryWidget_C");
		return ptr;
	}



	void ClearSelection();
	class UWidget* On_EntryList_GenerateRow(class UObject* Item);
	void Construct();
	void BndEvt__EntryList_K2Node_ComponentBoundEvent_467_ListViewEvent__DelegateSignature(class UObject* Item);
	void BndEvt__ExpanderButton_K2Node_ComponentBoundEvent_78_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED);
	void ExecuteUbergraph_JournalCategoryWidget(int EntryPoint);
	void OnItemSelected__DelegateSignature(class UJournalCategoryWidget_C* CategoryWidget, class UFortQuestItem* QuestItem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
