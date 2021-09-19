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

// WidgetBlueprintGeneratedClass HeroListItemWidget.HeroListItemWidget_C
// 0x0020 (FullSize[0x075C] - InheritedSize[0x073C])
class UHeroListItemWidget_C : public UFortBaseButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x073C(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UHeroInfoWidget_C*                           HeroInfoWidget;                                            // 0x0740(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FString                                     HeroId;                                                    // 0x0744(0x000C) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    HeroSelected;                                              // 0x0750(0x0010) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeroListItemWidget.HeroListItemWidget_C");
		return ptr;
	}



	void Set_Selected(bool SELECTED);
	void Init_Selected();
	void Construct();
	void On_Hero_Selected(class UFortBaseButton* Button, bool SELECTED);
	void ExecuteUbergraph_HeroListItemWidget(int EntryPoint);
	void HeroSelected__DelegateSignature(const struct FString& Hero_ID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
