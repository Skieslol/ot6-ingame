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

// Enum AnimGraphRuntime.ERefPoseType
enum class AnimGraphRuntime_ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2,

};

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class AnimGraphRuntime_EAnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free = 0,
	AnimPhysLinearConstraintType__Limited = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX = 2,

};

// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class AnimGraphRuntime_EAnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular = 0,
	AnimPhysAngularConstraintType__Cone = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX = 2,

};

// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class AnimGraphRuntime_EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput = 0,
	EDrivenBoneModificationMode__ReplaceComponent = 1,
	EDrivenBoneModificationMode__AddToRefPose = 2,
	EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX = 3,

};

// Enum AnimGraphRuntime.EComponentType
enum class AnimGraphRuntime_EComponentType : uint8_t
{
	EComponentType__None           = 0,
	EComponentType__TranslationX   = 1,
	EComponentType__TranslationY   = 2,
	EComponentType__TranslationZ   = 3,
	EComponentType__RotationX      = 4,
	EComponentType__RotationY      = 5,
	EComponentType__RotationZ      = 6,
	EComponentType__Scale          = 7,
	EComponentType__ScaleX         = 8,
	EComponentType__ScaleY         = 9,
	EComponentType__ScaleZ         = 10,
	EComponentType__EComponentType_MAX = 11,

};

// Enum AnimGraphRuntime.EInterpolationBlend
enum class AnimGraphRuntime_EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear    = 0,
	EInterpolationBlend__Cubic     = 1,
	EInterpolationBlend__Sinusoidal = 2,
	EInterpolationBlend__EaseInOutExponent2 = 3,
	EInterpolationBlend__EaseInOutExponent3 = 4,
	EInterpolationBlend__EaseInOutExponent4 = 5,
	EInterpolationBlend__EaseInOutExponent5 = 6,
	EInterpolationBlend__MAX       = 7,
	EInterpolationBlend__EInterpolationBlend_MAX = 8,

};

// Enum AnimGraphRuntime.EAxisOption
enum class AnimGraphRuntime_EAxisOption : uint8_t
{
	EAxisOption__X                 = 0,
	EAxisOption__Y                 = 1,
	EAxisOption__Z                 = 2,
	EAxisOption__X_Neg             = 3,
	EAxisOption__Y_Neg             = 4,
	EAxisOption__Z_Neg             = 5,
	EAxisOption__EAxisOption_MAX   = 6,

};

// Enum AnimGraphRuntime.EBoneModificationMode
enum class AnimGraphRuntime_EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3,

};

