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

// WidgetBlueprintGeneratedClass JournalEntry.JournalEntry_C
// 0x002C (FullSize[0x0768] - InheritedSize[0x073C])
class UJournalEntry_C : public UFortBaseButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x073C(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      _Image__Background;                                        // 0x0740(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Quest_Name__HR_;                                   // 0x0744(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Top_Bevel;                                         // 0x0748(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Quest_Name;                                         // 0x074C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UFortBangWrapper*                            FortBangWrapper;                                           // 0x0750(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      ImageAlternabang;                                          // 0x0754(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UJournalProgressWidget_C*                    JournalProgressWidget;                                     // 0x0758(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      QuestIcon_Fill;                                            // 0x075C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      QuestIcon_Shadow;                                          // 0x0760(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UFortQuestItem*                              QuestItem;                                                 // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass JournalEntry.JournalEntry_C");
		return ptr;
	}



	void Setup(class UFortQuestItem* Quest);
	void UpdateProgress();
	void Construct();
	void HandleSelectedChanged(class UFortBaseButton* Button, bool SELECTED);
	void ExecuteUbergraph_JournalEntry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
