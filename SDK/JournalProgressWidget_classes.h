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

// WidgetBlueprintGeneratedClass JournalProgressWidget.JournalProgressWidget_C
// 0x0014 (FullSize[0x0258] - InheritedSize[0x0244])
class UJournalProgressWidget_C : public UFortUserWidget
{
public:
	class UImage*                                      _Image__Checkbox;                                          // 0x0244(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UProgressBar*                                _ProgressBar__Quest_Progress;                              // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetSwitcher*                             _Switcher__Display_Mode;                                   // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Progress_Value;                                     // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  TextBlock_10432;                                           // 0x0254(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass JournalProgressWidget.JournalProgressWidget_C");
		return ptr;
	}



	void Update(int Required, int Achieved);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
