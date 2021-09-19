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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// 0x000C
struct FCompositionGraphCapturePasses
{
	TArray<struct FString>                             Value;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneCapture.CaptureProtocolID
// 0x0008
struct FCaptureProtocolID
{
	struct FName                                       Identifier;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneCapture.CaptureResolution
// 0x0008
struct FCaptureResolution
{
	uint32_t                                           ResX;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           ResY;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// 0x0038
struct FMovieSceneCaptureSettings
{
	struct FDirectoryPath                              OutputDirectory;                                           // 0x0000(0x000C) (Edit, Config, NativeAccessSpecifierPublic)
	bool                                               bCreateTemporaryCopiesOfLevels;                            // 0x000C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q5US[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GameModeOverride;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutputFormat;                                              // 0x0014(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverwriteExisting;                                        // 0x0020(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               bUseRelativeFrameNumbers;                                  // 0x0021(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FCAQ[0x2];                                     // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FrameRate;                                                 // 0x0024(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCaptureResolution                          Resolution;                                                // 0x0028(0x0008) (Edit, Config, NativeAccessSpecifierPublic)
	bool                                               bEnableTextureStreaming;                                   // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               bCinematicMode;                                            // 0x0031(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAllowMovement;                                            // 0x0032(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               bAllowTurning;                                             // 0x0033(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               bShowPlayer;                                               // 0x0034(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               bShowHUD;                                                  // 0x0035(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y4U8[0x2];                                     // 0x0036(0x0002) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
