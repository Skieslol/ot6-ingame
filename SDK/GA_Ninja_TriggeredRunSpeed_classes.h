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

// BlueprintGeneratedClass GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C
// 0x009C (FullSize[0x0778] - InheritedSize[0x06DC])
class UGA_Ninja_TriggeredRunSpeed_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                TC_TriggeredTag;                                           // 0x06E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       Effects_Location_Bone3;                                    // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       Effects_Location_Bone4;                                    // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       Effects_Location_Bone2;                                    // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       Effects_Location_Bone1;                                    // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_RunTrails;                                               // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayEventData                          EventPayload;                                              // 0x070C(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                             // 0x0764(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventActivation;                                           // 0x076C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Ninja_C*                         NinjaPawn;                                                 // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C");
		return ptr;
	}



	void ApplyRunTrails(class UParticleSystem* Emitter_Template, class USceneComponent* Scene_Component);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
