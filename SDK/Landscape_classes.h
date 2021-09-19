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

// Class Landscape.ControlPointMeshComponent
// 0x000C (FullSize[0x0520] - InheritedSize[0x0514])
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData_3WJR[0xC];                                     // 0x0514(0x000C) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeGrassType
// 0x0024 (FullSize[0x0040] - InheritedSize[0x001C])
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                            // 0x001C(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 GrassMesh;                                                 // 0x0028(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GrassDensity;                                              // 0x002C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlacementJitter;                                           // 0x0030(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartCullDistance;                                         // 0x0034(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndCullDistance;                                           // 0x0038(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RandomRotation;                                            // 0x003C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               AlignToSurface;                                            // 0x003D(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FZED[0x2];                                     // 0x003E(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeGrassType");
		return ptr;
	}



};

// Class Landscape.LandscapeComponent
// 0x0124 (FullSize[0x0550] - InheritedSize[0x042C])
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                SectionBaseX;                                              // 0x042C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SectionBaseY;                                              // 0x0430(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ComponentSizeQuads;                                        // 0x0434(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SubsectionSizeQuads;                                       // 0x0438(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSubsections;                                            // 0x043C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          OverrideMaterial;                                          // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          OverrideHoleMaterial;                                      // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceConstant*                   MaterialInstance;                                          // 0x0448(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                 // 0x044C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                          WeightmapTextures;                                         // 0x0458(0x000C) (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
	class UTexture2D*                                  XYOffsetmapTexture;                                        // 0x0464(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U4UX[0x8];                                     // 0x0468(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector4                                    WeightmapScaleBias;                                        // 0x0470(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              WeightmapSubsectionOffset;                                 // 0x0480(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VYMO[0xC];                                     // 0x0484(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector4                                    HeightmapScaleBias;                                        // 0x0490(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UTexture2D*                                  HeightmapTexture;                                          // 0x04A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                        CachedLocalBox;                                            // 0x04A4(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                        // 0x04C0(0x001C) (ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                               IrrelevantLights;                                          // 0x04DC(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DNG1[0x8];                                     // 0x04E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CollisionMipLevel;                                         // 0x04F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StaticLightingResolution;                                  // 0x04F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ForcedLOD;                                                 // 0x04F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LODBias;                                                   // 0x04FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       StateId;                                                   // 0x0500(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGuid                                       BakedTextureMaterialGuid;                                  // 0x0510(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UTexture2D*                                  GIBakedBaseColorTexture;                                   // 0x0520(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MobileBlendableLayerMask;                                  // 0x0524(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HRC3[0x3];                                     // 0x0525(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          MobileMaterialInterface;                                   // 0x0528(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  MobileWeightNormalmapTexture;                              // 0x052C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6WT9[0x20];                                    // 0x0530(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeGizmoActor
// 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
class ALandscapeGizmoActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		return ptr;
	}



};

// Class Landscape.LandscapeGizmoActiveActor
// 0x003C (FullSize[0x027C] - InheritedSize[0x0240])
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData_UCJH[0x3C];                                    // 0x0240(0x003C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		return ptr;
	}



};

// Class Landscape.LandscapeGizmoRenderComponent
// 0x0004 (FullSize[0x0430] - InheritedSize[0x042C])
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_DHR3[0x4];                                     // 0x042C(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00BC (FullSize[0x04E8] - InheritedSize[0x042C])
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeLayerInfoObject*>           ComponentLayerInfos;                                       // 0x042C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                SectionBaseX;                                              // 0x0438(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SectionBaseY;                                              // 0x043C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CollisionSizeQuads;                                        // 0x0440(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionScale;                                            // 0x0444(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              CollisionQuadFlags;                                        // 0x0448(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                       HeightfieldGuid;                                           // 0x0454(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBox                                        CachedLocalBox;                                            // 0x0464(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                           // 0x0480(0x001C) (ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D8PH[0xC];                                     // 0x049C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                   // 0x04A8(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ENIF[0x34];                                    // 0x04B4(0x0034) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeMeshCollisionComponent
// 0x0018 (FullSize[0x0500] - InheritedSize[0x04E8])
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	struct FGuid                                       MeshGuid;                                                  // 0x04E8(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZYZN[0x8];                                     // 0x04F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeInfo
// 0x0178 (FullSize[0x0194] - InheritedSize[0x001C])
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                            // 0x001C(0x001C) (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       LandscapeGuid;                                             // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ComponentSizeQuads;                                        // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SubsectionSizeQuads;                                       // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ComponentNumSubsections;                                   // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DrawScale;                                                 // 0x0054(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RTFH[0x134];                                   // 0x0060(0x0134) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeInfo");
		return ptr;
	}



};

// Class Landscape.LandscapeInfoMap
// 0x003C (FullSize[0x0058] - InheritedSize[0x001C])
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData_MJAJ[0x3C];                                    // 0x001C(0x003C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeInfoMap");
		return ptr;
	}



};

// Class Landscape.LandscapeLayerInfoObject
// 0x0020 (FullSize[0x003C] - InheritedSize[0x001C])
class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                 // 0x001C(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                           PhysMaterial;                                              // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Hardness;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LayerUsageDebugColor;                                      // 0x002C(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		return ptr;
	}



};

// Class Landscape.LandscapeMaterialInstanceConstant
// 0x000C (FullSize[0x0114] - InheritedSize[0x0108])
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	unsigned char                                      bIsLayerThumbnail : 1;                                     // 0x0108(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YM70[0x3];                                     // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DataWeightmapIndex;                                        // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DataWeightmapSize;                                         // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		return ptr;
	}



};

