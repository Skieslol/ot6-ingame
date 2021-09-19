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

// Enum Engine.EEndPlayReason
enum class Engine_EEndPlayReason : uint8_t
{
	EEndPlayReason__Destroyed      = 0,
	EEndPlayReason__LevelTransition = 1,
	EEndPlayReason__EndPlayInEditor = 2,
	EEndPlayReason__RemovedFromWorld = 3,
	EEndPlayReason__Quit           = 4,
	EEndPlayReason__EEndPlayReason_MAX = 5,

};

// Enum Engine.ENavPathEvent
enum class Engine_ENavPathEvent : uint8_t
{
	ENavPathEvent__Cleared         = 0,
	ENavPathEvent__NewPath         = 1,
	ENavPathEvent__UpdatedDueToGoalMoved = 2,
	ENavPathEvent__UpdatedDueToNavigationChanged = 3,
	ENavPathEvent__Invalidated     = 4,
	ENavPathEvent__RePathFailed    = 5,
	ENavPathEvent__Custom          = 6,
	ENavPathEvent__ENavPathEvent_MAX = 7,

};

// Enum Engine.ETickingGroup
enum class Engine_ETickingGroup : uint8_t
{
	TG_PrePhysics                  = 0,
	TG_StartPhysics                = 1,
	TG_DuringPhysics               = 2,
	TG_EndPhysics                  = 3,
	TG_PostPhysics                 = 4,
	TG_PostUpdateWork              = 5,
	TG_LastDemotable               = 6,
	TG_NewlySpawned                = 7,
	TG_MAX                         = 8,

};

// Enum Engine.EComponentCreationMethod
enum class Engine_EComponentCreationMethod : uint8_t
{
	EComponentCreationMethod__Native = 0,
	EComponentCreationMethod__SimpleConstructionScript = 1,
	EComponentCreationMethod__UserConstructionScript = 2,
	EComponentCreationMethod__Instance = 3,
	EComponentCreationMethod__EComponentCreationMethod_MAX = 4,

};

// Enum Engine.EPlaneConstraintAxisSetting
enum class Engine_EPlaneConstraintAxisSetting : uint8_t
{
	EPlaneConstraintAxisSetting__Custom = 0,
	EPlaneConstraintAxisSetting__X = 1,
	EPlaneConstraintAxisSetting__Y = 2,
	EPlaneConstraintAxisSetting__Z = 3,
	EPlaneConstraintAxisSetting__UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting__EPlaneConstraintAxisSetting_MAX = 5,

};

// Enum Engine.EInterpToBehaviourType
enum class Engine_EInterpToBehaviourType : uint8_t
{
	EInterpToBehaviourType__OneShot = 0,
	EInterpToBehaviourType__OneShot_Reverse = 1,
	EInterpToBehaviourType__Loop_Reset = 2,
	EInterpToBehaviourType__PingPong = 3,
	EInterpToBehaviourType__EInterpToBehaviourType_MAX = 4,

};

// Enum Engine.EPlatformInterfaceDataType
enum class Engine_EPlatformInterfaceDataType : uint8_t
{
	PIDT_None                      = 0,
	PIDT_Int                       = 1,
	PIDT_Float                     = 2,
	PIDT_String                    = 3,
	PIDT_Object                    = 4,
	PIDT_Custom                    = 5,
	PIDT_MAX                       = 6,

};

// Enum Engine.EMovementMode
enum class Engine_EMovementMode : uint8_t
{
	MOVE_None                      = 0,
	MOVE_Walking                   = 1,
	MOVE_NavWalking                = 2,
	MOVE_Falling                   = 3,
	MOVE_Swimming                  = 4,
	MOVE_Flying                    = 5,
	MOVE_Custom                    = 6,
	MOVE_MAX                       = 7,

};

// Enum Engine.EOverlapFilterOption
enum class Engine_EOverlapFilterOption : uint8_t
{
	OverlapFilter_All              = 0,
	OverlapFilter_DynamicOnly      = 1,
	OverlapFilter_StaticOnly       = 2,
	OverlapFilter_MAX              = 3,

};

// Enum Engine.EObjectTypeQuery
enum class Engine_EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1               = 0,
	ObjectTypeQuery2               = 1,
	ObjectTypeQuery3               = 2,
	ObjectTypeQuery4               = 3,
	ObjectTypeQuery5               = 4,
	ObjectTypeQuery6               = 5,
	ObjectTypeQuery7               = 6,
	ObjectTypeQuery8               = 7,
	ObjectTypeQuery9               = 8,
	ObjectTypeQuery10              = 9,
	ObjectTypeQuery11              = 10,
	ObjectTypeQuery12              = 11,
	ObjectTypeQuery13              = 12,
	ObjectTypeQuery14              = 13,
	ObjectTypeQuery15              = 14,
	ObjectTypeQuery16              = 15,
	ObjectTypeQuery17              = 16,
	ObjectTypeQuery18              = 17,
	ObjectTypeQuery19              = 18,
	ObjectTypeQuery20              = 19,
	ObjectTypeQuery21              = 20,
	ObjectTypeQuery22              = 21,
	ObjectTypeQuery23              = 22,
	ObjectTypeQuery24              = 23,
	ObjectTypeQuery25              = 24,
	ObjectTypeQuery26              = 25,
	ObjectTypeQuery27              = 26,
	ObjectTypeQuery28              = 27,
	ObjectTypeQuery29              = 28,
	ObjectTypeQuery30              = 29,
	ObjectTypeQuery31              = 30,
	ObjectTypeQuery32              = 31,
	ObjectTypeQuery_MAX            = 32,
	EObjectTypeQuery_MAX           = 33,

};

// Enum Engine.EDrawDebugTrace
enum class Engine_EDrawDebugTrace : uint8_t
{
	EDrawDebugTrace__None          = 0,
	EDrawDebugTrace__ForOneFrame   = 1,
	EDrawDebugTrace__ForDuration   = 2,
	EDrawDebugTrace__Persistent    = 3,
	EDrawDebugTrace__EDrawDebugTrace_MAX = 4,

};

// Enum Engine.ETraceTypeQuery
enum class Engine_ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1                = 0,
	TraceTypeQuery2                = 1,
	TraceTypeQuery3                = 2,
	TraceTypeQuery4                = 3,
	TraceTypeQuery5                = 4,
	TraceTypeQuery6                = 5,
	TraceTypeQuery7                = 6,
	TraceTypeQuery8                = 7,
	TraceTypeQuery9                = 8,
	TraceTypeQuery10               = 9,
	TraceTypeQuery11               = 10,
	TraceTypeQuery12               = 11,
	TraceTypeQuery13               = 12,
	TraceTypeQuery14               = 13,
	TraceTypeQuery15               = 14,
	TraceTypeQuery16               = 15,
	TraceTypeQuery17               = 16,
	TraceTypeQuery18               = 17,
	TraceTypeQuery19               = 18,
	TraceTypeQuery20               = 19,
	TraceTypeQuery21               = 20,
	TraceTypeQuery22               = 21,
	TraceTypeQuery23               = 22,
	TraceTypeQuery24               = 23,
	TraceTypeQuery25               = 24,
	TraceTypeQuery26               = 25,
	TraceTypeQuery27               = 26,
	TraceTypeQuery28               = 27,
	TraceTypeQuery29               = 28,
	TraceTypeQuery30               = 29,
	TraceTypeQuery31               = 30,
	TraceTypeQuery32               = 31,
	TraceTypeQuery_MAX             = 32,
	ETraceTypeQuery_MAX            = 33,

};

// Enum Engine.ECollisionChannel
enum class Engine_ECollisionChannel : uint8_t
{
	ECC_WorldStatic                = 0,
	ECC_WorldDynamic               = 1,
	ECC_Pawn                       = 2,
	ECC_Visibility                 = 3,
	ECC_Camera                     = 4,
	ECC_PhysicsBody                = 5,
	ECC_Vehicle                    = 6,
	ECC_Destructible               = 7,
	ECC_EngineTraceChannel1        = 8,
	ECC_EngineTraceChannel2        = 9,
	ECC_EngineTraceChannel3        = 10,
	ECC_EngineTraceChannel4        = 11,
	ECC_EngineTraceChannel5        = 12,
	ECC_EngineTraceChannel6        = 13,
	ECC_GameTraceChannel1          = 14,
	ECC_GameTraceChannel2          = 15,
	ECC_GameTraceChannel3          = 16,
	ECC_GameTraceChannel4          = 17,
	ECC_GameTraceChannel5          = 18,
	ECC_GameTraceChannel6          = 19,
	ECC_GameTraceChannel7          = 20,
	ECC_GameTraceChannel8          = 21,
	ECC_GameTraceChannel9          = 22,
	ECC_GameTraceChannel10         = 23,
	ECC_GameTraceChannel11         = 24,
	ECC_GameTraceChannel12         = 25,
	ECC_GameTraceChannel13         = 26,
	ECC_GameTraceChannel14         = 27,
	ECC_GameTraceChannel15         = 28,
	ECC_GameTraceChannel16         = 29,
	ECC_GameTraceChannel17         = 30,
	ECC_GameTraceChannel18         = 31,
	ECC_OverlapAll_Deprecated      = 32,
	ECC_MAX                        = 33,

};

// Enum Engine.EMoveComponentAction
enum class Engine_EMoveComponentAction : uint8_t
{
	EMoveComponentAction__Move     = 0,
	EMoveComponentAction__Stop     = 1,
	EMoveComponentAction__Return   = 2,
	EMoveComponentAction__EMoveComponentAction_MAX = 3,

};

// Enum Engine.EQuitPreference
enum class Engine_EQuitPreference : uint8_t
{
	EQuitPreference__Quit          = 0,
	EQuitPreference__Background    = 1,
	EQuitPreference__EQuitPreference_MAX = 2,

};

// Enum Engine.EViewModeIndex
enum class Engine_EViewModeIndex : uint8_t
{
	VMI_BrushWireframe             = 0,
	VMI_Wireframe                  = 1,
	VMI_Unlit                      = 2,
	VMI_Lit                        = 3,
	VMI_Lit_DetailLighting         = 4,
	VMI_LightingOnly               = 5,
	VMI_LightComplexity            = 6,
	VMI_ShaderComplexity           = 7,
	VMI_LightmapDensity            = 8,
	VMI_LitLightmapDensity         = 9,
	VMI_ReflectionOverride         = 10,
	VMI_VisualizeBuffer            = 11,
	VMI_StationaryLightOverlap     = 12,
	VMI_CollisionPawn              = 13,
	VMI_CollisionVisibility        = 14,
	VMI_VertexDensities            = 15,
	VMI_LODColoration              = 16,
	VMI_QuadComplexity             = 17,
	VMI_WantedMipsAccuracy         = 18,
	VMI_TexelFactorAccuracy        = 19,
	VMI_Max                        = 20,
	VMI_Unknown                    = 21,

};

// Enum Engine.EDemoPlayFailure
enum class Engine_EDemoPlayFailure : uint8_t
{
	EDemoPlayFailure__Generic      = 0,
	EDemoPlayFailure__DemoNotFound = 1,
	EDemoPlayFailure__Corrupt      = 2,
	EDemoPlayFailure__InvalidVersion = 3,
	EDemoPlayFailure__EDemoPlayFailure_MAX = 4,

};

// Enum Engine.ETravelType
enum class Engine_ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2,
	TRAVEL_MAX                     = 3,

};

// Enum Engine.ETravelFailure
enum class Engine_ETravelFailure : uint8_t
{
	ETravelFailure__NoLevel        = 0,
	ETravelFailure__LoadMapFailure = 1,
	ETravelFailure__InvalidURL     = 2,
	ETravelFailure__PackageMissing = 3,
	ETravelFailure__PackageVersion = 4,
	ETravelFailure__NoDownload     = 5,
	ETravelFailure__TravelFailure  = 6,
	ETravelFailure__CheatCommands  = 7,
	ETravelFailure__PendingNetGameCreateFailure = 8,
	ETravelFailure__CloudSaveFailure = 9,
	ETravelFailure__ServerTravelFailure = 10,
	ETravelFailure__ClientTravelFailure = 11,
	ETravelFailure__ETravelFailure_MAX = 12,

};

// Enum Engine.ENetworkLagState
enum class Engine_ENetworkLagState : uint8_t
{
	ENetworkLagState__NotLagging   = 0,
	ENetworkLagState__Lagging      = 1,
	ENetworkLagState__ENetworkLagState_MAX = 2,

};

// Enum Engine.ENetworkFailure
enum class Engine_ENetworkFailure : uint8_t
{
	ENetworkFailure__NetDriverAlreadyExists = 0,
	ENetworkFailure__NetDriverCreateFailure = 1,
	ENetworkFailure__NetDriverListenFailure = 2,
	ENetworkFailure__ConnectionLost = 3,
	ENetworkFailure__ConnectionTimeout = 4,
	ENetworkFailure__FailureReceived = 5,
	ENetworkFailure__OutdatedClient = 6,
	ENetworkFailure__OutdatedServer = 7,
	ENetworkFailure__PendingConnectionFailure = 8,
	ENetworkFailure__ENetworkFailure_MAX = 9,

};

// Enum Engine.EInputEvent
enum class Engine_EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5,

};

// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class Engine_ESpawnActorCollisionHandlingMethod : uint8_t
{
	ESpawnActorCollisionHandlingMethod__Undefined = 0,
	ESpawnActorCollisionHandlingMethod__AlwaysSpawn = 1,
	ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButAlwaysSpawn = 2,
	ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButDontSpawnIfColliding = 3,
	ESpawnActorCollisionHandlingMethod__DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod__ESpawnActorCollisionHandlingMethod_MAX = 5,

};

// Enum Engine.EAngularConstraintMotion
enum class Engine_EAngularConstraintMotion : uint8_t
{
	ACM_Free                       = 0,
	ACM_Limited                    = 1,
	ACM_Locked                     = 2,
	ACM_MAX                        = 3,

};

// Enum Engine.EComponentSocketType
enum class Engine_EComponentSocketType : uint8_t
{
	EComponentSocketType__Invalid  = 0,
	EComponentSocketType__Bone     = 1,
	EComponentSocketType__Socket   = 2,
	EComponentSocketType__EComponentSocketType_MAX = 3,

};

// Enum Engine.EComponentMobility
enum class Engine_EComponentMobility : uint8_t
{
	EComponentMobility__Static     = 0,
	EComponentMobility__Stationary = 1,
	EComponentMobility__Movable    = 2,
	EComponentMobility__EComponentMobility_MAX = 3,

};

// Enum Engine.EPhysicalSurface
enum class Engine_EPhysicalSurface : uint8_t
{
	SurfaceType_Default            = 0,
	SurfaceType1                   = 1,
	SurfaceType2                   = 2,
	SurfaceType3                   = 3,
	SurfaceType4                   = 4,
	SurfaceType5                   = 5,
	SurfaceType6                   = 6,
	SurfaceType7                   = 7,
	SurfaceType8                   = 8,
	SurfaceType9                   = 9,
	SurfaceType10                  = 10,
	SurfaceType11                  = 11,
	SurfaceType12                  = 12,
	SurfaceType13                  = 13,
	SurfaceType14                  = 14,
	SurfaceType15                  = 15,
	SurfaceType16                  = 16,
	SurfaceType17                  = 17,
	SurfaceType18                  = 18,
	SurfaceType19                  = 19,
	SurfaceType20                  = 20,
	SurfaceType21                  = 21,
	SurfaceType22                  = 22,
	SurfaceType23                  = 23,
	SurfaceType24                  = 24,
	SurfaceType25                  = 25,
	SurfaceType26                  = 26,
	SurfaceType27                  = 27,
	SurfaceType28                  = 28,
	SurfaceType29                  = 29,
	SurfaceType30                  = 30,
	SurfaceType31                  = 31,
	SurfaceType32                  = 32,
	SurfaceType33                  = 33,
	SurfaceType34                  = 34,
	SurfaceType35                  = 35,
	SurfaceType36                  = 36,
	SurfaceType37                  = 37,
	SurfaceType38                  = 38,
	SurfaceType39                  = 39,
	SurfaceType40                  = 40,
	SurfaceType41                  = 41,
	SurfaceType42                  = 42,
	SurfaceType43                  = 43,
	SurfaceType44                  = 44,
	SurfaceType45                  = 45,
	SurfaceType46                  = 46,
	SurfaceType47                  = 47,
	SurfaceType48                  = 48,
	SurfaceType49                  = 49,
	SurfaceType50                  = 50,
	SurfaceType51                  = 51,
	SurfaceType52                  = 52,
	SurfaceType53                  = 53,
	SurfaceType54                  = 54,
	SurfaceType55                  = 55,
	SurfaceType56                  = 56,
	SurfaceType57                  = 57,
	SurfaceType58                  = 58,
	SurfaceType59                  = 59,
	SurfaceType60                  = 60,
	SurfaceType61                  = 61,
	SurfaceType62                  = 62,
	SurfaceType_Max                = 63,
	EPhysicalSurface_MAX           = 64,

};

// Enum Engine.EWalkableSlopeBehavior
enum class Engine_EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default          = 0,
	WalkableSlope_Increase         = 1,
	WalkableSlope_Decrease         = 2,
	WalkableSlope_Unwalkable       = 3,
	WalkableSlope_Max              = 4,

};

// Enum Engine.ERotatorQuantization
enum class Engine_ERotatorQuantization : uint8_t
{
	ERotatorQuantization__ByteComponents = 0,
	ERotatorQuantization__ShortComponents = 1,
	ERotatorQuantization__ERotatorQuantization_MAX = 2,

};

// Enum Engine.EVectorQuantization
enum class Engine_EVectorQuantization : uint8_t
{
	EVectorQuantization__RoundWholeNumber = 0,
	EVectorQuantization__RoundOneDecimal = 1,
	EVectorQuantization__RoundTwoDecimals = 2,
	EVectorQuantization__EVectorQuantization_MAX = 3,

};

// Enum Engine.EAutoPossessAI
enum class Engine_EAutoPossessAI : uint8_t
{
	EAutoPossessAI__Disabled       = 0,
	EAutoPossessAI__PlacedInWorld  = 1,
	EAutoPossessAI__Spawned        = 2,
	EAutoPossessAI__PlacedInWorldOrSpawned = 3,
	EAutoPossessAI__EAutoPossessAI_MAX = 4,

};

// Enum Engine.EAutoReceiveInput
enum class Engine_EAutoReceiveInput : uint8_t
{
	EAutoReceiveInput__Disabled    = 0,
	EAutoReceiveInput__Player0     = 1,
	EAutoReceiveInput__Player1     = 2,
	EAutoReceiveInput__Player2     = 3,
	EAutoReceiveInput__Player3     = 4,
	EAutoReceiveInput__Player4     = 5,
	EAutoReceiveInput__Player5     = 6,
	EAutoReceiveInput__Player6     = 7,
	EAutoReceiveInput__Player7     = 8,
	EAutoReceiveInput__EAutoReceiveInput_MAX = 9,

};

// Enum Engine.ENetDormancy
enum class Engine_ENetDormancy : uint8_t
{
	DORM_Never                     = 0,
	DORM_Awake                     = 1,
	DORM_DormantAll                = 2,
	DORM_DormantPartial            = 3,
	DORM_Initial                   = 4,
	DORN_MAX                       = 5,
	ENetDormancy_MAX               = 6,

};

// Enum Engine.ENetRole
enum class Engine_ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4,

};

// Enum Engine.ETextureSizingType
enum class Engine_ETextureSizingType : uint8_t
{
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX          = 4,

};

// Enum Engine.EMeshFeatureImportance
enum class Engine_EMeshFeatureImportance : uint8_t
{
	EMeshFeatureImportance__Off    = 0,
	EMeshFeatureImportance__Lowest = 1,
	EMeshFeatureImportance__Low    = 2,
	EMeshFeatureImportance__Normal = 3,
	EMeshFeatureImportance__High   = 4,
	EMeshFeatureImportance__Highest = 5,
	EMeshFeatureImportance__EMeshFeatureImportance_MAX = 6,

};

// Enum Engine.EUpdateRateShiftBucket
enum class Engine_EUpdateRateShiftBucket : uint8_t
{
	EUpdateRateShiftBucket__ShiftBucket0 = 0,
	EUpdateRateShiftBucket__ShiftBucket1 = 1,
	EUpdateRateShiftBucket__ShiftBucket2 = 2,
	EUpdateRateShiftBucket__ShiftBucket3 = 3,
	EUpdateRateShiftBucket__ShiftBucket4 = 4,
	EUpdateRateShiftBucket__ShiftBucket5 = 5,
	EUpdateRateShiftBucket__ShiftBucketMax = 6,
	EUpdateRateShiftBucket__EUpdateRateShiftBucket_MAX = 7,

};

// Enum Engine.EShadowMapFlags
enum class Engine_EShadowMapFlags : uint8_t
{
	SMF_None                       = 0,
	SMF_Streamed                   = 1,
	SMF_MAX                        = 2,

};

// Enum Engine.ELightMapPaddingType
enum class Engine_ELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding             = 0,
	LMPT_PrePadding                = 1,
	LMPT_NoPadding                 = 2,
	LMPT_MAX                       = 3,

};

// Enum Engine.ECollisionEnabled
enum class Engine_ECollisionEnabled : uint8_t
{
	ECollisionEnabled__NoCollision = 0,
	ECollisionEnabled__QueryOnly   = 1,
	ECollisionEnabled__PhysicsOnly = 2,
	ECollisionEnabled__QueryAndPhysics = 3,
	ECollisionEnabled__ECollisionEnabled_MAX = 4,

};

// Enum Engine.ETimelineSigType
enum class Engine_ETimelineSigType : uint8_t
{
	ETS_EventSignature             = 0,
	ETS_FloatSignature             = 1,
	ETS_VectorSignature            = 2,
	ETS_LinearColorSignature       = 3,
	ETS_InvalidSignature           = 4,
	ETS_MAX                        = 5,

};

// Enum Engine.ESleepFamily
enum class Engine_ESleepFamily : uint8_t
{
	ESleepFamily__Normal           = 0,
	ESleepFamily__Sensitive        = 1,
	ESleepFamily__Custom           = 2,
	ESleepFamily__ESleepFamily_MAX = 3,

};

// Enum Engine.ERadialImpulseFalloff
enum class Engine_ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                   = 0,
	RIF_Linear                     = 1,
	RIF_MAX                        = 2,

};

// Enum Engine.EInputConsumeOptions
enum class Engine_EInputConsumeOptions : uint8_t
{
	ICO_ConsumeAll                 = 0,
	ICO_ConsumeBoundKeys           = 1,
	ICO_ConsumeNone                = 2,
	ICO_MAX                        = 3,

};

// Enum Engine.EFilterInterpolationType
enum class Engine_EFilterInterpolationType : uint8_t
{
	BSIT_Average                   = 0,
	BSIT_Linear                    = 1,
	BSIT_Cubic                     = 2,
	BSIT_MAX                       = 3,

};

// Enum Engine.ECollisionResponse
enum class Engine_ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3,

};

// Enum Engine.EPhysicsSceneType
enum class Engine_EPhysicsSceneType : uint8_t
{
	PST_Sync                       = 0,
	PST_Cloth                      = 1,
	PST_Async                      = 2,
	PST_MAX                        = 3,

};

// Enum Engine.ENetworkSmoothingMode
enum class Engine_ENetworkSmoothingMode : uint8_t
{
	ENetworkSmoothingMode__Disabled = 0,
	ENetworkSmoothingMode__Linear  = 1,
	ENetworkSmoothingMode__Exponential = 2,
	ENetworkSmoothingMode__ENetworkSmoothingMode_MAX = 3,

};

// Enum Engine.ETriangleSortAxis
enum class Engine_ETriangleSortAxis : uint8_t
{
	TSA_X_Axis                     = 0,
	TSA_Y_Axis                     = 1,
	TSA_Z_Axis                     = 2,
	TSA_MAX                        = 3,

};

// Enum Engine.ETriangleSortOption
enum class Engine_ETriangleSortOption : uint8_t
{
	TRISORT_None                   = 0,
	TRISORT_CenterRadialDistance   = 1,
	TRISORT_Random                 = 2,
	TRISORT_MergeContiguous        = 3,
	TRISORT_Custom                 = 4,
	TRISORT_CustomLeftRight        = 5,
	TRISORT_MAX                    = 6,

};

// Enum Engine.ELightingBuildQuality
enum class Engine_ELightingBuildQuality : uint8_t
{
	Quality_Preview                = 0,
	Quality_Medium                 = 1,
	Quality_High                   = 2,
	Quality_Production             = 3,
	Quality_MAX                    = 4,

};

// Enum Engine.EMaterialSamplerType
enum class Engine_EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color              = 0,
	SAMPLERTYPE_Grayscale          = 1,
	SAMPLERTYPE_Alpha              = 2,
	SAMPLERTYPE_Normal             = 3,
	SAMPLERTYPE_Masks              = 4,
	SAMPLERTYPE_DistanceFieldFont  = 5,
	SAMPLERTYPE_LinearColor        = 6,
	SAMPLERTYPE_LinearGrayscale    = 7,
	SAMPLERTYPE_MAX                = 8,

};

// Enum Engine.EMaterialTessellationMode
enum class Engine_EMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation             = 0,
	MTM_FlatTessellation           = 1,
	MTM_PNTriangles                = 2,
	MTM_MAX                        = 3,

};

// Enum Engine.EMaterialShadingModel
enum class Engine_EMaterialShadingModel : uint8_t
{
	MSM_Unlit                      = 0,
	MSM_DefaultLit                 = 1,
	MSM_Subsurface                 = 2,
	MSM_PreintegratedSkin          = 3,
	MSM_ClearCoat                  = 4,
	MSM_SubsurfaceProfile          = 5,
	MSM_TwoSidedFoliage            = 6,
	MSM_Hair                       = 7,
	MSM_Cloth                      = 8,
	MSM_Eye                        = 9,
	MSM_MAX                        = 10,

};

// Enum Engine.EParticleCollisionMode
enum class Engine_EParticleCollisionMode : uint8_t
{
	EParticleCollisionMode__SceneDepth = 0,
	EParticleCollisionMode__DistanceField = 1,
	EParticleCollisionMode__EParticleCollisionMode_MAX = 2,

};

// Enum Engine.ETrailWidthMode
enum class Engine_ETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre     = 0,
	ETrailWidthMode_FromFirst      = 1,
	ETrailWidthMode_FromSecond     = 2,
	ETrailWidthMode_MAX            = 3,

};

// Enum Engine.ETranslucentSortPolicy
enum class Engine_ETranslucentSortPolicy : uint8_t
{
	ETranslucentSortPolicy__SortByDistance = 0,
	ETranslucentSortPolicy__SortByProjectedZ = 1,
	ETranslucentSortPolicy__SortAlongAxis = 2,
	ETranslucentSortPolicy__ETranslucentSortPolicy_MAX = 3,

};

// Enum Engine.ETranslucencyLightingMode
enum class Engine_ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional   = 0,
	TLM_VolumetricDirectional      = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface                    = 4,
	TLM_SurfacePerPixelLighting    = 5,
	TLM_MAX                        = 6,

};

// Enum Engine.ESamplerSourceMode
enum class Engine_ESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset           = 0,
	SSM_Wrap_WorldGroupSettings    = 1,
	SSM_Clamp_WorldGroupSettings   = 2,
	SSM_MAX                        = 3,

};

// Enum Engine.EBlendMode
enum class Engine_EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_MAX                      = 5,

};

// Enum Engine.EIndirectLightingCacheQuality
enum class Engine_EIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off                       = 0,
	ILCQ_Point                     = 1,
	ILCQ_Volume                    = 2,
	ILCQ_MAX                       = 3,

};

// Enum Engine.ESceneDepthPriorityGroup
enum class Engine_ESceneDepthPriorityGroup : uint8_t
{
	SDPG_World                     = 0,
	SDPG_Foreground                = 1,
	SDPG_MAX                       = 2,

};

// Enum Engine.EAttachLocation
enum class Engine_EAttachLocation : uint8_t
{
	EAttachLocation__KeepRelativeOffset = 0,
	EAttachLocation__KeepWorldPosition = 1,
	EAttachLocation__SnapToTarget  = 2,
	EAttachLocation__SnapToTargetIncludingScale = 3,
	EAttachLocation__EAttachLocation_MAX = 4,

};

// Enum Engine.EActorMetricsType
enum class Engine_EActorMetricsType : uint8_t
{
	METRICS_VERTS                  = 0,
	METRICS_TRIS                   = 1,
	METRICS_SECTIONS               = 2,
	METRICS_MAX                    = 3,

};

// Enum Engine.EAspectRatioAxisConstraint
enum class Engine_EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3,

};

// Enum Engine.ENodeEnabledState
enum class Engine_ENodeEnabledState : uint8_t
{
	ENodeEnabledState__Enabled     = 0,
	ENodeEnabledState__Disabled    = 1,
	ENodeEnabledState__DevelopmentOnly = 2,
	ENodeEnabledState__ENodeEnabledState_MAX = 3,

};

// Enum Engine.ENodeAdvancedPins
enum class Engine_ENodeAdvancedPins : uint8_t
{
	ENodeAdvancedPins__NoPins      = 0,
	ENodeAdvancedPins__Shown       = 1,
	ENodeAdvancedPins__Hidden      = 2,
	ENodeAdvancedPins__ENodeAdvancedPins_MAX = 3,

};

// Enum Engine.ENodeTitleType
enum class Engine_ENodeTitleType : uint8_t
{
	ENodeTitleType__FullTitle      = 0,
	ENodeTitleType__ListView       = 1,
	ENodeTitleType__EditableTitle  = 2,
	ENodeTitleType__MenuTitle      = 3,
	ENodeTitleType__MAX_TitleTypes = 4,
	ENodeTitleType__ENodeTitleType_MAX = 5,

};

// Enum Engine.EEdGraphPinDirection
enum class Engine_EEdGraphPinDirection : uint8_t
{
	EGPD_Input                     = 0,
	EGPD_Output                    = 1,
	EGPD_MAX                       = 2,

};

// Enum Engine.EBlueprintPinStyleType
enum class Engine_EBlueprintPinStyleType : uint8_t
{
	BPST_Original                  = 0,
	BPST_VariantA                  = 1,
	BPST_MAX                       = 2,

};

// Enum Engine.EBlueprintCompileMode
enum class Engine_EBlueprintCompileMode : uint8_t
{
	EBlueprintCompileMode__Default = 0,
	EBlueprintCompileMode__Development = 1,
	EBlueprintCompileMode__FinalRelease = 2,
	EBlueprintCompileMode__EBlueprintCompileMode_MAX = 3,

};

// Enum Engine.EBlueprintType
enum class Engine_EBlueprintType : uint8_t
{
	BPTYPE_Normal                  = 0,
	BPTYPE_Const                   = 1,
	BPTYPE_MacroLibrary            = 2,
	BPTYPE_Interface               = 3,
	BPTYPE_LevelScript             = 4,
	BPTYPE_FunctionLibrary         = 5,
	BPTYPE_MAX                     = 6,

};

// Enum Engine.EBlueprintStatus
enum class Engine_EBlueprintStatus : uint8_t
{
	BS_Unknown                     = 0,
	BS_Dirty                       = 1,
	BS_Error                       = 2,
	BS_UpToDate                    = 3,
	BS_BeingCreated                = 4,
	BS_UpToDateWithWarnings        = 5,
	BS_MAX                         = 6,

};

