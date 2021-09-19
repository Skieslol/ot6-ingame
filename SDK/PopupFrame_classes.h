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

// WidgetBlueprintGeneratedClass PopupFrame.PopupFrame_C
// 0x0008 (FullSize[0x01C0] - InheritedSize[0x01B8])
class UPopupFrame_C : public UUserWidget
{
public:
	class UImage*                                      Frame;                                                     // 0x01B8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Pattern;                                                   // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PopupFrame.PopupFrame_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
