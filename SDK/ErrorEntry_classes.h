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

// WidgetBlueprintGeneratedClass ErrorEntry.ErrorEntry_C
// 0x0030 (FullSize[0x0274] - InheritedSize[0x0244])
class UErrorEntry_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     Button_51;                                                 // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  Message;                                                   // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FText                                       ErrorText;                                                 // 0x0250(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FString                                     ErrorCode;                                                 // 0x025C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	struct FString                                     ErrorUrlBase;                                              // 0x0268(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ErrorEntry.ErrorEntry_C");
		return ptr;
	}



	void Construct();
	void BndEvt__Button_50_K2Node_ComponentBoundEvent_82_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_ErrorEntry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
