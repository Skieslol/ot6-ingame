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

// WidgetBlueprintGeneratedClass CommanderRewardsShell.CommanderRewardsShell_C
// 0x0014 (FullSize[0x0258] - InheritedSize[0x0244])
class UCommanderRewardsShell_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  Max_Text;                                                  // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHorizontalBox*                              Rewards_HBox;                                              // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	int                                                StartLevel;                                                // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                EndLevel;                                                  // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommanderRewardsShell.CommanderRewardsShell_C");
		return ptr;
	}



	void CreateLevelBox(int InLevel, bool isFirstLevel);
	void Init();
	void Construct();
	void ExecuteUbergraph_CommanderRewardsShell(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
