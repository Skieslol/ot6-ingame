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

// WidgetBlueprintGeneratedClass BuildingLevelWidget.BuildingLevelWidget_C
// 0x0019 (FullSize[0x025D] - InheritedSize[0x0244])
class UBuildingLevelWidget_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Icon;                                                      // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	TArray<struct FFortMultiSizeBrush>                 StarIcon;                                                  // 0x024C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Level;                                                     // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	TEnumAsByte<FortniteGame_EFortBrushSize>           Brush_Size;                                                // 0x025C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BuildingLevelWidget.BuildingLevelWidget_C");
		return ptr;
	}



	void Update();
	void Set_Brush_Size(TEnumAsByte<FortniteGame_EFortBrushSize> New_Size);
	void Set_Level(int New_Level);
	void Construct();
	void ExecuteUbergraph_BuildingLevelWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
