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

// BlueprintGeneratedClass GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C
// 0x0031 (FullSize[0x02DD] - InheritedSize[0x02AC])
class AGCN_TakerMarkedForDeath_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    OverHeadEffect;                                            // 0x02B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UFortMiniMapComponent*                       MiniMapCrosshair;                                          // 0x02B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UFortMiniMapComponent*                       MiniMapIconBackground;                                     // 0x02B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FFortFeedbackHandle                         TakerFeedbackEvent;                                        // 0x02BC(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TakerFeedbackRepeatDelay;                                  // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              TakerFeedbackInitialDelay;                                 // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                TC_GameplayStatusStun;                                     // 0x02D4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlayerIsStunned;                                           // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SoulSuckCheck();
	void ExecuteUbergraph_GCN_TakerMarkedForDeath(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
