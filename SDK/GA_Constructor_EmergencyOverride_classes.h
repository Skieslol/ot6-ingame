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

// BlueprintGeneratedClass GA_Constructor_EmergencyOverride.GA_Constructor_EmergencyOverride_C
// 0x0010 (FullSize[0x0750] - InheritedSize[0x0740])
class UGA_Constructor_EmergencyOverride_C : public UGAT_ConstructorTriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0740(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                EventActivation;                                           // 0x0744(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_EmergencyOverride;                                      // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Constructor_EmergencyOverride.GA_Constructor_EmergencyOverride_C");
		return ptr;
	}



	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Constructor_EmergencyOverride(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
