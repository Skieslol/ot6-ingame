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

// WidgetBlueprintGeneratedClass CommanderRewardsLevelBox.CommanderRewardsLevelBox_C
// 0x0015 (FullSize[0x0259] - InheritedSize[0x0244])
class UCommanderRewardsLevelBox_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Background_Image;                                          // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  Level_Text;                                                // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWrapBox*                                    RewardsWrapBox;                                            // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	int                                                InLevel;                                                   // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               isNextLevel;                                               // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommanderRewardsLevelBox.CommanderRewardsLevelBox_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_CommanderRewardsLevelBox(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
