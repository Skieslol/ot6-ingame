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

// WidgetBlueprintGeneratedClass PowerRequirement.PowerRequirement_C
// 0x0018 (FullSize[0x01D0] - InheritedSize[0x01B8])
class UPowerRequirement_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              PowerRequirementHB;                                        // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class URatingWidget_C*                             RatingWidget;                                              // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  TextBlock;                                                 // 0x01C4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	int                                                RecommendedPower;                                          // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                RequiredPower;                                             // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PowerRequirement.PowerRequirement_C");
		return ptr;
	}



	class UWidget* GenerateToolTipWidget();
	void SetUIForRequired(int PartyPower);
	void SetUIForRecommended(int PartyPower);
	void Update(int TeamPower);
	void SetRequirements(int RequiredPower, int RecommendedPower);
	void Construct();
	void HandleTeamPowerChanged(int TeamPower, int PersonalPower);
	void ExecuteUbergraph_PowerRequirement(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
