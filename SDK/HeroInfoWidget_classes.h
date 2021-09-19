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

// WidgetBlueprintGeneratedClass HeroInfoWidget.HeroInfoWidget_C
// 0x009D (FullSize[0x02E1] - InheritedSize[0x0244])
class UHeroInfoWidget_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      _Image__Background;                                        // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Class_Icon;                                        // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Hero_Portrait;                                     // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Top_Bevel;                                         // 0x0254(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UProgressBar*                                _ProgressBar__Hero_XP;                                     // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Hero_Level;                                         // 0x025C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Hero_Name;                                          // 0x0260(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__XP_Until_Next;                                      // 0x0264(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHorizontalBox*                              HorizontalBoxCoreStats;                                    // 0x0268(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHorizontalBox*                              HorizontalBoxCoreStats2;                                   // 0x026C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      ImageBackground2;                                          // 0x0270(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      ImageClassIcon2;                                           // 0x0274(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      ImageHeroPortrait2;                                        // 0x0278(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      ImageHR;                                                   // 0x027C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      ImageHR2;                                                  // 0x0280(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      ImageTopBevel2;                                            // 0x0284(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UOverlay*                                    OverlayLargeFormat;                                        // 0x0288(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UOverlay*                                    OverlaySmallFormat;                                        // 0x028C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UProgressBar*                                ProgressBarHeroXP2;                                        // 0x0290(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetSwitcher*                             SwitcherFormats;                                           // 0x0294(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  TextHeroLevel2;                                            // 0x0298(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  TextHeroName2;                                             // 0x029C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FHeroUIData                                 HeroData;                                                  // 0x02A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnHeroSelected;                                            // 0x02B8(0x0010) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               Compact_Version;                                           // 0x02C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_G91K[0x3];                                     // 0x02C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       XPUntilNext;                                               // 0x02C8(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     Hero_ID;                                                   // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	bool                                               IsCurrentHero;                                             // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeroInfoWidget.HeroInfoWidget_C");
		return ptr;
	}



	void OnHeroStatsChanged();
	void Refresh_Hero_ID();
	void Set_As_Current_Hero(bool IsSelected);
	void On_Player_Data_Updated();
	class UWidget* Get_XP_Progress_Tooltip();
	void Refresh_Format();
	void Bind_Delegates();
	void Refresh_Hero_Info();
	void Refresh_Hero_XP();
	void Refresh_Hero_Stats();
	void Update();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HeroInfoWidget(int EntryPoint);
	void OnHeroSelected__DelegateSignature(const struct FString& Hero_ID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
