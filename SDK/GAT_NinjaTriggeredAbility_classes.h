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

// BlueprintGeneratedClass GAT_NinjaTriggeredAbility.GAT_NinjaTriggeredAbility_C
// 0x0060 (FullSize[0x0740] - InheritedSize[0x06E0])
class UGAT_NinjaTriggeredAbility_C : public UGAT_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class APlayerPawn_Ninja_C*                         NinjaPlayerPawn;                                           // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayEventData                          Event_Data;                                                // 0x06E8(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GAT_NinjaTriggeredAbility.GAT_NinjaTriggeredAbility_C");
		return ptr;
	}



	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAT_NinjaTriggeredAbility(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
