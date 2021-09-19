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

// WidgetBlueprintGeneratedClass TheaterTooltip.TheaterTooltip_C
// 0x0018 (FullSize[0x025C] - InheritedSize[0x0244])
class UTheaterTooltip_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            EnterAnimation;                                            // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  Info;                                                      // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  PassengerInfo;                                             // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  Title_Text;                                                // 0x0254(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	int                                                TheaterIndex;                                              // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TheaterTooltip.TheaterTooltip_C");
		return ptr;
	}



	struct FText Get_Theater_Info();
	void SetPassengetInfoVisible(bool INDEX);
	struct FText Get_Region_Count();
	struct FText Get_Theater_Difficulty();
	struct FText Get_Theater_Name();
	void Set_Visibile(bool Visibile, const struct FText& InfoText);
	void Set_Theater_Index(int INDEX);
	void Construct();
	void HandleLocalPlayerStateChange(const struct FFortTeamMemberInfo& PlayerInfo);
	void ExecuteUbergraph_TheaterTooltip(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