// Enum Engine.ERelativeTransformSpace
enum class Engine_ERelativeTransformSpace : uint8_t
{
	RTS_World                      = 0,
	RTS_Actor                      = 1,
	RTS_Component                  = 2,
	RTS_MAX                        = 3,

};

// Enum Engine.EDetailMode
enum class Engine_EDetailMode : uint8_t
{
	DM_Low                         = 0,
	DM_Medium                      = 1,
	DM_High                        = 2,
	DM_MAX                         = 3,

};

// Enum Engine.EBrushType
enum class Engine_EBrushType : uint8_t
{
	Brush_Default                  = 0,
	Brush_Add                      = 1,
	Brush_Subtract                 = 2,
	Brush_MAX                      = 3,

};

// Enum Engine.ECsgOper
enum class Engine_ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4,
	CSG_None                       = 5,
	CSG_MAX                        = 6,

};

// Enum Engine.ReverbPreset
enum class Engine_EReverbPreset : uint8_t
{
	REVERB_Default                 = 0,
	REVERB_Bathroom                = 1,
	REVERB_StoneRoom               = 2,
	REVERB_Auditorium              = 3,
	REVERB_ConcertHall             = 4,
	REVERB_Cave                    = 5,
	REVERB_Hallway                 = 6,
	REVERB_StoneCorridor           = 7,
	REVERB_Alley                   = 8,
	REVERB_Forest                  = 9,
	REVERB_City                    = 10,
	REVERB_Mountains               = 11,
	REVERB_Quarry                  = 12,
	REVERB_Plain                   = 13,
	REVERB_ParkingLot              = 14,
	REVERB_SewerPipe               = 15,
	REVERB_Underwater              = 16,
	REVERB_SmallRoom               = 17,
	REVERB_MediumRoom              = 18,
	REVERB_LargeRoom               = 19,
	REVERB_MediumHall              = 20,
	REVERB_LargeHall               = 21,
	REVERB_Plate                   = 22,
	REVERB_MAX                     = 23,

};

// Enum Engine.EStreamingVolumeUsage
enum class Engine_EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                    = 0,
	SVB_LoadingAndVisibility       = 1,
	SVB_VisibilityBlockingOnLoad   = 2,
	SVB_BlockingOnLoad             = 3,
	SVB_LoadingNotVisible          = 4,
	SVB_MAX                        = 5,

};

// Enum Engine.ENavigationQueryResult
enum class Engine_ENavigationQueryResult : uint8_t
{
	ENavigationQueryResult__Invalid = 0,
	ENavigationQueryResult__Error  = 1,
	ENavigationQueryResult__Fail   = 2,
	ENavigationQueryResult__Success = 3,
	ENavigationQueryResult__ENavigationQueryResult_MAX = 4,

};

// Enum Engine.ENavDataGatheringModeConfig
enum class Engine_ENavDataGatheringModeConfig : uint8_t
{
	ENavDataGatheringModeConfig__Invalid = 0,
	ENavDataGatheringModeConfig__Instant = 1,
	ENavDataGatheringModeConfig__Lazy = 2,
	ENavDataGatheringModeConfig__ENavDataGatheringModeConfig_MAX = 3,

};

// Enum Engine.ENavDataGatheringMode
enum class Engine_ENavDataGatheringMode : uint8_t
{
	ENavDataGatheringMode__Default = 0,
	ENavDataGatheringMode__Instant = 1,
	ENavDataGatheringMode__Lazy    = 2,
	ENavDataGatheringMode__ENavDataGatheringMode_MAX = 3,

};

// Enum Engine.ENavigationOptionFlag
enum class Engine_ENavigationOptionFlag : uint8_t
{
	ENavigationOptionFlag__Default = 0,
	ENavigationOptionFlag__Enable  = 1,
	ENavigationOptionFlag__Disable = 2,
	ENavigationOptionFlag__MAX     = 3,
	ENavigationOptionFlag__ENavigationOptionFlag_MAX = 4,

};

// Enum Engine.EBlendableLocation
enum class Engine_EBlendableLocation : uint8_t
{
	BL_AfterTonemapping            = 0,
	BL_BeforeTonemapping           = 1,
	BL_BeforeTranslucency          = 2,
	BL_ReplacingTonemapper         = 3,
	BL_MAX                         = 4,

};

// Enum Engine.EAutoExposureMethod
enum class Engine_EAutoExposureMethod : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_MAX                        = 2,

};

// Enum Engine.EAntiAliasingMethod
enum class Engine_EAntiAliasingMethod : uint8_t
{
	AAM_None                       = 0,
	AAM_FXAA                       = 1,
	AAM_TemporalAA                 = 2,
	AAM_MAX                        = 3,

};

// Enum Engine.EDepthOfFieldMethod
enum class Engine_EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF                  = 0,
	DOFM_Gaussian                  = 1,
	DOFM_CircleDOF                 = 2,
	DOFM_MAX                       = 3,

};

// Enum Engine.ECameraAnimPlaySpace
enum class Engine_ECameraAnimPlaySpace : uint8_t
{
	ECameraAnimPlaySpace__CameraLocal = 0,
	ECameraAnimPlaySpace__World    = 1,
	ECameraAnimPlaySpace__UserDefined = 2,
	ECameraAnimPlaySpace__ECameraAnimPlaySpace_MAX = 3,

};

// Enum Engine.ECameraProjectionMode
enum class Engine_ECameraProjectionMode : uint8_t
{
	ECameraProjectionMode__Perspective = 0,
	ECameraProjectionMode__Orthographic = 1,
	ECameraProjectionMode__ECameraProjectionMode_MAX = 2,

};

// Enum Engine.EInitialOscillatorOffset
enum class Engine_EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2,

};

// Enum Engine.EViewTargetBlendFunction
enum class Engine_EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                 = 0,
	VTBlend_Cubic                  = 1,
	VTBlend_EaseIn                 = 2,
	VTBlend_EaseOut                = 3,
	VTBlend_EaseInOut              = 4,
	VTBlend_MAX                    = 5,

};

// Enum Engine.EControllerAnalogStick
enum class Engine_EControllerAnalogStick : uint8_t
{
	EControllerAnalogStick__CAS_LeftStick = 0,
	EControllerAnalogStick__CAS_RightStick = 1,
	EControllerAnalogStick__CAS_MAX = 2,

};

// Enum Engine.ERichCurveExtrapolation
enum class Engine_ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle                     = 0,
	RCCE_CycleWithOffset           = 1,
	RCCE_Oscillate                 = 2,
	RCCE_Linear                    = 3,
	RCCE_Constant                  = 4,
	RCCE_None                      = 5,
	RCCE_MAX                       = 6,

};

// Enum Engine.ERichCurveTangentWeightMode
enum class Engine_ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone             = 0,
	RCTWM_WeightedArrive           = 1,
	RCTWM_WeightedLeave            = 2,
	RCTWM_WeightedBoth             = 3,
	RCTWM_MAX                      = 4,

};

// Enum Engine.ERichCurveTangentMode
enum class Engine_ERichCurveTangentMode : uint8_t
{
	RCTM_Auto                      = 0,
	RCTM_User                      = 1,
	RCTM_Break                     = 2,
	RCTM_None                      = 3,
	RCTM_MAX                       = 4,

};

// Enum Engine.ERichCurveInterpMode
enum class Engine_ERichCurveInterpMode : uint8_t
{
	RCIM_Linear                    = 0,
	RCIM_Constant                  = 1,
	RCIM_Cubic                     = 2,
	RCIM_None                      = 3,
	RCIM_MAX                       = 4,

};

// Enum Engine.EDynamicForceFeedbackAction
enum class Engine_EDynamicForceFeedbackAction : uint8_t
{
	EDynamicForceFeedbackAction__Start = 0,
	EDynamicForceFeedbackAction__Update = 1,
	EDynamicForceFeedbackAction__Stop = 2,
	EDynamicForceFeedbackAction__EDynamicForceFeedbackAction_MAX = 3,

};

// Enum Engine.EStandbyType
enum class Engine_EStandbyType : uint8_t
{
	STDBY_Rx                       = 0,
	STDBY_Tx                       = 1,
	STDBY_BadPing                  = 2,
	STDBY_MAX                      = 3,

};

// Enum Engine.EVisibilityAggressiveness
enum class Engine_EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive            = 0,
	VIS_ModeratelyAggressive       = 1,
	VIS_MostAggressive             = 2,
	VIS_Max                        = 3,

};

// Enum Engine.ERuntimeGenerationType
enum class Engine_ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static = 0,
	ERuntimeGenerationType__DynamicModifiersOnly = 1,
	ERuntimeGenerationType__Dynamic = 2,
	ERuntimeGenerationType__LegacyGeneration = 3,
	ERuntimeGenerationType__ERuntimeGenerationType_MAX = 4,

};

// Enum Engine.ERecastPartitioning
enum class Engine_ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone  = 0,
	ERecastPartitioning__Watershed = 1,
	ERecastPartitioning__ChunkyMonotone = 2,
	ERecastPartitioning__ERecastPartitioning_MAX = 3,

};

// Enum Engine.ENavCostDisplay
enum class Engine_ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost     = 0,
	ENavCostDisplay__HeuristicOnly = 1,
	ENavCostDisplay__RealCostOnly  = 2,
	ENavCostDisplay__ENavCostDisplay_MAX = 3,

};

// Enum Engine.ENavLinkDirection
enum class Engine_ENavLinkDirection : uint8_t
{
	ENavLinkDirection__BothWays    = 0,
	ENavLinkDirection__LeftToRight = 1,
	ENavLinkDirection__RightToLeft = 2,
	ENavLinkDirection__ENavLinkDirection_MAX = 3,

};

// Enum Engine.EBoneTranslationRetargetingMode
enum class Engine_EBoneTranslationRetargetingMode : uint8_t
{
	EBoneTranslationRetargetingMode__Animation = 0,
	EBoneTranslationRetargetingMode__Skeleton = 1,
	EBoneTranslationRetargetingMode__AnimationScaled = 2,
	EBoneTranslationRetargetingMode__AnimationRelative = 3,
	EBoneTranslationRetargetingMode__EBoneTranslationRetargetingMode_MAX = 4,

};

// Enum Engine.SkeletalMeshOptimizationType
enum class Engine_ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_MAX                       = 2,

};

// Enum Engine.SkeletalMeshOptimizationImportance
enum class Engine_ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                       = 0,
	SMOI_Lowest                    = 1,
	SMOI_Low                       = 2,
	SMOI_Normal                    = 3,
	SMOI_High                      = 4,
	SMOI_Highest                   = 5,
	SMOI_MAX                       = 6,

};

// Enum Engine.EAnimGroupRole
enum class Engine_EAnimGroupRole : uint8_t
{
	EAnimGroupRole__CanBeLeader    = 0,
	EAnimGroupRole__AlwaysFollower = 1,
	EAnimGroupRole__AlwaysLeader   = 2,
	EAnimGroupRole__TransitionLeader = 3,
	EAnimGroupRole__EAnimGroupRole_MAX = 4,

};

// Enum Engine.ERootMotionMode
enum class Engine_ERootMotionMode : uint8_t
{
	ERootMotionMode__NoRootMotionExtraction = 0,
	ERootMotionMode__IgnoreRootMotion = 1,
	ERootMotionMode__RootMotionFromEverything = 2,
	ERootMotionMode__RootMotionFromMontagesOnly = 3,
	ERootMotionMode__ERootMotionMode_MAX = 4,

};

// Enum Engine.ERootMotionRootLock
enum class Engine_ERootMotionRootLock : uint8_t
{
	ERootMotionRootLock__RefPose   = 0,
	ERootMotionRootLock__AnimFirstFrame = 1,
	ERootMotionRootLock__Zero      = 2,
	ERootMotionRootLock__ERootMotionRootLock_MAX = 3,

};

// Enum Engine.ERootMotionSourceSettingsFlags
enum class Engine_ERootMotionSourceSettingsFlags : uint8_t
{
	ERootMotionSourceSettingsFlags__UseSensitiveLiftoffCheck = 0,
	ERootMotionSourceSettingsFlags__ERootMotionSourceSettingsFlags_MAX = 1,

};

// Enum Engine.ERootMotionSourceStatusFlags
enum class Engine_ERootMotionSourceStatusFlags : uint8_t
{
	ERootMotionSourceStatusFlags__Prepared = 0,
	ERootMotionSourceStatusFlags__Finished = 1,
	ERootMotionSourceStatusFlags__MarkedForRemoval = 2,
	ERootMotionSourceStatusFlags__ERootMotionSourceStatusFlags_MAX = 3,

};

// Enum Engine.ERootMotionAccumulateMode
enum class Engine_ERootMotionAccumulateMode : uint8_t
{
	ERootMotionAccumulateMode__Override = 0,
	ERootMotionAccumulateMode__Additive = 1,
	ERootMotionAccumulateMode__ERootMotionAccumulateMode_MAX = 2,

};

// Enum Engine.EDOFMode
enum class Engine_EDOFMode : uint8_t
{
	EDOFMode__Default              = 0,
	EDOFMode__SixDOF               = 1,
	EDOFMode__YZPlane              = 2,
	EDOFMode__XZPlane              = 3,
	EDOFMode__XYPlane              = 4,
	EDOFMode__CustomPlane          = 5,
	EDOFMode__None                 = 6,
	EDOFMode__EDOFMode_MAX         = 7,

};

// Enum Engine.EHasCustomNavigableGeometry
enum class Engine_EHasCustomNavigableGeometry : uint8_t
{
	EHasCustomNavigableGeometry__No = 0,
	EHasCustomNavigableGeometry__Yes = 1,
	EHasCustomNavigableGeometry__EvenIfNotCollidable = 2,
	EHasCustomNavigableGeometry__DontExport = 3,
	EHasCustomNavigableGeometry__EHasCustomNavigableGeometry_MAX = 4,

};

// Enum Engine.ECanBeCharacterBase
enum class Engine_ECanBeCharacterBase : uint8_t
{
	ECB_No                         = 0,
	ECB_Yes                        = 1,
	ECB_Owner                      = 2,
	ECB_MAX                        = 3,

};

// Enum Engine.EBoneSpaces
enum class Engine_EBoneSpaces : uint8_t
{
	EBoneSpaces__WorldSpace        = 0,
	EBoneSpaces__ComponentSpace    = 1,
	EBoneSpaces__EBoneSpaces_MAX   = 2,

};

// Enum Engine.EMeshComponentUpdateFlag
enum class Engine_EMeshComponentUpdateFlag : uint8_t
{
	EMeshComponentUpdateFlag__AlwaysTickPoseAndRefreshBones = 0,
	EMeshComponentUpdateFlag__AlwaysTickPose = 1,
	EMeshComponentUpdateFlag__OnlyTickPoseWhenRendered = 2,
	EMeshComponentUpdateFlag__EMeshComponentUpdateFlag_MAX = 3,

};

// Enum Engine.EPhysBodyOp
enum class Engine_EPhysBodyOp : uint8_t
{
	PBO_None                       = 0,
	PBO_Term                       = 1,
	PBO_Disable                    = 2,
	PBO_MAX                        = 3,

};

// Enum Engine.EBoneVisibilityStatus
enum class Engine_EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent             = 0,
	BVS_Visible                    = 1,
	BVS_ExplicitlyHidden           = 2,
	BVS_MAX                        = 3,

};

// Enum Engine.EAngularDriveMode
enum class Engine_EAngularDriveMode : uint8_t
{
	EAngularDriveMode__SLERP       = 0,
	EAngularDriveMode__TwistAndSwing = 1,
	EAngularDriveMode__EAngularDriveMode_MAX = 2,

};

// Enum Engine.EConstraintFrame
enum class Engine_EConstraintFrame : uint8_t
{
	EConstraintFrame__Frame1       = 0,
	EConstraintFrame__Frame2       = 1,
	EConstraintFrame__EConstraintFrame_MAX = 2,

};

// Enum Engine.ELinearConstraintMotion
enum class Engine_ELinearConstraintMotion : uint8_t
{
	LCM_Free                       = 0,
	LCM_Limited                    = 1,
	LCM_Locked                     = 2,
	LCM_MAX                        = 3,

};

// Enum Engine.EAnimLinkMethod
enum class Engine_EAnimLinkMethod : uint8_t
{
	EAnimLinkMethod__Absolute      = 0,
	EAnimLinkMethod__Relative      = 1,
	EAnimLinkMethod__Proportional  = 2,
	EAnimLinkMethod__EAnimLinkMethod_MAX = 3,

};

// Enum Engine.ECurveBlendOption
enum class Engine_ECurveBlendOption : uint8_t
{
	ECurveBlendOption__MaxWeight   = 0,
	ECurveBlendOption__NormalizeByWeight = 1,
	ECurveBlendOption__BlendByWeight = 2,
	ECurveBlendOption__ECurveBlendOption_MAX = 3,

};

// Enum Engine.EAdditiveAnimationType
enum class Engine_EAdditiveAnimationType : uint8_t
{
	AAT_None                       = 0,
	AAT_LocalSpaceBase             = 1,
	AAT_RotationOffsetMeshSpace    = 2,
	AAT_MAX                        = 3,

};

// Enum Engine.ENotifyFilterType
enum class Engine_ENotifyFilterType : uint8_t
{
	ENotifyFilterType__NoFiltering = 0,
	ENotifyFilterType__LOD         = 1,
	ENotifyFilterType__ENotifyFilterType_MAX = 2,

};

// Enum Engine.EMontageNotifyTickType
enum class Engine_EMontageNotifyTickType : uint8_t
{
	EMontageNotifyTickType__Queued = 0,
	EMontageNotifyTickType__BranchingPoint = 1,
	EMontageNotifyTickType__EMontageNotifyTickType_MAX = 2,

};

// Enum Engine.EAnimationMode
enum class Engine_EAnimationMode : uint8_t
{
	EAnimationMode__AnimationBlueprint = 0,
	EAnimationMode__AnimationSingleNode = 1,
	EAnimationMode__EAnimationMode_MAX = 2,

};

// Enum Engine.EKinematicBonesUpdateToPhysics
enum class Engine_EKinematicBonesUpdateToPhysics : uint8_t
{
	EKinematicBonesUpdateToPhysics__SkipSimulatingBones = 0,
	EKinematicBonesUpdateToPhysics__SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics__EKinematicBonesUpdateToPhysics_MAX = 2,

};

// Enum Engine.ESplineCoordinateSpace
enum class Engine_ESplineCoordinateSpace : uint8_t
{
	ESplineCoordinateSpace__Local  = 0,
	ESplineCoordinateSpace__World  = 1,
	ESplineCoordinateSpace__ESplineCoordinateSpace_MAX = 2,

};

// Enum Engine.ESplinePointType
enum class Engine_ESplinePointType : uint8_t
{
	ESplinePointType__Linear       = 0,
	ESplinePointType__Curve        = 1,
	ESplinePointType__Constant     = 2,
	ESplinePointType__CurveClamped = 3,
	ESplinePointType__CurveCustomTangent = 4,
	ESplinePointType__ESplinePointType_MAX = 5,

};

// Enum Engine.FNavigationSystemRunMode
enum class Engine_EFNavigationSystemRunMode : uint8_t
{
	FNavigationSystemRunMode__InvalidMode = 0,
	FNavigationSystemRunMode__GameMode = 1,
	FNavigationSystemRunMode__EditorMode = 2,
	FNavigationSystemRunMode__SimulationMode = 3,
	FNavigationSystemRunMode__PIEMode = 4,
	FNavigationSystemRunMode__FNavigationSystemRunMode_MAX = 5,

};

// Enum Engine.EVehicleDifferential4W
enum class Engine_EVehicleDifferential4W : uint8_t
{
	EVehicleDifferential4W__LimitedSlip_4W = 0,
	EVehicleDifferential4W__LimitedSlip_FrontDrive = 1,
	EVehicleDifferential4W__LimitedSlip_RearDrive = 2,
	EVehicleDifferential4W__Open_4W = 3,
	EVehicleDifferential4W__Open_FrontDrive = 4,
	EVehicleDifferential4W__Open_RearDrive = 5,
	EVehicleDifferential4W__EVehicleDifferential4W_MAX = 6,

};

// Enum Engine.ESoundSpatializationAlgorithm
enum class Engine_ESoundSpatializationAlgorithm : uint8_t
{
	SPATIALIZATION_Default         = 0,
	SPATIALIZATION_HRTF            = 1,
	SPATIALIZATION_MAX             = 2,

};

// Enum Engine.EAttenuationShape
enum class Engine_EAttenuationShape : uint8_t
{
	EAttenuationShape__Sphere      = 0,
	EAttenuationShape__Capsule     = 1,
	EAttenuationShape__Box         = 2,
	EAttenuationShape__Cone        = 3,
	EAttenuationShape__EAttenuationShape_MAX = 4,

};

// Enum Engine.ESoundDistanceCalc
enum class Engine_ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal           = 0,
	SOUNDDISTANCE_InfiniteXYPlane  = 1,
	SOUNDDISTANCE_InfiniteXZPlane  = 2,
	SOUNDDISTANCE_InfiniteYZPlane  = 3,
	SOUNDDISTANCE_MAX              = 4,

};

// Enum Engine.ESoundDistanceModel
enum class Engine_ESoundDistanceModel : uint8_t
{
	ATTENUATION_Linear             = 0,
	ATTENUATION_Logarithmic        = 1,
	ATTENUATION_Inverse            = 2,
	ATTENUATION_LogReverse         = 3,
	ATTENUATION_NaturalSound       = 4,
	ATTENUATION_Custom             = 5,
	ATTENUATION_MAX                = 6,

};

// Enum Engine.ESkyLightSourceType
enum class Engine_ESkyLightSourceType : uint8_t
{
	SLS_CapturedScene              = 0,
	SLS_SpecifiedCubemap           = 1,
	SLS_MAX                        = 2,

};

// Enum Engine.ESplineMeshAxis
enum class Engine_ESplineMeshAxis : uint8_t
{
	ESplineMeshAxis__X             = 0,
	ESplineMeshAxis__Y             = 1,
	ESplineMeshAxis__Z             = 2,
	ESplineMeshAxis__ESplineMeshAxis_MAX = 3,

};

// Enum Engine.EMaterialUsage
enum class Engine_EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh          = 0,
	MATUSAGE_ParticleSprites       = 1,
	MATUSAGE_BeamTrails            = 2,
	MATUSAGE_MeshParticles         = 3,
	MATUSAGE_StaticLighting        = 4,
	MATUSAGE_MorphTargets          = 5,
	MATUSAGE_SplineMesh            = 6,
	MATUSAGE_Landscape             = 7,
	MATUSAGE_InstancedStaticMeshes = 8,
	MATUSAGE_Clothing              = 9,
	MATUSAGE_MAX                   = 10,

};

// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class Engine_EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None                    = 0,
	EPSOBM_ParticleBounds          = 1,
	EPSOBM_CustomBounds            = 2,
	EPSOBM_MAX                     = 3,

};

// Enum Engine.ParticleSystemLODMethod
enum class Engine_EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX    = 3,

};

// Enum Engine.EParticleSystemUpdateMode
enum class Engine_EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                 = 0,
	EPSUM_FixedTime                = 1,
	EPSUM_MAX                      = 2,

};

// Enum Engine.EParticleEventType
enum class Engine_EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_Burst                     = 4,
	EPET_Blueprint                 = 5,
	EPET_MAX                       = 6,

};

// Enum Engine.ParticleReplayState
enum class Engine_EParticleReplayState : uint8_t
{
	PRS_Disabled                   = 0,
	PRS_Capturing                  = 1,
	PRS_Replaying                  = 2,
	PRS_MAX                        = 3,

};

// Enum Engine.EParticleSysParamType
enum class Engine_EParticleSysParamType : uint8_t
{
	PSPT_None                      = 0,
	PSPT_Scalar                    = 1,
	PSPT_ScalarRand                = 2,
	PSPT_Vector                    = 3,
	PSPT_VectorRand                = 4,
	PSPT_Color                     = 5,
	PSPT_Actor                     = 6,
	PSPT_Material                  = 7,
	PSPT_MAX                       = 8,

};

// Enum Engine.EVerticalTextAligment
enum class Engine_EVerticalTextAligment : uint8_t
{
	EVRTA_TextTop                  = 0,
	EVRTA_TextCenter               = 1,
	EVRTA_TextBottom               = 2,
	EVRTA_QuadTop                  = 3,
	EVRTA_MAX                      = 4,

};

// Enum Engine.EHorizTextAligment
enum class Engine_EHorizTextAligment : uint8_t
{
	EHTA_Left                      = 0,
	EHTA_Center                    = 1,
	EHTA_Right                     = 2,
	EHTA_MAX                       = 3,

};

// Enum Engine.ESceneCaptureSource
enum class Engine_ESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR              = 0,
	SCS_FinalColorLDR              = 1,
	SCS_MAX                        = 2,

};

// Enum Engine.ETimelineDirection
enum class Engine_ETimelineDirection : uint8_t
{
	ETimelineDirection__Forward    = 0,
	ETimelineDirection__Backward   = 1,
	ETimelineDirection__ETimelineDirection_MAX = 2,

};

// Enum Engine.ETimelineLengthMode
enum class Engine_ETimelineLengthMode : uint8_t
{
	TL_TimelineLength              = 0,
	TL_LastKeyFrame                = 1,
	TL_MAX                         = 2,

};

// Enum Engine.ETypeAdvanceAnim
enum class Engine_ETypeAdvanceAnim : uint8_t
{
	ETAA_Default                   = 0,
	ETAA_Finished                  = 1,
	ETAA_Looped                    = 2,
	ETAA_MAX                       = 3,

};

// Enum Engine.EAlphaBlendOption
enum class Engine_EAlphaBlendOption : uint8_t
{
	EAlphaBlendOption__Linear      = 0,
	EAlphaBlendOption__Cubic       = 1,
	EAlphaBlendOption__HermiteCubic = 2,
	EAlphaBlendOption__Sinusoidal  = 3,
	EAlphaBlendOption__QuadraticInOut = 4,
	EAlphaBlendOption__CubicInOut  = 5,
	EAlphaBlendOption__QuarticInOut = 6,
	EAlphaBlendOption__QuinticInOut = 7,
	EAlphaBlendOption__CircularIn  = 8,
	EAlphaBlendOption__CircularOut = 9,
	EAlphaBlendOption__CircularInOut = 10,
	EAlphaBlendOption__ExpIn       = 11,
	EAlphaBlendOption__ExpOut      = 12,
	EAlphaBlendOption__ExpInOut    = 13,
	EAlphaBlendOption__Custom      = 14,
	EAlphaBlendOption__EAlphaBlendOption_MAX = 15,

};

// Enum Engine.ETransitionLogicType
enum class Engine_ETransitionLogicType : uint8_t
{
	ETransitionLogicType__TLT_StandardBlend = 0,
	ETransitionLogicType__TLT_Custom = 1,
	ETransitionLogicType__TLT_MAX  = 2,

};

// Enum Engine.ETransitionBlendMode
enum class Engine_ETransitionBlendMode : uint8_t
{
	ETransitionBlendMode__TBM_Linear = 0,
	ETransitionBlendMode__TBM_Cubic = 1,
	ETransitionBlendMode__TBM_MAX  = 2,

};

// Enum Engine.EBoneRotationSource
enum class Engine_EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation     = 1,
	BRS_CopyFromTarget             = 2,
	BRS_MAX                        = 3,

};

// Enum Engine.EBoneControlSpace
enum class Engine_EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	BCS_ComponentSpace             = 1,
	BCS_ParentBoneSpace            = 2,
	BCS_BoneSpace                  = 3,
	BCS_MAX                        = 4,

};

// Enum Engine.EAnimNotifyEventType
enum class Engine_EAnimNotifyEventType : uint8_t
{
	EAnimNotifyEventType__Begin    = 0,
	EAnimNotifyEventType__End      = 1,
	EAnimNotifyEventType__EAnimNotifyEventType_MAX = 2,

};

// Enum Engine.EAdditiveBasePoseType
enum class Engine_EAdditiveBasePoseType : uint8_t
{
	ABPT_None                      = 0,
	ABPT_RefPose                   = 1,
	ABPT_AnimScaled                = 2,
	ABPT_AnimFrame                 = 3,
	ABPT_MAX                       = 4,

};

// Enum Engine.AnimationKeyFormat
enum class Engine_EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_MAX                        = 3,

};

// Enum Engine.AnimationCompressionFormat
enum class Engine_EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7,

};

// Enum Engine.ENotifyTriggerMode
enum class Engine_ENotifyTriggerMode : uint8_t
{
	ENotifyTriggerMode__AllAnimations = 0,
	ENotifyTriggerMode__HighestWeightedAnimation = 1,
	ENotifyTriggerMode__None       = 2,
	ENotifyTriggerMode__ENotifyTriggerMode_MAX = 3,

};

// Enum Engine.EBlendSpaceAxis
enum class Engine_EBlendSpaceAxis : uint8_t
{
	BSA_None                       = 0,
	BSA_X                          = 1,
	BSA_Y                          = 2,
	BSA_Max                        = 3,

};

// Enum Engine.EEvaluateCurveTableResult
enum class Engine_EEvaluateCurveTableResult : uint8_t
{
	EEvaluateCurveTableResult__RowFound = 0,
	EEvaluateCurveTableResult__RowNotFound = 1,
	EEvaluateCurveTableResult__EEvaluateCurveTableResult_MAX = 2,

};

// Enum Engine.EGrammaticalNumber
enum class Engine_EGrammaticalNumber : uint8_t
{
	EGrammaticalNumber__Singular   = 0,
	EGrammaticalNumber__Plural     = 1,
	EGrammaticalNumber__EGrammaticalNumber_MAX = 2,

};

// Enum Engine.EGrammaticalGender
enum class Engine_EGrammaticalGender : uint8_t
{
	EGrammaticalGender__Neuter     = 0,
	EGrammaticalGender__Masculine  = 1,
	EGrammaticalGender__Feminine   = 2,
	EGrammaticalGender__Mixed      = 3,
	EGrammaticalGender__EGrammaticalGender_MAX = 4,

};

// Enum Engine.ESuggestProjVelocityTraceOption
enum class Engine_ESuggestProjVelocityTraceOption : uint8_t
{
	ESuggestProjVelocityTraceOption__DoNotTrace = 0,
	ESuggestProjVelocityTraceOption__TraceFullPath = 1,
	ESuggestProjVelocityTraceOption__OnlyTraceWhileAsceding = 2,
	ESuggestProjVelocityTraceOption__ESuggestProjVelocityTraceOption_MAX = 3,

};

// Enum Engine.EOrientPositionSelector
enum class Engine_EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation = 0,
	EOrientPositionSelector__Position = 1,
	EOrientPositionSelector__OrientationAndPosition = 2,
	EOrientPositionSelector__EOrientPositionSelector_MAX = 3,

};

// Enum Engine.EEasingFunc
enum class Engine_EEasingFunc : uint8_t
{
	EEasingFunc__Linear            = 0,
	EEasingFunc__Step              = 1,
	EEasingFunc__SinusoidalIn      = 2,
	EEasingFunc__SinusoidalOut     = 3,
	EEasingFunc__SinusoidalInOut   = 4,
	EEasingFunc__EaseIn            = 5,
	EEasingFunc__EaseOut           = 6,
	EEasingFunc__EaseInOut         = 7,
	EEasingFunc__ExpoIn            = 8,
	EEasingFunc__ExpoOut           = 9,
	EEasingFunc__ExpoInOut         = 10,
	EEasingFunc__CircularIn        = 11,
	EEasingFunc__CircularOut       = 12,
	EEasingFunc__CircularInOut     = 13,
	EEasingFunc__EEasingFunc_MAX   = 14,

};

