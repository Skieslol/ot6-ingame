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

// Class MovieSceneTracks.MovieScene3DConstraintSection
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	struct FGuid                                       ConstraintId;                                              // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DAttachSection
// 0x000C (FullSize[0x004C] - InheritedSize[0x0040])
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	struct FName                                       AttachSocketName;                                          // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bConstrainTx : 1;                                          // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bConstrainTy : 1;                                          // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bConstrainTz : 1;                                          // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bConstrainRx : 1;                                          // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bConstrainRy : 1;                                          // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bConstrainRz : 1;                                          // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UFWZ[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DPathSection
// 0x005C (FullSize[0x009C] - InheritedSize[0x0040])
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	struct FRichCurve                                  TimingCurve;                                               // 0x0040(0x0054) (Edit, NativeAccessSpecifierPrivate)
	TEnumAsByte<MovieSceneTracks_EMovieScene3DPathSection_Axis> FrontAxisEnum;                                             // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TEnumAsByte<MovieSceneTracks_EMovieScene3DPathSection_Axis> UpAxisEnum;                                                // 0x0095(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SZSO[0x2];                                     // 0x0096(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bFollow : 1;                                               // 0x0098(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      bReverse : 1;                                              // 0x0098(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      bForceUpright : 1;                                         // 0x0098(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_B6BL[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// 0x000C (FullSize[0x0028] - InheritedSize[0x001C])
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  ConstraintSections;                                        // 0x001C(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DPathTrack
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DTransformSection
// 0x02F8 (FullSize[0x0328] - InheritedSize[0x0030])
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_4RWL[0x4];                                     // 0x0030(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  Translation[0x3];                                          // 0x0034(0x00FC) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  Rotation[0x3];                                             // 0x0130(0x00FC) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  Scale[0x3];                                                // 0x022C(0x00FC) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneAudioSection
// 0x000C (FullSize[0x003C] - InheritedSize[0x0030])
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	class USoundBase*                                  Sound;                                                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AudioStartTime;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AudioDilationFactor;                                       // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneAudioTrack
// 0x000C (FullSize[0x0028] - InheritedSize[0x001C])
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  AudioSections;                                             // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneBoolSection
// 0x005C (FullSize[0x008C] - InheritedSize[0x0030])
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_C2QR[0x4];                                     // 0x0030(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               DefaultValue;                                              // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D8M9[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntegralCurve                              BoolCurve;                                                 // 0x0038(0x0054) (Edit, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneVisibilitySection
// 0x0000 (FullSize[0x008C] - InheritedSize[0x008C])
class UMovieSceneVisibilitySection : public UMovieSceneBoolSection
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVisibilitySection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneByteSection
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_NBX4[0x4];                                     // 0x0030(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntegralCurve                              ByteCurve;                                                 // 0x0034(0x0054) (Edit, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneColorSection
// 0x0154 (FullSize[0x0184] - InheritedSize[0x0030])
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_6MYQ[0x4];                                     // 0x0030(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  RedCurve;                                                  // 0x0034(0x0054) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  GreenCurve;                                                // 0x0088(0x0054) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  BlueCurve;                                                 // 0x00DC(0x0054) (NativeAccessSpecifierPrivate)
	struct FRichCurve                                  AlphaCurve;                                                // 0x0130(0x0054) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEventSection
