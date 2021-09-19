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

// Enum Foliage.EFoliageScaling
enum class Foliage_EFoliageScaling : uint8_t
{
	EFoliageScaling__Uniform       = 0,
	EFoliageScaling__Free          = 1,
	EFoliageScaling__LockXY        = 2,
	EFoliageScaling__LockXZ        = 3,
	EFoliageScaling__LockYZ        = 4,
	EFoliageScaling__EFoliageScaling_MAX = 5,

};

// Enum Foliage.FoliageVertexColorMask
enum class Foliage_EFoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red     = 1,
	FOLIAGEVERTEXCOLORMASK_Green   = 2,
	FOLIAGEVERTEXCOLORMASK_Blue    = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha   = 4,
	FOLIAGEVERTEXCOLORMASK_MAX     = 5,

};

// Enum Foliage.ESimulationQuery
enum class Foliage_ESimulationQuery : uint8_t
{
	ESimulationQuery__CollisionOverlap = 0,
	ESimulationQuery__ShadeOverlap = 1,
	ESimulationQuery__AnyOverlap   = 2,
	ESimulationQuery__ESimulationQuery_MAX = 3,

};

// Enum Foliage.ESimulationOverlap
enum class Foliage_ESimulationOverlap : uint8_t
{
	ESimulationOverlap__CollisionOverlap = 0,
	ESimulationOverlap__ShadeOverlap = 1,
	ESimulationOverlap__None       = 2,
	ESimulationOverlap__ESimulationOverlap_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Foliage.FoliageTypeObject
// 0x0010
struct FFoliageTypeObject
{
	class UObject*                                     FoliageTypeObject;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFoliageType_InstancedStaticMesh*            TypeInstance;                                              // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsAsset;                                                  // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1D80[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Type;                                                      // 0x000C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Foliage.ProceduralFoliageInstance
// 0x0050
struct FProceduralFoliageInstance
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YDPC[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Rotation;                                                  // 0x0010(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Normal;                                                    // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Age;                                                       // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFoliageType_InstancedStaticMesh*            Type;                                                      // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JEB7[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