// Enum Engine.ERoundingMode
enum class Engine_ERoundingMode : uint8_t
{
	HalfToEven                     = 0,
	HalfFromZero                   = 1,
	HalfToZero                     = 2,
	FromZero                       = 3,
	ToZero                         = 4,
	ToNegativeInfinity             = 5,
	ToPositiveInfinity             = 6,
	ERoundingMode_MAX              = 7,

};

// Enum Engine.EVertexPaintAxis
enum class Engine_EVertexPaintAxis : uint8_t
{
	EVertexPaintAxis__X            = 0,
	EVertexPaintAxis__Y            = 1,
	EVertexPaintAxis__Z            = 2,
	EVertexPaintAxis__EVertexPaintAxis_MAX = 3,

};

// Enum Engine.EBodyCollisionResponse
enum class Engine_EBodyCollisionResponse : uint8_t
{
	EBodyCollisionResponse__BodyCollision_Enabled = 0,
	EBodyCollisionResponse__BodyCollision_Disabled = 1,
	EBodyCollisionResponse__BodyCollision_MAX = 2,

};

// Enum Engine.EPhysicsType
enum class Engine_EPhysicsType : uint8_t
{
	PhysType_Default               = 0,
	PhysType_Kinematic             = 1,
	PhysType_Simulated             = 2,
	PhysType_MAX                   = 3,

};

// Enum Engine.ECollisionTraceFlag
enum class Engine_ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                 = 0,
	CTF_UseSimpleAsComplex         = 1,
	CTF_UseComplexAsSimple         = 2,
	CTF_MAX                        = 3,

};

// Enum Engine.EConsoleType
enum class Engine_EConsoleType : uint8_t
{
	CONSOLE_Any                    = 0,
	CONSOLE_Mobile                 = 1,
	CONSOLE_MAX                    = 2,

};

// Enum Engine.ETransitionType
enum class Engine_ETransitionType : uint8_t
{
	TT_None                        = 0,
	TT_Paused                      = 1,
	TT_Loading                     = 2,
	TT_Saving                      = 3,
	TT_Connecting                  = 4,
	TT_Precaching                  = 5,
	TT_WaitingToConnect            = 6,
	TT_MAX                         = 7,

};

// Enum Engine.EFullyLoadPackageType
enum class Engine_EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                  = 0,
	FULLYLOAD_Game_PreLoadClass    = 1,
	FULLYLOAD_Game_PostLoadClass   = 2,
	FULLYLOAD_Always               = 3,
	FULLYLOAD_Mutator              = 4,
	FULLYLOAD_MAX                  = 5,

};

// Enum Engine.EUIScalingRule
enum class Engine_EUIScalingRule : uint8_t
{
	EUIScalingRule__ShortestSide   = 0,
	EUIScalingRule__LongestSide    = 1,
	EUIScalingRule__Horizontal     = 2,
	EUIScalingRule__Vertical       = 3,
	EUIScalingRule__Custom         = 4,
	EUIScalingRule__EUIScalingRule_MAX = 5,

};

// Enum Engine.ERenderFocusRule
enum class Engine_ERenderFocusRule : uint8_t
{
	ERenderFocusRule__Always       = 0,
	ERenderFocusRule__NonPointer   = 1,
	ERenderFocusRule__NavigationOnly = 2,
	ERenderFocusRule__Never        = 3,
	ERenderFocusRule__ERenderFocusRule_MAX = 4,

};

// Enum Engine.EFrictionCombineMode
enum class Engine_EFrictionCombineMode : uint8_t
{
	EFrictionCombineMode__Average  = 0,
	EFrictionCombineMode__Min      = 1,
	EFrictionCombineMode__Multiply = 2,
	EFrictionCombineMode__Max      = 3,
	EFrictionCombineMode__EFrictionCombineMode_MAX = 4,

};

// Enum Engine.ESettingsLockedAxis
enum class Engine_ESettingsLockedAxis : uint8_t
{
	ESettingsLockedAxis__None      = 0,
	ESettingsLockedAxis__X         = 1,
	ESettingsLockedAxis__Y         = 2,
	ESettingsLockedAxis__Z         = 3,
	ESettingsLockedAxis__Invalid   = 4,
	ESettingsLockedAxis__ESettingsLockedAxis_MAX = 5,

};

// Enum Engine.ESettingsDOF
enum class Engine_ESettingsDOF : uint8_t
{
	ESettingsDOF__Full3D           = 0,
	ESettingsDOF__YZPlane          = 1,
	ESettingsDOF__XZPlane          = 2,
	ESettingsDOF__XYPlane          = 3,
	ESettingsDOF__ESettingsDOF_MAX = 4,

};

// Enum Engine.EAntiAliasingMethodUI
enum class Engine_EAntiAliasingMethodUI : uint8_t
{
	EAntiAliasingMethodUI__AAM_None = 0,
	EAntiAliasingMethodUI__AAM_FXAA = 1,
	EAntiAliasingMethodUI__AAM_TemporalAA = 2,
	EAntiAliasingMethodUI__AAM_MAX = 3,

};

// Enum Engine.EEarlyZPass
enum class Engine_EEarlyZPass : uint8_t
{
	EEarlyZPass__None              = 0,
	EEarlyZPass__OpaqueOnly        = 1,
	EEarlyZPass__OpaqueAndMasked   = 2,
	EEarlyZPass__Auto              = 3,
	EEarlyZPass__EEarlyZPass_MAX   = 4,

};

// Enum Engine.ECustomDepthStencil
enum class Engine_ECustomDepthStencil : uint8_t
{
	ECustomDepthStencil__Disabled  = 0,
	ECustomDepthStencil__Enabled   = 1,
	ECustomDepthStencil__EnabledOnDemand = 2,
	ECustomDepthStencil__EnabledWithStencil = 3,
	ECustomDepthStencil__ECustomDepthStencil_MAX = 4,

};

// Enum Engine.ECompositingSampleCount
enum class Engine_ECompositingSampleCount : uint8_t
{
	ECompositingSampleCount__One   = 0,
	ECompositingSampleCount__Two   = 1,
	ECompositingSampleCount__Four  = 2,
	ECompositingSampleCount__Eight = 3,
	ECompositingSampleCount__ECompositingSampleCount_MAX = 4,

};

// Enum Engine.EClearSceneOptions
enum class Engine_EClearSceneOptions : uint8_t
{
	EClearSceneOptions__NoClear    = 0,
	EClearSceneOptions__HardwareClear = 1,
	EClearSceneOptions__QuadAtMaxZ = 2,
	EClearSceneOptions__EClearSceneOptions_MAX = 3,

};

// Enum Engine.ETextureSamplerFilter
enum class Engine_ETextureSamplerFilter : uint8_t
{
	ETextureSamplerFilter__Point   = 0,
	ETextureSamplerFilter__Bilinear = 1,
	ETextureSamplerFilter__Trilinear = 2,
	ETextureSamplerFilter__AnisotropicPoint = 3,
	ETextureSamplerFilter__AnisotropicLinear = 4,
	ETextureSamplerFilter__ETextureSamplerFilter_MAX = 5,

};

// Enum Engine.ETexturePowerOfTwoSetting
enum class Engine_ETexturePowerOfTwoSetting : uint8_t
{
	ETexturePowerOfTwoSetting__None = 0,
	ETexturePowerOfTwoSetting__PadToPowerOfTwo = 1,
	ETexturePowerOfTwoSetting__PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting__ETexturePowerOfTwoSetting_MAX = 3,

};

// Enum Engine.TextureMipGenSettings
enum class Engine_ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_MAX                       = 20,

};

// Enum Engine.TextureGroup
enum class Engine_ETextureGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Cinematic         = 12,
	TEXTUREGROUP_Effects           = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox            = 15,
	TEXTUREGROUP_UI                = 16,
	TEXTUREGROUP_Lightmap          = 17,
	TEXTUREGROUP_RenderTarget      = 18,
	TEXTUREGROUP_MobileFlattened   = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap         = 22,
	TEXTUREGROUP_ColorLookupTable  = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh             = 26,
	TEXTUREGROUP_IESLightProfile   = 27,
	TEXTUREGROUP_Pixels2D          = 28,
	TEXTUREGROUP_MAX               = 29,

};

// Enum Engine.DistributionParamMode
enum class Engine_EDistributionParamMode : uint8_t
{
	DPM_Normal                     = 0,
	DPM_Abs                        = 1,
	DPM_Direct                     = 2,
	DPM_MAX                        = 3,

};

// Enum Engine.EDistributionVectorMirrorFlags
enum class Engine_EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3,

};

// Enum Engine.EDistributionVectorLockFlags
enum class Engine_EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5,

};

// Enum Engine.ECanCreateConnectionResponse
enum class Engine_ECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE          = 0,
	CONNECT_RESPONSE_DISALLOW      = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX           = 6,

};

// Enum Engine.EGraphType
enum class Engine_EGraphType : uint8_t
{
	GT_Function                    = 0,
	GT_Ubergraph                   = 1,
	GT_Macro                       = 2,
	GT_Animation                   = 3,
	GT_StateMachine                = 4,
	GT_MAX                         = 5,

};

// Enum Engine.EFontImportCharacterSet
enum class Engine_EFontImportCharacterSet : uint8_t
{
	FontICS_Default                = 0,
	FontICS_Ansi                   = 1,
	FontICS_Symbol                 = 2,
	FontICS_MAX                    = 3,

};

// Enum Engine.EFontCacheType
enum class Engine_EFontCacheType : uint8_t
{
	EFontCacheType__Offline        = 0,
	EFontCacheType__Runtime        = 1,
	EFontCacheType__EFontCacheType_MAX = 2,

};

// Enum Engine.EGameplayDebuggerShapeElement
enum class Engine_EGameplayDebuggerShapeElement : uint8_t
{
	EGameplayDebuggerShapeElement__Invalid = 0,
	EGameplayDebuggerShapeElement__SinglePoint = 1,
	EGameplayDebuggerShapeElement__Segment = 2,
	EGameplayDebuggerShapeElement__Box = 3,
	EGameplayDebuggerShapeElement__Cone = 4,
	EGameplayDebuggerShapeElement__Cylinder = 5,
	EGameplayDebuggerShapeElement__Capsule = 6,
	EGameplayDebuggerShapeElement__Polygon = 7,
	EGameplayDebuggerShapeElement__String = 8,
	EGameplayDebuggerShapeElement__EGameplayDebuggerShapeElement_MAX = 9,

};

// Enum Engine.EWindowMode
enum class Engine_EWindowMode : uint8_t
{
	EWindowMode__Fullscreen        = 0,
	EWindowMode__WindowedFullscreen = 1,
	EWindowMode__Windowed          = 2,
	EWindowMode__WindowedMirror    = 3,
	EWindowMode__EWindowMode_MAX   = 4,

};

// Enum Engine.ETrackActiveCondition
enum class Engine_ETrackActiveCondition : uint8_t
{
	ETAC_Always                    = 0,
	ETAC_GoreEnabled               = 1,
	ETAC_GoreDisabled              = 2,
	ETAC_MAX                       = 3,

};

// Enum Engine.EInterpTrackMoveRotMode
enum class Engine_EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                  = 0,
	IMR_LookAtGroup                = 1,
	IMR_Ignore                     = 2,
	IMR_MAX                        = 3,

};

// Enum Engine.EInterpMoveAxis
enum class Engine_EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX              = 0,
	AXIS_TranslationY              = 1,
	AXIS_TranslationZ              = 2,
	AXIS_RotationX                 = 3,
	AXIS_RotationY                 = 4,
	AXIS_RotationZ                 = 5,
	AXIS_MAX                       = 6,

};

// Enum Engine.ETrackToggleAction
enum class Engine_ETrackToggleAction : uint8_t
{
	ETTA_Off                       = 0,
	ETTA_On                        = 1,
	ETTA_Toggle                    = 2,
	ETTA_Trigger                   = 3,
	ETTA_MAX                       = 4,

};

// Enum Engine.EVisibilityTrackCondition
enum class Engine_EVisibilityTrackCondition : uint8_t
{
	EVTC_Always                    = 0,
	EVTC_GoreEnabled               = 1,
	EVTC_GoreDisabled              = 2,
	EVTC_MAX                       = 3,

};

// Enum Engine.EVisibilityTrackAction
enum class Engine_EVisibilityTrackAction : uint8_t
{
	EVTA_Hide                      = 0,
	EVTA_Show                      = 1,
	EVTA_Toggle                    = 2,
	EVTA_MAX                       = 3,

};

// Enum Engine.EClampMode
enum class Engine_EClampMode : uint8_t
{
	CMODE_Clamp                    = 0,
	CMODE_ClampMin                 = 1,
	CMODE_ClampMax                 = 2,
	CMODE_MAX                      = 3,

};

// Enum Engine.ECustomMaterialOutputType
enum class Engine_ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1                    = 0,
	CMOT_Float2                    = 1,
	CMOT_Float3                    = 2,
	CMOT_Float4                    = 3,
	CMOT_MAX                       = 4,

};

// Enum Engine.EDepthOfFieldFunctionValue
enum class Engine_EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask            = 0,
	TDOF_NearMask                  = 1,
	TDOF_FarMask                   = 2,
	TDOF_CircleOfConfusionRadius   = 3,
	TDOF_MAX                       = 4,

};

// Enum Engine.EFunctionInputType
enum class Engine_EFunctionInputType : uint8_t
{
	FunctionInput_Scalar           = 0,
	FunctionInput_Vector2          = 1,
	FunctionInput_Vector3          = 2,
	FunctionInput_Vector4          = 3,
	FunctionInput_Texture2D        = 4,
	FunctionInput_TextureCube      = 5,
	FunctionInput_StaticBool       = 6,
	FunctionInput_MaterialAttributes = 7,
	FunctionInput_MAX              = 8,

};

// Enum Engine.ENoiseFunction
enum class Engine_ENoiseFunction : uint8_t
{
	NOISEFUNCTION_Simplex          = 0,
	NOISEFUNCTION_Perlin           = 1,
	NOISEFUNCTION_Gradient         = 2,
	NOISEFUNCTION_FastGradient     = 3,
	NOISEFUNCTION_MAX              = 4,

};

// Enum Engine.EMaterialSceneAttributeInputMode
enum class Engine_EMaterialSceneAttributeInputMode : uint8_t
{
	EMaterialSceneAttributeInputMode__Coordinates = 0,
	EMaterialSceneAttributeInputMode__OffsetFraction = 1,
	EMaterialSceneAttributeInputMode__EMaterialSceneAttributeInputMode_MAX = 2,

};

// Enum Engine.ESceneTextureId
enum class Engine_ESceneTextureId : uint8_t
{
	PPI_SceneColor                 = 0,
	PPI_SceneDepth                 = 1,
	PPI_DiffuseColor               = 2,
	PPI_SpecularColor              = 3,
	PPI_SubsurfaceColor            = 4,
	PPI_BaseColor                  = 5,
	PPI_Specular                   = 6,
	PPI_Metallic                   = 7,
	PPI_WorldNormal                = 8,
	PPI_SeparateTranslucency       = 9,
	PPI_Opacity                    = 10,
	PPI_Roughness                  = 11,
	PPI_MaterialAO                 = 12,
	PPI_CustomDepth                = 13,
	PPI_PostProcessInput0          = 14,
	PPI_PostProcessInput1          = 15,
	PPI_PostProcessInput2          = 16,
	PPI_PostProcessInput3          = 17,
	PPI_PostProcessInput4          = 18,
	PPI_PostProcessInput5          = 19,
	PPI_PostProcessInput6          = 20,
	PPI_DecalMask                  = 21,
	PPI_ShadingModel               = 22,
	PPI_AmbientOcclusion           = 23,
	PPI_CustomStencil              = 24,
	PPI_StoredBaseColor            = 25,
	PPI_StoredSpecular             = 26,
	PPI_MAX                        = 27,

};

// Enum Engine.ESpeedTreeLODType
enum class Engine_ESpeedTreeLODType : uint8_t
{
	STLOD_Pop                      = 0,
	STLOD_Smooth                   = 1,
	STLOD_MAX                      = 2,

};

// Enum Engine.ESpeedTreeWindType
enum class Engine_ESpeedTreeWindType : uint8_t
{
	STW_None                       = 0,
	STW_Fastest                    = 1,
	STW_Fast                       = 2,
	STW_Better                     = 3,
	STW_Best                       = 4,
	STW_Palm                       = 5,
	STW_BestPlus                   = 6,
	STW_MAX                        = 7,

};

// Enum Engine.ESpeedTreeGeometryType
enum class Engine_ESpeedTreeGeometryType : uint8_t
{
	STG_Branch                     = 0,
	STG_Frond                      = 1,
	STG_Leaf                       = 2,
	STG_FacingLeaf                 = 3,
	STG_Billboard                  = 4,
	STG_MAX                        = 5,

};

// Enum Engine.ETextureMipValueMode
enum class Engine_ETextureMipValueMode : uint8_t
{
	TMVM_None                      = 0,
	TMVM_MipLevel                  = 1,
	TMVM_MipBias                   = 2,
	TMVM_Derivative                = 3,
	TMVM_MAX                       = 4,

};

// Enum Engine.ETextureColorChannel
enum class Engine_ETextureColorChannel : uint8_t
{
	TCC_Red                        = 0,
	TCC_Green                      = 1,
	TCC_Blue                       = 2,
	TCC_Alpha                      = 3,
	TCC_MAX                        = 4,

};

// Enum Engine.EMaterialExposedTextureProperty
enum class Engine_EMaterialExposedTextureProperty : uint8_t
{
	TMTM_TextureSize               = 0,
	TMTM_TexelSize                 = 1,
	TMTM_MAX                       = 2,

};

// Enum Engine.EMaterialVectorCoordTransform
enum class Engine_EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent              = 0,
	TRANSFORM_Local                = 1,
	TRANSFORM_World                = 2,
	TRANSFORM_View                 = 3,
	TRANSFORM_Camera               = 4,
	TRANSFORM_MAX                  = 5,

};

// Enum Engine.EMaterialVectorCoordTransformSource
enum class Engine_EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent        = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_World          = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_Camera         = 4,
	TRANSFORMSOURCE_MAX            = 5,

};

// Enum Engine.EMaterialPositionTransformSource
enum class Engine_EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_World       = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View        = 3,
	TRANSFORMPOSSOURCE_Camera      = 4,
	TRANSFORMPOSSOURCE_MAX         = 5,

};

// Enum Engine.EMaterialExposedViewProperty
enum class Engine_EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize                = 0,
	MEVP_FieldOfView               = 1,
	MEVP_TanHalfFieldOfView        = 2,
	MEVP_ViewSize                  = 3,
	MEVP_WorldSpaceViewPosition    = 4,
	MEVP_WorldSpaceCameraPosition  = 5,
	MEVP_MAX                       = 6,

};

// Enum Engine.EWorldPositionIncludedOffsets
enum class Engine_EWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default                    = 0,
	WPT_ExcludeAllShaderOffsets    = 1,
	WPT_CameraRelative             = 2,
	WPT_CameraRelativeNoOffsets    = 3,
	WPT_MAX                        = 4,

};

// Enum Engine.EMaterialDecalResponse
enum class Engine_EMaterialDecalResponse : uint8_t
{
	MDR_None                       = 0,
	MDR_ColorNormalRoughness       = 1,
	MDR_Color                      = 2,
	MDR_ColorNormal                = 3,
	MDR_ColorRoughness             = 4,
	MDR_Normal                     = 5,
	MDR_NormalRoughness            = 6,
	MDR_Roughness                  = 7,
	MDR_MAX                        = 8,

};

// Enum Engine.EMaterialDomain
enum class Engine_EMaterialDomain : uint8_t
{
	MD_Surface                     = 0,
	MD_DeferredDecal               = 1,
	MD_LightFunction               = 2,
	MD_PostProcess                 = 3,
	MD_UI                          = 4,
	MD_MAX                         = 5,

};

// Enum Engine.EDecalBlendMode
enum class Engine_EDecalBlendMode : uint8_t
{
	DBM_Translucent                = 0,
	DBM_Stain                      = 1,
	DBM_Normal                     = 2,
	DBM_Emissive                   = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color              = 5,
	DBM_DBuffer_ColorNormal        = 6,
	DBM_DBuffer_ColorRoughness     = 7,
	DBM_DBuffer_Normal             = 8,
	DBM_DBuffer_NormalRoughness    = 9,
	DBM_DBuffer_Roughness          = 10,
	DBM_Volumetric_DistanceFunction = 11,
	DBM_MAX                        = 12,

};

// Enum Engine.EEmitterRenderMode
enum class Engine_EEmitterRenderMode : uint8_t
{
	ERM_Normal                     = 0,
	ERM_Point                      = 1,
	ERM_Cross                      = 2,
	ERM_LightsOnly                 = 3,
	ERM_None                       = 4,
	ERM_MAX                        = 5,

};

// Enum Engine.EParticleSubUVInterpMethod
enum class Engine_EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5,

};

// Enum Engine.EParticleBurstMethod
enum class Engine_EParticleBurstMethod : uint8_t
{
	EPBM_Instant                   = 0,
	EPBM_Interpolated              = 1,
	EPBM_MAX                       = 2,

};

// Enum Engine.EParticleScreenAlignment
enum class Engine_EParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition       = 0,
	PSA_Square                     = 1,
	PSA_Rectangle                  = 2,
	PSA_Velocity                   = 3,
	PSA_AwayFromCenter             = 4,
	PSA_TypeSpecific               = 5,
	PSA_MAX                        = 6,

};

// Enum Engine.EParticleSourceSelectionMethod
enum class Engine_EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                   = 0,
	EPSSM_Sequential               = 1,
	EPSSM_MAX                      = 2,

};

// Enum Engine.EModuleType
enum class Engine_EModuleType : uint8_t
{
	EPMT_General                   = 0,
	EPMT_TypeData                  = 1,
	EPMT_Beam                      = 2,
	EPMT_Trail                     = 3,
	EPMT_Spawn                     = 4,
	EPMT_Required                  = 5,
	EPMT_Event                     = 6,
	EPMT_Light                     = 7,
	EPMT_MAX                       = 8,

};

// Enum Engine.EParticleAxisLock
enum class Engine_EParticleAxisLock : uint8_t
{
	EPAL_NONE                      = 0,
	EPAL_X                         = 1,
	EPAL_Y                         = 2,
	EPAL_Z                         = 3,
	EPAL_NEGATIVE_X                = 4,
	EPAL_NEGATIVE_Y                = 5,
	EPAL_NEGATIVE_Z                = 6,
	EPAL_ROTATE_X                  = 7,
	EPAL_ROTATE_Y                  = 8,
	EPAL_ROTATE_Z                  = 9,
	EPAL_MAX                       = 10,

};

// Enum Engine.EAttractorParticleSelectionMethod
enum class Engine_EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                   = 0,
	EAPSM_Sequential               = 1,
	EAPSM_MAX                      = 2,

};

// Enum Engine.Beam2SourceTargetTangentMethod
enum class Engine_EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                = 0,
	PEB2STTM_UserSet               = 1,
	PEB2STTM_Distribution          = 2,
	PEB2STTM_Emitter               = 3,
	PEB2STTM_MAX                   = 4,

};

// Enum Engine.Beam2SourceTargetMethod
enum class Engine_EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                = 0,
	PEB2STM_UserSet                = 1,
	PEB2STM_Emitter                = 2,
	PEB2STM_Particle               = 3,
	PEB2STM_Actor                  = 4,
	PEB2STM_MAX                    = 5,

};

// Enum Engine.BeamModifierType
enum class Engine_EBeamModifierType : uint8_t
{
	PEB2MT_Source                  = 0,
	PEB2MT_Target                  = 1,
	PEB2MT_MAX                     = 2,

};

// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class Engine_EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet               = 0,
	EPCOUM_Additive                = 1,
	EPCOUM_Scalar                  = 2,
	EPCOUM_MAX                     = 3,

};

// Enum Engine.EParticleCollisionComplete
enum class Engine_EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                      = 0,
	EPCC_Freeze                    = 1,
	EPCC_HaltCollisions            = 2,
	EPCC_FreezeTranslation         = 3,
	EPCC_FreezeRotation            = 4,
	EPCC_FreezeMovement            = 5,
	EPCC_MAX                       = 6,

};

// Enum Engine.EParticleCollisionResponse
enum class Engine_EParticleCollisionResponse : uint8_t
{
	EParticleCollisionResponse__Bounce = 0,
	EParticleCollisionResponse__Stop = 1,
	EParticleCollisionResponse__Kill = 2,
	EParticleCollisionResponse__EParticleCollisionResponse_MAX = 3,

};

// Enum Engine.ELocationBoneSocketSelectionMethod
enum class Engine_ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential       = 0,
	BONESOCKETSEL_Random           = 1,
	BONESOCKETSEL_MAX              = 2,

};

// Enum Engine.ELocationBoneSocketSource
enum class Engine_ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones         = 0,
	BONESOCKETSOURCE_Sockets       = 1,
	BONESOCKETSOURCE_MAX           = 2,

};

// Enum Engine.ELocationEmitterSelectionMethod
enum class Engine_ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                   = 0,
	ELESM_Sequential               = 1,
	ELESM_MAX                      = 2,

};

// Enum Engine.CylinderHeightAxis
enum class Engine_ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X             = 0,
	PMLPC_HEIGHTAXIS_Y             = 1,
	PMLPC_HEIGHTAXIS_Z             = 2,
	PMLPC_HEIGHTAXIS_MAX           = 3,

};

// Enum Engine.ELocationSkelVertSurfaceSource
enum class Engine_ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert         = 0,
	VERTSURFACESOURCE_Surface      = 1,
	VERTSURFACESOURCE_MAX          = 2,

};

// Enum Engine.EOrbitChainMode
enum class Engine_EOrbitChainMode : uint8_t
{
	EOChainMode_Add                = 0,
	EOChainMode_Scale              = 1,
	EOChainMode_Link               = 2,
	EOChainMode_MAX                = 3,

};

// Enum Engine.EEmitterDynamicParameterValue
enum class Engine_EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet                   = 0,
	EDPV_VelocityX                 = 1,
	EDPV_VelocityY                 = 2,
	EDPV_VelocityZ                 = 3,
	EDPV_VelocityMag               = 4,
	EDPV_MAX                       = 5,

};

// Enum Engine.EEmitterNormalsMode
enum class Engine_EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing               = 0,
	ENM_Spherical                  = 1,
	ENM_Cylindrical                = 2,
	ENM_MAX                        = 3,

};

// Enum Engine.EParticleSortMode
enum class Engine_EParticleSortMode : uint8_t
{
	PSORTMODE_None                 = 0,
	PSORTMODE_ViewProjDepth        = 1,
	PSORTMODE_DistanceToView       = 2,
	PSORTMODE_Age_OldestFirst      = 3,
	PSORTMODE_Age_NewestFirst      = 4,
	PSORTMODE_MAX                  = 5,

};

// Enum Engine.EParticleUVFlipMode
enum class Engine_EParticleUVFlipMode : uint8_t
{
	EParticleUVFlipMode__None      = 0,
	EParticleUVFlipMode__FlipUV    = 1,
	EParticleUVFlipMode__FlipUOnly = 2,
	EParticleUVFlipMode__FlipVOnly = 3,
	EParticleUVFlipMode__RandomFlipUV = 4,
	EParticleUVFlipMode__RandomFlipUOnly = 5,
	EParticleUVFlipMode__RandomFlipVOnly = 6,
	EParticleUVFlipMode__RandomFlipUVIndependent = 7,
	EParticleUVFlipMode__EParticleUVFlipMode_MAX = 8,

};

// Enum Engine.ESubUVBoundingVertexCount
enum class Engine_ESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices               = 0,
	BVC_EightVertices              = 1,
	BVC_MAX                        = 2,

};

// Enum Engine.ETrail2SourceMethod
enum class Engine_ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default               = 0,
	PET2SRCM_Particle              = 1,
	PET2SRCM_Actor                 = 2,
	PET2SRCM_MAX                   = 3,

};

// Enum Engine.EBeamTaperMethod
enum class Engine_EBeamTaperMethod : uint8_t
{
	PEBTM_None                     = 0,
	PEBTM_Full                     = 1,
	PEBTM_Partial                  = 2,
	PEBTM_MAX                      = 3,

};

// Enum Engine.EBeam2Method
enum class Engine_EBeam2Method : uint8_t
{
	PEB2M_Distance                 = 0,
	PEB2M_Target                   = 1,
	PEB2M_Branch                   = 2,
	PEB2M_MAX                      = 3,

};

// Enum Engine.EMeshCameraFacingOptions
enum class Engine_EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp               = 0,
	XAxisFacing_ZUp                = 1,
	XAxisFacing_NegativeZUp        = 2,
	XAxisFacing_YUp                = 3,
	XAxisFacing_NegativeYUp        = 4,
	LockedAxis_ZAxisFacing         = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing         = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing    = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing    = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX   = 13,

};

// Enum Engine.EMeshCameraFacingUpAxis
enum class Engine_EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP            = 0,
	CameraFacing_ZUp               = 1,
	CameraFacing_NegativeZUp       = 2,
	CameraFacing_YUp               = 3,
	CameraFacing_NegativeYUp       = 4,
	CameraFacing_MAX               = 5,

};

// Enum Engine.EMeshScreenAlignment
enum class Engine_EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	PSMA_MeshFaceCameraWithSpin    = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX                       = 3,

};

// Enum Engine.ETrailsRenderAxisOption
enum class Engine_ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp                = 0,
	Trails_SourceUp                = 1,
	Trails_WorldUp                 = 2,
	Trails_MAX                     = 3,

};

// Enum Engine.ECloudStorageDelegate
enum class Engine_ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete       = 0,
	CSD_KeyValueWriteComplete      = 1,
	CSD_ValueChanged               = 2,
	CSD_DocumentQueryComplete      = 3,
	CSD_DocumentReadComplete       = 4,
	CSD_DocumentWriteComplete      = 5,
	CSD_DocumentConflictDetected   = 6,
	CSD_MAX                        = 7,

};

// Enum Engine.EAdManagerDelegate
enum class Engine_EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner              = 0,
	AMD_UserClosedAd               = 1,
	AMD_MAX                        = 2,

};

// Enum Engine.EMicroTransactionResult
enum class Engine_EMicroTransactionResult : uint8_t
{
	MTR_Succeeded                  = 0,
	MTR_Failed                     = 1,
	MTR_Canceled                   = 2,
	MTR_RestoredFromServer         = 3,
	MTR_MAX                        = 4,

};

// Enum Engine.EMicroTransactionDelegate
enum class Engine_EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete      = 0,
	MTD_PurchaseComplete           = 1,
	MTD_MAX                        = 2,

};

// Enum Engine.ETwitterIntegrationDelegate
enum class Engine_ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete          = 0,
	TID_TweetUIComplete            = 1,
	TID_RequestComplete            = 2,
	TID_MAX                        = 3,

};

// Enum Engine.ETwitterRequestMethod
enum class Engine_ETwitterRequestMethod : uint8_t
{
	TRM_Get                        = 0,
	TRM_Post                       = 1,
	TRM_Delete                     = 2,
	TRM_MAX                        = 3,

};

// Enum Engine.EReporterLineStyle
enum class Engine_EReporterLineStyle : uint8_t
{
	EReporterLineStyle__Line       = 0,
	EReporterLineStyle__Dash       = 1,
	EReporterLineStyle__EReporterLineStyle_MAX = 2,

};