// Enum AnimGraphRuntime.EBoneAxis
enum class AnimGraphRuntime_EBoneAxis : uint8_t
{
	BA_X                           = 0,
	BA_Y                           = 1,
	BA_Z                           = 2,
	BA_MAX                         = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// 0x0028 (0x0048 - 0x0020)
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                      // 0x0020(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPoseLink                                   Additive;                                                  // 0x002C(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x003C(0x0008) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                LODThreshold;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// 0x0068 (0x0088 - 0x0020)
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           BlendPose;                                                 // 0x0020(0x000C) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      BlendTime;                                                 // 0x002C(0x000C) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAlphaBlendOption>              BlendType;                                                 // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4VXA[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 CustomBlendCurve;                                          // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendProfile*                               BlendProfile;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAlphaBlend>                         Blends;                                                    // 0x0044(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      BlendWeights;                                              // 0x0050(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<float>                                      RemainingBlendTimes;                                       // 0x005C(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int                                                LastActiveChildIndex;                                      // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FBlendSampleData>                    PerBoneSampleData;                                         // 0x006C(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WVW5[0xC];                                     // 0x0078(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bResetChildOnActivation;                                   // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9V9I[0x3];                                     // 0x0085(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// 0x0004 (0x008C - 0x0088)
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
	bool                                               bActiveValue;                                              // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FFXH[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// 0x0010 (0x0098 - 0x0088)
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
	TArray<int>                                        EnumToPoseIndex;                                           // 0x0088(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      ActiveEnumValue;                                           // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MXG7[0x3];                                     // 0x0095(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// 0x0004 (0x008C - 0x0088)
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
	int                                                ActiveChildIndex;                                          // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// 0x0094 (0x00DC - 0x0048)
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
	float                                              X;                                                         // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Z;                                                         // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoop;                                                     // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BZMV[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartPosition;                                             // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                             BlendSpace;                                                // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlendFilter                                BlendFilter;                                               // 0x0064(0x006C) (Protected, NativeAccessSpecifierProtected)
	TArray<struct FBlendSampleData>                    BlendSampleDataCache;                                      // 0x00D0(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// 0x0004 (0x00E0 - 0x00DC)
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
	float                                              NormalizedTime;                                            // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// 0x0028 (0x0048 - 0x0020)
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                             // 0x0020(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                LODThreshold;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0KMY[0xC];                                     // 0x003C(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// 0x0048 (0x0068 - 0x0020)
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
	class USkeletalMeshComponent*                      SourceMeshComponent;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FI40[0x44];                                    // 0x0024(0x0044) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// 0x004C (0x006C - 0x0020)
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                  // 0x0020(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FPoseLink>                           BlendPoses;                                                // 0x002C(0x000C) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInputBlendPose>                     LayerSetup;                                                // 0x0038(0x000C) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      BlendWeights;                                              // 0x0044(0x000C) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bMeshSpaceRotationBlend;                                   // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECurveBlendOption>              CurveBlendOption;                                          // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasRelevantPoses;                                         // 0x0052(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KXY8[0x19];                                    // 0x0053(0x0019) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// 0x0044
struct FRandomPlayerSequenceEntry
{
	class UAnimSequence*                               Sequence;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChanceToPlay;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinLoopCount;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLoopCount;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinPlayRate;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPlayRate;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAlphaBlend                                 BlendIn;                                                   // 0x0018(0x002C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// 0x0048 (0x0068 - 0x0020)
struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
	bool                                               bShuffleMode;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DF3S[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRandomPlayerSequenceEntry>          Entries;                                                   // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QF8J[0x38];                                    // 0x0030(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// 0x0000 (0x0020 - 0x0020)
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// 0x0004 (0x0024 - 0x0020)
struct FAnimNode_RefPose : public FAnimNode_Base
{
	TEnumAsByte<AnimGraphRuntime_ERefPoseType>         RefPoseType;                                               // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W9NQ[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_Root
// 0x000C (0x002C - 0x0020)
struct FAnimNode_Root : public FAnimNode_Base
{
	struct FPoseLink                                   Result;                                                    // 0x0020(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// 0x0020 (0x0040 - 0x0020)
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                  // 0x0020(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              Pitch;                                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Yaw;                                                       // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    MeshToComponent;                                           // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// 0x0010 (0x00EC - 0x00DC)
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                  // 0x00DC(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                LODThreshold;                                              // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_SaveCachedPose
// 0x003C (0x005C - 0x0020)
struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{
	struct FPoseLink                                   Pose;                                                      // 0x0020(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1EAM[0x30];                                    // 0x002C(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// 0x000C (0x0054 - 0x0048)
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                  // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExplicitTime;                                              // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldLoopWhenInSyncGroup;                                // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MVLL[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// 0x0024 (0x0044 - 0x0020)
struct FAnimNode_Slot : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                    // 0x0020(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FName                                       SlotName;                                                  // 0x002C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KIGH[0x10];                                    // 0x0034(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimationNode_TwoWayBlend
// 0x0024 (0x0044 - 0x0020)
struct FAnimationNode_TwoWayBlend : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                         // 0x0020(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPoseLink                                   B;                                                         // 0x002C(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x003C(0x0008) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// 0x0040
struct FAnimPhysPlanarLimit
{
	struct FBoneReference                              DrivingBone;                                               // 0x0000(0x000C) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G0X0[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  PlaneTransform;                                            // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// 0x005C
struct FAnimPhysConstraintSetup
{
	TEnumAsByte<AnimGraphRuntime_EAnimPhysLinearConstraintType> LinearXLimitType;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EAnimPhysLinearConstraintType> LinearYLimitType;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EAnimPhysLinearConstraintType> LinearZLimitType;                                          // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5SUE[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LinearAxesMin;                                             // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     LinearAxesMax;                                             // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EAnimPhysAngularConstraintType> AngularConstraintType;                                     // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAnimPhysTwistAxis>             TwistAxis;                                                 // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MJ8K[0x2];                                     // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ConeAngle;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularXAngle;                                             // 0x0024(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularYAngle;                                             // 0x0028(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularZAngle;                                             // 0x002C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AngularLimitsMin;                                          // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     AngularLimitsMax;                                          // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAnimPhysTwistAxis>             AngularTargetAxis;                                         // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UL2L[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     AngularTarget;                                             // 0x004C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bLinearFullyLocked;                                        // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SX04[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// 0x014C (0x0194 - 0x0048)
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
	bool                                               bChain;                                                    // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U3KS[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              BoundBone;                                                 // 0x004C(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBoneReference                              ChainEnd;                                                  // 0x0058(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector                                     BoxExtents;                                                // 0x0064(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     LocalJointOffset;                                          // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              GravityScale;                                              // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLinearSpring;                                             // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAngularSpring;                                            // 0x0081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XAB2[0x2];                                     // 0x0082(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LinearSpringConstant;                                      // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularSpringConstant;                                     // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableWind;                                               // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SCS3[0x3];                                     // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WindScale;                                                 // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideLinearDamping;                                    // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JLSB[0x3];                                     // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LinearDampingOverride;                                     // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideAngularDamping;                                   // 0x009C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YPOJ[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AngularDampingOverride;                                    // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoUpdate;                                                 // 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               bDoEval;                                                   // 0x00A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M4SA[0x2];                                     // 0x00A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumSolverIterationsPreUpdate;                              // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSolverIterationsPostUpdate;                             // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimPhysConstraintSetup                    ConstraintSetup;                                           // 0x00B0(0x005C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bUsePlanarLimit;                                           // 0x010C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2HHA[0x3];                                     // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAnimPhysPlanarLimit>                PlanarLimits;                                              // 0x0110(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAnimPhysCollisionType>         CollisionType;                                             // 0x011C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KMY0[0x3];                                     // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SphereCollisionRadius;                                     // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UUJM[0x70];                                    // 0x0124(0x0070) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// 0x0044 (0x008C - 0x0048)
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                                // 0x0048(0x000C) (Edit, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EComponentType>       SourceComponent;                                           // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BTNZ[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 DrivingCurve;                                              // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Multiplier;                                                // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseRange;                                                 // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MX0D[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RangeMin;                                                  // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RangeMax;                                                  // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemappedMin;                                               // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemappedMax;                                               // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              TargetBone;                                                // 0x0074(0x000C) (Edit, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EComponentType>       TargetComponent;                                           // 0x0080(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GOW4[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAffectTargetTranslationX : 1;                             // 0x0084(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetTranslationY : 1;                             // 0x0084(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetTranslationZ : 1;                             // 0x0084(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetRotationX : 1;                                // 0x0084(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetRotationY : 1;                                // 0x0084(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetRotationZ : 1;                                // 0x0084(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetScaleX : 1;                                   // 0x0084(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetScaleY : 1;                                   // 0x0084(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetScaleZ : 1;                                   // 0x0085(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2ARQ[0x2];                                     // 0x0086(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AnimGraphRuntime_EDrivenBoneModificationMode> ModificationMode;                                          // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PQ1K[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// 0x001C (0x0064 - 0x0048)
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                                // 0x0048(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBoneReference                              TargetBone;                                                // 0x0054(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bCopyTranslation;                                          // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCopyRotation;                                             // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCopyScale;                                                // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              ControlSpace;                                              // 0x0063(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// 0x0078 (0x00C0 - 0x0048)
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData_B17U[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  EffectorTransform;                                         // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              EffectorTransformSpace;                                    // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M9V1[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              EffectorTransformBone;                                     // 0x0084(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneRotationSource>            EffectorRotationSource;                                    // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K57W[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              TipBone;                                                   // 0x0094(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBoneReference                              RootBone;                                                  // 0x00A0(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              Precision;                                                 // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxIterations;                                             // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableDebugDraw;                                          // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CFTG[0xB];                                     // 0x00B5(0x000B) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// 0x0040 (0x0088 - 0x0048)
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RightHandFK;                                               // 0x0048(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftHandFK;                                                // 0x0054(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightHandIK;                                               // 0x0060(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftHandIK;                                                // 0x006C(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                      IKBonesToMove;                                             // 0x0078(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              HandFKWeight;                                              // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// 0x0064 (0x00AC - 0x0048)
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                              // 0x0048(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBoneReference                              LookAtBone;                                                // 0x0054(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector                                     LookAtLocation;                                            // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EAxisOption>          LookAtAxis;                                                // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLookUpAxis;                                            // 0x006D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EAxisOption>          LookUpAxis;                                                // 0x006E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6UAS[0x1];                                     // 0x006F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LookAtClamp;                                               // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EInterpolationBlend>  InterpolationType;                                         // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HI03[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InterpolationTime;                                         // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolationTriggerThreashold;                            // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableDebug;                                              // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VCPN[0x2B];                                    // 0x0081(0x002B) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// 0x0038 (0x0080 - 0x0048)
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                              // 0x0048(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector                                     Translation;                                               // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x006C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EBoneModificationMode> TranslationMode;                                           // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EBoneModificationMode> RotationMode;                                              // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EBoneModificationMode> ScaleMode;                                                 // 0x007A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              TranslationSpace;                                          // 0x007B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              RotationSpace;                                             // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              ScaleSpace;                                                // 0x007D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AYCY[0x2];                                     // 0x007E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// 0x0034 (0x007C - 0x0048)
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToObserve;                                             // 0x0048(0x000C) (Edit, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              DisplaySpace;                                              // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRelativeToRefPose;                                        // 0x0055(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KR0M[0x2];                                     // 0x0056(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Translation;                                               // 0x0058(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0064(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x0070(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// 0x0020 (0x0068 - 0x0048)
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TargetBone;                                                // 0x0048(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBoneReference                              SourceBone;                                                // 0x0054(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              Multiplier;                                                // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EBoneAxis>            RotationAxisToRefer;                                       // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAdditive;                                               // 0x0065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0Z0I[0x2];                                     // 0x0066(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// 0x0050 (0x0098 - 0x0048)
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SpringBone;                                                // 0x0048(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bLimitDisplacement;                                        // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZI0R[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxDisplacement;                                           // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpringStiffness;                                           // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpringDamping;                                             // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ErrorResetThresh;                                          // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoZSpring;                                                // 0x0068(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bTranslateX;                                               // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bTranslateY;                                               // 0x006A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bTranslateZ;                                               // 0x006B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bRotateX;                                                  // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bRotateY;                                                  // 0x006D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bRotateZ;                                                  // 0x006E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_US93[0x29];                                    // 0x006F(0x0029) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// 0x00F8 (0x0140 - 0x0048)
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TrailBone;                                                 // 0x0048(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                ChainLength;                                               // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<CoreUObject_EAxis>                     ChainBoneAxis;                                             // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInvertChainBoneAxis;                                      // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YEDO[0x2];                                     // 0x005A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TrailRelaxation;                                           // 0x005C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          TrailRelaxationSpeed;                                      // 0x0060(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bLimitStretch;                                             // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FP98[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StretchLimit;                                              // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     FakeVelocity;                                              // 0x00C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bActorSpaceFakeVel;                                        // 0x00CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RGT3[0x3];                                     // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              BaseJoint;                                                 // 0x00D0(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9J95[0x64];                                    // 0x00DC(0x0064) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// 0x0044 (0x008C - 0x0048)
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              IKBone;                                                    // 0x0048(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector                                     EffectorLocation;                                          // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     JointTargetLocation;                                       // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   StretchLimits;                                             // 0x006C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       EffectorSpaceBoneName;                                     // 0x0074(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTakeRotationFromEffectorSpace : 1;                        // 0x007C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bMaintainEffectorRelRot : 1;                               // 0x007C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowStretching : 1;                                      // 0x007C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XLHN[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EBoneControlSpace>              EffectorLocationSpace;                                     // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              JointTargetLocationSpace;                                  // 0x0081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QNE1[0x2];                                     // 0x0082(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       JointTargetSpaceBoneName;                                  // 0x0084(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_WheelHandler
// 0x0010 (0x0058 - 0x0048)
struct FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
{
	class UWheeledVehicleMovementComponent*            VehicleSimComponent;                                       // 0x0048(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PUHR[0xC];                                     // 0x004C(0x000C) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
