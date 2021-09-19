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

// BlueprintGeneratedClass AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C
// 0x0061 (FullSize[0x06A1] - InheritedSize[0x0640])
class AAbilityDecoTool_AirStrike_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0640(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             FortPlayerPawn;                                            // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayAttribute                          firingRangeSubBuilding3;                                   // 0x0648(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                PowerLevel;                                                // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FAirStrikeLeveledPatterns                   DONOTEDIT_LeveledAirStrikeArrays;                          // 0x0650(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Current_Air_Strike_Sub_Tier_Selection;                     // 0x065C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                Current_Level_Max;                                         // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FVector>                             Current_Unprocessed_Positions_Array;                       // 0x0664(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             Position_Array_Cleaned_of_duplicates;                      // 0x0670(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Duplicate_Positions;                                       // 0x067C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Double_Entries;                                            // 0x0688(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Spacing_Between_the_Impacts;                               // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFortDecoHelper*                             FortDecoHelper;                                            // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                Old_Power_Level;                                           // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Pattern_Needs_to_change;                                   // 0x06A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C");
		return ptr;
	}



	void PopulatePositionArrays();
	void UserConstructionScript();
	void BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void ReceiveBeginPlay();
	void BPOnEquip(class AFortWeapon* OldWeapon);
	void BPOnUnEquip();
	void BPOnSetDecoObjectPreview(class AFortDecoHelper* FortDecoHelper);
	void ExecuteUbergraph_AbilityDecoTool_AirStrike(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
