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

// Class OculusLibrary.OculusFunctionLibrary
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UOculusFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OculusLibrary.OculusFunctionLibrary");
		return ptr;
	}



	void STATIC_SetPositionScale3D(const struct FVector& PosScale3D);
	void STATIC_SetBaseRotationAndPositionOffset(const struct FRotator& BaseRot, const struct FVector& PosOffset, TEnumAsByte<Engine_EOrientPositionSelector> Options);
	void STATIC_SetBaseRotationAndBaseOffsetInMeters(const struct FRotator& Rotation, const struct FVector& BaseOffsetInMeters, TEnumAsByte<Engine_EOrientPositionSelector> Options);
	bool STATIC_IsPlayerControllerFollowHmdEnabled();
	bool STATIC_GetUserProfile(struct FHmdUserProfile* Profile);
	void STATIC_GetRawSensorData(struct FVector* Accelerometer, struct FVector* Gyro, struct FVector* Magnetometer, float* Temperature, float* TimeInSeconds);
	void STATIC_GetPose(struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale);
	void STATIC_GetPlayerCameraManagerFollowHmd(bool* bFollowHmdOrientation, bool* bFollowHmdPosition);
	void STATIC_GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset);
	void STATIC_GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters);
	void STATIC_EnablePlayerControllerFollowHmd(bool bEnable);
	void STATIC_EnablePlayerCameraManagerFollowHmd(bool bFollowHmdOrientation, bool bFollowHmdPosition);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
