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
// Enums
//---------------------------------------------------------------------------

// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieSceneTracks_EMovieScene3DPathSection_Axis : uint8_t
{
	MovieScene3DPathSection_Axis__X = 0,
	MovieScene3DPathSection_Axis__Y = 1,
	MovieScene3DPathSection_Axis__Z = 2,
	MovieScene3DPathSection_Axis__NEG_X = 3,
	MovieScene3DPathSection_Axis__NEG_Y = 4,
	MovieScene3DPathSection_Axis__NEG_Z = 5,
	MovieScene3DPathSection_Axis__MovieScene3DPathSection_MAX = 6,

};

// Enum MovieSceneTracks.EParticleKey
enum class MovieSceneTracks_EParticleKey : uint8_t
{
	EParticleKey__Activate         = 0,
	EParticleKey__Deactivate       = 1,
	EParticleKey__Trigger          = 2,
	EParticleKey__EParticleKey_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// 0x015C
struct FColorParameterNameAndCurves
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                INDEX;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRichCurve                                  RedCurve;                                                  // 0x000C(0x0054) (NativeAccessSpecifierPublic)
	struct FRichCurve                                  GreenCurve;                                                // 0x0060(0x0054) (NativeAccessSpecifierPublic)
	struct FRichCurve                                  BlueCurve;                                                 // 0x00B4(0x0054) (NativeAccessSpecifierPublic)
	struct FRichCurve                                  AlphaCurve;                                                // 0x0108(0x0054) (NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// 0x0108
struct FVectorParameterNameAndCurves
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                INDEX;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRichCurve                                  XCurve;                                                    // 0x000C(0x0054) (NativeAccessSpecifierPublic)
	struct FRichCurve                                  YCurve;                                                    // 0x0060(0x0054) (NativeAccessSpecifierPublic)
	struct FRichCurve                                  ZCurve;                                                    // 0x00B4(0x0054) (NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// 0x0060
struct FScalarParameterNameAndCurve
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                INDEX;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRichCurve                                  ParameterCurve;                                            // 0x000C(0x0054) (NativeAccessSpecifierPublic)

};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionKey
// 0x0010
struct FMovieSceneEventSectionKey
{
	TArray<struct FName>                               EventNames;                                                // 0x0000(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
