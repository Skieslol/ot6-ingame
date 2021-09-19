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

// WidgetBlueprintGeneratedClass Outpost_CanEditRow.Outpost_CanEditRow_C
// 0x0010 (FullSize[0x0254] - InheritedSize[0x0244])
class UOutpost_CanEditRow_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UButtonIconText_C*                           CanEditButton;                                             // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class AFortPlayerStateOutpost*                     Player;                                                    // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFortPlayerStateOutpost*                     OutpostOwner;                                              // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Outpost_CanEditRow.Outpost_CanEditRow_C");
		return ptr;
	}



	void Init(class AFortPlayerStateOutpost* InPlayer, class AFortPlayerStateOutpost* InOutpostOwner);
	void BndEvt__CanEditButton_K2Node_ComponentBoundEvent_278_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED);
	void ExecuteUbergraph_Outpost_CanEditRow(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
