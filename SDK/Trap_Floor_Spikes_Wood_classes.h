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

// BlueprintGeneratedClass Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C
// 0x0020 (FullSize[0x0A10] - InheritedSize[0x09F0])
class ATrap_Floor_Spikes_Wood_C : public ABuildingTrapFloor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x09F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Trigger;                                                   // 0x09F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             Root;                                                      // 0x09F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USoundCue*                                   Place_Trap_Sound;                                          // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundCue*                                   Trap_Active_Sound;                                         // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundCue*                                   Trap_Fire_Sound;                                           // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundCue*                                   Reload_Sound;                                              // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundCue*                                   Trap_Explode_Sound;                                        // 0x0A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnPlaced();
	void OnFinishedBuilding();
	void OnOutOfDurability();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_Trap_Floor_Spikes_Wood(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
