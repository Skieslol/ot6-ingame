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

// WidgetBlueprintGeneratedClass LeaveButton.LeaveButton_C
// 0x0019 (FullSize[0x025D] - InheritedSize[0x0244])
class ULeaveButton_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UButtonIconText_C*                           _Button__Leave;                                            // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x024C(0x0010) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClass*                                      ButtonStyle;                                               // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<FortniteGame_EFortBrushSize>           BrushSize;                                                 // 0x025C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LeaveButton.LeaveButton_C");
		return ptr;
	}



	void LeaveParty();
	void UpdateState();
	void IsConsideredInGame(bool* InGame);
	void GetLeaveActionText(struct FText* TEXT);
	void OnTimedOut_0FD9CDFF41D146A2389F9EBEB64D7769();
	void OnDeclined_0FD9CDFF41D146A2389F9EBEB64D7769();
	void OnConfirmed_0FD9CDFF41D146A2389F9EBEB64D7769();
	void OnTimedOut_A9AA3A5B453A4DE8A2BCA6AA5D014B79();
	void OnDeclined_A9AA3A5B453A4DE8A2BCA6AA5D014B79();
	void OnConfirmed_A9AA3A5B453A4DE8A2BCA6AA5D014B79();
	void Construct();
	void HandleLobbyEvents();
	void HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewTeamMemberInfo);
	void HandleTeamMemberRemoved(int PlayerIndex);
	void BndEvt___Button__Leave_K2Node_ComponentBoundEvent_84_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_LeaveButton(int EntryPoint);
	void OnClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
