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

// WidgetBlueprintGeneratedClass HeroListWidget.HeroListWidget_C
// 0x001C (FullSize[0x01D4] - InheritedSize[0x01B8])
class UHeroListWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                _VerticalBox__Hero_List;                                   // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	TArray<class UHeroListItemWidget_C*>               Hero_Item_Widgets;                                         // 0x01C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       TabGroupName;                                              // 0x01CC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeroListWidget.HeroListWidget_C");
		return ptr;
	}



	void On_Hero_Deleted(bool Success);
	void On_Hero_Created(bool Success);
	void Set_Tab_Group_Name();
	void Refresh_Hero_List();
	void Update_Hero_List();
	void On_Hero_Selected(class UFortBaseButton* Hero_List_Item, bool SELECTED);
	void Construct();
	void ExecuteUbergraph_HeroListWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
