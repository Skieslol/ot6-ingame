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

// Class Foliage.FoliageInstancedStaticMeshComponent
// 0x0018 (FullSize[0x0650] - InheritedSize[0x0638])
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	struct FScriptMulticastDelegate                    OnInstanceTakePointDamage;                                 // 0x0638(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnInstanceTakeRadialDamage;                                // 0x0644(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.FoliageInstancedStaticMeshComponent");
		return ptr;
	}



};

// Class Foliage.FoliageStatistics
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.FoliageStatistics");
		return ptr;
	}



	int STATIC_FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);
	int STATIC_FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box);
};

// Class Foliage.FoliageType
// 0x02A8 (FullSize[0x02C4] - InheritedSize[0x001C])
class UFoliageType : public UObject
{
public:
	struct FGuid                                       UpdateGuid;                                                // 0x001C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Density;                                                   // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DensityAdjustmentFactor;                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Foliage_EFoliageScaling>               Scaling;                                                   // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JOG0[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFloatInterval                              ScaleX;                                                    // 0x003C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFloatInterval                              ScaleY;                                                    // 0x0044(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFloatInterval                              ScaleZ;                                                    // 0x004C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Foliage_EFoliageVertexColorMask>       VertexColorMask;                                           // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0I07[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VertexColorMaskThreshold;                                  // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      VertexColorMaskInvert : 1;                                 // 0x005C(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7NB0[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFloatInterval                              ZOffset;                                                   // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      AlignToNormal : 1;                                         // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M0MF[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AlignMaxAngle;                                             // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      RandomYaw : 1;                                             // 0x0070(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7WK3[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RandomPitchAngle;                                          // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                              GroundSlopeAngle;                                          // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFloatInterval                              Height;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               LandscapeLayers;                                           // 0x0088(0x000C) (Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FName                                       LandscapeLayer;                                            // 0x0094(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CollisionWithWorld : 1;                                    // 0x009C(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U6X6[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CollisionScale;                                            // 0x00A0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              MinimumLayerWeight;                                        // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoxSphereBounds                            MeshBounds;                                                // 0x00B0(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     LowBoundOriginRadius;                                      // 0x00CC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EComponentMobility>             Mobility;                                                  // 0x00D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OBVX[0x3];                                     // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInt32Interval                              CullDistance;                                              // 0x00DC(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableStaticLighting : 1;                                 // 0x00E4(0x0001) BIT_FIELD (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      CastShadow : 1;                                            // 0x00E4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectDynamicIndirectLighting : 1;                        // 0x00E4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectDistanceFieldLighting : 1;                          // 0x00E4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bCastDynamicShadow : 1;                                    // 0x00E4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bCastStaticShadow : 1;                                     // 0x00E4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                 // 0x00E4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      bReceivesDecals : 1;                                       // 0x00E4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideLightMapRes : 1;                                  // 0x00E5(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HIFW[0x2];                                     // 0x00E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                OverriddenLightMapRes;                                     // 0x00E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseAsOccluder : 1;                                        // 0x00EC(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SFTG[0x3];                                     // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBodyInstance                               BodyInstance;                                              // 0x00F0(0x0128) (Edit, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EHasCustomNavigableGeometry>    CustomNavigableGeometry;                                   // 0x0218(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4JNM[0x3];                                     // 0x0219(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint64_t                                           HiddenEditorViews;                                         // 0x021C(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      IsSelected : 1;                                            // 0x0224(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CUSM[0x3];                                     // 0x0225(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CollisionRadius;                                           // 0x0228(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShadeRadius;                                               // 0x022C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSteps;                                                  // 0x0230(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InitialSeedDensity;                                        // 0x0234(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageSpreadDistance;                                     // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpreadVariance;                                            // 0x023C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SeedsPerStep;                                              // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DistributionSeed;                                          // 0x0244(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxInitialSeedOffset;                                      // 0x0248(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanGrowInShade;                                           // 0x024C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bSpawnsInShade;                                            // 0x024D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y8ED[0x2];                                     // 0x024E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxInitialAge;                                             // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAge;                                                    // 0x0254(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverlapPriority;                                           // 0x0258(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                              ProceduralScale;                                           // 0x025C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          ScaleCurve;                                                // 0x0264(0x0058) (Edit, NativeAccessSpecifierPublic)
	int                                                ChangeCount;                                               // 0x02BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReapplyDensity : 1;                                        // 0x02C0(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      ReapplyRadius : 1;                                         // 0x02C0(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      ReapplyAlignToNormal : 1;                                  // 0x02C0(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      ReapplyRandomYaw : 1;                                      // 0x02C0(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      ReapplyScaling : 1;                                        // 0x02C0(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      ReapplyScaleX : 1;                                         // 0x02C0(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      ReapplyScaleY : 1;                                         // 0x02C0(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      ReapplyScaleZ : 1;                                         // 0x02C0(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      ReapplyRandomPitchAngle : 1;                               // 0x02C1(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      ReapplyGroundSlope : 1;                                    // 0x02C1(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      ReapplyHeight : 1;                                         // 0x02C1(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      ReapplyLandscapeLayers : 1;                                // 0x02C1(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      ReapplyZOffset : 1;                                        // 0x02C1(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      ReapplyCollisionWithWorld : 1;                             // 0x02C1(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      ReapplyVertexColorMask : 1;                                // 0x02C1(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UUGN[0x2];                                     // 0x02C2(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.FoliageType");
		return ptr;
	}



};