// Enum Engine.ELegendPosition
enum class Engine_ELegendPosition : uint8_t
{
	ELegendPosition__Outside       = 0,
	ELegendPosition__Inside        = 1,
	ELegendPosition__ELegendPosition_MAX = 2,

};

// Enum Engine.EGraphDataStyle
enum class Engine_EGraphDataStyle : uint8_t
{
	EGraphDataStyle__Lines         = 0,
	EGraphDataStyle__Filled        = 1,
	EGraphDataStyle__EGraphDataStyle_MAX = 2,

};

// Enum Engine.EGraphAxisStyle
enum class Engine_EGraphAxisStyle : uint8_t
{
	EGraphAxisStyle__Lines         = 0,
	EGraphAxisStyle__Notches       = 1,
	EGraphAxisStyle__Grid          = 2,
	EGraphAxisStyle__EGraphAxisStyle_MAX = 3,

};

// Enum Engine.EConstraintTransform
enum class Engine_EConstraintTransform : uint8_t
{
	EConstraintTransform__Absolute = 0,
	EConstraintTransform__Relative = 1,
	EConstraintTransform__EConstraintTransform_MAX = 2,

};

// Enum Engine.EControlConstraint
enum class Engine_EControlConstraint : uint8_t
{
	EControlConstraint__Orientation = 0,
	EControlConstraint__Translation = 1,
	EControlConstraint__Max        = 2,
	EControlConstraint__EControlConstraint_MAX = 3,

};

// Enum Engine.EImpactDamageOverride
enum class Engine_EImpactDamageOverride : uint8_t
{
	IDO_None                       = 0,
	IDO_On                         = 1,
	IDO_Off                        = 2,
	IDO_MAX                        = 3,

};

// Enum Engine.EMaxConcurrentResolutionRule
enum class Engine_EMaxConcurrentResolutionRule : uint8_t
{
	EMaxConcurrentResolutionRule__PreventNew = 0,
	EMaxConcurrentResolutionRule__StopOldest = 1,
	EMaxConcurrentResolutionRule__StopFarthestThenPreventNew = 2,
	EMaxConcurrentResolutionRule__StopFarthestThenOldest = 3,
	EMaxConcurrentResolutionRule__StopLowestPriority = 4,
	EMaxConcurrentResolutionRule__StopQuietest = 5,
	EMaxConcurrentResolutionRule__EMaxConcurrentResolutionRule_MAX = 6,

};

// Enum Engine.ESoundGroup
enum class Engine_ESoundGroup : uint8_t
{
	SOUNDGROUP_Default             = 0,
	SOUNDGROUP_Effects             = 1,
	SOUNDGROUP_UI                  = 2,
	SOUNDGROUP_Music               = 3,
	SOUNDGROUP_Voice               = 4,
	SOUNDGROUP_GameSoundGroup1     = 5,
	SOUNDGROUP_GameSoundGroup2     = 6,
	SOUNDGROUP_GameSoundGroup3     = 7,
	SOUNDGROUP_GameSoundGroup4     = 8,
	SOUNDGROUP_GameSoundGroup5     = 9,
	SOUNDGROUP_GameSoundGroup6     = 10,
	SOUNDGROUP_GameSoundGroup7     = 11,
	SOUNDGROUP_GameSoundGroup8     = 12,
	SOUNDGROUP_GameSoundGroup9     = 13,
	SOUNDGROUP_GameSoundGroup10    = 14,
	SOUNDGROUP_GameSoundGroup11    = 15,
	SOUNDGROUP_GameSoundGroup12    = 16,
	SOUNDGROUP_GameSoundGroup13    = 17,
	SOUNDGROUP_GameSoundGroup14    = 18,
	SOUNDGROUP_GameSoundGroup15    = 19,
	SOUNDGROUP_GameSoundGroup16    = 20,
	SOUNDGROUP_GameSoundGroup17    = 21,
	SOUNDGROUP_GameSoundGroup18    = 22,
	SOUNDGROUP_GameSoundGroup19    = 23,
	SOUNDGROUP_GameSoundGroup20    = 24,
	SOUNDGROUP_MAX                 = 25,

};

// Enum Engine.EDecompressionType
enum class Engine_EDecompressionType : uint8_t
{
	DTYPE_Setup                    = 0,
	DTYPE_Invalid                  = 1,
	DTYPE_Preview                  = 2,
	DTYPE_Native                   = 3,
	DTYPE_RealTime                 = 4,
	DTYPE_Procedural               = 5,
	DTYPE_Xenon                    = 6,
	DTYPE_Streaming                = 7,
	DTYPE_MAX                      = 8,

};

// Enum Engine.EAudioOutputTarget
enum class Engine_EAudioOutputTarget : uint8_t
{
	EAudioOutputTarget__Speaker    = 0,
	EAudioOutputTarget__Controller = 1,
	EAudioOutputTarget__ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget__EAudioOutputTarget_MAX = 3,

};

// Enum Engine.ModulationParamMode
enum class Engine_EModulationParamMode : uint8_t
{
	MPM_Normal                     = 0,
	MPM_Abs                        = 1,
	MPM_Direct                     = 2,
	MPM_MAX                        = 3,

};

// Enum Engine.EOptimizationType
enum class Engine_EOptimizationType : uint8_t
{
	OT_NumOfTriangles              = 0,
	OT_MaxDeviation                = 1,
	OT_MAX                         = 2,

};

// Enum Engine.EImportanceLevel
enum class Engine_EImportanceLevel : uint8_t
{
	IL_Off                         = 0,
	IL_Lowest                      = 1,
	IL_Low                         = 2,
	IL_Normal                      = 3,
	IL_High                        = 4,
	IL_Highest                     = 5,
	TEMP_BROKEN2                   = 6,
	EImportanceLevel_MAX           = 7,

};

// Enum Engine.ENormalMode
enum class Engine_ENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups     = 0,
	NM_RecalculateNormals          = 1,
	NM_RecalculateNormalsSmooth    = 2,
	NM_RecalculateNormalsHard      = 3,
	TEMP_BROKEN                    = 4,
	ENormalMode_MAX                = 5,

};

// Enum Engine.ETextureSourceFormat
enum class Engine_ETextureSourceFormat : uint8_t
{
	TSF_Invalid                    = 0,
	TSF_G8                         = 1,
	TSF_BGRA8                      = 2,
	TSF_BGRE8                      = 3,
	TSF_RGBA16                     = 4,
	TSF_RGBA16F                    = 5,
	TSF_RGBA8                      = 6,
	TSF_RGBE8                      = 7,
	TSF_MAX                        = 8,

};

// Enum Engine.ETextureSourceArtType
enum class Engine_ETextureSourceArtType : uint8_t
{
	TSAT_Uncompressed              = 0,
	TSAT_PNGCompressed             = 1,
	TSAT_DDSFile                   = 2,
	TSAT_MAX                       = 3,

};

// Enum Engine.ETextureMipCount
enum class Engine_ETextureMipCount : uint8_t
{
	TMC_ResidentMips               = 0,
	TMC_AllMips                    = 1,
	TMC_AllMipsBiased              = 2,
	TMC_MAX                        = 3,

};

// Enum Engine.ECompositeTextureMode
enum class Engine_ECompositeTextureMode : uint8_t
{
	CTM_Disabled                   = 0,
	CTM_NormalRoughnessToRed       = 1,
	CTM_NormalRoughnessToGreen     = 2,
	CTM_NormalRoughnessToBlue      = 3,
	CTM_NormalRoughnessToAlpha     = 4,
	CTM_MAX                        = 5,

};

// Enum Engine.TextureAddress
enum class Engine_ETextureAddress : uint8_t
{
	TA_Wrap                        = 0,
	TA_Clamp                       = 1,
	TA_Mirror                      = 2,
	TA_MAX                         = 3,

};

// Enum Engine.TextureFilter
enum class Engine_ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	TF_Bilinear                    = 1,
	TF_Trilinear                   = 2,
	TF_Default                     = 3,
	TF_MAX                         = 4,

};

// Enum Engine.TextureCompressionSettings
enum class Engine_ETextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Masks                       = 2,
	TC_Grayscale                   = 3,
	TC_Displacementmap             = 4,
	TC_VectorDisplacementmap       = 5,
	TC_HDR                         = 6,
	TC_EditorIcon                  = 7,
	TC_Alpha                       = 8,
	TC_DistanceFieldFont           = 9,
	TC_HDR_Compressed              = 10,
	TC_BC7                         = 11,
	TC_MAX                         = 12,

};

// Enum Engine.EUserDefinedStructureStatus
enum class Engine_EUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate                  = 0,
	UDSS_Dirty                     = 1,
	UDSS_Error                     = 2,
	UDSS_Duplicate                 = 3,
	UDSS_MAX                       = 4,

};

// Enum Engine.EVectorFieldConstructionOp
enum class Engine_EVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude                   = 0,
	VFCO_Revolve                   = 1,
	VFCO_MAX                       = 2,

};

// Enum Engine.EPostCopyOperation
enum class Engine_EPostCopyOperation : uint8_t
{
	EPostCopyOperation__None       = 0,
	EPostCopyOperation__LogicalNegateBool = 1,
	EPostCopyOperation__EPostCopyOperation_MAX = 2,

};

// Enum Engine.EPinHidingMode
enum class Engine_EPinHidingMode : uint8_t
{
	EPinHidingMode__NeverAsPin     = 0,
	EPinHidingMode__PinHiddenByDefault = 1,
	EPinHidingMode__PinShownByDefault = 2,
	EPinHidingMode__AlwaysAsPin    = 3,
	EPinHidingMode__EPinHidingMode_MAX = 4,

};

// Enum Engine.EEvaluatorMode
enum class Engine_EEvaluatorMode : uint8_t
{
	EEvaluatorMode__EM_Standard    = 0,
	EEvaluatorMode__EM_Freeze      = 1,
	EEvaluatorMode__EM_DelayedFreeze = 2,
	EEvaluatorMode__EM_MAX         = 3,

};

// Enum Engine.EEvaluatorDataSource
enum class Engine_EEvaluatorDataSource : uint8_t
{
	EEvaluatorDataSource__EDS_SourcePose = 0,
	EEvaluatorDataSource__EDS_DestinationPose = 1,
	EEvaluatorDataSource__EDS_MAX  = 2,

};

// Enum Engine.ECameraAlphaBlendMode
enum class Engine_ECameraAlphaBlendMode : uint8_t
{
	ECameraAlphaBlendMode__CABM_Linear = 0,
	ECameraAlphaBlendMode__CABM_Cubic = 1,
	ECameraAlphaBlendMode__CABM_MAX = 2,

};

// Enum Engine.AnimPhysCollisionType
enum class Engine_EAnimPhysCollisionType : uint8_t
{
	AnimPhysCollisionType__CoM     = 0,
	AnimPhysCollisionType__CustomSphere = 1,
	AnimPhysCollisionType__InnerSphere = 2,
	AnimPhysCollisionType__OuterSphere = 3,
	AnimPhysCollisionType__AnimPhysCollisionType_MAX = 4,

};

