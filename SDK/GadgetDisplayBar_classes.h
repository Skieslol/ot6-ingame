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

// WidgetBlueprintGeneratedClass GadgetDisplayBar.GadgetDisplayBar_C
// 0x0029 (FullSize[0x026D] - InheritedSize[0x0244])
class UGadgetDisplayBar_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  _Text__PlayerName;                                         // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBorder*                                     Border;                                                    // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UGadgetDisplayItem_C*                        Gadget1;                                                   // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UGadgetDisplayItem_C*                        Gadget2;                                                   // 0x0254(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class URatingWidget_C*                             Rating;                                                    // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	int                                                PlayerIndex;                                               // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	TEnumAsByte<FortniteGame_EFortTeam>                Team;                                                      // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               TrackLocalPlayerTeam;                                      // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_596N[0x2];                                     // 0x0262(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxSelectableGadgets;                                      // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class APartyCharacterPlacementHelper_C*            PartyPlacementActor;                                       // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bShowable;                                                 // 0x026C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GadgetDisplayBar.GadgetDisplayBar_C");
		return ptr;
	}



	void HandledTeamMemberAdded(struct FFortTeamMemberInfo* InNewMemberInfo);
	void UpdateVisibility();
	void UpdateAssignedTeamMember();
	void SetShown(bool bShown);
	void SetPlayerIndex(int InPlayerIndex);
	void HandlePartyLeft();
	void BindTeamDelegates(class UFortUITeamInfo* TeamInfo);
	void RemoveAssignedTeamMember();
	void HandleTeamMemberUpdated(struct FFortTeamMemberInfo* InNewMemberInfo);
	void BindDelegates();
	void Update(const struct FFortTeamMemberInfo& InMemberInfo);
	void Construct();
	void OnTeamMemberAdded(const struct FFortTeamMemberInfo& NewTeamMemberInfo);
	void OnTeamMemberUpdated(const struct FFortTeamMemberInfo& NewTeamMemberInfo);
	void OnTeamMemberRemoved(int PlayerIndex);
	void ExecuteUbergraph_GadgetDisplayBar(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
