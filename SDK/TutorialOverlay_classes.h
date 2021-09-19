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

// WidgetBlueprintGeneratedClass TutorialOverlay.TutorialOverlay_C
// 0x000C (FullSize[0x0260] - InheritedSize[0x0254])
class UTutorialOverlay_C : public UFortTutorialOverlay
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0254(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                                  NativeWidgets;                                             // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTutorialScreen_C*                           TutorialScreen;                                            // 0x025C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialOverlay.TutorialOverlay_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_TutorialOverlay(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
