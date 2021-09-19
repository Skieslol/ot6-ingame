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

// BlueprintGeneratedClass B_AirStrike_Placement.B_AirStrike_Placement_C
// 0x000C (FullSize[0x0950] - InheritedSize[0x0944])
class AB_AirStrike_Placement_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0944(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              BombHeightOffset;                                          // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UGA_AirStrike_C*                             AirStrikeAbility;                                          // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass B_AirStrike_Placement.B_AirStrike_Placement_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_AirStrike_Placement(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
