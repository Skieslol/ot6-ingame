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

// Enum Landscape.ELandscapeGizmoType
enum class Landscape_ELandscapeGizmoType : uint8_t
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3,

};

// Enum Landscape.ELandscapeLODFalloff
enum class Landscape_ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear   = 0,
	ELandscapeLODFalloff__SquareRoot = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX = 2,

};

// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class Landscape_ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX = 4,

};

// Enum Landscape.ELandscapeImportAlphamapType
enum class Landscape_ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive = 0,
	ELandscapeImportAlphamapType__Layered = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX = 2,

};

// Enum Landscape.ELandscapeSetupErrors
enum class Landscape_ELandscapeSetupErrors : uint8_t
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4,

};

// Enum Landscape.LandscapeSplineMeshOrientation
enum class Landscape_ELandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2,

};

// Enum Landscape.ELandscapeLayerBlendType
enum class Landscape_ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3,

};

// Enum Landscape.ELandscapeCustomizedCoordType
enum class Landscape_ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5,

};

// Enum Landscape.ETerrainCoordMappingType
enum class Landscape_ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Landscape.GrassVariety
// 0x0020
struct FGrassVariety
{
	class UStaticMesh*                                 GrassMesh;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GrassDensity;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseGrid;                                                  // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9ZEC[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PlacementJitter;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartCullDistance;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndCullDistance;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinLOD;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RandomRotation;                                            // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               AlignToSurface;                                            // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GGJ8[0x2];                                     // 0x001E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// 0x0008
struct FWeightmapLayerAllocationInfo
{
	class ULandscapeLayerInfoObject*                   LayerInfo;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WeightmapTextureIndex;                                     // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WeightmapTextureChannel;                                   // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      GrassMapChannelIndex;                                      // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C5XJ[0x1];                                     // 0x0007(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// 0x0010
struct FLandscapeSplineSegmentConnection
{
	class ULandscapeSplineControlPoint*                ControlPoint;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TangentLen;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// 0x0040
struct FLandscapeSplineInterpPoint
{
	struct FVector                                     Center;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Left;                                                      // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Right;                                                     // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     FalloffLeft;                                               // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     FalloffRight;                                              // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              StartEndFalloff;                                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Landscape.LandscapeSplineConnection
// 0x0008
struct FLandscapeSplineConnection
{
	class ULandscapeSplineSegment*                     Segment;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      End : 1;                                                   // 0x0004(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LV7X[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.GrassInput
// 0x0038
struct FGrassInput
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULandscapeGrassType*                         GrassType;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionInput                            Input;                                                     // 0x000C(0x002C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Landscape.LayerBlendInput
// 0x0078
struct FLayerBlendInput
{
	struct FName                                       LayerName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Landscape_ELandscapeLayerBlendType>    BlendType;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8T0I[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExpressionInput                            LayerInput;                                                // 0x000C(0x002C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                            HeightInput;                                               // 0x0038(0x002C) (ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              PreviewWeight;                                             // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ConstLayerInput;                                           // 0x0068(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ConstHeightInput;                                          // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Landscape.GizmoSelectData
// 0x003C
struct FGizmoSelectData
{
	unsigned char                                      UnknownData_ASQH[0x3C];                                    // 0x0000(0x003C) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// 0x000C
struct FLandscapeInfoLayerSettings
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LayerName;                                                 // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Landscape.LandscapeImportLayerInfo
// 0x0001
struct FLandscapeImportLayerInfo
{
	unsigned char                                      UnknownData_SMOR[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.LandscapeLayerStruct
// 0x0004
struct FLandscapeLayerStruct
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// 0x0001
struct FLandscapeEditorLayerSettings
{
	unsigned char                                      UnknownData_Y9L9[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.LandscapeWeightmapUsage
// 0x0010
struct FLandscapeWeightmapUsage
{
	class ULandscapeComponent*                         ChannelUsage[0x4];                                         // 0x0000(0x0010) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// 0x0030
struct FLandscapeSplineMeshEntry
{
	class UStaticMesh*                                 Mesh;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                         // 0x0004(0x000C) (Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      bCenterH : 1;                                              // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_711V[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   CenterAdjust;                                              // 0x0014(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      bScaleToWidth : 1;                                         // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DNL2[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Scale;                                                     // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Landscape_ELandscapeSplineMeshOrientation> Orientation;                                               // 0x002C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ESplineMeshAxis>                ForwardAxis;                                               // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ESplineMeshAxis>                UpAxis;                                                    // 0x002E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IL5T[0x1];                                     // 0x002F(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.ForeignWorldSplineData
// 0x0001
struct FForeignWorldSplineData
{
	unsigned char                                      UnknownData_BOOI[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.ForeignSplineSegmentData
// 0x0001
struct FForeignSplineSegmentData
{
	unsigned char                                      UnknownData_GKSX[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.ForeignControlPointData
// 0x0001
struct FForeignControlPointData
{
	unsigned char                                      UnknownData_6PIQ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
