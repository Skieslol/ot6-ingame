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

// BlueprintGeneratedClass HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C
// 0x0066 (FullSize[0x066E] - InheritedSize[0x0608])
class AHomeBaseCamera_Blueprint_C : public AFortHomeBaseCamera
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0608(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ZoomInTimeline_FloatCurve_5A99B70D8F48CC5A3D3C728E9EC54B4E; // 0x060C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             ZoomInTimeline__Direction_5A99B70D8F48CC5A3D3C728E9EC54B4E; // 0x0610(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DS7M[0x3];                                     // 0x0611(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ZoomInTimeline;                                            // 0x0614(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ZoomOutTimeline_FloatCurve_F8D27584BD4A57F03BE072B7A9D31232; // 0x0618(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             ZoomOutTimeline__Direction_F8D27584BD4A57F03BE072B7A9D31232; // 0x061C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CIHL[0x3];                                     // 0x061D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ZoomOutTimeline;                                           // 0x0620(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ZoomLevel;                                                 // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               MouseDown;                                                 // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GB7P[0x3];                                     // 0x0629(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LerpPos;                                                   // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     PreviousLocation;                                          // 0x0630(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    PreviousRotation;                                          // 0x063C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              PreviousFOV;                                               // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     LerpFromLocation;                                          // 0x064C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    LerpFromRotation;                                          // 0x0658(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              LerpFromFOV;                                               // 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class APostProcessVolume*                          Volume;                                                    // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	bool                                               LoggedIn;                                                  // 0x066C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsFocused;                                                 // 0x066D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C");
		return ptr;
	}



	void IsBusy(bool* IsBusy);
	void StorePrevious();
	void StoreLerpFrom();
	void UserConstructionScript();
	void ZoomInTimeline__FinishedFunc();
	void ZoomInTimeline__UpdateFunc();
	void ZoomOutTimeline__FinishedFunc();
	void ZoomOutTimeline__UpdateFunc();
	void InpActEvt_MouseScrollUp_UniqueObjectNameForCooking_32(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_UniqueObjectNameForCooking_31(const struct FKey& Key);
	void ReceiveTick(float DeltaSeconds);
	void OnActivated();
	void OnDeactivated();
	void ReceiveBeginPlay();
	void ClearBuildingFocus();
	void SetBuildingFocus(class UCameraComponent* BuildingCameraComponent);
	void BP_Clear_Focus();
	void OnDragBegin();
	void OnDragEnd();
	void ExecuteUbergraph_HomeBaseCamera_Blueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
