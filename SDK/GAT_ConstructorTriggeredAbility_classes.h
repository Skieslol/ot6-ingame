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

// GameplayAbilityBlueprintGeneratedClass GAT_ConstructorTriggeredAbility.GAT_ConstructorTriggeredAbility_C
// 0x0060 (FullSize[0x0740] - InheritedSize[0x06E0])
class UGAT_ConstructorTriggeredAbility_C : public UGAT_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                          Event_Data;                                                // 0x06E4(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Constructor_C*                   ConstructorPlayerPawn;                                     // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GAT_ConstructorTriggeredAbility.GAT_ConstructorTriggeredAbility_C");
		return ptr;
	}



	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAT_ConstructorTriggeredAbility(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
