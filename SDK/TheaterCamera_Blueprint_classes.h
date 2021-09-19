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

// BlueprintGeneratedClass TheaterCamera_Blueprint.TheaterCamera_Blueprint_C
// 0x00D1 (FullSize[0x06D9] - InheritedSize[0x0608])
class ATheaterCamera_Blueprint_C : public AFortTheaterCamera
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0608(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class USkyLightComponent*                          SkyLight;                                                  // 0x060C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UArrowComponent*                             Arrow;                                                     // 0x0610(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UDirectionalLightComponent*                  DirectionalLight;                                          // 0x0614(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             SceneLightsRoot;                                           // 0x0618(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        MeshMonitorScreenShadow;                                   // 0x061C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        MeshMonitorScreen;                                         // 0x0620(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        MeshMonitorFrame;                                          // 0x0624(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UTextRenderComponent*                        TextMISSION;                                               // 0x0628(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UTextRenderComponent*                        Thirdtext;                                                 // 0x062C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UTextRenderComponent*                        Secondtext;                                                // 0x0630(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UTextRenderComponent*                        Maintext;                                                  // 0x0634(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              FocusTimeline_Float_Curve_ADC98EA5D14E24EC78DD4F80C5102578; // 0x0638(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             FocusTimeline__Direction_ADC98EA5D14E24EC78DD4F80C5102578; // 0x063C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FRPQ[0x3];                                     // 0x063D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FocusTimeline;                                             // 0x0640(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MouseDown;                                                 // 0x0644(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_74EM[0xB];                                     // 0x0645(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  InitialPosition;                                           // 0x0650(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              LerpPos;                                                   // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ADayPhaseLightingAndFog_C*                   WorldLighting;                                             // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              WorldLocSnapSize;                                          // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AWriteOutTextToTheScreen_C*                  Write_Text_Out_To_Screen_BP;                               // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              CameraDefaultLoc;                                          // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              CameraLerp;                                                // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ZoomAmountPerMouseWheelUnit;                               // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MinCameraHeight;                                           // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MaxCameraHeight;                                           // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PauseMouseInput;                                           // 0x06A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZTZA[0x3];                                     // 0x06A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_Hex_Outpost_C*                           Outpost;                                                   // 0x06A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     OutpostWorldLoc;                                           // 0x06AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              CameraOffsetX;                                             // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              CameraOffsetY;                                             // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               InitialTheaterCameraDelay;                                 // 0x06C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P5LX[0x3];                                     // 0x06C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CameraMovementSpeed;                                       // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     NewLoc;                                                    // 0x06C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFortTheaterMapTile*                         TargetTile;                                                // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsEnteringTheater;                                         // 0x06D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TheaterCamera_Blueprint.TheaterCamera_Blueprint_C");
		return ptr;
	}



	void UserConstructionScript();
	void FocusTimeline__FinishedFunc();
	void FocusTimeline__UpdateFunc();
	void InpActEvt_MouseScrollUp_UniqueObjectNameForCooking_12(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_UniqueObjectNameForCooking_11(const struct FKey& Key);
	void OnActivated();
	void OnDeactivated();
	void SetTileFocus(class AFortTheaterMapTile* TargetTile);
	void ReceiveTick(float DeltaSeconds);
	void OnDragBegin();
	void OnDragEnd();
	void SetEnteringTheaterZoom();
	void ExecuteUbergraph_TheaterCamera_Blueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
