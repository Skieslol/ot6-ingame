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

// GameplayAbilityBlueprintGeneratedClass GA_AirStrike.GA_AirStrike_C
// 0x0184 (FullSize[0x0860] - InheritedSize[0x06DC])
class UGA_AirStrike_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                                // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EventComplete;                                             // 0x06E4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventActivation;                                           // 0x06EC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEventData                          EventData;                                                 // 0x06F4(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AbilityMultiplier;                                         // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     BombInitLocation;                                          // 0x0750(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    Prj_Spawn_Direction;                                       // 0x075C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Bomb_Delay;                                                // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      Prj_Bomb;                                                  // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EC_Explode;                                                // 0x0770(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayEffectContainerSpec            EC_Explode_Return;                                         // 0x0778(0x0064) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Prj_Gravity;                                               // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                                  Bomb_Init_Transform;                                       // 0x07E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                ForLoopCounter;                                            // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FVector>                             Current_Unprocessed_Positions_Array;                       // 0x0814(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AFortAbilityDecoTool*                        DecoTool;                                                  // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Explosion_Radius;                                          // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              BombHeightOffset;                                          // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WQQW[0x4];                                     // 0x082C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  NewVar;                                                    // 0x0830(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_AirStrike.GA_AirStrike_C");
		return ptr;
	}



	struct FTransform GetCustomAbilitySourceTransform();
	void GetAttributeValue();
	void OnFailed_FD8DF5D249A3F015BFB1F0A559B298F9();
	void OnCommitted_FD8DF5D249A3F015BFB1F0A559B298F9();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_AirStrike(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
