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

// Enum Niagara.ENiagaraDataSetType
enum class Niagara_ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData = 0,
	ENiagaraDataSetType__Shared    = 1,
	ENiagaraDataSetType__Event     = 2,
	ENiagaraDataSetType__ENiagaraDataSetType_MAX = 3,

};

// Enum Niagara.ENiagaraDataType
enum class Niagara_ENiagaraDataType : uint8_t
{
	ENiagaraDataType__Scalar       = 0,
	ENiagaraDataType__Vector       = 1,
	ENiagaraDataType__Matrix       = 2,
	ENiagaraDataType__Curve        = 3,
	ENiagaraDataType__ENiagaraDataType_MAX = 4,

};

// Enum Niagara.EUnusedAttributeBehaviour
enum class Niagara_EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy = 0,
	EUnusedAttributeBehaviour__Zero = 1,
	EUnusedAttributeBehaviour__None = 2,
	EUnusedAttributeBehaviour__MarkInvalid = 3,
	EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX = 4,

};

// Enum Niagara.EEmitterRenderModuleType
enum class Niagara_EEmitterRenderModuleType : uint8_t
{
	RMT_None                       = 0,
	RMT_Sprites                    = 1,
	RMT_Ribbon                     = 2,
	RMT_Trails                     = 3,
	RMT_Meshes                     = 4,
	RMT_MAX                        = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Niagara.NiagaraVariableInfo
// 0x000C
struct FNiagaraVariableInfo
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Niagara_ENiagaraDataType>              Type;                                                      // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YG0H[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraConstantBase
// 0x0008
struct FNiagaraConstantBase
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraConstants_Float
// 0x0004 (0x000C - 0x0008)
struct FNiagaraConstants_Float : public FNiagaraConstantBase
{
	float                                              Value;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraConstants_DataObject
// 0x0004 (0x000C - 0x0008)
struct FNiagaraConstants_DataObject : public FNiagaraConstantBase
{
	class UNiagaraDataObject*                          Value;                                                     // 0x0008(0x0004) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraDataSetID
// 0x000C
struct FNiagaraDataSetID
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Niagara_ENiagaraDataSetType>           Type;                                                      // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZQTI[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraScriptUsageInfo
// 0x0001
struct FNiagaraScriptUsageInfo
{
	bool                                               bReadsAttriubteData;                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraEventReceiverProperties
// 0x0024
struct FNiagaraEventReceiverProperties
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SourceEventGenerator;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SourceEmitter;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNiagaraEventReceiverEmitterAction*>  EmitterActions;                                            // 0x0018(0x000C) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraDataSetProperties
// 0x0018
struct FNiagaraDataSetProperties
{
	struct FNiagaraDataSetID                           ID;                                                        // 0x0000(0x000C) (Edit, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariableInfo>                Variables;                                                 // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraEventGeneratorProperties
// 0x0004 (0x001C - 0x0018)
struct FNiagaraEventGeneratorProperties : public FNiagaraDataSetProperties
{
	int                                                MaxEventsPerFrame;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraConstants_Vector
// 0x0018 (0x0020 - 0x0008)
struct FNiagaraConstants_Vector : public FNiagaraConstantBase
{
	unsigned char                                      UnknownData_C61F[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector4                                    Value;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraConstants_Matrix
// 0x0048 (0x0050 - 0x0008)
struct FNiagaraConstants_Matrix : public FNiagaraConstantBase
{
	unsigned char                                      UnknownData_LAXL[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMatrix                                     Value;                                                     // 0x0010(0x0040) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraConstants
// 0x0030
struct FNiagaraConstants
{
	TArray<struct FNiagaraConstants_Float>             ScalarConstants;                                           // 0x0000(0x000C) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraConstants_Vector>            VectorConstants;                                           // 0x000C(0x000C) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraConstants_Matrix>            MatrixConstants;                                           // 0x0018(0x000C) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraConstants_DataObject>        DataObjectConstants;                                       // 0x0024(0x000C) (Edit, EditFixedSize, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
// 0x004C
struct FNiagaraEmitterScriptProperties
{
	class UNiagaraScript*                              Script;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraConstants                           ExternalConstants;                                         // 0x0004(0x0030) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraEventReceiverProperties>     EventReceivers;                                            // 0x0034(0x000C) (Edit, EditFixedSize, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraEventGeneratorProperties>    EventGenerators;                                           // 0x0040(0x000C) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraConstantMap
// 0x00F4
struct FNiagaraConstantMap
{
	unsigned char                                      UnknownData_9OMT[0xF4];                                    // 0x0000(0x00F4) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.DeprecatedNiagaraEmitterProperties
// 0x021C
struct FDeprecatedNiagaraEmitterProperties
{
	struct FString                                     Name;                                                      // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEnabled;                                                // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1XM2[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpawnRate;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraScript*                              UpdateScript;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraScript*                              SpawnScript;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   Material;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Niagara_EEmitterRenderModuleType>      RenderModuleType;                                          // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8X3D[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartTime;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndTime;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraEffectRendererProperties*            RendererProperties;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraConstantMap                         ExternalConstants;                                         // 0x0030(0x00F4) (NativeAccessSpecifierPublic)
	struct FNiagaraConstantMap                         ExternalSpawnConstants;                                    // 0x0124(0x00F4) (NativeAccessSpecifierPublic)
	int                                                NumLoops;                                                  // 0x0218(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.DeprecatedNiagaraConstants
// 0x0060
struct FDeprecatedNiagaraConstants
{
	TArray<struct FNiagaraVariableInfo>                ScalarConstantsInfo;                                       // 0x0000(0x000C) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariableInfo>                VectorConstantsInfo;                                       // 0x000C(0x000C) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariableInfo>                MatrixConstantsInfo;                                       // 0x0018(0x000C) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1D2V[0xC];                                     // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      ScalarConstants;                                           // 0x0030(0x000C) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<struct FVector4>                            VectorConstants;                                           // 0x003C(0x000C) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<struct FMatrix>                             MatrixConstants;                                           // 0x0048(0x000C) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_73WK[0xC];                                     // 0x0054(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraScriptConstantData
// 0x0120
struct FNiagaraScriptConstantData
{
	struct FDeprecatedNiagaraConstants                 ExternalConstants;                                         // 0x0000(0x0060) (Deprecated, NativeAccessSpecifierPublic)
	struct FDeprecatedNiagaraConstants                 InternalConstants;                                         // 0x0060(0x0060) (Deprecated, NativeAccessSpecifierPublic)
	struct FNiagaraConstants                           ExternalConstantsNew;                                      // 0x00C0(0x0030) (ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FNiagaraConstants                           InternalConstantsNew;                                      // 0x00F0(0x0030) (ContainsInstancedReference, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