// Enum Engine.AnimPhysTwistAxis
enum class Engine_EAnimPhysTwistAxis : uint8_t
{
	AnimPhysTwistAxis__AxisX       = 0,
	AnimPhysTwistAxis__AxisY       = 1,
	AnimPhysTwistAxis__AxisZ       = 2,
	AnimPhysTwistAxis__AnimPhysTwistAxis_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Engine.TickFunction
// 0x0034
struct FTickFunction
{
	unsigned char                                      UnknownData_ITMF[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ETickingGroup>                  TickGroup;                                                 // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETickingGroup>                  EndTickGroup;                                              // 0x0005(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DA33[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bTickEvenWhenPaused : 1;                                   // 0x0008(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      bCanEverTick : 1;                                          // 0x0008(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bStartWithTickEnabled : 1;                                 // 0x0008(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                           // 0x0008(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WC9O[0x23];                                    // 0x0009(0x0023) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TickInterval;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z9RG[0x4];                                     // 0x0030(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ActorTickFunction
// 0x0004 (0x0038 - 0x0034)
struct FActorTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_XX6B[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Vector_NetQuantize100
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize100 : public FVector
{

};

// ScriptStruct Engine.Vector_NetQuantize
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize : public FVector
{

};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantizeNormal : public FVector
{

};

// ScriptStruct Engine.AtmospherePrecomputeParameters
// 0x002C
struct FAtmospherePrecomputeParameters
{
	float                                              DensityHeight;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecayHeight;                                               // 0x0004(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxScatteringOrder;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TransmittanceTexWidth;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TransmittanceTexHeight;                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IrradianceTexWidth;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IrradianceTexHeight;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InscatterAltitudeSampleNum;                                // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InscatterMuNum;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InscatterMuSNum;                                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InscatterNuNum;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.KeyHandleMap
// 0x003C
struct FKeyHandleMap
{
	unsigned char                                      UnknownData_202T[0x3C];                                    // 0x0000(0x003C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.IndexedCurve
// 0x0040
struct FIndexedCurve
{
	unsigned char                                      UnknownData_KXXO[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKeyHandleMap                               KeyHandlesToIndices;                                       // 0x0004(0x003C) (Transient, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Engine.RichCurveKey
// 0x001C
struct FRichCurveKey
{
	TEnumAsByte<Engine_ERichCurveInterpMode>           InterpMode;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ERichCurveTangentMode>          TangentMode;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ERichCurveTangentWeightMode>    TangentWeightMode;                                         // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZYCC[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Time;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArriveTangent;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArriveTangentWeight;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeaveTangent;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeaveTangentWeight;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RichCurve
// 0x0014 (0x0054 - 0x0040)
struct FRichCurve : public FIndexedCurve
{
	TEnumAsByte<Engine_ERichCurveExtrapolation>        PreInfinityExtrap;                                         // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ERichCurveExtrapolation>        PostInfinityExtrap;                                        // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EJLP[0x2];                                     // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRichCurveKey>                       Keys;                                                      // 0x0044(0x000C) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              DefaultValue;                                              // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RuntimeFloatCurve
// 0x0058
struct FRuntimeFloatCurve
{
	struct FRichCurve                                  EditorCurveData;                                           // 0x0000(0x0054) (NativeAccessSpecifierPublic)
	class UCurveFloat*                                 ExternalCurve;                                             // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AttenuationSettings
// 0x00CC
struct FAttenuationSettings
{
	unsigned char                                      bAttenuate : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSpatialize : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAttenuateWithLPF : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableListenerFocus : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableOcclusion : 1;                                      // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bUseComplexCollisionForOcclusion : 1;                      // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UB0E[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ESoundDistanceModel>            DistanceAlgorithm;                                         // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FPWU[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          CustomAttenuationCurve;                                    // 0x0008(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ESoundDistanceCalc>             DistanceType;                                              // 0x0060(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttenuationShape>              AttenuationShape;                                          // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F85H[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              dBAttenuationAtMax;                                        // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OmniRadius;                                                // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StereoSpread;                                              // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ESoundSpatializationAlgorithm>  SpatializationAlgorithm;                                   // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZQMV[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RadiusMin;                                                 // 0x0074(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RadiusMax;                                                 // 0x0078(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AttenuationShapeExtents;                                   // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ConeOffset;                                                // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FalloffDistance;                                           // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPFRadiusMin;                                              // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPFRadiusMax;                                              // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPFFrequencyAtMin;                                         // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPFFrequencyAtMax;                                         // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FocusAzimuth;                                              // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NonFocusAzimuth;                                           // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FocusDistanceScale;                                        // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NonFocusDistanceScale;                                     // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FocusPriorityScale;                                        // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NonFocusPriorityScale;                                     // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FocusVolumeAttenuation;                                    // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NonFocusVolumeAttenuation;                                 // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OcclusionLowPassFilterFrequency;                           // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OcclusionVolumeAttenuation;                                // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OcclusionInterpolationTime;                                // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AudioComponentParam
// 0x0018
struct FAudioComponentParam
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FloatParam;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BoolParam;                                                 // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H9VY[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                IntParam;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                                  SoundWaveParam;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.MaterialInput
// 0x002C
struct FMaterialInput
{
	class UMaterialExpression*                         Expression;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutputIndex;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InputName;                                                 // 0x0008(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Mask;                                                      // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaskR;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaskG;                                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaskB;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaskA;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GCC64_Padding;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.VectorMaterialInput
// 0x0010 (0x003C - 0x002C)
struct FVectorMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                           // 0x002C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1MXE[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Constant;                                                  // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RepMovement
// 0x0034
struct FRepMovement
{
	struct FVector                                     LinearVelocity;                                            // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     AngularVelocity;                                           // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0018(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0024(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSimulatedPhysicSleep : 1;                                 // 0x0030(0x0001) BIT_FIELD (Transient, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bRepPhysics : 1;                                           // 0x0030(0x0001) BIT_FIELD (Transient, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EVectorQuantization>            LocationQuantizationLevel;                                 // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EVectorQuantization>            VelocityQuantizationLevel;                                 // 0x0032(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ERotatorQuantization>           RotationQuantizationLevel;                                 // 0x0033(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RepAttachment
// 0x0034
struct FRepAttachment
{
	class AActor*                                      AttachParent;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      LocationOffset;                                            // 0x0004(0x000C) (NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      RelativeScale3D;                                           // 0x0010(0x000C) (NativeAccessSpecifierPublic)
	struct FRotator                                    RotationOffset;                                            // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       AttachSocket;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             AttachComponent;                                           // 0x0030(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.FilePath
// 0x000C
struct FFilePath
{
	struct FString                                     FilePath;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// 0x0048
struct FBuildPromotionOpenAssetSettings
{
	struct FFilePath                                   BlueprintAsset;                                            // 0x0000(0x000C) (Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                                   MaterialAsset;                                             // 0x000C(0x000C) (Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                                   ParticleSystemAsset;                                       // 0x0018(0x000C) (Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                                   SkeletalMeshAsset;                                         // 0x0024(0x000C) (Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                                   StaticMeshAsset;                                           // 0x0030(0x000C) (Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                                   TextureAsset;                                              // 0x003C(0x000C) (Edit, Config, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// 0x0024
struct FMaterialEditorPromotionSettings
{
	struct FFilePath                                   DefaultMaterialAsset;                                      // 0x0000(0x000C) (Edit, NativeAccessSpecifierPublic)
	struct FFilePath                                   DefaultDiffuseTexture;                                     // 0x000C(0x000C) (Edit, NativeAccessSpecifierPublic)
	struct FFilePath                                   DefaultNormalTexture;                                      // 0x0018(0x000C) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AudioQualitySettings
// 0x0010
struct FAudioQualitySettings
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, NativeAccessSpecifierPublic)
	int                                                MaxChannels;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// 0x0070
struct FGPUSpriteLocalVectorFieldInfo
{
	class UVectorField*                                Field;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1PAY[0xC];                                     // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    MinInitialRotation;                                        // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    MaxInitialRotation;                                        // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    RotationRate;                                              // 0x0058(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Intensity;                                                 // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Tightness;                                                 // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIgnoreComponentTransform : 1;                             // 0x006C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bTileX : 1;                                                // 0x006C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bTileY : 1;                                                // 0x006C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bTileZ : 1;                                                // 0x006C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QF84[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.PlatformInterfaceData
// 0x0024
struct FPlatformInterfaceData
{
	struct FName                                       DataName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EPlatformInterfaceDataType>     Type;                                                      // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E20Y[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                IntValue;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FloatValue;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StringValue;                                               // 0x0014(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ObjectValue;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// 0x0028
struct FPlatformInterfaceDelegateResult
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5Q7W[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlatformInterfaceData                      Data;                                                      // 0x0004(0x0024) (NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.FastArraySerializerItem
// 0x000C
struct FFastArraySerializerItem
{
	int                                                ReplicationID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReplicationKey;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MostRecentArrayReplicationKey;                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CurveTableRowHandle
// 0x000C
struct FCurveTableRowHandle
{
	class UCurveTable*                                 CurveTable;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                   // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.FastArraySerializer
// 0x0080
struct FFastArraySerializer
{
	unsigned char                                      UnknownData_4U70[0x80];                                    // 0x0000(0x0080) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.DataTableRowHandle
// 0x000C
struct FDataTableRowHandle
{
	class UDataTable*                                  DataTable;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                   // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ExposedValueCopyRecord
// 0x0030
struct FExposedValueCopyRecord
{
	class UProperty*                                   SourceProperty;                                            // 0x0000(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SourcePropertyName;                                        // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SourceSubPropertyName;                                     // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SourceArrayIndex;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProperty*                                   DestProperty;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DestArrayIndex;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Size;                                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EPostCopyOperation>             PostCopyOperation;                                         // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OY8B[0xB];                                     // 0x0025(0x000B) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ExposedValueHandler
// 0x001C
struct FExposedValueHandler
{
	struct FName                                       BoundFunction;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FExposedValueCopyRecord>             CopyRecords;                                               // 0x0008(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZEWR[0x8];                                     // 0x0014(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.HitResult
// 0x0080
struct FHitResult
{
	unsigned char                                      bBlockingHit : 1;                                          // 0x0000(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bStartPenetrating : 1;                                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7GJA[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Time;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         Location;                                                  // 0x000C(0x000C) (NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         ImpactPoint;                                               // 0x0018(0x000C) (NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   Normal;                                                    // 0x0024(0x000C) (NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                              // 0x0030(0x000C) (NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         TraceStart;                                                // 0x003C(0x000C) (NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         TraceEnd;                                                  // 0x0048(0x000C) (NativeAccessSpecifierPublic)
	float                                              PenetrationDepth;                                          // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Item;                                                      // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPhysicalMaterial>            PhysMaterial;                                              // 0x005C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       Actor;                                                     // 0x0064(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                 // 0x006C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x0074(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FaceIndex;                                                 // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.SimpleMemberReference
// 0x001C
struct FSimpleMemberReference
{
	class UObject*                                     MemberParent;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MemberName;                                                // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       MemberGuid;                                                // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                                        // 0x0000(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Out;                                                       // 0x0004(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.StatColorMapping
// 0x001C
struct FStatColorMapping
{
	struct FString                                     StatName;                                                  // 0x0000(0x000C) (ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStatColorMapEntry>                  ColorMap;                                                  // 0x000C(0x000C) (ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
	unsigned char                                      DisableBlend : 1;                                          // 0x0018(0x0001) BIT_FIELD (Config, GlobalConfig, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WOJB[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.NavAgentSelector
// 0x0004
struct FNavAgentSelector
{
	unsigned char                                      bSupportsAgent0 : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent1 : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent2 : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent3 : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent4 : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent5 : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent6 : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent7 : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent8 : 1;                                       // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent9 : 1;                                       // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent10 : 1;                                      // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent11 : 1;                                      // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent12 : 1;                                      // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent13 : 1;                                      // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent14 : 1;                                      // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent15 : 1;                                      // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OOKG[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.NavigationLinkBase
// 0x0028
struct FNavigationLinkBase
{
	float                                              LeftProjectHeight;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxFallDownLength;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ENavLinkDirection>              Direction;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NRRW[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SnapRadius;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SnapHeight;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseSnapHeight : 1;                                        // 0x0018(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSnapToCheapestArea : 1;                                   // 0x0018(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FS31[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AreaClass;                                                 // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavAgentSelector                           SupportedAgents;                                           // 0x0020(0x0004) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent0 : 1;                                       // 0x0024(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent1 : 1;                                       // 0x0024(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent2 : 1;                                       // 0x0024(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent3 : 1;                                       // 0x0024(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent4 : 1;                                       // 0x0024(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent5 : 1;                                       // 0x0024(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent6 : 1;                                       // 0x0024(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent7 : 1;                                       // 0x0024(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent8 : 1;                                       // 0x0025(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent9 : 1;                                       // 0x0025(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent10 : 1;                                      // 0x0025(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent11 : 1;                                      // 0x0025(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent12 : 1;                                      // 0x0025(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent13 : 1;                                      // 0x0025(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent14 : 1;                                      // 0x0025(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent15 : 1;                                      // 0x0025(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UKLM[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.NavigationLink
// 0x0018 (0x0040 - 0x0028)
struct FNavigationLink : public FNavigationLinkBase
{
	struct FVector                                     Left;                                                      // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Right;                                                     // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.KShapeElem
// 0x0010
struct FKShapeElem
{
	unsigned char                                      UnknownData_2BVG[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.KConvexElem
// 0x0070 (0x0080 - 0x0010)
struct FKConvexElem : public FKShapeElem
{
	TArray<struct FVector>                             VertexData;                                                // 0x0010(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBox                                        ElemBox;                                                   // 0x001C(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NOV5[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0040(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UQ8I[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.KSphereElem
// 0x0050 (0x0060 - 0x0010)
struct FKSphereElem : public FKShapeElem
{
	struct FMatrix                                     TM;                                                        // 0x0010(0x0040) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Center;                                                    // 0x0050(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x005C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.KBoxElem
// 0x0070 (0x0080 - 0x0010)
struct FKBoxElem : public FKShapeElem
{
	struct FMatrix                                     TM;                                                        // 0x0010(0x0040) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Center;                                                    // 0x0050(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F6CG[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Orientation;                                               // 0x0060(0x0010) (Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              X;                                                         // 0x0070(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x0074(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Z;                                                         // 0x0078(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QJI7[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.KSphylElem
// 0x0070 (0x0080 - 0x0010)
struct FKSphylElem : public FKShapeElem
{
	struct FMatrix                                     TM;                                                        // 0x0010(0x0040) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Center;                                                    // 0x0050(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LQ98[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Orientation;                                               // 0x0060(0x0010) (Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0070(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Length;                                                    // 0x0074(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R6MW[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.KAggregateGeom
// 0x0034
struct FKAggregateGeom
{
	TArray<struct FKSphereElem>                        SphereElems;                                               // 0x0000(0x000C) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FKBoxElem>                           BoxElems;                                                  // 0x000C(0x000C) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FKSphylElem>                         SphylElems;                                                // 0x0018(0x000C) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FKConvexElem>                        ConvexElems;                                               // 0x0024(0x000C) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WHAV[0x4];                                     // 0x0030(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SoundClassProperties
// 0x0024
struct FSoundClassProperties
{
	float                                              Volume;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Pitch;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StereoBleed;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LFEBleed;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VoiceCenterChannelVolume;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RadioFilterVolume;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RadioFilterVolumeThreshold;                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bApplyEffects : 1;                                         // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAlwaysPlay : 1;                                           // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bIsUISound : 1;                                            // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bIsMusic : 1;                                              // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bReverb : 1;                                               // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bCenterChannelOnly : 1;                                    // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bApplyAmbientVolumes : 1;                                  // 0x001C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BM21[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EAudioOutputTarget>             OutputTarget;                                              // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U2GM[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.PassiveSoundMixModifier
// 0x000C
struct FPassiveSoundMixModifier
{
	class USoundMix*                                   SoundMix;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinVolumeThreshold;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxVolumeThreshold;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AudioEQEffect
// 0x0024
struct FAudioEQEffect
{
	unsigned char                                      UnknownData_2CIX[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HFFrequency;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HFGain;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MFCutoffFrequency;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MFBandwidth;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MFGain;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LFFrequency;                                               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LFGain;                                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.SoundClassAdjuster
// 0x0014
struct FSoundClassAdjuster
{
	class USoundClass*                                 SoundClassObject;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumeAdjuster;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchAdjuster;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bApplyToChildren : 1;                                      // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V3TJ[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VoiceCenterChannelVolumeAdjuster;                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ActorComponentTickFunction
// 0x0004 (0x0038 - 0x0034)
struct FActorComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_MR71[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LightingChannels
// 0x0003
struct FLightingChannels
{
	bool                                               bChannel0;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bChannel1;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bChannel2;                                                 // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CollisionResponseContainer
// 0x0020
struct FCollisionResponseContainer
{
	TEnumAsByte<Engine_ECollisionResponse>             WorldStatic;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             WorldDynamic;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             Pawn;                                                      // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             Visibility;                                                // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             Camera;                                                    // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             PhysicsBody;                                               // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             Vehicle;                                                   // 0x0006(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             Destructible;                                              // 0x0007(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             EngineTraceChannel1;                                       // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             EngineTraceChannel2;                                       // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             EngineTraceChannel3;                                       // 0x000A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             EngineTraceChannel4;                                       // 0x000B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             EngineTraceChannel5;                                       // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             EngineTraceChannel6;                                       // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel1;                                         // 0x000E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel2;                                         // 0x000F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel3;                                         // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel4;                                         // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel5;                                         // 0x0012(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel6;                                         // 0x0013(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel7;                                         // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel8;                                         // 0x0015(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel9;                                         // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel10;                                        // 0x0017(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel11;                                        // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel12;                                        // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel13;                                        // 0x001A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel14;                                        // 0x001B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel15;                                        // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel16;                                        // 0x001D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel17;                                        // 0x001E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             GameTraceChannel18;                                        // 0x001F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ResponseChannel
// 0x000C
struct FResponseChannel
{
	struct FName                                       Channel;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             Response;                                                  // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J9TM[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.WalkableSlopeOverride
// 0x0008
struct FWalkableSlopeOverride
{
	TEnumAsByte<Engine_EWalkableSlopeBehavior>         WalkableSlopeBehavior;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GAIX[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WalkableSlopeAngle;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CollisionResponse
// 0x002C
struct FCollisionResponse
{
	struct FCollisionResponseContainer                 ResponseToChannels;                                        // 0x0000(0x0020) (Transient, NativeAccessSpecifierPrivate)
	TArray<struct FResponseChannel>                    ResponseArray;                                             // 0x0020(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct Engine.BodyInstance
// 0x0128
struct FBodyInstance
{
	unsigned char                                      UnknownData_W5LQ[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Scale3D;                                                   // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P2GH[0x4];                                     // 0x0010(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCollisionResponseContainer                 ResponseToChannels;                                        // 0x0014(0x0020) (Deprecated, NativeAccessSpecifierPublic)
	struct FName                                       CollisionProfileName;                                      // 0x0034(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FCollisionResponse                          CollisionResponses;                                        // 0x003C(0x002C) (Edit, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_D5LX[0x4];                                     // 0x0068(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bUseCCD : 1;                                               // 0x006C(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      bNotifyRigidBodyCollision : 1;                             // 0x006C(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSimulatePhysics : 1;                                      // 0x006C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideMass : 1;                                         // 0x006C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableGravity : 1;                                        // 0x006C(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAutoWeld : 1;                                             // 0x006C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R08W : 1;                                      // 0x006C(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bStartAwake : 1;                                           // 0x006C(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      bGenerateWakeEvents : 1;                                   // 0x006D(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      bUpdateMassWhenScaleChanges : 1;                           // 0x006D(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bLockTranslation : 1;                                      // 0x006D(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bLockRotation : 1;                                         // 0x006D(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bLockXTranslation : 1;                                     // 0x006D(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bLockYTranslation : 1;                                     // 0x006D(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bLockZTranslation : 1;                                     // 0x006D(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bLockXRotation : 1;                                        // 0x006D(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bLockYRotation : 1;                                        // 0x006E(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bLockZRotation : 1;                                        // 0x006E(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideMaxAngularVelocity : 1;                           // 0x006E(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KPQS : 1;                                      // 0x006E(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bUseAsyncScene : 1;                                        // 0x006E(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bOverrideMaxDepenetrationVelocity : 1;                     // 0x006E(0x0001) BIT_FIELD (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bOverrideWalkableSlopeOnInstance : 1;                      // 0x006E(0x0001) BIT_FIELD (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9FJ2[0x1];                                     // 0x006F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxDepenetrationVelocity;                                  // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MassInKg;                                                  // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LinearDamping;                                             // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularDamping;                                            // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CustomDOFPlaneNormal;                                      // 0x0080(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     COMNudge;                                                  // 0x008C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              MassScale;                                                 // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_80WS[0x8];                                     // 0x009C(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWalkableSlopeOverride                      WalkableSlopeOverride;                                     // 0x00A4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	class UPhysicalMaterial*                           PhysMaterialOverride;                                      // 0x00AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxAngularVelocity;                                        // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CustomSleepThresholdMultiplier;                            // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PhysicsBlendWeight;                                        // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PositionSolverIterationCount;                              // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P1BU[0x14];                                    // 0x00C0(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint64_t                                           RigidActorSyncId;                                          // 0x00D4(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           RigidActorAsyncId;                                         // 0x00DC(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VelocitySolverIterationCount;                              // 0x00E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R2NG[0x3C];                                    // 0x00E8(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ESleepFamily>                   SleepFamily;                                               // 0x0124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EDOFMode>                       DOFMode;                                                   // 0x0125(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionEnabled>              CollisionEnabled;                                          // 0x0126(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TEnumAsByte<Engine_ECollisionChannel>              ObjectType;                                                // 0x0127(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Engine.PrimitiveComponentPostPhysicsTickFunction
// 0x0004 (0x0038 - 0x0034)
struct FPrimitiveComponentPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_I3IS[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.OverlapInfo
// 0x0084
struct FOverlapInfo
{
	unsigned char                                      UnknownData_533Z[0x84];                                    // 0x0000(0x0084) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.RootMotionSourceSettings
// 0x0001
struct FRootMotionSourceSettings
{
	unsigned char                                      Flags;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.Vector_NetQuantize10
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize10 : public FVector
{

};

// ScriptStruct Engine.RootMotionSourceGroup
// 0x0090
struct FRootMotionSourceGroup
{
	unsigned char                                      UnknownData_KQ4F[0x7C];                                    // 0x0000(0x007C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bHasAdditiveSources;                                       // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bHasOverrideSources;                                       // 0x007D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F012[0x2];                                     // 0x007E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LastPreAdditiveVelocity;                                   // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsAdditiveVelocityApplied;                                // 0x008C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRootMotionSourceSettings                   LastAccumulatedSettings;                                   // 0x008D(0x0001) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_710H[0x2];                                     // 0x008E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.RepRootMotionMontage
// 0x00DC
struct FRepRootMotionMontage
{
	bool                                               bIsActive;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y6E6[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                AnimMontage;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Position;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      Location;                                                  // 0x000C(0x000C) (NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         MovementBase;                                              // 0x0024(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MovementBaseBoneName;                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRelativePosition;                                         // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bRelativeRotation;                                         // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K8DW[0x2];                                     // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRootMotionSourceGroup                      AuthoritativeRootMotion;                                   // 0x0034(0x0090) (NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       Acceleration;                                              // 0x00C4(0x000C) (NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       LinearVelocity;                                            // 0x00D0(0x000C) (NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// 0x00E0
struct FSimulatedRootMotionReplicatedMove
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRepRootMotionMontage                       RootMotion;                                                // 0x0004(0x00DC) (ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.UniqueNetIdRepl
// 0x0008
struct FUniqueNetIdRepl
{
	unsigned char                                      UnknownData_B4NT[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LightmassPrimitiveSettings
// 0x0018
struct FLightmassPrimitiveSettings
{
	unsigned char                                      bUseTwoSidedLighting : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bShadowIndirectOnly : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bUseEmissiveForStaticLighting : 1;                         // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bUseVertexNormalForHemisphereGather : 1;                   // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WQTZ[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EmissiveLightFalloffExponent;                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EmissiveLightExplicitInfluenceRadius;                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EmissiveBoost;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DiffuseBoost;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FullyOccludedSamplesFraction;                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.PaintedVertex
// 0x0014
struct FPaintedVertex
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPackedNormal                               Normal;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// 0x0058
struct FStaticMeshComponentLODInfo
{
	unsigned char                                      UnknownData_ZXX6[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPaintedVertex>                      PaintedVertices;                                           // 0x0008(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F5SH[0x44];                                    // 0x0014(0x0044) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimLinkableElement
// 0x0024
struct FAnimLinkableElement
{
	unsigned char                                      UnknownData_511G[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                LinkedMontage;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SlotIndex;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SegmentIndex;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_EAnimLinkMethod>                LinkMethod;                                                // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_EAnimLinkMethod>                CachedLinkMethod;                                          // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OBE1[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SegmentBeginTime;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SegmentLength;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LinkValue;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           LinkedSequence;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Engine.AnimNotifyEvent
// 0x0060 (0x0084 - 0x0024)
struct FAnimNotifyEvent : public FAnimLinkableElement
{
	float                                              DisplayTime;                                               // 0x0024(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TriggerTimeOffset;                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndTriggerTimeOffset;                                      // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TriggerWeightThreshold;                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NotifyName;                                                // 0x0034(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimNotify*                                 Notify;                                                    // 0x003C(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimNotifyState*                            NotifyStateClass;                                          // 0x0040(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimLinkableElement                        EndLink;                                                   // 0x0048(0x0024) (NativeAccessSpecifierPublic)
	bool                                               bConvertedFromBranchingPoint;                              // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EMontageNotifyTickType>         MontageTickType;                                           // 0x006D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XUO3[0x2];                                     // 0x006E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NotifyTriggerChance;                                       // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ENotifyFilterType>              NotifyFilterType;                                          // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0G1T[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NotifyFilterLOD;                                           // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTriggerOnDedicatedServer;                                 // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TQ17[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TrackIndex;                                                // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.MarkerSyncAnimPosition
// 0x0014
struct FMarkerSyncAnimPosition
{
	struct FName                                       PreviousMarkerName;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NextMarkerName;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PositionBetweenMarkers;                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.WeightedBlendable
// 0x0008
struct FWeightedBlendable
{
	float                                              Weight;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Object;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.WeightedBlendables
// 0x000C
struct FWeightedBlendables
{
	TArray<struct FWeightedBlendable>                  Array;                                                     // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.PostProcessSettings
// 0x0374
struct FPostProcessSettings
{
	unsigned char                                      bOverride_WhiteTemp : 1;                                   // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_WhiteTint : 1;                                   // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorSaturation : 1;                             // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorContrast : 1;                               // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorGamma : 1;                                  // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorGain : 1;                                   // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorOffset : 1;                                 // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmWhitePoint : 1;                              // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmSaturation : 1;                              // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmChannelMixerRed : 1;                         // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmChannelMixerGreen : 1;                       // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmChannelMixerBlue : 1;                        // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmContrast : 1;                                // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmDynamicRange : 1;                            // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmHealAmount : 1;                              // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmToeAmount : 1;                               // 0x0001(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmShadowTint : 1;                              // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmShadowTintBlend : 1;                         // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmShadowTintAmount : 1;                        // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmSlope : 1;                                   // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmToe : 1;                                     // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmShoulder : 1;                                // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmBlackClip : 1;                               // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmWhiteClip : 1;                               // 0x0002(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_SceneColorTint : 1;                              // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_SceneFringeIntensity : 1;                        // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientCubemapTint : 1;                          // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientCubemapIntensity : 1;                     // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomIntensity : 1;                              // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomThreshold : 1;                              // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom1Tint : 1;                                  // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom1Size : 1;                                  // 0x0003(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom2Size : 1;                                  // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom2Tint : 1;                                  // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom3Tint : 1;                                  // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom3Size : 1;                                  // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom4Tint : 1;                                  // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom4Size : 1;                                  // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom5Tint : 1;                                  // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom5Size : 1;                                  // 0x0004(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom6Tint : 1;                                  // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom6Size : 1;                                  // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomSizeScale : 1;                              // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomDirtMaskIntensity : 1;                      // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomDirtMaskTint : 1;                           // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomDirtMask : 1;                               // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AutoExposureMethod : 1;                          // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AutoExposureLowPercent : 1;                      // 0x0005(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AutoExposureHighPercent : 1;                     // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AutoExposureMinBrightness : 1;                   // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AutoExposureMaxBrightness : 1;                   // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AutoExposureSpeedUp : 1;                         // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AutoExposureSpeedDown : 1;                       // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AutoExposureBias : 1;                            // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_HistogramLogMin : 1;                             // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_HistogramLogMax : 1;                             // 0x0006(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LensFlareIntensity : 1;                          // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LensFlareTint : 1;                               // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LensFlareTints : 1;                              // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LensFlareBokehSize : 1;                          // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LensFlareBokehShape : 1;                         // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LensFlareThreshold : 1;                          // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_VignetteIntensity : 1;                           // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_GrainIntensity : 1;                              // 0x0007(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_GrainJitter : 1;                                 // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionIntensity : 1;                   // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionStaticFraction : 1;              // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionRadius : 1;                      // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionFadeDistance : 1;                // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionFadeRadius : 1;                  // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionDistance : 1;                    // 0x0008(0x0001) BIT_FIELD (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionRadiusInWS : 1;                  // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionPower : 1;                       // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionBias : 1;                        // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionQuality : 1;                     // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionMipBlend : 1;                    // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionMipScale : 1;                    // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionMipThreshold : 1;                // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVIntensity : 1;                                // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVDirectionalOcclusionIntensity : 1;            // 0x0009(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVDirectionalOcclusionRadius : 1;               // 0x000A(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVDiffuseOcclusionExponent : 1;                 // 0x000A(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVSpecularOcclusionExponent : 1;                // 0x000A(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVDiffuseOcclusionIntensity : 1;                // 0x000A(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity : 1;               // 0x000A(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVSize : 1;                                     // 0x000A(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity : 1;              // 0x000A(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity : 1;                 // 0x000A(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVGeometryVolumeBias : 1;                       // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVVplInjectionBias : 1;                         // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity : 1;               // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_IndirectLightingColor : 1;                       // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_IndirectLightingIntensity : 1;                   // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorGradingIntensity : 1;                       // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorGradingLUT : 1;                             // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldFocalDistance : 1;                   // 0x000B(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldFstop : 1;                           // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurRadius : 1;                 // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurAmount : 1;                 // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldFocalRegion : 1;                     // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldNearTransitionRegion : 1;            // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldFarTransitionRegion : 1;             // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldScale : 1;                           // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldMaxBokehSize : 1;                    // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldNearBlurSize : 1;                    // 0x000D(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldFarBlurSize : 1;                     // 0x000D(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldMethod : 1;                          // 0x000D(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldBokehShape : 1;                      // 0x000D(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldOcclusion : 1;                       // 0x000D(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldColorThreshold : 1;                  // 0x000D(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldSizeThreshold : 1;                   // 0x000D(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldSkyFocusDistance : 1;                // 0x000D(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldVignetteSize : 1;                    // 0x000E(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MotionBlurAmount : 1;                            // 0x000E(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MotionBlurMax : 1;                               // 0x000E(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MotionBlurPerObjectSize : 1;                     // 0x000E(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ScreenPercentage : 1;                            // 0x000E(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AntiAliasingMethod : 1;                          // 0x000E(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ScreenSpaceReflectionIntensity : 1;              // 0x000E(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ScreenSpaceReflectionQuality : 1;                // 0x000E(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ScreenSpaceReflectionMaxRoughness : 1;           // 0x000F(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ScreenSpaceReflectionRoughnessScale : 1;         // 0x000F(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              WhiteTemp;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WhiteTint;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ColorSaturation;                                           // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     ColorContrast;                                             // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     ColorGamma;                                                // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     ColorGain;                                                 // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     ColorOffset;                                               // 0x0048(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                FilmWhitePoint;                                            // 0x0054(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                FilmShadowTint;                                            // 0x0064(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              FilmShadowTintBlend;                                       // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmShadowTintAmount;                                      // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmSaturation;                                            // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                FilmChannelMixerRed;                                       // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FLinearColor                                FilmChannelMixerGreen;                                     // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FLinearColor                                FilmChannelMixerBlue;                                      // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              FilmContrast;                                              // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmToeAmount;                                             // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmHealAmount;                                            // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmDynamicRange;                                          // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmSlope;                                                 // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmToe;                                                   // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmShoulder;                                              // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmBlackClip;                                             // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmWhiteClip;                                             // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SceneColorTint;                                            // 0x00D4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              SceneFringeIntensity;                                      // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BloomIntensity;                                            // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BloomThreshold;                                            // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BloomSizeScale;                                            // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bloom1Size;                                                // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bloom2Size;                                                // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bloom3Size;                                                // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bloom4Size;                                                // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bloom5Size;                                                // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bloom6Size;                                                // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Bloom1Tint;                                                // 0x010C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FLinearColor                                Bloom2Tint;                                                // 0x011C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FLinearColor                                Bloom3Tint;                                                // 0x012C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FLinearColor                                Bloom4Tint;                                                // 0x013C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FLinearColor                                Bloom5Tint;                                                // 0x014C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FLinearColor                                Bloom6Tint;                                                // 0x015C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              BloomDirtMaskIntensity;                                    // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BloomDirtMaskTint;                                         // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UTexture*                                    BloomDirtMask;                                             // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVIntensity;                                              // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVVplInjectionBias;                                       // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVSize;                                                   // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVSecondaryOcclusionIntensity;                            // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVSecondaryBounceIntensity;                               // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVGeometryVolumeBias;                                     // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVEmissiveInjectionIntensity;                             // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVDirectionalOcclusionIntensity;                          // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVDirectionalOcclusionRadius;                             // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVDiffuseOcclusionExponent;                               // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVSpecularOcclusionExponent;                              // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVDiffuseOcclusionIntensity;                              // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVSpecularOcclusionIntensity;                             // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                AmbientCubemapTint;                                        // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              AmbientCubemapIntensity;                                   // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureCube*                                AmbientCubemap;                                            // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAutoExposureMethod>            AutoExposureMethod;                                        // 0x01D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IHIZ[0x3];                                     // 0x01D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AutoExposureLowPercent;                                    // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoExposureHighPercent;                                   // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoExposureMinBrightness;                                 // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoExposureMaxBrightness;                                 // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoExposureSpeedUp;                                       // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoExposureSpeedDown;                                     // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoExposureBias;                                          // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HistogramLogMin;                                           // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HistogramLogMax;                                           // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LensFlareIntensity;                                        // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LensFlareTint;                                             // 0x01FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              LensFlareBokehSize;                                        // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LensFlareThreshold;                                        // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    LensFlareBokehShape;                                       // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LensFlareTints[0x8];                                       // 0x0218(0x0080) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              VignetteIntensity;                                         // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GrainJitter;                                               // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GrainIntensity;                                            // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionIntensity;                                 // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionStaticFraction;                            // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionRadius;                                    // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AmbientOcclusionRadiusInWS : 1;                            // 0x02B0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QLW1[0x3];                                     // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AmbientOcclusionFadeDistance;                              // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionFadeRadius;                                // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionDistance;                                  // 0x02BC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionPower;                                     // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionBias;                                      // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionQuality;                                   // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionMipBlend;                                  // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionMipScale;                                  // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionMipThreshold;                              // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                IndirectLightingColor;                                     // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic)
	float                                              IndirectLightingIntensity;                                 // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ColorGradingIntensity;                                     // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    ColorGradingLUT;                                           // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EDepthOfFieldMethod>            DepthOfFieldMethod;                                        // 0x02F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_346O[0x3];                                     // 0x02F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DepthOfFieldFstop;                                         // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldFocalDistance;                                 // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldDepthBlurAmount;                               // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldDepthBlurRadius;                               // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldFocalRegion;                                   // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldNearTransitionRegion;                          // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldFarTransitionRegion;                           // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldScale;                                         // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldMaxBokehSize;                                  // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldNearBlurSize;                                  // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldFarBlurSize;                                   // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    DepthOfFieldBokehShape;                                    // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldOcclusion;                                     // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldColorThreshold;                                // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldSizeThreshold;                                 // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldSkyFocusDistance;                              // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldVignetteSize;                                  // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MotionBlurAmount;                                          // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MotionBlurMax;                                             // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MotionBlurPerObjectSize;                                   // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScreenPercentage;                                          // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAntiAliasingMethod>            AntiAliasingMethod;                                        // 0x034C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PA3Z[0x3];                                     // 0x034D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ScreenSpaceReflectionIntensity;                            // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScreenSpaceReflectionQuality;                              // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScreenSpaceReflectionMaxRoughness;                         // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWeightedBlendables                         WeightedBlendables;                                        // 0x035C(0x000C) (Edit, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             Blendables;                                                // 0x0368(0x000C) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// 0x0014
struct FActiveForceFeedbackEffect
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E1JI[0x10];                                    // 0x0004(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EViewTargetBlendFunction>       BlendFunction;                                             // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RNPX[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlendExp;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLockOutgoing : 1;                                         // 0x000C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6HE4[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LatentActionInfo
// 0x0014
struct FLatentActionInfo
{
	int                                                Linkage;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UUID;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ExecutionFunction;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     CallbackTarget;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.GameNameRedirect
// 0x0010
struct FGameNameRedirect
{
	struct FName                                       OldGameName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewGameName;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ClassRedirect
// 0x003C
struct FClassRedirect
{
	struct FName                                       ObjectName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       OldClassName;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewClassName;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       OldSubobjName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewSubobjName;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewClassClass;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewClassPackage;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InstanceOnly;                                              // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K076[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.PluginRedirect
// 0x0018
struct FPluginRedirect
{
	struct FString                                     OldPluginName;                                             // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewPluginName;                                             // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.StructRedirect
// 0x0010
struct FStructRedirect
{
	struct FName                                       OldStructName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewStructName;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.DropNoteInfo
// 0x0024
struct FDropNoteInfo
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Comment;                                                   // 0x0018(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RigidBodyErrorCorrection
// 0x001C
struct FRigidBodyErrorCorrection
{
	float                                              LinearDeltaThresholdSq;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LinearInterpAlpha;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LinearRecipFixTime;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularDeltaThreshold;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularInterpAlpha;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularRecipFixTime;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BodySpeedThresholdSq;                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.NetDriverDefinition
// 0x0018
struct FNetDriverDefinition
{
	struct FName                                       DefName;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DriverClassName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DriverClassNameFallback;                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.DebugDisplayProperty
// 0x0014
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      WithinClass;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NWGK[0xC];                                     // 0x0008(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.GameClassShortName
// 0x0018
struct FGameClassShortName
{
	struct FString                                     ShortName;                                                 // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameClassName;                                             // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.GeomSelection
// 0x000C
struct FGeomSelection
{
	int                                                Type;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                INDEX;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SelectionIndex;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.KeyBind
// 0x0020
struct FKeyBind
{
	struct FKey                                        Key;                                                       // 0x0000(0x0010) (Config, NativeAccessSpecifierPublic)
	struct FString                                     Command;                                                   // 0x0010(0x000C) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Control : 1;                                               // 0x001C(0x0001) BIT_FIELD (Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      Shift : 1;                                                 // 0x001C(0x0001) BIT_FIELD (Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      Alt : 1;                                                   // 0x001C(0x0001) BIT_FIELD (Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      Cmd : 1;                                                   // 0x001C(0x0001) BIT_FIELD (Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bIgnoreCtrl : 1;                                           // 0x001C(0x0001) BIT_FIELD (Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bIgnoreShift : 1;                                          // 0x001C(0x0001) BIT_FIELD (Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bIgnoreAlt : 1;                                            // 0x001C(0x0001) BIT_FIELD (Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bIgnoreCmd : 1;                                            // 0x001C(0x0001) BIT_FIELD (Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DJV6[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.MovementProperties
// 0x0004
struct FMovementProperties
{
	unsigned char                                      bCanCrouch : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bCanJump : 1;                                              // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bCanWalk : 1;                                              // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bCanSwim : 1;                                              // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bCanFly : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CSOW[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.NavAgentProperties
// 0x0014 (0x0018 - 0x0004)
struct FNavAgentProperties : public FMovementProperties
{
	float                                              AgentRadius;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentHeight;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentStepHeight;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NavWalkingSearchHeightScale;                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PreferredNavData;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.FindFloorResult
// 0x008C
struct FFindFloorResult
{
	unsigned char                                      bBlockingHit : 1;                                          // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bWalkableFloor : 1;                                        // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bLineTrace : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BDN8[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FloorDist;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LineDist;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  HitResult;                                                 // 0x000C(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.NavAvoidanceMask
// 0x0004
struct FNavAvoidanceMask
{
	unsigned char                                      bGroup0 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup1 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup2 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup3 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup4 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup5 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup6 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup7 : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup8 : 1;                                               // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup9 : 1;                                               // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup10 : 1;                                              // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup11 : 1;                                              // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup12 : 1;                                              // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup13 : 1;                                              // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup14 : 1;                                              // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup15 : 1;                                              // 0x0001(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup16 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup17 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup18 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup19 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup20 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup21 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup22 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup23 : 1;                                              // 0x0002(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup24 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup25 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup26 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup27 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup28 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup29 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup30 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup31 : 1;                                              // 0x0003(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// 0x0004 (0x0038 - 0x0034)
struct FCharacterMovementComponentPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_CMFU[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingSaturation;                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShadowExponent;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAreaShadowsForStationaryLight;                         // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0P71[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// 0x0004 (0x0010 - 0x000C)
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
	float                                              LightSourceAngle;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.LightmassPointLightSettings
// 0x0000 (0x000C - 0x000C)
struct FLightmassPointLightSettings : public FLightmassLightSettings
{

};

// ScriptStruct Engine.NavGraphNode
// 0x0010
struct FNavGraphNode
{
	class UObject*                                     Owner;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O9S8[0xC];                                     // 0x0004(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ImportFactorySettingValues
// 0x0018
struct FImportFactorySettingValues
{
	struct FString                                     SettingName;                                               // 0x0000(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x000C(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// 0x0018
struct FEditorImportWorkflowDefinition
{
	struct FFilePath                                   ImportFilePath;                                            // 0x0000(0x000C) (Edit, Config, NativeAccessSpecifierPublic)
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                           // 0x000C(0x000C) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// 0x00FC
struct FBuildPromotionImportWorkflowSettings
{
	struct FEditorImportWorkflowDefinition             Diffuse;                                                   // 0x0000(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition             Normal;                                                    // 0x0018(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition             StaticMesh;                                                // 0x0030(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition             ReimportStaticMesh;                                        // 0x0048(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition             BlendShapeMesh;                                            // 0x0060(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition             MorphMesh;                                                 // 0x0078(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition             SkeletalMesh;                                              // 0x0090(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition             Animation;                                                 // 0x00A8(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition             Sound;                                                     // 0x00C0(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition             SurroundSound;                                             // 0x00D8(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	TArray<struct FEditorImportWorkflowDefinition>     OtherAssetsToImport;                                       // 0x00F0(0x000C) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.DirectoryPath
// 0x000C
struct FDirectoryPath
{
	struct FString                                     Path;                                                      // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// 0x0018
struct FBuildPromotionNewProjectSettings
{
	struct FDirectoryPath                              NewProjectFolderOverride;                                  // 0x0000(0x000C) (Edit, NativeAccessSpecifierPublic)
	struct FString                                     NewProjectNameOverride;                                    // 0x000C(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BuildPromotionTestSettings
// 0x0174
struct FBuildPromotionTestSettings
{
	struct FFilePath                                   DefaultStaticMeshAsset;                                    // 0x0000(0x000C) (Edit, NativeAccessSpecifierPublic)
	struct FBuildPromotionImportWorkflowSettings       ImportWorkflow;                                            // 0x000C(0x00FC) (Edit, NativeAccessSpecifierPublic)
	struct FBuildPromotionOpenAssetSettings            OpenAssets;                                                // 0x0108(0x0048) (Edit, NativeAccessSpecifierPublic)
	struct FBuildPromotionNewProjectSettings           NewProjectSettings;                                        // 0x0150(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FFilePath                                   SourceControlMaterial;                                     // 0x0168(0x000C) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.FractureMaterial
// 0x0024
struct FFractureMaterial
{
	struct FVector2D                                   UVScale;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   UVOffset;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Tangent;                                                   // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              UAngle;                                                    // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InteriorElementIndex;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.DestructibleChunkParameters
// 0x0004
struct FDestructibleChunkParameters
{
	bool                                               bIsSupportChunk;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bDoNotFracture;                                            // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bDoNotDamage;                                              // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bDoNotCrumble;                                             // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ScalarMaterialInput
// 0x0008 (0x0034 - 0x002C)
struct FScalarMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                           // 0x002C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XGSQ[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Constant;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.Vector2MaterialInput
// 0x000C (0x0038 - 0x002C)
struct FVector2MaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                           // 0x002C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3TGU[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ConstantX;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ConstantY;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.MaterialFunctionInfo
// 0x0014
struct FMaterialFunctionInfo
{
	struct FGuid                                       StateId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UMaterialFunction*                           Function;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// 0x0014
struct FMaterialParameterCollectionInfo
{
	struct FGuid                                       StateId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UMaterialParameterCollection*                ParameterCollection;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.NavDataConfig
// 0x0028 (0x0040 - 0x0018)
struct FNavDataConfig : public FNavAgentProperties
{
	struct FName                                       Name;                                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     DefaultQueryExtent;                                        // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      NavigationDataClass;                                       // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStringClassReference                       NavigationDataClassName;                                   // 0x0034(0x000C) (ZeroConstructor, Config, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.SupportedAreaData
// 0x0014
struct FSupportedAreaData
{
	struct FString                                     AreaClassName;                                             // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaID;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AreaClass;                                                 // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.MinimalViewInfo
// 0x03AC
struct FMinimalViewInfo
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              FOV;                                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OrthoWidth;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OrthoNearClipPlane;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OrthoFarClipPlane;                                         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AspectRatio;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bConstrainAspectRatio : 1;                                 // 0x002C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bUseFieldOfViewForLOD : 1;                                 // 0x002C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CPRI[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ECameraProjectionMode>          ProjectionMode;                                            // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0IKP[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PostProcessBlendWeight;                                    // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPostProcessSettings                        PostProcessSettings;                                       // 0x0038(0x0374) (BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.TViewTarget
// 0x03B4
struct FTViewTarget
{
	class AActor*                                      Target;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinimalViewInfo                            POV;                                                       // 0x0004(0x03AC) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class APlayerState*                                PlayerState;                                               // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Engine.DebugTextInfo
// 0x004C
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SrcActorOffset;                                            // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     SrcActorDesiredOffset;                                     // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     DebugText;                                                 // 0x001C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeRemaining;                                             // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      TextColor;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAbsoluteLocation : 1;                                     // 0x0034(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bKeepAttachedToActor : 1;                                  // 0x0034(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawShadow : 1;                                           // 0x0034(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GWWY[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     OrigActorLocation;                                         // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UFont*                                       Font;                                                      // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FontScale;                                                 // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.GameModePrefix
// 0x0018
struct FGameModePrefix
{
	struct FString                                     Prefix;                                                    // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.LightmassWorldInfoSettings
// 0x0044
struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumIndirectLightingBounces;                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IndirectLightingQuality;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IndirectLightingSmoothness;                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      EnvironmentColor;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              EnvironmentIntensity;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EmissiveBoost;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DiffuseBoost;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseAmbientOcclusion : 1;                                  // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGenerateAmbientOcclusionMaterialMask : 1;                 // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VTCP[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DirectIlluminationOcclusionFraction;                       // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IndirectIlluminationOcclusionFraction;                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OcclusionExponent;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FullyOccludedSamplesFraction;                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxOcclusionDistance;                                      // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bVisualizeMaterialDiffuse : 1;                             // 0x0038(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      bVisualizeAmbientOcclusion : 1;                            // 0x0038(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DI6A[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VolumeLightSamplePlacementScale;                           // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCompressLightmaps : 1;                                    // 0x0040(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8NX4[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ReverbSettings
// 0x0014
struct FReverbSettings
{
	unsigned char                                      bApplyReverb : 1;                                          // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4T7N[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EReverbPreset>                  ReverbType;                                                // 0x0004(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YRCN[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UReverbEffect*                               ReverbEffect;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeTime;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.InteriorSettings
// 0x0024
struct FInteriorSettings
{
	unsigned char                                      bIsWorldSettings : 1;                                      // 0x0000(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MZ9N[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ExteriorVolume;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExteriorTime;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExteriorLPF;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExteriorLPFTime;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteriorVolume;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteriorTime;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteriorLPF;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteriorLPFTime;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.TimelineEventEntry
// 0x0014
struct FTimelineEventEntry
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             EventFunc;                                                 // 0x0004(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.TimelineVectorTrack
// 0x0028
struct FTimelineVectorTrack
{
	class UCurveVector*                                VectorCurve;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             InterpFunc;                                                // 0x0004(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       VectorPropertyName;                                        // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructProperty*                             VectorProperty;                                            // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q0TZ[0x8];                                     // 0x0020(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.TimelineFloatTrack
// 0x0028
struct FTimelineFloatTrack
{
	class UCurveFloat*                                 FloatCurve;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             InterpFunc;                                                // 0x0004(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       FloatPropertyName;                                         // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFloatProperty*                              FloatProperty;                                             // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G9SQ[0x8];                                     // 0x0020(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.TimelineLinearColorTrack
// 0x0028
struct FTimelineLinearColorTrack
{
	class UCurveLinearColor*                           LinearColorCurve;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             InterpFunc;                                                // 0x0004(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       LinearColorPropertyName;                                   // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructProperty*                             LinearColorProperty;                                       // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W3LM[0x8];                                     // 0x0020(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Timeline
// 0x0080
struct FTimeline
{
	TEnumAsByte<Engine_ETimelineLengthMode>            LengthMode;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JP6X[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Length;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bLooping : 1;                                              // 0x0008(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      bReversePlayback : 1;                                      // 0x0008(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      bPlaying : 1;                                              // 0x0008(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_X9CP[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PlayRate;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              Position;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineEventEntry>                 Events;                                                    // 0x0014(0x000C) (ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineVectorTrack>                InterpVectors;                                             // 0x0020(0x000C) (ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineFloatTrack>                 InterpFloats;                                              // 0x002C(0x000C) (ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineLinearColorTrack>           InterpLinearColors;                                        // 0x0038(0x000C) (ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             TimelinePostUpdateFunc;                                    // 0x0044(0x0010) (ZeroConstructor, InstancedReference, RepSkip, NoDestructor, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             TimelineFinishedFunc;                                      // 0x0054(0x0010) (ZeroConstructor, InstancedReference, RepSkip, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MTWY[0x8];                                     // 0x0064(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UObject>                      PropertySetObject;                                         // 0x006C(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FName                                       DirectionPropertyName;                                     // 0x0074(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UByteProperty*                               DirectionProperty;                                         // 0x007C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Engine.AnimCurveBase
// 0x0014
struct FAnimCurveBase
{
	unsigned char                                      UnknownData_1YY7[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       LastObservedName;                                          // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NYHZ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurveTypeFlags;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Engine.FloatCurve
// 0x0054 (0x0068 - 0x0014)
struct FFloatCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurve;                                                // 0x0014(0x0054) (NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RawCurveTracks
// 0x000C
struct FRawCurveTracks
{
	TArray<struct FFloatCurve>                         FloatCurves;                                               // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimSegment
// 0x0018
struct FAnimSegment
{
	class UAnimSequenceBase*                           AnimReference;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartPos;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimStartTime;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimEndTime;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimPlayRate;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LoopingCount;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimTrack
// 0x000C
struct FAnimTrack
{
	TArray<struct FAnimSegment>                        AnimSegments;                                              // 0x0000(0x000C) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AlphaBlend
// 0x002C
struct FAlphaBlend
{
	TEnumAsByte<Engine_EAlphaBlendOption>              BlendOption;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZG7R[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 CustomCurve;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              BlendTime;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YDNI[0x20];                                    // 0x000C(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimSyncMarker
// 0x000C
struct FAnimSyncMarker
{
	struct FName                                       MarkerName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CompositeSection
// 0x0020 (0x0044 - 0x0024)
struct FCompositeSection : public FAnimLinkableElement
{
	struct FName                                       SectionName;                                               // 0x0024(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // 0x002C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NextSectionName;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimMetaData*>                       MetaData;                                                  // 0x0038(0x000C) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

};

// ScriptStruct Engine.BranchingPoint
// 0x0010 (0x0034 - 0x0024)
struct FBranchingPoint : public FAnimLinkableElement
{
	struct FName                                       EventName;                                                 // 0x0024(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisplayTime;                                               // 0x002C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TriggerTimeOffset;                                         // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BranchingPointMarker
// 0x000C
struct FBranchingPointMarker
{
	int                                                NotifyIndex;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TriggerTime;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAnimNotifyEventType>           NotifyEventType;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BZAA[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.TrackToSkeletonMap
// 0x0004
struct FTrackToSkeletonMap
{
	int                                                BoneTreeIndex;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.TranslationTrack
// 0x0018
struct FTranslationTrack
{
	TArray<struct FVector>                             PosKeys;                                                   // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      Times;                                                     // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RotationTrack
// 0x0018
struct FRotationTrack
{
	TArray<struct FQuat>                               RotKeys;                                                   // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      Times;                                                     // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ScaleTrack
// 0x0018
struct FScaleTrack
{
	TArray<struct FVector>                             ScaleKeys;                                                 // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      Times;                                                     // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CompressedOffsetData
// 0x0010
struct FCompressedOffsetData
{
	TArray<int>                                        OffsetData;                                                // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                StripSize;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BlendParameter
// 0x0018
struct FBlendParameter
{
	struct FString                                     DisplayName;                                               // 0x0000(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Min;                                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GridNum;                                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.InterpolationParameter
// 0x0008
struct FInterpolationParameter
{
	float                                              InterpolationTime;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EFilterInterpolationType>       InterpolationType;                                         // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P1UN[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.BoneReference
// 0x000C
struct FBoneReference
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N7XW[0x4];                                     // 0x0008(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.PerBoneInterpolation
// 0x0010
struct FPerBoneInterpolation
{
	struct FBoneReference                              BoneReference;                                             // 0x0000(0x000C) (Edit, NativeAccessSpecifierPublic)
	float                                              InterpolationSpeedPerSec;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.EditorElement
// 0x0018
struct FEditorElement
{
	int                                                Indices[0x3];                                              // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weights[0x3];                                              // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BakedStateExitTransition
// 0x001C
struct FBakedStateExitTransition
{
	int                                                CanTakeDelegateIndex;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CustomResultNodeIndex;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TransitionIndex;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDesiredTransitionReturnValue;                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAutomaticRemainingTimeRule;                               // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V8AI[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        PoseEvaluatorLinks;                                        // 0x0010(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BakedAnimationState
// 0x0038
struct FBakedAnimationState
{
	struct FName                                       StateName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBakedStateExitTransition>           Transitions;                                               // 0x0008(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                StateRootNodeIndex;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartNotify;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndNotify;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FullyBlendedNotify;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAConduit;                                               // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QRD4[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EntryRuleNodeIndex;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        PlayerNodeIndices;                                         // 0x002C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimationStateBase
// 0x0008
struct FAnimationStateBase
{
	struct FName                                       StateName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// 0x0028 (0x0030 - 0x0008)
struct FAnimationTransitionBetweenStates : public FAnimationStateBase
{
	int                                                PreviousState;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NextState;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CrossfadeDuration;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartNotify;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndNotify;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InterruptNotify;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAlphaBlendOption>              BlendMode;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1BBF[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 CustomCurve;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendProfile*                               BlendProfile;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETransitionLogicType>           LogicType;                                                 // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_URMK[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.BakedAnimationStateMachine
// 0x0024
struct FBakedAnimationStateMachine
{
	struct FName                                       MachineName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InitialState;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBakedAnimationState>                States;                                                    // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAnimationTransitionBetweenStates>   Transitions;                                               // 0x0018(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BlendFilter
// 0x006C
struct FBlendFilter
{
	unsigned char                                      UnknownData_TYIV[0x6C];                                    // 0x0000(0x006C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimSetMeshLinkup
// 0x000C
struct FAnimSetMeshLinkup
{
	TArray<int>                                        BoneToTrackTable;                                          // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// 0x0010
struct FEditorMapPerformanceTestDefinition
{
	struct FFilePath                                   PerformanceTestmap;                                        // 0x0000(0x000C) (Edit, Config, NativeAccessSpecifierPublic)
	int                                                TestTimer;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.LaunchOnTestSettings
// 0x0018
struct FLaunchOnTestSettings
{
	struct FFilePath                                   LaunchOnTestmap;                                           // 0x0000(0x000C) (Edit, Config, NativeAccessSpecifierPublic)
	struct FString                                     DeviceID;                                                  // 0x000C(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimGroupInfo
// 0x0018
struct FAnimGroupInfo
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.TableRowBase
// 0x0000
struct FTableRowBase
{

};

// ScriptStruct Engine.DialogueContext
// 0x0010
struct FDialogueContext
{
	class UDialogueVoice*                              Speaker;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UDialogueVoice*>                      Targets;                                                   // 0x0004(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CollisionResponseTemplate
// 0x0050
struct FCollisionResponseTemplate
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionEnabled>              CollisionEnabled;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3HJM[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ObjectTypeName;                                            // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FResponseChannel>                    CustomResponses;                                           // 0x0014(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     HelpMessage;                                               // 0x0020(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanModify;                                                // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6M1K[0x23];                                    // 0x002D(0x0023) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.CustomChannelSetup
// 0x0010
struct FCustomChannelSetup
{
	TEnumAsByte<Engine_ECollisionChannel>              Channel;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4MCQ[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Name;                                                      // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             DefaultResponse;                                           // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTraceType;                                                // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bStaticObject;                                             // 0x000E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UZ68[0x1];                                     // 0x000F(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.Redirector
// 0x0010
struct FRedirector
{
	struct FName                                       OldName;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewName;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.DamageEvent
// 0x0008
struct FDamageEvent
{
	unsigned char                                      UnknownData_CXR0[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DamageTypeClass;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RadialDamageParams
// 0x0014
struct FRadialDamageParams
{
	float                                              BaseDamage;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumDamage;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InnerRadius;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OuterRadius;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFalloff;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RadialDamageEvent
// 0x002C (0x0034 - 0x0008)
struct FRadialDamageEvent : public FDamageEvent
{
	struct FRadialDamageParams                         Params;                                                    // 0x0008(0x0014) (NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                    // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          ComponentHits;                                             // 0x0028(0x000C) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BasedPosition
// 0x0034
struct FBasedPosition
{
	class AActor*                                      Base;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     CachedBaseLocation;                                        // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    CachedBaseRotation;                                        // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     CachedTransPosition;                                       // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RigidBodyContactInfo
// 0x0024
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                                           // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     ContactNormal;                                             // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ContactPenetration;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                           PhysMaterial[0x2];                                         // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CollisionImpactData
// 0x0024
struct FCollisionImpactData
{
	TArray<struct FRigidBodyContactInfo>               ContactInfos;                                              // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                                     TotalNormalImpulse;                                        // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     TotalFrictionImpulse;                                      // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RigidBodyState
// 0x0040
struct FRigidBodyState
{
	struct FVector_NetQuantize100                      Position;                                                  // 0x0000(0x000C) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8UFE[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Quaternion;                                                // 0x0010(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      LinVel;                                                    // 0x0020(0x000C) (NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      AngVel;                                                    // 0x002C(0x000C) (NativeAccessSpecifierPublic)
	unsigned char                                      Flags;                                                     // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7DPI[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.EditedDocumentInfo
// 0x0010
struct FEditedDocumentInfo
{
	class UObject*                                     EditedObject;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   SavedViewOffset;                                           // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              SavedZoomAmount;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BPInterfaceDescription
// 0x0010
struct FBPInterfaceDescription
{
	class UClass*                                      Interface;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UEdGraph*>                            Graphs;                                                    // 0x0004(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.EdGraphPinType
// 0x0040
struct FEdGraphPinType
{
	struct FString                                     PinCategory;                                               // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PinSubCategory;                                            // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                      PinSubCategoryObject;                                      // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FSimpleMemberReference                      PinSubCategoryMemberReference;                             // 0x0020(0x001C) (NativeAccessSpecifierPublic)
	bool                                               bIsArray;                                                  // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsReference;                                              // 0x003D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsConst;                                                  // 0x003E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsWeakPointer;                                            // 0x003F(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BPVariableMetaDataEntry
// 0x0014
struct FBPVariableMetaDataEntry
{
	struct FName                                       DataKey;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DataValue;                                                 // 0x0008(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BPVariableDescription
// 0x0098
struct FBPVariableDescription
{
	struct FName                                       VarName;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       VarGuid;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FEdGraphPinType                             VarType;                                                   // 0x0018(0x0040) (Edit, NativeAccessSpecifierPublic)
	struct FString                                     FriendlyName;                                              // 0x0058(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Category;                                                  // 0x0064(0x0018) ELEMENT_SIZE_MISMATCH (Edit, NativeAccessSpecifierPublic)
	uint64_t                                           PropertyFlags;                                             // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RepNotifyFunc;                                             // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBPVariableMetaDataEntry>            MetaDataArray;                                             // 0x0080(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     DefaultValue;                                              // 0x008C(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.MemberReference
// 0x002C
struct FMemberReference
{
	class UObject*                                     MemberParent;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     MemberScope;                                               // 0x0004(0x000C) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       MemberName;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                       MemberGuid;                                                // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bSelfContext;                                              // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bWasDeprecated;                                            // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L88B[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LatentActionManager
// 0x00B4
struct FLatentActionManager
{
	unsigned char                                      UnknownData_GS5F[0xB4];                                    // 0x0000(0x00B4) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.StartAsyncSimulationFunction
// 0x0004 (0x0038 - 0x0034)
struct FStartAsyncSimulationFunction : public FTickFunction
{
	unsigned char                                      UnknownData_EC5C[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.EndPhysicsTickFunction
// 0x0004 (0x0038 - 0x0034)
struct FEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_QTTW[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.StartPhysicsTickFunction
// 0x0004 (0x0038 - 0x0034)
struct FStartPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_WY8Q[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LevelViewportInfo
// 0x0020
struct FLevelViewportInfo
{
	struct FVector                                     CamPosition;                                               // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    CamRotation;                                               // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              CamOrthoZoom;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CamUpdated;                                                // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QJ3J[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// 0x0014
struct FAnimParentNodeAssetOverride
{
	class UAnimationAsset*                             NewAsset;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ParentNodeGuid;                                            // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.DataTableCategoryHandle
// 0x0014
struct FDataTableCategoryHandle
{
	class UDataTable*                                  DataTable;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ColumnName;                                                // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowContents;                                               // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BlueprintDebugData
// 0x0001
struct FBlueprintDebugData
{
	unsigned char                                      UnknownData_UCRS[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.PointerToUberGraphFrame
// 0x0004
struct FPointerToUberGraphFrame
{
	unsigned char                                      UnknownData_M5NR[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// 0x00F0
struct FDebuggingInfoForSingleFunction
{
	unsigned char                                      UnknownData_3M88[0xF0];                                    // 0x0000(0x00F0) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.NodeToCodeAssociation
// 0x0014
struct FNodeToCodeAssociation
{
	unsigned char                                      UnknownData_0L1L[0x14];                                    // 0x0000(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimBlueprintDebugData
// 0x0001
struct FAnimBlueprintDebugData
{
	unsigned char                                      UnknownData_6LXD[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimationFrameSnapshot
// 0x0001
struct FAnimationFrameSnapshot
{
	unsigned char                                      UnknownData_RG08[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.StateMachineDebugData
// 0x0084
struct FStateMachineDebugData
{
	unsigned char                                      UnknownData_DE4X[0x84];                                    // 0x0000(0x0084) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ScreenMessageString
// 0x0028
struct FScreenMessageString
{
	uint64_t                                           Key;                                                       // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ScreenMessage;                                             // 0x0008(0x000C) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      DisplayColor;                                              // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TimeToDisplay;                                             // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentTimeDisplayed;                                      // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   TextScale;                                                 // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// 0x0028
struct FFullyLoadedPackagesInfo
{
	TEnumAsByte<Engine_EFullyLoadPackageType>          FullyLoadType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7EW0[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Tag;                                                       // 0x0004(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               PackagesToLoad;                                            // 0x0010(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             LoadedObjects;                                             // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.LevelStreamingStatus
// 0x0010
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShouldBeLoaded : 1;                                       // 0x0008(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bShouldBeVisible : 1;                                      // 0x0008(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C97L[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           LODIndex;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.NamedNetDriver
// 0x0008
struct FNamedNetDriver
{
	class UNetDriver*                                  NetDriver;                                                 // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_560Y[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.URL
// 0x0050
struct FURL
{
	struct FString                                     Protocol;                                                  // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Host;                                                      // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Map;                                                       // 0x001C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RedirectURL;                                               // 0x0028(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Op;                                                        // 0x0034(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     Portal;                                                    // 0x0040(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Valid;                                                     // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.WorldContext
// 0x01D4
struct FWorldContext
{
	unsigned char                                      UnknownData_LOXI[0x9C];                                    // 0x0000(0x009C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FURL                                        LastURL;                                                   // 0x009C(0x0050) (NativeAccessSpecifierPublic)
	struct FURL                                        LastRemoteURL;                                             // 0x00EC(0x0050) (NativeAccessSpecifierPublic)
	class UPendingNetGame*                             PendingNetGame;                                            // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFullyLoadedPackagesInfo>            PackagesToFullyLoad;                                       // 0x0140(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_POGQ[0xC];                                     // 0x014C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ULevel*>                              LoadedLevelsForPendingMapChange;                           // 0x0158(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E9AR[0x10];                                    // 0x0164(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UObjectReferencer*>                   ObjectReferencers;                                         // 0x0174(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLevelStreamingStatus>               PendingLevelStreamingStatusUpdates;                        // 0x0180(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UGameViewportClient*                         GameViewport;                                              // 0x018C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameInstance*                               OwningGameInstance;                                        // 0x0190(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNamedNetDriver>                     ActiveNetDrivers;                                          // 0x0194(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8SYY[0x34];                                    // 0x01A0(0x0034) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.GraphReference
// 0x0018
struct FGraphReference
{
	class UEdGraph*                                    MacroGraph;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlueprint*                                  GraphBlueprint;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                       GraphGuid;                                                 // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Engine.EdGraphSchemaAction
// 0x0078
struct FEdGraphSchemaAction
{
	unsigned char                                      UnknownData_Y6AM[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       MenuDescription;                                           // 0x0004(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPrivate)
	struct FString                                     TooltipDescription;                                        // 0x0010(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FText                                       Category;                                                  // 0x001C(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPrivate)
	struct FText                                       Keywords;                                                  // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPrivate)
	int                                                Grouping;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SectionID;                                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             MenuDescriptionArray;                                      // 0x003C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             FullSearchTitlesArray;                                     // 0x0048(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             FullSearchKeywordsArray;                                   // 0x0054(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             FullSearchCategoryArray;                                   // 0x0060(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     SearchText;                                                // 0x006C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// 0x0004 (0x007C - 0x0078)
struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
{
	class UEdGraphNode*                                NodeTemplate;                                              // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// 0x000C
struct FActiveHapticFeedbackEffect
{
	class UHapticFeedbackEffect*                       HapticEffect;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8OSV[0x8];                                     // 0x0004(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.InterpEdSelKey
// 0x0010
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterpTrack*                                Track;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KeyIndex;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UnsnappedPosition;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CameraPreviewInfo
// 0x0024
struct FCameraPreviewInfo
{
	class UClass*                                      PawnClass;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               AnimSeq;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0008(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0014(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class APawn*                                       PawnInst;                                                  // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.SubTrackGroup
// 0x001C
struct FSubTrackGroup
{
	struct FString                                     GroupName;                                                 // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        TrackIndices;                                              // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bIsCollapsed : 1;                                          // 0x0018(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bIsSelected : 1;                                           // 0x0018(0x0001) BIT_FIELD (Transient, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QCXZ[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SupportedSubTrackInfo
// 0x0014
struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SubTrackName;                                              // 0x0004(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GroupIndex;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ClientReceiveData
// 0x0028
struct FClientReceiveData
{
	class APlayerController*                           LocalPC;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MessageType;                                               // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MessageIndex;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MessageString;                                             // 0x0010(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                                RelatedPlayerState_2;                                      // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                                RelatedPlayerState_3;                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     OptionalObject;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.PacketSimulationSettings
// 0x0014
struct FPacketSimulationSettings
{
	int                                                PktLoss;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PktOrder;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PktDup;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PktLag;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PktLagVariance;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ParticleCurvePair
// 0x0010
struct FParticleCurvePair
{
	struct FString                                     CurveName;                                                 // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     CurveObject;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BeamTargetData
// 0x000C
struct FBeamTargetData
{
	struct FName                                       TargetName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetPercentage;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ParticleSystemReplayFrame
// 0x000C
struct FParticleSystemReplayFrame
{
	unsigned char                                      UnknownData_49U7[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// 0x000C
struct FParticleEmitterReplayFrame
{
	unsigned char                                      UnknownData_EE2T[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	unsigned char                                      UnknownData_LI3U[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.StreamedAudioPlatformData
// 0x0018
struct FStreamedAudioPlatformData
{
	unsigned char                                      UnknownData_A5US[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SoundClassEditorData
// 0x0008
struct FSoundClassEditorData
{
	unsigned char                                      UnknownData_N4R0[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// 0x0028
struct FAssetEditorOrbitCameraPosition
{
	bool                                               bIsSet;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CX56[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CamOrbitPoint;                                             // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     CamOrbitZoom;                                              // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    CamOrbitRotation;                                          // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.MeshSectionInfoMap
// 0x003C
struct FMeshSectionInfoMap
{
	unsigned char                                      UnknownData_DQA0[0x3C];                                    // 0x0000(0x003C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.MeshSectionInfo
// 0x0008
struct FMeshSectionInfo
{
	int                                                MaterialIndex;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableCollision;                                          // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCastShadow;                                               // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V7KP[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.MeshBuildSettings
// 0x0030
struct FMeshBuildSettings
{
	bool                                               bUseMikkTSpace;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bRecomputeNormals;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bRecomputeTangents;                                        // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bRemoveDegenerates;                                        // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bBuildAdjacencyBuffer;                                     // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bBuildReversedIndexBuffer;                                 // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUseFullPrecisionUVs;                                      // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bGenerateLightmapUVs;                                      // 0x0007(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                MinLightmapResolution;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SrcLightmapIndex;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DstLightmapIndex;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BuildScale;                                                // 0x0014(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BuildScale3D;                                              // 0x0018(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              DistanceFieldResolutionScale;                              // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGenerateDistanceFieldAsIfTwoSided;                        // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YLVH[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 DistanceFieldReplacementMesh;                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.MeshReductionSettings
// 0x0020
struct FMeshReductionSettings
{
	float                                              PercentTriangles;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDeviation;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeldingThreshold;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HardAngleThreshold;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EMeshFeatureImportance>         SilhouetteImportance;                                      // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EMeshFeatureImportance>         TextureImportance;                                         // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EMeshFeatureImportance>         ShadingImportance;                                         // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRecalculateNormals;                                       // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                BaseLODModel;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGenerateUniqueLightmapUVs;                                // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bKeepSymmetry;                                             // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bVisibilityAided;                                          // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCullOccluded;                                             // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EMeshFeatureImportance>         VisibilityAggressiveness;                                  // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EMeshFeatureImportance>         VertexColorImportance;                                     // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RPPF[0x2];                                     // 0x001E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.StaticMeshSourceModel
// 0x0058
struct FStaticMeshSourceModel
{
	struct FMeshBuildSettings                          BuildSettings;                                             // 0x0000(0x0030) (Edit, NativeAccessSpecifierPublic)
	struct FMeshReductionSettings                      ReductionSettings;                                         // 0x0030(0x0020) (Edit, NativeAccessSpecifierPublic)
	float                                              LODDistance;                                               // 0x0050(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScreenSize;                                                // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// 0x001C
struct FStaticMeshOptimizationSettings
{
	TEnumAsByte<Engine_EOptimizationType>              ReductionMethod;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BZV9[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NumOfTrianglesPercentage;                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDeviationPercentage;                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeldingThreshold;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRecalcNormals;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S4QY[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NormalsThreshold;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SilhouetteImportance;                                      // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TextureImportance;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ShadingImportance;                                         // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D7YN[0x1];                                     // 0x001B(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.TexturePlatformData
// 0x001C
struct FTexturePlatformData
{
	unsigned char                                      UnknownData_B5SX[0x1C];                                    // 0x0000(0x001C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.TextureSource
// 0x0054
struct FTextureSource
{
	unsigned char                                      UnknownData_I9P6[0x54];                                    // 0x0000(0x0054) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_Base
// 0x0020
struct FAnimNode_Base
{
	unsigned char                                      UnknownData_NZ0K[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExposedValueHandler                        EvaluateGraphExposedInputs;                                // 0x0004(0x001C) (NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.PoseLinkBase
// 0x000C
struct FPoseLinkBase
{
	int                                                LinkID;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EQSJ[0x8];                                     // 0x0004(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.PoseLink
// 0x0000 (0x000C - 0x000C)
struct FPoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.InputScaleBias
// 0x0008
struct FInputScaleBias
{
	float                                              Scale;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bias;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// 0x0028 (0x0048 - 0x0020)
struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                      // 0x0020(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPoseLink                                   Additive;                                                  // 0x002C(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x003C(0x0008) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                LODThreshold;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// 0x0028 (0x0048 - 0x0020)
struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
{
	bool                                               bIgnoreForRelevancyTest;                                   // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NDPC[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                GroupIndex;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAnimGroupRole>                 GroupRole;                                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HC39[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlendWeight;                                               // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              InternalTimeAccumulator;                                   // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2TTI[0x14];                                    // 0x0034(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_SequencePlayer
// 0x0010 (0x0058 - 0x0048)
struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                  // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoopAnimation;                                            // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_40FT[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PlayRate;                                                  // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartPosition;                                             // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimNode_StateMachine
// 0x0074 (0x0094 - 0x0020)
struct FAnimNode_StateMachine : public FAnimNode_Base
{
	int                                                StateMachineIndexInClass;                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxTransitionsPerFrame;                                    // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EVUR[0x4];                                     // 0x0028(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentState;                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ElapsedTime;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JV6M[0x60];                                    // 0x0034(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimationPotentialTransition
// 0x0008
struct FAnimationPotentialTransition
{
	unsigned char                                      UnknownData_C6OW[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// 0x0088
struct FAnimationActiveTransitionEntry
{
	unsigned char                                      UnknownData_1WYZ[0x58];                                    // 0x0000(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlendProfile*                               BlendProfile;                                              // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PXKO[0x2C];                                    // 0x005C(0x002C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// 0x0030 (0x0050 - 0x0020)
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{
	TEnumAsByte<Engine_EEvaluatorDataSource>           DataSource;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EEvaluatorMode>                 EvaluatorMode;                                             // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y7UR[0x2];                                     // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FramesToCachePose;                                         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MHEQ[0x24];                                    // 0x0028(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CacheFramesRemaining;                                      // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimNode_TransitionResult
// 0x000C (0x002C - 0x0020)
struct FAnimNode_TransitionResult : public FAnimNode_Base
{
	bool                                               bCanEnterTransition;                                       // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9FVI[0xB];                                     // 0x0021(0x000B) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.BasedMovementInfo
// 0x0028
struct FBasedMovementInfo
{
	class UPrimitiveComponent*                         MovementBase;                                              // 0x0000(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      Location;                                                  // 0x000C(0x000C) (NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bServerHasBaseComponent;                                   // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bRelativeRotation;                                         // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bServerHasVelocity;                                        // 0x0026(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3U8J[0x1];                                     // 0x0027(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ColorMaterialInput
// 0x0008 (0x0034 - 0x002C)
struct FColorMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                           // 0x002C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_REBF[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FColor                                      Constant;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RootMotionMovementParams
// 0x0040
struct FRootMotionMovementParams
{
	bool                                               bHasRootMotion;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QNTA[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlendWeight;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T7QH[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  RootMotionTransform;                                       // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.MaterialSpriteElement
// 0x0018
struct FMaterialSpriteElement
{
	class UMaterialInterface*                          Material;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 DistanceToOpacityCurve;                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSizeIsInScreenSpace : 1;                                  // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RZ0O[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BaseSizeX;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseSizeY;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 DistanceToSizeCurve;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.FractureEffect
// 0x0008
struct FFractureEffect
{
	class UParticleSystem*                             ParticleSystem;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Sound;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     StartTangent;                                              // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   StartScale;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              StartRoll;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   StartOffset;                                               // 0x0024(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FVector                                     EndPos;                                                    // 0x002C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     EndTangent;                                                // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   EndScale;                                                  // 0x0044(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              EndRoll;                                                   // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   EndOffset;                                                 // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ParticleSystemLOD
// 0x0001
struct FParticleSystemLOD
{
	unsigned char                                      UnknownData_XXZR[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LODSoloTrack
// 0x000C
struct FLODSoloTrack
{
	TArray<unsigned char>                              SoloEnableSetting;                                         // 0x0000(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.NamedEmitterMaterial
// 0x000C
struct FNamedEmitterMaterial
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          Material;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.MaterialRelevance
// 0x0008
struct FMaterialRelevance
{
	unsigned char                                      bOpaque : 1;                                               // 0x0000(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bMasked : 1;                                               // 0x0000(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bDistortion : 1;                                           // 0x0000(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSeparateTranslucency : 1;                                 // 0x0000(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bNormalTranslucency : 1;                                   // 0x0000(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bDisableDepthTest : 1;                                     // 0x0000(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOutputsVelocityInBasePass : 1;                            // 0x0000(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bUsesGlobalDistanceField : 1;                              // 0x0000(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IX6R[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           ShadingModelMask;                                          // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MSJO[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LocationBoneSocketInfo
// 0x0014
struct FLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Offset;                                                    // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimMontageInstance
// 0x00C4
struct FAnimMontageInstance
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2KDM[0x10];                                    // 0x0004(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bPlaying;                                                  // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VTWD[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DefaultBlendTimeMultiplier;                                // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WDWO[0x1C];                                    // 0x001C(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        NextSections;                                              // 0x0038(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<int>                                        PrevSections;                                              // 0x0044(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ILY0[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAnimNotifyEvent>                    ActiveStateBranchingPoints;                                // 0x0058(0x000C) (ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                              Position;                                                  // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PlayRate;                                                  // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAlphaBlend                                 Blend;                                                     // 0x006C(0x002C) (Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_B2YO[0x2C];                                    // 0x0098(0x002C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.CompressedTrack
// 0x0030
struct FCompressedTrack
{
	TArray<unsigned char>                              ByteStream;                                                // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      Times;                                                     // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Mins[0x3];                                                 // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Ranges[0x3];                                               // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CurveTrack
// 0x0014
struct FCurveTrack
{
	struct FName                                       CurveName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      CurveWeights;                                              // 0x0008(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.NavigationSegmentLink
// 0x0030 (0x0058 - 0x0028)
struct FNavigationSegmentLink : public FNavigationLinkBase
{
	struct FVector                                     LeftStart;                                                 // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     LeftEnd;                                                   // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     RightStart;                                                // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     RightEnd;                                                  // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.MarkerSyncData
// 0x0018
struct FMarkerSyncData
{
	TArray<struct FAnimSyncMarker>                     AuthoredSyncMarkers;                                       // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3J58[0xC];                                     // 0x000C(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.InterpLookupPoint
// 0x000C
struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ModulatorContinuousParams
// 0x0020
struct FModulatorContinuousParams
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Default;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinInput;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxInput;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinOutput;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxOutput;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EModulationParamMode>           ParamMode;                                                 // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_76XP[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SubsurfaceProfileStruct
// 0x0024
struct FSubsurfaceProfileStruct
{
	float                                              ScatterRadius;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SubsurfaceColor;                                           // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                FalloffColor;                                              // 0x0014(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.TTTrackBase
// 0x000C
struct FTTTrackBase
{
	struct FName                                       TrackName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsExternalCurve;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EBNF[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.TTEventTrack
// 0x0004 (0x0010 - 0x000C)
struct FTTEventTrack : public FTTTrackBase
{
	class UCurveFloat*                                 CurveKeys;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.TTFloatTrack
// 0x0004 (0x0010 - 0x000C)
struct FTTFloatTrack : public FTTTrackBase
{
	class UCurveFloat*                                 CurveFloat;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.TTVectorTrack
// 0x0004 (0x0010 - 0x000C)
struct FTTVectorTrack : public FTTTrackBase
{
	class UCurveVector*                                CurveVector;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.TTLinearColorTrack
// 0x0004 (0x0010 - 0x000C)
struct FTTLinearColorTrack : public FTTTrackBase
{
	class UCurveLinearColor*                           CurveLinearColor;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.TouchInputControl
// 0x0050
struct FTouchInputControl
{
	class UTexture2D*                                  Image1;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Image2;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Center;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   VisualSize;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   ThumbSize;                                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   InteractionSize;                                           // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   InputScale;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FKey                                        MainInputKey;                                              // 0x0030(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FKey                                        AltInputKey;                                               // 0x0040(0x0010) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.NavigationFilterArea
// 0x0010
struct FNavigationFilterArea
{
	class UClass*                                      AreaClass;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TravelCostOverride;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnteringCostOverride;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsExcluded : 1;                                           // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideTravelCost : 1;                                   // 0x000C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideEnteringCost : 1;                                 // 0x000C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5DKI[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.NavigationFilterFlags
// 0x0004
struct FNavigationFilterFlags
{
	unsigned char                                      bNavFlag0 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag1 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag2 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag3 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag4 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag5 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag6 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag7 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag8 : 1;                                             // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag9 : 1;                                             // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag10 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag11 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag12 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag13 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag14 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag15 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SQJ3[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// 0x0050
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                                 // 0x0000(0x0040) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   LightmapUVBias;                                            // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   ShadowmapUVBias;                                           // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.FontCharacter
// 0x0018
struct FFontCharacter
{
	int                                                StartU;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartV;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                USize;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VSize;                                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TextureIndex;                                              // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JCK2[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                VerticalOffset;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.HapticFeedbackDetails
// 0x00B0
struct FHapticFeedbackDetails
{
	struct FRuntimeFloatCurve                          Frequency;                                                 // 0x0000(0x0058) (Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          Amplitude;                                                 // 0x0058(0x0058) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.DistributionLookupTable
// 0x001C
struct FDistributionLookupTable
{
	unsigned char                                      Op;                                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      EntryCount;                                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      EntryStride;                                               // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SubEntryStride;                                            // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeScale;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeBias;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      Values;                                                    // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      LockFlag;                                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8N3J[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.FloatDistribution
// 0x001C
struct FFloatDistribution
{
	struct FDistributionLookupTable                    Table;                                                     // 0x0000(0x001C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CameraCacheEntry
// 0x03B0
struct FCameraCacheEntry
{
	float                                              TimeStamp;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinimalViewInfo                            POV;                                                       // 0x0004(0x03AC) (NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.DialogueContextMapping
// 0x0018
struct FDialogueContextMapping
{
	struct FDialogueContext                            Context;                                                   // 0x0000(0x0010) (Edit, NativeAccessSpecifierPublic)
	class USoundWave*                                  SoundWave;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogueSoundWaveProxy*                     Proxy;                                                     // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// 0x0018
struct FBlueprintComponentDelegateBinding
{
	struct FName                                       ComponentPropertyName;                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DelegatePropertyName;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FunctionNameToBind;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.NetViewer
// 0x0024
struct FNetViewer
{
	class UNetConnection*                              Connection;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InViewer;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ViewTarget;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ViewLocation;                                              // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     ViewDir;                                                   // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// 0x0004
struct FInstancedStaticMeshMappingInfo
{
	unsigned char                                      UnknownData_86CZ[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// 0x0014
struct FLightmassMaterialInterfaceSettings
{
	unsigned char                                      bCastShadowAsMasked : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OAUW[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EmissiveBoost;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DiffuseBoost;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExportResolutionScale;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideCastShadowAsMasked : 1;                           // 0x0010(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideEmissiveBoost : 1;                                // 0x0010(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideDiffuseBoost : 1;                                 // 0x0010(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideExportResolutionScale : 1;                        // 0x0010(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_02LK[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ScalarParameterValue
// 0x001C
struct FScalarParameterValue
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ParameterValue;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                            // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.TextureParameterValue
// 0x001C
struct FTextureParameterValue
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    ParameterValue;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                            // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.VectorParameterValue
// 0x0028
struct FVectorParameterValue
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ParameterValue;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                            // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// 0x0014
struct FMaterialInstanceBasePropertyOverrides
{
	bool                                               bOverride_OpacityMaskClipValue;                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bOverride_BlendMode;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bOverride_ShadingModel;                                    // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bOverride_DitheredLODTransition;                           // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bOverride_TwoSided;                                        // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KA2J[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OpacityMaskClipValue;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBlendMode>                     BlendMode;                                                 // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EMaterialShadingModel>          ShadingModel;                                              // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A1U8[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      TwoSided : 1;                                              // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      DitheredLODTransition : 1;                                 // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QJ49[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ExpressionOutput
// 0x0020
struct FExpressionOutput
{
	struct FString                                     OutputName;                                                // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Mask;                                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaskR;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaskG;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaskB;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaskA;                                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.EventGraphFastCallPair
// 0x0008
struct FEventGraphFastCallPair
{
	class UFunction*                                   FunctionToPatch;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventGraphCallOffset;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.GameplayDebuggerShapeElement
// 0x0070
struct FGameplayDebuggerShapeElement
{
	struct FString                                     Description;                                               // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Points;                                                    // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XRE8[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMatrix                                     TransformationMatrix;                                      // 0x0020(0x0040) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EGameplayDebuggerShapeElement>  Type;                                                      // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Color;                                                     // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           ThicknesOrRadius;                                          // 0x0062(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_43V2[0xC];                                     // 0x0064(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.GameplayDebuggerReplicatedBlob
// 0x0018
struct FGameplayDebuggerReplicatedBlob
{
	TArray<unsigned char>                              RepData;                                                   // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                VersionNum;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RepDataOffset;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RepDataSize;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.SlotAnimationTrack
// 0x0014
struct FSlotAnimationTrack
{
	struct FName                                       SlotName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimTrack                                  AnimTrack;                                                 // 0x0008(0x000C) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.FontParameterValue
// 0x0020
struct FFontParameterValue
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFont*                                       FontValue;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FontPage;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                            // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CullDistance;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.WheelSetup
// 0x0018
struct FWheelSetup
{
	class UClass*                                      WheelClass;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AdditionalOffset;                                          // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.InterpLookupTrack
// 0x000C
struct FInterpLookupTrack
{
	TArray<struct FInterpLookupPoint>                  Points;                                                    // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClipIDNumber;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ToggleTrackKey
// 0x0008
struct FToggleTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETrackToggleAction>             ToggleAction;                                              // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4WS2[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.FOscillator
// 0x000C
struct FFOscillator
{
	float                                              Amplitude;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Frequency;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EInitialOscillatorOffset>       InitialOffset;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TWTU[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                                         // 0x0000(0x000C) (Edit, NativeAccessSpecifierPublic)
	struct FFOscillator                                Y;                                                         // 0x000C(0x000C) (Edit, NativeAccessSpecifierPublic)
	struct FFOscillator                                Z;                                                         // 0x0018(0x000C) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.EngineShowFlagsSetting
// 0x0010
struct FEngineShowFlagsSetting
{
	struct FString                                     ShowFlagName;                                              // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Enabled;                                                   // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WZ5Z[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.OpenTestAsset
// 0x0010
struct FOpenTestAsset
{
	struct FFilePath                                   AssetToOpen;                                               // 0x0000(0x000C) (Edit, NativeAccessSpecifierPublic)
	bool                                               bSkipTestWhenUnAttended;                                   // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y399[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	unsigned char                                      bProcessDuringSpawn : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bProcessDuringUpdate : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bUseEmitterTime : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W1RU[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                                     // 0x0000(0x000C) (Edit, NativeAccessSpecifierPublic)
	struct FFOscillator                                Yaw;                                                       // 0x000C(0x000C) (Edit, NativeAccessSpecifierPublic)
	struct FFOscillator                                Roll;                                                      // 0x0018(0x000C) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ParticleSysParam
// 0x0038
struct FParticleSysParam
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EParticleSysParamType>          ParamType;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KENY[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Scalar;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scalar_Low;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Vector;                                                    // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Vector_Low;                                                // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          Material;                                                  // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ExpressionInput
// 0x002C
struct FExpressionInput
{
	class UMaterialExpression*                         Expression;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutputIndex;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InputName;                                                 // 0x0008(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Mask;                                                      // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaskR;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaskG;                                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaskB;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaskA;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GCC64_Padding;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CustomInput
// 0x0038
struct FCustomInput
{
	struct FString                                     InputName;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionInput                            Input;                                                     // 0x000C(0x002C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.DestructibleDamageParameters
// 0x001C
struct FDestructibleDamageParameters
{
	float                                              DamageThreshold;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageSpread;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableImpactDamage;                                       // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KTUI[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ImpactDamage;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DefaultImpactDamageDepth;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCustomImpactResistance;                                   // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JYZU[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ImpactResistance;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.DestructibleAdvancedParameters
// 0x0010
struct FDestructibleAdvancedParameters
{
	float                                              DamageCap;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ImpactVelocityThreshold;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxChunkSpeed;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FractureImpulseScale;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.DestructibleSpecialHierarchyDepths
// 0x0014
struct FDestructibleSpecialHierarchyDepths
{
	int                                                SupportDepth;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinimumFractureDepth;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableDebris;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_52HW[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DebrisDepth;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EssentialDepth;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.DestructibleDepthParameters
// 0x0001
struct FDestructibleDepthParameters
{
	TEnumAsByte<Engine_EImpactDamageOverride>          ImpactDamageOverride;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.DestructibleParametersFlag
// 0x0004
struct FDestructibleParametersFlag
{
	unsigned char                                      bAccumulateDamage : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAssetDefinedSupport : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bWorldSupport : 1;                                         // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bDebrisTimeout : 1;                                        // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bDebrisMaxSeparation : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bCrumbleSmallestChunks : 1;                                // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAccurateRaycasts : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bUseValidBounds : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bFormExtendedStructures : 1;                               // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PC3A[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// 0x005C
struct FForceFeedbackChannelDetails
{
	unsigned char                                      bAffectsLeftLarge : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectsLeftSmall : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectsRightLarge : 1;                                    // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectsRightSmall : 1;                                    // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1V28[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          Curve;                                                     // 0x0004(0x0058) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.InterpGroupActorInfo
// 0x0014
struct FInterpGroupActorInfo
{
	struct FName                                       ObjectName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              Actors;                                                    // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TimeStamp;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BoneNode
// 0x0010
struct FBoneNode
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ParentIndex;                                               // 0x0008(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneTranslationRetargetingMode> TranslationRetargetingMode;                                // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5LEG[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SkeletonToMeshLinkup
// 0x0018
struct FSkeletonToMeshLinkup
{
	TArray<int>                                        SkeletonToMeshTable;                                       // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        MeshToSkeletonTable;                                       // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.SmartNameContainer
// 0x003C
struct FSmartNameContainer
{
	unsigned char                                      UnknownData_FOTF[0x3C];                                    // 0x0000(0x003C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimSlotGroup
// 0x0014
struct FAnimSlotGroup
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SlotNames;                                                 // 0x0008(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.NavAvoidanceData
// 0x003C
struct FNavAvoidanceData
{
	unsigned char                                      UnknownData_QNCM[0x3C];                                    // 0x0000(0x003C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.BlendProfileBoneEntry
// 0x0010
struct FBlendProfileBoneEntry
{
	struct FBoneReference                              BoneReference;                                             // 0x0000(0x000C) (Edit, NativeAccessSpecifierPublic)
	float                                              BlendScale;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.SkeletalMaterial
// 0x0008
struct FSkeletalMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableShadowCasting;                                      // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XHAY[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.BoneMirrorInfo
// 0x0008
struct FBoneMirrorInfo
{
	int                                                SourceIndex;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<CoreUObject_EAxis>                     BoneFlipAxis;                                              // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LC6A[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.TriangleSortSettings
// 0x000C
struct FTriangleSortSettings
{
	TEnumAsByte<Engine_ETriangleSortOption>            TriangleSorting;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETriangleSortAxis>              CustomLeftRightAxis;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OEE1[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CustomLeftRightBoneName;                                   // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// 0x0034
struct FSkeletalMeshOptimizationSettings
{
	TEnumAsByte<Engine_ESkeletalMeshOptimizationType>  ReductionMethod;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YUMN[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NumOfTrianglesPercentage;                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDeviationPercentage;                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeldingThreshold;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRecalcNormals;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6P6F[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NormalsThreshold;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ESkeletalMeshOptimizationImportance> SilhouetteImportance;                                      // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ESkeletalMeshOptimizationImportance> TextureImportance;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ESkeletalMeshOptimizationImportance> ShadingImportance;                                         // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ESkeletalMeshOptimizationImportance> SkinningImportance;                                        // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BoneReductionRatio;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxBonesPerVertex;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                      BonesToRemove;                                             // 0x0024(0x000C) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	int                                                BaseLOD;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.SkeletalMeshLODInfo
// 0x0070
struct FSkeletalMeshLODInfo
{
	float                                              ScreenSize;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LODHysteresis;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        LODMaterialMap;                                            // 0x0008(0x000C) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                       bEnableShadowCasting;                                      // 0x0014(0x000C) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<struct FTriangleSortSettings>               TriangleSortSettings;                                      // 0x0020(0x000C) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bHasBeenSimplified : 1;                                    // 0x002C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3VAJ[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSkeletalMeshOptimizationSettings           ReductionSettings;                                         // 0x0030(0x0034) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FName>                               RemovedBones;                                              // 0x0064(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ClothPhysicsProperties
// 0x0050
struct FClothPhysicsProperties
{
	float                                              VerticalResistance;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HorizontalResistance;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BendResistance;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShearResistance;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Friction;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damping;                                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TetherStiffness;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TetherLimit;                                               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Drag;                                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StiffnessFrequency;                                        // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GravityScale;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MassScale;                                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InertiaBlend;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SelfCollisionThickness;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SelfCollisionSquashScale;                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SelfCollisionStiffness;                                    // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SolverFrequency;                                           // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FiberCompression;                                          // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FiberExpansion;                                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FiberResistance;                                           // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ActiveVertexAnim
// 0x000C
struct FActiveVertexAnim
{
	class UVertexAnimBase*                             VertAnim;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// 0x000C
struct FSkelMeshComponentLODInfo
{
	TArray<bool>                                       HiddenMaterials;                                           // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ConstrainComponentPropName
// 0x0008
struct FConstrainComponentPropName
{
	struct FName                                       ComponentName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ConstraintInstance
// 0x0150
struct FConstraintInstance
{
	unsigned char                                      UnknownData_9XXM[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             OwnerComponent;                                            // 0x0004(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QYNT[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       JointName;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ConstraintBone1;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ConstraintBone2;                                           // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Pos1;                                                      // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     PriAxis1;                                                  // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     SecAxis1;                                                  // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Pos2;                                                      // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     PriAxis2;                                                  // 0x0058(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     SecAxis2;                                                  // 0x0064(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bDisableCollision : 1;                                     // 0x0070(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableProjection : 1;                                     // 0x0070(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9HEZ[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ProjectionLinearTolerance;                                 // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProjectionAngularTolerance;                                // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ELinearConstraintMotion>        LinearXMotion;                                             // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ELinearConstraintMotion>        LinearYMotion;                                             // 0x007D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ELinearConstraintMotion>        LinearZMotion;                                             // 0x007E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XV4Q[0x1];                                     // 0x007F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LinearLimitSize;                                           // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLinearLimitSoft : 1;                                      // 0x0084(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OUKC[0x3];                                     // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LinearLimitStiffness;                                      // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LinearLimitDamping;                                        // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLinearBreakable : 1;                                      // 0x0090(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_141O[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LinearBreakThreshold;                                      // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAngularConstraintMotion>       AngularSwing1Motion;                                       // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAngularConstraintMotion>       AngularTwistMotion;                                        // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAngularConstraintMotion>       AngularSwing2Motion;                                       // 0x009A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1SEC[0x1];                                     // 0x009B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bSwingLimitSoft : 1;                                       // 0x009C(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      bTwistLimitSoft : 1;                                       // 0x009C(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X76G[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Swing1LimitAngle;                                          // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TwistLimitAngle;                                           // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Swing2LimitAngle;                                          // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SwingLimitStiffness;                                       // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SwingLimitDamping;                                         // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TwistLimitStiffness;                                       // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TwistLimitDamping;                                         // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    AngularRotationOffset;                                     // 0x00BC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAngularBreakable : 1;                                     // 0x00C8(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6ADL[0x3];                                     // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AngularBreakThreshold;                                     // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLinearXPositionDrive : 1;                                 // 0x00D0(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      bLinearXVelocityDrive : 1;                                 // 0x00D0(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      bLinearYPositionDrive : 1;                                 // 0x00D0(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      bLinearYVelocityDrive : 1;                                 // 0x00D0(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      bLinearZPositionDrive : 1;                                 // 0x00D0(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      bLinearZVelocityDrive : 1;                                 // 0x00D0(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      bLinearPositionDrive : 1;                                  // 0x00D0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bLinearVelocityDrive : 1;                                  // 0x00D0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O3K8[0x3];                                     // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LinearPositionTarget;                                      // 0x00D4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     LinearVelocityTarget;                                      // 0x00E0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              LinearDriveSpring;                                         // 0x00EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LinearDriveDamping;                                        // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LinearDriveForceLimit;                                     // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSwingPositionDrive : 1;                                   // 0x00F8(0x0001) BIT_FIELD (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSwingVelocityDrive : 1;                                   // 0x00F8(0x0001) BIT_FIELD (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bTwistPositionDrive : 1;                                   // 0x00F8(0x0001) BIT_FIELD (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bTwistVelocityDrive : 1;                                   // 0x00F8(0x0001) BIT_FIELD (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAngularSlerpDrive : 1;                                    // 0x00F8(0x0001) BIT_FIELD (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAngularOrientationDrive : 1;                              // 0x00F8(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableSwingDrive : 1;                                     // 0x00F8(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      bEnableTwistDrive : 1;                                     // 0x00F8(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      bAngularVelocityDrive : 1;                                 // 0x00F9(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2NUX[0x6];                                     // 0x00FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       AngularPositionTarget;                                     // 0x0100(0x0010) (Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAngularDriveMode>              AngularDriveMode;                                          // 0x0110(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2OEC[0x3];                                     // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    AngularOrientationTarget;                                  // 0x0114(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     AngularVelocityTarget;                                     // 0x0120(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              AngularDriveSpring;                                        // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularDriveDamping;                                       // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularDriveForceLimit;                                    // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7S0O[0x18];                                    // 0x0138(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SingleAnimationPlayData
// 0x0014
struct FSingleAnimationPlayData
{
	class UAnimationAsset*                             AnimToPlay;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVertexAnimation*                            VertexAnimToPlay;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSavedLooping : 1;                                         // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSavedPlaying : 1;                                         // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JLKN[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SavedPosition;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SavedPlayRate;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.InterpControlPoint
// 0x001C
struct FInterpControlPoint
{
	struct FVector                                     PositionControlPoint;                                      // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bPositionIsRelative;                                       // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z6KU[0xF];                                     // 0x000D(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ReplicatedVehicleState
// 0x0014
struct FReplicatedVehicleState
{
	float                                              SteeringInput;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrottleInput;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BrakeInput;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HandbrakeInput;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentGear;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.VehicleInputRate
// 0x0008
struct FVehicleInputRate
{
	float                                              RiseRate;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FallRate;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.VehicleEngineData
// 0x006C
struct FVehicleEngineData
{
	struct FRuntimeFloatCurve                          TorqueCurve;                                               // 0x0000(0x0058) (Edit, NativeAccessSpecifierPublic)
	float                                              MaxRPM;                                                    // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MOI;                                                       // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DampingRateFullThrottle;                                   // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DampingRateZeroThrottleClutchEngaged;                      // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DampingRateZeroThrottleClutchDisengaged;                   // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.VehicleDifferential4WData
// 0x001C
struct FVehicleDifferential4WData
{
	TEnumAsByte<Engine_EVehicleDifferential4W>         DifferentialType;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZHCC[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FrontRearSplit;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrontLeftRightSplit;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RearLeftRightSplit;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CentreBias;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrontBias;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RearBias;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.VehicleGearData
// 0x000C
struct FVehicleGearData
{
	float                                              Ratio;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DownRatio;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpRatio;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.VehicleTransmissionData
// 0x0028
struct FVehicleTransmissionData
{
	bool                                               bUseGearAutoBox;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IEZN[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GearSwitchTime;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GearAutoBoxLatency;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FinalRatio;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVehicleGearData>                    ForwardGears;                                              // 0x0010(0x000C) (Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              ReverseGearRatio;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NeutralGearUpRatio;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClutchStrength;                                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RigTransformConstraint
// 0x0010
struct FRigTransformConstraint
{
	TEnumAsByte<Engine_EConstraintTransform>           TranformType;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A8Y9[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ParentSpace;                                               // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.TransformBaseConstraint
// 0x000C
struct FTransformBaseConstraint
{
	TArray<struct FRigTransformConstraint>             TransformConstraints;                                      // 0x0000(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.TransformBase
// 0x0020
struct FTransformBase
{
	struct FName                                       Node;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransformBaseConstraint                    Constraints[0x2];                                          // 0x0008(0x0018) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BlendSampleData
// 0x002C
struct FBlendSampleData
{
	int                                                SampleDataIndex;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalWeight;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreviousTime;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AIU3[0x1C];                                    // 0x0010(0x001C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ComponentSpacePoseLink
// 0x0000 (0x000C - 0x000C)
struct FComponentSpacePoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.ExposureSettings
// 0x0008
struct FExposureSettings
{
	int                                                LogOffset;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFixed;                                                    // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PGO5[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.TickPrerequisite
// 0x000C
struct FTickPrerequisite
{
	unsigned char                                      UnknownData_FZBQ[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.DepthFieldGlowInfo
// 0x0024
struct FDepthFieldGlowInfo
{
	unsigned char                                      bEnableGlow : 1;                                           // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U2DK[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                GlowColor;                                                 // 0x0004(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   GlowOuterRadius;                                           // 0x0014(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   GlowInnerRadius;                                           // 0x001C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.FontRenderInfo
// 0x0028
struct FFontRenderInfo
{
	unsigned char                                      bClipText : 1;                                             // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableShadow : 1;                                         // 0x0000(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JYC4[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDepthFieldGlowInfo                         GlowInfo;                                                  // 0x0004(0x0024) (BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ComponentReference
// 0x0014
struct FComponentReference
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ComponentProperty;                                         // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SB37[0x8];                                     // 0x000C(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ClothingAssetData
// 0x00C8
struct FClothingAssetData
{
	struct FName                                       AssetName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ApexFileName;                                              // 0x0008(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClothPropertiesChanged;                                   // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EYTO[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FClothPhysicsProperties                     PhysicsProperties;                                         // 0x0018(0x0050) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PJLA[0x60];                                    // 0x0068(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ExternalToolDefinition
// 0x0048
struct FExternalToolDefinition
{
	struct FString                                     ToolName;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                                   ExecutablePath;                                            // 0x000C(0x000C) (Edit, Config, NativeAccessSpecifierPublic)
	struct FString                                     CommandLineOptions;                                        // 0x0018(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                              WorkingDirectory;                                          // 0x0024(0x000C) (Edit, Config, NativeAccessSpecifierPublic)
	struct FString                                     ScriptExtension;                                           // 0x0030(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                              ScriptDirectory;                                           // 0x003C(0x000C) (Edit, Config, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RawDistribution
// 0x001C
struct FRawDistribution
{
	struct FDistributionLookupTable                    Table;                                                     // 0x0000(0x001C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RawDistributionVector
// 0x000C (0x0028 - 0x001C)
struct FRawDistributionVector : public FRawDistribution
{
	float                                              MinValue;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxValue;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDistributionVector*                         Distribution;                                              // 0x0024(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RawDistributionFloat
// 0x000C (0x0028 - 0x001C)
struct FRawDistributionFloat : public FRawDistribution
{
	float                                              MinValue;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxValue;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDistributionFloat*                          Distribution;                                              // 0x0024(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.EmitterDynamicParameter
// 0x003C
struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseEmitterTime : 1;                                       // 0x0008(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSpawnTimeOnly : 1;                                        // 0x0008(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VTKZ[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EEmitterDynamicParameterValue>  ValueMethod;                                               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MWCS[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bScaleVelocityByParamValue : 1;                            // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QLYF[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRawDistributionFloat                       ParamValue;                                                // 0x0014(0x0028) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ParticleBurst
// 0x000C
struct FParticleBurst
{
	int                                                Count;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CountLow;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BlendSample
// 0x0014
struct FBlendSample
{
	class UAnimSequence*                               Animation;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SampleValue;                                               // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D76U[0x4];                                     // 0x0010(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ComponentKey
// 0x001C
struct FComponentKey
{
	class UBlueprintGeneratedClass*                    OwnerClass;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       SCSVariableName;                                           // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                       AssociatedGuid;                                            // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct Engine.ComponentOverrideRecord
// 0x0020
struct FComponentOverrideRecord
{
	class UActorComponent*                             ComponentTemplate;                                         // 0x0000(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FComponentKey                               ComponentKey;                                              // 0x0004(0x001C) (NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.InputAxisProperties
// 0x0010
struct FInputAxisProperties
{
	float                                              DeadZone;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Sensitivity;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Exponent;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bInvert : 1;                                               // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NAM3[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.InputActionKeyMapping
// 0x001C
struct FInputActionKeyMapping
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      bShift : 1;                                                // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bCtrl : 1;                                                 // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAlt : 1;                                                  // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bCmd : 1;                                                  // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XGDN[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.InputAxisKeyMapping
// 0x001C
struct FInputAxisKeyMapping
{
	struct FName                                       AxisName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0008(0x0010) (Edit, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CurveEdEntry
// 0x002C
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      CurveColor;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     CurveName;                                                 // 0x0008(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                bHideCurve;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                bColorCurve;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                bFloatingPointColorCurve;                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                bClamp;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClampLow;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClampHigh;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CurveEdTab
// 0x0028
struct FCurveEdTab
{
	struct FString                                     TabName;                                                   // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCurveEdEntry>                       Curves;                                                    // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              ViewStartInput;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ViewEndInput;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ViewStartOutput;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ViewEndOutput;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Value : 1;                                                 // 0x0004(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8UB2[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.DirectorTrackCut
// 0x0014
struct FDirectorTrackCut
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TransitionTime;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TargetCamGroup;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShotNumber;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.EventTrackKey
// 0x000C
struct FEventTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EventName;                                                 // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimControlTrackKey
// 0x0018
struct FAnimControlTrackKey
{
	float                                              StartTime;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               AnimSeq;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimStartOffset;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimEndOffset;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimPlayRate;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLooping : 1;                                              // 0x0014(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bReverse : 1;                                              // 0x0014(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KHCZ[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.DialogueWaveParameter
// 0x0014
struct FDialogueWaveParameter
{
	class UDialogueWave*                               DialogueWave;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogueContext                            Context;                                                   // 0x0004(0x0010) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.DistanceDatum
// 0x0014
struct FDistanceDatum
{
	float                                              FadeInDistanceStart;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeInDistanceEnd;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOutDistanceStart;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOutDistanceEnd;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// 0x000C
struct FParticleEditorPromotionSettings
{
	struct FFilePath                                   DefaultParticleAsset;                                      // 0x0000(0x000C) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.FunctionExpressionInput
// 0x0040
struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                                           // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionInputId;                                         // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                            Input;                                                     // 0x0014(0x002C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BlueprintEditorPromotionSettings
// 0x0024
struct FBlueprintEditorPromotionSettings
{
	struct FFilePath                                   FirstMeshPath;                                             // 0x0000(0x000C) (Edit, NativeAccessSpecifierPublic)
	struct FFilePath                                   SecondMeshPath;                                            // 0x000C(0x000C) (Edit, NativeAccessSpecifierPublic)
	struct FFilePath                                   DefaultParticleAsset;                                      // 0x0018(0x000C) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.GenericStruct
// 0x0004
struct FGenericStruct
{
	int                                                Data;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CollisionProfileName
// 0x0008
struct FCollisionProfileName
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.TimerHandle
// 0x0004
struct FTimerHandle
{
	int                                                Handle;                                                    // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Engine.DebugFloatHistory
// 0x001C
struct FDebugFloatHistory
{
	TArray<float>                                      Samples;                                                   // 0x0000(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	float                                              MaxSamples;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinValue;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxValue;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoAdjustMinMax;                                         // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S5XF[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.FormatArgumentData
// 0x0018
struct FFormatArgumentData
{
	struct FString                                     ArgumentName;                                              // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ArgumentValue;                                             // 0x000C(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// 0x0004
struct FBlueprintInputDelegateBinding
{
	unsigned char                                      bConsumeInput : 1;                                         // 0x0000(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bExecuteWhenPaused : 1;                                    // 0x0000(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideParentBinding : 1;                                // 0x0000(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_197P[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// 0x0020 (0x0024 - 0x0004)
struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	struct FInputChord                                 InputChord;                                                // 0x0004(0x0014) (NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EInputEvent>                    InputKeyEvent;                                             // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MM82[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       FunctionNameToBind;                                        // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// 0x000C (0x0010 - 0x0004)
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
{
	TEnumAsByte<Engine_EInputEvent>                    InputKeyEvent;                                             // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_23AE[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       FunctionNameToBind;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.FontImportOptionsData
// 0x0094
struct FFontImportOptionsData
{
	struct FString                                     FontName;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableAntialiasing : 1;                                   // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableBold : 1;                                           // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableItalic : 1;                                         // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableUnderline : 1;                                      // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAlphaOnly : 1;                                            // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PZJR[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EFontImportCharacterSet>        CharacterSet;                                              // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FNJ7[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Chars;                                                     // 0x0018(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UnicodeRange;                                              // 0x0024(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharsFilePath;                                             // 0x0030(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharsFileWildcard;                                         // 0x003C(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCreatePrintableOnly : 1;                                  // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bIncludeASCIIRange : 1;                                    // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KOAS[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ForegroundColor;                                           // 0x004C(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableDropShadow : 1;                                     // 0x005C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NDAR[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TexturePageWidth;                                          // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TexturePageMaxHeight;                                      // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                XPadding;                                                  // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                YPadding;                                                  // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExtendBoxTop;                                              // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExtendBoxBottom;                                           // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExtendBoxRight;                                            // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExtendBoxLeft;                                             // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableLegacyMode : 1;                                     // 0x0080(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E8IC[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Kerning;                                                   // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseDistanceFieldAlpha : 1;                                // 0x0088(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZMLA[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DistanceFieldScaleFactor;                                  // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceFieldScanRadiusScale;                              // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.LayerActorStats
// 0x0008
struct FLayerActorStats
{
	class UClass*                                      Type;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Total;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.MaterialAttributesInput
// 0x0000 (0x002C - 0x002C)
struct FMaterialAttributesInput : public FExpressionInput
{

};

// ScriptStruct Engine.EditorImportExportTestDefinition
// 0x0028
struct FEditorImportExportTestDefinition
{
	struct FFilePath                                   ImportFilePath;                                            // 0x0000(0x000C) (Edit, Config, NativeAccessSpecifierPublic)
	struct FString                                     ExportFileExtension;                                       // 0x000C(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipExport;                                               // 0x0018(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7KHY[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                           // 0x001C(0x000C) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CollectionParameterBase
// 0x0018
struct FCollectionParameterBase
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ID;                                                        // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CollectionVectorParameter
// 0x0010 (0x0028 - 0x0018)
struct FCollectionVectorParameter : public FCollectionParameterBase
{
	struct FLinearColor                                DefaultValue;                                              // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.NavCollisionCylinder
// 0x0014
struct FNavCollisionCylinder
{
	struct FVector                                     Offset;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	unsigned char                                      bModify : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bScale : 1;                                                // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bLock : 1;                                                 // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FMUM[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ParticleRandomSeedInfo
// 0x0018
struct FParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGetSeedFromInstance : 1;                                  // 0x0008(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bInstanceSeedIsIndex : 1;                                  // 0x0008(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bResetSeedOnEmitterLooping : 1;                            // 0x0008(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bRandomlySelectSeedArray : 1;                              // 0x0008(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KQA6[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        RandomSeeds;                                               // 0x000C(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.DelegateArray
// 0x000C
struct FDelegateArray
{
	TArray<struct FScriptDelegate>                     Delegates;                                                 // 0x0000(0x000C) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.PurchaseInfo
// 0x0030
struct FPurchaseInfo
{
	struct FString                                     Identifier;                                                // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayDescription;                                        // 0x0018(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayPrice;                                              // 0x0024(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.Node
// 0x0050
struct FNode
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ParentName;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0040(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAdvanced;                                                 // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZRCH[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.CustomProfile
// 0x0014
struct FCustomProfile
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FResponseChannel>                    CustomResponses;                                           // 0x0008(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.Vector4Distribution
// 0x001C
struct FVector4Distribution
{
	struct FDistributionLookupTable                    Table;                                                     // 0x0000(0x001C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.VectorCurve
// 0x00FC (0x0110 - 0x0014)
struct FVectorCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurves[0x3];                                          // 0x0014(0x00FC) (NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.TransformCurve
// 0x0330 (0x0344 - 0x0014)
struct FTransformCurve : public FAnimCurveBase
{
	struct FVectorCurve                                TranslationCurve;                                          // 0x0014(0x0110) (NativeAccessSpecifierPublic)
	struct FVectorCurve                                RotationCurve;                                             // 0x0124(0x0110) (NativeAccessSpecifierPublic)
	struct FVectorCurve                                ScaleCurve;                                                // 0x0234(0x0110) (NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// 0x0004 (0x0038 - 0x0034)
struct FSkeletalMeshComponentClothTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_GS9K[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SkeletalMeshComponentPostPhysicsTickFunction
// 0x0004 (0x0038 - 0x0034)
struct FSkeletalMeshComponentPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_8ZP4[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.BatchedPoint
// 0x0028
struct FBatchedPoint
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              PointSize;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemainingLifeTime;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DepthPriority;                                             // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2PD1[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.BatchedLine
// 0x0034
struct FBatchedLine
{
	struct FVector                                     Start;                                                     // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                       // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Thickness;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemainingLifeTime;                                         // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DepthPriority;                                             // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V57G[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.ClusterNode
// 0x0028
struct FClusterNode
{
	struct FVector                                     BoundMin;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                FirstChild;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BoundMax;                                                  // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                LastChild;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FirstInstance;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LastInstance;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RootMotionExtractionStep
// 0x000C
struct FRootMotionExtractionStep
{
	class UAnimSequence*                               AnimSequence;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartPosition;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndPosition;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimationTransitionRule
// 0x0010
struct FAnimationTransitionRule
{
	struct FName                                       RuleToExecute;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TransitionReturnVal;                                       // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X5CL[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TransitionIndex;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimationState
// 0x001C (0x0024 - 0x0008)
struct FAnimationState : public FAnimationStateBase
{
	TArray<struct FAnimationTransitionRule>            Transitions;                                               // 0x0008(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                StateRootNodeIndex;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartNotify;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndNotify;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FullyBlendedNotify;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.SlotEvaluationPose
// 0x002C
struct FSlotEvaluationPose
{
	TEnumAsByte<Engine_EAdditiveAnimationType>         AdditiveType;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1COK[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Weight;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CGFD[0x24];                                    // 0x0008(0x0024) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.PerBoneBlendWeight
// 0x0008
struct FPerBoneBlendWeight
{
	int                                                SourceIndex;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendWeight;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.PerBoneBlendWeights
// 0x000C
struct FPerBoneBlendWeights
{
	TArray<struct FPerBoneBlendWeight>                 BoneBlendWeights;                                          // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CircleElement2D
// 0x000C
struct FCircleElement2D
{
	struct FVector2D                                   Center;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// 0x0018 (0x001C - 0x0004)
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	struct FKey                                        AxisKey;                                                   // 0x0004(0x0010) (NativeAccessSpecifierPublic)
	struct FName                                       FunctionNameToBind;                                        // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BoxElement2D
// 0x0014
struct FBoxElement2D
{
	struct FVector2D                                   Center;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Width;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Angle;                                                     // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ConvexElement2D
// 0x000C
struct FConvexElement2D
{
	TArray<struct FVector2D>                           VertexData;                                                // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AggregateGeometry2D
// 0x0024
struct FAggregateGeometry2D
{
	TArray<struct FCircleElement2D>                    CircleElements;                                            // 0x0000(0x000C) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBoxElement2D>                       BoxElements;                                               // 0x000C(0x000C) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FConvexElement2D>                    ConvexElements;                                            // 0x0018(0x000C) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BranchFilter
// 0x000C
struct FBranchFilter
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BlendDepth;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.InputBlendPose
// 0x000C
struct FInputBlendPose
{
	TArray<struct FBranchFilter>                       BranchFilters;                                             // 0x0000(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BuilderPoly
// 0x001C
struct FBuilderPoly
{
	TArray<int>                                        VertexIndices;                                             // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Direction;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ItemName;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PolyFlags;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.TextureLODGroup
// 0x0034
struct FTextureLODGroup
{
	TEnumAsByte<Engine_ETextureGroup>                  Group;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SXK2[0xB];                                     // 0x0001(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LODBias;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_55WO[0x4];                                     // 0x0010(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumStreamedMips;                                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureMipGenSettings>         MipGenSettings;                                            // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XJHP[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MinLODSize;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLODSize;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MinMagFilter;                                              // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MipFilter;                                                 // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.MaterialSimplificationSettings
// 0x0044
struct FMaterialSimplificationSettings
{
	struct FIntPoint                                   BaseColorMapSize;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bNormalMap;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3CWQ[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntPoint                                   NormalMapSize;                                             // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MetallicConstant;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMetallicMap;                                              // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NH48[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntPoint                                   MetallicMapSize;                                           // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              RoughnessConstant;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRoughnessMap;                                             // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CPSM[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntPoint                                   RoughnessMapSize;                                          // 0x002C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              SpecularConstant;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpecularMap;                                              // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CN71[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntPoint                                   SpecularMapSize;                                           // 0x003C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.MaterialProxySettings
// 0x0064
struct FMaterialProxySettings
{
	struct FIntPoint                                   TextureSize;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureSizingType>             TextureSizingType;                                         // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SCYW[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GutterSpace;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNormalMap;                                                // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bMetallicMap;                                              // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DDVC[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MetallicConstant;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRoughnessMap;                                             // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HTJN[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RoughnessConstant;                                         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpecularMap;                                              // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FD62[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpecularConstant;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEmissiveMap;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bOpacityMap;                                               // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MJ4R[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntPoint                                   DiffuseTextureSize;                                        // 0x002C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FIntPoint                                   NormalTextureSize;                                         // 0x0034(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FIntPoint                                   MetallicTextureSize;                                       // 0x003C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FIntPoint                                   RoughnessTextureSize;                                      // 0x0044(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FIntPoint                                   SpecularTextureSize;                                       // 0x004C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FIntPoint                                   EmissiveTextureSize;                                       // 0x0054(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FIntPoint                                   OpacityTextureSize;                                        // 0x005C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.LevelSimplificationDetails
// 0x016C
struct FLevelSimplificationDetails
{
	bool                                               bCreatePackagePerAsset;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NQE1[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DetailsPercentage;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMaterialSimplificationSettings             StaticMeshMaterial;                                        // 0x0008(0x0044) (Deprecated, NativeAccessSpecifierPublic)
	struct FMaterialProxySettings                      StaticMeshMaterialSettings;                                // 0x004C(0x0064) (Edit, NativeAccessSpecifierPublic)
	bool                                               bOverrideLandscapeExportLOD;                               // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I7UE[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LandscapeExportLOD;                                        // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMaterialSimplificationSettings             LandscapeMaterial;                                         // 0x00B8(0x0044) (Deprecated, NativeAccessSpecifierPublic)
	struct FMaterialProxySettings                      LandscapeMaterialSettings;                                 // 0x00FC(0x0064) (Edit, NativeAccessSpecifierPublic)
	bool                                               bBakeFoliageToLandscape;                                   // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bBakeGrassToLandscape;                                     // 0x0161(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bGenerateMeshNormalMap;                                    // 0x0162(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bGenerateMeshMetallicMap;                                  // 0x0163(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bGenerateMeshRoughnessMap;                                 // 0x0164(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bGenerateMeshSpecularMap;                                  // 0x0165(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bGenerateLandscapeNormalMap;                               // 0x0166(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bGenerateLandscapeMetallicMap;                             // 0x0167(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bGenerateLandscapeRoughnessMap;                            // 0x0168(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bGenerateLandscapeSpecularMap;                             // 0x0169(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_91VX[0x2];                                     // 0x016A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.StreamableTextureInstance
// 0x0028
struct FStreamableTextureInstance
{
	unsigned char                                      UnknownData_4ITL[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.DynamicTextureInstance
// 0x000C (0x0034 - 0x0028)
struct FDynamicTextureInstance : public FStreamableTextureInstance
{
	class UTexture2D*                                  Texture;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttached;                                                 // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PX11[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OriginalRadius;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.PlayerMuteList
// 0x002C
struct FPlayerMuteList
{
	unsigned char                                      UnknownData_9IHP[0x24];                                    // 0x0000(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bHasVoiceHandshakeCompleted;                               // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ASSI[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                VoiceChannelIdx;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.IntegralKey
// 0x0008
struct FIntegralKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.IntegralCurve
// 0x0014 (0x0054 - 0x0040)
struct FIntegralCurve : public FIndexedCurve
{
	TArray<struct FIntegralKey>                        Keys;                                                      // 0x0040(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	int                                                DefaultValue;                                              // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bUseDefaultValueBeforeFirstKey;                            // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_E81B[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.NameCurveKey
// 0x000C
struct FNameCurveKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Value;                                                     // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CanvasUVTri
// 0x0060
struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   V0_UV;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                V0_Color;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   V1_Pos;                                                    // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   V1_UV;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                V1_Color;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   V2_Pos;                                                    // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   V2_UV;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                V2_Color;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.PhysicalSurfaceName
// 0x000C
struct FPhysicalSurfaceName
{
	TEnumAsByte<Engine_EPhysicalSurface>               Type;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7TUT[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Name;                                                      // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.SoundTrackKey
// 0x0010
struct FSoundTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Pitch;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Sound;                                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.VisibilityTrackKey
// 0x0008
struct FVisibilityTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EVisibilityTrackAction>         Action;                                                    // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EVisibilityTrackCondition>      ActiveCondition;                                           // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GFJS[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.PrimitiveMaterialRef
// 0x000C
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                                 // 0x0000(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDecalComponent*                             Decal;                                                     // 0x0004(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ElementIndex;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// 0x0014 (0x0018 - 0x0004)
struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
{
	struct FName                                       InputActionName;                                           // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EInputEvent>                    InputKeyEvent;                                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8AUK[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       FunctionNameToBind;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// 0x0010 (0x0014 - 0x0004)
struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
{
	struct FName                                       InputAxisName;                                             // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FunctionNameToBind;                                        // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.SoundConcurrencySettings
// 0x0010
struct FSoundConcurrencySettings
{
	int                                                MaxCount;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLimitToOwner : 1;                                         // 0x0004(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FADM[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EMaxConcurrentResolutionRule>   ResolutionRule;                                            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6SYR[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VolumeScale;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.InputAxisConfigEntry
// 0x0018
struct FInputAxisConfigEntry
{
	struct FName                                       AxisKeyName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAxisProperties                        AxisProperties;                                            // 0x0008(0x0010) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.FunctionExpressionOutput
// 0x0034
struct FFunctionExpressionOutput
{
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                                          // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionOutputId;                                        // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionOutput                           Output;                                                    // 0x0014(0x0020) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RawAnimSequenceTrack
// 0x0024
struct FRawAnimSequenceTrack
{
	TArray<struct FVector>                             PosKeys;                                                   // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuat>                               RotKeys;                                                   // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             ScaleKeys;                                                 // 0x0018(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimSequenceTrackContainer
// 0x0018
struct FAnimSequenceTrackContainer
{
	TArray<struct FRawAnimSequenceTrack>               AnimationTracks;                                           // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               TrackNames;                                                // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.GridBlendSample
// 0x001C
struct FGridBlendSample
{
	struct FEditorElement                              GridElement;                                               // 0x0000(0x0018) (NativeAccessSpecifierPublic)
	float                                              BlendWeight;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AssetImportInfo
// 0x0001
struct FAssetImportInfo
{
	unsigned char                                      UnknownData_Y44R[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.CollectionScalarParameter
// 0x0004 (0x001C - 0x0018)
struct FCollectionScalarParameter : public FCollectionParameterBase
{
	float                                              DefaultValue;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimNode_UseCachedPose
// 0x000C (0x002C - 0x0020)
struct FAnimNode_UseCachedPose : public FAnimNode_Base
{
	struct FPoseLink                                   LinkToCachingNode;                                         // 0x0020(0x000C) (NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// 0x000C (0x002C - 0x0020)
struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
{
	struct FPoseLink                                   LocalPose;                                                 // 0x0020(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// 0x000C (0x002C - 0x0020)
struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                             // 0x0020(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.DummySpacerCameraTypes
// 0x0001
struct FDummySpacerCameraTypes
{
	unsigned char                                      UnknownData_SJEH[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.StreamableManager
// 0x0078
struct FStreamableManager
{
	unsigned char                                      UnknownData_CQEQ[0x78];                                    // 0x0000(0x0078) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimInstanceProxy
// 0x0270
struct FAnimInstanceProxy
{
	unsigned char                                      UnknownData_LF6D[0x270];                                   // 0x0000(0x0270) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimSingleNodeInstanceProxy
// 0x00B0 (0x0320 - 0x0270)
struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData_1X8C[0xB0];                                    // 0x0270(0x00B0) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.NavCollisionBox
// 0x0018
struct FNavCollisionBox
{
	struct FVector                                     Offset;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Extent;                                                    // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.A2Pose
// 0x000C
struct FA2Pose
{
	TArray<struct FTransform>                          Bones;                                                     // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.A2CSPose
// 0x0010 (0x001C - 0x000C)
struct FA2CSPose : public FA2Pose
{
	unsigned char                                      UnknownData_W8JW[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              ComponentSpaceFlags;                                       // 0x0010(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// 0x0024
struct FParticleEvent_GenerateInfo
{
	TEnumAsByte<Engine_EParticleEventType>             Type;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6627[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Frequency;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ParticleFrequency;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      FirstTimeOnly : 1;                                         // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      LastTimeOnly : 1;                                          // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UseReflectedImpactVector : 1;                              // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bUseOrbitOffset : 1;                                       // 0x000C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8Q23[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CustomName;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleModuleEventSendToGame*>      ParticleModuleEventsToSendToGame;                          // 0x0018(0x000C) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// 0x0200
struct FGPUSpriteEmitterInfo
{
	class UParticleModuleRequired*                     RequiredModule;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleModuleSpawn*                        SpawnModule;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleModuleSpawnPerUnit*                 SpawnPerUnitModule;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleModule*>                     SpawnModules;                                              // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0AM8[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGPUSpriteLocalVectorFieldInfo              LocalVectorField;                                          // 0x0020(0x0070) (NativeAccessSpecifierPublic)
	struct FFloatDistribution                          VectorFieldScale;                                          // 0x0090(0x001C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFloatDistribution                          DragCoefficient;                                           // 0x00AC(0x001C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFloatDistribution                          PointAttractorStrength;                                    // 0x00C8(0x001C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFloatDistribution                          Resilience;                                                // 0x00E4(0x001C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                                     ConstantAcceleration;                                      // 0x0100(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     PointAttractorPosition;                                    // 0x010C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              PointAttractorRadiusSq;                                    // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OrbitOffsetBase;                                           // 0x011C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     OrbitOffsetRange;                                          // 0x0128(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   InvMaxSize;                                                // 0x0134(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              InvRotationRateScale;                                      // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLifetime;                                               // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxParticleCount;                                          // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EParticleScreenAlignment>       ScreenAlignment;                                           // 0x0148(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EParticleAxisLock>              LockAxisFlag;                                              // 0x0149(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FBRJ[0x2];                                     // 0x014A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bEnableCollision : 1;                                      // 0x014C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X7HS[0x3];                                     // 0x014D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EParticleCollisionMode>         CollisionMode;                                             // 0x0150(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PN4P[0x3];                                     // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRawDistributionVector                      DynamicColor;                                              // 0x0154(0x0028) (ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                       DynamicAlpha;                                              // 0x017C(0x0028) (ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionVector                      DynamicColorScale;                                         // 0x01A4(0x0028) (ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                       DynamicAlphaScale;                                         // 0x01CC(0x0028) (ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SSAF[0xC];                                     // 0x01F4(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.GPUSpriteResourceData
// 0x0150
struct FGPUSpriteResourceData
{
	TArray<struct FColor>                              QuantizedColorSamples;                                     // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FColor>                              QuantizedMiscSamples;                                      // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FColor>                              QuantizedSimulationAttrSamples;                            // 0x0018(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XE8P[0xC];                                     // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector4                                    ColorScale;                                                // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorBias;                                                 // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector4                                    MiscScale;                                                 // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector4                                    MiscBias;                                                  // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector4                                    SimulationAttrCurveScale;                                  // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector4                                    SimulationAttrCurveBias;                                   // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector4                                    SubImageSize;                                              // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector4                                    SizeBySpeed;                                               // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     ConstantAcceleration;                                      // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     OrbitOffsetBase;                                           // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     OrbitOffsetRange;                                          // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     OrbitFrequencyBase;                                        // 0x00D4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     OrbitFrequencyRange;                                       // 0x00E0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     OrbitPhaseBase;                                            // 0x00EC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     OrbitPhaseRange;                                           // 0x00F8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              GlobalVectorFieldScale;                                    // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GlobalVectorFieldTightness;                                // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PerParticleVectorFieldScale;                               // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PerParticleVectorFieldBias;                                // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DragCoefficientScale;                                      // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DragCoefficientBias;                                       // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ResilienceScale;                                           // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ResilienceBias;                                            // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionRadiusScale;                                      // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionRadiusBias;                                       // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionTimeBias;                                         // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OneMinusFriction;                                          // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotationRateScale;                                         // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraMotionBlurAmount;                                    // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EParticleScreenAlignment>       ScreenAlignment;                                           // 0x013C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EParticleAxisLock>              LockAxisFlag;                                              // 0x013D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2AY4[0x2];                                     // 0x013E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   PivotOffset;                                               // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1WEQ[0x8];                                     // 0x0148(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.TireFrictionScalePair
// 0x0008
struct FTireFrictionScalePair
{
	class UTireType*                                   TireType;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrictionScale;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.VectorDistribution
// 0x001C
struct FVectorDistribution
{
	struct FDistributionLookupTable                    Table;                                                     // 0x0000(0x001C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.DestructibleDebrisParameters
// 0x002C
struct FDestructibleDebrisParameters
{
	float                                              DebrisLifetimeMin;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DebrisLifetimeMax;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DebrisMaxSeparationMin;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DebrisMaxSeparationMax;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                        ValidBounds;                                               // 0x0010(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.SoundGroup
// 0x0018
struct FSoundGroup
{
	TEnumAsByte<Engine_ESoundGroup>                    SoundGroup;                                                // 0x0000(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OLO7[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DisplayName;                                               // 0x0004(0x000C) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAlwaysDecompressOnLoad : 1;                               // 0x0010(0x0001) BIT_FIELD (Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XSAM[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DecompressedDuration;                                      // 0x0014(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.SubtitleCue
// 0x0010
struct FSubtitleCue
{
	struct FText                                       TEXT;                                                      // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.LocalizedSubtitle
// 0x001C
struct FLocalizedSubtitle
{
	struct FString                                     LanguageExt;                                               // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSubtitleCue>                        Subtitles;                                                 // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bMature : 1;                                               // 0x0018(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bManualWordWrap : 1;                                       // 0x0018(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSingleLine : 1;                                           // 0x0018(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W6I9[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.NameCurve
// 0x000C (0x004C - 0x0040)
struct FNameCurve : public FIndexedCurve
{
	TArray<struct FNameCurveKey>                       Keys;                                                      // 0x0040(0x000C) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.MeshProxySettings
// 0x00D4
struct FMeshProxySettings
{
	int                                                ScreenSize;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMaterialProxySettings                      MaterialSettings;                                          // 0x0004(0x0064) (Edit, NativeAccessSpecifierPublic)
	int                                                TextureWidth;                                              // 0x0068(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TextureHeight;                                             // 0x006C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExportNormalMap;                                          // 0x0070(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bExportMetallicMap;                                        // 0x0071(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bExportRoughnessMap;                                       // 0x0072(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bExportSpecularMap;                                        // 0x0073(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMaterialSimplificationSettings             Material;                                                  // 0x0074(0x0044) (Deprecated, NativeAccessSpecifierPublic)
	float                                              MergeDistance;                                             // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HardAngleThreshold;                                        // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LightMapResolution;                                        // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRecalculateNormals;                                       // 0x00C4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUseClippingPlane;                                         // 0x00C5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EOZU[0x2];                                     // 0x00C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ClippingLevel;                                             // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AxisIndex;                                                 // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlaneNegativeHalfspace;                                   // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bBakeVertexData;                                           // 0x00D1(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AM5H[0x2];                                     // 0x00D2(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.MeshMergingSettings
// 0x0080
struct FMeshMergingSettings
{
	bool                                               bGenerateLightMapUV;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HKVI[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TargetLightMapUVChannel;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TargetLightMapResolution;                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImportVertexColors;                                       // 0x000C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bPivotPointAtZero;                                         // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bMergePhysicsData;                                         // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bMergeMaterials;                                           // 0x000F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMaterialProxySettings                      MaterialSettings;                                          // 0x0010(0x0064) (Edit, NativeAccessSpecifierPublic)
	bool                                               bBakeVertexData;                                           // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bExportNormalMap;                                          // 0x0075(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bExportMetallicMap;                                        // 0x0076(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bExportRoughnessMap;                                       // 0x0077(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bExportSpecularMap;                                        // 0x0078(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BBPJ[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MergedMaterialAtlasResolution;                             // 0x007C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.HierarchicalSimplification
// 0x016C
struct FHierarchicalSimplification
{
	unsigned char                                      UnknownData_EYYZ[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TransitionScreenSize;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSimplifyMesh;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OE6G[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMeshProxySettings                          ProxySetting;                                              // 0x000C(0x00D4) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FMeshMergingSettings                        MergeSetting;                                              // 0x00E0(0x0080) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              DesiredBoundRadius;                                        // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DesiredFillingPercentage;                                  // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinNumberOfActorsToBuild;                                  // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.NavGraphEdge
// 0x000C
struct FNavGraphEdge
{
	unsigned char                                      UnknownData_S0CZ[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.PreviewAttachedObjectPair
// 0x0024
struct FPreviewAttachedObjectPair
{
	TAssetPtr<class UObject>                           AttachedObject;                                            // 0x0000(0x0018) (UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                                     Object;                                                    // 0x0018(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       AttachedTo;                                                // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.PreviewAssetAttachContainer
// 0x000C
struct FPreviewAssetAttachContainer
{
	TArray<struct FPreviewAttachedObjectPair>          AttachedObjects;                                           // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct Engine.SmartNameMapping
// 0x004C
struct FSmartNameMapping
{
	unsigned char                                      UnknownData_852N[0x4C];                                    // 0x0000(0x004C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.NameMapping
// 0x0010
struct FNameMapping
{
	struct FName                                       NodeName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RigConfiguration
// 0x0010
struct FRigConfiguration
{
	class URig*                                        Rig;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNameMapping>                        BoneMappingTable;                                          // 0x0004(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BoneReductionSetting
// 0x000C
struct FBoneReductionSetting
{
	TArray<struct FName>                               BonesToRemove;                                             // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.ReferencePose
// 0x0014
struct FReferencePose
{
	struct FName                                       PoseName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          ReferencePose;                                             // 0x0008(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.TriIndices
// 0x000C
struct FTriIndices
{
	int                                                v0;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                v1;                                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                v2;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.TriMeshCollisionData
// 0x0028
struct FTriMeshCollisionData
{
	TArray<struct FVector>                             Vertices;                                                  // 0x0000(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FTriIndices>                         Indices;                                                   // 0x000C(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      bFlipNormals : 1;                                          // 0x0018(0x0001) BIT_FIELD (Transient, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JZ0Z[0xF];                                     // 0x0019(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.MorphTargetMap
// 0x000C
struct FMorphTargetMap
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMorphTarget*                                MorphTarget;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.BoneMirrorExport
// 0x0014
struct FBoneMirrorExport
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SourceBoneName;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<CoreUObject_EAxis>                     BoneFlipAxis;                                              // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9TTF[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimationGroupReference
// 0x000C
struct FAnimationGroupReference
{
	struct FName                                       GroupName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAnimGroupRole>                 GroupRole;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U37L[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimGroupInstance
// 0x0064
struct FAnimGroupInstance
{
	unsigned char                                      UnknownData_1VII[0x64];                                    // 0x0000(0x0064) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimTickRecord
// 0x0030
struct FAnimTickRecord
{
	class UAnimationAsset*                             SourceAsset;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FSQF[0x2C];                                    // 0x0004(0x002C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimExtractContext
// 0x0008
struct FAnimExtractContext
{
	bool                                               bExtractRootMotion;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_79UC[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentTime;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RootMotionSourceStatus
// 0x0001
struct FRootMotionSourceStatus
{
	unsigned char                                      Flags;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RootMotionSource
// 0x0080
struct FRootMotionSource
{
	unsigned char                                      UnknownData_OG1G[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           Priority;                                                  // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           LocalID;                                                   // 0x0012(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ERootMotionAccumulateMode>      AccumulateMode;                                            // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1BZO[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       InstanceName;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentTime;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreviousTime;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRootMotionSourceStatus                     Status;                                                    // 0x0030(0x0001) (NativeAccessSpecifierPublic)
	struct FRootMotionSourceSettings                   Settings;                                                  // 0x0031(0x0001) (NativeAccessSpecifierPublic)
	bool                                               bInLocalSpace;                                             // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bImpartsVelocityOnRemoval;                                 // 0x0033(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LW2L[0xC];                                     // 0x0034(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRootMotionMovementParams                   RootMotionParams;                                          // 0x0040(0x0040) (NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RootMotionSource_JumpForce
// 0x0030 (0x00B0 - 0x0080)
struct FRootMotionSource_JumpForce : public FRootMotionSource
{
	struct FRotator                                    Rotation;                                                  // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisableTimeout;                                           // 0x0094(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YZB6[0x3];                                     // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveVector*                                PathOffsetCurve;                                           // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 TimeMappingCurve;                                          // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3B90[0x10];                                    // 0x00A0(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.RootMotionSource_MoveToForce
// 0x0020 (0x00A0 - 0x0080)
struct FRootMotionSource_MoveToForce : public FRootMotionSource
{
	struct FVector                                     StartLocation;                                             // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bRestrictSpeedToExpected;                                  // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IU9J[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveVector*                                PathOffsetCurve;                                           // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.RootMotionSource_RadialForce
// 0x0030 (0x00B0 - 0x0080)
struct FRootMotionSource_RadialForce : public FRootMotionSource
{
	struct FVector                                     Location;                                                  // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                      LocationActor;                                             // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Strength;                                                  // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPush;                                                   // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bNoZForce;                                                 // 0x0099(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HRDA[0x2];                                     // 0x009A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 StrengthDistanceFalloff;                                   // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 StrengthOverTime;                                          // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9R1B[0xC];                                     // 0x00A4(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.RootMotionSource_ConstantForce
// 0x0010 (0x0090 - 0x0080)
struct FRootMotionSource_ConstantForce : public FRootMotionSource
{
	struct FVector                                     Force;                                                     // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3BQE[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SpriteCategoryInfo
// 0x0020
struct FSpriteCategoryInfo
{
	struct FName                                       Category;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0014(0x0018) ELEMENT_SIZE_MISMATCH (NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimNotifyTrack
// 0x0030
struct FAnimNotifyTrack
{
	struct FName                                       TrackName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                TrackColor;                                                // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M13I[0x18];                                    // 0x0018(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.WrappedStringElement
// 0x0014
struct FWrappedStringElement
{
	struct FString                                     Value;                                                     // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   LineExtent;                                                // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.TextSizingParameters
// 0x0024
struct FTextSizingParameters
{
	float                                              DrawX;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DrawY;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DrawXL;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DrawYL;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Scaling;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UFont*                                       DrawFont;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   SpacingAdjust;                                             // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.CanvasIcon
// 0x0014
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              U;                                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              V;                                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UL;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VL;                                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AutoCompleteNode
// 0x001C
struct FAutoCompleteNode
{
	int                                                IndexChar;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        AutoCompleteListIndices;                                   // 0x0004(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SKVZ[0xC];                                     // 0x0010(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.RuntimeCurveLinearColor
// 0x0154
struct FRuntimeCurveLinearColor
{
	struct FRichCurve                                  ColorCurves[0x4];                                          // 0x0000(0x0150) (NativeAccessSpecifierPublic)
	class UCurveLinearColor*                           ExternalCurve;                                             // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.DestructibleParameters
// 0x007C
struct FDestructibleParameters
{
	struct FDestructibleDamageParameters               DamageParameters;                                          // 0x0000(0x001C) (Edit, NativeAccessSpecifierPublic)
	struct FDestructibleDebrisParameters               DebrisParameters;                                          // 0x001C(0x002C) (Edit, NativeAccessSpecifierPublic)
	struct FDestructibleAdvancedParameters             AdvancedParameters;                                        // 0x0048(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FDestructibleSpecialHierarchyDepths         SpecialHierarchyDepths;                                    // 0x0058(0x0014) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FDestructibleDepthParameters>        DepthParameters;                                           // 0x006C(0x000C) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDestructibleParametersFlag                 Flags;                                                     // 0x0078(0x0004) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.POV
// 0x001C
struct FPOV
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              FOV;                                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimUpdateRateParameters
// 0x0070
struct FAnimUpdateRateParameters
{
	unsigned char                                      UnknownData_P6P2[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                UpdateRate;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EvaluationRate;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterpolateSkippedFrames;                                 // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bShouldUseLodMap;                                          // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bSkipUpdate;                                               // 0x000E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bSkipEvaluation;                                           // 0x000F(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TickedPoseOffestTime;                                      // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AdditionalTime;                                            // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2IFX[0x4];                                     // 0x0018(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BaseNonRenderedUpdateRate;                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      BaseVisibleDistanceFactorThesholds;                        // 0x0020(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<int, int>                                     LODToFrameSkipMap;                                         // 0x002C(0x0050) ELEMENT_SIZE_MISMATCH (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                MaxEvalRateForInterpolation;                               // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EUpdateRateShiftBucket>         ShiftBucket;                                               // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EXFC[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.AnimSlotDesc
// 0x000C
struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumChannels;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.AnimSlotInfo
// 0x0014
struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      ChannelWeights;                                            // 0x0008(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.MTDResult
// 0x0010
struct FMTDResult
{
	struct FVector                                     Direction;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.OverlapResult
// 0x0018
struct FOverlapResult
{
	TWeakObjectPtr<class AActor>                       Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                 // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LOCR[0x4];                                     // 0x0010(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bBlockingHit : 1;                                          // 0x0014(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HO96[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	unsigned char                                      bDistributionEnabled : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bForceContentExport : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bInitialized : 1;                                          // 0x0000(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V2K0[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Engine.LightmassDebugOptions
// 0x0010
struct FLightmassDebugOptions
{
	unsigned char                                      bDebugMode : 1;                                            // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bStatsEnabled : 1;                                         // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bGatherBSPSurfacesAcrossComponents : 1;                    // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3L26[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CoplanarTolerance;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseImmediateImport : 1;                                   // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bImmediateProcessMappings : 1;                             // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSortMappings : 1;                                         // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bDumpBinaryFiles : 1;                                      // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bDebugMaterials : 1;                                       // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bPadMappings : 1;                                          // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bDebugPaddings : 1;                                        // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOnlyCalcDebugTexelMappings : 1;                           // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bUseRandomColors : 1;                                      // 0x0009(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bColorBordersGreen : 1;                                    // 0x0009(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bColorByExecutionTime : 1;                                 // 0x0009(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_34KY[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ExecutionTimeDivisor;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Engine.PointDamageEvent
// 0x0090 (0x0098 - 0x0008)
struct FPointDamageEvent : public FDamageEvent
{
	float                                              Damage;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   ShotDirection;                                             // 0x000C(0x000C) (NativeAccessSpecifierPublic)
	struct FHitResult                                  HitInfo;                                                   // 0x0018(0x0080) (ContainsInstancedReference, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
