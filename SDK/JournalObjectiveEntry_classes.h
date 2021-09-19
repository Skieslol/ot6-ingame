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

// WidgetBlueprintGeneratedClass JournalObjectiveEntry.JournalObjectiveEntry_C
// 0x0010 (FullSize[0x0254] - InheritedSize[0x0244])
class UJournalObjectiveEntry_C : public UFortListItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Background;                                                // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UJournalProgressWidget_C*                    JournalProgressWidget;                                     // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  TaskName;                                                  // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass JournalObjectiveEntry.JournalObjectiveEntry_C");
		return ptr;
	}



	void Update(class UFortQuestObjectiveInfo* Objective);
	void UpdateProgress(class UFortQuestObjectiveInfo* Objective);
	void SetData(class UObject* InData);
	void ExecuteUbergraph_JournalObjectiveEntry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
