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
// Parameters
//---------------------------------------------------------------------------

// Function OculusLibrary.OculusFunctionLibrary.SetPositionScale3D
struct UOculusFunctionLibrary_SetPositionScale3D_Params
{
	struct FVector                                     PosScale3D;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function OculusLibrary.OculusFunctionLibrary.SetBaseRotationAndPositionOffset
struct UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Params
{
	struct FRotator                                    BaseRot;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     PosOffset;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EOrientPositionSelector>        Options;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusLibrary.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters
struct UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Params
{
	struct FRotator                                    Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     BaseOffsetInMeters;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EOrientPositionSelector>        Options;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusLibrary.OculusFunctionLibrary.IsPlayerControllerFollowHmdEnabled
struct UOculusFunctionLibrary_IsPlayerControllerFollowHmdEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function OculusLibrary.OculusFunctionLibrary.GetUserProfile
struct UOculusFunctionLibrary_GetUserProfile_Params
{
	struct FHmdUserProfile                             Profile;                                                   // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function OculusLibrary.OculusFunctionLibrary.GetRawSensorData
struct UOculusFunctionLibrary_GetRawSensorData_Params
{
	struct FVector                                     Accelerometer;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Gyro;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Magnetometer;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Temperature;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeInSeconds;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusLibrary.OculusFunctionLibrary.GetPose
struct UOculusFunctionLibrary_GetPose_Params
{
	struct FRotator                                    DeviceRotation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     DevicePosition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     NeckPosition;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUseOrienationForPlayerCamera;                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUsePositionForPlayerCamera;                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     PositionScale;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function OculusLibrary.OculusFunctionLibrary.GetPlayerCameraManagerFollowHmd
struct UOculusFunctionLibrary_GetPlayerCameraManagerFollowHmd_Params
{
	bool                                               bFollowHmdOrientation;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bFollowHmdPosition;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
struct UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params
{
	struct FRotator                                    OutRot;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     OutPosOffset;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function OculusLibrary.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
struct UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params
{
	struct FRotator                                    OutRotation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     OutBaseOffsetInMeters;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function OculusLibrary.OculusFunctionLibrary.EnablePlayerControllerFollowHmd
struct UOculusFunctionLibrary_EnablePlayerControllerFollowHmd_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function OculusLibrary.OculusFunctionLibrary.EnablePlayerCameraManagerFollowHmd
struct UOculusFunctionLibrary_EnablePlayerCameraManagerFollowHmd_Params
{
	bool                                               bFollowHmdOrientation;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bFollowHmdPosition;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
