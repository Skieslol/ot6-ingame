﻿#pragma once

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

// BlueprintGeneratedClass Trap_Wall_Spikes.Trap_Wall_Spikes_C
// 0x001C (FullSize[0x0A0C] - InheritedSize[0x09F0])
class ATrap_Wall_Spikes_C : public ABuildingTrapWall
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x09F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               TriggerComponent;                                          // 0x09F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             Root;                                                      // 0x09F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USoundCue*                                   Activate_Sound_Cue;                                        // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundCue*                                   Placed_Sound_Cue;                                          // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundCue*                                   Explode_Sound_Cue;                                         // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundCue*                                   Trap_Fire_Sound_Cue;                                       // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Wall_Spikes.Trap_Wall_Spikes_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnPlaced();
	void OnFinishedBuilding();
	void OnReloadEnd();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void ExecuteUbergraph_Trap_Wall_Spikes(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
