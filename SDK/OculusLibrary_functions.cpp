// Name: Fortnite, Version: OT-6_5

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function OculusLibrary.OculusFunctionLibrary.SetPositionScale3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 PosScale3D                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_SetPositionScale3D(const struct FVector& PosScale3D)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.SetPositionScale3D");

	UOculusFunctionLibrary_SetPositionScale3D_Params params;
	params.PosScale3D = PosScale3D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusLibrary.OculusFunctionLibrary.SetBaseRotationAndPositionOffset
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                BaseRot                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 PosOffset                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EOrientPositionSelector> Options                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_SetBaseRotationAndPositionOffset(const struct FRotator& BaseRot, const struct FVector& PosOffset, TEnumAsByte<Engine_EOrientPositionSelector> Options)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.SetBaseRotationAndPositionOffset");

	UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Params params;
	params.BaseRot = BaseRot;
	params.PosOffset = PosOffset;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusLibrary.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 BaseOffsetInMeters             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EOrientPositionSelector> Options                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_SetBaseRotationAndBaseOffsetInMeters(const struct FRotator& Rotation, const struct FVector& BaseOffsetInMeters, TEnumAsByte<Engine_EOrientPositionSelector> Options)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters");

	UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Params params;
	params.Rotation = Rotation;
	params.BaseOffsetInMeters = BaseOffsetInMeters;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusLibrary.OculusFunctionLibrary.IsPlayerControllerFollowHmdEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UOculusFunctionLibrary::STATIC_IsPlayerControllerFollowHmdEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.IsPlayerControllerFollowHmdEnabled");

	UOculusFunctionLibrary_IsPlayerControllerFollowHmdEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusLibrary.OculusFunctionLibrary.GetUserProfile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHmdUserProfile         Profile                        (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UOculusFunctionLibrary::STATIC_GetUserProfile(struct FHmdUserProfile* Profile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.GetUserProfile");

	UOculusFunctionLibrary_GetUserProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Profile != nullptr)
		*Profile = params.Profile;


	return params.ReturnValue;
}


// Function OculusLibrary.OculusFunctionLibrary.GetRawSensorData
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Accelerometer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 Gyro                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 Magnetometer                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          Temperature                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TimeInSeconds                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_GetRawSensorData(struct FVector* Accelerometer, struct FVector* Gyro, struct FVector* Magnetometer, float* Temperature, float* TimeInSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.GetRawSensorData");

	UOculusFunctionLibrary_GetRawSensorData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Accelerometer != nullptr)
		*Accelerometer = params.Accelerometer;
	if (Gyro != nullptr)
		*Gyro = params.Gyro;
	if (Magnetometer != nullptr)
		*Magnetometer = params.Magnetometer;
	if (Temperature != nullptr)
		*Temperature = params.Temperature;
	if (TimeInSeconds != nullptr)
		*TimeInSeconds = params.TimeInSeconds;

}


// Function OculusLibrary.OculusFunctionLibrary.GetPose
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                DeviceRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 DevicePosition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 NeckPosition                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bUseOrienationForPlayerCamera  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bUsePositionForPlayerCamera    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 PositionScale                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_GetPose(struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.GetPose");

	UOculusFunctionLibrary_GetPose_Params params;
	params.bUseOrienationForPlayerCamera = bUseOrienationForPlayerCamera;
	params.bUsePositionForPlayerCamera = bUsePositionForPlayerCamera;
	params.PositionScale = PositionScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DeviceRotation != nullptr)
		*DeviceRotation = params.DeviceRotation;
	if (DevicePosition != nullptr)
		*DevicePosition = params.DevicePosition;
	if (NeckPosition != nullptr)
		*NeckPosition = params.NeckPosition;

}


// Function OculusLibrary.OculusFunctionLibrary.GetPlayerCameraManagerFollowHmd
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bFollowHmdOrientation          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bFollowHmdPosition             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_GetPlayerCameraManagerFollowHmd(bool* bFollowHmdOrientation, bool* bFollowHmdPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.GetPlayerCameraManagerFollowHmd");

	UOculusFunctionLibrary_GetPlayerCameraManagerFollowHmd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bFollowHmdOrientation != nullptr)
		*bFollowHmdOrientation = params.bFollowHmdOrientation;
	if (bFollowHmdPosition != nullptr)
		*bFollowHmdPosition = params.bFollowHmdPosition;

}


// Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                OutRot                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 OutPosOffset                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndPositionOffset");

	UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutRot != nullptr)
		*OutRot = params.OutRot;
	if (OutPosOffset != nullptr)
		*OutPosOffset = params.OutPosOffset;

}


// Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                OutRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 OutBaseOffsetInMeters          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters");

	UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
	if (OutBaseOffsetInMeters != nullptr)
		*OutBaseOffsetInMeters = params.OutBaseOffsetInMeters;

}


// Function OculusLibrary.OculusFunctionLibrary.EnablePlayerControllerFollowHmd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_EnablePlayerControllerFollowHmd(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.EnablePlayerControllerFollowHmd");

	UOculusFunctionLibrary_EnablePlayerControllerFollowHmd_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusLibrary.OculusFunctionLibrary.EnablePlayerCameraManagerFollowHmd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bFollowHmdOrientation          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bFollowHmdPosition             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_EnablePlayerCameraManagerFollowHmd(bool bFollowHmdOrientation, bool bFollowHmdPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OculusLibrary.OculusFunctionLibrary.EnablePlayerCameraManagerFollowHmd");

	UOculusFunctionLibrary_EnablePlayerCameraManagerFollowHmd_Params params;
	params.bFollowHmdOrientation = bFollowHmdOrientation;
	params.bFollowHmdPosition = bFollowHmdPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
