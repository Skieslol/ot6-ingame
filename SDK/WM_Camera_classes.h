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

// BlueprintGeneratedClass WM_Camera.WM_Camera_C
// 0x0098 (FullSize[0x06A0] - InheritedSize[0x0608])
class AWM_Camera_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0608(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TL_CameraDeactivateAnim_OutCurve_73E7DC7546C4C2FD98109BAD51037AF1; // 0x060C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             TL_CameraDeactivateAnim__Direction_73E7DC7546C4C2FD98109BAD51037AF1; // 0x0610(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KZ5Y[0x3];                                     // 0x0611(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TL_CameraDeactivateAnim;                                   // 0x0614(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_CameraActivateAnim_NewTrack_4_ED6153E9442CF8BBFC62D28E1B56763B; // 0x0618(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             TL_CameraActivateAnim__Direction_ED6153E9442CF8BBFC62D28E1B56763B; // 0x061C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4N9O[0x3];                                     // 0x061D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TL_CameraActivateAnim;                                     // 0x0620(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CameraNoise_Noise3_CAC0C7484A50FFB26B3B348FCDF148B0;       // 0x0624(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CameraNoise_Noise2_CAC0C7484A50FFB26B3B348FCDF148B0;       // 0x0628(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CameraNoise_Noise1_CAC0C7484A50FFB26B3B348FCDF148B0;       // 0x062C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             CameraNoise__Direction_CAC0C7484A50FFB26B3B348FCDF148B0;   // 0x0630(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XST4[0x3];                                     // 0x0631(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          CameraNoise;                                               // 0x0634(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OldTimeofDay;                                              // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              OldTimeofDaySpeed;                                         // 0x063C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                                  InitialPosition;                                           // 0x0640(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                                  ZoomPosition;                                              // 0x0670(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass WM_Camera.WM_Camera_C");
		return ptr;
	}



	void UserConstructionScript();
	void CameraNoise__FinishedFunc();
	void CameraNoise__UpdateFunc();
	void TL_CameraActivateAnim__FinishedFunc();
	void TL_CameraActivateAnim__UpdateFunc();
	void TL_CameraDeactivateAnim__FinishedFunc();
	void TL_CameraDeactivateAnim__UpdateFunc();
	void OnActivated();
	void OnDeactivated();
	void CameraWiggle();
	void CameraActivateAnim();
	void ReceiveBeginPlay();
	void StopWiggle();
	void CameraDeactivateAnim();
	void ExecuteUbergraph_WM_Camera(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