// Class Landscape.LandscapeMeshProxyActor
// 0x0004 (FullSize[0x0244] - InheritedSize[0x0240])
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                               // 0x0240(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		return ptr;
	}



};

// Class Landscape.LandscapeMeshProxyComponent
// 0x002C (FullSize[0x0540] - InheritedSize[0x0514])
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                       LandscapeGuid;                                             // 0x0514(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	TArray<struct FIntPoint>                           ProxyComponentBases;                                       // 0x0524(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	int8_t                                             ProxyLOD;                                                  // 0x0530(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5GY9[0xF];                                     // 0x0531(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeProxy
// 0x02A4 (FullSize[0x04E4] - InheritedSize[0x0240])
class ALandscapeProxy : public AActor
{
public:
	unsigned char                                      UnknownData_OM8O[0x4];                                     // 0x0240(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULandscapeSplinesComponent*                  SplineComponent;                                           // 0x0244(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       LandscapeGuid;                                             // 0x0248(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FIntPoint                                   LandscapeSectionOffset;                                    // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                MaxLODLevel;                                               // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StaticLightingLOD;                                         // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                       // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StreamingDistanceMultiplier;                               // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          LandscapeMaterial;                                         // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          LandscapeHoleMaterial;                                     // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LODDistanceFactor;                                         // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                       // 0x027C(0x000C) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                       // 0x0288(0x000C) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                         // 0x0294(0x000C) (ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K8JE[0x48];                                    // 0x02A0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StaticLightingResolution;                                  // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                            // 0x02EC(0x001C) (Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCastStaticShadow : 1;                                     // 0x0308(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                 // 0x0308(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      bCastFarShadow : 1;                                        // 0x0308(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      bIsProxy : 1;                                              // 0x0308(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LEFY[0x3];                                     // 0x0309(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                         // 0x030C(0x0018) (Edit, NativeAccessSpecifierPublic)
	int                                                CollisionMipLevel;                                         // 0x0324(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionThickness;                                        // 0x0328(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBodyInstance                               BodyInstance;                                              // 0x032C(0x0128) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bBakeMaterialPositionOffsetIntoCollision;                  // 0x0454(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TEGS[0x3];                                     // 0x0455(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ComponentSizeQuads;                                        // 0x0458(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SubsectionSizeQuads;                                       // 0x045C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSubsections;                                            // 0x0460(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsedForNavigation : 1;                                    // 0x0464(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C7DX[0x3];                                     // 0x0465(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ENavDataGatheringMode>          NavigationGeometryGatheringMode;                           // 0x0468(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Landscape_ELandscapeLODFalloff>        LODFalloff;                                                // 0x0469(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_76Y7[0x7A];                                    // 0x046A(0x007A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeProxy");
		return ptr;
	}



	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
};

// Class Landscape.Landscape
// 0x0000 (FullSize[0x04E4] - InheritedSize[0x04E4])
class ALandscape : public ALandscapeProxy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.Landscape");
		return ptr;
	}



};

// Class Landscape.LandscapeSplinesComponent
// 0x0024 (FullSize[0x0450] - InheritedSize[0x042C])
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                             // 0x042C(0x000C) (ZeroConstructor, Protected, TextExportTransient, NativeAccessSpecifierProtected)
	TArray<class ULandscapeSplineSegment*>             Segments;                                                  // 0x0438(0x000C) (ZeroConstructor, Protected, TextExportTransient, NativeAccessSpecifierProtected)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                               // 0x0444(0x000C) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeSplineSegment
// 0x0068 (FullSize[0x0084] - InheritedSize[0x001C])
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                          // 0x001C(0x0020) (Edit, EditFixedSize, NativeAccessSpecifierPublic)
	struct FInterpCurveVector                          SplineInfo;                                                // 0x003C(0x0014) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                    // 0x0050(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FBox                                        Bounds;                                                    // 0x005C(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                       // 0x0078(0x000C) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		return ptr;
	}



};

// Class Landscape.LandscapeSplineControlPoint
// 0x005C (FullSize[0x0078] - InheritedSize[0x001C])
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                                     Location;                                                  // 0x001C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Width;                                                     // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SideFalloff;                                               // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndFalloff;                                                // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                         // 0x0040(0x000C) (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                    // 0x004C(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FBox                                        Bounds;                                                    // 0x0058(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UControlPointMeshComponent*                  LocalMeshComponent;                                        // 0x0074(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x000C (FullSize[0x005C] - InheritedSize[0x0050])
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                                // 0x0050(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x001C (FullSize[0x006C] - InheritedSize[0x0050])
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                    // 0x0050(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                            // 0x005C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0014 (FullSize[0x0064] - InheritedSize[0x0050])
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<Landscape_ETerrainCoordMappingType>    MappingType;                                               // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Landscape_ELandscapeCustomizedCoordType> CustomUVType;                                              // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PR6U[0x2];                                     // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MappingScale;                                              // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MappingRotation;                                           // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MappingPanU;                                               // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MappingPanV;                                               // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x001C (FullSize[0x006C] - InheritedSize[0x0050])
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreviewWeight;                                             // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                            // 0x005C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0074 (FullSize[0x00C4] - InheritedSize[0x0050])
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                 // 0x0050(0x002C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                            LayerNotUsed;                                              // 0x007C(0x002C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       ParameterName;                                             // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PreviewUsed : 1;                                           // 0x00B0(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WEO1[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       ExpressionGUID;                                            // 0x00B4(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0080 (FullSize[0x00D0] - InheritedSize[0x0050])
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                      // 0x0050(0x002C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                            Layer;                                                     // 0x007C(0x002C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       ParameterName;                                             // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreviewWeight;                                             // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ConstBase;                                                 // 0x00B4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                            // 0x00C0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct FGuid                                       ExpressionGUID;                                            // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
