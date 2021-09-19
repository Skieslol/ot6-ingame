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

// WidgetBlueprintGeneratedClass BuildingTooltip.BuildingTooltip_C
// 0x0048 (FullSize[0x028C] - InheritedSize[0x0244])
class UBuildingTooltip_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      BuildingIcon;                                              // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBuildingLevelWidget_C*                      BuildingLevelWidget;                                       // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  DescriptionText;                                           // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  Gadget_Description_Text;                                   // 0x0254(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Gadget_Image;                                              // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  Gadget_Text;                                               // 0x025C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVerticalBox*                                GadgetInfo_VBox;                                           // 0x0260(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHorizontalBox*                              Level___Rating_Row;                                        // 0x0264(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UMovieWidget_C*                              MovieWidget;                                               // 0x0268(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USizeBox*                                    MovieWidget_SizeBox;                                       // 0x026C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class URatingWidget_C*                             RatingWidget_Self;                                         // 0x0270(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class URatingWidget_C*                             RatingWidget_Team;                                         // 0x0274(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  TitleText;                                                 // 0x0278(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FString                                     BuildingTemplateId;                                        // 0x027C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	class UHomeBaseBuilding*                           BuildingData;                                              // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BuildingTooltip.BuildingTooltip_C");
		return ptr;
	}



	void SetupTooltip(const struct FString& InBuildingTemplateId);
	class UFortItemDefinition* GetGadget(class UHomeBaseBuilding* Building);
	void Set_Visible(bool In_Visible);
	void Construct();
	void ExecuteUbergraph_BuildingTooltip(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
