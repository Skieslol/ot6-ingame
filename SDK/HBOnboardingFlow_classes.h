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

// BlueprintGeneratedClass HBOnboardingFlow.HBOnboardingFlow_C
// 0x006C (FullSize[0x02AC] - InheritedSize[0x0240])
class AHBOnboardingFlow_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0244(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class AFortPlayerController*                       PlayerController;                                          // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UFortQuestManager*                           QuestManager;                                              // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UFortQuestItemDefinition*                    OnboardingQuest;                                           // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UFortQuestItemDefinition*                    OnboardingAfterOutpostQuest;                               // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FDataTableRowHandle                         CompleteZoneObjective;                                     // 0x0258(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         NameHomebaseObjective;                                     // 0x0264(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         BuildHeroBuildingObjective;                                // 0x0270(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         RecruitHeroObjective;                                      // 0x027C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortQuestItem*                              OnboardingQuestItem;                                       // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                                     NotificationPadding;                                       // 0x028C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         PlaySatelliteCineObjective;                                // 0x029C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortAccountItemDefinition*                  ShowNewsToken;                                             // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HBOnboardingFlow.HBOnboardingFlow_C");
		return ptr;
	}



	void HandleMcpFailure();
	void UpdateVariableCache(bool* Success);
	void UserConstructionScript();
	void OnFailure_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnFailure_94AB314F4BAAB3CAC0FA5E83D4318BDC();
	void OnIgnored_94AB314F4BAAB3CAC0FA5E83D4318BDC();
	void OnSuccess_94AB314F4BAAB3CAC0FA5E83D4318BDC();
	void OnFailure_921F8E7C425863C1CDDED09C7FC5034D();
	void OnIgnored_921F8E7C425863C1CDDED09C7FC5034D();
	void OnSuccess_921F8E7C425863C1CDDED09C7FC5034D();
	void OnFailure_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251();
	void OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6();
	void OnStateEntered_E61814764FB8ECDF4EEF2091C594F00F();
	void OnStateEntered_674FF9564D47F83BDED1938B23B03D50();
	void OnStateEntered_13927B524921691ACA0068A46DD375D3();
	void StartPlaySatelliteCine();
	void UnloadCinHomebase();
	void StartRecruitHero();
	void StartBuildHeroBuilding();
	void StartNameHomebase();
	void HandleClientEvent_HomebasePersonalized(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void StartOnboardingZone();
	void StartFlow();
	void ExecuteUbergraph_HBOnboardingFlow(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
