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

// Class MovieSceneCapture.CompositionGraphCaptureSettings
// 0x001C (FullSize[0x0038] - InheritedSize[0x001C])
class UCompositionGraphCaptureSettings : public UObject
{
public:
	struct FCompositionGraphCapturePasses              IncludeRenderPasses;                                       // 0x001C(0x000C) (Edit, Config, NativeAccessSpecifierPublic)
	bool                                               bCaptureFramesInHDR;                                       // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HNBP[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStringAssetReference                       PostProcessingMaterial;                                    // 0x002C(0x000C) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneCapture.CompositionGraphCaptureSettings");
		return ptr;
	}



};

// Class MovieSceneCapture.FrameGrabberProtocolSettings
// 0x0008 (FullSize[0x0024] - InheritedSize[0x001C])
class UFrameGrabberProtocolSettings : public UObject
{
public:
	unsigned char                                      UnknownData_V5C0[0x8];                                     // 0x001C(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneCapture.FrameGrabberProtocolSettings");
		return ptr;
	}



};

// Class MovieSceneCapture.ImageCaptureSettings
// 0x0004 (FullSize[0x0028] - InheritedSize[0x0024])
class UImageCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	int                                                CompressionQuality;                                        // 0x0024(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneCapture.ImageCaptureSettings");
		return ptr;
	}



};

// Class MovieSceneCapture.VideoCaptureSettings
// 0x0014 (FullSize[0x0038] - InheritedSize[0x0024])
class UVideoCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	bool                                               bUseCompression;                                           // 0x0024(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HYNB[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CompressionQuality;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VideoCodec;                                                // 0x002C(0x000C) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneCapture.VideoCaptureSettings");
		return ptr;
	}



};

// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UMovieSceneCaptureInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureInterface");
		return ptr;
	}



};

// Class MovieSceneCapture.MovieSceneCapture
// 0x010C (FullSize[0x0128] - InheritedSize[0x001C])
class UMovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData_VRR4[0x8];                                     // 0x001C(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCaptureProtocolID                          CaptureType;                                               // 0x0024(0x0008) (Edit, Config, NativeAccessSpecifierPublic)
	class UObject*                                     ProtocolSettings;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneCaptureSettings                  Settings;                                                  // 0x0030(0x0038) (Edit, Config, NativeAccessSpecifierPublic)
	bool                                               bUseSeparateProcess;                                       // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3OE5[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AdditionalCommandLineArguments;                            // 0x006C(0x000C) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InheritedCommandLineArguments;                             // 0x0078(0x000C) (Edit, ZeroConstructor, Transient, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_73AU[0xA4];                                    // 0x0084(0x00A4) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCapture");
		return ptr;
	}



};

// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UAutomatedLevelSequenceCapture : public UMovieSceneCapture
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneCapture.AutomatedLevelSequenceCapture");
		return ptr;
	}



};

// Class MovieSceneCapture.LevelCapture
// 0x0020 (FullSize[0x0148] - InheritedSize[0x0128])
class ULevelCapture : public UMovieSceneCapture
{
public:
	bool                                               bAutoStartCapture;                                         // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FID2[0xB];                                     // 0x0129(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       PrerequisiteActorId;                                       // 0x0134(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DVKI[0x4];                                     // 0x0144(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneCapture.LevelCapture");
		return ptr;
	}



};

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UMovieSceneCaptureEnvironment : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureEnvironment");
		return ptr;
	}



	int STATIC_GetCaptureFrameNumber();
	float STATIC_GetCaptureElapsedTime();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
