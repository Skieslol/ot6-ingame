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

// WidgetBlueprintGeneratedClass SlateContentCalloutMenu.SlateContentCalloutMenu_C
// 0x000D (FullSize[0x01C5] - InheritedSize[0x01B8])
class USlateContentCalloutMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortLegacySlateBridgeWidget*                _Slate_Widget__Menu_Content;                               // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USizeBox*                                    SizeBoxContent;                                            // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	TEnumAsByte<FortniteUI_EFortLegacySlateWidget>     SlateWidgetType;                                           // 0x01C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SlateContentCalloutMenu.SlateContentCalloutMenu_C");
		return ptr;
	}



	void Get_Size_Box(class USizeBox** Size_Box);
	void Construct();
	void ExecuteUbergraph_SlateContentCalloutMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
