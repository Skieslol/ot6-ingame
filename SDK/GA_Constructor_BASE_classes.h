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

// BlueprintGeneratedClass GA_Constructor_BASE.GA_Constructor_BASE_C
// 0x00D8 (FullSize[0x07B4] - InheritedSize[0x06DC])
class UGA_Constructor_BASE_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                          EventData;                                                 // 0x06E0(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Constructor_C*                   ConstructorPawn;                                           // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EventActivation;                                           // 0x073C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                M_PlaceBase;                                               // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  CuePlacement;                                              // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  CueActivation;                                             // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_FullyContained;                                         // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_FullyContained;                                         // 0x0754(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortAbilityDecoTool*                        DecoTool;                                                  // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FAbilityToolSpawnParameters                 SpawnParameters;                                           // 0x0770(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_CardioFeedbackLoop;                                     // 0x0790(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_CardioFeedbackLoop;                                     // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              HealPerSecond;                                             // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_GrantDmgReflection;                                     // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Constructor_BASE.GA_Constructor_BASE_C");
		return ptr;
	}



	void OnCancelled_448313A941E0C180B5FAED9820171140();
	void OnInterrupted_448313A941E0C180B5FAED9820171140();
	void OnComplete_448313A941E0C180B5FAED9820171140();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Constructor_BASE(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