// 0x004C (FullSize[0x007C] - InheritedSize[0x0030])
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	struct FNameCurve                                  Events;                                                    // 0x0030(0x004C) (Edit, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEventTrack
// 0x0010 (FullSize[0x002C] - InheritedSize[0x001C])
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      bFireEventsWhenForwards : 1;                               // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      bFireEventsWhenBackwards : 1;                              // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_A8TG[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0020(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneFloatSection
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_8MUA[0x4];                                     // 0x0030(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  FloatCurve;                                                // 0x0034(0x0054) (Edit, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneFadeSection
// 0x0014 (FullSize[0x009C] - InheritedSize[0x0088])
class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
public:
	struct FLinearColor                                FadeColor;                                                 // 0x0088(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bFadeAudio : 1;                                            // 0x0098(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IVA0[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSlomoSection
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneParameterSection
// 0x0024 (FullSize[0x0054] - InheritedSize[0x0030])
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	TArray<struct FScalarParameterNameAndCurve>        ScalarParameterNamesAndCurves;                             // 0x0030(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FVectorParameterNameAndCurves>       VectorParameterNamesAndCurves;                             // 0x003C(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FColorParameterNameAndCurves>        ColorParameterNamesAndCurves;                              // 0x0048(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParameterSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneMaterialTrack
// 0x000C (FullSize[0x0028] - InheritedSize[0x001C])
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// 0x0004 (FullSize[0x002C] - InheritedSize[0x0028])
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	int                                                MaterialIndex;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentMaterialTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// 0x000C (FullSize[0x0028] - InheritedSize[0x001C])
class UMovieSceneParticleParameterTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleParameterTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneParticleSection
// 0x0054 (FullSize[0x0084] - InheritedSize[0x0030])
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                              ParticleKeys;                                              // 0x0030(0x0054) (Edit, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneParticleTrack
// 0x000C (FullSize[0x0028] - InheritedSize[0x001C])
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  ParticleSections;                                          // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScenePropertyTrack
// 0x0020 (FullSize[0x003C] - InheritedSize[0x001C])
class UMovieScenePropertyTrack : public UMovieSceneTrack
{
public:
	struct FName                                       PropertyName;                                              // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     PropertyPath;                                              // 0x0024(0x000C) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0030(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePropertyTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// 0x0000 (FullSize[0x003C] - InheritedSize[0x003C])
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneBoolTrack
// 0x0000 (FullSize[0x003C] - InheritedSize[0x003C])
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// 0x0000 (FullSize[0x003C] - InheritedSize[0x003C])
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVisibilityTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneByteTrack
// 0x0004 (FullSize[0x0040] - InheritedSize[0x003C])
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                      // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneColorTrack
// 0x0004 (FullSize[0x0040] - InheritedSize[0x003C])
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	bool                                               bIsSlateColor;                                             // 0x003C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WF3E[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneFloatTrack
// 0x0000 (FullSize[0x003C] - InheritedSize[0x003C])
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneFadeTrack
// 0x0000 (FullSize[0x003C] - InheritedSize[0x003C])
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// 0x0000 (FullSize[0x003C] - InheritedSize[0x003C])
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneVectorTrack
// 0x0004 (FullSize[0x0040] - InheritedSize[0x003C])
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:
	int                                                NumChannelsUsed;                                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneShotSection
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UMovieSceneShotSection : public UMovieSceneSection
{
public:
	struct FGuid                                       CameraGuid;                                                // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FText                                       DisplayName;                                               // 0x0040(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPrivate)
	int                                                ShotNumber;                                                // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneShotSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSubTrack
// 0x000C (FullSize[0x0028] - InheritedSize[0x001C])
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSubTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneShotTrack
// 0x000C (FullSize[0x0028] - InheritedSize[0x001C])
class UMovieSceneShotTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneShotTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// 0x001C (FullSize[0x004C] - InheritedSize[0x0030])
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	class UAnimSequence*                               AnimSequence;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              StartOffset;                                               // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              EndOffset;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PlayRate;                                                  // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bReverse : 1;                                              // 0x0040(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0EC5[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SlotName;                                                  // 0x0044(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// 0x000C (FullSize[0x0028] - InheritedSize[0x001C])
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  AnimationSections;                                         // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSpawnTrack
// 0x001C (FullSize[0x0038] - InheritedSize[0x001C])
class UMovieSceneSpawnTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x001C(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FGuid                                       ObjectGuid;                                                // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSubSection
// 0x000C (FullSize[0x003C] - InheritedSize[0x0030])
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	float                                              StartOffset;                                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeScale;                                                 // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneSequence*                         SubSequence;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSubSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneVectorSection
// 0x0158 (FullSize[0x0188] - InheritedSize[0x0030])
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_LWQ1[0x4];                                     // 0x0030(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  Curves[0x4];                                               // 0x0034(0x0150) (NativeAccessSpecifierPrivate)
	int                                                ChannelsUsed;                                              // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorSection");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
