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

// BlueprintGeneratedClass HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C
// 0x0040 (FullSize[0x061C] - InheritedSize[0x05DC])
class AHBOnboarding_RecruitHero_C : public AFortTutorialNotification
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Ray_ONB_OutpostNew_440_Cue;                                // 0x05E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Ray_ONB_OutpostNew_430_Cue;                                // 0x05E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Ray_ONB_HomeBaseFlow_09_Cue;                               // 0x05E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Ray_ONB_HomeBaseFlow_08_Cue;                               // 0x05EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Ray_ONB_HomeBaseFlow_07_Cue;                               // 0x05F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x05F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FText                                       Recruit_Hero_1;                                            // 0x05F8(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Recruit_Hero_2;                                            // 0x0604(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Recruit_Hero_3;                                            // 0x0610(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnNotificationStart();
	void HandleClientEvent_RecruitHeroExpanded(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_HomebaseRecruitedHero(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_QuestJournalSelected(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_HeroesTabSelected(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void ExecuteUbergraph_HBOnboarding_RecruitHero(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