// Class Foliage.FoliageType_InstancedStaticMesh
// 0x0014 (FullSize[0x02D8] - InheritedSize[0x02C4])
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	class UStaticMesh*                                 Mesh;                                                      // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                         // 0x02C8(0x000C) (Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UClass*                                      ComponentClass;                                            // 0x02D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.FoliageType_InstancedStaticMesh");
		return ptr;
	}



};

// Class Foliage.InstancedFoliageActor
// 0x003C (FullSize[0x027C] - InheritedSize[0x0240])
class AInstancedFoliageActor : public AActor
{
public:
	unsigned char                                      UnknownData_I2FT[0x3C];                                    // 0x0240(0x003C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.InstancedFoliageActor");
		return ptr;
	}



};

// Class Foliage.InteractiveFoliageActor
// 0x0058 (FullSize[0x02A0] - InheritedSize[0x0248])
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	class UCapsuleComponent*                           CapsuleComponent;                                          // 0x0248(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     TouchingActorEntryPosition;                                // 0x024C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FVector                                     FoliageVelocity;                                           // 0x0258(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FVector                                     FoliageForce;                                              // 0x0264(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FVector                                     FoliagePosition;                                           // 0x0270(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	float                                              FoliageDamageImpulseScale;                                 // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FoliageTouchImpulseScale;                                  // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FoliageStiffness;                                          // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FoliageStiffnessQuadratic;                                 // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FoliageDamping;                                            // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDamageImpulse;                                          // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxTouchImpulse;                                           // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxForce;                                                  // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Mass;                                                      // 0x029C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.InteractiveFoliageActor");
		return ptr;
	}



	void CapsuleTouched(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};

// Class Foliage.InteractiveFoliageComponent
// 0x000C (FullSize[0x0520] - InheritedSize[0x0514])
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData_8ZJL[0xC];                                     // 0x0514(0x000C) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.InteractiveFoliageComponent");
		return ptr;
	}



};

// Class Foliage.ProceduralFoliageBlockingVolume
// 0x0004 (FullSize[0x026C] - InheritedSize[0x0268])
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                   // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.ProceduralFoliageBlockingVolume");
		return ptr;
	}



};

// Class Foliage.ProceduralFoliageComponent
// 0x001C (FullSize[0x00A8] - InheritedSize[0x008C])
class UProceduralFoliageComponent : public UActorComponent
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                            // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TileOverlap;                                               // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AVolume*                                     SpawningVolume;                                            // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                       ProceduralGuid;                                            // 0x0098(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.ProceduralFoliageComponent");
		return ptr;
	}



};

// Class Foliage.ProceduralFoliageSpawner
// 0x0034 (FullSize[0x0050] - InheritedSize[0x001C])
class UProceduralFoliageSpawner : public UObject
{
public:
	int                                                RandomSeed;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TileSize;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumUniqueTiles;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YM4E[0x4];                                     // 0x0028(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFoliageTypeObject>                  FoliageTypes;                                              // 0x002C(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                               bNeedsSimulation;                                          // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BT16[0x17];                                    // 0x0039(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.ProceduralFoliageSpawner");
		return ptr;
	}



	void Simulate(int NumSteps);
};

// Class Foliage.ProceduralFoliageTile
// 0x00DC (FullSize[0x00F8] - InheritedSize[0x001C])
class UProceduralFoliageTile : public UObject
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5UWK[0x78];                                    // 0x0020(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FProceduralFoliageInstance>          InstancesArray;                                            // 0x0098(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9R62[0x54];                                    // 0x00A4(0x0054) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.ProceduralFoliageTile");
		return ptr;
	}



};

// Class Foliage.ProceduralFoliageVolume
// 0x0004 (FullSize[0x026C] - InheritedSize[0x0268])
class AProceduralFoliageVolume : public AVolume
{
public:
	class UProceduralFoliageComponent*                 ProceduralComponent;                                       // 0x0268(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Foliage.ProceduralFoliageVolume");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
